#pragma once

#include <functional>

#include <boost/signals2.hpp>

#include "event.hpp"

/** The main editor class.
 * This is the only class that a frontend needs to know about.
 *
 * Usage:
 * - Intialize the class with the command line arguments
 * - Forward all input to the editor
 * - Register callbacks for events that the frontend supports
 */
class editor {

public:
  /** Editor Constructor.
   * Initalize the editor with the command line arguments.
   * The frontend should just forward all command line arguments,
   * or first parse for its own arguments (if applicable) and then
   * forward the modified arguments.
   *
   * This function throws if any unrecognized parameters are found.
   * For a list of allowed parameters see TODO.
   *
   * \param argc : The number of arguments
   * \param argv : char string array of parameters
   */
  editor(int argc, char** argv) {}

  /** Send event to editor
   * Use this function to forward the events from the frontend
   * to the editor.
   * \see: event::event_types
   * \see: event::event
   *
   * \param ev : a boost variant object of type event::event,
   *              specifying the event that occured.
   */
  void send_event(const event::event ev);

  /** Register a callback for updates
   * Use this function to get informed about updates. That is,
   * every time the output changes, the supplied function will
   * be called. This can be used to reduce the work of the frontend.
   *
   * \param callback : the function to call on update
   */
  void register_callback(std::function<void()> callback) {
    update_sig_.connect(callback);
  }


private:
  /** The signal if the display changed */
  boost::signals2::signal<void ()> update_sig_;
};

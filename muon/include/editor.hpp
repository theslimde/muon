#pragma once

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
  editor(int argc, char** argv);

  /** Send event to editor
   * Use this function to forward the events from the frontend
   * to the editor.
   * \see: event::event_types
   * \see: event::event
   *
   * \param: ev : a boost variant object of type event::event,
   *              specifying the event that occured.
   */
  void send_event(const event::event ev);
};

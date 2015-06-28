#pragma once

#include <cstdint>

#include <boost/mpl/vector.hpp>
#include <boost/variant.hpp>

/** A list of possible events
 */
namespace event {
  /** A resize event
   * Use this event to inform the editor that the size of the display has changed
   * and supply the editor with the height and width of the current display in text characters.
   * This event can have multiple causes, e.g. a change of font size.
   */
  struct resize {
    std::uint32_t width;
    std::uint32_t height;
  };

  /** A text entry event
   * Use this event to feed entered text to the editor. See e.g. SDL2 documentation,
   * or the termbox documentation.
   */
  struct text_entry {
    std::uint32_t unicode_codepoint;
  };

  /** A key press event
   * TODO : document
   */
  struct key_pressed {
    std::uint32_t key_code;
  };

  /** A key release event
   */
  struct key_released {
    std::uint32_t key_code;
  };

  /** A boost mpl list of allowed events
   */
  typedef boost::mpl::vector<
    resize,
    text_entry,
    key_pressed,
    key_released
    > event_types;

  /** The event type
   * The event type is a boost variant type of events the editor supports.
   * To get an up-to-date list of events, @see: event_types
   */
  typedef boost::make_variant_over<event_types>::type event;
}

#include <termbox.h>
#include <stdexcept>
#include <string>

/** RAII wrapper for termbox
 */
class termbox {
public:

  termbox() {
    const auto result = tb_init();
    if(result < 0) {
      throw std::runtime_error("Couldn't initialize termbox");
    }

    tb_select_output_mode(TB_OUTPUT_256);
  }

  ~termbox() {
    tb_shutdown();
  }
};

int main() {

  termbox tb;

  tb_clear();
  tb_change_cell(1,0,'H',184, 240);
  tb_change_cell(2,0,'a',184, 240);
  tb_change_cell(3,0,'l',184, 240);
  tb_change_cell(4,0,'l',184, 240);
  tb_change_cell(5,0,'o',184, 240);
  tb_change_cell(6,0,' ',184, 240);
  tb_change_cell(7,0,'W',184, 240);
  tb_change_cell(8,0,'o',184, 240);
  tb_change_cell(9,0,'r',184, 240);
  tb_change_cell(10,0,'l',184, 240);
  tb_change_cell(11,0,'d',184, 240);
  tb_change_cell(12,0,'!',184, 240);

  const auto result = std::string("W: ") + std::to_string(tb_width()) + std::string(", H: ") + std::to_string(tb_height());

  int i = 0;
  for(auto c : result) {
    tb_change_cell(i,1, c, 184, 240);
    i++;
  }

  tb_present();

  tb_event ev;

  tb_poll_event(&ev);

	return 0;
}

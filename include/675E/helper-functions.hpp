#include "api.h"
extern bool alliance_selector_toggle, alliance_color, is_intake_running,
    is_flywheel_running;
extern int intake_counter;
extern std::string alliance_color_string;
extern pros::c::optical_rgb_s_t rgb_value;
extern int intake_get_velocity();
extern int single_shoot_function();
extern int double_shoot_function();
extern int triple_shoot_function();
extern int shoot_using_counter_function();
extern int shooter_function();
extern int spin_to_red_function();
extern int spin_to_blue_function();
void initialize_675E(void);
void alliance_selector_function(void);
void intake_in_fast(void);
void intake_in_slow(void);
void intake_out_fast(void);
void intake_out_slow(void);
void intake_stop(void);
void flywheel_low(void);
void flywheel_high(void);
void flywheel_ultra_high(void);
void triple_bang_bang_function();
void triple_bang_function();
void flywheel_stop(void);
void single_shoot(void);
void double_shoot(void);
void triple_shoot(void);
void triple_bang_bang(void);
void spin_to_red(void);
void spin_to_blue(void);
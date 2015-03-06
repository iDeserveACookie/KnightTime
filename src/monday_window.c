#include "monday_window.h"
#include "main.h"
#include <pebble.h>
#include <stdbool.h> 

// BEGIN AUTO-GENERATED UI CODE; DO NOT MODIFY
static GFont s_res_gothic_18_bold;
static GFont s_res_gothic_14;
static GFont s_res_gothic_14_bold;
static TextLayer *s_title;
static TextLayer *s_one;
static TextLayer *s_two;
static TextLayer *s_three;
static TextLayer *s_four;
static TextLayer *s_five;
static TextLayer *s_six;
static TextLayer *s_seven;
static TextLayer *s_eight;
static TextLayer *s_nine;
static bool hi = true;
static int window_positon = 1;
void up_click_handler(ClickRecognizerRef recognizer, void *context)
{
      if(window_positon <5){
       window_positon = window_positon +1;
     }
  window_pos();
}
 
void down_click_handler(ClickRecognizerRef recognizer, void *context)
{
  c_title("helilo");
   if(window_positon >1)
      window_positon = window_positon -1;
  window_pos();
}
 
void select_click_handler(ClickRecognizerRef recognizer, void *context)
{
  
}

void click_config_provider(void *context)
{
    window_single_click_subscribe(BUTTON_ID_UP, up_click_handler);
    window_single_click_subscribe(BUTTON_ID_DOWN, down_click_handler);
    window_single_click_subscribe(BUTTON_ID_SELECT, select_click_handler);

}
static void initialise_ui(void) {
  s_window = window_create();
  window_set_background_color(s_window, GColorBlack);
  window_set_fullscreen(s_window, true);
  
  s_res_gothic_18_bold = fonts_get_system_font(FONT_KEY_GOTHIC_18_BOLD);
  s_res_gothic_14 = fonts_get_system_font(FONT_KEY_GOTHIC_14);
  s_res_gothic_14_bold = fonts_get_system_font(FONT_KEY_GOTHIC_14_BOLD);
  // s_title
  s_title = text_layer_create(GRect(1, 1, 144, 20));
  text_layer_set_background_color(s_title, GColorBlack);
  text_layer_set_text_color(s_title, GColorWhite);
  text_layer_set_text(s_title, "Title");
  text_layer_set_text_alignment(s_title, GTextAlignmentCenter);
  text_layer_set_font(s_title, s_res_gothic_18_bold);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_title);
  
  // s_one
  s_one = text_layer_create(GRect(10, 20, 140, 15));
  if(hi){
    text_layer_set_background_color(s_one, GColorBlack);
    hi = false;
  }
  else{
    hi = true;
    text_layer_set_background_color(s_one, GColorWhite);
  }
    
  text_layer_set_text_color(s_one, GColorWhite);
  text_layer_set_text(s_one, "one");
  text_layer_set_font(s_one, s_res_gothic_14);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_one);
  
  // s_two
  s_two = text_layer_create(GRect(10, 35, 140, 15));
  text_layer_set_background_color(s_two, GColorBlack);
  text_layer_set_text_color(s_two, GColorWhite);
  text_layer_set_text(s_two, "two");
  text_layer_set_font(s_two, s_res_gothic_14);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_two);
  
  // s_three
  s_three = text_layer_create(GRect(10, 50, 140, 15));
  text_layer_set_background_color(s_three, GColorBlack);
  text_layer_set_text_color(s_three, GColorWhite);
  text_layer_set_text(s_three, "three");
  text_layer_set_font(s_three, s_res_gothic_14);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_three);
  
  // s_four
  s_four = text_layer_create(GRect(10, 66, 140, 15));
  text_layer_set_background_color(s_four, GColorBlack);
  text_layer_set_text_color(s_four, GColorWhite);
  text_layer_set_text(s_four, "four");
  text_layer_set_font(s_four, s_res_gothic_14);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_four);
  
  // s_five
  s_five = text_layer_create(GRect(10, 81, 140, 15));
  text_layer_set_background_color(s_five, GColorBlack);
  text_layer_set_text_color(s_five, GColorWhite);
  text_layer_set_text(s_five, "five");
  text_layer_set_font(s_five, s_res_gothic_14);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_five);
  
  // s_six
  s_six = text_layer_create(GRect(10, 96, 140, 15));
  text_layer_set_background_color(s_six, GColorBlack);
  text_layer_set_text_color(s_six, GColorWhite);
  text_layer_set_text(s_six, "six");
  text_layer_set_font(s_six, s_res_gothic_14);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_six);
  
  // s_seven
  s_seven = text_layer_create(GRect(10, 110, 140, 15));
  text_layer_set_background_color(s_seven, GColorBlack);
  text_layer_set_text_color(s_seven, GColorWhite);
  text_layer_set_text(s_seven, "seven");
  text_layer_set_font(s_seven, s_res_gothic_14);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_seven);
  
  // s_eight
  s_eight = text_layer_create(GRect(10, 125, 140, 15));
  text_layer_set_background_color(s_eight, GColorBlack);
  text_layer_set_text_color(s_eight, GColorWhite);
  text_layer_set_text(s_eight, "eight");
  text_layer_set_font(s_eight, s_res_gothic_14);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_eight);
  
  // s_nine
  s_nine = text_layer_create(GRect(10, 140, 140, 15));
  text_layer_set_background_color(s_nine, GColorBlack);
  text_layer_set_text_color(s_nine, GColorWhite);
  text_layer_set_text(s_nine, "nine");
  text_layer_set_font(s_nine, s_res_gothic_14);
  layer_add_child(window_get_root_layer(s_window), (Layer *)s_nine);
  window_set_click_config_provider(s_window, 	click_config_provider);
}

static void destroy_ui(void) {
  window_destroy(s_window);
  text_layer_destroy(s_title);
  text_layer_destroy(s_one);
  text_layer_destroy(s_two);
  text_layer_destroy(s_three);
  text_layer_destroy(s_four);
  text_layer_destroy(s_five);
  text_layer_destroy(s_six);
  text_layer_destroy(s_seven);
  text_layer_destroy(s_eight);
  text_layer_destroy(s_nine);
}
// END AUTO-GENERATED UI CODE

static void handle_window_unload(Window* window) {
  destroy_ui();
}

void show_monday_window(void) {
  initialise_ui();
  window_set_window_handlers(s_window, (WindowHandlers) {
    .unload = handle_window_unload,
  });
  window_stack_push(s_window, true);
}

void hide_monday_window(void) {
  window_stack_remove(s_window, true);
}

void c_title(char s[]){
  text_layer_set_text( s_title, s);
}
void c_one(char s[], bool b){
  text_layer_set_text( s_one, s);
  if(b)
    text_layer_set_font(s_one, s_res_gothic_14_bold);
  else
    text_layer_set_font(s_one, s_res_gothic_14);
}
void c_two(char s[], bool b){
  text_layer_set_text( s_two, s);
  if(b)
    text_layer_set_font(s_two, s_res_gothic_14_bold);
  else 
    text_layer_set_font(s_two, s_res_gothic_14);
}
void c_three(char s[], bool b){
  text_layer_set_text( s_three, s);
  if(b)
    text_layer_set_font(s_three, s_res_gothic_14_bold);
  else 
    text_layer_set_font(s_three, s_res_gothic_14);
}
void c_four(char s[], bool b){
  text_layer_set_text( s_four, s);
  if(b)
    text_layer_set_font(s_four, s_res_gothic_14_bold);
  else 
    text_layer_set_font(s_four, s_res_gothic_14);
}
void c_five(char s[], bool b){
  text_layer_set_text( s_five, s);
  if(b)
    text_layer_set_font(s_five, s_res_gothic_14_bold);
  else
    text_layer_set_font(s_five, s_res_gothic_14);
}
void c_six(char s[], bool b){
  text_layer_set_text( s_six, s);
  if(b)
    text_layer_set_font(s_six, s_res_gothic_14_bold);
  else{
    text_layer_set_font(s_six, s_res_gothic_14);
  }
}
void c_seven(char s[], bool b){
  text_layer_set_text( s_seven, s);
  if(b)
    text_layer_set_font(s_seven, s_res_gothic_14_bold);
  else
    text_layer_set_font(s_seven, s_res_gothic_14);
}
void c_eight(char s[], bool b){
  text_layer_set_text(s_eight, s);
  if(b)
    text_layer_set_font(s_eight, s_res_gothic_14_bold);
  else
    text_layer_set_font(s_eight, s_res_gothic_14);
}
void c_nine(char s[], bool b){
  text_layer_set_text(s_nine, s);
  if(b)
    text_layer_set_font(s_one, s_res_gothic_14_bold);
  else
    text_layer_set_font(s_one, s_res_gothic_14);
}
void b_one(bool b){
  if(b)
    text_layer_set_font(s_one, s_res_gothic_14_bold);
  else
    text_layer_set_font(s_one, s_res_gothic_14);
}
void b_two(bool b){
  if(b)
    text_layer_set_font(s_two, s_res_gothic_14_bold);
  else
    text_layer_set_font(s_two, s_res_gothic_14);
}
void b_three(bool b){
  if(b)
    text_layer_set_font(s_three, s_res_gothic_14_bold);
  else
    text_layer_set_font(s_three, s_res_gothic_14);
}
void b_four(bool b){
  if(b)
    text_layer_set_font(s_four, s_res_gothic_14_bold);
  else
    text_layer_set_font(s_four, s_res_gothic_14);
}
void b_five(bool b){
  if(b)
    text_layer_set_font(s_five, s_res_gothic_14_bold);
  else
    text_layer_set_font(s_five, s_res_gothic_14);
}
void b_six(bool b){
  if(b)
    text_layer_set_font(s_six, s_res_gothic_14_bold);
  else
    text_layer_set_font(s_six, s_res_gothic_14);
}
void b_seven(bool b){
  if(b)
    text_layer_set_font(s_seven, s_res_gothic_14_bold);
  else
    text_layer_set_font(s_seven, s_res_gothic_14);
}
void b_eight(bool b){
  if(b)
    text_layer_set_font(s_eight, s_res_gothic_14_bold);
  else
    text_layer_set_font(s_eight, s_res_gothic_14);
}
void b_nine(bool b){
  if(b)
    text_layer_set_font(s_nine, s_res_gothic_14_bold);
  else
    text_layer_set_font(s_nine, s_res_gothic_14);
}
static int time_hours;
static int time_minutes;
static bool pm;
Window* window;

void init_a(char s[]){
  c_title(s);
  c_one("P 1 8-8:45",false);
  c_two("P 2 8:50-9:35",false);
  c_three("Chapel 9:40-10:15",false);
  c_four("P 3 10:20-11:05",false);
  c_five("P 4 11:10-11:55",false);
  c_six("5A 12:00-12:45",false);
  c_seven("5B 12:50-1:35",false);
  c_eight("P 6 1:40-2:25",false);
  c_nine("P 7 2:30-3:15",false);
}
void init_tue(){
  c_title("Tuesday");
  c_one("P 2 8:00-9:15",false);
  c_two("Chapel 9:20-10:25",false);
  c_three("P 3 10:30-11:45 ",false);
  c_four("5A 11:50-12:35",false);
  c_five("5B 12:40-1:25",false);
  c_six("P 1 1:30-2:45",false);
  c_seven("",false);
  c_eight("",false);
  c_nine("",false);
}
void init_wed(){
  c_title("Wensday");
  c_one("P 7 8-9:15",false);
  c_two("Chapel 9:20-10:25",false);
  c_three("P 4 10:30-11:45 ",false);
  c_four("5A 11:50-12:35",false);
  c_five("5B 12:40-1:25",false);
  c_six("P 6 1:30-2:45",false);
  c_seven("",false);
  c_eight("",false);
  c_nine("",false);
}

void get_times(){
  time_t temp = time(NULL); 
  struct tm *tick_time = localtime(&temp);
  char hours[] = "00";
  char minutes[] = "00";
  strftime(hours, sizeof("00"), "%H", tick_time);
  int num_hours = atoi(hours);
  switch(num_hours){
    case 1: time_hours = 1; pm = false; break;
    case 2: time_hours = 2; pm = false; break;
    case 3: time_hours = 3; pm = false; break;
    case 4: time_hours = 4; pm = false; break;
    case 5: time_hours = 5; pm = false; break;
    case 6: time_hours = 6; pm = false; break;
    case 7: time_hours = 7; pm = false; break;
    case 8: time_hours = 8; pm = false; break;
    case 9: time_hours = 9; pm = false; break;
    case 10: time_hours = 10; pm = false; break;
    case 11: time_hours = 11; pm = false; break;
    case 12: time_hours = 12; pm = true;break;
    case 13: time_hours = 1; pm = true; break;
    case 14: time_hours = 2; pm = true; break;
    case 15: time_hours = 3; pm = true; break;
    case 16: time_hours = 4; pm = true; break;
    case 17: time_hours = 5; pm = true; break;
    case 18: time_hours = 6; pm = true; break;
    case 19: time_hours = 7; pm = true; break;
    case 20: time_hours = 8; pm = true; break;
    case 21: time_hours = 9; pm = true; break;
    case 22: time_hours = 10; pm = true; break;
    case 23: time_hours = 11; pm = true; break;
    case 24: time_hours = 12; pm = false; break;
    default : c_nine("FML", true);
  }
  strftime(minutes, sizeof("00"),"%M", tick_time);
  time_minutes = atoi(minutes);
  
  char day_word[] = "Mon";
  strftime(day_word, sizeof("Mon"),"%a", tick_time);
  if(day_word[0] =='T' && day_word[1] == 'h'){
    window_positon = 4;
  }
  if(day_word[0] == 'T' && day_word[1] == 'u')
    window_positon = 2;
  if(day_word[0] == 'M')
    window_positon = 1;
  if(day_word[0] == 'W')
    window_positon = 3;
  if(day_word[0] == 'F')
    window_positon = 5;
  window_pos();
 }

void find_day(){
}
void unbold(){
  b_one(false);
  b_two(false);
  b_three(false);
  b_four(false);
  b_five(false);
  b_six(false);
  b_seven(false);
  b_eight(false);
  b_nine(false);
}
void a_bold(){
      if(time_hours ==8&&pm==false){
        if(time_minutes <=45){
          unbold();
          b_one(true);
        }else
          unbold();
          b_two(true);
      }
      if(time_hours ==9&&pm==false){
        if(time_minutes<=35){
          unbold();
          b_two(true);
        }else{
          unbold();
          b_three(true);
        }
      }
      if(time_hours ==10&&pm==false){
        if(time_minutes<=15){
          unbold();
          b_three(true);
        }else{
          unbold();
          b_four(true);
        }
      }
      if(time_hours ==11&&pm==false){
        if(time_minutes<=5){
          unbold();
          b_four(true);
        }
        if(time_minutes>5&&time_minutes<=55){
          unbold();
          b_five(true);
        }
        if(time_minutes>55){
          unbold();
          b_six(true);
        }
      }
      if(time_hours ==12&&pm==true){
        if(time_minutes<=45){
          unbold();
          b_six(true);
        }else{
          unbold();
          b_seven(true);
        }
      }
      if(time_hours ==1&&pm==true){
        if(time_minutes<=35){
          unbold();
          b_seven(true);
        }
        else{
          unbold();
          b_eight(true);
        }
      }
      if(time_hours ==2&&pm==true){
        if(time_minutes<=25){
          unbold();
          b_eight(true);
        }
        else{
          unbold();
          b_nine(true);
        }
      }
      if(time_hours ==3&&pm==true){
        if(time_minutes<=15){
          unbold();
          b_nine(true);
        }
      }
}
void tuesday_bold(){
	unbold();
  if(time_hours ==8&&pm==false){
        b_one(true);
      }
      if(time_hours ==9&&pm==false){
        if(time_minutes <= 15){
			b_one(true);
		}else{
			b_two(true);
		}
      }
      if(time_hours ==10&&pm==false){
        if(time_minutes <= 25){
			b_two(true);
		}else{
			b_three(true);
		}
      }
      if(time_hours ==11&&pm==false){
        if(time_minutes<=45){
			b_three(true);
		}else{
			b_four(true);
		}
      }
      if(time_hours ==12&&pm==true){
        if(time_minutes<=35){
			b_four(true);
		}else{
			b_five(true);
		}
      }
      if(time_hours ==1&&pm==true){
        if(time_minutes<=25){
			b_five(true);
		}else{
			b_six(true);
		}
      }
      if(time_hours ==2&&pm==true){
        if(time_minutes<=45){
			b_six(true);
		}
      }
      if(time_hours ==3&&pm==true){
        
      }
}
void wedsday_bold(){
  if(time_hours ==8&&pm==false){
		unbold();
        b_one(true);
      }
      if(time_hours==9&&pm==false){
        if(time_minutes <= 15){
			unbold();
			b_one(true);
		}else{
			unbold();
			//Debug
			//char buf[64];
			//snprintf(buf, 64, "%d", time_minutes);
			//c_three(buf, true);
			b_two(true);
		}
      }
      if(time_hours ==10&&pm==false){
        if(time_minutes<=25){
			unbold();
			b_two(true);
		}else{
			unbold();
			b_three(true);
		}
      }
      if(time_hours ==11&&pm==false){
        if(time_minutes<=45){
			unbold();
			b_three(true);
		}else{
			unbold();
			b_four(true);
		}
      }
      if(time_hours ==12&&pm==true){
        if(time_minutes<=35){
			unbold();
			b_four(true);
		}else{
			unbold();
			b_five(true);
		}
      }
      if(time_hours ==1&&pm==true){
		  unbold();
        if(time_minutes<=25){
			b_five(true);
		}else{
			b_six(true);
		}
      }
      if(time_hours ==2&&pm==true){
		  unbold();
		  if(time_minutes<=45){
			  b_six(true);
		  }
      }
      if(time_hours ==3&&pm==true){
        unbold();
      }
}
void window_pos(){
  switch(window_positon){
    case 1: init_a("Monday");a_bold();break;
    case 2: init_tue();tuesday_bold();break;
    case 3: init_wed();wedsday_bold();break;
    case 4: init_a("Thursday");a_bold();break;
    case 5: init_a("Friday!");a_bold();break;
  }
}
void tick_handler(struct tm *tick_time, TimeUnits units_changed) {
  get_times();
}
void init(){
  show_monday_window();
  find_day();
  get_times();
  tick_timer_service_subscribe(MINUTE_UNIT, tick_handler);
  
    
}

void deinit(){
  hide_monday_window();
}

int main(void){
  init();
  app_event_loop();
  deinit();
}
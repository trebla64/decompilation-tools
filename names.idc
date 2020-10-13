#include <idc.idc>

static initNames(void)
{
    // sort on
    MakeName(0x004014DF, "fptc");
    MakeName(0x0040194E, "dsound_sound_load");
    MakeName(0x00401999, "dsound_sound_start");
    MakeName(0x00401A05, "dsound_sound_stop");
    MakeName(0x00401B34, "create_ddraw");
    MakeName(0x00401B57, "dd_release");
    MakeName(0x00401B6E, "video_create_ddcontext");
    MakeName(0x00401B7F, "ddraw_count_display_modes_callback");
    MakeName(0x00401B8B, "ddraw_count_display_modes");
    MakeName(0x00401BBA, "ddraw_get_display_modes_callback");
    MakeName(0x00401C49, "ddraw_get_display_modes");
    MakeName(0x004034FC, "ddraw_lock_psurface");
    MakeName(0x00403575, "ddraw_unlock_psurface");
    MakeName(0x00403718, "video_set_gdi_interface");
    MakeName(0x004041F1, "return_1");
    MakeName(0x0040447F, "create_dinput");
    MakeName(0x004045C2, "dispose_dinput");
    MakeName(0x00404642, "acquire_dinput_mouse");
    MakeName(0x004046CD, "unacquire_dinput_mouse");
    MakeName(0x004046E0, "read_input_state");
    MakeName(0x004046EA, "read_mouse_state");
    MakeName(0x0040477F, "read_keyboard_state");
    MakeName(0x00404ACD, "free_dsound");
    MakeName(0x00404B68, "audio_prepare_sound");
    MakeName(0x00404CD3, "sound_stop");
    MakeName(0x00404D4E, "has_sound_finished");
    MakeName(0x00404D7A, "audio_play_sound");
    MakeName(0x00404DD2, "dsound_set_frequency");
    MakeName(0x00404DED, "dsound_set_pan");
    MakeName(0x00404E08, "dsound_set_volume");
    MakeName(0x00404E53, "j_create_dsound_0");
    MakeName(0x00404E58, "dispose_dsound");
    MakeName(0x00404E8C, "get_num_dsound_devices");
    MakeName(0x00404F29, "create_dsound_0");
    MakeName(0x004053BB, "enum_displaymodes_callback");
    MakeName(0x00405409, "create_game_window");
    MakeName(0x004054A3, "update_palette");
    MakeName(0x004056BC, "video_create");
    MakeName(0x00406386, "game_loop");
    MakeName(0x00406520, "set_window_pos_wrapper");
    MakeName(0x00406C12, "free_wrapper");
    MakeName(0x00406C24, "j_ReleaseCapture");
    MakeName(0x00406D13, "j_StartOpenLoco");
    MakeName(0x00406FBA, "enqueue_key");
    MakeName(0x00406FEC, "enqueue_input");
    MakeName(0x00407028, "get_next_key");
    MakeName(0x0040704B, "DialogFunc");
    MakeName(0x00407247, "dequeue_input");
    MakeName(0x0040726D, "ui_process_messages");
    MakeName(0x00407366, "wndproc");
    MakeName(0x004078B5, "post_quit_message");
    MakeName(0x004078BE, "get_system_time");
    MakeName(0x004078F8, "j_timeGetTime");
    MakeName(0x004078FE, "get_system_info");
    MakeName(0x00407BA3, "set_cursor_wrapper");
    MakeName(0x00407BB4, "load_cursor_wrapper");
    MakeName(0x00407BC5, "read_registry_things");
    MakeName(0x00407FCD, "get_cursor_pos_wrapper");
    MakeName(0x00407FFD, "check_mutex");
    MakeName(0x004080BB, "progressbar_create");
    MakeName(0x00408163, "loadingwindow_destory");
    MakeName(0x0040817B, "loadingwindow_setrange");
    MakeName(0x004081AD, "progressbar_set");
    MakeName(0x004081FE, "read_file_wrapper");
    MakeName(0x00408271, "write_file_wrapper");
    MakeName(0x00408297, "close_handle_wrapper");
    MakeName(0x004082AD, "create_file_for_reading");
    MakeName(0x004082CA, "create_file_for_writing");
    MakeName(0x0040830E, "find_first_file_wrapper");
    MakeName(0x0040831D, "find_next_file_wrapper");
    MakeName(0x0040832C, "find_close_wrapper");
    MakeName(0x00408337, "get_current_directory_wrapper");
    MakeName(0x0040FBD9, "SEH_12A719C");
    MakeName(0x0040FC61, "SEH_12A7E8C");
    MakeName(0x0040FC79, "SEH_12A7F2C");
    MakeName(0x0042A4A8, "windowmgr::open_messages");
    MakeName(0x00431315, "do_game_command");
    MakeName(0x00431A8A, "window_error_open");
    MakeName(0x00431E32, "toggle_pause");
    MakeName(0x00431E9B, "companyWindow::enableRenameByCaption");
    MakeName(0x004340B3, "companyWindow::status::viewportRotate");
    MakeName(0x0043425D, "companyWindow::details::viewportRotate");
    MakeName(0x004343BC, "companyWindow::repositionTabs");
    MakeName(0x004343FC, "companyWindow::toggleRenameCompany");
    MakeName(0x00434413, "companyWindow::drawTabs");
    SetType(0x00434413, "void __usercall companyWindow::drawTabs(window_t *self@<esi>, drawpixelinfo_t *dpi@<edi>);");
    MakeName(0x0043454F, "companyWindow::openCompany");
    MakeName(0x004345EE, "companyWindow::openFinances");
    MakeName(0x00434731, "companyWindow::openChallenge");
    MakeName(0x004347D0, "companyWindow::openUnknownAlt");
    MakeName(0x00434F52, "open_company_face_selection");
    MakeName(0x00435ACC, "companyWindow::openAndSetName");
    MakeName(0x00437D60, "performanceToRating");
    SetType(0x00437D60, "__int16 __usercall performanceToRating@<ax>(__int16 performanceIndex@<ax>);");
    MakeName(0x00438047, "companymgr::getOwnerStatus");
    MakeName(0x00438A6C, "gui_init");
    MakeName(0x004392BD, "resize_interface");
    MakeName(0x0043A19F, "ui__toolbar_top__roads_menu_mousedown");
    MakeName(0x0043A28C, "ui__toolbar_top__roads_menu_dropdown");
    MakeName(0x0043A2B0, "ui__toolbar_top__railroad_menu_mousedown");
    MakeName(0x0043A39F, "ui__toolbar_top__railroad_menu_dropdown");
    MakeName(0x0043A3C3, "ui__toolbar_top__terraform_menu_mousedown");
    MakeName(0x0043A4A8, "ui__toolbar_top__terraform_menu_dropdown");
    MakeName(0x0043A4E9, "ui__toolbar_top__stations_menu_mousedown");
    MakeName(0x0043A596, "ui__toolbar_top__stations_menu_dropdown");
    MakeName(0x0043A5C5, "ui__toolbar_top__rotate_menu_mouse_down");
    MakeName(0x0043A624, "ui__toolbar_top__rotate_menu_dropdown");
    MakeName(0x0043A78E, "ui__toolbar_top__zoom_menu_mousedown");
    MakeName(0x0043A86D, "ui__toolbar_top__zoom_menu_on_dropdown");
    MakeName(0x0043A8CE, "ui__toolbar_top__towns_menu_mousedown");
    MakeName(0x0043A932, "ui__toolbar_top__towns_menu_dropdown");
    MakeName(0x0043A965, "ui__toolbar_top__port_menu_mousedown");
    MakeName(0x0043AA0A, "ui__toolbar_top__port_menu_dropdown");
    MakeName(0x0043ABCB, "ui__toolbar_top__vehicles_menu_mousedown");
    MakeName(0x0043ACEF, "ui__toolbar_top__vehicles_menu_dropdown");
    MakeName(0x0043AD1F, "ui__toolbar_top__build_vehicles_menu_mousedown");
    MakeName(0x0043ADC7, "ui__toolbar_top__build_vehicles_menu_dropdown");
    MakeName(0x0043ADF6, "ui__toolbar_top__view_menu_mousedown");
    MakeName(0x0043AF37, "ui__toolbar_top__view_menu_dropdown");
    MakeName(0x0043B04B, "ui__toolbar_top__audio_menu_mousedown");
    MakeName(0x0043B0B8, "ui__toolbar_top__audio_menu_dropdown");
    MakeName(0x0043B0F7, "ui__toolbar_top__loadsave_menu_mousedown");
    MakeName(0x0043B154, "ui__toolbar_top__loadsave_menu_dropdown");
    MakeName(0x0043B26C, "about_window_open");
    MakeName(0x0043BFCB, "load_or_quit_game");
    MakeName(0x0043C590, "show_tutorial");
    MakeName(0x0043C70E, "stop_tutorial");
    MakeName(0x0043C7CF, "write_tutorial_input");
    MakeName(0x0043C88C, "reset_all");
    MakeName(0x0043C90C, "generate_scenario_landscape");
    MakeName(0x0043CB9F, "editor_init");
    MakeName(0x0043CD35, "window_resize_gui_scenario_editor");
    MakeName(0x0043D7DC, "show_scenario_editor");
    MakeName(0x0043DA43, "open_landscape_generation");
    MakeName(0x0043DD50, "ui::landscape_generation::switch_dimensions");
    MakeName(0x0043ECA4, "ui::landscape_generation::draw_tabs");
    MakeName(0x0043EE58, "open_scenario_options");
    MakeName(0x004400A4, "ui::scenario_options::drawTabs");
    MakeName(0x004402F4, "update_misc_things");
    MakeName(0x004405CD, "update_misc_thing");
    MakeName(0x00440BEB, "create_black_smoke");
    MakeName(0x004412CE, "init_directories");
    MakeName(0x00441400, "startup_checks");
    MakeName(0x004414C5, "check_files_integrity");
    MakeName(0x0044154B, "check_file_paths");
    MakeName(0x0044155B, "check_file_path");
    MakeName(0x004416B5, "get_file_path");
    MakeName(0x00441A6C, "config_read");
    MakeName(0x00441BB8, "config_write");
    MakeName(0x00441C26, "save_scenario_or_game");
    MakeName(0x00441FA7, "loadTitleSequence");
    MakeName(0x00442BBF, "write_cs_chunk");
    MakeName(0x004436E0, "scenario_write_checksum");
    MakeName(0x00443807, "window_levelselect_init_tabs");
    MakeName(0x0044400C, "scenario_start");
    MakeName(0x004442C4, "load_title");
    MakeName(0x0044452F, "load_scenario_index");
    MakeName(0x00444B61, "scenario_scores_save");
    MakeName(0x00444C1B, "scenario_basic_name_compare");
    MakeName(0x00444D27, "scenario_basic_name_insertion_sort_single");
    MakeName(0x00445A30, "get_tutorial_scenario_filename");
    MakeName(0x00445AB9, "window_load_game_open");
    MakeName(0x00446CF4, "editor_object_flags_free");
    MakeName(0x00446E2F, "up_one_level");
    MakeName(0x00446E62, "append_directory_name");
    MakeName(0x00446F6B, "window_prompt_ok_cancel_open");
    MakeName(0x0044733C, "load_g1");
    MakeName(0x00447485, "gfx::clear");
    SetType(0x00447485, "void __usercall gfx__clear(drawpixelinfo_t *dpi@<edi>, __int32 fill@<ebp>);");	
    MakeName(0x004474BA, "gfx_fill_rect");
    SetType(0x004474BA, "void __usercall gfx_fill_rect(__int16 left@<ax>, __int16 top@<cx>, __int16 right@<bx>, __int16 bottom@<dx>, int colour@<ebp>, drawpixelinfo_t *dpi@<edi>);");
    MakeName(0x00447C21, "pixel_is_present_bmp");
    MakeName(0x00448C79, "draw_image");
    MakeName(0x00448D90, "gfx_draw_sprite_palete_set");
    MakeName(0x00448FB3, "gfx_bmp_sprite_to_buffer");
    MakeName(0x0044933B, "gfx_rle_sprite_to_buffer");
    MakeName(0x00451025, "gfx_draw_string");
    SetType(0x00451025, "void __usercall gfx_draw_string(__int8 colour@<al>, __int16 y@<dx>, __int16 x@<cx>);");
    MakeName(0x00451DCB, "copy_rect");
    MakeName(0x00452001, "load_cursors");
    MakeName(0x0045235D, "init_display");
    MakeName(0x004523F4, "load_palette");
    MakeName(0x00452457, "gfx_transpose_palette");
    MakeName(0x004524C1, "update_display");
    MakeName(0x00452667, "save_screenshot");
    MakeName(0x00452A5B, "DrawLightRain");
    MakeName(0x00452AB4, "DrawHeavyRain");
    MakeName(0x00452B5F, "update_rain_animation");
    MakeName(0x00452BA4, "DrawRainAnimation");
    MakeName(0x00452BED, "DrawRainWindow");
    MakeName(0x00452D1A, "redraw_peep_and_rain");
    MakeName(0x00452DA4, "gfx_draw_line");
    MakeName(0x0045308A, "gfx_draw_line_on_buffer");
    MakeName(0x004530F8, "set_vehicle_type_image_max_sizes");
    MakeName(0x004577FF, "open_industry_list");
    MakeName(0x00459E54, "get_map_coordinates_from_pos");
    MakeName(0x0045A0B3, "viewport_widget_draw");
    MakeName(0x0045A0E7, "viewport_render");
    MakeName(0x0045A1A4, "viewport_paint");
    MakeName(0x0045A3EB, "paint1a");
    MakeName(0x0045A474, "paint1b");
    MakeName(0x0045A4FD, "paint1c");
    MakeName(0x0045A586, "paint1d");
    MakeName(0x0045A711, "paint2a");
    MakeName(0x0045A892, "paint2b");
    MakeName(0x0045AA21, "paint2c");
    MakeName(0x0045ABB2, "paint2d");
    MakeName(0x0045AD43, "paint3a");
    MakeName(0x0045AEE5, "paint3b");
    MakeName(0x0045B098, "paint3c");
    MakeName(0x0045B250, "paint3d");
    MakeName(0x0045B405, "paint4a");
    MakeName(0x0045B58D, "paint4b");
    MakeName(0x0045B721, "paint4c");
    MakeName(0x0045B8B9, "paint4d");
    MakeName(0x0045E779, "paint_attach_to_previous_ps");
    MakeName(0x0045E7B5, "paint_arrange_structs");
    MakeName(0x0045EFDB, "viewport_zoom_in");
    MakeName(0x0045F015, "viewport_zoom_out");
    MakeName(0x0045F04F, "viewport_rotate_right");
    MakeName(0x0045F0ED, "viewport_rotate_left");
    MakeName(0x0045F1A7, "screen_get_map_xy");
    MakeName(0x0045FCE6, "ui::screenGetMapXyWithZ");
    SetType(0x0045FCE6, "void __usercall ui::screenGetMapXyWithZ(__int16 mouse_x@<ax>, __int16 mouse_y@<bx>, __int16 z@<bp>);");
    set_func_cmt(0x0045FCE6, "returns optional map_pos{x@<ax>, y@<bx>}", 1);
    MakeName(0x0045FD41, "ui::viewport_coord_to_map_coord");
    SetType(0x0045FD41, "void __usercall ui::viewport_coord_to_map_coord(__int16 x@<ax>, __int16 y@<bx>, __int16 z@<bp>, __int32 rotation@<edx>);");
    set_func_cmt(0x0045FD41, "returns map_pos{x@<ax>, y@<bx>}", 1);
    MakeName(0x0045FD8E, "screen_pos_to_map_pos");
    MakeName(0x0045FE05, "screen_get_map_xy_quadrant_with_z");
    MakeName(0x0045FE4C, "screen_get_map_xy_side");
    MakeName(0x004610F2, "invalidate_map_selection_rect");
    MakeName(0x0046112C, "invalidate_map_selection_tiles");
    MakeName(0x004612A6, "map_animation_create");
    MakeName(0x004612EC, "invalidate_animated_map_areas");
    MakeName(0x00461348, "map_update_tile_pointers");
    MakeName(0x00461393, "map_check_free_elements_and_reorganise");
    MakeName(0x0046148F, "reorganise_map_elements");
    MakeName(0x004616D6, "insert_map_element");
    MakeName(0x00462893, "vehicle_check_collision");
    MakeName(0x004656BF, "paint_surface");
    MakeName(0x00467297, "tile_element_height");
    MakeName(0x00468FD3, "show_gridlines");
    MakeName(0x00468FFE, "hide_gridlines");
    MakeName(0x0046A794, "game_loop_iteration");
    MakeName(0x0046AD7D, "load_title_screen");
    MakeName(0x0046AE0C, "intro_update");
    MakeName(0x0046B5C0, "window_map_center_on_view_point");
    MakeName(0x0046E306, "getLoanSizeInCurrency");
    MakeName(0x0046FC83, "sprite_set_position");
    MakeName(0x0046FDFD, "reset_things");
    MakeName(0x0046FED5, "sprite_clear_all_unused");
    MakeName(0x004700A5, "create_thing");
    MakeName(0x0047019F, "move_sprite_to_list");
    MakeName(0x00470F3C, "load_object_index");
    MakeName(0x0047176D, "get_scenario_text_from_object");
    MakeName(0x00471B95, "free_scenario_text_from_object");
    MakeName(0x00471FF8, "unload_object");
    MakeName(0x00472031, "unload_all_objects");
    MakeName(0x00472172, "object_get_localised_text");
    MakeName(0x0047221F, "object_load_images");
    MakeName(0x0047237D, "reset_loaded_objects");
    MakeName(0x004723F1, "scenario_write_available_items");
    MakeName(0x0047247E, "read_and_load_objects");
    MakeName(0x00472633, "scenario_write_packed_objects");
    MakeName(0x00472687, "object_load_packed");
    MakeName(0x00472C84, "reset_selected_object_count_and_size");
    MakeName(0x00472CFD, "window_editor_object_selection_select_required_objects");
    MakeName(0x00473B91, "editor_object_flags_free_0");
    MakeName(0x00473BC7, "object_create_identifier_name");
    MakeName(0x00473D1D, "window_editor_object_selection_select_object");
    MakeName(0x00474821, "unload_unselected_objects");
    MakeName(0x00474874, "editor_load_selected_objects");
    MakeName(0x004775A5, "remove_road");
    MakeName(0x004899E4, "init_audio");
    MakeName(0x00489BA1, "audio_close");
    MakeName(0x00489C0A, "toggle_sound");
    MakeName(0x00489C34, "audio_pause_sounds");
    MakeName(0x00489C58, "unpause_sounds");
    MakeName(0x00489C6A, "stop_vehicle_noise");
    MakeName(0x00489CB5, "audio_play_sound_panned");
    MakeName(0x0048A73B, "update_vehicle_noise");
    MakeName(0x0048AAE8, "stop_background_music");
    MakeName(0x0048ABE3, "stop_ambient_noise");
    MakeName(0x0048AC2B, "stop_title_music");
    MakeName(0x0048AC66, "play_title_screen_music");
    MakeName(0x0048ACFD, "update_ambient_noise");
    MakeName(0x0048BB20, "placeTrackStation");
    MakeName(0x0048C708, "placeRoadStation");
    MakeName(0x0048DCA5, "recalculate_station_label");
    MakeName(0x0048DDC3, "recalculate_station_labels");
    MakeName(0x0048EF02, "window_station_2_draw_rating_bar");
    MakeName(0x0048F210, "open_station_window");
    MakeName(0x0048F29F, "window_station_create");
    MakeName(0x00490F6C, "windowmgr::open_station_list");
    MakeName(0x00491A76, "ui::station_list::draw_tabs");
    MakeName(0x00492793, "update_station_cargo");
    MakeName(0x00492A98, "station::getStatusString");
    MakeName(0x00492C41, "placeAirportStation");
    MakeName(0x00493AA7, "placeDockStation");
    MakeName(0x00494B3F, "draw_string_494B3F");
    SetType(0x00494B3F, "void __usercall draw_string_494B3F(drawpixelinfo_t *dpi@<edi>, __int16 x@<cx>, __int16 y@<dx>, __int8 colour@<al>, __int16 stringId@<bx>, __int32 args@<esi>);");
    MakeName(0x00494BBF, "draw_string_494BBF");
    MakeName(0x00494C78, "draw_string_494C78");
    MakeName(0x00494CB2, "draw_string_underline");
    MakeName(0x00494D78, "draw_string_left_underline");
    MakeName(0x00494DE8, "draw_string_centred");
    MakeName(0x00494E33, "draw_string_centred_raw");
    MakeName(0x00494ECF, "gfx_draw_string_centred_wrapped");
    MakeName(0x00495224, "gfx_draw_string_left_wrapped");
    SetType(0x00495224, "__int16 __usercall gfx_draw_string_left_wrapped@<dx>(drawpixelinfo_t *dpi@<edi>, __int16 x@<cx>, __int16 y@<dx>, __int16 width@<bp>, __int8 colour@<al>, __int16 stringId@<bx>, __int32 args@<esi>);");
    MakeName(0x00495301, "gfx_wrap_string");
    MakeName(0x00495685, "gfx::getStringWidth");
    SetType(0x00495685, "__int16 __usercall gfx::getStringWidth@<cx>(char *buffer@<esi>);");
    MakeName(0x00495715, "gfx_get_string_width_new_lined");
    MakeName(0x004957C4, "gfx::clip_string");
    SetType(0x004957C4, "__int16 __usercall gfx__clip_string@<cx>(__int16 width@<di>, void *buffer@<esi>);");
    MakeName(0x004958C6, "format_string");
    MakeName(0x0049593C, "format_string_part");
    MakeName(0x0049598C, "formatSprite");
    MakeName(0x004959F3, "formatDistance");
    MakeName(0x00495A2F, "formatHeight");
    MakeName(0x00495A89, "formatPower");
    MakeName(0x00495AC5, "formatTimeHM");
    MakeName(0x00495B0F, "formatTimeMS");
    MakeName(0x00495BC9, "formatVelocity");
    MakeName(0x00495C05, "formatStringId");
    MakeName(0x00495C2E, "formatStringId2");
    MakeName(0x00495C40, "format");
    MakeName(0x00495C55, "formatPop16");
    MakeName(0x00495C5D, "formatPush16");
    MakeName(0x00495C65, "calc_date");
    MakeName(0x00495CB5, "formatDayMonthFull");
    MakeName(0x00495CE0, "formatDayMonthAbbrev");
    MakeName(0x00495D09, "formatDayMonthYearFull");
    MakeName(0x00495D41, "formatDayMonthYearAbbrev");
    MakeName(0x00495D77, "formatMonthYearFull");
    MakeName(0x00495DA0, "formatMonthYearAbbrev");
    MakeName(0x00495DC7, "formatMonthYearAbbrev_0");
    MakeName(0x00495DF4, "formatMonthFull");
    MakeName(0x00495E10, "formatMonthAbbrev");
    MakeName(0x00495E2A, "format_int");
    MakeName(0x00495F35, "format_comma");
    MakeName(0x00496052, "formatNumeric_2");
    MakeName(0x004962F1, "format_comma2dp32");
    MakeName(0x004963FC, "formatNumeric_4");
    MakeName(0x0049650E, "emptyUserStrings");
    MakeName(0x00496522, "user_string_allocate");
    MakeName(0x004965A6, "empty_user_string");
    MakeName(0x0049678D, "getStringWidth_maybe");
    MakeName(0x004968C7, "date_tick");
    MakeName(0x004969DA, "get_local_time");
    MakeName(0x00496FE7, "town_initialise");
    MakeName(0x0049748C, "TownManager::updateMonthly");
    MakeName(0x00497616, "recalculate_town_label");
    MakeName(0x0049771C, "recalculate_town_labels");
    MakeName(0x004999AD, "ui::town::repositionTabs");
    MakeName(0x004999E1, "ui::town::drawTabs");
    MakeName(0x00499A87, "town::initViewport");
    MakeName(0x00499B39, "ui::town::createViewport");
    MakeName(0x00499B7E, "window_town_open");
    MakeName(0x00499C83, "open_town_list");
    MakeName(0x0049B206, "town_list_49B206");
    MakeName(0x0049B2B5, "town_list_49B2B5");
    MakeName(0x0049C7F2, "build_track");
    MakeName(0x004A0A18, "viewport_set_visibility");
    MakeName(0x004A0AB0, "window_close_construction_windows");
    MakeName(0x004A3B0D, "ui__construction__open_with_flags");
    MakeName(0x004A8826, "update_vehicles");
    MakeName(0x004B5088, "track_design_save_reset_scenery");
    MakeName(0x004B6033, "window_vehicle_create");
    MakeName(0x004B671C, "get_vehicle_status_format");
    MakeName(0x004BB4A3, "open_terraform_plant_trees");
    MakeName(0x004BB546, "open_adjust_land");
    MakeName(0x004BB556, "open_adjust_water");
    MakeName(0x004BB566, "open_clear_area");
    MakeName(0x004BB576, "open_build_walls");
    MakeName(0x004BB586, "windowmgr::open_terraform");
    MakeName(0x004BB63F, "terraform_4BB63F");
    MakeName(0x004BC4B7, "terraform_4BC4B7");
    MakeName(0x004BC506, "terraform_4BC506");
    MakeName(0x004BE3F3, "reset_keyboard_shortcuts");
    MakeName(0x004BE621, "exit_with_error");
    MakeName(0x004BE92A, "process_keyboard_input");
    MakeName(0x004BEC5B, "process_keyboard_input_2");
    MakeName(0x004BF089, "shortcut_close_topmost_window");
    MakeName(0x004BF0B6, "shortcut_closeAllFloatingWindows");
    MakeName(0x004BF0BC, "shortcut_cancelConstructionMode");
    MakeName(0x004BF0E6, "shortcut_pauseUnpauseGame");
    MakeName(0x004BF0FE, "shortcut_zoomViewOut");
    MakeName(0x004BF115, "shortcut_zoomViewIn");
    MakeName(0x004BF12C, "shortcut_rotate_view");
    MakeName(0x004BF148, "shortcut_rotateConstructionObject");
    MakeName(0x004BF18A, "shortcut_underground_view_toggle");
    MakeName(0x004BF194, "shortcut_toggleHideForegroundTracks");
    MakeName(0x004BF19E, "shortcut_toggleHideForegroundScenery");
    MakeName(0x004BF1A8, "shortcut_toggleHeightMarksOnLand");
    MakeName(0x004BF1B2, "shortcut_toggleHeightMarksOnTracks");
    MakeName(0x004BF1BC, "shortcut_toggleDirArrowsOnTracks");
    MakeName(0x004BF1C6, "shortcut_adjustLand");
    MakeName(0x004BF1E1, "shortcut_adjustWater");
    MakeName(0x004BF1FC, "shortcut_plantTrees");
    MakeName(0x004BF217, "shortcut_bulldozeArea");
    MakeName(0x004BF232, "shortcut_buildTracks");
    MakeName(0x004BF24F, "shortcut_buildRoads");
    MakeName(0x004BF276, "shortcut_buildAirports");
    MakeName(0x004BF295, "shortcut_buildShipPorts");
    MakeName(0x004BF2B4, "shortcut_buildNewVehicles");
    MakeName(0x004BF2D1, "shortcut_showVehiclesList");
    MakeName(0x004BF2F0, "shortcut_showStationsList");
    MakeName(0x004BF308, "shortcut_showTownsList");
    MakeName(0x004BF323, "shortcut_showIndustryList");
    MakeName(0x004BF33E, "shortcut_show_map_window");
    MakeName(0x004BF3AB, "take_screenshot");
    MakeName(0x004BF3B3, "toggle_last_announcement");
    MakeName(0x004BF3DC, "send_chat");
    MakeName(0x004BF7B9, "windowmgr::open_options");
    MakeName(0x004BF823, "open_options_from_toolbar");
    MakeName(0x004BF833, "create_options_window");
    MakeName(0x004BFCC7, "ui__options_resize_window");
    MakeName(0x004C1AA2, "windowmgr::create_vehicle_list");
    MakeName(0x004C1C64, "windowmgr::open_build_vehicle");
    MakeName(0x004C57C0, "viewport_init_all");
    MakeName(0x004C58C7, "gfx_fill_rect_inset");
    SetType(0x004C58C7, "void __usercall gfx_fill_rect_inset(__int16 flags@<si>, __int16 left@<ax>, __int16 top@<cx>, __int16 right@<bx>, __int16 bottom@<dx>, int colour@<ebp>);");
    MakeName(0x004C5C69, "gfx_set_dirty_blocks");
    SetType(0x004C5C69, "void __usercall gfx_set_dirty_blocks(__int16 left@<ax>, __int16 top@<bx>, __int16 right@<dx>, __int16 bottom@<bp>);");
    MakeName(0x004C5CFA, "gfx_draw_dirty_blocks");
    MakeName(0x004C5DD5, "gfx_redraw_screen_rect");
    MakeName(0x004C5EA9, "window_draw");
    MakeName(0x004C6118, "window_update_all");
    MakeName(0x004C641F, "viewport_set_underground_flag");
    MakeName(0x004C6456, "viewports_update_position");
    MakeName(0x004C68E4, "viewport_move");
    MakeName(0x004C6E65, "update_cursor_position");
    MakeName(0x004C6EE6, "game_get_next_input");
    MakeName(0x004C7174, "window_process_mouse_input");
    MakeName(0x004C71F6, "input::state_scroll_left");
    MakeName(0x004C7334, "input::state_viewport_left");
    MakeName(0x004C74BB, "cursor_4C74BB");
    MakeName(0x004C76A7, "cursor_4C76A7");
    MakeName(0x004C7722, "input::state_resizing");
    MakeName(0x004C7903, "input::state_positioning_window");
    MakeName(0x004C7AE7, "input::state_4C7AE7");
    MakeName(0x004C8048, "input::state_normal");
    MakeName(0x004C877D, "window_position_begin");
    MakeName(0x004C8B85, "input_state_normal_left_down_scroll_vbottom");
    MakeName(0x004C8CFD, "input_scroll_drag_continue");
    MakeName(0x004C8EF0, "widget_scroll_get_part");
    MakeName(0x004C906B, "window_tooltip_open");
    MakeName(0x004C9216, "ui__tooltip__update");
    MakeName(0x004C9513, "window_find_widget_from_point");
    MakeName(0x004C96E7, "handle_input");
    MakeName(0x004C9984, "invalidate_all_windows_after_input");
    MakeName(0x004C99B9, "window_invalidate_pressed_image_buttons");
    MakeName(0x004C9A95, "ui::WindowManager::findAt");
    SetType(0x004C9A95, "__int32 __usercall ui::WindowManager::findAt@<esi>(__int16 x@<ax>, __int16 y@<bx>);");
    set_func_cmt(0x004C9A95, "returns window pointer (or null)", 1);
    MakeName(0x004C9AFA, "widget_find_from_point");
    MakeName(0x004C9B56, "find_window");
    SetType(0x004C9B56, "void __usercall find_window(windowtype windowtype@<cl.4>);");
    MakeName(0x004C9C68, "window_create_alt");
    SetType(0x004C9C68, "void __usercall window_create_alt(windowtype32 windowtype@<ecx>);");
    MakeName(0x004C9F5D, "window_create");
    SetType(0x004C9F5D, "void __usercall window_create(windowtype32 windowtype@<ecx>);");
    MakeName(0x004CA115, "update_scroll_widgets");
    MakeName(0x004CA17F, "window_init_scroll_widgets");
    MakeName(0x004CA1ED, "widget_scroll_update_thumbs");
    MakeName(0x004CA2D0, "viewportmgr::create");
    MakeName(0x004CA4BD, "window_invalidate");
    MakeName(0x004CA4DF, "window::draw");
    SetType(0x004CA4DF, "void __usercall window::draw(window_t *window@<esi>, drawpixelinfo_t *dpi@<edi>);");
    MakeName(0x004CA679, "wdgt_29");
    MakeName(0x004CA6AE, "wdgt_22");
    MakeName(0x004CA750, "wdgt_23");
    MakeName(0x004CA7F6, "wdgt_24");
    MakeName(0x004CA88B, "wdgt_25");
    MakeName(0x004CA920, "wdgt_21");
    MakeName(0x004CAAB9, "wdgt_2");
    MakeName(0x004CAB58, "wdgt_1");
    MakeName(0x004CABFE, "wdgt_5");
    MakeName(0x004CAC5F, "wdgt_10");
    MakeName(0x004CACD4, "wdgt_9");
    MakeName(0x004CAD5F, "wdgt_3_4");
    MakeName(0x004CB00B, "wdgt_27");
    MakeName(0x004CB0E0, "wdgt_16");
    MakeName(0x004CB164, "wdgt_11");
    MakeName(0x004CB1BE, "wdgt_13");
    MakeName(0x004CB29C, "wdgt_17");
    MakeName(0x004CB8D8, "wdgt_0");
    MakeName(0x004CB966, "window_invalidate_by_id");
    SetType(0x004CB966, "void __usercall window_invalidate_by_id(windowtype windowtype@<al.4>, __int16 number@<bx>);");
    MakeName(0x004CBA2D, "station_invalidate");
    MakeName(0x004CBE5F, "map_invalidate_tile_full");
    SetType(0x004CBE5F, "void __usercall map_invalidate_tile_full(__int16 x@<ax>, __int16 y@<cx>);");
    MakeName(0x004CC692, "window_close_by_id");
    SetType(0x004CC692, "void __usercall window_close_by_id(windowtype windowtype@<cl.4>);");
    MakeName(0x004CC6EA, "window_close");
    SetType(0x004CC6EA, "void __usercall window_close(window_t *window@<esi>);");
    MakeName(0x004CC750, "window_bring_to_front");
    MakeName(0x004CC7CB, "window_set_disabled_widgets_and_invalidate");
    MakeName(0x004CC807, "show_text_dropdown_custom_width");
    MakeName(0x004CC989, "dropdown_show_below");
    MakeName(0x004CCA6D, "show_text_dropdown");
    MakeName(0x004CCC7C, "show_text_dropdown_2");
    MakeName(0x004CCDE7, "show_image_dropdown");
    MakeName(0x004CCF8C, "show_colour_dropdown");
    MakeName(0x004CD296, "relocate_windows");
    MakeName(0x004CD320, "window::moveInsideScreenEdges");
    MakeName(0x004CD3A9, "window_bring_to_front_by_id");
    SetType(0x004CD3A9, "void __usercall window_bring_to_front_by_id(windowtype windowtype@<cl.4>);");
    MakeName(0x004CD3D0, "window_dispatch_update_all");
    MakeName(0x004CD406, "gfx_invalidate_screen");
    MakeName(0x004CD422, "process_mouse_tool");
    MakeName(0x004CD47A, "process_mouse_over");
    MakeName(0x004CD658, "viewport_interaction_get_item_left");
    MakeName(0x004CDB2B, "viewport_interaction_right_over");
    MakeName(0x004CE367, "input::toolSet");
    MakeName(0x004CE3D6, "tool_cancel");
    MakeName(0x004CE438, "window_get_main");
    MakeName(0x004CE523, "ui::textinput::open");
    MakeName(0x004CE6C9, "ui::textinput::sub_4CE6C9");
    MakeName(0x004CE6F2, "ui::textinput::cancel");
    MakeName(0x004CE6FF, "ui::textinput::sub_4CE6FF");
    MakeName(0x004CE910, "ui::textinput::sub_4CE910");
    set_name(0x004CE971, "handle_return", SN_LOCAL);
    set_name(0x004CE97C, "handle_escape", SN_LOCAL);
    set_name(0x004CE987, "handle_home", SN_LOCAL);
    set_name(0x004CE9A2, "handle_end", SN_LOCAL);
    set_name(0x004CE9B0, "handle_left", SN_LOCAL);
    set_name(0x004CE9F0, "handle_right", SN_LOCAL);
    set_name(0x004CEA32, "handle_key", SN_LOCAL);
    set_name(0x004CEAA5, "handle_delete", SN_LOCAL);
    set_name(0x004CEAE4, "handle_backspace", SN_LOCAL);
    set_name(0x004CEB42, "render", SN_LOCAL);
    MakeName(0x004CEB67, "txtutils_4CEB67");
    MakeName(0x004CEC25, "ViewportManager::collectGarbage");
    MakeName(0x004CEC50, "clip_drawpixelinfo");
    MakeName(0x004CF142, "set_cursor_to_1");
    MakeName(0x004CF167, "set_cursor");
    MakeName(0x004CF194, "widget::draw_tab");
    MakeName(0x004CF284, "company_id_from_dropdown");
    MakeName(0x004CF2B3, "populate_company_dropdown");
    MakeName(0x004CF487, "widget::drawViewportCentreButton");
    MakeName(0x004CF5C5, "progressbar_begin");
    MakeName(0x004CF60B, "progressbar_end");
    MakeName(0x004CF621, "progressbar_increment");
    MakeName(0x004CFF1E, "j_DirectDrawCreateEx");
    MakeName(0x004D0FA0, "j_DirectInputCreateA");
    MakeName(0x004D0FA6, "j_DSOUND_1");
    MakeName(0x004D0FAC, "j_DSOUND_2");
    MakeName(0x004D1090, "LeadUp1");
    MakeName(0x004D10BC, "LeadUp2");
    MakeName(0x004D1178, "TrailUp0");
    MakeName(0x004D1F97, "start");
    MakeName(0x004D2D3F, "__cropzeros");
    MakeName(0x004D2D8D, "__positive");
    MakeName(0x004D46EC, "LeadUp2_0");
    MakeName(0x004D47A8, "TrailUp0_0");
    MakeName(0x004D728C, "wsprintfA");
    MakeName(0x00508F04, "_gameCommandFlags");
    MakeName(0x00508F10, "multiplayer_flags");
    MakeName(0x0050AED7, "config_music_playing");
    MakeName(0x0050AF27, "music_playlist");
    MakeName(0x0050AF40, "enabled_music");
    MakeName(0x0050BF58, "colour");
    MakeName(0x0050D434, "_currentSong");
    MakeName(0x0050D554, "sound_is_paused");
    MakeName(0x0050D555, "disable_sound");
    MakeName(0x00523396, "currentScrollArea");
    MakeName(0x00525E3C, "player_company_id");
    MakeName(0x00525E5E, "currencyMultiplicationFactor");
    MakeName(0x00525FB2, "seaLevel");
    MakeName(0x00525FB7, "maxCompetingCompanies");
    MakeName(0x00525FC6, "loanInterestRate");
    MakeName(0x00526214, "competitorStartDelay");
    MakeName(0x00526215, "preferredAIIntelligence");
    MakeName(0x00526216, "preferredAIAggressiveness");
    MakeName(0x00526217, "preferredAICompetitiveness");
    MakeName(0x00526218, "startingLoanSize");
    MakeName(0x0052621A, "maxLoanSize");
    MakeName(0x00526230, "objectiveType");
    MakeName(0x00526231, "objectiveFlags");
    MakeName(0x00526232, "objectiveCompanyValue");
    MakeName(0x00526236, "objectiveMonthlyVehicleProfit");
    MakeName(0x0052623A, "objectivePerformanceIndex");
    MakeName(0x0052623B, "objectiveDeliveredCargoType");
    MakeName(0x0052623C, "objectiveDeliveredCargoAmount");
    MakeName(0x00526240, "objectiveTimeLimitYears");
    MakeName(0x00526243, "objectiveMonthsInChallenge");
    MakeName(0x00526245, "objectiveCompletedChallengeInMonths");
    MakeName(0x00526247, "industry_flags");
    MakeName(0x00526248, "forbiddenVehiclesPlayers");
    MakeName(0x0052624A, "forbiddenVehiclesCompetitors");
    MakeName(0x009C645C, "company_colours");
    MakeName(0x009C68EB, "updatingCompanyId");
    MakeName(0x009C68EE, "_errorCompanyId");
    MakeName(0x009C8714, "editor_step");
    MakeName(0x009C8716, "scenario_start_year");
    MakeName(0x009C871A, "scenario_flags");
    MakeName(0x009C873E, "scenarioTitleSelectionScreen");
    MakeName(0x009C877E, "scenarioDetailsSelectionScreen");
    MakeName(0x009C888E, "numberOfForests");
    MakeName(0x009C8890, "minimumForestRadius");
    MakeName(0x009C8891, "maximumForestRadius");
    MakeName(0x009C8892, "minimumForestDensity");
    MakeName(0x009C8893, "maximumForestDensity");
    MakeName(0x009C8894, "numberRandomTrees");
    MakeName(0x009C8896, "minAltitudeForTrees");
    MakeName(0x009C8897, "maxAltitudeForTrees");
    MakeName(0x009C8898, "minimumLandHeight");
    MakeName(0x009C8899, "topographyStyle");
    MakeName(0x009C889A, "hillDensity");
    MakeName(0x009C889B, "number_of_towns");
    MakeName(0x009C889C, "max_town_size");
    MakeName(0x009C889D, "number_of_industries");
    MakeName(0x009DA284, "prompt_browse_file_type");
    // sort off
}

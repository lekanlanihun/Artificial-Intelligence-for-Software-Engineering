#ifndef _EXP_
#define _EXP_

#include "../MISC/parameters.h"
//#include "../CONTROLLERS/controller.h"
#include <math.h>
#include <iostream>
#include <fstream>
#include <sstream>
#define no_of_files 1750
#define file_cols 25
#define MAX_STEPS_OUT_OF_IMAGES 4
#define ITER_START_FITNESS_COUNT 50
#define MAX_ITER_COUNT 20000
#define category_nodes 5
#define motor_nodes 2
//#define statistical_performance
//#define mgsi_inputs_patterns
#ifdef _GRAPHICS_
#include "../EXP/RENDERING/engine.h"

#include <vector>

class EXP_Class : public Engine {
#endif
  
#ifndef _GRAPHICS_
  class EXP_Class {
#endif

 private:
  /* --------------- FIXED MEMBERS --------------- */
  int  current_iterate;
  int  generation;
  int  genotype;
  int  eval;
  int  iter;
vector<double>sum_fit_cat0;vector<double>sum_fit_cat1;vector<double>sum_fit_cat2;vector<double>sum_fit_cat3;vector<double>sum_fit_cat4;
vector<int>count_iterate;
 int num_trials;
int reval_iterate;
  int nl;
int count_output2_cat_zero_index,count_output3_cat_zero_index, count_output4_cat_zero_index, count_output5_cat_zero_index,count_output6_cat_zero_index,count_output7_cat_zero_index;
int count_output2_cat_one_index,count_output3_cat_one_index, count_output4_cat_one_index, count_output5_cat_one_index,count_output6_cat_one_index,count_output7_cat_one_index;
int count_output2_cat_two_index,count_output3_cat_two_index, count_output4_cat_two_index, count_output5_cat_two_index,count_output6_cat_two_index,count_output7_cat_two_index;
int count_output2_cat_three_index,count_output3_cat_three_index, count_output4_cat_three_index, count_output5_cat_three_index,count_output6_cat_three_index,count_output7_cat_three_index;
int count_output2_cat_four_index,count_output3_cat_four_index, count_output4_cat_four_index, count_output5_cat_four_index,count_output6_cat_four_index,count_output7_cat_four_index;
int count_output2_cat_five_index,count_output3_cat_five_index, count_output4_cat_five_index, count_output5_cat_five_index,count_output6_cat_five_index,count_output7_cat_five_index;

double output3_correct_percent_cat_zero, output4_correct_percent_cat_zero, output5_correct_percent_cat_zero, output6_correct_percent_cat_zero,output7_correct_percent_cat_zero;
double  output2_correct_percent_cat_one,output3_correct_percent_cat_one, output4_correct_percent_cat_one, output5_correct_percent_cat_one,output6_correct_percent_cat_one,output7_correct_percent_cat_one;
double output2_correct_percent_cat_two,output3_correct_percent_cat_two,output4_correct_percent_cat_two, output5_correct_percent_cat_two,output6_correct_percent_cat_two,output7_correct_percent_cat_two;
double  output2_correct_percent_cat_three,output3_correct_percent_cat_three, output4_correct_percent_cat_three,output6_correct_percent_cat_three,output7_correct_percent_cat_three;
double output2_correct_percent_cat_four,output3_correct_percent_cat_four, output4_correct_percent_cat_four, output5_correct_percent_cat_four,output7_correct_percent_cat_four;
double output2_correct_percent_cat_five,output3_correct_percent_cat_five, output4_correct_percent_cat_five, output5_correct_percent_cat_five,output6_correct_percent_cat_five,output7_correct_percent_cat_five;

double cat_zero_correct_in_percent,cat_one_correct_in_percent,cat_two_correct_in_percent,cat_three_correct_in_percent,cat_four_correct_in_percent,cat_five_correct_in_percent;

int total_cat_zero,total_cat_one,total_cat_two,total_cat_three,total_cat_four,total_cat_five;

int total_nos_iter,count_cat_zero,count_cat_one, count_cat_two, count_cat_three,count_cat_four, count_cat_five,count_cat_six;
int aver_count_cat_zero,aver_count_cat_one, aver_count_cat_two, aver_count_cat_three,aver_count_cat_four;
int not_count2_cat_zero,not_count3_cat_zero, not_count4_cat_zero, not_count5_cat_zero,not_count6_cat_zero,not_count7_cat_zero;
int count_output2_cat_zero,count_output3_cat_zero, count_output4_cat_zero, count_output5_cat_zero,count_output6_cat_zero,count_output7_cat_zero;
int count_output2_cat_one,count_output3_cat_one, count_output4_cat_one, count_output5_cat_one,count_output6_cat_one,count_output7_cat_one;
int count_output2_cat_two,count_output3_cat_two, count_output4_cat_two, count_output5_cat_two,count_output6_cat_two,count_output7_cat_two;
int count_output2_cat_three,count_output3_cat_three, count_output4_cat_three, count_output5_cat_three,count_output6_cat_three,count_output7_cat_three;
int count_output2_cat_four,count_output3_cat_four, count_output4_cat_four, count_output5_cat_four,count_output6_cat_four,count_output7_cat_four;
int count_output2_cat_five,count_output3_cat_five, count_output4_cat_five, count_output5_cat_five,count_output6_cat_five,count_output7_cat_five;
double average, averages, standard_deviations;

 double sum_iter_output_two_cat_zero, sum_iter_output_three_cat_zero, sum_iter_output_four_cat_zero, sum_iter_output_five_cat_zero,sum_iter_output_six_cat_zero,sum_iter_output_seven_cat_zero;
 double sum_iter_output_two_cat_one, sum_iter_output_three_cat_one, sum_iter_output_four_cat_one, sum_iter_output_five_cat_one,sum_iter_output_six_cat_one,sum_iter_output_seven_cat_one;
 double sum_iter_output_two_cat_two, sum_iter_output_three_cat_two, sum_iter_output_four_cat_two, sum_iter_output_five_cat_two, sum_iter_output_six_cat_two,sum_iter_output_seven_cat_two;
double sum_iter_output_two_cat_three, sum_iter_output_three_cat_three, sum_iter_output_four_cat_three, sum_iter_output_five_cat_three,sum_iter_output_six_cat_three,sum_iter_output_seven_cat_three;
double sum_iter_output_two_cat_four, sum_iter_output_three_cat_four, sum_iter_output_four_cat_four, sum_iter_output_five_cat_four, sum_iter_output_six_cat_four,sum_iter_output_seven_cat_four;
double sum_iter_output_two_cat_five, sum_iter_output_three_cat_five, sum_iter_output_four_cat_five, sum_iter_output_five_cat_five, sum_iter_output_six_cat_five,sum_iter_output_seven_cat_five;

double average_output_two_cat_zero,average_output_three_cat_zero,average_output_four_cat_zero,average_output_five_cat_zero,average_output_six_cat_zero;
double average_output_two_cat_one,average_output_three_cat_one,average_output_four_cat_one,average_output_five_cat_one,average_output_six_cat_one;
double average_output_two_cat_two,average_output_three_cat_two,average_output_four_cat_two,average_output_five_cat_two,average_output_six_cat_two;
double average_output_two_cat_three,average_output_three_cat_three,average_output_four_cat_three,average_output_five_cat_three,average_output_six_cat_three;
double average_output_two_cat_four,average_output_three_cat_four,average_output_four_cat_four,average_output_five_cat_four,average_output_six_cat_four;

   

double  sum_gen_output_two_cat_zero,sum_gen_output_three_cat_zero  ,sum_gen_output_four_cat_zero, sum_gen_output_five_cat_zero,  sum_gen_output_six_cat_zero;
double sum_gen_output_two_cat_one, sum_gen_output_three_cat_one, sum_gen_output_four_cat_one, sum_gen_output_five_cat_one, sum_gen_output_six_cat_one;
double sum_gen_output_two_cat_two, sum_gen_output_three_cat_two, sum_gen_output_four_cat_two , sum_gen_output_five_cat_two, sum_gen_output_six_cat_two; 
double sum_gen_output_two_cat_three, sum_gen_output_three_cat_three, sum_gen_output_four_cat_three, sum_gen_output_five_cat_three , sum_gen_output_six_cat_three;
double sum_gen_output_two_cat_four, sum_gen_output_three_cat_four ,sum_gen_output_four_cat_four , sum_gen_output_five_cat_four,sum_gen_output_six_cat_four;

double  std_output_two_cat_zero,std_output_three_cat_zero  ,std_output_four_cat_zero, std_output_five_cat_zero,  std_output_six_cat_zero;
double std_output_two_cat_one, std_output_three_cat_one, std_output_four_cat_one, std_output_five_cat_one, std_output_six_cat_one;
double std_output_two_cat_two, std_output_three_cat_two, std_output_four_cat_two , std_output_five_cat_two, std_output_six_cat_two; 
double std_output_two_cat_three, std_output_three_cat_three, std_output_four_cat_three, std_output_five_cat_three , std_output_six_cat_three;
double std_output_two_cat_four, std_output_three_cat_four ,std_output_four_cat_four , std_output_five_cat_four,std_output_six_cat_four;
// int bigRect=50;
int count_categorization_eye_movement;
  //int smallRect = 5;
  double top_final_fitness;
  double  top_trial_final_fitness;
  bool evolution;
  bool viewing;
  bool re_evaluation;
  double  reval_total_fitness;
  double generational_avg_fitness;
  double generational_max_fitness;
  double generational_min_fitness;
  double final_fitness;
  vector<double> inputs;
//double *inputs;
vector<int>current_eye_position;
  vector<double> outputs;
vector<double> passive_scan;
//double *outputs;
double**  Input_Sets_of_Stimuli;
  vector<int>rank_index;
  vector<int>image_index;
//vector<string>image_path;
  string *image_path;
  double single_fitness;
  vector<double>sum_single_fitness;
vector<double>fitness;
vector<double>total_fitness;
  vector<double>genotypes_final_fitness;
double standard_deviation;
  int counter_for_out_of_image_view;
  /* --------------------------------------------- */
  
 public:
  /* --------------- FIXED FUNCTIONS --------------- */
  EXP_Class ( const char *run_name, bool _evolution, bool _viewing, bool _re_evaluation, unsigned long _seed );
  ~EXP_Class( );
  
  Parameters *param;
double**Init_sensory_data_from_file( void );
 void MGSI_algorithm( void );
  void init_local_variables( void );
  void init_evolutionary_run( void );
  void init_genotype_loop( );
  void init_evaluations_loop( void );
  void init_single_evaluation( void );
  void from_genome_to_controllers( const char *str_source, const int which_genotype );
  void adv ( void );
  void assign_fitness_to_genotype( void );

  void finalise_single_evaluation( void );
  void finalise_evaluations_loop( void );
  void finalise_genotypes_loop( void );
  void finalise_evolutionary_run( void );
  
  bool stop_iterations_loop( void );
  bool stop_evaluations_loop( void ); 
  bool stop_genotypes_loop( void ); 
  bool stop_generations_loop( void );
  
  void update_sensors( void );
  void update_controllers( void );
  void update_world( void );
  void manage_collisions ( void );
  void compute_fitness ( void ); 
  void dump_statistics              ( const char *locationOfFileTodump, const char *fileName, int generation );
void Re_eval_dump_statistics              ( const char *locationOfFileTodump, const char *fileName, int generation );
  void init_eye_position();
  void set_eye_movement();
  void get_eye_movement();
  void track_image();
  /* ----------------------------------------------- */
  
};
#endif

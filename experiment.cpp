
#include "experiment.h"

/* ---------------------------------------------------------------------------------------- */

EXP_Class::EXP_Class( const char *run_name, bool _evolution, bool _viewing, bool _re_evaluation, unsigned long _seed ){
  int output_nodes;
  evolution     = _evolution;
  viewing       = _viewing;
  re_evaluation = _re_evaluation;
  
  param     = new Parameters ( run_name );
  if( evolution ) param->set_random_root_seed( _seed );
  param->init_random_generator( );

 //cout << "Initialising local variables" << endl;
  init_local_variables();
  //image_path=new string[param->nets[0]->get_num_output()];
}

/* ---------------------------------------------------------------------------------------- */

EXP_Class::~EXP_Class( ){
      //cout << "Deallocating exp";
       // cout.flush();
  delete param;
    //cout << "Deallocated exp";
    //cout.flush();
}

/* ---------------------------------------------------------------------------------------- */
// The eye is initialized here
void EXP_Class::init_local_variables( void ){
  //In this function you have to create your objects like agents,
  //sensors, obstables world characteristics etc.
       //cout << "enter init local"<<endl;
    
    sum_iter_output_two_cat_zero=0.0, sum_iter_output_three_cat_zero=0.0, sum_iter_output_four_cat_zero=0.0, sum_iter_output_five_cat_zero=0.0,sum_iter_output_six_cat_zero=0.0,sum_iter_output_seven_cat_zero=0.0;
     sum_iter_output_two_cat_one=0.0, sum_iter_output_three_cat_one=0.0, sum_iter_output_four_cat_one=0.0, sum_iter_output_five_cat_one=0.0,sum_iter_output_six_cat_one=0.0,sum_iter_output_seven_cat_one=0.0;
    sum_iter_output_two_cat_two=0.0, sum_iter_output_three_cat_two=0.0, sum_iter_output_four_cat_two=0.0, sum_iter_output_five_cat_two=0.0, sum_iter_output_six_cat_two=0.0,sum_iter_output_seven_cat_two=0.0;
    sum_iter_output_two_cat_three=0.0, sum_iter_output_three_cat_three=0.0, sum_iter_output_four_cat_three=0.0, sum_iter_output_five_cat_three=0.0,sum_iter_output_six_cat_three=0.0,sum_iter_output_seven_cat_three=0.0;
    sum_iter_output_two_cat_four=0.0, sum_iter_output_three_cat_four=0.0, sum_iter_output_four_cat_four=0.0, sum_iter_output_five_cat_four=0.0, sum_iter_output_six_cat_four=0.0,sum_iter_output_seven_cat_four=0.0;
    sum_iter_output_two_cat_five=0.0, sum_iter_output_three_cat_five=0.0, sum_iter_output_four_cat_five=0.0, sum_iter_output_five_cat_five=0.0, sum_iter_output_six_cat_five=0.0,sum_iter_output_seven_cat_five=0.0;

    sum_gen_output_two_cat_zero=0,sum_gen_output_three_cat_zero=0,sum_gen_output_four_cat_zero=0, sum_gen_output_five_cat_zero=0,  sum_gen_output_six_cat_zero=0;

    sum_gen_output_two_cat_one=0.0, sum_gen_output_three_cat_one=0.0, sum_gen_output_four_cat_one=0.0, sum_gen_output_five_cat_one=0.0, sum_gen_output_six_cat_one=0.0;
    sum_gen_output_two_cat_two=0, sum_gen_output_three_cat_two=0, sum_gen_output_four_cat_two=0 , sum_gen_output_five_cat_two=0, sum_gen_output_six_cat_two=0;
    sum_gen_output_two_cat_three=0, sum_gen_output_three_cat_three=0, sum_gen_output_four_cat_three=0, sum_gen_output_five_cat_three=0 , sum_gen_output_six_cat_three=0;
    sum_gen_output_two_cat_four=0, sum_gen_output_three_cat_four=0 ,sum_gen_output_four_cat_four=0 , sum_gen_output_five_cat_four=0,sum_gen_output_six_cat_four=0;

    count_output2_cat_zero=0,count_output3_cat_zero=0, count_output4_cat_zero=0, count_output5_cat_zero=0,count_output6_cat_zero=0,count_output7_cat_zero=0;
    count_output2_cat_one=0,count_output3_cat_one=0, count_output4_cat_one=0, count_output5_cat_one=0,count_output6_cat_one=0,count_output7_cat_one=0;
    count_output2_cat_two=0,count_output3_cat_two=0, count_output4_cat_two=0, count_output5_cat_two=0,count_output6_cat_two=0,count_output7_cat_two=0;
    count_output2_cat_three=0,count_output3_cat_three=0, count_output4_cat_three=0, count_output5_cat_three=0,count_output6_cat_three=0,count_output7_cat_three=0;
    count_output2_cat_four=0,count_output3_cat_four=0, count_output4_cat_four=0, count_output5_cat_four=0,count_output6_cat_four=0,count_output7_cat_four=0;
    count_cat_zero=0,count_cat_one=0, count_cat_two=0, count_cat_three=0,count_cat_four=0, count_cat_five=0;


    count_output2_cat_zero_index=0,count_output3_cat_zero_index=0, count_output4_cat_zero_index=0, count_output5_cat_zero_index=0,count_output6_cat_zero_index=0,count_output7_cat_zero_index=0;
    count_output2_cat_one_index=0,count_output3_cat_one_index=0, count_output4_cat_one_index=0, count_output5_cat_one_index=0,count_output6_cat_one_index=0.0,count_output7_cat_one_index=0;
     count_output2_cat_two_index=0,count_output3_cat_two_index=0, count_output4_cat_two_index=0, count_output5_cat_two_index=0.0,count_output6_cat_two_index=0,count_output7_cat_two_index=0;
     count_output2_cat_three_index=0,count_output3_cat_three_index=0, count_output4_cat_three_index=0, count_output5_cat_three_index=0,count_output6_cat_three_index=0,count_output7_cat_three_index=0;
     count_output2_cat_four_index=0,count_output3_cat_four_index=0, count_output4_cat_four_index=0, count_output5_cat_four_index=0,count_output6_cat_four_index=0,count_output7_cat_four_index=0;
     count_output2_cat_five_index=0,count_output3_cat_five_index=0, count_output4_cat_five_index=0, count_output5_cat_five_index=0,count_output6_cat_five_index=0,count_output7_cat_five_index=0;

 /*average_output_two_cat_zero=0.930631,average_output_three_cat_zero=0.027447,average_output_four_cat_zero=0.023758,average_output_five_cat_zero=0.897887,average_output_six_cat_zero=0.10027;
average_output_two_cat_one=0.159863,average_output_three_cat_one=,average_output_four_cat_one=0.020114,average_output_five_cat_one=0.000113,average_output_six_cat_one=0.115815;
average_output_two_cat_two=0.001558,average_output_three_cat_two=0.061016,average_output_four_cat_two=0.943919,average_output_five_cat_two=0.000743,average_output_six_cat_two=0.837343;
 average_output_two_cat_three=0.01284,average_output_three_cat_three=0.020306,average_output_four_cat_three=0.006647,average_output_five_cat_three=0.929664,average_output_six_cat_three=0.238992;
 average_output_two_cat_four=0.000147,average_output_three_cat_four=0.093716,average_output_four_cat_four=0.046652,average_output_five_cat_four=0.020325,average_output_six_cat_four=0.983318;*/

     aver_count_cat_zero=0,aver_count_cat_one=0, aver_count_cat_two=0, aver_count_cat_three=0,aver_count_cat_four=0;

     not_count2_cat_zero=0,not_count3_cat_zero=0, not_count4_cat_zero=0, not_count5_cat_zero=0,not_count6_cat_zero=0;
 total_cat_zero=0,total_cat_one=0,total_cat_two=0,total_cat_three=0,total_cat_four=0,total_cat_five=0;
  cat_zero_correct_in_percent=0.0,cat_one_correct_in_percent=0.0,cat_two_correct_in_percent=0.0,cat_three_correct_in_percent=0.0,cat_four_correct_in_percent=0.0,cat_five_correct_in_percent=0.0;
    total_nos_iter=0;
    average=0.0;
    standard_deviation=0.0;


count_iterate.assign(category_nodes,0);
 current_iterate=0;
  eval       = 0; //This is the counter for the evaluation
  iter       = 0; //This is the counter for the iterations
  genotype   = 0; //This is the counter for the solutions of genotype
 int bigRect = 50;
    int smallRect = 5;
    int peripheral_rows=5;
    int peripheral_cols=5;
reval_iterate=0;
  if( evolution ) param->dump_simulation_seed ( );//This is to dump the seed number in EXP/DATA
  
//cout << "Initialising eye" << endl;

  //This is the code to init the eye
 //param->init_artificial_eye(bigRect,smallRect,peripheral_rows,peripheral_cols);
//cout << "end Initialising eye" << endl;
 //cout << "Initialising controllers" << endl;

  //This is to init the network controller
  param->init_controllers( );
   //cout << "end Initialising controllers" << endl;
  //inputs.resize(OUIPUT_SIZE);
 passive_scan.assign(2, 0.0 );
outputs.assign( param->nets[0]->get_num_output(), 0.0 );
current_eye_position.assign(2,0);

  fitness.assign(param->num_evaluations,0.0);
  total_fitness.assign(1,0.0);
  //param->eye->load_image( 0 );
  //param->eye->Init_Eye_Position( );

/*array_2d = new double*[file_rows];
for (int i = 0; i < file_rows; i++) {
    Input_Sets_of_Stimuli[i] = new double[file_cols];
}*/
   //cout << "leaves init local"<<endl;
}


/* ---------------------------------------------------------------------------------------- */

void EXP_Class::init_evolutionary_run( void ){
 //cout << "init_evolutionary_run" << endl;
  generation = 0; //This is the counter for the generation
  param->init_ga( param->nets[0]->get_genotype_length(), 1 );

}

/* ---------------------------------------------------------------------------------------- */

void EXP_Class::init_genotype_loop( ){
// cout << "init_genotype_loop" << endl;
  genotype   = 0;//This is the counter for the solutions (genotype)
  generational_avg_fitness     = 0.0;
  generational_max_fitness     = 0.0;
  generational_min_fitness     = 0.0;
 //cout << "end_genotype_loop" << endl;

}

/* ---------------------------------------------------------------------------------------- */

void EXP_Class::init_evaluations_loop( ){
   //   cout<<"begin init evaluation loop"<<endl;
if(re_evaluation){
reval_total_fitness = 0.0;
}

   num_trials=0;
  eval = 0;//This is the counter for the evalutions
  //param->reset_seed( );
  total_fitness[0]=0.0;

  if( evolution ) {
    vector <chromosome_type> genes = param->ga->get_solution( genotype );
    param->nets[0]->init(genes);//This is where we create a network from solution num: genotype
  }
    //cout<<"end init evaluation loop"<<endl;
}

/* ---------------------------------------------------------------------------------------- */

void EXP_Class::init_single_evaluation( void ){
current_eye_position.assign(2,0);
//cout<<"enter init single eval"<<endl;
    //num_trials=0;
  fitness[eval]=0.0;
  iter=0;
 current_iterate=0;
//count_categorization_eye_movement=0;
 // param->eye->load_image( eval ); 
  //param->eye->Init_Eye_Position( );
  
  counter_for_out_of_image_view = 0;

  param->nets[0]->reset();
  inputs.erase(inputs.begin(), inputs.end() );
//this is omly for passive experiment
   for(int i = 0; i < passive_scan.size(); i++) passive_scan[i] = 0.0;

  for(int i = 0; i < outputs.size(); i++) outputs[i] = 0.0;
  //cout<<"end single eval"<<endl;

}

/* ---------------------------------------------------------------------------------------- */

void EXP_Class::from_genome_to_controllers( const char *str_source, const int which_genotype ){
   //cout<<"enter from_genome_to_controllers"<<endl;
  vector <chromosome_type> genes; 
  upload_parameters_from_file <chromosome_type> ( str_source, which_genotype, genes );
  param->nets[0]->set_genotype_length ( genes.size()  );
  param->nets[0]->init(genes );
 //cout<<"leave from_genome_to_controllers"<<endl;
}

/* ---------------------------------------------------------------------------------------- */

void EXP_Class::adv ( void ){
  if( viewing ) stop_iterations_loop( );
//cout<<"get here1"<<endl;
  update_sensors( );//here you compute the input vector
  update_controllers ( ); //here you update the controllers and you generate a new output vector
  if( viewing ) 
  //param->eye->view_eye_movement();
  update_world(); //Here you call the set eye fucntion to upadte the eye position given the output vector
  compute_fitness(); 
//cout<<"get here2"<<endl;
  iter++;
}


/* ---------------------------------------------------------------------------------------- */

/*double** EXP_Class::Init_sensory_data_from_file( void ){
ifstream file("/home/oal/Documents/Neural_Genetic_8/EXP/passive_data/grey_icubimage_peri8b.data");
for (int i = 0; i < file_rows; i++) {
    for ( int j = 0; j < file_cols; j++) {
        file >> Input_Sets_of_Stimuli[i][j];
    }
}

return Input_Sets_of_Stimuli;
}*/



void EXP_Class::update_sensors(void){
//cout<<"update_sernsors1"<<endl;
    inputs.erase(inputs.begin(), inputs.end());
   // double** peripheral = param->eye->Get_Peripheral();
   //double ** grayscale_peripheral = param->eye->Gray_Scale_Processing();
    //int peri_rows = param->eye->peripheral_rows;
    //int peri_cols = param->eye->peripheral_cols;
    //int** segmented_peripherals=param->eye->Get_Peripheral_Segmented();
 //this for weka only 
    //ofstream outfile;
int current_category = eval % category_nodes;
    if (re_evaluation||viewing) {
//cout<<"update_sernsors2"<<endl;
 //std::vector<std::vector<double> > rows;
           //snippet code for output file
//current_itrerate=iter;
 //string filename_final = param->statsFileName;
//stringstream ss;
//ss << current_iterate;
//string str = ss.str(); filename_final = filename_final + "_"+str;
          char fname_statistics[500];
        //sprintf(fname_statistics, "%s%s.txt", param->passive_FileDir, filename_final.c_str());
 //sprintf(fname_statistics, "%s%s.txt", param->passive_FileDir, param->statsFileName);

        //outfile.open(fname_statistics, ios::app);
        //outfile.setf(ios::fixed);
 
     //outfile<<current_category<<" ";
       //outfile<<outputs[0]<<" "<<outputs[1]<<" ";
        //outfile << "\"" << current_category << "\"";


    }// end of re-evaluation
//cout<<"update_sernsors1"<<endl;
    for (int i = 0; i < peri_rows; i++) {
        for (int j = 0; j < peri_cols; j++) { 
          // inputs.push_back(grayscale_peripheral[i][j]);
        }
    }
//cout<<"update_sernsors2"<<endl;
/*#ifdef mgsi_inputs_patterns
for(int k=0;k<no_of_files;k++){
if(k==eval){
string filename_final = param->statsFileName;
 char fname_statistics[500];
stringstream ss;
ss <<eval;
string str = ss.str(); filename_final = filename_final + "_"+str;
sprintf(fname_statistics, "%s%s.txt", param->passive_FileDir, filename_final.c_str());
outfile.open(fname_statistics, ios::app);
        outfile.setf(ios::fixed);
      outfile<<outputs[0]<<" "<<outputs[1]<<" ";
      for (int i = 0; i < peri_rows; i++) {
        for (int j = 0; j < peri_cols; j++) { 
               outfile << " " <<peripheral[i][j]<<" ";
        }
    }
outfile<<current_category;
 outfile <<endl;
 outfile.close();
}

}
#endif*/
//outfile<<current_category;
 //this for weka only  and general active vision analysis
        //outfile <<endl;
       // outfile.close();
//cout<<"update_sernsors1"<<endl;
    for (int i = 0; i < outputs.size(); i++) {
        inputs.push_back(outputs[i]); // input the efference copy of movement and categorization unit into the network
    }   

    for (int i = 0; i < outputs.size(); i++) outputs[i] = 0.0;
    //only do this when using the segmented method in the eye class
     int Rect_big=param->eye->bigRect;

    //Check if the periphery is out of image
    counter_for_out_of_image_view++;
   for(int i = 0; i <Rect_big; i++){
      for(int j=0;j<Rect_big;j++){
       //for(int i=0;i<25;i++){
          //if(segmented_peripherals[i][j]!=0){
       //if( inputs[i] > 0.05 ){//if any input is different from white then ....
        //if( inputs[i]!=1 ){
        counter_for_out_of_image_view = 0;
        break;
         //}
   }

  }
 
    if(counter_for_out_of_image_view == MAX_STEPS_OUT_OF_IMAGES) {
        //iter = param->num_iterations;
        counter_for_out_of_image_view = 0;
    }



}//end of update sensors

/* ---------------------------------------------------------------------------------------- */

void EXP_Class::update_controllers(void){
     //cout << "enter update controllers1" << endl;

  param->nets[0]->step(inputs, outputs); // assign input values into the network and gives out output
 //cout << "enter update controllers2" << endl;
   for(int i=0;i<inputs.size();i++){
cout<<" "<<inputs[i];
   }
cout<<endl; 
//this is just for the analysis of integration of memory over time (sensory-motor)
//outputs[0]=0.5;
//outputs[1]=0.5;



  if(re_evaluation){

      //total_nos_iter++;

      int current_category;
           //temp_eval=eval%5;

           // cout<<"category="<<" "<<category<<endl;

          if((iter>=ITER_START_FITNESS_COUNT) && (iter <100)){
reval_iterate++;
               current_category=eval% category_nodes;
#ifdef statistical_performance
if( current_category==0){
    for(int j=motor_nodes;j<outputs.size();j++){
        if( j==2)
        {
  sum_iter_output_two_cat_zero+=outputs[j];
 sum_gen_output_two_cat_zero+=pow((outputs[j]- average_output_two_cat_zero),2);
//cout<<"output2"<<" "<<sum_iter_output_two_cat_zero<<endl;
      //sum_gen_output_two_cat_zero+=((outputs[j]-0.999995)*(outputs[j]-0.999995));
    // sum_gen_output_two_cat_zero+=outputs[j]*outputs[j];
     count_output2_cat_zero++;
 //cout<<"count_output2_cat_zero"<<" "<<count_output2_cat_zero<<endl;
        }
        if( j==3)
        {
  sum_iter_output_three_cat_zero+=outputs[j];
 sum_gen_output_three_cat_zero+=pow((outputs[j]- average_output_three_cat_zero),2);
            //sum_gen_output_three_cat_zero+=outputs[j]*outputs[j];
//cout<<"output3"<<" "<<sum_iter_output_three_cat_zero<<endl;
  count_output3_cat_zero++;
  //cout<<"count_output3_cat_zero"<<" "<<count_output3_cat_zero<<endl;
        }
        if( j==4)
        {
   sum_iter_output_four_cat_zero+=outputs[j];
 sum_gen_output_four_cat_zero+=pow((outputs[j]- average_output_four_cat_zero),2);
       // sum_gen_output_four_cat_zero+=outputs[j]*outputs[j];
   count_output4_cat_zero++;
    //cout<<"count_output4_cat_zero"<<" "<<count_output4_cat_zero<<endl;
        }
        if( j==5)
        {
   sum_iter_output_five_cat_zero+=outputs[j];
 sum_gen_output_five_cat_zero+=pow((outputs[j]- average_output_five_cat_zero),2);
          //  sum_gen_output_five_cat_zero+=outputs[j]*outputs[j];
   count_output5_cat_zero++;
    //cout<<"count_output5_cat_zero"<<" "<<count_output5_cat_zero<<endl;
        }
        if(j==6)
        {
 sum_iter_output_six_cat_zero+=outputs[j];
 sum_gen_output_six_cat_zero+=pow((outputs[j]- average_output_six_cat_zero),2);
 //sum_gen_output_six_cat_zero+=outputs[j]*outputs[j];
 count_output6_cat_zero++;
  //cout<<"count_output6_cat_zero"<<" "<<count_output6_cat_zero<<endl;
        }


        }

    //aver_count_cat_zero++;

    //cout<<"count_cat_zero"<<" "<<count_cat_zero<<endl;

}

if( current_category==1){
    for(int j=2;j<outputs.size();j++){
        if( j==2)
        {
  sum_iter_output_two_cat_one+=outputs[j];
 sum_gen_output_two_cat_one+=pow((outputs[j]- average_output_two_cat_one),2);
           //sum_gen_output_two_cat_one+=outputs[j]*outputs[j];
 count_output2_cat_one++;
  //cout<<"count_output2_cat_one"<<" "<<count_output2_cat_one<<endl;
        }
        if(j==3)
        {
     sum_iter_output_three_cat_one+=outputs[j];
  sum_gen_output_three_cat_one+=pow((outputs[j]- average_output_three_cat_one),2);
      //sum_gen_output_three_cat_one+=outputs[j]*outputs[j];
     count_output3_cat_one++;
      //cout<<"count_output3_cat_one"<<" "<<count_output3_cat_one<<endl;
        }
        if( j==4)
        {
      sum_iter_output_four_cat_one+=outputs[j];
  sum_gen_output_four_cat_one+=pow((outputs[j]- average_output_four_cat_one),2);
       //sum_gen_output_four_cat_one+=outputs[j]*outputs[j];
      count_output4_cat_one++;
   //cout<<"count_output4_cat_one"<<" "<<count_output4_cat_one<<endl;
        }
        if(j==5)
        {
         sum_iter_output_five_cat_one+=outputs[j];
 sum_gen_output_five_cat_one+=pow((outputs[j]- average_output_five_cat_one),2);
       // sum_gen_output_five_cat_one+=outputs[j]*outputs[j];
         count_output5_cat_one++;
        //cout<<"count_output5_cat_one"<<" "<<count_output5_cat_one<<endl;
        }
        if(j==6)
        {
    sum_iter_output_six_cat_one+=outputs[j];
 sum_gen_output_six_cat_one+=pow((outputs[j]- average_output_six_cat_one),2);
   //sum_gen_output_six_cat_one+=outputs[j]*outputs[j];
    count_output6_cat_one++;
     //cout<<"count_output6_cat_one"<<" "<<count_output6_cat_one<<endl;
        }



    }

   //aver_count_cat_one++;
//cout<<"count_cat_one"<<" "<<count_cat_one<<endl;

}


if( current_category==2){

    for(int j=2;j<outputs.size();j++){
        if( j==2)
        {
sum_iter_output_two_cat_two+=outputs[j];
sum_gen_output_two_cat_two+=pow((outputs[j]- average_output_two_cat_two),2);
            //sum_gen_output_two_cat_two+=outputs[j]*outputs[j];
count_output2_cat_two++;
 //cout<<"count_output2_cat_two"<<" "<<count_output2_cat_two<<endl;
        }
        if( j==3)
        {
sum_iter_output_three_cat_two+=outputs[j];
sum_gen_output_three_cat_two+=pow((outputs[j]- average_output_three_cat_two),2);
         //sum_gen_output_three_cat_two+=outputs[j]*outputs[j];
count_output3_cat_two++;
 //cout<<"count_output3_cat_two"<<" "<<count_output3_cat_two<<endl;
        }
        if(j==4)
        {
      sum_iter_output_four_cat_two+=outputs[j];
   sum_gen_output_four_cat_two+=pow((outputs[j]- average_output_four_cat_two),2);
     // sum_gen_output_four_cat_two+=outputs[j]*outputs[j];
     count_output4_cat_two++;
      //cout<<"count_output4_cat_two"<<" "<<count_output4_cat_two<<endl;
        }
        if( j==5)
        {
sum_iter_output_five_cat_two+=outputs[j];
sum_gen_output_five_cat_two+=pow((outputs[j]- average_output_five_cat_two),2);
//sum_gen_output_five_cat_two+=outputs[j]*outputs[j];
count_output5_cat_two++;
 //cout<<"count_output5_cat_two"<<" "<<count_output5_cat_two<<endl;
        }
        if(j==6)
        {
sum_iter_output_six_cat_two+=outputs[j];
sum_gen_output_six_cat_two+=pow((outputs[j]- average_output_six_cat_two),2);
//sum_gen_output_six_cat_two+=outputs[j]*outputs[j];
count_output6_cat_two++;
// cout<<"count_output6_cat_two"<<" "<<count_output6_cat_two<<endl;
        }



}

    //aver_count_cat_two++;
    //cout<<"count_cat_two"<<" "<<count_cat_two<<endl;

}


if( current_category==3){
    for(int j=2;j<outputs.size();j++){

        if(j==2)
        {
sum_iter_output_two_cat_three+=outputs[j];
sum_gen_output_two_cat_three+=pow((outputs[j]- average_output_two_cat_three),2);
 //sum_gen_output_two_cat_three+=outputs[j]*outputs[j];
count_output2_cat_three++;
// cout<<"count_output2_cat_three"<<" "<<count_output2_cat_three<<endl;
        }
        if(j==3)
        {
sum_iter_output_three_cat_three+=outputs[j];
sum_gen_output_three_cat_three+=pow((outputs[j]- average_output_three_cat_three),2);
//sum_gen_output_three_cat_three+=outputs[j]*outputs[j];
 count_output3_cat_three++;
  //cout<<"count_output3_cat_three"<<" "<<count_output3_cat_three<<endl;
        }
        if( j==4)
        {
sum_iter_output_four_cat_three+=outputs[j];
sum_gen_output_four_cat_three+=pow((outputs[j]- average_output_four_cat_three),2);
  //sum_gen_output_four_cat_three+=outputs[j]*outputs[j];
count_output4_cat_three++;
 //cout<<"count_output4_cat_three"<<" "<<count_output4_cat_three<<endl;
        }
        if(j==5)
        {
sum_iter_output_five_cat_three+=outputs[j];
sum_gen_output_five_cat_three+=pow((outputs[j]- average_output_five_cat_three),2);
  //sum_gen_output_five_cat_three+=outputs[j]*outputs[j];
count_output5_cat_three++;
 //cout<<"count_output5_cat_three"<<" "<<count_output5_cat_three<<endl;
        }
        if(j==6)
        {
sum_iter_output_six_cat_three+=outputs[j];
sum_gen_output_six_cat_three+=pow((outputs[j]- average_output_six_cat_three),2);
 // sum_gen_output_six_cat_three+=outputs[j]*outputs[j];
count_output6_cat_three++;
 //cout<<"count_output6_cat_three"<<" "<<count_output6_cat_three<<endl;
        }



    }

   // aver_count_cat_three++;

    //cout<<"count_cat_three"<<" "<<count_cat_three<<endl;

}



if( current_category==4){
    for(int j=2;j<outputs.size();j++){
        if(j==2)
        {
sum_iter_output_two_cat_four+=outputs[j];
sum_gen_output_two_cat_four+=pow((outputs[j]- average_output_two_cat_four),2);
//sum_gen_output_two_cat_four+=outputs[j]*outputs[j];
count_output2_cat_four++;
 //cout<<"count_output2_cat_four"<<" "<<count_output2_cat_four<<endl;
        }
        if(j==3)
        {
 sum_iter_output_three_cat_four+=outputs[j];
sum_gen_output_three_cat_four+=pow((outputs[j]- average_output_three_cat_four),2);
  //sum_gen_output_three_cat_four+=outputs[j]*outputs[j];
  count_output3_cat_four++;
  //cout<<"count_output3_cat_four"<<" "<<count_output3_cat_four<<endl;
        }
        if( j==4)
        {
sum_iter_output_four_cat_four+=outputs[j];
sum_gen_output_four_cat_four+=pow((outputs[j]- average_output_four_cat_four),2);
//sum_gen_output_four_cat_four+=outputs[j]*outputs[j];
count_output4_cat_four++;
//cout<<"count_output4_cat_four"<<" "<<count_output4_cat_four<<endl;
        }
        if( j==5)
        {
sum_iter_output_five_cat_four+=outputs[j];
sum_gen_output_five_cat_four+=pow((outputs[j]- average_output_five_cat_four),2);
//sum_gen_output_five_cat_four+=outputs[j]*outputs[j];
 count_output5_cat_four++;
 //cout<<"count_output5_cat_four"<<" "<<count_output5_cat_four<<endl;
        }
        if(j==6)
        {
sum_iter_output_six_cat_four+=outputs[j];
sum_gen_output_six_cat_four+=pow((outputs[j]- average_output_six_cat_four),2);
//sum_gen_output_six_cat_four+=outputs[j]*outputs[j];
count_output6_cat_four++;
//cout<<"count_output6_cat_four"<<" "<<count_output6_cat_four<<endl;
        }




    }


}
#else
              int rank=0, rank_zero=0, rank_one=0, rank_two=0, rank_three=0,rank_four=0,rank_five=0;
              vector<double> outputs_cpy;
              vector<double> rank_index;

              outputs_cpy.assign(category_nodes,0);
              rank_index.assign(category_nodes,0);

              for(int i=motor_nodes; i<outputs.size();i++){
                rank_index[i-motor_nodes]=(i-motor_nodes);
                outputs_cpy[i-motor_nodes]=outputs[i];
              }

              double temp_value;
              for(int i=0;i<outputs_cpy.size();i++){
                for(int j=0;j<outputs_cpy.size()-1;j++){
              if(outputs_cpy[j] > outputs_cpy[j+1]){
                temp_value=outputs_cpy[j];
                outputs_cpy[j]=outputs_cpy[j+1];
                outputs_cpy[j+1]=temp_value;
                temp_value=rank_index[j];
                rank_index[j]=rank_index[j+1];
                rank_index[j+1]=temp_value;
              }
                }
              }

              //determines the ranking of current categories
/* ---------------------------------------------------------------------------------------- */
              for(int i=0;i<rank_index.size();i++){
                if(rank_index[i]==(eval%category_nodes)){
              rank=((category_nodes-1)-i);
              break;
                }
              }
//this is use to calculate the number eye actions made in recognition/categorisation for each category
/* ---------------------------------------------------------------------------------------- */

 /*if(rank==0){
  if(current_category==0){

  }else if(current_category==1){
   }else if(current_category==2){
 }else if(current_category==3){
    }else if(current_category==3){

   }

 }*/

  /* ---------------------------------------------------------------------------------------- */

              for(int i=0;i<rank_index.size();i++){
                if(rank_index[i]==0){
           rank_zero=((category_nodes-1)-i);
              break;
                }
              }


              for(int i=0;i<rank_index.size();i++){
                if(rank_index[i]==1){
           rank_one=((category_nodes-1)-i);
              break;
                }
              }




              for(int i=0;i<rank_index.size();i++){
                if(rank_index[i]==2){
           rank_two=((category_nodes-1)-i);
              break;
                }
              }




              for(int i=0;i<rank_index.size();i++){
                if(rank_index[i]==3){
           rank_three=((category_nodes-1)-i);
              break;
                }
              }


              for(int i=0;i<rank_index.size();i++){
                if(rank_index[i]==4){
           rank_four=((category_nodes-1)-i);
              break;
                }
              }

              for(int i=0;i<rank_index.size();i++){
                if(rank_index[i]==5){
           rank_five=((category_nodes-1)-i);
              break;
                }

              }

//cout<<"rank="<<" "<<rank<<endl;
                       if(rank==0){
                               if( current_category==0){
                                  count_cat_zero++;
                                   //cout<<"count_cat_zero="<<" "<<count_cat_zero<<endl;
                               }
                              else if(current_category==1){
                                   count_cat_one++;
                                   //cout<<"count_cat_one="<<" "<<count_cat_one<<endl;
                               }
                              else if( current_category==2){
                                   count_cat_two++;
                                    //cout<<"count_cat_two="<<" "<<count_cat_two<<endl;
                               }
                             else if( current_category==3){
                                   count_cat_three++;
                                    //cout<<"count_cat_three="<<" "<<count_cat_three<<endl;
                               }
                              else if( current_category==4){
                                   count_cat_four++;
                                    //cout<<"count_cat_four="<<" "<<count_cat_four<<endl;
                               }
                               
                            } else{
                           if( current_category==0){
                             if(rank_zero==0){
                                   not_count2_cat_zero++;
                             }
                             if(rank_one==0){
                                 not_count3_cat_zero++;
                              }
                              if(rank_two==0){
                                   not_count4_cat_zero++;
                              }
                              if(rank_three==0){
                                  not_count5_cat_zero++;
                              }
                             if(rank_four==0){
                                    not_count6_cat_zero++;
                              }
                            
                           }
                          else if(current_category==1){
                               if(rank_zero==0){
                                    count_output2_cat_one_index++;
                               }
                               if(rank_one==0){
                                    count_output3_cat_one_index++;
                               }
                               if(rank_two==0){
                                    count_output4_cat_one_index++;
                               }
                               if(rank_three==0){
                                    count_output5_cat_one_index++;
                               }
                               if(rank_four==0){
                                    count_output6_cat_one_index++;
                               }
                               
                           }
                          else if( current_category==2){
                               if(rank_zero==0){
                                    count_output2_cat_two_index++;
                               }
                               if(rank_one==0){
                                    count_output3_cat_two_index++;
                               }
                               if(rank_two==0){
                                    count_output4_cat_two_index++;
                               }
                               if(rank_three==0){
                                    count_output5_cat_two_index++;
                               }
                               if(rank_four==0){
                                    count_output6_cat_two_index++;
                               }
                               
                           }
                         else if( current_category==3){
                               if(rank_zero==0){
                                    count_output2_cat_three_index++;
                               }
                               if(rank_one==0){
                                    count_output3_cat_three_index++;
                               }
                               if(rank_two==0){
                                    count_output4_cat_three_index++;
                               }
                               if(rank_three==0){
                                    count_output5_cat_three_index++;
                               }
                               if(rank_four==0){
                                    count_output6_cat_three_index++;
                               }
                             
                           }
                          else if( current_category==4){
                               if(rank_zero==0){
                                    count_output2_cat_four_index++;
                               }
                               if(rank_one==0){
                                    count_output3_cat_four_index++;
                               }
                               if(rank_two==0){
                                    count_output4_cat_four_index++;
                               }
                               if(rank_three==0){
                                    count_output5_cat_four_index++;
                               }
                               if(rank_four==0){
                                    count_output6_cat_four_index++;
                               }
                              


                           }

                       
}

#endif
          } //end of strat_iterate_count


  }//end of re_valuation

 //cout << "leave update_controllers" << endl;


}//end of update controller




/* ---------------------------------------------------------------------------------------- */
//Set the eye movement at every iteration

void EXP_Class::update_world(){
 // cout << "enter update_world" << endl;


  //ofstream outfile;
/*string filename="grey_motor_current_category";
stringstream ss;
ss <<current_category;
string str = ss.str(); filename = filename + "_"+str;
string locationOfFileTodump="/home/oal/Documents/Neural_Genetic_8/EXP/passive_expeiment/";*/
int current_category=eval%category_nodes;
  //current_eye_position[0] += (int)(rint( (outputs[0]*24.0) -12.0) );
  //current_eye_position[1] += (int)(rint( (outputs[1]*24.0) -12.0) );
  //param->eye->Set_Eye_Movement(current_eye_position);
// char fname_statistics[500];
 //sprintf(fname_statistics, "%s%s.txt", param->passive_FileDir, param->statsFileName);
        //outfile.open(fname_statistics, ios::app);
        //outfile.setf(ios::fixed);
//outfile<<current_category<<" "<<current_eye_position[0]<<" "<<current_eye_position[1]<<endl;
 //outfile.close();
  //param->eye->Set_Eye_Movement(outputs);
   //param->eye->Set_Passive_Eye_Movement(passive_scan);
//cout << "leave update_world" << endl;

}

/* ---------------------------------------------------------------------------------------- */

void EXP_Class::manage_collisions (void ){
  
}

/* ---------------------------------------------------------------------------------------- */


void EXP_Class::compute_fitness( void ){
//cout << "enter compute fitness" << endl;
  if((iter>=ITER_START_FITNESS_COUNT) && (iter<100)){
    int rank=0;    
    vector<double> outputs_cpy;
    vector<double> rank_index;
    
    outputs_cpy.assign(  category_nodes,0);
    rank_index.assign( category_nodes,0);
    
    for(int i=motor_nodes; i<outputs.size();i++){
      rank_index[i-motor_nodes]=(i-motor_nodes);
      outputs_cpy[i-motor_nodes]=outputs[i];
    }
    
    double temp_value;
    for(int i=0;i<outputs_cpy.size();i++){
      for(int j=0;j<outputs_cpy.size()-1;j++){
	if(outputs_cpy[j] > outputs_cpy[j+1]){
	  temp_value=outputs_cpy[j];
	  outputs_cpy[j]=outputs_cpy[j+1];
	  outputs_cpy[j+1]=temp_value;
	  temp_value=rank_index[j];
	  rank_index[j]=rank_index[j+1];
	  rank_index[j+1]=temp_value;
	}
      }
    }
    
    for(int i=0;i<rank_index.size();i++){
      if(rank_index[i]==(eval% category_nodes)){
    rank=( (category_nodes-1)-i);
	break;
      }
    }

    double fit_temp=0.5*(1.0/pow(2,rank));
    double sum_out=0.0;

    vector<double> outputs_cpy_2;
    outputs_cpy_2.assign( category_nodes,0);
       for(int i=motor_nodes; i<outputs.size();i++){
         outputs_cpy_2[i-motor_nodes]=outputs[i];
       }

    for(int i=0;i<category_nodes;i++){
      if(i!=(eval%category_nodes)){
      sum_out+=((1.0-outputs_cpy_2[i])*(0.5/ (double)(category_nodes-1)));
      }
    }
    
    
   fit_temp+= ((sum_out + (outputs_cpy_2[(eval% category_nodes)]*0.5)) *0.5);

    
    fitness[eval]+=fit_temp;

    //cout<<"Fitness= "<<fit_temp<<endl;
  }

//cout << "leave compute fitness" << endl;


}

/* ---------------------------------------------------------------------------------------- */

void EXP_Class::finalise_single_evaluation ( void ){
 // cout<<"begin finalize single evaluation "<<endl;
if(evolution){
  total_fitness[0]+=fitness[eval]/(double)(param->num_iterations-ITER_START_FITNESS_COUNT);
}

if(re_evaluation){
 total_fitness[0]+=fitness[eval];
}
 //total_fitness[0]+=fitness[eval];

 //cout<<"leave finalize single evaluation "<<endl;
  
}

/* ---------------------------------------------------------------------------------------- */

void EXP_Class::finalise_evaluations_loop( void )
{


 //cout<<"begin finalize evaluation loop "<<endl;


   
    if(evolution){
  total_fitness[0]/=(double)(param->num_evaluations);
      //total_fitness[0]/=(double)(num_eval*num_iter_eval);
  generational_avg_fitness += total_fitness[0]/*FINAL_FITNESS*/;
  if( genotype == 0 ){
    generational_max_fitness     = total_fitness[0]/*FINAL_FITNESS*/;
    generational_min_fitness     = total_fitness[0]/*FINAL_FITNESS*/;
  }
  else{
    if( total_fitness[0] > generational_max_fitness ){
      generational_max_fitness     = total_fitness[0] /*FINAL_FITNESS*/;
    }
    else if(total_fitness[0] < generational_min_fitness )
      generational_min_fitness = total_fitness[0] /*FINAL_FITNESS*/;
  }

    }

  if(re_evaluation){
 double num_range_iter_eval, num_eval;

    //total_fitness[0]/=(double)(param->num_evaluations);
    num_range_iter_eval=(double)(param->num_iterations-ITER_START_FITNESS_COUNT);
    num_eval=(double)(param->num_evaluations);
     total_fitness[0]/=(double)(num_eval*num_range_iter_eval);
    reval_total_fitness = total_fitness[0];
  }

  if(re_evaluation){ //begin re-evaluation condition

#ifdef statistical_performance
  average_output_two_cat_zero= sum_iter_output_two_cat_zero/(double)count_output2_cat_zero;
       average_output_three_cat_zero= sum_iter_output_three_cat_zero/(double)count_output3_cat_zero;
       average_output_four_cat_zero= sum_iter_output_four_cat_zero/(double)count_output4_cat_zero;
       average_output_five_cat_zero= sum_iter_output_five_cat_zero/(double)count_output5_cat_zero;
       average_output_six_cat_zero= sum_iter_output_six_cat_zero/(double)count_output6_cat_zero;

       average_output_two_cat_one= sum_iter_output_two_cat_one/(double)count_output2_cat_one;
       average_output_three_cat_one= sum_iter_output_three_cat_one/(double)count_output3_cat_one;
       average_output_four_cat_one= sum_iter_output_four_cat_one/(double)count_output4_cat_one;
       average_output_five_cat_one= sum_iter_output_five_cat_one/(double)count_output5_cat_one;
       average_output_six_cat_one= sum_iter_output_six_cat_one/(double)count_output6_cat_one;

       average_output_two_cat_two= sum_iter_output_two_cat_two/(double)count_output2_cat_two;
       average_output_three_cat_two= sum_iter_output_three_cat_two/(double)count_output3_cat_two;
       average_output_four_cat_two= sum_iter_output_four_cat_two/(double)count_output4_cat_two;
       average_output_five_cat_two= sum_iter_output_five_cat_two/(double)count_output5_cat_two;
       average_output_six_cat_two= sum_iter_output_six_cat_two/(double)count_output6_cat_two;

       average_output_two_cat_three= sum_iter_output_two_cat_three/(double)count_output2_cat_three;
       average_output_three_cat_three= sum_iter_output_three_cat_three/(double)count_output3_cat_three;
       average_output_four_cat_three= sum_iter_output_four_cat_three/(double)count_output4_cat_three;
       average_output_five_cat_three= sum_iter_output_five_cat_three/(double)count_output5_cat_three;
       average_output_six_cat_three= sum_iter_output_six_cat_three/(double)count_output6_cat_three;

       average_output_two_cat_four= sum_iter_output_two_cat_four/(double)count_output2_cat_four;
       average_output_three_cat_four= sum_iter_output_three_cat_four/(double)count_output3_cat_four;
       average_output_four_cat_four= sum_iter_output_four_cat_four/(double)count_output4_cat_four;
       average_output_five_cat_four= sum_iter_output_five_cat_four/(double)count_output5_cat_four;
       average_output_six_cat_four= sum_iter_output_six_cat_four/(double)count_output6_cat_four;


averages=(double)((average_output_two_cat_zero+average_output_three_cat_one+average_output_four_cat_two+average_output_five_cat_three+average_output_six_cat_four)/5.0); //to confirm
 standard_deviations= sqrt(((average_output_two_cat_zero-averages)*(average_output_two_cat_zero-averages))+((average_output_three_cat_one-averages)*(average_output_three_cat_one-averages))
         +((average_output_four_cat_two-averages)*(average_output_four_cat_two-averages))+((average_output_five_cat_three-averages)*(average_output_five_cat_three-averages))+((average_output_six_cat_four-averages)*(average_output_six_cat_four-averages))/5.0);


//this calculate individual category standard deviations for all trials
           std_output_two_cat_zero= sqrt(sum_gen_output_two_cat_zero/count_output2_cat_zero);
           std_output_three_cat_zero= sum_gen_output_three_cat_zero/count_output3_cat_zero;
           std_output_four_cat_zero= sum_gen_output_four_cat_zero/count_output4_cat_zero;
           std_output_five_cat_zero= sum_gen_output_five_cat_zero/count_output5_cat_zero;
           std_output_six_cat_zero= sum_gen_output_six_cat_zero/count_output6_cat_zero;
           std_output_two_cat_one= sum_gen_output_two_cat_one/count_output2_cat_one;
           std_output_three_cat_one= sum_gen_output_three_cat_one/count_output3_cat_one;
           std_output_four_cat_one= sum_gen_output_four_cat_one/count_output4_cat_one;
           std_output_five_cat_one= sum_gen_output_five_cat_one/count_output5_cat_one;
           std_output_six_cat_one= sum_gen_output_six_cat_one/count_output6_cat_one;
           std_output_two_cat_two= sum_gen_output_two_cat_two/count_output2_cat_two;
           std_output_three_cat_two= sum_gen_output_three_cat_two/count_output3_cat_two;
           std_output_four_cat_two= sum_gen_output_four_cat_two/count_output4_cat_two;
           std_output_five_cat_two= sum_gen_output_five_cat_two/count_output5_cat_two;
           std_output_six_cat_two= sum_gen_output_six_cat_two/count_output6_cat_two;
           std_output_two_cat_three= sum_gen_output_two_cat_three/count_output2_cat_three;
           std_output_three_cat_three= sum_gen_output_three_cat_three/count_output3_cat_three;
           std_output_four_cat_three= sum_gen_output_four_cat_three/count_output4_cat_three;
           std_output_five_cat_three= sum_gen_output_five_cat_three/count_output5_cat_three;
           std_output_six_cat_three= sum_gen_output_six_cat_three/count_output6_cat_three;
           std_output_two_cat_four= sum_gen_output_two_cat_four/count_output2_cat_four;
           std_output_three_cat_four= sum_gen_output_three_cat_four/count_output3_cat_four;
           std_output_four_cat_four= sum_gen_output_four_cat_four/count_output4_cat_four;
           std_output_five_cat_four= sum_gen_output_five_cat_four/count_output5_cat_four;
           std_output_six_cat_four= sum_gen_output_six_cat_four/count_output6_cat_four;
    
#else 

total_cat_zero=count_cat_zero+not_count3_cat_zero+not_count4_cat_zero+not_count5_cat_zero+not_count6_cat_zero;
total_cat_one=count_cat_one+count_output2_cat_one_index+count_output4_cat_one_index+count_output5_cat_one_index+count_output6_cat_one_index;

total_cat_two=count_cat_two+count_output2_cat_two_index+count_output3_cat_two_index+count_output5_cat_two_index+count_output6_cat_two_index;
total_cat_three=count_cat_three+count_output2_cat_three_index+count_output3_cat_three_index+count_output4_cat_three_index+count_output6_cat_three_index;
total_cat_four=count_cat_four+count_output2_cat_four_index+count_output3_cat_four_index+count_output4_cat_four_index+count_output5_cat_four_index;

 cat_zero_correct_in_percent =(((double)count_cat_zero/(double)(total_cat_zero))*100.0);
 output3_correct_percent_cat_zero =(double)(((double)not_count3_cat_zero/(double)(total_cat_zero))*100.0);
output4_correct_percent_cat_zero =(double)(((double)not_count4_cat_zero/(double)(total_cat_zero))*100.0);
 output5_correct_percent_cat_zero =(double)(((double)not_count5_cat_zero/(double)(total_cat_zero))*100.0);
 output6_correct_percent_cat_zero =(double)(((double)not_count6_cat_zero/(double)(total_cat_zero))*100.0);
 

  output2_correct_percent_cat_one=(double)(((double)count_output2_cat_one_index/(double)(total_cat_one))*100.0);
  cat_one_correct_in_percent =(double)(((double)count_cat_one/(double)(total_cat_one))*100.0);
  output4_correct_percent_cat_one=(double)(((double)count_output4_cat_one_index/(double)(total_cat_one))*100.0);
  output5_correct_percent_cat_one=(double)(((double)count_output5_cat_one_index/(double)(total_cat_one))*100.0);
  output6_correct_percent_cat_one=(double)(((double)count_output6_cat_one_index/(double)(total_cat_one))*100.0);


  output2_correct_percent_cat_two=(double)(((double)count_output2_cat_two_index/(double)(total_cat_two))*100.0);
  output3_correct_percent_cat_two=(double)(((double)count_output3_cat_two_index/(double)(total_cat_two))*100.0);
  cat_two_correct_in_percent =(double)(((double)count_cat_two/(double)(total_cat_two))*100.0);
  output5_correct_percent_cat_two=(double)(((double)count_output5_cat_two_index/(double)(total_cat_two))*100.0);
  output6_correct_percent_cat_two=(double)(((double)count_output6_cat_two_index/(double)(total_cat_two))*100.0);


  output2_correct_percent_cat_three=(double)(((double)count_output2_cat_three_index/(double)(total_cat_three))*100.0);
  output3_correct_percent_cat_three=(double)(((double)count_output3_cat_three_index/(double)(total_cat_three))*100.0);
  output4_correct_percent_cat_three=(double)(((double)count_output4_cat_three_index/(double)(total_cat_three))*100.0);
 cat_three_correct_in_percent =(double)(((double)count_cat_three/(double)(total_cat_three))*100.0);
  output6_correct_percent_cat_three=(double)(((double)count_output6_cat_three_index/(double)(total_cat_three))*100.0);

  output2_correct_percent_cat_four=(double)(((double)count_output2_cat_four_index/(double)(total_cat_four))*100.0);
  output3_correct_percent_cat_four=(double)(((double)count_output3_cat_four_index/(double)(total_cat_four))*100.0);
  output4_correct_percent_cat_four=(double)(((double)count_output4_cat_four_index/(double)(total_cat_four))*100.0);
  output5_correct_percent_cat_four=(double)(((double)count_output5_cat_four_index/(double)(total_cat_four))*100.0);
  cat_four_correct_in_percent =(double)(((double)count_cat_four/(double)(total_cat_four))*100.0);
    

average=(double)((cat_zero_correct_in_percent+cat_one_correct_in_percent+cat_two_correct_in_percent+cat_three_correct_in_percent+cat_four_correct_in_percent)/5.0); //to confirm

 standard_deviation= sqrt((((cat_zero_correct_in_percent-average)*(cat_zero_correct_in_percent-average))+((cat_one_correct_in_percent-average)*(cat_one_correct_in_percent-average))
         +((cat_two_correct_in_percent-average)*(cat_two_correct_in_percent-average))+((cat_three_correct_in_percent-average)*(cat_three_correct_in_percent-average))+((cat_four_correct_in_percent-average)*(cat_four_correct_in_percent-average))/5.0));
#endif
     

  }//end of re-evaluation condition
//cout<<"end finalize evaluation loop "<<endl;


}

/* ---------------------------------------------------------------------------------------- */

void EXP_Class::assign_fitness_to_genotype( void ){
 // cout<<"begin assign fitness to genotype"<<endl;
  param->ga->assign_fitness( genotype,total_fitness /* const vector <double> & FINAL_FITNESS */ );
   // cout<<"end assign fitness to genotype"<<endl;
  /*if(viewing){
      cout<< sum_gen_output_two_cat_zero<<endl;
      cout<< sum_gen_output_three_cat_zero<<endl;
      cout<< sum_gen_output_four_cat_zero<<endl;
      cout<< sum_gen_output_five_cat_zero<<endl;
      cout<< sum_gen_output_six_cat_zero<<endl;
  }*/
// cout<<"leave assign fitness to genotype"<<endl;
}

/* ---------------------------------------------------------------------------------------- */

void EXP_Class::finalise_genotypes_loop( void ){


  //cout<<"begin finalize genotype loop"<<endl;
  if( !(generation%param->dump_stats_every) )
    dump_statistics( param->statsFileDir, param->statsFileName, generation);
  if( !(generation%param->dump_genome_every) )
    param->ga->dump_genome_into_file( param->genomeFileDir,  param->genomeFileName, generation );
  
  //This is the function that create s a new generation of solutions (genotypes)
  param->ga->breeding();
  // cout<<"end finalize genotype loop"<<endl;
}

/* ---------------------------------------------------------------------------------------- */

void EXP_Class::finalise_evolutionary_run( void ){}

/* ---------------------------------------------------------------------------------------- */

bool EXP_Class::stop_iterations_loop( void ){
  //This function should not be changed
// cout<<"enter stop iteration loop"<<endl;
  if(iter >= param->num_iterations){
    finalise_single_evaluation( );
    iter = 0;
    if( viewing ) stop_evaluations_loop( );

    return false;
  }
  else {
    return true;
  }

 //cout<<"end stop iteration loop"<<endl;

}

/* ---------------------------------------------------------------------------------------- */

bool EXP_Class::stop_evaluations_loop( void ){
//cout<<"enter stop evaluations loop"<<endl;
  eval++;
  if( evolution ){ 
    if( eval >= param->num_evaluations ) {
      eval = 0;

      finalise_evaluations_loop( );
      assign_fitness_to_genotype();
      return false;
    }
    else{
      return true;
    }
  }
  else{
    if( viewing ) {
      if( eval >= param->num_evaluations ) {
	eval = 0;
	finalise_evaluations_loop( );
      }
      init_single_evaluation( );
      return true;
    }

      else if( re_evaluation ){
      if( eval >= param->num_evaluations ) {
      eval = 0;	
      finalise_evaluations_loop( );
      return false;
      }
      else{
      return true;
      }

      }

  }

  //cout<<"end stop evaluations loop"<<endl;

}

/* ---------------------------------------------------------------------------------------- */

bool EXP_Class::stop_genotypes_loop( void ){
//cout<<"enter stop genotypes loop"<<endl;
  genotype++;
  if( genotype >= param->ga->get_num_tot_solutions() ) {
    finalise_genotypes_loop( );
    genotype = 0;
    return false;
  }
  else
    return true;
  //cout<<"end stop genotypes loop"<<endl;
}

/* ---------------------------------------------------------------------------------------- */

bool EXP_Class::stop_generations_loop( void ){
//cout<<"enter stop generation loop"<<endl;
  generation++;
  if( generation >= param->num_generations ) {
    finalise_evolutionary_run();
    generation = 0;

    return false;
  }
  else {

    return true;
  }


//cout<<"end stop generation loop"<<endl;

}

/* ---------------------------------------------------------------------------------------- */
//THIS IS FOR THE EVOLUTIONARY RUN
void EXP_Class::dump_statistics( const char *locationOfFileTodump,
				      const char *fileName, int generation ) {
   //cout<<" "<<"get into dump_statitics"<<endl;
  char fname_statistics[500];
  sprintf(fname_statistics, "%s%s.data", locationOfFileTodump, fileName ); 
  ofstream outfile;
  outfile.open (fname_statistics, ios::app);
  outfile.setf(ios::fixed);
  
  outfile << " " << generation
   	  << " " <<  generational_max_fitness                                       //the fitness of the best
   	  << " " << (generational_avg_fitness)/(double)(param->ga->get_num_tot_solutions() )  // the mean fitness
	  << " " << generational_min_fitness                                       //the fitness of the worst
      	  << endl;
  outfile.close();
    //cout<<" "<<"End dump_statitics"<<endl;
}

// THIS IS FOR RE-EVALUATION
void EXP_Class::Re_eval_dump_statistics( const char *locationOfFileTodump,
                      const char *fileName, int generation ) {
   char fname_statistics[500];
   sprintf(fname_statistics, "%s%s.data", locationOfFileTodump, fileName );
   ofstream outfile;
   outfile.open (fname_statistics, ios::app);
   outfile.setf(ios::fixed);
#ifdef statistical_performance
//compute average activation values, total average for current categories and total average for current categories
/*outfile << " " << generation << " " << reval_total_fitness<< " " << average_output_two_cat_zero<< " " <<average_output_three_cat_zero<< " " <<average_output_four_cat_zero<< " " <<average_output_five_cat_zero<< " " << average_output_six_cat_zero<< " " << average_output_two_cat_one<< " " <<  average_output_three_cat_one<< " " <<average_output_four_cat_one<< " " <<average_output_five_cat_one<< " " << average_output_six_cat_one<< " " <<average_output_two_cat_two<< " " <<average_output_three_cat_two<< " " <<average_output_four_cat_two<< " " <<average_output_five_cat_two<< " " << average_output_six_cat_two<< " " << average_output_two_cat_three<< " " <<  average_output_three_cat_three<< " " <<average_output_four_cat_three<< " " <<average_output_five_cat_three<< " " << average_output_six_cat_three<< " " << average_output_two_cat_four<< " " <<  average_output_three_cat_four<< " " <<average_output_four_cat_four<< " " <<average_output_five_cat_four<< " " << average_output_six_cat_four <<" "<<averages<<" "<<standard_deviations<<endl;*/

//compute individual standard deviation for each category
outfile << " " << generation << " " << reval_total_fitness<< " " <<  std_output_two_cat_zero<< " " << std_output_three_cat_zero<< " " << std_output_four_cat_zero<< " " << std_output_five_cat_zero<< " " << std_output_six_cat_zero<< " " <<  std_output_two_cat_one<< " " <<  std_output_three_cat_one<< " " << std_output_four_cat_one<< " " << std_output_five_cat_one<< " " << std_output_six_cat_one<< " " << std_output_two_cat_two<< " " <<std_output_three_cat_two<< " " <<std_output_four_cat_two<< " " <<std_output_five_cat_two<< " " << std_output_six_cat_two<< " " << std_output_two_cat_three<< " " <<  std_output_three_cat_three<< " " <<std_output_four_cat_three<< " " <<std_output_five_cat_three<< " " << std_output_six_cat_three<< " " << std_output_two_cat_four<< " " <<  std_output_three_cat_four<< " " <<std_output_four_cat_four<< " " <<std_output_five_cat_four<< " " <<std_output_six_cat_four<<endl;

#else 
//this is for performance base on percenttage of correct categorisation
   outfile << " " << generation
       << " " << reval_total_fitness
  << " " << cat_zero_correct_in_percent<< " " <<  output3_correct_percent_cat_zero<< " " << output4_correct_percent_cat_zero<< " " << output5_correct_percent_cat_zero<< " " << output6_correct_percent_cat_zero
  << " " << output2_correct_percent_cat_one<< " " <<cat_one_correct_in_percent<< " " << output4_correct_percent_cat_one<< " " << output5_correct_percent_cat_one<< " " << output6_correct_percent_cat_one
  << " " <<output2_correct_percent_cat_two << " " <<  output3_correct_percent_cat_two<< " " <<cat_two_correct_in_percent << " " << output5_correct_percent_cat_two<< " " << output6_correct_percent_cat_two
  << " " <<output2_correct_percent_cat_three<< " " <<  output3_correct_percent_cat_three<< " " << output4_correct_percent_cat_three<< " " <<cat_three_correct_in_percent << " " << output6_correct_percent_cat_three
   << " " <<output2_correct_percent_cat_four << " " <<  output3_correct_percent_cat_four<< " " << output4_correct_percent_cat_four<< " " << output5_correct_percent_cat_four<< " " <<cat_four_correct_in_percent
  <<" "<<average<<" "<<standard_deviation<<endl;
#endif
   outfile.close();
    
}


/*void EXP_Class::_dump_passive_vision_statistics( const char *locationOfFileTodump,
                      const char *fileName) {
   // cout<<" "<<"get into dump_statitics"<<endl;
    int current_category=eval%5;
    if(re_evaluation){
  char fname_statistics[500];
  sprintf(fname_statistics, "%s%s.data", locationOfFileTodump, fileName );
  ofstream outfile;
  outfile.open (fname_statistics, ios::app);
  outfile.setf(ios::fixed);

  outfile << " " << current_category
      << " " << generational_max_fitness     //the fitness of the best
         << " " << count_cat_zero

               << " " << count_cat_one

                     << " " << count_cat_two

                           << " " << count_cat_three

                              << " " << count_cat_four

     // << " " << (generational_avg_fitness)/(double)(param->ga->get_num_tot_solutions() )  // the mean fitness
     // << " " << generational_min_fitness                                       //the fitness of the worst
          << endl;
  outfile.close();
     //cout<<" "<<"End dump_statitics"<<endl;
    }
}*/

/* ---------------------------------------------------------------------------------------- */
/* ------------------------------------------------------------------------------------------ */
/* ---------------------------------------------------------------------------------------- */
/* ---------------------------------------------------------------------------------------- */
/* ---------------------------------------------------------------------------------------- */





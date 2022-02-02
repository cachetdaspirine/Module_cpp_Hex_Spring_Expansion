#include "Header.h"

int main(int argc, char* argv[])
{
        /*
           int array[10*10]={1,1,1,1,1,1,1,1,1,1,
                          1,1,1,1,1,1,1,1,1,1,
                          1,1,1,1,1,1,1,1,1,1,
                          1,1,1,1,1,1,1,1,1,1,
                          1,1,1,1,1,1,1,1,1,1,
                          1,1,1,1,1,1,1,1,1,1,
                          1,1,1,1,1,1,1,1,1,1,
                          1,1,1,1,1,1,1,1,1,1,
                          1,1,1,1,1,1,1,1,1,1,
                          1,1,1,1,1,1,1,1,1,1};        */
        /*int array[5*5]={0,0,0,0,0,
                         0,0,0,0,0,
                         0,0,1,1,0,
                         0,0,0,0,0,
                         0,0,0,0,0};*/

        int array[50*50];
        for(int i = 0;i<50*50;i++){array[i] = 1;}
        //double* CouplingMaxtrix;
        //CouplingMaxtrix = new double[12*12];

        double CouplingMaxtrix[12*12] = { 1.2140625 ,  0.27225661, -0.37125   ,  0.        , -0.75      ,
                -0.4330125 ,  0.        ,  0.        ,  0.        ,  0.        ,
                -0.0928125 ,  0.16075589,
                0.27225661,  1.5284375 ,  0.        ,  0.        , -0.4330125 ,
                -0.25      ,  0.        ,  0.        ,  0.        , -1.        ,
                 0.16075589, -0.2784375 ,
               -0.37125   ,  0.        ,  1.2140625 , -0.27225661, -0.0928125 ,
                -0.16075589,  0.        ,  0.        ,  0.        ,  0.        ,
                -0.75      ,  0.4330125 ,
                0.        ,  0.        , -0.27225661,  1.5284375 , -0.16075589,
                -0.2784375 ,  0.        , -1.        ,  0.        ,  0.        ,
                 0.4330125 , -0.25      ,
               -0.75      , -0.4330125 , -0.0928125 , -0.16075589,  1.685625  ,
                 0.        , -0.0928125 ,  0.16075589, -0.75      ,  0.4330125 ,
                 0.        ,  0.        ,
               -0.4330125 , -0.25      , -0.16075589, -0.2784375 ,  0.        ,
                 1.056875  ,  0.16075589, -0.2784375 ,  0.4330125 , -0.25      ,
                 0.        ,  0.        ,
                0.        ,  0.        ,  0.        ,  0.        , -0.0928125 ,
                 0.16075589,  1.2140625 ,  0.27225661, -0.37125   ,  0.        ,
                -0.75      , -0.4330125 ,
                0.        ,  0.        ,  0.        , -1.        ,  0.16075589,
                -0.2784375 ,  0.27225661,  1.5284375 ,  0.        ,  0.        ,
                -0.4330125 , -0.25      ,
                0.        ,  0.        ,  0.        ,  0.        , -0.75      ,
                 0.4330125 , -0.37125   ,  0.        ,  1.2140625 , -0.27225661,
                -0.0928125 , -0.16075589,
                0.        , -1.        ,  0.        ,  0.        ,  0.4330125 ,
                -0.25      ,  0.        ,  0.        , -0.27225661,  1.5284375 ,
                -0.16075589, -0.2784375 ,
               -0.0928125 ,  0.16075589, -0.75      ,  0.4330125 ,  0.        ,
                 0.        , -0.75      , -0.4330125 , -0.0928125 , -0.16075589,
                 1.685625  ,  0.        ,
                0.16075589, -0.2784375 ,  0.4330125 , -0.25      ,  0.        ,
                 0.        , -0.4330125 , -0.25      , -0.16075589, -0.2784375 ,
                 0.        ,  1.056875  };



        //for(int i = 0; i < 12*12; i++) {CouplingMaxtrix[i]= 0.;}
        double q0[12] = //{1.,  0., 0.5, 0.866, -0.5, 0.866, -1.,  0.,-0.5, -0.866,0.5, -0.866};
        {0.31754265,  0.55      , -0.25980762,  0.45      , -0.6350853 ,
        0.        , -0.25980762, -0.45      ,  0.31754265, -0.55      ,
        0.51961524,  0.  };
        System* system=new System(array,CouplingMaxtrix,q0,50,50);
        cout<<system->get_Energy()<<endl;

        /*system->UpdateEnergy(array2,5,5);
        cout<<system->get_Energy()<<endl;
        system->OutputSpring("aight2.txt"); */
        //delete CouplingMaxtrix;
        delete system;
        return 0;
}
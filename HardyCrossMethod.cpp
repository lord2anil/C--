//Hardy Cross Method
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //Input values
    double rab, rad, rcd, rbc, rbd, input_flow, out_c, out_d, out_b;
    //cout<<"Rab: ";
    // cin>>rab;
    // //cout<<"Rad: ";
    // cin>>rad;
    // //cout<<"Rcd: ";
    // cin>>rcd;
    // //cout<<"Rbc: ";
    // cin>>rbc;
    // //cout<<"Rbd: ";
    // cin>>rbd;
    // //cout<<"Input Flow Rate: ";
    // cin>>input_flow;
    // //cout<<"Output from B: ";
    // cin>>out_b;
    // //cout<<"Output from C: ";
    // cin>>out_c;
    // //cout<<"Output from D: ";
    // cin>>out_d;
    
int n;
cin>>n;
    // // //Initialization
    double qab , qad, qcd, qbc, qbd;
    // qab = (rad/(rab+rad))*input_flow;
    // qad = input_flow - qab;
    // qbd = qab/2;
    // qbc = qab - qbd;
    // qcd = qad + qbd - out_d;

    // //Printing the Assumptions
    // cout<<"Assumptions"<<endl;
    // cout<<"Out_c: "<<out_c<<" Out_d :"<<out_d<<endl;
    // cout<<"Qab: "<<qab<<"\n";    
    // cout<<"Qad: "<<qad<<"\n";
    // cout<<"Qbc: "<<qbc<<"\n";
    // cout<<"Qbd: "<<qbd<<"\n";
    // cout<<"Qcd: "<<qcd<<"\n";
    // cout<<endl;
    // out_c = 40;
    // out_d = 20;
    qab = 40;
    qad = 20;
    qbd = 15;
    qbc = 25;
    qcd = 15;
    rab=4;
rad=5;
rbd=8;
rbc=5;
rcd=6;

    //Loops
    //Loop1
    double dq1=0, dq2=0, rqq1=0 , rqq2=0 , rq1=0 , rq2=0;

   for (int i = 0; i < n-1; i++)
   
       /* code */
   
   {
        rqq1 = 0;
        rqq2 = 0;
        rq1 = 0;
        rq2 = 0;

        //Loop1
        //Pipe ab
        if(qab > 0){
            rqq1 += rab * qab * qab;
        }
        else{
            rqq1 += rab * qab * qab * -1;
        }
        rq1 += rab * fabs(qab);

        //Pipe ad
        if(qad > 0){
            rqq1 += rad * qad * qad * -1;
        }
        else{
            rqq1 += rad * qad * qad;
        }
        rq1 += rad * fabs(qad);

        //Pipe bd
        if(qbd > 0){
            rqq1 += rbd * qbd * qbd;
        }
        else{            
            rqq1 += rbd * qbd * qbd * -1;
        }
        rq1 += rbd * fabs(qbd);

        //Loop2
        //Pipe bd
        if(qbd > 0){
            rqq2 += rbd * qbd * qbd * -1;
        }
        else{
            rqq2 += rbd * qbd * qbd;
        }
        rq2 += rbd * fabs(qbd);
        
        //Pipe bc
        if(qbc > 0){
            rqq2 += rbc * qbc * qbc;
        }
        else{
            rqq2 += rbc * qbc * qbc * -1;
        }
        rq2 += rbc * fabs(qbc);

        //Pipe cd
        if(qcd > 0){
            rqq2 += rcd * qcd * qcd * -1;
        }
        else{            
            rqq2 += rcd * qcd * qcd;
        }
        rq2 += rcd * fabs(qcd);

        //Calculating dQ1, dQ2
        dq1 = rqq1 / (2*rq1);
        dq2 = rqq2 / (2*rq2);

        //Correcting the values
        // double qabn = qab - dq1;
        // double qadn = qad + dq1;
        // double qbdn = qbd - dq1 + dq2;
        // double qcdn = qcd + dq2;
        // double qbcn = qbc - dq2;
        qab = qab - dq1;
         qad= qad + dq1;
         qbd= qbd - dq1 + dq2;
       qcd= qcd + dq2;
       qbc = qbc - dq2;

        // //Breaking the loops when values converge
        // if(fabs(qabn-qab) + fabs(qadn-qad) + fabs(qbdn-qbd) +fabs(qcdn-qcd)+ fabs(qbcn-qbc) < 0.000001){
        //     break;
        // }

        // qab = qabn;
        // qad = qadn;
        // qbc = qbcn;
        // qbd = qbdn;
        // qcd = qcdn;

        //For Printing the Iterations
        //cout<<"Iteration "<<i<<endl;
        //cout<<"RQQ1: "<<rqq1<<" RQ1: "<<2*rq1<<endl;
        //cout<<"RQQ2: "<<rqq2<<" RQ2: "<<2*rq2<<endl;
        //cout<<"dQ1: "<<dq1<<" dQ2: "<<dq2<<endl;
        //cout<<"Qab: "<<qab<<"\n";
        //cout<<"Qbc: "<<qbc<<"\n";
        //cout<<"Qcd: "<<qcd<<"\n";
        //cout<<"Qbd: "<<qbd<<"\n";
        //cout<<"Qad: "<<qad<<"\n";

    }

    //Printing the corrected values
    cout<<"Corrected Values"<<endl;
    cout<<"Qab: "<<qab<<"\n";    
    cout<<"Qad: "<<qad<<"\n";
    cout<<"Qbc: "<<qbc<<"\n";
    cout<<"Qbd: "<<qbd<<"\n";
    cout<<"Qcd: "<<qcd<<"\n";
  cout<<"😀💯";
    return 0;
}
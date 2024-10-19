#include<iostream>
using namespace std;
int main()
{
	
float p[10],w[15];
 float a[20];
int i,j,k,size;
int temp;         
cout<<"enter size of the object:";
cin>>size;
for(i=0;i<=size;i++)
{
	cout<<"enter profit of"<<i+1<<"item:";
	cin>>p[i];
}
for(i=0;i<=size;i++)
{
	cout<<"enter weight of"<<i+1<<"item:";
	cin>>w[i];
}
for(i=0;i<=size;i++)
{
	a[i]=p[i]/w[i];
}
for(i=0;i<=size;i++)
{
	cout<<"profit/weight ratio of the"<<i+1<<"item:";
	cin>>a[i];
}
for(i=0;i<=size-1;i++)
{
	for(j=0;j<=size-1;j++)
	{
		if(a[j]<a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			
			temp=p[j];
			p[j]=p[j+1];
			p[j+1]=temp;
			
			temp=w[j];
			w[j]=w[j+1];
			w[j+1]=temp;
		}
	}
}
cout<<"/n";
for(i=0;i<=size;i++)
{
	cout<<"p/w: | "<<a[i];
}
cout<<"\n";
 cout<<"profit of object";
    for(i=0;i<n;i++){
        cout<<" | "<<p[i];
}
cout<<"\n";
 cout<<"weight of object";
    for(i=0;i<n;i++){
        cout<<" | "<<w[i];
 }
float max_profit = 0, current_weight = 0;
    for (i = 0; i < n; i++) {
        if (current_weight + w[i] <= max) {
            max_profit += p[i];
            current_weight += w[i];
        } else {
            float remaining_weight =  - current_weight;
            max_profit += (p[i] / w[i]) * remaining_weight;
            break; // No need to continue after reaching max_weight
        }
    }
    cout << "Maximum profit = " << max_profit << endl;
 return 0;
}

    
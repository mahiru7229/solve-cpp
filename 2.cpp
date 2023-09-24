// https://www.facebook.com/photo/?fbid=166427659839631&set=gm.674663607954680&idorvanity=208411111246601
#include <iostream>
#include <vector>
using namespace std;

int max_num_pos(vector<int> numbers){
	int max_pos = 0;
	for (size_t i = 1; i < numbers.size(); i ++){
		if (numbers[i] > numbers[max_pos]){
			max_pos  = i;
		}
	}
	return max_pos;
}

bool is_parabolic_sequence(vector<int> parabol, int max_pos){
	int current = parabol[0];
	if (parabol[0] ==parabol[max_pos]){
		return false;
	}
	if(parabol[parabol.size() -1] == parabol[max_pos]){
		return false;
	}
	for (int i = 1; i < max_pos; i++){
		if(current > parabol[i]){
			return false;
		}else{
			current = parabol[i];
		}
	}
	current = parabol[parabol.size()-1];
	for (size_t i = parabol.size() -2; i > max_pos; i--){
		if (current > parabol[i]){
			return false;
		}else{
			current = parabol[i];
		}
	}
	return true;
}

int main(){
	long n;
	cin >> n;
	vector <int> parabol(n);
	for (int i = 0; i < n ; i++){
		cin >> parabol[i];
	}
	int pos = max_num_pos(parabol);
	if(is_parabolic_sequence(parabol, pos)){
		cout << "YES";
	}else{
		cout << "NO";
	}


	return 0;
}
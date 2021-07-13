class StankFist{
	public:
		StankFist(int a)
		:stinkyvar(a)
		{
		}
	private:
	int stinkyvar;
	friend void stinkyFriend(StankFist &sfo);
	
};

void stinkyFriend(StankFist &sfo){
	cout<<sfo.stinkyvar;
	
}

int main(){
	
	StankFist shubh(99);
	stinkyFriend(shubh);
	
	
return 0;
}






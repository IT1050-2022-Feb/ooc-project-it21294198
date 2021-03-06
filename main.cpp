
#include "Post.h"
#include "SalePost.h"
#include "RequestPost.h"
#include "User.h"
#include "Moderator.h"
#include "Admin.h"
#include "Complaint.h"
#include "PostType.h"
#include "Date.h"
#include "Photo.h"
#include "Payment.h"

int main()
{
	Date date1;
	Date date2(1, 1, 2021);

	Photo photo1;
	Photo photo2(1, "images/photo2.png", 32);

	PostType postType1;
	PostType postType2(1, 2000.0, "Silver", "The post will be valid for 60 days");

	Complaint complaint1;
	Complaint complaint2(1, "false advertisement", "the land does not match the given details", new Date(), false, new User());

	Payment payment1;
  	Payment payment2(1001,'B',"Card",500.00,new Date());
	
	User user1;
  	User user2(00000, "Nimal", "No 44 Kandy Road, Kandy", "nimal007@gmail.com", "n1m4Lr0X", "I am nimal", "valid", new Photo());

	Post post1;
	Post post2(1,"Land for sale in Maharagama","7.2906N,80.6337E","Maharagama","Colombo","Western Province","Land available for sale in the heart of Maharagama. Price Negotiable", new PostType(), new Date(), new User());

	Moderator moderator1;
	Moderator moderator2(3,"Sunil Perera","27 Kandy Road Katugasthota","sunilp@gmail.com","password@123","Hello World","Available", new Photo());
	
	SalePost salepost1;
	SalePost salepost2(500000,50,"56/7d Bagya Road Gampaha",001,"Land for Sale","6.9271° N, 79.8612° E","Colombo5","Colombo","Western Province","Prime land for sale in colombo",new PostType(),new Date(),new User());
		
	RequestPost requestPost1;
  	RequestPost requestPost2(450000,400000,50,35,10,002,"Looking for a pieace of Land", "7.0840° N, 80.0098° E","Yakkala","Gamapaha","Western Province","A piece of land around Yakkala ,preferably within 10km",new PostType(),new Date(),new User());
	
	Admin admin1;
  	Admin admin2(0001, "Sumana Shantha", "No 90, Colombo Road, Colombo", "SumanaShanthaGOAT@gmail.com", "STRONGpassword", "i am sumana shantha", "valid", new Photo());

}



#include<iostream>
using namespace std;
//Anime
void Animes(){
    string Anime[20]={"Attack On Titan","Fullmetal Alchemist: Brotherhood","Naruto","One Piece","My Hero Academia","Demon Slayer","Steins","Hunter X Hunter","Spirited Away","Death Note"};
    cout<<"                                             (BEST ANIME)"<<endl;
    for(int i=0;i<10;i++){
        cout<<(i+1)<<". "<<Anime[i]<<endl;
    }
    int choice;
    cout<<"\nEnter For Getting The Information About Anime:"<<endl;
    cin>>choice;
    cout<<"\n";
    struct Anime{
        int launch;
        float rating;
        string info;
    };
    if(choice==1){
        struct Anime Attack;
        Attack.launch=2013;
        Attack.rating=9.0;
        Attack.info="Description: In a world where humanity resides within enormous walled cities to protect themselves from Titans, colossal humanoid creatures, the story follows Eren Yeager and his friends as they join the military to fight against the Titans and unravel the mysteries surrounding their existence.";
        cout<<"Attack On Titan\n\n"<<"Launch Date: "<<Attack.launch<<"\nRatings: "<<Attack.rating<<"\nInformation: "<<Attack.info<<endl<<endl;;
    }
    else if(choice==2){
        struct Anime Fullmetal;
        Fullmetal.launch=2009;
        Fullmetal.rating=9.1;
        Fullmetal.info="Description: Brothers Edward and Alphonse Elric embark on a journey to find the Philosopher's Stone to restore their bodies after a failed alchemy experiment. Along the way, they uncover a deep conspiracy that threatens their world.";
        cout<<"Fullmetal Alchemist: Brotherhood\n\n"<<"Launch Date: "<<Fullmetal.launch<<"\nRatings: "<<Fullmetal.rating<<"\nInformation: "<<Fullmetal.info<<endl<<endl;
    }
    else if(choice==3){
        struct Anime Naruto;
        Naruto.launch=2002;
        Naruto.rating=8.3;
        Naruto.info="Description: Naruto Uzumaki, a young ninja with dreams of becoming the strongest ninja and leader of his village, faces numerous challenges and adversaries on his path to greatness.";
        cout<<"Naruto\n\n"<<"Launch Date: "<<Naruto.launch<<"\nRatings: "<<Naruto.rating<<"\nInformation: "<<Naruto.info<<endl<<endl;
    }
    else if(choice==4){
        struct Anime One;
        One.launch=1999;
        One.rating=8.7;
        One.info="Description: Monkey D. Luffy sets sail with his crew of pirates, known as the Straw Hat Pirates, in search of the legendary treasure, One Piece, which will make him the King of the Pirates. Their journey takes them to exotic islands and dangerous battles against powerful foes.";
        cout<<"One Piece\n\n"<<"Launch Date: "<<One.launch<<"\nRatings: "<<One.rating<<"\nInformation: "<<One.info<<endl<<endl;
    }
    else if(choice==5){
        struct Anime Hero;
        Hero.launch=2016;
        Hero.rating=8.6;
        Hero.info="Description: In a world where almost everyone has superpowers known as Quirks, a young boy named Izuku Midoriya dreams of becoming a hero despite being born without a Quirk. His journey begins when he inherits the powerful Quirk of the greatest hero, All Might.";
        cout<<"My Hero Academia\n\n"<<"Launch Date: "<<Hero.launch<<"\nRatings: "<<Hero.rating<<"\nInformation: "<<Hero.info<<endl<<endl;
    }
    else if(choice==6){
        struct Anime Demon;
        Demon.launch=2019;
        Demon.rating=8.7;
        Demon.info="Description: After his family is slaughtered by demons, Tanjiro Kamado sets out on a quest for revenge and to find a cure for his demon-turned sister. Along the way, he joins the Demon Slayer Corps to protect humanity from the threat of demons.";
        cout<<"Demon Slayer: Kimetsu no Yaiba\n\n"<<"Launch Date: "<<Demon.launch<<"\nRatings: "<<Demon.rating<<"\nInformation: "<<Demon.info<<endl<<endl;
    }
    else if(choice==7){
        struct Anime Steins;
        Steins.launch=2011;
        Steins.rating=9.0;
        Steins.info="Description: A self-proclaimed mad scientist, Rintarou Okabe, accidentally invents a time machine that can send text messages to the past, altering the present. However, meddling with time has consequences, and Okabe finds himself in a desperate struggle to save his friends and prevent a dystopian future.";
        cout<<"Steins\n\n"<<"Launch Date: "<<Steins.launch<<"\nRatings: "<<Steins.rating<<"\nInformation: "<<Steins.info<<endl<<endl;
    }
    else if(choice==8){
        struct Anime Hunter;
        Hunter.launch=2012;
        Hunter.rating=9.0;
        Hunter.info="Description: Gon Freecss aspires to become a Hunter, an elite adventurer with special privileges. Alongside his friends, he navigates through dangerous challenges and encounters formidable foes in his quest to find his long-lost father and become a Hunter.";
        cout<<"Hunter X Hunter\n\n"<<"Launch Date: "<<Hunter.launch<<"\nRatings: "<<Hunter.rating<<"\nInformation: "<<Hunter.info<<endl<<endl;
    }
    else if(choice==9){
        struct Anime Spirited;
        Spirited.launch=1998;
        Spirited.rating=8.6;
        Spirited.info="Description: Directed by Hayao Miyazaki, this critically acclaimed anime film follows the journey of a young girl named Chihiro, who becomes trapped in a mysterious spirit world. To save her parents and return to the human world, Chihiro must work at a bathhouse for spirits and confront various supernatural beings.";
        cout<<"Spirited Away\n\n"<<"Launch Date: "<<Spirited.launch<<"\nRatings: "<<Spirited.rating<<"\nInformation: "<<Spirited.info<<endl<<endl;
    }
    else if(choice==10){
        struct Anime Death;
        Death.launch=2006;
        Death.rating=9.0;
        Death.info="Description: A high school student named Light Yagami discovers a mysterious notebook that grants him the power to kill anyone whose name he writes in it. As he takes on the role of a self-proclaimed god, a genius detective known only as L sets out to stop him.";
        cout<<"Death Note\n\n"<<"Launch Date: "<<Death.launch<<"\nRatings: "<<Death.rating<<"\nInformation: "<<Death.info<<endl<<endl;
    }
    else{
        cout<<"Invalid Choice";
    }
}
//Action
void Action(){
    string Action[10]={"Breaking Bad","Stranger Things","The Mandalorian","Peaky Blinders","The Witchers"};
    cout<<"                                             (BEST SERIES)"<<endl;
    for(int i=0;i<5;i++){
        cout<<(i+1)<<". "<<Action[i]<<endl;
    }
    int choice;
    cout<<"\nEnter For Getting The Information About Series:"<<endl;
    cin>>choice;
    cout<<"\n";
    struct Action{
        float rating;
        string info;
    };

    if(choice==1){
        struct Action Breaking;
        Breaking.rating=9.5;
        Breaking.info="Plot: A high school chemistry teacher turned methamphetamine manufacturer partners with a former student, leading them into a dangerous world of crime.";
        cout<<"Breaking Bad\n\n"<<"Ratings: "<<Breaking.rating<<"\nInformation: "<<Breaking.info<<endl<<endl;;
    }
    else if(choice==2){
        struct Action Stranger;
        Stranger.rating=8.7;
        Stranger.info="Plot: Set in the 1980s, this series follows a group of kids who encounter strange occurrences and government conspiracies when their friend mysteriously disappears.";
        cout<<"Stranger Things\n\n"<<"Rating: "<<Stranger.rating<<"\nInformation: "<<Stranger.info<<endl<<endl;
    }
    else if(choice==3){
        struct Action Mandalorian;
        Mandalorian.rating=8.8;
        Mandalorian.info="Plot: Set in the Star Wars universe, this series follows a lone bounty hunter as he navigates the outer reaches of the galaxy, far from the authority of the New Republic.";
        cout<<"The Mandalorian\n\n"<<"Ratings: "<<Mandalorian.rating<<"\nInformation: "<<Mandalorian.info<<endl<<endl;
    }
    else if(choice==4){
        struct Action Peaky;
        Peaky.rating=8.8;
        Peaky.info="Plot: Set in post-World War I Birmingham, England, this series follows the Shelby crime family as they rise to power in the world of organized crime.";
        cout<<"Peaky Blinders\n\n"<<"Ratings: "<<Peaky.rating<<"\nInformation: "<<Peaky.info<<endl<<endl;
    }
    else if(choice==5){
        struct Action Witcher;
        Witcher.rating=8.2;
        Witcher.info="Plot: Based on the book series, this fantasy series follows Geralt of Rivia, a monster hunter, as he navigates a world filled with dangerous creatures, magic, and political intrigue.";
        cout<<"The Witcher\n\n"<<"Ratings: "<<Witcher.rating<<"\nInformation: "<<Witcher.info<<endl<<endl;
    }
    else{
        cout<<"Invalid Choice";
    }
}
//Comedy
void Comedy(){
    string Comedy[10]={"The Office","Parks Ans Recreation","Brooklyn Nine-Nine","The Marvelous Mrs. Maisel","Arrested Development"};
    cout<<"                                             (BEST SERIES)"<<endl;
    for(int i=0;i<5;i++){
        cout<<(i+1)<<". "<<Comedy[i]<<endl;
    }
    int choice;
    cout<<"\nEnter For Getting The Information About Series:"<<endl;
    cin>>choice;
    cout<<"\n";
    struct Comedy{
        float rating;
        string info;
    };

    if(choice==1){
        struct Comedy Office;
        Office.rating=8.9;
        Office.info="Synopsis: A mockumentary on a group of typical office workers, where the workday consists of ego clashes, inappropriate behavior, and tedium.";
        cout<<"The Office\n\n"<<"Ratings: "<<Office.rating<<"\nInformation: "<<Office.info<<endl<<endl;;
    }
    else if(choice==2){
        struct Comedy Parks;
        Parks.rating=8.6;
        Parks.info="Synopsis: The absurd antics of an Indiana town's public officials as they pursue sundry projects to make their city a better place.";
        cout<<"Parks and Recreation\n\n"<<"Rating: "<<Parks.rating<<"\nInformation: "<<Parks.info<<endl<<endl;
    }
    else if(choice==3){
        struct Comedy Brooklyn;
        Brooklyn.rating=8.4;
        Brooklyn.info="Synopsis: Follows the exploits of hilarious Det. Jake Peralta and his diverse, lovable colleagues as they police the NYPD's 99th Precinct.";
        cout<<"Brooklyn Nine-Nine\n\n"<<"Ratings: "<<Brooklyn.rating<<"\nInformation: "<<Brooklyn.info<<endl<<endl;
    }
    else if(choice==4){
        struct Comedy Marvelous;
        Marvelous.rating=8.7;
        Marvelous.info="Synopsis: A housewife in the 1950s decides to become a stand-up comic.";
        cout<<"The Marvelous Mrs. Maisel\n\n"<<"Ratings: "<<Marvelous.rating<<"\nInformation: "<<Marvelous.info<<endl<<endl;
    }
    else if(choice==5){
        struct Comedy Arrested;
        Arrested.rating=8.7;
        Arrested.info="Synopsis: Level-headed son Michael Bluth takes over family affairs after his father is imprisoned. But the rest of his spoiled, dysfunctional family are making his job unbearable.";
        cout<<"Arrested Development\n\n"<<"Ratings: "<<Arrested.rating<<"\nInformation: "<<Arrested.info<<endl<<endl;
    }
    else{
        cout<<"Invalid Choice";
    }
}
//Romantic
void Romantic(){
    string Romantic[10]={"Outlander","Poldark","Jane The Virgin","The Crown","Normal People"};
    cout<<"                                             (BEST SERIES)"<<endl;
    for(int i=0;i<5;i++){
        cout<<(i+1)<<". "<<Romantic[i]<<endl;
    }
    int choice;
    cout<<"\nEnter For Getting The Information About Series:"<<endl;
    cin>>choice;
    cout<<"\n";
    struct Romantic{
        float rating;
        string info;
    };

    if(choice==1){
        struct Romantic Outlander;
        Outlander.rating=8.4;
        Outlander.info="Synopsis: Outlander follows the story of Claire Randall, a married combat nurse from 1945 who is mysteriously swept back in time to 1743 Scotland. There, she is thrown into an unknown world where her life is threatened, but she also finds love with Jamie Fraser, a young Scottish warrior.";
        cout<<"Outlander\n\n"<<"Ratings: "<<Outlander.rating<<"\nInformation: "<<Outlander.info<<endl<<endl;;
    }
    else if(choice==2){
        struct Romantic Poldark;
        Poldark.rating=8.3;
        Poldark.info="Synopsis: Set in late 18th-century Cornwall, England, Poldark follows the life of Ross Poldark, a British Army officer who returns to his home to find his father dead, his estate in ruins, and his love interest engaged to his cousin. The series explores his journey of rebuilding his life, relationships, and finding love again.";
        cout<<"Poldark \n\n"<<"Ratings: "<<Poldark.rating<<"\nInformation: "<<Poldark.info<<endl<<endl;
    }
    else if(choice==3){
        struct Romantic Jane;
        Jane.rating=7.8;
        Jane.info="Synopsis: Jane the Virgin is a delightful romantic comedy-drama series that revolves around Jane Villanueva, a young, devout Catholic woman who becomes pregnant after being artificially inseminated by mistake. The series follows Jane's journey as she navigates relationships, motherhood, and her career aspirations.";
        cout<<"Jane The Virgin\n\n"<<"Ratings: "<<Jane.rating<<"\nInformation: "<<Jane.info<<endl<<endl;
    }
    else if(choice==4){
        struct Romantic Crown;
        Crown.rating=8.7;
        Crown.info="Synopsis: The Crown is a historical drama series that chronicles the reign of Queen Elizabeth II. While not primarily a romance series, it delves into the personal relationships and struggles of the royal family, including Queen Elizabeth II's marriage to Prince Philip. The show offers a compelling portrayal of love amidst the backdrop of duty and tradition.";
        cout<<"The Crown\n\n"<<"Ratings: "<<Crown.rating<<"\nInformation: "<<Crown.info<<endl<<endl;
    }
    else if(choice==5){
        struct Romantic Normal;
        Normal.rating=8.5;
        Normal.info="Synopsis: Based on Sally Rooney's novel, Normal People follows the complex relationship between Marianne Sheridan and Connell Waldron, two Irish teenagers from different social backgrounds, as they navigate love, friendship, and intimacy from high school through university.";
        cout<<"Normal People\n\n"<<"Ratings: "<<Normal.rating<<"\nInformation: "<<Normal.info<<endl<<endl;
    }
    else{
        cout<<"Invalid Choice";
    }
}
//Horror Series
void Horror(){
    string Horror[10]={"The Haunting of Hill House","Stranger Things","American Horror Story","The Walking Head","Marianne"};
    cout<<"                                             (BEST SERIES)"<<endl;
    for(int i=0;i<5;i++){
        cout<<(i+1)<<". "<<Horror[i]<<endl;
    }
    int choice;
    cout<<"\nEnter For Getting The Information About Series:"<<endl;
    cin>>choice;
    cout<<"\n";
    struct Horror{
        int launch;
        float rating;
        string info;
    };
    if(choice==1){
        struct Horror Haunting;
        Haunting.launch=2018;
        Haunting.rating=8.6;
        Haunting.info="Synopsis: This series follows the Crain family, who once lived in Hill House, a haunted mansion. Years later, they are forced to confront their traumatic past and the terrifying events that occurred within its walls.";
        cout<<"The Haunting of Hill House\n\n"<<"Launch Date: "<<Haunting.launch<<"\nRatings: "<<Haunting.rating<<"\nInformation: "<<Haunting.info<<endl<<endl;;
    }
    else if(choice==2){
        struct Horror Stranger;
        Stranger.launch=2016;
        Stranger.rating=8.7;
        Stranger.info="Synopsis: Set in the 1980s, Stranger Things revolves around a group of kids who encounter supernatural forces and government conspiracies when their friend mysteriously disappears.";
        cout<<"Stranger Things \n\n"<<"Launch Date: "<<Stranger.launch<<"\nRatings: "<<Stranger.rating<<"\nInformation: "<<Stranger.info<<endl<<endl;
    }
    else if(choice==3){
        struct Horror American;
        American.launch=2011;
        American.rating=8.0;
        American.info="Synopsis: Each season of this anthology series features a new storyline with recurring cast members playing different characters in various settings, ranging from haunted houses to asylums to freak shows.";
        cout<<"American Horror Story\n\n"<<"Launch Date: "<<American.launch<<"\nRatings: "<<American.rating<<"\nInformation: "<<American.info<<endl<<endl;
    }
    else if(choice==4){
        struct Horror Walking;
        Walking.launch=2010;
        Walking.rating=8.2;
        Walking.info="Synopsis: Based on the comic book series of the same name, The Walking Dead follows a group of survivors as they navigate a post-apocalyptic world overrun by zombies, known as walkers.";
        cout<<"The Walking Head\n\n"<<"Launch Date: "<<Walking.launch<<"\nRatings: "<<Walking.rating<<"\nInformation: "<<Walking.info<<endl<<endl;
    }
    else if(choice==5){
        struct Horror Marianne;
        Marianne.launch=2019;
        Marianne.rating=7.5;
        Marianne.info="Synopsis: A famous horror writer returns to her hometown and discovers that the evil spirit she created in her novels is now manifesting in the real world, wreaking havoc on the townsfolk.";
        cout<<"Marianne\n\n"<<"Launch Date: "<<Marianne.launch<<"\nRatings: "<<Marianne.rating<<"\nInformation: "<<Marianne.info<<endl<<endl;
    }
    else{
        cout<<"Invalid Choice";
    }
}
//AjayDevgan
void Ajaydevgan(){
    string Ajay[20]={"Singham","Golmaal","Drishyam","Once Upon A Time In Mumbai","Zakham ","Company","Omkara","The Legend of Bhagat Singh","Gangaajal","Hum Dil De Chukke Sanam"};
    cout<<"                                             (BEST MOVIES)"<<endl;
    for(int i=0;i<10;i++){
        cout<<(i+1)<<". "<<Ajay[i]<<endl;
    }
    int choice;
    cout<<"\nEnter For Getting The Information About Movie:"<<endl;
    cin>>choice;
    cout<<"\n";
    struct AjayDevgan{
        int launch;
        float rating;
        string info;
    };
    if(choice==1){
        struct AjayDevgan Singham;
        Singham.launch=2011;
        Singham.rating=6.8;
        Singham.info="Plot: A righteous police officer takes on a corrupt politician and his cronies in this high-octane action thriller..";
        cout<<"Singham\n\n"<<"Launch Date: "<<Singham.launch<<"\nRatings: "<<Singham.rating<<"\nInformation: "<<Singham.info<<endl<<endl;;
    }
    else if(choice==2){
        struct AjayDevgan Golmaal;
        Golmaal.launch=2006;
        Golmaal.rating=7.4;
        Golmaal.info="Plot: A comedy revolving around a group of friends who indulge in hilarious situations and misunderstandings.";
        cout<<"Golmaal\n\n"<<"Launch Date: "<<Golmaal.launch<<"\nRatings: "<<Golmaal.rating<<"\nInformation: "<<Golmaal.info<<endl<<endl;
    }
    else if(choice==3){
        struct AjayDevgan Drishyam;
        Drishyam.launch=2015;
        Drishyam.rating=8.2;
        Drishyam.info="Plot: A thriller about a man's desperate measures to protect his family after they become embroiled in a crime.";
        cout<<"Drishyam\n\n"<<"Launch Date: "<<Drishyam.launch<<"\nRatings: "<<Drishyam.rating<<"\nInformation: "<<Drishyam.info<<endl<<endl;
    }
    else if(choice==4){
        struct AjayDevgan Once;
        Once.launch=2010;
        Once.rating=7.4;
        Once.info="Plot: Set in the 1970s, this film portrays the rise of two gangsters in Mumbai and their eventual conflict.";
        cout<<"Once Upon A Time In Mumbai\n\n"<<"Launch Date: "<<Once.launch<<"\nRatings: "<<Once.rating<<"\nInformation: "<<Once.info<<endl<<endl;
    }
    else if(choice==5){
        struct AjayDevgan Zakham;
        Zakham.launch=1998;
        Zakham.rating=8.0;
        Zakham.info="Plot: A powerful drama exploring themes of communal tensions, family relationships, and personal identity.";
        cout<<"Zakham\n\n"<<"Launch Date: "<<Zakham.launch<<"\nRatings: "<<Zakham.rating<<"\nInformation: "<<Zakham.info<<endl<<endl;
    }
    else if(choice==6){
        struct AjayDevgan Company;
        Company.launch=2002;
        Company.rating=8.0;
        Company.info="Plot: A gritty crime drama that delves into the underworld of Mumbai and the dynamics of organized crime.";
        cout<<"Company\n\n"<<"Launch Date: "<<Company.launch<<"\nRatings: "<<Company.rating<<"\nInformation: "<<Company.info<<endl<<endl;
    }
    else if(choice==7){
        struct AjayDevgan Omkara;
        Omkara.launch=2006;
        Omkara.rating=8.1;
        Omkara.info="Plot: A modern adaptation of Shakespeare's Othello, set against the backdrop of political intrigue and betrayal in rural India.";
        cout<<"Omkara\n\n"<<"Launch Date: "<<Omkara.launch<<"\nRatings: "<<Omkara.rating<<"\nInformation: "<<Omkara.info<<endl<<endl;
    }
    else if(choice==8){
        struct AjayDevgan BhagatSingh;
        BhagatSingh.launch=2002;
        BhagatSingh.rating=8.1;
        BhagatSingh.info="Plot: A biopic chronicling the life of Indian freedom fighter Bhagat Singh and his revolutionary activities against British colonial rule.";
        cout<<"The Legend Of BhagatSingh\n\n"<<"Launch Date: "<<BhagatSingh.launch<<"\nRatings: "<<BhagatSingh.rating<<"\nInformation: "<<BhagatSingh.info<<endl<<endl;
    }
    else if(choice==9){
        struct AjayDevgan Gangaajaal;
        Gangaajaal.launch=2003;
        Gangaajaal.rating=7.8;
        Gangaajaal.info="Plot: A hard-hitting drama depicting the battle of an honest police officer against corruption and injustice in a small town.";
        cout<<"Gangaajaal\n\n"<<"Launch Date: "<<Gangaajaal.launch<<"\nRatings: "<<Gangaajaal.rating<<"\nInformation: "<<Gangaajaal.info<<endl<<endl;
    }
    else if(choice==10){
        struct AjayDevgan Humdil;
        Humdil.launch=1999;
        Humdil.rating=7.6;
        Humdil.info="Plot: A romantic drama about love, sacrifice, and the complexities of relationships, set against the backdrop of vibrant Indian culture.";
        cout<<"Hum Dil De Chukke Sanam\n\n"<<"Launch Date: "<<Humdil.launch<<"\nRatings: "<<Humdil.rating<<"\nInformation: "<<Humdil.info<<endl<<endl;
    }
    else{
        cout<<"Invalid Choice";
    }
}
//VarunDhawan
    void VarunDhawan(){
    string Varun[20]={"Student of the Year","Main Tera Hero","Humpty Sharma Ki Dulhania","Badlapur","ABCD 2","Dishoom","Badrinath Ki Dulhania","Judwaa 2","October","Sui Dhaga"};
    cout<<"                                             (BEST MOVIES)"<<endl;
    for(int i=0;i<10;i++){
        cout<<(i+1)<<". "<<Varun[i]<<endl;
    }
    int choice;
    cout<<"\nEnter For Getting The Information About Movie:"<<endl;
    cin>>choice;
    cout<<"\n";
    struct Varun{
        int launch;
        float rating;
        string info;
    };
    if(choice==1){
        struct Varun Student;
        Student.launch=2012;
        Student.rating=5.3;
        Student.info="Plot: The movie follows the journey of three friends who compete for the title of Student of the Year at their college.";
        cout<<"Student of the Year\n\n"<<"Launch Date: "<<Student.launch<<"\nRatings: "<<Student.rating<<"\nInformation: "<<Student.info<<endl<<endl;;
    }
    else if(choice==2){
        struct Varun Hero;
        Hero.launch=2014;
        Hero.rating=5.3;
        Hero.info="Plot: A comedy about a mischievous young man who falls in love with two women and tries to navigate his way through their affections.";
        cout<<"Main Tera Hero\n\n"<<"Launch Date: "<<Hero.launch<<"\nRatings: "<<Hero.rating<<"\nInformation: "<<Hero.info<<endl<<endl;
    }
    else if(choice==3){
        struct Varun Humty;
        Humty.launch=2014;
        Humty.rating=6.0;
        Humty.info="Plot: A romantic comedy where a young man named Humpty tries to win the heart of his lady love, despite her strict father's objections.";
        cout<<"Humpty Sharma Ki Dulhania\n\n"<<"Launch Date: "<<Humty.launch<<"\nRatings: "<<Humty.rating<<"\nInformation: "<<Humty.info<<endl<<endl;
    }
    else if(choice==4){
        struct Varun Badlapur;
        Badlapur.launch=2015;
        Badlapur.rating=7.4;
        Badlapur.info="Plot: After losing his family in a tragic incident, a man seeks revenge against those responsible, leading to a dark and intense journey.";
        cout<<"Badlapur\n\n"<<"Launch Date: "<<Badlapur.launch<<"\nRatings: "<<Badlapur.rating<<"\nInformation: "<<Badlapur.info<<endl<<endl;
    }
    else if(choice==5){
        struct Varun Abcd;
        Abcd.launch=2015;
        Abcd.rating=5.6;
        Abcd.info="Plot: A dance-based film that follows a group of passionate dancers as they compete in a prestigious dance competition.";
        cout<<"Abcd 2\n\n"<<"Launch Date: "<<Abcd.launch<<"\nRatings: "<<Abcd.rating<<"\nInformation: "<<Abcd.info<<endl<<endl;
    }
    else if(choice==6){
        struct Varun Dishoom;
        Dishoom.launch=2016;
        Dishoom.rating=5.1;
        Dishoom.info="Plot: Two policemen embark on a mission to rescue an Indian cricketer who has been kidnapped just before an important match.";
        cout<<"Dishoom\n\n"<<"Launch Date: "<<Dishoom.launch<<"\nRatings: "<<Dishoom.rating<<"\nInformation: "<<Dishoom.info<<endl<<endl;
    }
    else if(choice==7){
        struct Varun Badrinath;
        Badrinath.launch=2017;
        Badrinath.rating=6.1;
        Badrinath.info="Plot: A young man named Badrinath sets out to woo the woman of his dreams, despite her initial disinterest in him.";
        cout<<"Badrinath Ki Dulhania\n\n"<<"Launch Date: "<<Badrinath.launch<<"\nRatings: "<<Badrinath.rating<<"\nInformation: "<<Badrinath.info<<endl<<endl;
    }
    else if(choice==8){
        struct Varun Judwaa;
        Judwaa.launch=2017;
        Judwaa.rating=3.9;
        Judwaa.info="This movie follows the misadventures of twin brothers who are separated at birth and reunited years later.";
        cout<<"Judwaa 2\n\n"<<"Launch Date: "<<Judwaa.launch<<"\nRatings: "<<Judwaa.rating<<"\nInformation: "<<Judwaa.info<<endl<<endl;
    }
    else if(choice==9){
        struct Varun October;
        October.launch=2018;
        October.rating=7.5;
        October.info="Plot: A unique and heartfelt story about the bond between a hotel intern and his comatose coworker.";
        cout<<"October\n\n"<<"Launch Date: "<<October.launch<<"\nRatings: "<<October.rating<<"\nInformation: "<<October.info<<endl<<endl;
    }
    else if(choice==10){
        struct Varun Suidhaga;
        Suidhaga.launch=2018;
        Suidhaga.rating=6.8;
        Suidhaga.info="Plot: A heartwarming tale of a small-town couple who embark on a journey to start their own clothing business.";
        cout<<"Sui Dhaga\n\n"<<"Launch Date: "<<Suidhaga.launch<<"\nRatings: "<<Suidhaga.rating<<"\nInformation: "<<Suidhaga.info<<endl<<endl;
    }
    else{
        cout<<"Invalid Choice";
    }
}
//ranveer
void ranveerkappor(){
    string ranveer[20]={"Rockstar","Barfi","Yeh Jawani Hai Diwani","Tamasha","Ae Dil Hai Mushkil","Jagga Jasoos","Sanju","Rockster King","Wake Up Sid","Roy"};
    cout<<"                                             (BEST MOVIES)"<<endl;
    for(int i=0;i<10;i++){
        cout<<(i+1)<<". "<<ranveer[i]<<endl;
    }
    int choice;
    cout<<"\nEnter For Getting The Information About Movie:"<<endl;
    cin>>choice;
    cout<<"\n";
    struct Ranveer{
        int launch;
        float rating;
        string info;
    };
    if(choice==1){
        struct Ranveer Rockstar;
        Rockstar.launch=2011;
        Rockstar.rating=7.7;
        Rockstar.info="Plot: A story of a young musician's journey, his passion for music, and his tumultuous relationship with a free-spirited girl.";
        cout<<"Rockstar\n\n"<<"Launch Date: "<<Rockstar.launch<<"\nRatings: "<<Rockstar.rating<<"\nInformation: "<<Rockstar.info<<endl<<endl;;
    }
    else if(choice==2){
        struct Ranveer Barfi;
        Barfi.launch=2012;
        Barfi.rating=8.1;
        Barfi.info="Plot: An endearing tale of a deaf-mute man, a beautiful autistic girl, and the lively narrator caught in a love triangle, set against the picturesque backdrop of Darjeeling.";
        cout<<"Barfi\n\n"<<"Launch Date: "<<Barfi.launch<<"\nRatings: "<<Barfi.rating<<"\nInformation: "<<Barfi.info<<endl<<endl;
    }
    else if(choice==3){
        struct Ranveer Yeh;
        Yeh.launch=2013;
        Yeh.rating=7.1;
        Yeh.info="Plot: Follows the journey of four friends from their college days to adulthood, exploring friendship, love, and personal aspirations.";
        cout<<"Yeh Jawani Hai Diwani\n\n"<<"Launch Date: "<<Yeh.launch<<"\nRatings: "<<Yeh.rating<<"\nInformation: "<<Yeh.info<<endl<<endl;
    }
    else if(choice==4){
        struct Ranveer Tamasha;
        Tamasha.launch=2015;
        Tamasha.rating=7.3;
        Tamasha.info="Plot: A man meets a woman while on a holiday in Corsica and decides to live a carefree life with her. However, their lives take unexpected turns when they return to the real world.";
        cout<<"Tamasha\n\n"<<"Launch Date: "<<Tamasha.launch<<"\nRatings: "<<Tamasha.rating<<"\nInformation: "<<Tamasha.info<<endl<<endl;
    }
    else if(choice==5){
        struct Ranveer AeDil;
        AeDil.launch=2016;
        AeDil.rating=5.8;
        AeDil.info="Plot: A story of unrequited love, friendship, and heartbreak, revolving around the lives of three characters played by Ranbir Kapoor, Anushka Sharma, and Aishwarya Rai Bachchan.";
        cout<<"Ae Dil Hai Mushkil\n\n"<<"Launch Date: "<<AeDil.launch<<"\nRatings: "<<AeDil.rating<<"\nInformation: "<<AeDil.info<<endl<<endl;
    }
    else if(choice==6){
        struct Ranveer Jaggajasos;
        Jaggajasos.launch=2017;
        Jaggajasos.rating=6.5;
        Jaggajasos.info="Plot: A musical adventure film about a young detective's quest to find his missing father, aided by a journalist.";
        cout<<"Jagga Jasoos\n\n"<<"Launch Date: "<<Jaggajasos.launch<<"\nRatings: "<<Jaggajasos.rating<<"\nInformation: "<<Jaggajasos.info<<endl<<endl;
    }
    else if(choice==7){
        struct Ranveer Sanju;
        Sanju.launch=2018;
        Sanju.rating=7.7;
        Sanju.info="Plot: A biopic based on the controversial life of Bollywood actor Sanjay Dutt, showcasing his struggles with drug addiction, relationships, and legal issues.";
        cout<<"Sanju\n\n"<<"Launch Date: "<<Sanju.launch<<"\nRatings: "<<Sanju.rating<<"\nInformation: "<<Sanju.info<<endl<<endl;
    }
    else if(choice==8){
        struct Ranveer Rockstarking;
        Rockstarking.launch=2009;
        Rockstarking.rating=7.5;
        Rockstarking.info="Plot: A comedy-drama about a young man who aspires to be a successful businessman and starts his own company, facing numerous challenges along the way.";
        cout<<"Rockstar king\n\n"<<"Launch Date: "<<Rockstarking.launch<<"\nRatings: "<<Rockstarking.rating<<"\nInformation: "<<Rockstarking.info<<endl<<endl;
    }
    else if(choice==9){
        struct Ranveer Wakeup;
        Wakeup.launch=2019;
        Wakeup.rating=7.6;
        Wakeup.info="Plot: The story of a lazy, irresponsible young man who learns to take control of his life and pursue his dreams after meeting a spirited woman.";
        cout<<"Wake Up Sid\n\n"<<"Launch Date: "<<Wakeup.launch<<"\nRatings: "<<Wakeup.rating<<"\nInformation: "<<Wakeup.info<<endl<<endl;
    }
    else if(choice==10){
        struct Ranveer Roy;
        Roy.launch=2015;
        Roy.rating=3.3;
        Roy.info="Plot: A romantic thriller that intertwines the lives of a filmmaker, a thief, and a mysterious woman, blurring the lines between reality and fiction.";
        cout<<"Roy\n\n"<<"Launch Date: "<<Roy.launch<<"\nRatings: "<<Roy.rating<<"\nInformation: "<<Roy.info<<endl<<endl;
    }
    else{
        cout<<"Invalid Choice";
    }
    }
//Akshay Kumar
void AkshayK(){
    string akshay[20]={"Hera Pheri","Khiladi","Dhadkan","Singh is Kinng","Housefull","Rowdy Rathore","Special 26","Baby","Toilet Ek Prem Katha","Kesari"};
    cout<<"                                             (BEST MOVIES)"<<endl;
    for(int i=0;i<10;i++){
        cout<<(i+1)<<". "<<akshay[i]<<endl;
    }
    int choice;
    cout<<"\nEnter For Getting The Information About Movie:"<<endl;
    cin>>choice;
    cout<<"\n";
    struct Akshay{
        int launch;
        float rating;
        string info;
    };
    if(choice==1){
        struct Akshay Herapheri;
        Herapheri.launch=2000;
        Herapheri.rating=8.2;
        Herapheri.info="Plot: Three hapless individuals find themselves in a hilarious situation after a wrong number connects them to a kidnapping plot.";
        cout<<"Hera Pheri\n\n"<<"Launch Date: "<<Herapheri.launch<<"\nRatings: "<<Herapheri.rating<<"\nInformation: "<<Herapheri.info<<endl<<endl;;
    }
    else if(choice==2){
        struct Akshay khiladi;
        khiladi.launch=1992;
        khiladi.rating=7.4;
        khiladi.info="Plot: A series of mysterious deaths happen around a man known for his dangerous games, and he becomes the prime suspect.";
        cout<<"Khiladi\n\n"<<"Launch Date: "<<khiladi.launch<<"\nRatings: "<<khiladi.rating<<"\nInformation: "<<khiladi.info<<endl<<endl;
    }
    else if(choice==3){
        struct Akshay Dhadkan;
        Dhadkan.launch=2000;
        Dhadkan.rating=6.8;
        Dhadkan.info="Plot: A love triangle unfolds, testing the characters' relationships and loyalties.";
        cout<<"Dhadkan\n\n"<<"Launch Date: "<<Dhadkan.launch<<"\nRatings: "<<Dhadkan.rating<<"\nInformation: "<<Dhadkan.info<<endl<<endl;
    }
    else if(choice==4){
        struct Akshay Singh;
        Singh.launch=2000;
        Singh.rating=5.8;
        Singh.info="Plot: A happy-go-lucky man is sent on a mission to bring back a fellow villager who has become a powerful underworld don.";
        cout<<"Singh IS King\n\n"<<"Launch Date: "<<Singh.launch<<"\nRatings: "<<Singh.rating<<"\nInformation: "<<Singh.info<<endl<<endl;
    }
    else if(choice==5){
        struct Akshay Housefull;
        Housefull.launch=2010;
        Housefull.rating=5.4;
        Housefull.info="Plot: A man tries to find rich husbands for his three daughters but ends up creating a series of comical misunderstandings.";
        cout<<"Housefull\n\n"<<"Launch Date: "<<Housefull.launch<<"\nRatings: "<<Housefull.rating<<"\nInformation: "<<Housefull.info<<endl<<endl;
    }
    else if(choice==6){
        struct Akshay RowdyRathore;
        RowdyRathore.launch=2012;
        RowdyRathore.rating=5.8;
        RowdyRathore.info="Plot: A small-time conman's life takes a turn when he encounters his doppelganger, a cop, and gets involved in a dangerous mission.";
        cout<<"Rowdy Rathore\n\n"<<"Launch Date: "<<RowdyRathore.launch<<"\nRatings: "<<RowdyRathore.rating<<"\nInformation: "<<RowdyRathore.info<<endl<<endl;
    }
    else if(choice==7){
        struct Akshay Special26;
        Special26.launch=2013;
        Special26.rating=8.0;
        Special26.info="Plot: A group of con artists posing as CBI officers execute a series of heists, targeting corrupt officials.";
        cout<<"Special 26\n\n"<<"Launch Date: "<<Special26.launch<<"\nRatings: "<<Special26.rating<<"\nInformation: "<<Special26.info<<endl<<endl;
    }
    else if(choice==8){
        struct Akshay Baby;
        Baby.launch=2015;
        Baby.rating=8.0;
        Baby.info="Plot: A covert team is assigned to bring down a terrorist organization and prevent a major terror attack.";
        cout<<"Baby\n\n"<<"Launch Date: "<<Baby.launch<<"\nRatings: "<<Baby.rating<<"\nInformation: "<<Baby.info<<endl<<endl;
    }
    else if(choice==9){
        struct Akshay Toilet;
        Toilet.launch=2017;
        Toilet.rating=7.2;
        Toilet.info="Plot: A man fights against social norms to build a toilet in his village and promote sanitation.";
        cout<<"Toilet Ek Prem Katha\n\n"<<"Launch Date: "<<Toilet.launch<<"\nRatings: "<<Toilet.rating<<"\nInformation: "<<Toilet.info<<endl<<endl;
    }
    else if(choice==10){
        struct Akshay Kesari;
        Kesari.launch=2019;
        Kesari.rating=7.4;
        Kesari.info="Plot: Based on the Battle of Saragarhi, where 21 Sikh soldiers fought against 10,000 Afghan invaders in 1897.";
        cout<<"Kesari\n\n"<<"Launch Date: "<<Kesari.launch<<"\nRatings: "<<Kesari.rating<<"\nInformation: "<<Kesari.info<<endl<<endl;
    }
    else{
        cout<<"Invalid Choice";
    }
    }
//Salman Khan
void salmankhan(){
    string sallu[10]={"Bajrangi Bhaijaan ","Sultan","Kick","Dabangg","Bharat","Hum Aapke Hain Koun..!","Karan Arjun","Tere Naam","Wanted","Andaz Apna Apna"};
    cout<<"                                             (BEST MOVIES)"<<endl;
    for(int i=0;i<10;i++){
        cout<<(i+1)<<". "<<sallu[i]<<endl;
    }
    int choice;
    cout<<"\nEnter For Getting The Information About Movie:"<<endl;
    cin>>choice;
    cout<<"\n";
    struct salman{
        int launch;
        float rating;
        string info;
    };
    if(choice==1){
        struct salman Bajrangi;
        Bajrangi.launch=2015;
        Bajrangi.rating=8.0;
        Bajrangi.info="Synopsis: A heartwarming story of a man who embarks on a journey to reunite a mute, lost girl with her family in Pakistan.";
        cout<<"Bajrangi Bhaijaan\n\n"<<"Launch Date: "<<Bajrangi.launch<<"\nRatings: "<<Bajrangi.rating<<"\nInformation: "<<Bajrangi.info<<endl<<endl;
    }
    else if(choice==2){
        struct salman Sultan;
        Sultan.launch=2016;
        Sultan.rating=7.0;
        Sultan.info="Synopsis: Salman Khan plays the role of a wrestler in this sports drama that explores love, loss, and redemption.";
        cout<<"Sultan\n\n"<<"Launch Date: "<<Sultan.launch<<"\nRating: "<<Sultan.rating<<"\nInformation: "<<Sultan.info<<endl<<endl;
    }
    else if(choice==3){
        struct salman Kick;
        Kick.launch=2014;
        Kick.rating=5.3;
        Kick.info= "Synopsis: A high-octane action film where Salman Khan plays a character who seeks adrenaline rushes through dangerous stunts.";
        cout<<"Kick\n\n"<<"Launch Date: "<<Kick.launch<<"\nRating: "<<Kick.rating<<"\nInformation: "<<Kick.info<<endl<<endl;
    }
    else if(choice==4){
        struct salman dabang;
        dabang.launch=2010;
        dabang.rating=6.2;
        dabang.info="Synopsis: Salman Khan portrays Chulbul Pandey, a fearless and witty cop, in this action-packed entertainer.";
        cout<<"Dabang\n\n"<<"Launch Date: "<<dabang.launch<<"\nRating: "<<dabang.rating<<"\nInformation: "<<dabang.info<<endl<<endl;
    }
    else if(choice==5){
        struct salman bharat;
        bharat.launch=2019;
        bharat.rating=5.3;
        bharat.info="Synopsis: Spanning several decades, Bharat follows the journey of a man through significant moments in Indian history.";
        cout<<"Bharat\n\n"<<"Launch Date: "<<bharat.launch<<"\nRating: "<<bharat.rating<<"\nInformation: "<<bharat.info<<endl<<endl;

    }
    else if(choice==6){
        struct salman hum;
        hum.launch=1994;
        hum.rating=7.5;
        hum.info="Synopsis: A classic family drama that revolves around the bond between two lovers and their extended families.";
        cout<<"Hum Apke Hai Kon...!\n\n"<<"Launch Date: "<<hum.launch<<"\nRating: "<<hum.rating<<"\nInformation: "<<hum.info<<endl<<endl;

    }
    else if(choice==7){
        struct salman karanarjun;
        karanarjun.launch=1995;
        karanarjun.rating=6.9;
        karanarjun.info="Synopsis: Salman Khan stars alongside Shah Rukh Khan in this action-packed film about reincarnation and revenge.";
        cout<<"Karan Arjun\n\n"<<"Launch Date: "<<karanarjun.launch<<"\nRating: "<<karanarjun
        .rating<<"\nInformation: "<<karanarjun.info<<endl<<endl;
    }
    else if(choice==8){
        struct salman terenaam;
        terenaam.launch=2003;
        terenaam.rating=7.1;
        terenaam.info="Synopsis: A romantic drama that explores the emotional journey of a troubled young man who falls in love.";
        cout<<"Tere Naam\n\n"<<"Launch Date: "<<terenaam.launch<<"\nRating: "<<terenaam
        .rating<<"\nInformation: "<<terenaam.info<<endl<<endl;
    }
    else if(choice==9){
        struct salman wanted;
        wanted.launch=2009;
        wanted.rating=6.6;
        wanted.info="Synopsis: An action-packed thriller where Salman Khan plays a stylish and ruthless undercover cop.";
        cout<<"Wanted\n\n"<<"Launch Date: "<<wanted.launch<<"\nRating: "<<wanted
        .rating<<"\nInformation: "<<wanted.info<<endl<<endl;

    }
    else if(choice==10){
        struct salman andaz;
        andaz.launch=1994;
        andaz.rating=8.2;
        andaz.info="Synopsis: A classic comedy that features Salman Khan alongside Aamir Khan in a hilarious tale of mistaken identities and love";
        cout<<"Andaz Apna Apna\n\n"<<"Launch Date: "<<andaz.launch<<"\nRating: "<<andaz
        .rating<<"\nInformation: "<<andaz.info<<endl<<endl;
    }
    else{
        cout<<"Invalid Choice:";
    }
}
//Movie
void movie(){
    cout<<"                                       Welcome To The Movie World"<<endl;
    cout<<"                                          (Chosse Your Actor)"<<endl;
    cout<<"1.Salman Khan"<<endl;
    cout<<"2.Akshay Kumar"<<endl;
    cout<<"3.Ranveer kappor"<<endl;
    cout<<"4.Ajay devgan"<<endl;
    cout<<"5.Varun Dhawan\n"<<endl;
    int actor;
    cout<<"Enter Your Actor:"<<endl;
    cin>>actor;
    
    switch (actor){
    case 1:
    cout<<"                                               Salman Khan"<<endl;
    salmankhan();
    break;

    case 2:
    cout<<"                                              Akshay Kumar"<<endl;
    AkshayK();
    break;

    case 3:
    cout<<"                                               Ranveer kappor"<<endl;
    ranveerkappor();
    break;

    case 4:
    cout<<"                                                 Ajay Devgan"<<endl;
    Ajaydevgan();
    break;

    case 5:
    cout<<"                                                Varun Dhawan"<<endl;
    VarunDhawan();
    break;

    default:
    cout<<"Invalid";
    }
}
//Series
void Series(){
    cout<<"Welcome To The Series World\n"<<endl;
    cout<<"1.Horror"<<endl;
    cout<<"2.Romantic"<<endl;
    cout<<"3.Comedy"<<endl;
    cout<<"4.Action"<<endl;
    int Series;
    cout<<"\nEnter Your Choice:";
    cin>>Series;
    switch(Series){

        case 1:
        cout<<"                                                 Horror"<<endl;
        Horror();
        break;

        case 2:
        cout<<"                                                Romantic"<<endl;
        Romantic();
        break;

        case 3:
        cout<<"                                                  Comedy"<<endl;
        Comedy();
        break;

        case 4:
        cout<<"                                                  Action"<<endl;
        Action();
        break;
    }
}
//Anime
void Anime(){
    cout<<"Welcome To The Anime World\n"<<endl;
    Animes();

}
//Signin
void signuser(){
    cout<<"                                           SIGN-IN"<<endl;
    string username;
    cout<<"Enter Your Username:"<<endl;
    cin>>username;
    int password,password2;
    cout<<"Enter Your Password:"<<endl;
    cin>>password;
    cout<<"Confirm Your Password:"<<endl;
    cin>>password2;
    if(password!=password2){
        cout<<"Check Your Password:";
    }
    return;
}
//Login
void loginuser(){
    cout<<"                                             LOGIN"<<endl;
    string username;
    cout<<"Enter Your Username"<<endl;
    cin>>username;
    int password;
    cout<<"Enter Your Password:"<<endl;
    cin>>password;
    if(username!="mayank"){
        cout<<"Wrong Username";
    }
    else if(password!=12345){
        cout<<"Wrong Password";
    }
    else{
        return;
    }
}
int main(){
    cout<<"                                          MOVIE RECOMMENDATION"<<endl;
    char n;
    cout<<"Press Y/N:";
    cin>>n;
    if(n=='y'){
    cout<<"\n~~~~~Welcome To Project-1~~~~~ "<<endl;
    }
    else{
        return 0;
    }
    cout<<"\n                                            LOGIN PAGE"<<endl;
    cout<<"1.LOGIN"<<endl;
    cout<<"2.SIGN IN\n"<<endl;
    int login;
    cout<<"Enter Your Choice:"<<endl;
    cin>>login;
    switch (login){
        case 1:
        loginuser();
        break;

        case 2:
        signuser();
        break;

        default:
        cout<<"Invalid";
    }
    int choice;
    do{
    cout<<"                                            Hello User!"<<endl;
    cout<<"What Do You Want To See:"<<endl;;
    cout<<"1.Movies"<<endl;
    cout<<"2.Series"<<endl;
    cout<<"3.Anime"<<endl;
    cout<<"4.Exit\n"<<endl;
    cout<<"Enter Your Choice:"<<endl;
    cin>>choice;
    switch(choice){
        case 1:
        movie();
        break;

        case 2:
        Series();
        break;

        case 3:
        Anime();
        break;

        case 4:
        cout<<"THANK YOU FOR VISITING";
        break;
        
        default:
        cout<<"Invalid Choice";
    }
    }while(choice!=4);
}
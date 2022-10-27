import java.util.Date;
import java.util.Scanner;
import java.io.CharConversionException;
import java.io.IOException;
import java.util.ArrayList;
import javax.swing.text.Utilities;
import java.io.File;
import java.io.FileNotFoundException;

class Game {

    private int app_id, age, dlcs, avg_pt;
    private String name, owners, website, developers;
    private Date release_date;
    private float price, upvotes;
    private ArrayList<String> languages, genres;
    private boolean windows, mac, linux;
    
    public Game(){

        this.age = this.app_id = this.dlcs = this.avg_pt = -1;
        this.name = this.owners = this.website = this.developers = null;
        this.release_date = null;
        this.price = this.upvotes = -1;
        this.windows = this.mac = this.linux = false;

    }

    public Game(int app_id, int age,int dlcs, int avg_pt,String name, String owners, String website, String developers, Date release_date, float price, float upvotes, ArrayList<String> languages, ArrayList<String> genres){
        
        setApp_id(app_id);
        setAge(age);
        setAvg_pt(avg_pt);
        setDevelopers(developers);
        setDlcs(dlcs);
        setGenres(genres);
        setLanguages(languages);
        setLinux(linux);
        setMac(mac);
        setName(name);
        setOwners(owners);
        setPrice(price);
        setRelease_date(release_date);
        setUpvotes(upvotes);
        setWebsite(website);
        setWindows(windows);
    
    }

    public Game clone(){

        Game cloned = new Game();
        cloned.age = age;
        cloned.app_id = app_id;
        cloned.avg_pt = avg_pt;
        cloned.developers = developers;
        cloned.dlcs = dlcs;
        cloned.genres = genres;
        cloned.languages = languages;
        cloned.windows = windows;
        cloned.linux = linux;
        cloned.mac = mac;
        cloned.name = name;
        cloned.owners = owners;
        cloned.price = price;
    
        return cloned;
    }

    public void imprimir(){
        
        System.out.println("App_id: " + app_id);
        System.out.println("name: " + name);
        System.out.println("age: " + age);
        System.out.println("avg_pt: " + avg_pt);
        System.out.println("developers: " + developers);
        System.out.println("dlcs: " + dlcs);
        System.out.println("genres: " + genres);
        System.out.println("languages: " + languages);
        System.out.println("windows: " + windows);
        System.out.println("linux: " + linux); 
        System.out.println("mac: " + mac);
        
    }

    //MÉTODOS GETS
   

    public int getAge(){return age;}

    public int getAppId(){return app_id;}

    public String getName(){return name;}

    public Date getReleaseDate(){return release_date;}

    public String getOwners(){return owners;}

    public float getPrice(){return price;}

    public int getDlcs(){return dlcs;}

    public ArrayList<String> getLanguages(){return languages;}

    public String getWebsite(){return website;}

    public boolean getWindows(){return windows;}

    public boolean getMac(){return mac;}

    public boolean getLinux(){return linux;}

    public float getUpvotes(){return upvotes;}

    public int getAvgPt(){return avg_pt;}

    public String getDavelopers(){return developers;}

    public ArrayList<String> getGenres(){return genres;}

    //MÉTODOS SETS
    
    public void setApp_id(int app_id) {this.app_id = app_id;}

    public void setAge(int age) {this.age = age;}

    public void setAvg_pt(int avg_pt) {this.avg_pt = avg_pt;}

    public void setDevelopers(String developers) {this.developers = developers;}

    public void setDlcs(int dlcs) {this.dlcs = dlcs;}

    public void setGenres(ArrayList<String> genres) {this.genres = genres;}

    public void setLanguages(ArrayList<String> languages) {this.languages = languages;}

    public void setLinux(boolean linux) {this.linux = linux;}

    public void setMac(boolean mac) {this.mac = mac;}

    public void setName(String name) {this.name = name;}
    
    public void setOwners(String owners) {this.owners = owners;}
    
    public void setPrice(float price) {this.price = price;}
    
    public void setRelease_date(Date release_date) {this.release_date = release_date;}

    public void setUpvotes(float upvotes) {this.upvotes = upvotes;}

    public void setWebsite(String website) {this.website = website;}

    public void setWindows(boolean windows) {this.windows = windows;}

/* 

    public void lerGames() throws FileNotFoundException{

        Scanner scan = new Scanner(new File("G:/Meu Drive/Ciencia da comutacao/Codando/faculdade/AEDSII/tp02/Q1/games.csv"));
        int contador = 0;
        String[] linhasJogos = new String[4403];
       
        //coloca as lionhas dos dados dos jogos em strings separadas
       while(scan.hasNext()){

            linhasJogos[contador] = scan.nextLine();
            contador++;

        }

        for (int j = 0; j < contador; j++){

            converterLinha(linhasJogos[contador]);

        }
    } 
    
    public static void converterLinha(String jogo){
        
        String[] dadosSeperados = jogo.split(",");

        MyIO.print(dadosSeperados[0]);
        
    }
   

    private static boolean fim(String str) {

        return (str.charAt(0) == 'F' 
                && str.charAt(1) == 'I' 
                && str.charAt(2) == 'M');
    }
*/

    public static void main(String[] args)throws IOException{

        Game x = new Game();


        x.imprimir();
    }
}

class Q1 {
/*
 * public static void main(String[] args){
        
    }
 * 
 */
    
}
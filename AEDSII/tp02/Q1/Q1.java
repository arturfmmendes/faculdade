import java.util.Date;
import java.util.Scanner;
import java.util.ArrayList;
import javax.swing.text.Utilities;

class Game {

    private int app_id, age, dlcs, avg_pt;
    private String name, owners, website, developers;
    private Date release_date;
    private float price, upvotes;
    private ArrayList<String> languages, genres;
    private boolean windows;
    private boolean mac;
    private boolean linux;

    //resto das classes

    public Game(){

        this.age = this.app_id = this.dlcs = this.avg_pt = -1;
        this.name = this.owners = this.website = this.developers = null;
        this.release_date = null;
        this.price = this.upvotes = -1;
        this.windows = this.mac = this.linux = false;

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
        cloned.linux = linux;
        cloned.mac = mac;
        cloned.name = name;
        cloned.owners = owners;
        cloned.price = price;
    
        return cloned;
    }

    //MÉTODOS GETS
    public int getAppId(){
        return app_id;
    }

    public String getName() {
        return name;
    }

    public Date getReleaseDate(){
        return release_date;
    }

    public String getOwners(){
        return owners;
    }

    public int getAge(){
        return age;
    }

    public float getPrice(){
        return price;
    }

    public int getDlcs(){
        return dlcs;
    }

    public ArrayList<String> getLanguages(){
        return languages;
    }

    public String getWebsite(){
        return website;
    }

    public boolean getWindows(){
        return windows;
    }

    public boolean getMac(){
        return mac;
    }

    public boolean getLinux(){
        return linux;
    }

    public float getUpvotes(){
        return upvotes;
    }

    public int getAvgPt(){
        return avg_pt;
    }

    public String getDavelopers(){
        return developers;
    }

    public String[] getGenres(){
        return genres;
    }

    //MÉTODOS SETS

    public void setApp_id(int app_id) {
        this.app_id = app_id;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public void setAvg_pt(int avg_pt) {
        this.avg_pt = avg_pt;
    }

    public void setDevelopers(String developers) {
        this.developers = developers;
    }

    public void setDlcs(int dlcs) {
        this.dlcs = dlcs;
    }

    public void setGenres(String[] genres) {
        this.genres = genres;
    }

    public void setLanguages(String[] languages) {
        this.languages = languages;
    }

    public void setLinux(boolean linux) {
        this.linux = linux;
    }

    public void setMac(boolean mac) {
        this.mac = mac;
    }

    public void setName(String name) {
        this.name = name;
    }
    
    public void setOwners(String owners) {
        this.owners = owners;
    }
    
    public void setPrice(float price) {
        this.price = price;
    }
    
    public void setRelease_date(Date release_date) {
        this.release_date = release_date;
    }

    public void setUpvotes(float upvotes) {
        this.upvotes = upvotes;
    }

    public void setWebsite(String website) {
        this.website = website;
    }

    public void setWindows(boolean windows) {
        this.windows = windows;
    }

}


class Q1 {
    public static void main(String[] args) {

        Scanner x = new Scanner(System.in);


        String bling = x.nextLine();

        System.out.println(bling);
    

    }

}

import java.util.Date;
import java.text.SimpleDateFormat;
import java.io.File;
import java.util.*;
import java.io.IOException;
import java.text.ParseException;
import java.text.DecimalFormat;

class Games {
    // Atributos Privados
    private int app_id;
    private String name;
    private Date release_date;
    private String owners;
    private int age;
    private double price;
    private int dlcs;
    private String[] languages; 
    private String website;
    private boolean windows;
    private boolean mac;
    private boolean linux;
    private double upvotes;
    private int avg_pt;
    private String developes;
    private String[] genres; 

    // Construtor sem Parametro
    public Games() {
        app_id = 0;
        name = "";
        release_date = null;
        owners = "";
        age = 0;
        price = 0;
        dlcs = 0;
        languages = null;
        website = "";
        windows = false;
        mac = false;
        linux = false;
        upvotes = 0.0;
        avg_pt = 0;
        developes = "";
        genres = null;
    }

    // Construtor com Parametro
    public Games(int app_id, String name, Date release_date, String owners, int age, double price, int dlcs, String[] languages,  String website, boolean windows, boolean mac, boolean linux, Double upvotes, int avg_pt, String developes,String[] genres) {
        setApp_id(app_id);
        setName(name);
        setRelease_date(release_date);
        setOwners(owners);
        setAge(age);
        setPrice(price);
        setDlcs(dlcs);
        setLanguages(languages);
        setWebsite(website);
        setWindows(windows);
        setMac(mac);
        setLinux(linux); 
        setUpvotes(upvotes);
        setAvg_pt(avg_pt);
        setDevelopes(developes);
        setGenres(genres);
    }

    // Gets e Setts
    public void setApp_id(int app_id) {
        this.app_id = app_id;
    }

    public int getApp_id() {
        return app_id;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setRelease_date(Date release_date) {
        this.release_date = release_date;
    }

    public Date getRelease_date() {
        return release_date;
    }

    public void setOwners(String owners) {
        this.owners = owners;
    }

    public String getOwners() {
        return owners;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public int getAge() {
        return age;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public double getPrice() {
        return price;
    }

    public void setDlcs(int dlcs) {
        this.dlcs = dlcs;
    }

    public int getDlcs() {
        return dlcs;
    }

    public void setLanguages(String[] languages) {
        this.languages = languages;
    }

    public String[] getLanguages() {
        return languages;
    }

    public void setWebsite(String website) {
        this.website = website;
    }

    public String getWebsite() {
        return website;
    }

    public void setWindows(boolean windows) {
        this.windows = windows;
    }

    public boolean getWindows() {
        return windows;
    }

    public void setMac(boolean mac) {
        this.mac = mac;
    }

    public boolean getMac() {
        return mac;
    }

    public void setLinux(boolean linux) {
        this.linux = linux;
    }

    public boolean getLinux() {
        return linux;
    }

    public void setUpvotes(Double upvotes) {
        this.upvotes = upvotes;
    }

    public Double getUpvotes() {
        return upvotes;
    }

    public void setAvg_pt(int avg_pt) {
        this.avg_pt = avg_pt;
    }

    public int getAvg_pt() {
        return avg_pt;
    }

    public void setDevelopes(String developes) {
        this.developes = developes;
    }

    public String getDevelopes() {
        return developes;
    }

    public void setGenres(String[] genres) {
        this.genres = genres;
    }

    public String[] getGenres() {
        return genres;
    }

    // Metodo Imprimir
    public void imprimir() {
        System.out.print(getApp_id() + " " + getName() + " ");  
        
        formatData(getRelease_date());
        
        System.out.print(" " + getOwners() + " " + getAge() + " ");

        formatPrice(getPrice());

        System.out.print(" " + getDlcs() + " ");
        
        formatLanguages(getLanguages());

        formatWeb(getWebsite());

        System.out.print(" " + getWindows() + " " + getMac() + " " + getLinux() + " ");

        formatPorcentagem(getUpvotes());

        formatHoras(getAvg_pt());
        
        System.out.print(" " + getDevelopes() + " ");

        formatGenres(getGenres());
    }

    public static void formatPrice(double price) {
        DecimalFormat df = new DecimalFormat("0.00");
        System.out.print(df.format(price));
    }

    public static void formatWeb(String web) {
        if(web.equals("")) {
            System.out.print("null");
        } else {
            System.out.print(web);
        }
    }

    public static void formatData(Date data) {
        SimpleDateFormat sdf = new SimpleDateFormat("MMM/yyyy");
        String dataString = sdf.format(data);
        System.out.print(dataString);
    }

    public static void formatHoras(int valor) {
        int horas = valor / 60;
        int min = valor % 60;

        if(horas == 0 && min == 0) {
            System.out.print(" " + null);
        } else if (horas > 0 && min > 0) {
            System.out.print(" " + horas + "h " + min + "m");
        } else {
            if(horas > 0) {
                System.out.print(" " + horas + "h");
            }
            if(min > 0) {
                System.out.print(" " + min + "m");
            }   
        }
    }

    public static void formatPorcentagem(Double conta) {
        System.out.print((int)Math.round(conta * 100) + "%");
    }

    public static double porcentagem (String positivo, String negativo)  {
        double conta = Double.parseDouble(positivo)  / (Double.parseDouble(positivo) + Double.parseDouble(negativo));
        return conta;
    }

    public static void formatGenres(String[] str) {
        System.out.print("["); 
        for(int i=0; i < str.length; i++) {
            if(i == str.length - 1) {
                System.out.print(str[i]);
            } else {
                System.out.print(str[i] + ", ");
            }
        }
        System.out.print("]");
        System.out.println();
    }

    public static void formatLanguages(String[] str) {
        for(int i = 0; i < str.length; i++) {
            int n = str[i].indexOf("-");
            if(n != -1) {
                String aux = "";
                int t = str[i].length();
                for(int j=0; j < n; j++) {
                    aux += str[i].charAt(j);
                }
                aux += "-";
                for(int j = n+1; j < t; j++) {
                    aux += str[i].charAt(j);
                }  
                str[i] = aux;     
            }

            if(i == str.length - 1) {
                System.out.print(str[i]);
            } else {
                System.out.print(str[i] + ",");
            }
        }
        System.out.print(" ");
    }

    public static Date isData(String strData) throws ParseException {
        Date data = null;
        try {
            SimpleDateFormat sdf = new SimpleDateFormat("\"MMM dd, yyyy\"", Locale.US);
            data = sdf.parse(strData);
        } catch(ParseException e) {
            SimpleDateFormat sdf = new SimpleDateFormat("MMM yyyy", Locale.US);
            data = sdf.parse(strData);
        }

        return data;
    }

    public static void converterString (String str, String pubIn) throws ParseException {
        String aux = "";
        int n = 0;

        n = str.indexOf(',');

        for(int i=0; i<n; i++) {
            aux += str.charAt(i);
        }

        if(aux.equals(pubIn)) {
            Games gameAtributos = new Games();
            String[] arrysAtributos =  str.split(",(?=(?:[^\"]*\"[^\"]*\")*[^\"]*$)");
            
            gameAtributos.setApp_id(Integer.parseInt(arrysAtributos[0]));
            gameAtributos.setName(arrysAtributos[1]);
            gameAtributos.setRelease_date(isData(arrysAtributos[2])); 
            gameAtributos.setOwners(arrysAtributos[3]);
            gameAtributos.setAge(Integer.parseInt(arrysAtributos[4]));
            gameAtributos.setPrice(Double.parseDouble(arrysAtributos[5]));
            gameAtributos.setDlcs(Integer.parseInt(arrysAtributos[6]));
            gameAtributos.setLanguages(arrysAtributos[7].replaceAll("'", "").replaceAll("\"", "").split(","));
            gameAtributos.setWebsite(arrysAtributos[8]);
            gameAtributos.setWindows(Boolean.parseBoolean(arrysAtributos[9]));
            gameAtributos.setMac(Boolean.parseBoolean(arrysAtributos[10]));
            gameAtributos.setLinux(Boolean.parseBoolean(arrysAtributos[11]));
            gameAtributos.setUpvotes((porcentagem(arrysAtributos[12], arrysAtributos[13])));
            gameAtributos.setAvg_pt(Integer.parseInt(arrysAtributos[14]));
            gameAtributos.setDevelopes(arrysAtributos[15].replaceAll("\"", ""));
            gameAtributos.setGenres(arrysAtributos[16].replaceAll("\"", "").split(","));
            gameAtributos.imprimir();
            
        } 
    }

    // Metodo de Ler
    public static void ler(String pubIn) throws IOException, ParseException{
        Scanner sc = new Scanner (new File("/tmp/games.csv"));  
        String[] entradas = new String[4403]; 
        int cont = 0; 

        // Ler enquanto o arquivo existir
        while(sc.hasNext()) { 
            entradas[cont] = sc.nextLine(); 
            cont++;
        }

        // Manda cada linha da entrada
        for(int i=0; i< cont; i++) {
            converterString(entradas[i], pubIn);
        }

        // sc.close();
    }

    // Metodo de de Parada da Entrada
    public static boolean fim(String str) {
        return (str.length() == 3 
            && str.charAt(0) == 'F'
            && str.charAt(1) == 'I'
            && str.charAt(2) == 'M'
        );
    }

    public static void main(String[] args) throws IOException, ParseException {
        String pubIn = "";
        Scanner scaner = new Scanner(new File("/games.csv"));

        do {
            pubIn = scaner.nextLine();
            ler(pubIn);
        } while(fim(pubIn) != true); 
    }

}
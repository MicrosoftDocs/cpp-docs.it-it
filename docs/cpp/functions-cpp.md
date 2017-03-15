---
title: "Funzioni (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "dichiaratori, funzioni"
  - "argomenti predefiniti"
  - "impostazioni predefinite, arguments"
  - "definizioni di funzioni"
  - "definizioni di funzioni, informazioni su definizioni di funzioni"
ms.assetid: 33ba01d5-75b5-48d2-8eab-5483ac7d2274
caps.latest.revision: 19
caps.handback.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzioni (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una funzione è un blocco di codice che esegue un'operazione.  Una funzione può facoltativamente definire parametri di input che permettono ai chiamanti di passare argomenti nella funzione  e può facoltativamente restituire un valore come output.  Le funzioni sono utili per incapsulare operazioni comuni in un singolo blocco riutilizzabile, idealmente con un nome che descrive in modo chiaro ciò che la funzione permette di ottenere.  La funzione seguente accetta due numeri interi da un chiamante e ne restituisce la somma. `a` e `b` sono *parametri* di tipo `int`.  
  
```  
int sum(int a, int b)  
{  
    return a + b;  
}  
```  
  
 La funzione può essere richiamata o *chiamata* da diverse posizioni nel programma.  I valori passati alla funzione sono gli *argomenti*, i cui tipi devono essere compatibili con i tipi di parametri nella definizione della funzione.  
  
```  
int main()  
{  
    int i = sum(10, 32);  
    int j = sum(i, 66);  
    cout << "The value of j is" << j << endl; // 108  
}  
```  
  
 Non sono previsti limiti pratici per la lunghezza della funzione, ma una progettazione ottimale ha come obiettivo funzioni che eseguono una singola attività ben definita.  È consigliabile suddividere gli algoritmi complessi in funzioni più semplici e di facile comprensione, se possibile.  
  
 Le funzioni definite a livello di ambito della classe sono chiamate funzioni membro.  In C\+\+, a differenza degli altri linguaggi, una funzione può essere definita anche a livello di ambito dello spazio dei nomi, incluso lo spazio dei nomi globale implicito.  Queste funzioni sono definite *funzioni libere* o *funzioni non membro*. Sono ampiamente usate nella libreria standard.  
  
## Parti della dichiarazione di una funzione  
 Una *dichiarazione* minima di una funzione è costituita da tipo restituito, nome funzione ed elenco di parametri \(che può essere vuoto\), insieme a parole chiave facoltative che forniscono istruzioni aggiuntive al compilatore.  La definizione di una funzione è costituita da una dichiarazione e dal *corpo*, ovvero tutto il codice racchiuso tra parentesi graffe.  Una dichiarazione di funzione seguita da punto e virgola può apparire in più posizioni in un programma.  Deve essere presente prima di qualsiasi chiamata a tale funzione in ogni unità di conversione.  La definizione della funzione deve comparire solo una volta nel programma, in base alla regola ODR \(One Definition Rule\).  
  
 Le parti obbligatorie della dichiarazione di una funzione sono le seguenti:  
  
1.  Il tipo restituito, che specifica il tipo di valore restituito dalla funzione oppure `void` se non viene restituito alcun valore.  In C\+\+11 auto è un tipo restituito valido, che indica al compilatore di dedurre il tipo dall'istruzione return.  In C\+\+14 è consentito anche decltype\(auto\).  Per altre informazioni, vedere Deduzione dei tipi nei tipi restituiti più avanti.  
  
2.  Il nome della funzione, che deve iniziare con una lettera o un carattere di sottolineatura e non può contenere spazi.  In generale, i caratteri di sottolineatura iniziali nei nomi delle funzioni della libreria standard indicano funzioni membro private o funzioni non membro non destinate all'uso nel codice.  
  
3.  L'elenco di parametri, un set di zero o più parametri racchiuso tra parentesi graffe e delimitato da virgole che specificano il tipo e, facoltativamente, un nome locale in base ai quali è possibile accedere ai valori entro il corpo della funzione.  
  
 Le parti facoltative della dichiarazione di una funzione sono le seguenti:  
  
1.  `constexpr`, che indica che il valore restituito della funzione è un valore costante e può essere calcolato in fase di compilazione.  
  
    ```  
  
                  constexpr float exp(float x, int n)  
    {  
        return n == 0 ? 1 :  
            n % 2 == 0 ? exp(x * x, n / 2) :  
            exp(x * x, (n - 1) / 2) * x;  
    };  
    ```  
  
2.  La rispettiva specifica `linkage`, `extern` o `static`.  
  
    ```  
    Declare printf with C linkage.  
    extern "C" int printf( const char *fmt, ... );  
  
    ```  
  
     Per altre informazioni, vedere [Programma e collegamento](../cpp/program-and-linkage-cpp.md).  
  
3.  `inline`, che indica al compilatore di sostituire ogni chiamata alla funzione con il codice della funzione stessa.  L'incorporamento può migliorare le prestazioni negli scenari in cui una funzione viene eseguita rapidamente e viene richiamata ripetutamente in una sezione di codice essenziale per le prestazioni.  
  
    ```  
    inline double Account::GetBalance()  
    {  
        return balance;  
    }  
    ```  
  
     Per altre informazioni, vedere [Funzioni inline](../cpp/inline-functions-cpp.md).  
  
4.  `noexcept`, che specifica se la funzione può generare un'eccezione.  Nell'esempio seguente la funzione non genera eccezioni se l'espressione `is_pod` restituisce `true`.  
  
    ```  
    #include <type_traits>  
  
    template <typename T>  
    T copy_object(T& obj) noexcept(std::is_pod<T>) {...}  
    ```  
  
     Per altre informazioni, vedere [noexcept](../cpp/noexcept-cpp.md).  
  
5.  \(Solo funzioni membro\) I qualificatori CV, che specificano se la funzione è `const` o `volatile`.  
  
6.  \(Solo funzioni membro\) `virtual`, `override` o `final`.  `virtual` specifica che una funzione può essere sottoposta a override in una classe derivata.  `override` significa che una funzione in una classe derivata esegue l'override di una funzione virtuale.  `final` significa che non è possibile eseguire l'override di una funzione in altre classi derivate.  Per altre informazioni, vedere [Funzioni virtuali](../cpp/virtual-functions.md).  
  
7.  \(Solo funzioni membro\) `static` applicato a una funzione membro significa che la funzione non è associata ad alcuna istanza di oggetto della classe.  
  
8.  \(Solo funzioni membro non statiche\) Il qualificatore di riferimento, che indica al ricompilatore quale overload di una funzione deve essere scelto quando il parametro dell'oggetto implicito \(\*this\) è un riferimento rvalue invece di  un riferimento lvalue.  
  
 La figura seguente illustra le parti di una definizione di funzione.  L'area ombreggiata costituisce il corpo della funzione.  
  
 ![Parti di una definizione di funzione](../cpp/media/vc38ru1.png "vc38RU1")  
Parti della definizione di una funzione  
  
## Definizioni di funzione  
 Le variabili dichiarate all'interno del corpo sono definite variabili locali o locali.  Escono dall'ambito al termine di una funzione. È quindi necessario che una funzione non restituisca mai un riferimento a una locale.  
  
## Modelli di funzioni  
 Un modello di funzione è analogo a un modello di classe. Genera funzioni concrete in base agli argomenti del modello.  In molti casi, il modello è in grado di dedurre il tipo degli argomenti e non è quindi necessario specificarli in modo esplicito.  
  
```  
template<typename Lhs, typename Rhs>  
auto Add2(const Lhs& lhs, const Rhs& rhs)  
{  
    return lhs + rhs;  
}  
  
auto a = Add2(3.13, 2.895); // a is a double  
auto b = Add2(string{ "Hello" }, string{ " World" }); // b is a std::string  
```  
  
 Per altre informazioni, vedere [Modelli di funzioni](../cpp/function-templates.md)  
  
## Parametri e argomenti delle funzioni  
 Una funzione ha un elenco di parametri delimitato da virgole che include zero o più tipi, ognuno dei quali ha un nome che ne permette l'accesso all'interno della funzione.  Un modello di funzione può specificare un tipo aggiuntivo o parametri aggiuntivi di valore.  Il chiamante passa gli argomenti, che sono valori concreti i cui tipi sono compatibili con l'elenco di parametri.  
  
 Per impostazione predefinita, gli argomenti vengono passati alla funzione per valore, ovvero la funzione riceve una copia dell'oggetto passato.  Per gli oggetti di grandi dimensioni la creazione di una copia può essere dispendiosa e non è sempre necessaria.  Per fare in modo che gli argomenti vengano passati per riferimento, in particolare un riferimento lvalue, aggiungere un qualificatore di riferimento al parametro:  
  
```  
void DoSomething(std::string& input){...}  
```  
  
 Quando una funzione modifica un argomento passato per riferimento, modifica l'oggetto originale, non una copia locale.  Per impedire a una funzione di modificare tale argomento, qualificare il parametro come const&:  
  
```  
void DoSomething(const std::string& input){...}  
```  
  
 **C\+\+ 11:**  per gestire in modo esplicito gli argomenti passati per riferimento rvalue OPPURE per riferimento lvalue, usare una e commerciale doppia sul parametro per indicare un riferimento universale:  
  
```  
void DoSomething(const std::string&& input){...}  
```  
  
 Una funzione dichiarata con la singola parola chiave `void` nell'elenco delle dichiarazioni di parametri non accetta alcun argomento, fintanto che la parola chiave `void` è il primo e unico membro di tale elenco.  Gli argomenti di tipo `void` in un altro punto dell'elenco producono errori.  Ad esempio:  
  
```  
  
// OK same as GetTickCount()  
long GetTickCount( void );   
```  
  
 Si noti che, sebbene non sia valido specificare un argomento `void` tranne come descritto di seguito, i tipi derivati da tipo `void` \(ad esempio i puntatori a `void` e le matrici di `void`\) possono essere visualizzati nell'elenco delle dichiarazioni di argomenti.  
  
### Argomenti predefiniti  
 È possibile assegnare un argomento predefinito agli ultimi parametri nella firma di una funzione, per indicare che il chiamante può tralasciare l'argomento quando chiama la funzione, a meno che non voglia specificare un altro valore.  
  
```  
int DoSomething(int num,   
    string str,   
    Allocator& alloc = defaultAllocator)  
{ ... }  
  
// OK both parameters are at end  
int DoSomethingElse(int num,   
    string str = string{ "Working" },   
    Allocator& alloc = defaultAllocator)  
{ ... }  
  
// C2548: 'DoMore': missing default parameter for parameter 2  
int DoMore(int num = 5, // Not a trailing parameter!  
    string str,  
    Allocator& = defaultAllocator)  
{...}  
```  
  
 Per altre informazioni, vedere [Argomenti predefiniti](../cpp/default-arguments.md) e [Argomenti predefiniti per modelli di classe](../Topic/Default%20Arguments%20for%20Class%20Templates.md).  
  
## Tipi restituiti di funzione  
 Una funzione non può restituire un'altra funzione o una matrice incorporata, ma può restituire puntatori a questi tipi o un valore *lambda*, che produce un oggetto funzione.  Ad eccezione di questi casi, una funzione può restituire un valore di qualsiasi tipo incluso nell'ambito oppure è possibile che non restituisca alcun valore e in tale caso il tipo restituito è `void`.  
  
### Tipi restituiti finali  
 Un tipo restituito "normale" si trova sul lato sinistro della firma della funzione.  Un *tipo restituito finale* si trova sul lato destro della firma ed è preceduto dall'operatore \-\>.  I tipi restituiti finali sono particolarmente utili nei modelli di funzione, quando il tipo di valore restituito dipende dai parametri del modello.  
  
```  
template<typename Lhs, typename Rhs>  
auto Add(const Lhs& lhs, const Rhs& rhs) -> decltype(lhs + rhs)  
{  
    return lhs + rhs;   
}  
```  
  
 Quando `auto` viene usato insieme a un tipo restituito finale, funge semplicemente da segnaposto per qualsiasi elemento prodotto dall'espressione decltype e non esegue direttamente alcuna deduzione di tipo.  
  
###  <a name="type_deduction"></a> Deduzione dei tipi nei tipi restituiti \(C\+\+14\)  
 In C\+\+14 è possibile usare `auto` per indicare al compilatore di dedurre il tipo restituito dal corpo della funzione, senza dovere fornire un tipo restituito finale.  Si noti che `auto` deduce sempre un comportamento di restituzione per valore.  Usare `auto&&` per indicare al compilatore di dedurre un riferimento.  
  
 In questo esempio `auto` verrà dedotto come copia di valore non const della somma di lhs e rhs.  
  
```  
template<typename Lhs, typename Rhs>  
auto Add2(const Lhs& lhs, const Rhs& rhs)  
{  
    return lhs + rhs; //returns a non-const object by value  
}  
```  
  
 Si noti anche che `auto` non conserva la caratteristica const del tipo dedotto.  Per inoltrare funzioni il cui valore restituito deve conservare la caratteristica const o ref dei rispettivi argomenti, è possibile usare la parola chiave `decltype(auto)`, che usa le regole di inferenza dei tipi `decltype` e conserva tutte le informazioni sui tipi.  `decltype(auto)` può essere usato come valore restituito normale sul lato sinistro o come valore restituito finale.  
  
 L'esempio seguente, basato su codice da [N3493](http://www.open-std.org/JTC1/SC22/WG21/docs/papers/2013/n3493.html), illustra l'uso di `decltype(auto)` per abilitare l'inoltro perfetto di argomenti della funzione in un tipo restituito, che sarà noto solo dopo la creazione di istanze del modello.  
  
```  
template<typename F, typename Tuple = tuple<T...>, int... I>  
decltype(auto) apply_(F&& f, Tuple&& args, index_sequence<I...>)   
{  
    return std::forward<F>(f)(std::get<I>(std::forward<Tuple>(args))...);  
}  
  
template<typename F, typename Tuple = tuple<T...>,  
    typename Indices = make_index_sequence<tuple_size<Tuple>::value >>  
   decltype( auto)  
    apply(F&& f, Tuple&& args)      
{  
    return apply_(std::forward<F>(f), std::forward<Tuple>(args), Indices());  
}  
}  
```  
  
## Variabili locali delle funzioni  
 Una variabile dichiarata all'interno del corpo di una funzione è definita *variabile locale* o semplicemente *locale*.  Le locali non statiche sono visibili solo all'interno del corpo della funzione e, se sono dichiarate nello stack, escono dall'ambito al termine della funzione.  Quando si crea una variabile locale e la si restituisce per valore, il compilatore può in genere eseguire l'ottimizzazione del valore restituito per evitare operazioni di copia non necessarie.  Se si restituisce una variabile locale per riferimento, il compilatore emetterà un avviso, poiché qualsiasi tentativo da parte del chiamante di usare tale riferimento si verificherà dopo l'eliminazione della locale.  
  
 Gli oggetti statici locali vengono eliminati durante la chiusura specificata da `atexit`.  Se un oggetto statico non è stato costruito perché il flusso di controllo del programma ne ha ignorato la dichiarazione, non viene eseguito alcun tentativo di eliminare tale oggetto.  
  
### Variabili locali statiche  
 In C\+\+ una variabile locale può essere dichiarata come statica.  La variabile è visibile solo all'interno del corpo della funzione, ma esiste una singola copia della variabile per tutte le istanze della funzione.  
  
## Puntatori funzione  
 C\+\+ supporta i puntatori di funzione in modo analogo al linguaggio C.  Un'alternativa più indipendente dai tipi consiste in genere nell'usare un oggetto di funzione.  
  
 Si consiglia di usare `typedef` per dichiarare un alias per il tipo puntatore a funzione se si dichiara una funzione che restituisce un tipo puntatore a funzione.  Esempio:  
  
```  
typedef int (*fp)(int);  
fp myFunction(char* s); // function returning function pointer  
```  
  
 Se questa operazione non viene eseguita, la sintassi corretta per la dichiarazione di funzione può essere dedotta dalla sintassi del dichiaratore per il puntatore a funzione sostituendo l'identificatore \(`fp` nell'esempio precedente\) con il nome e l'elenco di argomenti delle funzioni, come illustrato di seguito:  
  
```  
int (*myFunction(char* s))(int);  
```  
  
 La dichiarazione precedente equivale alla dichiarazione effettuata mediante l'elemento typedef precedente.  
  
## Vedere anche  
 [Overload di funzioni](../cpp/function-overloading.md)   
 [Funzioni con elenchi di argomenti variabili](../cpp/functions-with-variable-argument-lists-cpp.md)   
 [Funzioni impostate come predefinite ed eliminate in modo esplicito](../cpp/explicitly-defaulted-and-deleted-functions.md)   
 [Ricerca del nome dipendente dall'argomento nelle funzioni \(Koenig\)](../cpp/argument-dependent-name-koenig-lookup-on-functions.md)   
 [Argomenti predefiniti](../cpp/default-arguments.md)   
 [Funzioni inline](../cpp/inline-functions-cpp.md)
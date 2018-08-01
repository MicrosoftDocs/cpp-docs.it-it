---
title: Overload di funzioni | Microsoft Docs
ms.custom: ''
ms.date: 1/25/2018
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- function overloading [C++], about function overloading
- function overloading
- declaring functions [C++], overloading
ms.assetid: 3c9884cb-1d5e-42e8-9a49-6f46141f929e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f57ae6a7d084a497ec41c9b66b314ad1fdb3e7fc
ms.sourcegitcommit: 2b9e8af9b7138f502ffcba64e2721f7ef52af23b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/01/2018
ms.locfileid: "39406571"
---
# <a name="function-overloading"></a>Overload di funzioni
C++ consente la specifica di più funzioni con lo stesso nome nello stesso ambito. Questi sono denominati *sottoposti a overload* funzioni. Le funzioni in overload consentono di fornire diverse semantiche per una funzione, a seconda del tipo e numero di argomenti. 
  
 Ad esempio, un `print` funzione che accetta una `std::string` argomento potrebbe eseguire attività molto diverse rispetto a uno che accetta un argomento di tipo **doppie**. L'overload evita di dover usare, ad esempio i nomi `print_string` o `print_double`. In fase di compilazione, il compilatore sceglie quale overload usare in base al tipo di argomenti passato dal chiamante.  Se si chiama `print(42.0)` il `void print(double d)` funzione verrà richiamata. Se si chiama `print("hello world")` il `void print(std::string)` overload viene richiamato.

È possibile eseguire l'overload sia le funzioni membro e funzioni non membro. Nella tabella seguente sono illustrate quali parti di una dichiarazione di funzione C++ vengono usate per distinguere tra gruppi di funzioni con lo stesso nome nello stesso ambito.  
  
### <a name="overloading-considerations"></a>Considerazioni sull'overload  
  
|Elemento di dichiarazione della funzione|Usato per eseguire l'overload?|  
|----------------------------------|---------------------------|  
|Tipo restituito di funzione|No|  
|Numero di argomenti|Yes|  
|Tipo di argomenti|Yes|  
|Presenza o assenza di puntini di sospensione|Yes|  
|Sfrutta **typedef** nomi|No|  
|Limiti di matrice non specificati|No|  
|**const** o **volatile**|Sì, quando applicato a una funzione intera|
|[ref-qualifier](#ref-qualifier)|Yes|  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come è possibile usare l'overload.  
  
```cpp 
// function_overloading.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <math.h>  
#include <string>

// Prototype three print functions.  
int print(std::string s);             // Print a string.  
int print(double dvalue);            // Print a double.  
int print(double dvalue, int prec);  // Print a double with a  
                                     //  given precision.  
using namespace std;
int main(int argc, char *argv[])
{
    const double d = 893094.2987;
    if (argc < 2)
    {
        // These calls to print invoke print( char *s ).  
        print("This program requires one argument.");
        print("The argument specifies the number of");
        print("digits precision for the second number");
        print("printed.");
        exit(0);
    }

    // Invoke print( double dvalue ).  
    print(d);

    // Invoke print( double dvalue, int prec ).  
    print(d, atoi(argv[1]));
}

// Print a string.  
int print(string s)
{
    cout << s << endl;
    return cout.good();
}

// Print a double in default precision.  
int print(double dvalue)
{
    cout << dvalue << endl;
    return cout.good();
}

//  Print a double in specified precision.  
//  Positive numbers for precision indicate how many digits  
//  precision after the decimal point to show. Negative  
//  numbers for precision indicate where to round the number  
//  to the left of the decimal point.  
int print(double dvalue, int prec)
{
    // Use table-lookup for rounding/truncation.  
    static const double rgPow10[] = {
        10E-7, 10E-6, 10E-5, 10E-4, 10E-3, 10E-2, 10E-1, 
        10E0, 10E1,  10E2,  10E3,  10E4, 10E5,  10E6 };
    const int iPowZero = 6;

    // If precision out of range, just print the number.  
    if (prec < -6 || prec > 7)
    {
        return print(dvalue);
    }
    // Scale, truncate, then rescale.  
    dvalue = floor(dvalue / rgPow10[iPowZero - prec]) *
        rgPow10[iPowZero - prec];
    cout << dvalue << endl;
    return cout.good();
}  
```  
  
 Nel codice precedente viene illustrato l'overload della funzione `print` nell'ambito file.  
  
 L'argomento predefinito non viene considerato parte del tipo di funzione. Non viene pertanto usato nella selezione delle funzioni in overload. Due funzioni che differiscono solo nei relativi argomenti predefiniti vengono considerate più definizioni anziché funzioni in overload.  
  
 Per gli operatori di overload non possono essere forniti argomenti predefiniti.  
  
  
## <a name="argument-matching"></a>Corrispondenza di argomenti  
 Le funzioni in overload vengono selezionate per la migliore corrispondenza delle dichiarazioni di funzione nell'ambito corrente con gli argomenti forniti nella chiamata di funzione. Se viene trovata una funzione appropriata, questa viene chiamata. "Appropriato" in questo contesto indica una delle seguenti operazioni:  
  
-   Una corrispondenza esatta è stata trovata.  
  
-   Una conversione semplice è stata eseguita.  
  
-   Una promozione a intero è stata eseguita.  
  
-   Esiste una conversione standard al tipo di argomento desiderato.  
  
-   Esiste una conversione definita dall'utente (operatore di conversione o costruttore) al tipo di argomento desiderato.  
  
-   Sono stati trovati argomenti rappresentati dai puntini di sospensione.  
  
 Il compilatore crea un set di funzioni candidate per ciascun argomento. Le funzioni candidate sono funzioni in cui l'argomento effettivo in quella posizione può essere convertito nel tipo dell'argomento formale.  
  
 Un set delle "migliori funzioni di corrispondenza" viene compilato per ogni argomento e la funzione selezionata è l'intersezione di tutti i set. Se l'intersezione contiene più funzioni, l'overload è ambiguo e genera un errore. La funzione che infine verrà selezionata è sempre una corrispondenza migliore di qualsiasi altra funzione del gruppo per almeno un argomento. In caso contrario (se non è chiaro quale prevale), la chiamata di funzione genera un errore.  
  
 Considerare le seguenti dichiarazioni (le funzioni vengono contrassegnate come `Variant 1`, `Variant 2` e `Variant 3` per l'identificazione nella discussione seguente):  
  
```cpp 
Fraction &Add( Fraction &f, long l );       // Variant 1  
Fraction &Add( long l, Fraction &f );       // Variant 2  
Fraction &Add( Fraction &f, Fraction &f );  // Variant 3  
  
Fraction F1, F2;  
```
  
 Si consideri la seguente istruzione:  
  
```cpp 
F1 = Add( F2, 23 );  
```  
  
 Con l'istruzione precedente vengono compilati due set:  
  
|Set 1: Funzioni candidate con il primo argomento della frazione di tipo|Set 2: Candidato funzioni la cui secondo argomento può essere convertito in tipo **int**|  
|--------------------------------------------------------------------------|-----------------------------------------------------------------------------------|  
|Variante 1|Variante 1 (**int** può essere convertito in **lungo** mediante una conversione standard)|  
|Variante 3||  
  
 Le funzioni del Set 2 sono funzioni per le quali vi sono conversioni implicite dal tipo di parametro effettivo nel tipo di parametro formale e tra tali funzioni vi è una funzione per cui il "costo" di conversione del tipo di parametro effettivo nel tipo di parametro formale è il più ridotto.  
  
 L'intersezione dei due set è la Variante 1. Un esempio di una chiamata di funzione ambigua è:  
  
```cpp 
F1 = Add( 3, 6 );  
```  
  
 Con la chiamata di funzione precedente vengono compilati i seguenti set:  
  
|Set 1: Funzioni Candidate sono primo argomento di tipo **int**|Set 2: Funzioni Candidate sono secondo argomento di tipo **int**|  
|---------------------------------------------------------------------|----------------------------------------------------------------------|  
|Variante 2 (**int** può essere convertito in **lungo** mediante una conversione standard)|Variante 1 (**int** può essere convertito in **lungo** mediante una conversione standard)|  
  
 Si noti che l'intersezione tra questi due set è vuota. Pertanto, il compilatore genera un messaggio di errore.  
  
 Per l'argomento corrispondente, una funzione con *n* gli argomenti predefiniti viene trattato come *n*+ 1 funzioni separate, ognuna con un numero diverso di argomenti.  
  
 I puntini di sospensione (...) fungono da caratteri jolly; corrispondono a qualsiasi argomento effettivo. In tal modo, è possibile che vengano generati molti set ambigui se non si progettano set della funzione in overload con estrema attenzione.  
  
> [!NOTE]
>  L'ambiguità delle funzioni in overload non può essere determinata finché non viene rilevata una chiamata di funzione. A questo punto, i set vengono compilati per ogni argomento nella chiamata di funzione ed è possibile determinare se esiste un overload non ambiguo. Ciò significa che le ambiguità possono restare nel codice finché non vengono chiamate da una chiamata di funzione particolare.  
  
## <a name="argument-type-differences"></a>Differenze tra tipi di argomenti  
 Le funzioni in overload fanno una differenza tra i tipi di argomento che accettano inizializzatori diversi. Pertanto, un argomento di tipo specificato e un riferimento al tipo sono considerati uguali allo scopo dell'overload. Vengono considerati uguali perché accettano gli stessi inizializzatori. Ad esempio, `max( double, double )` è considerato uguale a `max( double &, double & )`. La dichiarazione di tali due funzioni causa un errore.  
  
 Per lo stesso motivo, gli argomenti di un tipo modificato da delle funzioni **const** oppure **volatile** non vengono trattati in modo diverso rispetto al tipo di base per gli scopi dell'overload.  
  
 Tuttavia, il meccanismo di overload della funzione può distinguere tra i riferimenti che sono qualificati dal **const** e **volatile** e i riferimenti al tipo di base. Ciò rende possibile un codice del tipo riportato di seguito:  
  
```cpp 
// argument_type_differences.cpp  
// compile with: /EHsc /W3  
// C4521 expected  
#include <iostream>  
  
using namespace std;  
class Over {  
public:  
   Over() { cout << "Over default constructor\n"; }  
   Over( Over &o ) { cout << "Over&\n"; }  
   Over( const Over &co ) { cout << "const Over&\n"; }  
   Over( volatile Over &vo ) { cout << "volatile Over&\n"; }  
};  
  
int main() {  
   Over o1;            // Calls default constructor.  
   Over o2( o1 );      // Calls Over( Over& ).  
   const Over o3;      // Calls default constructor.  
   Over o4( o3 );      // Calls Over( const Over& ).  
   volatile Over o5;   // Calls default constructor.  
   Over o6( o5 );      // Calls Over( volatile Over& ).  
}  
```  
  
### <a name="output"></a>Output  
  
```Output  
Over default constructor  
Over&  
Over default constructor  
const Over&  
Over default constructor  
volatile Over&  
```  
  
 Puntatori a **const** e **volatile** gli oggetti sono inoltre considerati diversi dai puntatori al tipo di base per gli scopi dell'overload.  
  
## <a name="argument-matching-and-conversions"></a>Corrispondenza e conversioni di argomenti  
 Quando il compilatore tenta di far corrispondere gli argomenti effettivi con gli argomenti nelle dichiarazioni di funzione, può fornire le conversioni standard o definite dall'utente per ottenere il tipo corretto se non è disponibile alcuna corrispondenza esatta. L'applicazione delle conversioni è soggetta a queste regole:  
  
-   Le sequenze di conversioni che contengono più conversioni definite dall'utente vengono ignorate.  
  
-   Le sequenze di conversioni che possono essere abbreviate rimuovendo le conversioni intermedie vengono ignorate.  
  
 La sequenza di conversioni risultante, se disponibile, è nota come sequenza di corrispondenza migliore. Esistono diversi modi per convertire un oggetto di tipo **int** al tipo **unsigned long** Usa le conversioni standard (descritte in [conversioni Standard](../cpp/standard-conversions.md)):  
  
-   Eseguire la conversione da **int** al **lungo** e quindi dalla **long** a **long senza segno**.  
  
-   Eseguire la conversione da **int** al **long senza segno**.  
  
 La prima sequenza, sebbene raggiunga l'obiettivo desiderato, non è la migliore sequenza di corrispondenza (esiste una sequenza più breve).  
  
 Nella tabella seguente viene mostrato un gruppo di conversioni, denominate conversioni semplici, con un effetto limitato sulla determinazione della sequenza che rappresenta la migliore corrispondenza. Le istanze in cui le conversioni semplici influiscono sulla scelta della sequenza vengono illustrate nell'elenco che segue la tabella.  
  
### <a name="trivial-conversions"></a>Conversioni semplici  
  
|Conversione dal Tipo|Conversione nel Tipo|  
|-----------------------|---------------------|  
|*type-name*|*type-name* **&**|  
|*type-name* **&**|*type-name*|  
|*nome del tipo* **]**|*type-name\**|  
|*nome del tipo* **(** *elenco di argomenti* **)**|**(**  *\*nome_tipo* **) (** *dall'elenco di argomenti* **)**|  
|*type-name*|**const** *-nome del tipo*|  
|*type-name*|**volatili** *-nome del tipo*|  
|*type-name\**|**const** *-nome del tipo\**|  
|*type-name\**|**volatili** *-nome del tipo\**|  
  
 La sequenza in cui vengono tentate le conversioni è la seguente:  
  
1.  Corrispondenza esatta. Una corrispondenza esatta tra i tipi con cui viene chiamata la funzione e i tipi dichiarati nel prototipo di funzione è sempre la corrispondenza ottimale. Le sequenze di conversioni semplici vengono classificate come corrispondenze esatte. Tuttavia, le sequenze che non eseguono queste conversioni vengono considerate migliori rispetto alle sequenze che eseguono la conversione:  
  
    -   Dal puntatore, al puntatore alla **const** (`type` **\*** al **const** `type` **\*** ).  
  
    -   Dal puntatore, al puntatore alla **volatili** (`type` **\*** al **volatile** `type` **\***).  
  
    -   Dal riferimento al riferimento al **const** (`type` **&** al **const** `type` **&**).  
  
    -   Dal riferimento al riferimento al **volatili** (`type` **&** al **volatile** `type` **&**).  
  
2.  Corrispondenza mediante le promozioni. Qualsiasi sequenza non classificata come corrispondenza esatta che contiene solo le promozioni integrali, le conversioni da **float** al **doppie**, e le conversioni semplici viene classificata come corrispondenza che usa le promozioni. Sebbene non sia ottimale come una corrispondenza esatta, l'utilizzo delle promozioni è preferibile rispetto a una corrispondenza che usa le conversioni standard.  
  
3.  Corrispondenza che usa le conversioni standard. Qualsiasi sequenza non classificata come una corrispondenza esatta o una corrispondenza che usa promozioni solo con conversioni standard e semplici viene classificata come corrispondenza che usa le conversioni standard. All'interno di questa categoria, sono necessarie le seguenti regole:  
  
    -   Conversione da un puntatore a una classe derivata, a un puntatore a una classe base diretta o indiretta è preferibile eseguire la conversione `void *` o `const void *`.  
  
    -   La conversione da un puntatore a una classe derivata, a un puntatore a una classe base produce una corrispondenza migliore quanto più la classe base è vicina a una classe base diretta. Si supponga che la gerarchia di classi sia come illustrata di seguito.  
  
 ![Le conversioni preferite](../cpp/media/vc391t1.gif "vc391T1")  
Grafico indicante le conversioni preferite  
  
 La conversione dal tipo `D*` al tipo `C*` è preferibile rispetto alla conversione dal tipo `D*` al tipo `B*`. In modo simile, la conversione dal tipo `D*` al tipo `B*` è preferibile rispetto alla conversione dal tipo `D*` al tipo `A*`.  
  
 La stessa regola si applica alle conversioni di riferimento. La conversione dal tipo `D&` al tipo `C&` è preferibile rispetto alla conversione dal tipo `D&` al tipo `B&` e così via.  
  
 La stessa regola si applica alle conversioni da puntatore a membro. La conversione dal tipo `T D::*` al tipo `T C::*` è preferibile rispetto alla conversione dal tipo `T D::*` al tipo `T B::*` e così via (dove `T` è il tipo del membro).  
  
 La regola precedente è valida solo insieme a un determinato percorso di derivazione. Esaminare il grafico illustrato nella seguente figura.  
  
 ![Con più&#45;ereditarietà multipla con conversioni preferite](../cpp/media/vc391t2.gif "vc391T2")  
Grafico dell'ereditarietà multipla indicante le conversioni preferite  
  
 La conversione dal tipo `C*` al tipo `B*` è preferibile rispetto alla conversione dal tipo `C*` al tipo `A*`. Il motivo è che si trovano nello stesso percorso e `B*` è più vicino. Tuttavia, la conversione dal tipo `C*` al tipo `D*` non è preferibile alla conversione al tipo `A*`; non esiste alcuna preferenza poiché le conversioni seguono percorsi diversi.  
  
1.  Corrispondenza con le conversioni definite dall'utente. Questa sequenza non può essere classificata come una corrispondenza esatta, una corrispondenza che usa le promozioni o una corrispondenza che usa le conversioni standard. La sequenza deve contenere solo le conversioni definite dall'utente, le conversioni standard o le conversioni semplici da classificare come corrispondenza con le conversioni definite dall'utente. Una corrispondenza con le conversioni definite dall'utente è considerata migliore rispetto a una corrispondenza con i puntini di sospensione, ma non una corrispondenza ottimale come una corrispondenza con conversioni standard.  
  
2.  Corrispondenza con i puntini di sospensione. Qualsiasi sequenza che corrisponde ai puntini di sospensione nella dichiarazione viene classificata come corrispondenza con i puntini di sospensione. Questa viene considerata la corrispondenza più debole.  
  
 Le conversioni definite dall'utente vengono applicate se non esiste alcuna conversione o promozione integrata. Queste conversioni sono selezionate in base al tipo di argomento di cui si sta eseguendo la corrispondenza. Esaminare il codice seguente:  
  
```cpp 
// argument_matching1.cpp  
class UDC  
{  
public:  
   operator int()  
   {  
      return 0;  
   }  
   operator long();  
};  
  
void Print( int i )  
{  
};  
  
UDC udc;  
  
int main()  
{  
   Print( udc );  
}  
```  
  
 Le conversioni definite dall'utente disponibili per la classe `UDC` sono di tipo **int** e digitare **long**. Di conseguenza, il compilatore considera le conversioni per il tipo di oggetto di cui si sta eseguendo la corrispondenza: `UDC`. Una conversione **int** esiste, ed è selezionata.  
  
 Durante il processo di corrispondenza degli argomenti, è possibile applicare le conversioni standard sia agli argomenti che al risultato di una conversione definita dall'utente. Pertanto, funziona il codice seguente:  
  
```cpp 
void LogToFile( long l );  
...  
UDC udc;  
LogToFile( udc );  
```  
  
 Nell'esempio precedente, la conversione definita dall'utente, **operator long**, viene richiamata per convertire `udc` per digitare **long**. Se nessuna conversione definita dall'utente nel tipo **lungo** fosse stato definito, la conversione sarebbe proseguita nel modo seguente: tipo `UDC` sarebbe stato convertito nel tipo **int** usando definite dall'utente conversione. La conversione standard dal tipo **int** al tipo **lungo** sarebbe stata applicata in modo da corrispondere l'argomento nella dichiarazione.  
  
 Se le conversioni definite dall'utente sono necessarie per la corrispondenza di un argomento, le conversioni standard non vengono usate per valutare la corrispondenza migliore. Questo vale anche se più funzioni candidate richiedono una conversione definita dall'utente; in tal caso, le funzioni sono considerate uguali. Ad esempio:  
  
```cpp 
// argument_matching2.cpp  
// C2668 expected  
class UDC1  
{  
public:  
   UDC1( int );  // User-defined conversion from int.  
};  
  
class UDC2  
{  
public:  
   UDC2( long ); // User-defined conversion from long.  
};  
  
void Func( UDC1 );  
void Func( UDC2 );  
  
int main()  
{  
   Func( 1 );  
}  
```  
  
 Entrambe le versioni `Func` richiedono una conversione definita dall'utente per convertire il tipo **int** all'argomento di tipo classe. Le conversioni possibili sono:  
  
-   Conversione dal tipo **int** al tipo `UDC1` (conversione definita dall'utente).  
  
-   Conversione dal tipo **int** al tipo **long**; quindi conversione nel tipo `UDC2` (conversione in due passaggi).  
  
 Anche se la seconda di queste richiede una conversione standard e la conversione definita dall'utente, le due conversioni sono tuttavia considerate uguali.  
  
> [!NOTE]
>  Le conversioni definite dall'utente sono considerate conversioni per costruzione o per inizializzazione (funzione di conversione). Entrambi i metodi sono considerati uguali quando viene presa in considerazione la corrispondenza ottimale.  
  
## <a name="argument-matching-and-the-this-pointer"></a>Corrispondenza di argomenti e puntatore this  
 Funzioni membro delle classi vengono trattate in modo diverso, a seconda del fatto che sono stati dichiarati come **statici**. Poiché le funzioni non statiche dispongono di un argomento implicito che fornisce il **ciò** puntatore, le funzioni non statiche vengono considerate un argomento in più rispetto alle funzioni statiche; in caso contrario, vengono dichiarati in modo identico.  
  
 Queste funzioni membro non statiche richiedono che l'implicita **ciò** puntatore corrisponde al tipo di oggetto attraverso il quale la funzione viene chiamata oppure, per gli operatori di overload, richiedono che il primo argomento corrisponde l'oggetto a cui il viene applicato l'operatore. (Per altre informazioni sugli operatori di overload, vedere [operatori di overload](../cpp/operator-overloading.md).)  
  
 A differenza di altri argomenti in funzioni in overload, non è stati introdotti alcun oggetto temporaneo e viene tentata alcuna conversione durante il tentativo di corrispondere i **ciò** argomento di puntatore.  
  
 Quando la `->` operatore di selezione dei membri viene usato per accedere a una funzione membro della classe `class_name`, il **ciò** argomento di puntatore è di tipo `class_name * const`. Se i membri vengono dichiarati come **const** oppure **volatile**, i tipi sono `const class_name * const` e `volatile class_name * const`, rispettivamente.  
  
 L'operatore di selezione dei membri `.` funziona esattamente nello stesso modo, ad eccezione che un operatore `&` (address-of) implicito sia anteposto al nome di oggetto. L'esempio seguente illustra tale funzionamento:  
  
```cpp 
// Expression encountered in code  
obj.name  
  
// How the compiler treats it  
(&obj)->name  
```  
  
 L'operando sinistro degli operatori `->*` e `.*` (puntatore a membro) vengono considerati nello stesso modo degli operatori `.` e `->` (selezione dei membri) in relazione alla corrispondenza dell'argomento.  

## <a name="ref-qualifiers"></a> Qualificatori di riferimento per le funzioni membro  
I qualificatori ref consentono di eseguire l'overload di una funzione membro in base a se l'oggetto a cui punta **ciò** è un rvalue o lvalue.  Questa funzionalità è utilizzabile per evitare operazioni di copia non necessarie in scenari in cui si sceglie di non consentire l'accesso di puntatore ai dati. Si supponga ad esempio di classe `C` alcuni dati nel relativo costruttore inizializza e restituisce una copia dei dati nella funzione membro `get_data()`. Se un oggetto di tipo `C` è un rvalue che sta per essere eliminato definitivamente, quindi il compilatore sceglierà il `get_data() &&` esegue l'overload, che sposta i dati invece di copiarlo. 

```cpp
#include <iostream>
#include <vector>

using namespace std;

class C
{

public:
    C() {/*expensive initialization*/}
    vector<unsigned> get_data() & 
    { 
        cout << "lvalue\n";
        return _data;
    }
    vector<unsigned> get_data() && 
    {
        cout << "rvalue\n";
        return std::move(_data);
    }
    
private:
    vector<unsigned> _data;
};

int main()
{
    C c;
    auto v = c.get_data(); // get a copy. prints "lvalue".
    auto v2 = C().get_data(); // get the original. prints "rvalue"
    return 0;
}
```
  
## <a name="restrictions-on-overloading"></a>Restrizioni all'overload degli operatori  
 Un set di funzioni in overload accettabile è regolato da numerose restrizioni:  
  
-   È necessario che due funzioni presenti in un set di funzioni in overload abbiano elenchi di argomenti differenti.  
  
-   Eseguire l'overload di funzioni con elenchi di argomenti dello stesso tipo, basandosi solo sul tipo restituito, è un errore.  
  
     **Sezione specifica Microsoft**  
  
 È possibile eseguire l'overload **operatore new** esclusivamente sulla base del tipo restituito, in particolare, in base al modificatore del modello di memoria specificato.  
  
**Fine sezione specifica Microsoft**  
  
-   Le funzioni membro non possono essere sottoposte a overload unicamente perché una è statica e l'altra non statica.  
  
-   **typedef** dichiarazioni di non definiscono nuovi tipi, ma introducono sinonimi per i tipi esistenti. Esse non influiscono sul meccanismo di overload. Esaminare il codice seguente:  
  
    ```cpp 
    typedef char * PSTR;  
  
    void Print( char *szToPrint );  
    void Print( PSTR szToPrint );  
    ```  
  
     Le due funzioni precedenti hanno elenchi di argomenti identici. `PSTR` è un sinonimo del tipo `char *`. Nell'ambito del membro, questo codice genera un errore.  
  
-   I tipi enumerati sono tipi distinti e possono essere usati per distinguere le funzioni in overload.  
  
-   I tipi "matrice di" e "puntatore a" sono considerati identici, ai fini della distinzione tra le funzioni in overload. Ciò è valido solo per le matrici dimensionate singolarmente. Di conseguenza, le seguenti funzioni in overload sono in conflitto e generano un messaggio di errore:  
  
    ```cpp 
    void Print( char *szToPrint );  
    void Print( char szToPrint[] );  
    ```  
  
     Nella moltiplicazione delle matrici dimensionate, la seconda dimensione e tutte le successive sono considerate parte del tipo. Di conseguenza, vengono usate per distinguere le funzioni in overload:  
  
    ```cpp 
    void Print( char szToPrint[] );  
    void Print( char szToPrint[][7] );  
    void Print( char szToPrint[][9][42] );  
    ```  
  
## <a name="overloading-overriding-and-hiding"></a>L'overload, si esegue l'override e nascosti
  
 Tutte le due dichiarazioni di funzione con lo stesso nome nello stesso ambito possono fare riferimento alla stessa funzione o a due funzioni discrete in overload. Se gli elenchi di argomenti delle dichiarazioni contengono argomenti di tipi equivalenti (come descritto nella sezione precedente), le dichiarazioni di funzione si riferiscono alla stessa funzione. In caso contrario, si riferiscono a due diverse funzioni selezionate usando l'overload.  
  
 L'ambito di classe viene osservato rigidamente; pertanto, una funzione dichiarata in una classe base non si trova nello stesso ambito di una funzione dichiarata in una classe derivata. Se una funzione in una classe derivata viene dichiarata con lo stesso nome di una funzione virtuale nella classe di base, la funzione di classe derivata *esegue l'override* la funzione di classe di base. Per altre informazioni, vedere [funzioni virtuali](../cpp/virtual-functions.md).

Se la funzione di classe di base non è dichiarata come 'virtual', quindi la funzione di classe derivata viene detto *nascondere* è. Viene sottoposto a override sia nascondere sono distinti di eseguire l'overload.  
  
 L'ambito del blocco viene osservato rigidamente; pertanto, una funzione dichiarata in un ambito di file non si trova nello stesso ambito di una funzione dichiarata localmente. Se una funzione dichiarata localmente ha lo stesso nome di una funzione dichiarata in ambito di file, la funzione dichiarata localmente nasconde la funzione con ambito di file anziché causare l'overload. Ad esempio:  
  
```cpp 
// declaration_matching1.cpp  
// compile with: /EHsc  
#include <iostream>  
  
using namespace std;  
void func( int i )  
{  
    cout << "Called file-scoped func : " << i << endl;  
}  
  
void func( char *sz )  
{  
   cout << "Called locally declared func : " << sz << endl;  
}  
  
int main()  
{  
   // Declare func local to main.  
   extern void func( char *sz );  
  
   func( 3 );   // C2664 Error. func( int ) is hidden.  
   func( "s" );  
}  
```  
  
 Il codice precedente mostra due definizioni dalla funzione `func`. La definizione che accetta un argomento di tipo `char *` è locale rispetto `main` perché la **extern** istruzione. Pertanto, la definizione che accetta un argomento di tipo **int** è nascosto e la prima chiamata a `func` in errore.  
  
 Per funzioni membro in overload, a versioni diverse della funzione possono essere assegnati privilegi di accesso differenti. Verranno ancora considerate nell'ambito della classe contenitore e pertanto sono funzioni in overload. Si consideri il codice seguente, in cui la funzione membro `Deposit` è in overload; una versione è pubblica, l'altra privata.  
  
 Lo scopo di questo esempio è quello di fornire una classe `Account` in cui è richiesta una password corretta per eseguire i depositi. Per eseguire questa operazione si usa un overload.  
  
 Si noti che la chiamata a `Deposit` in `Account::Deposit` chiama la funzione membro privato. Questa chiamata è corretta perché `Account::Deposit` è una funzione membro e pertanto dispone di accesso ai membri privati della classe.  
  
```cpp 
// declaration_matching2.cpp  
class Account  
{  
public:  
   Account()  
   {  
   }  
   double Deposit( double dAmount, char *szPassword );  
  
private:  
   double Deposit( double dAmount )  
   {  
      return 0.0;  
   }  
   int Validate( char *szPassword )  
   {  
      return 0;  
   }  
  
};  
  
int main()  
{  
    // Allocate a new object of type Account.  
    Account *pAcct = new Account;  
  
    // Deposit $57.22. Error: calls a private function.  
    // pAcct->Deposit( 57.22 );  
  
    // Deposit $57.22 and supply a password. OK: calls a  
    //  public function.  
    pAcct->Deposit( 52.77, "pswd" );  
}  
  
double Account::Deposit( double dAmount, char *szPassword )  
{  
   if ( Validate( szPassword ) )  
      return Deposit( dAmount );  
   else  
      return 0.0;  
}  
```

## <a name="see-also"></a>Vedere anche  
 [Funzioni (C++)](../cpp/functions-cpp.md)
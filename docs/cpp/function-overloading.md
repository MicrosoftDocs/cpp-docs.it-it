---
title: Overload di funzioni | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- function overloading [C++], about function overloading
- function overloading
- declaring functions [C++], overloading
ms.assetid: 3c9884cb-1d5e-42e8-9a49-6f46141f929e
caps.latest.revision: 10
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 9076fdd48e466d68d5dcecec2c339a98f39a8bb1
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="function-overloading"></a>Overload di funzioni
C++ consente la specifica di più funzioni con lo stesso nome nello stesso ambito. Si tratta di funzioni in overload e vengono descritte in dettaglio in Overload. Le funzioni in overload consentono ai programmatori di fornire diverse semantiche per una funzione, in base ai tipi e al numero di argomenti.  
  
 Ad esempio, un **stampa** funzione che accetta una stringa (o **char \* **) argomento esegue attività molto diverse rispetto a uno che accetta un argomento di tipo **doppie** . L'overload consente una denominazione uniforme e impedisce ai programmatori di dover inventare nomi quali `print_sz` o `print_d`. Nella tabella seguente sono illustrate quali parti di una dichiarazione di funzione C++ vengono usate per distinguere tra gruppi di funzioni con lo stesso nome nello stesso ambito.  
  
### <a name="overloading-considerations"></a>Considerazioni sull'overload  
  
|Elemento di dichiarazione della funzione|Usato per eseguire l'overload?|  
|----------------------------------|---------------------------|  
|Tipo restituito di funzione|No|  
|Numero di argomenti|Sì|  
|Tipo di argomenti|Sì|  
|Presenza o assenza di puntini di sospensione|Sì|  
|Utilizzo dei nomi `typedef`|No|  
|Limiti di matrice non specificati|No|  
|**const** o `volatile` (vedere sotto)|Sì|  
  
 Anche se è possibile distinguere le funzioni in base al tipo restituito, non è possibile eseguirne l'overload su questa base.  `Const`o `volatile` vengono utilizzati solo come base per l'overload se utilizzati in una classe da applicare per il **questo** puntatore per la classe, non il tipo restituito dalla funzione.  In altre parole, l'overload si applica solo se il **const** o `volatile` parola chiave segue l'elenco di argomenti della funzione nella dichiarazione.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come è possibile usare l'overload.  
  
```  
// function_overloading.cpp  
// compile with: /EHsc  
#include <iostream>  
#include <math.h>  
  
// Prototype three print functions.  
int print( char *s );                  // Print a string.  
int print( double dvalue );            // Print a double.  
int print( double dvalue, int prec );  // Print a double with a  
//  given precision.  
using namespace std;  
int main( int argc, char *argv[] )  
{  
const double d = 893094.2987;  
if( argc < 2 )  
    {  
// These calls to print invoke print( char *s ).  
print( "This program requires one argument." );  
print( "The argument specifies the number of" );  
print( "digits precision for the second number" );  
print( "printed." );  
exit(0);  
    }  
  
// Invoke print( double dvalue ).  
print( d );  
  
// Invoke print( double dvalue, int prec ).  
print( d, atoi( argv[1] ) );  
}  
  
// Print a string.  
int print( char *s )  
{  
cout << s << endl;  
return cout.good();  
}  
  
// Print a double in default precision.  
int print( double dvalue )  
{  
cout << dvalue << endl;  
return cout.good();  
}  
  
// Print a double in specified precision.  
//  Positive numbers for precision indicate how many digits  
//  precision after the decimal point to show. Negative  
//  numbers for precision indicate where to round the number  
//  to the left of the decimal point.  
int print( double dvalue, int prec )  
{  
// Use table-lookup for rounding/truncation.  
static const double rgPow10[] = {   
10E-7, 10E-6, 10E-5, 10E-4, 10E-3, 10E-2, 10E-1, 10E0,  
10E1,  10E2,  10E3,  10E4, 10E5,  10E6  
    };  
const int iPowZero = 6;  
// If precision out of range, just print the number.  
if( prec < -6 || prec > 7 )  
return print( dvalue );  
// Scale, truncate, then rescale.  
dvalue = floor( dvalue / rgPow10[iPowZero - prec] ) *  
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
  
```  
Fraction &Add( Fraction &f, long l );       // Variant 1  
Fraction &Add( long l, Fraction &f );       // Variant 2  
Fraction &Add( Fraction &f, Fraction &f );  // Variant 3  
  
Fraction F1, F2;  
```  
  
 Si consideri la seguente istruzione:  
  
```  
F1 = Add( F2, 23 );  
```  
  
 Con l'istruzione precedente vengono compilati due set:  
  
|Set 1: Funzioni candidate con il primo argomento della frazione di tipo|Set 2: Funzioni candidate il cui secondo argomento può essere convertito nel tipo int|  
|--------------------------------------------------------------------------|-----------------------------------------------------------------------------------|  
|Variante 1|Variante 1 (`int` può essere convertito in `long` mediante una conversione standard)|  
|Variante 3||  
  
 Le funzioni del Set 2 sono funzioni per le quali vi sono conversioni implicite dal tipo di parametro effettivo nel tipo di parametro formale e tra tali funzioni vi è una funzione per cui il "costo" di conversione del tipo di parametro effettivo nel tipo di parametro formale è il più ridotto.  
  
 L'intersezione dei due set è la Variante 1. Un esempio di una chiamata di funzione ambigua è:  
  
```  
F1 = Add( 3, 6 );  
```  
  
 Con la chiamata di funzione precedente vengono compilati i seguenti set:  
  
|Set 1: Funzioni candidate con il primo argomento di tipo int|Set 2: Funzioni candidate con il secondo argomento di tipo int|  
|---------------------------------------------------------------------|----------------------------------------------------------------------|  
|Variante 2 (`int` può essere convertito in `long` mediante una conversione standard)|Variante 1 (`int` può essere convertito in `long` mediante una conversione standard)|  
  
 Si noti che l'intersezione tra questi due set è vuota. Pertanto, il compilatore genera un messaggio di errore.  
  
 Per l'argomento corrispondente, una funzione con * n * argomenti predefiniti viene trattata * n *+ 1 funzioni separate, ognuna con un numero diverso di argomenti.  
  
 I puntini di sospensione (...) fungono da caratteri jolly; corrispondono a qualsiasi argomento effettivo. In tal modo, è possibile che vengano generati molti set ambigui se non si progettano set della funzione in overload con estrema attenzione.  
  
> [!NOTE]
>  L'ambiguità delle funzioni in overload non può essere determinata finché non viene rilevata una chiamata di funzione. A questo punto, i set vengono compilati per ogni argomento nella chiamata di funzione ed è possibile determinare se esiste un overload non ambiguo. Ciò significa che le ambiguità possono restare nel codice finché non vengono chiamate da una chiamata di funzione particolare.  
  
## <a name="argument-type-differences"></a>Differenze tra tipi di argomenti  
 Le funzioni in overload fanno una differenza tra i tipi di argomento che accettano inizializzatori diversi. Pertanto, un argomento di tipo specificato e un riferimento al tipo sono considerati uguali allo scopo dell'overload. Vengono considerati uguali perché accettano gli stessi inizializzatori. Ad esempio, `max( double, double )` è considerato uguale a `max( double &, double & )`. La dichiarazione di tali due funzioni causa un errore.  
  
 Per lo stesso motivo, gli argomenti di un tipo modificato da delle funzioni **const** o `volatile` non vengono gestiti in modo diverso rispetto al tipo base per gli scopi dell'overload.  
  
 Tuttavia, la funzione meccanismo di overload consentono di distinguere i riferimenti che sono qualificati da **const** e `volatile` e i riferimenti al tipo di base. Ciò rende possibile un codice del tipo riportato di seguito:  
  
```  
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
  
```  
Over default constructor  
Over&  
Over default constructor  
const Over&  
Over default constructor  
volatile Over&  
```  
  
 Puntatori a **const** e `volatile` gli oggetti sono inoltre considerati diversi dai puntatori al tipo di base per l'overload.  
  
## <a name="argument-matching-and-conversions"></a>Corrispondenza e conversioni di argomenti  
 Quando il compilatore tenta di far corrispondere gli argomenti effettivi con gli argomenti nelle dichiarazioni di funzione, può fornire le conversioni standard o definite dall'utente per ottenere il tipo corretto se non è disponibile alcuna corrispondenza esatta. L'applicazione delle conversioni è soggetta a queste regole:  
  
-   Le sequenze di conversioni che contengono più conversioni definite dall'utente vengono ignorate.  
  
-   Le sequenze di conversioni che possono essere abbreviate rimuovendo le conversioni intermedie vengono ignorate.  
  
 La sequenza di conversioni risultante, se disponibile, è nota come sequenza di corrispondenza migliore. Esistono diversi modi per convertire un oggetto di tipo `int` al tipo `unsigned long` Usa le conversioni standard (descritto in [conversioni Standard](../cpp/standard-conversions.md)):  
  
-   Conversione da `int` a `long`, quindi da `long` a `unsigned long`.  
  
-   Conversione da `int` a `unsigned long`.  
  
 La prima sequenza, sebbene raggiunga l'obiettivo desiderato, non è la migliore sequenza di corrispondenza (esiste una sequenza più breve).  
  
 Nella tabella seguente viene mostrato un gruppo di conversioni, denominate conversioni semplici, con un effetto limitato sulla determinazione della sequenza che rappresenta la migliore corrispondenza. Le istanze in cui le conversioni semplici influiscono sulla scelta della sequenza vengono illustrate nell'elenco che segue la tabella.  
  
### <a name="trivial-conversions"></a>Conversioni semplici  
  
|Conversione dal Tipo|Conversione nel Tipo|  
|-----------------------|---------------------|  
|*nome del tipo*|*nome del tipo***&**|  
|*nome del tipo***&**|*nome del tipo*|  
|*nome del tipo* **]**|*nome del tipo\**|  
|*nome del tipo* **(** *elenco di argomenti* **)**|**(** * \*-nome del tipo* **) (** *elenco di argomenti* **)**|  
|*nome del tipo*|**const** *-nome del tipo*|  
|*nome del tipo*|`volatile`*-nome del tipo*|  
|*nome del tipo\**|**const** *-nome del tipo\**|  
|*nome del tipo\**|`volatile`*-nome del tipo\**|  
  
 La sequenza in cui vengono tentate le conversioni è la seguente:  
  
1.  Corrispondenza esatta. Una corrispondenza esatta tra i tipi con cui viene chiamata la funzione e i tipi dichiarati nel prototipo di funzione è sempre la corrispondenza ottimale. Le sequenze di conversioni semplici vengono classificate come corrispondenze esatte. Tuttavia, le sequenze che non eseguono queste conversioni vengono considerate migliori rispetto alle sequenze che eseguono la conversione:  
  
    -   Dal puntatore, al puntatore a **const** (`type` ** \* ** a **const** `type` ** \* ** ).  
  
    -   Dal puntatore, al puntatore a `volatile` (`type` ** \* ** a `volatile` `type` ** \* **).  
  
    -   Dal riferimento al riferimento a **const** (`type` ** & ** a **const** `type` ** & **).  
  
    -   Dal riferimento al riferimento a `volatile` (`type` ** & ** a `volatile` `type` ** & **).  
  
2.  Corrispondenza mediante le promozioni. Qualsiasi sequenza non classificata come una corrispondenza esatta che contiene solo le promozioni integrali, le conversioni da **float** a **doppie**, e conversioni semplici viene classificata come corrispondenza che usa promozioni. Sebbene non sia ottimale come una corrispondenza esatta, l'utilizzo delle promozioni è preferibile rispetto a una corrispondenza che usa le conversioni standard.  
  
3.  Corrispondenza che usa le conversioni standard. Qualsiasi sequenza non classificata come una corrispondenza esatta o una corrispondenza che usa promozioni solo con conversioni standard e semplici viene classificata come corrispondenza che usa le conversioni standard. All'interno di questa categoria, sono necessarie le seguenti regole:  
  
    -   Conversione da un puntatore a una classe derivata, a un puntatore a una classe base diretta o indiretta è preferibile alla conversione in **void \* ** o **const void \* **.  
  
    -   La conversione da un puntatore a una classe derivata, a un puntatore a una classe base produce una corrispondenza migliore quanto più la classe base è vicina a una classe base diretta. Si supponga che la gerarchia di classi sia come illustrata di seguito.  
  
 ![Conversioni preferite](../cpp/media/vc391t1.gif "vc391T1")  
Grafico indicante le conversioni preferite  
  
 La conversione dal tipo `D*` al tipo `C*` è preferibile rispetto alla conversione dal tipo `D*` al tipo `B*`. In modo simile, la conversione dal tipo `D*` al tipo `B*` è preferibile rispetto alla conversione dal tipo `D*` al tipo `A*`.  
  
 La stessa regola si applica alle conversioni di riferimento. La conversione dal tipo `D&` al tipo `C&` è preferibile rispetto alla conversione dal tipo `D&` al tipo `B&` e così via.  
  
 La stessa regola si applica alle conversioni da puntatore a membro. La conversione dal tipo `T D::*` al tipo `T C::*` è preferibile rispetto alla conversione dal tipo `T D::*` al tipo `T B::*` e così via (dove `T` è il tipo del membro).  
  
 La regola precedente è valida solo insieme a un determinato percorso di derivazione. Esaminare il grafico illustrato nella seguente figura.  
  
 ![Più &#45; ereditarietà che mostra le conversioni preferite](../cpp/media/vc391t2.gif "vc391T2")  
Grafico dell'ereditarietà multipla indicante le conversioni preferite  
  
 La conversione dal tipo `C*` al tipo `B*` è preferibile rispetto alla conversione dal tipo `C*` al tipo `A*`. Il motivo è che si trovano nello stesso percorso e `B*` è più vicino. Tuttavia, la conversione dal tipo `C*` al tipo `D*` non è preferibile alla conversione al tipo `A*`; non esiste alcuna preferenza poiché le conversioni seguono percorsi diversi.  
  
1.  Corrispondenza con le conversioni definite dall'utente. Questa sequenza non può essere classificata come una corrispondenza esatta, una corrispondenza che usa le promozioni o una corrispondenza che usa le conversioni standard. La sequenza deve contenere solo le conversioni definite dall'utente, le conversioni standard o le conversioni semplici da classificare come corrispondenza con le conversioni definite dall'utente. Una corrispondenza con le conversioni definite dall'utente è considerata migliore rispetto a una corrispondenza con i puntini di sospensione, ma non una corrispondenza ottimale come una corrispondenza con conversioni standard.  
  
2.  Corrispondenza con i puntini di sospensione. Qualsiasi sequenza che corrisponde ai puntini di sospensione nella dichiarazione viene classificata come corrispondenza con i puntini di sospensione. Questa viene considerata la corrispondenza più debole.  
  
 Le conversioni definite dall'utente vengono applicate se non esiste alcuna conversione o promozione integrata. Queste conversioni sono selezionate in base al tipo di argomento di cui si sta eseguendo la corrispondenza. Esaminare il codice seguente:  
  
```  
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
  
 Le conversioni definite dall'utente per la classe `UDC` sono dal tipo `int` e tipo **lungo**. Di conseguenza, il compilatore considera le conversioni per il tipo di oggetto di cui si sta eseguendo la corrispondenza: `UDC`. Esiste una conversione in `int` ed è selezionata.  
  
 Durante il processo di corrispondenza degli argomenti, è possibile applicare le conversioni standard sia agli argomenti che al risultato di una conversione definita dall'utente. Pertanto, funziona il codice seguente:  
  
```  
void LogToFile( long l );  
...  
UDC udc;  
LogToFile( udc );  
```  
  
 Nell'esempio precedente, la conversione definita dall'utente, **operatore long**, viene richiamata per convertire `udc` al tipo **lungo**. Se nessuna conversione definita dall'utente a tipo **lungo** è stato definito, la conversione sarebbe proseguita nel modo seguente: tipo `UDC` sarebbe stato convertito nel tipo `int` mediante la conversione definita dall'utente. La conversione standard dal tipo `int` al tipo **lungo** sarebbe stata applicata per corrisponde all'argomento nella dichiarazione.  
  
 Se le conversioni definite dall'utente sono necessarie per la corrispondenza di un argomento, le conversioni standard non vengono usate per valutare la corrispondenza migliore. Questo vale anche se più funzioni candidate richiedono una conversione definita dall'utente; in tal caso, le funzioni sono considerate uguali. Ad esempio:  
  
```  
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
  
 Entrambe le versioni di `Func` richiedono che la conversione definita dall'utente converta il tipo `int` nell'argomento di tipo classe. Le conversioni possibili sono:  
  
-   Conversione dal tipo `int` al tipo `UDC1` (conversione definita dall'utente).  
  
-   Eseguire la conversione da tipo `int` al tipo **lungo**; quindi conversione nel tipo `UDC2` (conversione in due fasi).  
  
 Anche se la seconda di queste richiede una conversione standard e la conversione definita dall'utente, le due conversioni sono tuttavia considerate uguali.  
  
> [!NOTE]
>  Le conversioni definite dall'utente sono considerate conversioni per costruzione o per inizializzazione (funzione di conversione). Entrambi i metodi sono considerati uguali quando viene presa in considerazione la corrispondenza ottimale.  
  
## <a name="argument-matching-and-the-this-pointer"></a>Corrispondenza di argomenti e puntatore this  
 Le funzioni membro di classe vengono gestite in modo diverso, a seconda che vengono dichiarate come `static` o meno. Poiché le funzioni non statiche dispongono di un argomento implicito che specifica il puntatore `this`, si considera che le funzioni non statiche abbiano un argomento in più rispetto alle funzioni statiche; in caso contrario, vengono dichiarate in modo identico.  
  
 Tali funzioni membro non statiche richiedono che il puntatore `this` corrisponda al tipo di oggetto tramite cui la funzione viene chiamata oppure, per gli operatori di overload, richiedono che il primo argomento corrisponda all'oggetto sul quale viene applicato l'operatore. (Per ulteriori informazioni sugli operatori di overload, vedere [operatori di overload](../cpp/operator-overloading.md).)  
  
 A differenza di altri argomenti delle funzioni in overload, non viene introdotto alcun oggetto temporaneo e non viene tentata alcuna conversione quando si tenta di mettere in corrispondenza l'argomento del puntatore `this`.  
  
 Quando il `->` operatore di selezione dei membri viene usato per accedere a una funzione membro della classe `class_name`, `this` argomento del puntatore di tipo `class_name * const`. Se i membri vengono dichiarati come `const` o `volatile`, i tipi sono `const class_name * const` e `volatile class_name * const`, rispettivamente.  
  
 L'operatore di selezione dei membri `.` funziona esattamente nello stesso modo, ad eccezione che un operatore `&` (address-of) implicito sia anteposto al nome di oggetto. L'esempio seguente illustra tale funzionamento:  
  
```  
// Expression encountered in code  
obj.name  
  
// How the compiler treats it  
(&obj)->name  
```  
  
 L'operando sinistro degli operatori `->*` e `.*` (puntatore a membro) vengono considerati nello stesso modo degli operatori `.` e `->` (selezione dei membri) in relazione alla corrispondenza dell'argomento.  
  
## <a name="restrictions"></a>Restrizioni  
 Un set di funzioni in overload accettabile è regolato da numerose restrizioni:  
  
-   È necessario che due funzioni presenti in un set di funzioni in overload abbiano elenchi di argomenti differenti.  
  
-   Eseguire l'overload di funzioni con elenchi di argomenti dello stesso tipo, basandosi solo sul tipo restituito, è un errore.  
  
     **Sezione specifica Microsoft**  
  
 È possibile eseguire l'overload **operatore new** esclusivamente in base al tipo restituito, in particolare, in base al modificatore del modello di memoria specificato.  
  
**Fine sezione specifica Microsoft**  
  
-   Le funzioni membro non possono essere sottoposte a overload unicamente perché una è statica e l'altra non statica.  
  
-   Le dichiarazioni `typedef` non definiscono nuovi tipi, ma introducono sinonimi per i tipi esistenti. Esse non influiscono sul meccanismo di overload. Esaminare il codice seguente:  
  
    ```  
    typedef char * PSTR;  
  
    void Print( char *szToPrint );  
    void Print( PSTR szToPrint );  
    ```  
  
     Le due funzioni precedenti hanno elenchi di argomenti identici. `PSTR`è un sinonimo del tipo **char \* **. Nell'ambito del membro, questo codice genera un errore.  
  
-   I tipi enumerati sono tipi distinti e possono essere usati per distinguere le funzioni in overload.  
  
-   I tipi "matrice di" e "puntatore a" sono considerati identici, ai fini della distinzione tra le funzioni in overload. Ciò è valido solo per le matrici dimensionate singolarmente. Di conseguenza, le seguenti funzioni in overload sono in conflitto e generano un messaggio di errore:  
  
    ```  
    void Print( char *szToPrint );  
    void Print( char szToPrint[] );  
    ```  
  
     Nella moltiplicazione delle matrici dimensionate, la seconda dimensione e tutte le successive sono considerate parte del tipo. Di conseguenza, vengono usate per distinguere le funzioni in overload:  
  
    ```  
    void Print( char szToPrint[] );  
    void Print( char szToPrint[][7] );  
    void Print( char szToPrint[][9][42] );  
    ```  
  
## <a name="declaration-matching"></a>Corrispondenza di dichiarazione  
 Tutte le due dichiarazioni di funzione con lo stesso nome nello stesso ambito possono fare riferimento alla stessa funzione o a due funzioni discrete in overload. Se gli elenchi di argomenti delle dichiarazioni contengono argomenti di tipi equivalenti (come descritto nella sezione precedente), le dichiarazioni di funzione si riferiscono alla stessa funzione. In caso contrario, si riferiscono a due diverse funzioni selezionate usando l'overload.  
  
 L'ambito di classe viene osservato rigidamente; pertanto, una funzione dichiarata in una classe base non si trova nello stesso ambito di una funzione dichiarata in una classe derivata. Se una funzione in una classe derivata viene dichiarata con lo stesso nome della funzione nella classe base, la funzione della classe derivata nasconde la funzione della classe base anziché causare l'overload.  
  
 L'ambito di blocco viene osservato rigidamente; pertanto, una funzione dichiarata in un ambito di file non si trova nello stesso ambito di una funzione dichiarata localmente. Se una funzione dichiarata localmente ha lo stesso nome di una funzione dichiarata in ambito di file, la funzione dichiarata localmente nasconde la funzione con ambito di file anziché causare l'overload. Ad esempio:  
  
```  
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
  
 Il codice precedente mostra due definizioni dalla funzione `func`. La definizione che accetta un argomento di tipo `char *` è locale a `main` a causa dell'istruzione `extern`. Di conseguenza, la definizione che accetta un argomento di tipo `int` è nascosta e la prima chiamata a `func` avviene per errore.  
  
 Per funzioni membro in overload, a versioni diverse della funzione possono essere assegnati privilegi di accesso differenti. Verranno ancora considerate nell'ambito della classe contenitore e pertanto sono funzioni in overload. Si consideri il codice seguente, in cui la funzione membro `Deposit` è in overload; una versione è pubblica, l'altra privata.  
  
 Lo scopo di questo esempio è quello di fornire una classe `Account` in cui è richiesta una password corretta per eseguire i depositi. Per eseguire questa operazione si usa un overload.  
  
 Si noti che la chiamata a `Deposit` in `Account::Deposit` chiama la funzione membro privato. Questa chiamata è corretta perché `Account::Deposit` è una funzione membro e pertanto dispone di accesso ai membri privati della classe.  
  
```  
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

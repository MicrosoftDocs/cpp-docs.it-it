---
title: Conversioni standard | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords:
- standard conversions, categories of
- L-values [C++]
- conversions, standard
ms.assetid: ce7ac8d3-5c99-4674-8229-0672de05528d
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 954ba431378317a3f9079677f49223a336af5d9e
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="standard-conversions"></a>Conversioni standard
Il linguaggio C++ definisce le conversioni tra i relativi tipi fondamentali. Inoltre, definisce le conversioni per i tipi derivati puntatore, riferimento e puntatore a membro. Queste conversioni sono definite "conversioni standard". (Per ulteriori informazioni sui tipi, tipi standard e tipi derivati, vedere [tipi](http://msdn.microsoft.com/en-us/6882ee83-ea32-4373-8d57-c3efbbc15af0).)  
  
 In questa sezione vengono descritte le conversioni standard seguenti:  
  
-   Promozioni a intero  
  
-   Conversioni integrali  
  
-   Conversioni a virgola mobile  
  
-   Conversioni integrali e a virgola mobile  
  
-   Conversioni aritmetiche  
  
-   Conversioni puntatore  
  
-   Conversioni riferimento  
  
-   Conversioni puntatore a membro  
  
    > [!NOTE]
    >  I tipi definiti dall'utente possono specificare le proprie conversioni. Viene descritta la conversione di tipi definiti dall'utente in [costruttori](../cpp/constructors-cpp.md) e [conversioni](../cpp/user-defined-type-conversions-cpp.md).  
  
 Il codice seguente genera conversioni (in questo esempio, promozioni a intero):  
  
```  
long  long_num1, long_num2;  
int   int_num;  
  
// int_num promoted to type long prior to assignment.  
long_num1 = int_num;  
  
// int_num promoted to type long prior to multiplication.  
long_num2 = int_num * long_num2;  
```  
  
 Il risultato di una conversione è un l-value solo se genera un tipo di riferimento. Ad esempio, una conversione definita dall'utente dichiarata come `operator int&()` restituisce un riferimento ed è un l-value. Tuttavia, una conversione è dichiarato come `operator int()`restituisce un oggetto e non è un l-value.  
  
## <a name="integral-promotions"></a>Promozioni a intero  
 Gli oggetti di un tipo integrale possono essere convertiti in un tipo integrale più ampio, ovvero in un tipo in grado di rappresentare un più ampio set di valori. Tale conversione widening viene denominata "promozione a intero." Con la promozione a intero, è possibile usare quanto segue in un'espressione ogni qual volta sia possibile usare un altro tipo integrale:  
  
-   Oggetti, valori letterali e costanti di tipo `char` e `short int`  
  
-   Tipi di enumerazione  
  
-   `int` campi di bit  
  
-   Enumeratori  
  
 Le promozioni di C++ sono a "mantenimento del valore." Ciò significa che si ha la certezza che il valore, in seguito alla promozione, sia identico al valore antecedente la promozione. Nelle promozioni a mantenimento del valore, gli oggetti di tipi integrali più brevi (come i campi di bit o gli oggetti di tipo `char`) vengono promossi al tipo `int`, se `int` è in grado di rappresentare la gamma completa del tipo di origine. Se `int` non è in grado rappresentare la gamma completa dei valori, l'oggetto viene promosso al tipo `unsigned int`. Sebbene questa strategia sia identica a quella usata da ANSI C, le conversioni a mantenimento del valore non mantengono il "segno" dell'oggetto.  
  
 Le promozioni a mantenimento del valore e le promozioni che mantengono il segno producono, in genere, gli stessi risultati. Possono, però, produrre risultati diversi qualora l'oggetto promosso sia uno dei seguenti:  
  
-   Un operando di  **/** , `%`, `/=`, `%=`,  **<** ,  **\< =** ,  **>** , o**>=**  
  
     Questi operatori si basano sul segno per determinare il risultato. Di conseguenza, le promozioni a mantenimento del valore e le promozioni che mantengono il segno portano a risultati diversi, se applicate a tali operandi.  
  
-   L'operando sinistro del  **>>**  o**>>=**  
  
     Questi operatori trattano le quantità con segno e quelle senza segno in maniera differente, quando si esegue un'operazione di spostamento. Nel caso delle quantità con segno, spostare una quantità a destra comporta la propagazione del bit di segno verso le posizioni di bit vuote. Nel caso delle quantità senza segno, le posizioni di bit vuote vengono riempite con zero.  
  
-   Argomento in una funzione in overload o operando di un operatore di overload che dipende dal segno del tipo dello stesso operando per corrispondere all'argomento. (Vedere [operatori di overload](../cpp/operator-overloading.md) per ulteriori informazioni sulla definizione di operatori di overload.)  
  
## <a name="integral-conversions"></a>Conversioni integrali  
 Le conversioni integrali vengono eseguite tra i tipi integrali. I tipi integrali sono `char`, `int`, e **lungo** (e **breve**, **firmato**, e `unsigned` versioni di questi tipi).  
  
 **Da Signed a unsigned**  
  
 Gli oggetti di tipi integrali con segno possono essere convertiti nei corrispondenti tipi senza segno. Quando si verificano queste conversioni, lo schema di bit effettivo non cambia; cambia, tuttavia, l'interpretazione dei dati. Si consideri il codice seguente:  
  
```  
  
#include <iostream>  
  
using namespace std;  
int main()  
{  
    short  i = -3;  
    unsigned short u;  
  
    cout << (u = i) << "\n";  
}  
// Output: 65533  
  
```  
  
 Nell'esempio precedente uno tipo `signed short`, `i`, viene definito e inizializzato con un numero negativo. L'espressione `(u = i)` causa `i` da convertire in un **unsigned short** prima dell'assegnazione a `u`.  
  
 **Unsigned a signed**  
  
 Gli oggetti dei tipi integrali senza segno possono essere convertiti nei tipi con segno corrispondenti. Tuttavia, tale conversione può comportare l'errata interpretazione dei dati se il valore dell'oggetto senza segno è esterno all'intervallo rappresentabile dal tipo con segno, come mostrato nel seguente esempio:  
  
```  
  
#include <iostream>  
  
using namespace std;  
int main()  
{  
 short  i;  
 unsigned short u = 65533;  
  
 cout << (i = u) << "\n";  
}  
//Output: -3  
```  
  
 Nell'esempio precedente, `u` è un `unsigned` **breve** oggetto integrale che deve essere convertito in una quantità con segno per valutare l'espressione `(i = u)`. Poiché il relativo valore non può essere rappresentato correttamente in un oggetto `signed short`, i dati vengono interpretati erroneamente come illustrato.  
  
## <a name="floating-point-conversions"></a>Conversioni del punto a virgola mobile  
 Un oggetto di un tipo a virgola mobile può essere convertito in modo sicuro in un tipo a virgola mobile più preciso, senza che la conversione causi una perdita di significato. Ad esempio, le conversioni da **float** a **doppie** o da **doppie** a `long double` sono sicure e il valore viene modificato.  
  
 Un oggetto di un tipo a virgola mobile può essere inoltre convertito in un tipo meno preciso, se è compreso in un intervallo rappresentabile mediante tale tipo (Vedere [limiti mobile](../cpp/floating-limits.md) per gli intervalli di tipo a virgola mobile.) Se il valore originale non può essere rappresentato in modo preciso, può essere convertito nel successivo valore più alto o più basso rappresentabile. Se tale valore non esiste, il risultato non è definito. Si consideri l'esempio seguente:  
  
```  
cout << (float)1E300 << endl;  
```  
  
 Il valore massimo rappresentabile dal tipo **float** è 3.402823466 e38, un numero molto inferiore rispetto a 1E300. Di conseguenza, il numero viene convertito a infinito e il risultato è 1.#INF.  
  
## <a name="conversions-between-integral-and-floating-point-types"></a>Conversioni tra tipi integrali e tipi punto a virgola mobile  
 Alcune espressioni possono causare la conversione degli oggetti di tipo a virgola mobile in tipi integrali o viceversa. Quando un oggetto di tipo integrale viene convertito in un tipo a virgola mobile e il valore originale non può essere rappresentato esattamente, il risultato è dato dal successivo valore più alto o più basso rappresentabile.  
  
 Quando un oggetto di tipo a virgola mobile viene convertito nel tipo integrale, la parte frazionaria viene troncata. Nel processo di conversione non viene eseguito alcun arrotondamento. Il troncamento indica che un numero come 1,3 viene convertito in 1 e-1.3 viene convertito in -1.  
  
## <a name="arithmetic-conversions"></a>Conversioni aritmetiche  
 Molti operatori binari (illustrati in [espressioni con operatori binari](../cpp/expressions-with-binary-operators.md)) causano conversioni degli operandi e restituiscono risultati nello stesso modo. La modalità in cui questi operatori causano le conversioni è denominata "conversioni aritmetiche consuete." Le conversioni aritmetiche degli operandi di tipi nativi differenti vengono eseguite come illustrato nella tabella seguente. I tipi typedef si comportano in base ai tipi nativi sottostanti.  
  
### <a name="conditions-for-type-conversion"></a>Condizioni per la conversione di tipi  
  
|Condizioni soddisfatte|Conversione|  
|--------------------|----------------|  
|Degli operandi è di tipo **long double**.|Altro operando verrà convertito nel tipo **long double**.|  
|Condizione precedente non è soddisfatta e degli operandi è di tipo **double**.|Altro operando verrà convertito nel tipo **double**.|  
|Le condizioni precedenti non soddisfatte e degli operandi è di tipo **float**.|Altro operando verrà convertito nel tipo **float**.|  
|Le condizioni precedenti non sono soddisfatte (nessuno degli operandi sono di tipo a virgola mobile).|Le promozioni integrali vengono eseguite sugli operandi come indicato di seguito:<br /><br /> -Se degli operandi è di tipo `unsigned` **lungo**, l'altro operando verrà convertito nel tipo `unsigned long`.<br />-Se condizione precedente non è soddisfatta e degli operandi è di tipo **lungo** e l'altro di tipo `unsigned` `int`, entrambi gli operandi verranno convertiti nel tipo `unsigned long`.<br />-Se le due condizioni precedenti non vengono soddisfatte e degli operandi è di tipo **lungo**, l'altro operando verrà convertito nel tipo **lungo**.<br />-Se le tre condizioni precedenti non vengono soddisfatte e degli operandi è di tipo `unsigned int`, l'altro operando verrà convertito nel tipo `unsigned int`.<br />-Se nessuna delle condizioni precedenti viene soddisfatta, entrambi gli operandi vengono convertiti nel tipo `int`.|  
  
 Il codice seguente illustra le regole di conversione descritte nella tabella:  
  
```  
  
double dVal;  
float fVal;  
int iVal;  
unsigned long ulVal;  
  
int main() {  
   // iVal converted to unsigned long  
   // result of multiplication converted to double  
   dVal = iVal * ulVal;  
  
   // ulVal converted to float  
   // result of addition converted to double  
   dVal = ulVal + fVal;  
}  
```  
  
 La prima istruzione nell'esempio precedente mostra una moltiplicazione di due tipi integrali, `iVal` e `ulVal`. La condizione soddisfatta è che nessuno dei due operandi è di tipo a virgola mobile e che uno degli operandi è di tipo `unsigned int`. Quindi, l'altro operando `iVal`, viene convertito nel tipo `unsigned int`. Il risultato viene assegnato a `dVal`. La condizione soddisfatta è che un operando è di tipo **doppie**; pertanto, il `unsigned int` risultato della moltiplicazione viene convertito nel tipo **double**.  
  
 La seconda istruzione nell'esempio precedente viene illustrata l'aggiunta di un **float** e un tipo integrale, `fVal` e `ulVal`. Il `ulVal` variabile viene convertita nel tipo **float** (terza condizione nella tabella). Il risultato dell'addizione viene convertito nel tipo **doppie** (seconda condizione nella tabella) e assegnato a `dVal`.  
  
## <a name="pointer-conversions"></a>Conversioni puntatore  
 I puntatori possono essere convertiti durante l'assegnazione, l'inizializzazione, il confronto e altre espressioni.  
  
### <a name="pointer-to-classes"></a>Puntatore a classi  
 Esistono due casi in cui un puntatore a una classe può essere convertito in un puntatore a una classe base.  
  
 Il primo caso è quando la classe base specificata è accessibile e la conversione non è ambigua. (Vedere [più classi Base](../cpp/multiple-base-classes.md) per ulteriori informazioni sui riferimenti ambigui della classe di base.)  
  
 L'accessibilità di una classe base dipende dal tipo di ereditarietà usato nella derivazione. Esaminare l'ereditarietà illustrata nella seguente figura.  
  
 ![Accessibilità della classe di base di ereditarietà grafico che Mostra &#45;](../cpp/media/vc38xa1.gif "vc38XA1")  
Grafico dell'ereditarietà per l'illustrazione dell'accessibilità delle classi base  
  
 Nella tabella seguente viene illustrata l'accessibilità della classe base per la situazione illustrata nella figura.  
  
### <a name="base-class-accessibility"></a>Accessibilità della classe base  
  
|Tipo di funzione|Derivazione|Conversione da<br /><br /> B * a\* persona?|  
|----------------------|----------------|-------------------------------------------|  
|Funzione esterna (non a livello dell'ambito della classe)|Private|No|  
||Protetta|No|  
||Public|Sì|  
|Funzione del membro B (nell'ambito B)|Private|Sì|  
||Protetta|Sì|  
||Public|Sì|  
|Funzione del membro C (nell'ambito C)|Private|No|  
||Protetta|Sì|  
||Public|Sì|  
  
 Il secondo caso in cui un puntatore a una classe può essere convertito in un puntatore a una classe base è quando si usa una conversione di tipo esplicita. (Vedere [espressioni con conversioni di tipi esplicite](http://msdn.microsoft.com/en-us/060ad6b4-9592-4f3e-8509-a20ac84a85ae) per ulteriori informazioni sulle conversioni di tipo esplicito.)  
  
 Il risultato di tale conversione è un puntatore al "sotto-oggetto", la parte dell'oggetto descritto completamente dalla classe base.  
  
 Nel codice seguente vengono definite due classi, `A` e `B`, dove `B` è derivata da `A`. (Per ulteriori informazioni sull'ereditarietà, vedere [classi derivate da](../cpp/inheritance-cpp.md).) Definisce quindi `bObject` un oggetto di tipo `B` e due puntatori (`pA` e `pB`) che puntano all'oggetto.  
  
```  
// C2039 expected  
class A  
{  
public:  
    int AComponent;  
    int AMemberFunc();  
};  
  
class B : public A  
{  
public:  
    int BComponent;  
    int BMemberFunc();  
};  
int main()  
{  
   B bObject;  
   A *pA = &bObject;  
   B *pB = &bObject;  
  
   pA->AMemberFunc();   // OK in class A  
   pB->AMemberFunc();   // OK: inherited from class A  
   pA->BMemberFunc();   // Error: not in class A  
}  
```  
  
 Il puntatore `pA` è di tipo `A *`, che può essere interpretato con il significato di "puntatore a un oggetto di tipo `A`". I membri di `bObject` `(`, ad esempio `BComponent` e `BMemberFunc`) sono univoci `B` e sono pertanto inaccessibili mediante `pA`. Il puntatore `pA` consente l'accesso solo a quelle caratteristiche (funzioni membro e dati) dell'oggetto definite nella classe `A`.  
  
### <a name="pointer-to-function"></a>Puntatore a funzione  
 Un puntatore a una funzione può essere convertito nel tipo **void \*** , se tipo **void \***  è sufficientemente grande da contenere tale puntatore.  
  
### <a name="pointer-to-void"></a>Puntatore a void  
 I puntatori al tipo `void` possono essere convertiti in puntatori a qualsiasi altro tipo, ma solo con un cast di tipo esplicito (diversamente da quello che avviene in C). (Vedere [espressioni con conversioni di tipi esplicite](http://msdn.microsoft.com/en-us/060ad6b4-9592-4f3e-8509-a20ac84a85ae) per ulteriori informazioni sui cast di tipo.) Un puntatore a qualsiasi tipo può essere convertito implicitamente a un tipo `void`. Un puntatore a un oggetto incompleto di un tipo può essere convertito in un puntatore a `void` (implicitamente) e viceversa (esplicitamente). Il risultato di tale conversione è uguale al valore del puntatore originale. Un oggetto è considerato incompleto se viene dichiarato ma le informazioni disponibili sono insufficienti per determinarne la dimensione o la classe base.  
  
 Un puntatore a un oggetto che non è **const** o `volatile` può essere convertito in modo implicito in un puntatore di tipo **void \*** .  
  
### <a name="const-and-volatile-pointers"></a>Puntatori const e volatile  
 C++ non fornisce una conversione standard da un **const** o `volatile` tipo a un tipo che non è **const** o `volatile`. Tuttavia, qualsiasi tipo di conversione può essere specificato usando i cast di tipo espliciti (comprese le conversioni non sicure).  
  
> [!NOTE]
>  I puntatori C++ ai membri, ad eccezione dei puntatori ai membri statici, sono diversi dai puntatori normali e non hanno le stesse conversioni standard. I puntatori ai membri statici sono puntatori normali e hanno le stesse conversioni dei puntatori normali.   
  
### <a name="null-pointer-conversions"></a>Conversioni di puntatori Null  
 Un'espressione di costante integrale che restituisce zero o il cast dell'espressione a un tipo puntatore, vengono convertiti in un puntatore denominato "puntatore NULL". Questo puntatore è diverso da un puntatore a qualsiasi oggetto o funzione valida (ad eccezione dei puntatori a oggetti di base, che possono avere lo stesso offset e puntare comunque a oggetti diversi).  
  
 In C++ 11 il [nullptr](../cpp/nullptr.md) tipo deve essere preferito al puntatore null di tipo C.  
  
### <a name="pointer-expression-conversions"></a>Conversioni di espressioni puntatore  
 Qualsiasi espressione con un tipo di matrice può essere convertita in un puntatore dello stesso tipo. Il risultato della conversione è un puntatore al primo elemento della matrice. L'esempio riportato di seguito illustra tale conversione:  
  
```  
char szPath[_MAX_PATH]; // Array of type char.  
char *pszPath = szPath; // Equals &szPath[0].  
```  
  
 Un'espressione che dà come risultato una funzione che restituisce un tipo specifico viene convertita in un puntatore a una funzione che restituisce il tipo, salvo quando:  
  
-   L'espressione viene usata come operando all'operatore address-of (**&**).  
  
-   L'espressione viene usata come operando all'operatore function-call.  
  
## <a name="reference-conversions"></a>Conversioni riferimento  
 Un riferimento a una classe può essere convertito in un riferimento a una classe base nei seguenti casi:  
  
-   La classe base specificata è accessibile.  
  
-   La conversione non è ambigua. (Vedere [più classi Base](../cpp/multiple-base-classes.md) per ulteriori informazioni sui riferimenti ambigui della classe di base.)  
  
 Il risultato della conversione è un puntatore al sotto-oggetto che rappresenta la classe base.  
  
## <a name="pointer-to-member"></a>Puntatore a membro  
 I puntatori a membri di classe possono essere convertiti durante l'assegnazione, l'inizializzazione, il confronto e altre espressioni. In questa sezione vengono descritte le seguenti conversioni puntatore-a-membro:  
  
## <a name="pointer-to-base-class-member"></a>Puntatore a un membro della classe base  
 Un puntatore a un membro di una classe base può essere convertito in un puntatore a un membro di una classe derivata, quando sono soddisfatte le condizioni seguenti:  
  
-   La conversione inversa, dal puntatore a una classe derivata al puntatore della classe base, è accessibile.  
  
-   La classe derivata non eredita virtualmente dalla classe base.  
  
 Se l'operando sinistro è un puntatore a un membro, l'operando destro deve essere del tipo di puntatore a membro oppure un'espressione costante che restituisce 0. Questa assegnazione è valida solo nei casi seguenti:  
  
-   L'operando destro è un puntatore a un membro della stessa classe dell'operando sinistro.  
  
-   L'operando sinistro è un puntatore a un membro di una classe derivata pubblicamente e inequivocabilmente derivante dalla classe dell'operando destro.  
  
## <a name="integral-constant-conversions"></a>Conversioni di costanti integrali  
 Un'espressione costante integrale che restituisce zero viene convertita in un puntatore denominato puntatore null. Questo puntatore è diverso da un puntatore a qualsiasi oggetto o funzione valida (ad eccezione dei puntatori a oggetti di base, che possono avere lo stesso offset e puntare comunque a oggetti diversi).  
  
 Nel codice seguente viene illustrata la definizione di un puntatore al membro `i` nella classe `A`. Il puntatore `pai` viene inizializzato a 0, che è il puntatore null.  
  
```  
class A  
{  
public:  
 int i;  
};  
  
int A::*pai = 0;  
  
int main()  
{  
}  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimenti al linguaggio C++](../cpp/cpp-language-reference.md)
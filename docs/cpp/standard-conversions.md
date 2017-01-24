---
title: "Conversioni standard | Microsoft Docs"
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
  - "conversioni, standard"
  - "valori L"
  - "conversioni standard, categorie"
ms.assetid: ce7ac8d3-5c99-4674-8229-0672de05528d
caps.latest.revision: 10
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Conversioni standard
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il linguaggio C\+\+ definisce le conversioni tra i relativi tipi fondamentali.  Inoltre, definisce le conversioni per i tipi derivati puntatore, riferimento e puntatore a membro.  Queste conversioni vengono definite "conversioni standard". Per altre informazioni su tipi, tipi standard e tipi derivati, vedere [Tipi](http://msdn.microsoft.com/it-it/6882ee83-ea32-4373-8d57-c3efbbc15af0).  
  
 In questa sezione vengono descritte le conversioni standard seguenti:  
  
-   [Promozioni a intero](../misc/integral-promotions.md)  
  
-   [Conversioni integrali](../misc/integral-conversions.md)  
  
-   [Conversioni a virgola mobile](../misc/floating-conversions.md)  
  
-   [Conversioni integrali e a virgola mobile](../misc/floating-and-integral-conversions.md)  
  
-   [Conversioni aritmetiche](../misc/arithmetic-conversions.md)  
  
-   [Conversioni puntatore](../misc/pointer-conversions-cpp.md)  
  
-   [Conversioni riferimento](../misc/reference-conversions.md)  
  
-   [Conversioni puntatore a membro](../misc/pointer-to-member-conversions.md)  
  
    > [!NOTE]
    >  I tipi definiti dall'utente possono specificare le proprie conversioni.  La conversione dei tipi definiti dall'utente è descritta in [Costruttori](../cpp/constructors-cpp.md) e [Conversioni](../cpp/user-defined-type-conversions-cpp.md).  
  
 Il codice seguente genera conversioni \(in questo esempio, promozioni a intero\):  
  
```  
long  lnum1, lnum2;  
int   inum;  
  
// inum promoted to type long prior to assignment.  
lnum1 = inum;  
  
// inum promoted to type long prior to multiplication.  
lnum2 = inum * lnum2;  
```  
  
> [!NOTE]
>  Il risultato di una conversione è un l\-value solo se genera un tipo di riferimento.  Ad esempio, una conversione definita dall'utente dichiarata come  
  
```  
operator int&()  
```  
  
> [!NOTE]
>  restituisce un riferimento ed è un I\-value.  Tuttavia, una conversione dichiarata come  
  
```  
operator int()  
```  
  
> [!NOTE]
>  restituisce un oggetto e non è un l\-value.  
  
## Promozioni a intero  
 Gli oggetti di un tipo integrale possono essere convertiti in un tipo integrale più ampio, ovvero in un tipo in grado di rappresentare un più ampio set di valori.  Tale conversione widening viene denominata "promozione a intero." Con la promozione a intero, è possibile usare quanto segue in un'espressione ogni qual volta sia possibile usare un altro tipo integrale:  
  
-   Oggetti, valori letterali e costanti di tipo `char` e `short int`  
  
-   Tipi di enumerazione  
  
-   `int` campi di bit  
  
-   Enumeratori  
  
 Le promozioni di C\+\+ sono a "mantenimento del valore." Ciò significa che si ha la certezza che il valore, in seguito alla promozione, sia identico al valore antecedente la promozione.  Nelle promozioni a mantenimento del valore, gli oggetti di tipi integrali più brevi \(come i campi di bit o gli oggetti di tipo `char`\) vengono promossi al tipo `int`, se `int` è in grado di rappresentare la gamma completa del tipo di origine.  Se `int` non è in grado rappresentare la gamma completa dei valori, l'oggetto viene promosso al tipo `unsigned int`.  Sebbene questa strategia sia identica a quella usata da ANSI C, le conversioni a mantenimento del valore non mantengono il "segno" dell'oggetto.  
  
 Le promozioni a mantenimento del valore e le promozioni che mantengono il segno producono, in genere, gli stessi risultati.  Possono, però, produrre risultati diversi qualora l'oggetto promosso sia uno dei seguenti:  
  
-   Un operando di **\/**, `%`, `/=`, `%=`, **\<**, **\<\=**, **\>** o **\>\=**  
  
     Questi operatori si basano sul segno per determinare il risultato.  Di conseguenza, le promozioni a mantenimento del valore e le promozioni che mantengono il segno portano a risultati diversi, se applicate a tali operandi.  
  
-   Operando sinistro di **\>\>** o **\>\>\=**  
  
     Questi operatori trattano le quantità con segno e quelle senza segno in maniera differente, quando si esegue un'operazione di spostamento.  Nel caso delle quantità con segno, spostare una quantità a destra comporta la propagazione del bit di segno verso le posizioni di bit vuote.  Nel caso delle quantità senza segno, le posizioni di bit vuote vengono riempite con zero.  
  
-   Argomento in una funzione in overload o operando di un operatore di overload che dipende dal segno del tipo dello stesso operando per corrispondere all'argomento.  Per altre informazioni sulla definizione di operatori di overload, vedere [Operatori di overload](../cpp/operator-overloading.md).  
  
## Conversioni integrali  
 Le conversioni integrali vengono eseguite tra i tipi integrali.  I tipi integrali sono `char`, `int` e **long** nonché le versioni**short**, **signed** e `unsigned` di tali tipi.  
  
 **Da tipo signed a tipo unsigned**  
  
 Gli oggetti di tipi integrali con segno possono essere convertiti nei corrispondenti tipi senza segno.  Quando si verificano queste conversioni, lo schema di bit effettivo non cambia; cambia, tuttavia, l'interpretazione dei dati.  Si consideri il codice seguente:  
  
```  
// conve__pluslang_Converting_Signed_to_Unsigned.cpp  
// compile with: /EHsc  
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
  
 Nell'esempio precedente uno tipo `signed short`, `i`, viene definito e inizializzato con un numero negativo.  L'espressione `(u = i)` causa la conversione di `i` in uno tipo **short senza segno** prima dell'assegnazione a `u`.  
  
 **Da tipo unsigned a tipo signed**  
  
 Gli oggetti dei tipi integrali senza segno possono essere convertiti nei tipi con segno corrispondenti.  Tuttavia, tale conversione può comportare l'errata interpretazione dei dati se il valore dell'oggetto senza segno è esterno all'intervallo rappresentabile dal tipo con segno, come mostrato nel seguente esempio:  
  
```  
// conve__pluslang_Converting_Unsigned_to_Signed.cpp  
// compile with: /EHsc  
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
  
 Nell'esempio precedente `u` è un oggetto integrale `unsigned` **short** che deve essere convertito in una quantità con segno per valutare l'espressione `(i = u)`.  Poiché il relativo valore non può essere rappresentato correttamente in un oggetto `signed short`, i dati vengono interpretati erroneamente come illustrato.  
  
## Conversioni del punto a virgola mobile  
 Un oggetto di un tipo a virgola mobile può essere convertito in modo sicuro in un tipo a virgola mobile più preciso, senza che la conversione causi una perdita di significato.  Ad esempio, le conversioni dal tipo **float** nel tipo **double** o dal tipo **double** nel tipo `long double` sono sicure e il valore rimane invariato.  
  
 Un oggetto di un tipo a virgola mobile può essere inoltre convertito in un tipo meno preciso, se è compreso in un intervallo rappresentabile mediante tale tipo  \(per gli intervalli dei tipi a virgola mobile, vedere [Limiti dei tipi a virgola mobile](../cpp/floating-limits.md)\). Se il valore originale non può essere rappresentato in modo preciso, può essere convertito nel successivo valore più alto o più basso rappresentabile.  Se tale valore non esiste, il risultato non è definito.  Si consideri l'esempio seguente:  
  
```  
cout << (float)1E300 << endl;  
```  
  
 Il valore massimo rappresentabile dal tipo **float** è 3.402823466E38, un numero molto più piccolo rispetto a 1E300.  Di conseguenza, il numero viene convertito a infinito e il risultato è 1.\#INF.  
  
## Conversioni tra tipi integrali e tipi punto a virgola mobile  
 Alcune espressioni possono causare la conversione degli oggetti di tipo a virgola mobile in tipi integrali o viceversa.  Quando un oggetto di tipo integrale viene convertito in un tipo a virgola mobile e il valore originale non può essere rappresentato esattamente, il risultato è dato dal successivo valore più alto o più basso rappresentabile.  
  
 Quando un oggetto di tipo a virgola mobile viene convertito nel tipo integrale, la parte frazionaria viene troncata.  Nel processo di conversione non viene eseguito alcun arrotondamento.  Il troncamento indica che un numero come 1,3 viene convertito in 1 e il numero \- 1,3 viene convertito in \-1.  
  
## Conversioni aritmetiche  
 Molti operatori binari \(illustrati in [Espressioni con gli operatori binari](../cpp/expressions-with-binary-operators.md)\) causano conversioni degli operandi e restituiscono risultati nello stesso modo.  La modalità in cui questi operatori causano le conversioni è denominata "conversioni aritmetiche consuete." Le conversioni aritmetiche degli operandi di tipi nativi differenti vengono eseguite come illustrato nella tabella seguente.  I tipi typedef si comportano in base ai tipi nativi sottostanti.  
  
### Condizioni per la conversione di tipi  
  
|Condizioni soddisfatte|Conversione|  
|----------------------------|-----------------|  
|Uno degli operandi è di tipo **long double**.|L'altro operando viene convertito nel tipo **long double**.|  
|La condizione precedente non è soddisfatta e uno degli operandi è di tipo **double**.|L'altro operando viene convertito nel tipo **double**.|  
|Le condizioni precedenti non sono soddisfatte e uno degli operandi è di tipo **float**.|L'altro operando viene convertito nel tipo **float**.|  
|Le condizioni precedenti non sono soddisfatte \(nessuno degli operandi sono di tipo a virgola mobile\).|Le promozioni integrali vengono eseguite sugli operandi come indicato di seguito:<br /><br /> -   Se uno degli operandi è di tipo `unsigned` **long**, l'altro operando verrà convertito nel tipo `unsigned long`..<br />-   Se la condizione precedente non è soddisfatta e uno degli operandi è di tipo **long** e l'altro operando è di tipo `unsigned` `int`, entrambi gli operandi verranno convertiti nel tipo `unsigned long`.<br />-   Se le due condizioni precedenti non sono soddisfatte e uno degli operandi è di tipo **long**, l'altro operando verrà convertito nel tipo **long**.<br />-   Se le tre condizioni precedenti non sono soddisfatte e uno degli operandi è di tipo `unsigned int`, l'altro operando verrà convertito nel tipo `unsigned int`.<br />-   Se nessuna delle condizioni precedenti è soddisfatta, entrambi verranno convertiti nel tipo `int`.|  
  
 Il codice seguente illustra le regole di conversione descritte nella tabella:  
  
```  
// arithmetic_conversions.cpp  
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
  
 La prima istruzione nell'esempio precedente mostra una moltiplicazione di due tipi integrali, `iVal` e `ulVal`.  La condizione soddisfatta è che nessuno dei due operandi è di tipo a virgola mobile e che uno degli operandi è di tipo `unsigned int`.  Quindi, l'altro operando `iVal`, viene convertito nel tipo `unsigned int`.  Il risultato viene assegnato a `dVal`.  La condizione soddisfatta è che un operando è di tipo **double**; pertanto, il risultato `unsigned int` della moltiplicazione viene convertito nel tipo **double**.  
  
 La seconda istruzione dell'esempio precedente mostra l'aggiunta di un tipo di integrale **float** e di un tipo integrale `fVal` e `ulVal`.  La variabile `ulVal` viene convertita nel tipo **float** \(terza condizione nella tabella\).  Il risultato dell'addizione viene convertito nel tipo **double** \(seconda condizione nella tabella\) e viene assegnato a `dVal`.  
  
## Conversioni puntatore  
 I puntatori possono essere convertiti durante l'assegnazione, l'inizializzazione, il confronto e altre espressioni.  
  
### Puntatore a classi  
 Esistono due casi in cui un puntatore a una classe può essere convertito in un puntatore a una classe base.  
  
 Il primo caso è quando la classe base specificata è accessibile e la conversione non è ambigua.  Per altre informazioni sui riferimenti ambigui della classe base, vedere [Più classi base](../cpp/multiple-base-classes.md).  
  
 L'accessibilità di una classe base dipende dal tipo di ereditarietà usato nella derivazione.  Esaminare l'ereditarietà illustrata nella seguente figura.  
  
 ![Rappresentazione grafica dell'ereditarietà con accessibilità della classe di base](../cpp/media/vc38xa1.png "vc38XA1")  
Grafico dell'ereditarietà per l'illustrazione dell'accessibilità delle classi base  
  
 Nella tabella seguente viene illustrata l'accessibilità della classe base per la situazione illustrata nella figura.  
  
### Accessibilità della classe base  
  
|Tipo di funzione|Derivazione|Conversione da<br /><br /> B\* a A\* valida?|  
|----------------------|-----------------|------------------------------------------|  
|Funzione esterna \(non a livello dell'ambito della classe\)|Private|No|  
||Protetta|No|  
||Public|Sì|  
|Funzione del membro B \(nell'ambito B\)|Private|Sì|  
||Protetta|Sì|  
||Public|Sì|  
|Funzione del membro C \(nell'ambito C\)|Private|No|  
||Protetta|Sì|  
||Public|Sì|  
  
 Il secondo caso in cui un puntatore a una classe può essere convertito in un puntatore a una classe base è quando si usa una conversione di tipo esplicita.  Per altre informazioni sulle conversioni di tipi esplicite, vedere [Espressioni con le conversioni di tipi esplicite](http://msdn.microsoft.com/it-it/060ad6b4-9592-4f3e-8509-a20ac84a85ae).  
  
 Il risultato di tale conversione è un puntatore al "sotto\-oggetto", la parte dell'oggetto descritto completamente dalla classe base.  
  
 Nel codice seguente vengono definite due classi, `A` e `B`, dove `B` è derivata da `A`.  Per altre informazioni sull'ereditarietà, vedere [Classi derivate](../cpp/inheritance-cpp.md). Definisce quindi `bObject` un oggetto di tipo `B` e due puntatori \(`pA` e `pB`\) che puntano all'oggetto.  
  
```  
// conve__pluslang_Pointers_to_Classes.cpp  
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
  
 Il puntatore `pA` è di tipo `A *`, che può essere interpretato con il significato di "puntatore a un oggetto di tipo `A`". I membri di `bObject` `(`come `BComponent` e `BMemberFunc`\) sono univoci `B` e sono pertanto inaccessibili mediante `pA`.  Il puntatore `pA` consente l'accesso solo a quelle caratteristiche \(funzioni membro e dati\) dell'oggetto definite nella classe `A`.  
  
### Puntatore a funzione  
 Un puntatore a una funzione può essere convertito nel tipo **void \***, se il tipo **void \*** è sufficiente per posizionare tale puntatore.  
  
### Puntatore a void  
 I puntatori al tipo `void` possono essere convertiti in puntatori a qualsiasi altro tipo, ma solo con un cast di tipo esplicito \(diversamente da quello che avviene in C\).  Per altre informazioni sui cast di tipo, vedere [Espressioni con conversioni di tipi esplicite](http://msdn.microsoft.com/it-it/060ad6b4-9592-4f3e-8509-a20ac84a85ae). Un puntatore a qualsiasi tipo può essere convertito implicitamente a un tipo `void`. Un puntatore a un oggetto incompleto di un tipo può essere convertito in un puntatore a `void` \(implicitamente\) e viceversa \(esplicitamente\).  Il risultato di tale conversione è uguale al valore del puntatore originale.  Un oggetto è considerato incompleto se viene dichiarato ma le informazioni disponibili sono insufficienti per determinarne la dimensione o la classe base.  
  
 Un puntatore a qualsiasi oggetto non **const** o `volatile` può essere convertito in modo implicito a un puntatore di tipo **void \***.  
  
### Puntatori const e volatile  
 C\+\+ non fornisce una conversione standard da un tipo **const** o `volatile` a un tipo che non è **const** o `volatile`.  Tuttavia, qualsiasi tipo di conversione può essere specificato usando i cast di tipo espliciti \(comprese le conversioni non sicure\).  
  
> [!NOTE]
>  I puntatori C\+\+ ai membri, ad eccezione dei puntatori ai membri statici, sono diversi dai puntatori normali e non hanno le stesse conversioni standard.  I puntatori ai membri statici sono puntatori normali e hanno le stesse conversioni dei puntatori normali.  Per altre informazioni, vedere [\(NOTINBUILD\) Directly Derived Types](http://msdn.microsoft.com/it-it/d2d611d1-dbff-4fb4-9858-e1572544f5c3).  
  
### Conversioni di puntatori Null  
 Un'espressione di costante integrale che restituisce zero o il cast dell'espressione a un tipo puntatore, vengono convertiti in un puntatore denominato "puntatore NULL". Questo puntatore è diverso da un puntatore a qualsiasi oggetto o funzione valida \(ad eccezione dei puntatori a oggetti di base, che possono avere lo stesso offset e puntare comunque a oggetti diversi\).  
  
 In C\+\+11 il tipo [nullptr](../cpp/nullptr.md) deve essere preferito rispetto al puntatore Null in stile C.  
  
### Conversioni di espressioni puntatore  
 Qualsiasi espressione con un tipo di matrice può essere convertita in un puntatore dello stesso tipo.  Il risultato della conversione è un puntatore al primo elemento della matrice.  L'esempio riportato di seguito illustra tale conversione:  
  
```  
char szPath[_MAX_PATH]; // Array of type char.  
char *pszPath = szPath; // Equals &szPath[0].  
```  
  
 Un'espressione che dà come risultato una funzione che restituisce un tipo specifico viene convertita in un puntatore a una funzione che restituisce il tipo, salvo quando:  
  
-   L'espressione viene usata come operando all'operatore address\-of \(**&**\).  
  
-   L'espressione viene usata come operando all'operatore function\-call.  
  
## Conversioni riferimento  
 Un riferimento a una classe può essere convertito in un riferimento a una classe base nei seguenti casi:  
  
-   La classe base specificata è accessibile, come definito in [Puntatori alle classi](../misc/pointers-to-classes.md).  
  
-   La conversione non è ambigua.  Per altre informazioni sui riferimenti ambigui della classe base, vedere [Più classi base](../cpp/multiple-base-classes.md).  
  
 Il risultato della conversione è un puntatore al sotto\-oggetto che rappresenta la classe base.  
  
## Puntatore a membro  
 I puntatori a membri di classe possono essere convertiti durante l'assegnazione, l'inizializzazione, il confronto e altre espressioni.  In questa sezione vengono descritte le seguenti conversioni puntatore\-a\-membro:  
  
## Puntatore a un membro della classe base  
 Un puntatore a un membro di una classe base può essere convertito in un puntatore a un membro di una classe derivata, quando sono soddisfatte le condizioni seguenti:  
  
-   La conversione inversa, dal puntatore a una classe derivata al puntatore della classe base, è accessibile.  
  
-   La classe derivata non eredita virtualmente dalla classe base.  
  
 Se l'operando sinistro è un puntatore a un membro, l'operando destro deve essere del tipo di puntatore a membro oppure un'espressione costante che restituisce 0.  Questa assegnazione è valida solo nei casi seguenti:  
  
-   L'operando destro è un puntatore a un membro della stessa classe dell'operando sinistro.  
  
-   L'operando sinistro è un puntatore a un membro di una classe derivata pubblicamente e inequivocabilmente derivante dalla classe dell'operando destro.  
  
## Conversioni di costanti integrali  
 Un'espressione costante integrale che restituisce zero viene convertita in un puntatore denominato puntatore null. Questo puntatore è diverso da un puntatore a qualsiasi oggetto o funzione valida \(ad eccezione dei puntatori a oggetti di base, che possono avere lo stesso offset e puntare comunque a oggetti diversi\).  
  
 Nel codice seguente viene illustrata la definizione di un puntatore al membro `i` nella classe `A`.  Il puntatore `pai` viene inizializzato a 0, che è il puntatore null.  
  
```  
// conve__pluslang_Integral_Constant_Expressions.cpp  
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
  
## Vedere anche  
 [Riferimenti del linguaggio C\+\+](../cpp/cpp-language-reference.md)
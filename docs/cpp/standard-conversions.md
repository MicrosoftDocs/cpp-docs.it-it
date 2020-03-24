---
title: Conversioni standard
ms.date: 10/02/2019
helpviewer_keywords:
- standard conversions, categories of
- L-values [C++]
- conversions, standard
ms.assetid: ce7ac8d3-5c99-4674-8229-0672de05528d
ms.openlocfilehash: 41ad348b7109451f519c44f685cea0a271f71925
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80161010"
---
# <a name="standard-conversions"></a>Conversioni standard

Il linguaggio C++ definisce le conversioni tra i relativi tipi fondamentali. Inoltre, definisce le conversioni per i tipi derivati puntatore, riferimento e puntatore a membro. Queste conversioni sono denominate *conversioni standard*.

In questa sezione vengono descritte le conversioni standard seguenti:

- Promozioni a intero

- Conversioni integrali

- Conversioni a virgola mobile

- Conversioni integrali e a virgola mobile

- Conversioni aritmetiche

- Conversioni puntatore

- Conversioni riferimento

- Conversioni puntatore a membro

  > [!NOTE]
  > I tipi definiti dall'utente possono specificare le proprie conversioni. La conversione di tipi definiti dall'utente è analizzata in [costruttori](../cpp/constructors-cpp.md) e [conversioni](../cpp/user-defined-type-conversions-cpp.md).

Il codice seguente genera conversioni (in questo esempio, promozioni a intero):

```cpp
long  long_num1, long_num2;
int   int_num;

// int_num promoted to type long prior to assignment.
long_num1 = int_num;

// int_num promoted to type long prior to multiplication.
long_num2 = int_num * long_num2;
```

Il risultato di una conversione è un l-value solo se genera un tipo di riferimento. Una conversione definita dall'utente, ad esempio, dichiarata come `operator int&()` restituisce un riferimento ed è un l-value. Tuttavia, una conversione dichiarata come `operator int()` restituisce un oggetto e non è un l-value.

## <a name="integral-promotions"></a>Promozioni a intero

Gli oggetti di un tipo integrale possono essere convertiti in un altro tipo integrale più ampio, ovvero un tipo che può rappresentare un set più ampio di valori. Questo tipo di conversione più ampio è denominato *promozione integrale*. Con la promozione integrale, è possibile usare i tipi seguenti in un'espressione ogni volta che è possibile usare un altro tipo integrale:

- Oggetti, valori letterali e costanti di tipo **char** e **short int**

- Tipi di enumerazione

- campi di bit **int**

- Enumerators

C++le promozioni sono "con mantenimento del valore", come valore dopo che la promozione è garantita come valore prima della promozione. Nelle promozioni con mantenimento del valore, gli oggetti di tipi integrali più brevi, ad esempio campi di bit o oggetti di tipo **char**, vengono promossi al tipo **int** se **int** può rappresentare l'intervallo completo del tipo originale. Se **int** non può rappresentare l'intervallo completo di valori, l'oggetto viene promosso al tipo **unsigned int**.  Sebbene questa strategia sia identica a quella usata dallo standard C, le conversioni con mantenimento del valore non mantengono la "firma" dell'oggetto.

Le promozioni a mantenimento del valore e le promozioni che mantengono il segno producono, in genere, gli stessi risultati. Tuttavia, possono produrre risultati diversi se l'oggetto promosso viene visualizzato come segue:

- Operando di `/`, `%`, `/=`, `%=`, `<`, `<=`, `>`o `>=`

   Questi operatori si basano sul segno per determinare il risultato. Le promozioni con mantenimento del valore e mantenimento del segno producono risultati diversi quando vengono applicati a questi operandi.

- Operando sinistro di `>>` o `>>=`

   Questi operatori considerano le quantità firmate e senza segno in modo diverso in un'operazione di spostamento. Per le quantità con segno, un'operazione di spostamento a destra propaga il bit di segno nelle posizioni dei bit sgomberate, mentre le posizioni dei bit sgomberate sono riempite con zero in quantità senza segno.

- Un argomento di una funzione in overload o l'operando di un operatore di overload che dipende dalla firma del tipo di operando per la corrispondenza dell'argomento. Per ulteriori informazioni sulla definizione di operatori di overload, vedere [operatori di overload](../cpp/operator-overloading.md).

## <a name="integral-conversions"></a>Conversioni integrali

Le *conversioni integrali* sono conversioni tra tipi integrali. I tipi integrali sono **char**, **short** (o **short int**), **int**, **Long**e **Long Long**. Questi tipi possono essere **qualificati con segno o senza** **segno** **e senza segno può essere** usato come abbreviazione per **int senza segno**.

### <a name="signed-to-unsigned"></a>Da tipo signed a tipo unsigned

Gli oggetti di tipi integrali con segno possono essere convertiti nei corrispondenti tipi senza segno. Quando si verificano queste conversioni, lo schema di bit effettivo non cambia. Tuttavia, l'interpretazione dei dati cambia. Si consideri il codice seguente:

```cpp
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

Nell'esempio precedente, un valore **short con segno**, `i`, viene definito e inizializzato su un numero negativo. L'espressione `(u = i)` causa la conversione di `i` in un **short senza segno** prima dell'assegnazione al `u`.

### <a name="unsigned-to-signed"></a>Da tipo unsigned a tipo signed

Gli oggetti dei tipi integrali senza segno possono essere convertiti nei tipi con segno corrispondenti. Tuttavia, se il valore senza segno è esterno all'intervallo rappresentabile del tipo con segno, il risultato non avrà il valore corretto, come illustrato nell'esempio seguente:

```cpp
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

Nell'esempio precedente, `u` è un oggetto integrale **breve senza segno** che deve essere convertito in una quantità con segno per valutare l'espressione `(i = u)`. Poiché il valore non può essere rappresentato correttamente in un oggetto **short con segno**, i dati vengono interpretati erroneamente come illustrato.

## <a name="floating-point-conversions"></a>Conversioni del punto a virgola mobile

Un oggetto di un tipo a virgola mobile può essere convertito in modo sicuro in un tipo a virgola mobile più preciso, senza che la conversione causi una perdita di significato. Ad esempio, le conversioni da **float** a **Double** o da **Double** a **long double** sono sicure e il valore è invariato.

Un oggetto di un tipo a virgola mobile può anche essere convertito in un tipo meno preciso, se si trova in un intervallo rappresentabile da quel tipo. (Vedere i [limiti mobili](../cpp/floating-limits.md) per gli intervalli dei tipi a virgola mobile.) Se il valore originale non è rappresentabile con precisione, può essere convertito in un valore successivo o successivo più basso rappresentabile. Il risultato non è definito se non esiste alcun valore di questo tipo. Prendere in considerazione gli esempi seguenti:

```cpp
cout << (float)1E300 << endl;
```

Il valore massimo rappresentabile dal tipo **float** è 3.402823466 E38, un numero molto più piccolo di 1E300. Il numero viene pertanto convertito in infinito e il risultato è "inf".

## <a name="conversions-between-integral-and-floating-point-types"></a>Conversioni tra tipi integrali e tipi punto a virgola mobile

Alcune espressioni possono causare la conversione degli oggetti di tipo a virgola mobile in tipi integrali o viceversa. Quando un oggetto di tipo integrale viene convertito in un tipo a virgola mobile e il valore originale non è rappresentabile esattamente, il risultato è il successivo valore più alto o successivo rappresentabile inferiore.

Quando un oggetto di tipo a virgola mobile viene convertito in un tipo integrale, la parte frazionaria viene *troncata*o arrotondata verso lo zero. Un numero come 1,3 viene convertito in 1 e-1,3 viene convertito in-1. Se il valore troncato è superiore al valore rappresentabile più elevato o inferiore al valore rappresentabile più basso, il risultato è indefinito.

## <a name="arithmetic-conversions"></a>Conversioni aritmetiche

Molti operatori binari, descritti in [espressioni con operatori binari](../cpp/expressions-with-binary-operators.md), causano conversioni degli operandi e producono risultati nello stesso modo. Le conversioni generate da questi operatori sono denominate *conversioni aritmetiche consuete*. Le conversioni aritmetiche degli operandi con tipi nativi diversi vengono eseguite come illustrato nella tabella seguente. I tipi typedef si comportano in base ai tipi nativi sottostanti.

### <a name="conditions-for-type-conversion"></a>Condizioni per la conversione dei tipi

|Condizioni soddisfatte|Conversione|
|--------------------|----------------|
|Uno degli operandi è di tipo **long double**.|Un altro operando viene convertito nel tipo **long double**.|
|La condizione precedente non è soddisfatta e uno degli operandi è di tipo **Double**.|Un altro operando viene convertito nel tipo **Double**.|
|Le condizioni precedenti non sono soddisfatte e uno degli operandi è di tipo **float**.|Un altro operando viene convertito nel tipo **float**.|
|Le condizioni precedenti non sono soddisfatte (nessuno degli operandi sono di tipo a virgola mobile).|Gli operandi ottengono le promozioni integrali come segue:<br /><br />-Se uno degli operandi è di tipo **unsigned long**, l'altro operando viene convertito nel tipo **unsigned long**.<br />-Se la condizione precedente non è soddisfatta e se uno degli operandi è di tipo **Long** e l'altro di tipo **unsigned int**, entrambi gli operandi vengono convertiti nel tipo **unsigned long**.<br />-Se le due condizioni precedenti non vengono soddisfatte e se uno degli operandi è di tipo **Long**, l'altro operando viene convertito nel tipo **Long**.<br />-Se le tre condizioni precedenti non vengono soddisfatte e se uno degli operandi è di tipo **unsigned int**, l'altro operando viene convertito nel tipo **unsigned int**.<br />-Se nessuna delle condizioni precedenti viene soddisfatta, entrambi gli operandi vengono convertiti nel tipo **int**.|

Il codice seguente illustra le regole di conversione descritte nella tabella:

```cpp
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

La prima istruzione nell'esempio precedente mostra una moltiplicazione di due tipi integrali, `iVal` e `ulVal`. La condizione soddisfatta è che nessuno degli operandi è di tipo a virgola mobile e un operando è di tipo **unsigned int**. Quindi, l'altro operando, `iVal`, viene convertito nel tipo **unsigned int**. Il risultato viene quindi assegnato a `dVal`. La condizione soddisfatta qui è che un operando è di tipo **Double**, quindi il risultato **unsigned int** della moltiplicazione viene convertito nel tipo **Double**.

La seconda istruzione nell'esempio precedente illustra l'aggiunta di un tipo **float** e un tipo integrale: `fVal` e `ulVal`. La variabile `ulVal` viene convertita nel tipo **float** (terza condizione nella tabella). Il risultato dell'addizione viene convertito nel tipo **Double** (seconda condizione nella tabella) e assegnato a `dVal`.

## <a name="pointer-conversions"></a>Conversioni puntatore

I puntatori possono essere convertiti durante l'assegnazione, l'inizializzazione, il confronto e altre espressioni.

### <a name="pointer-to-classes"></a>Puntatore a classi

Esistono due casi in cui un puntatore a una classe può essere convertito in un puntatore a una classe base.

Il primo caso è quando la classe base specificata è accessibile e la conversione non è ambigua. Per ulteriori informazioni sui riferimenti ambigui della classe base, vedere [più classi base](../cpp/multiple-base-classes.md).

L'accessibilità di una classe base dipende dal tipo di ereditarietà utilizzato nella derivazione. Esaminare l'ereditarietà illustrata nella seguente figura.

![Grafico dell'ereditarietà che&#45;Mostra l'accessibilità della classe base](../cpp/media/vc38xa1.gif "Grafico dell'ereditarietà che&#45;Mostra l'accessibilità della classe base") <br/>
Grafico dell'ereditarietà per l'illustrazione dell'accessibilità delle classi base

Nella tabella seguente viene illustrata l'accessibilità della classe base per la situazione illustrata nella figura.

|Tipo di funzione|Derivazione|Conversione da<br /><br /> B * a un\* valido?|
|----------------------|----------------|-------------------------------------------|
|Funzione esterna (non a livello dell'ambito della classe)|Privato|No|
||Protetto|No|
||Pubblico|Sì|
|Funzione del membro B (nell'ambito B)|Privato|Sì|
||Protetto|Sì|
||Pubblico|Sì|
|Funzione del membro C (nell'ambito C)|Privato|No|
||Protetto|Sì|
||Pubblico|Sì|

Il secondo caso in cui un puntatore a una classe può essere convertito in un puntatore a una classe base è quando si usa una conversione di tipo esplicita. Per ulteriori informazioni sulle conversioni di tipi esplicite, vedere [operatore di conversione esplicita dei tipi](explicit-type-conversion-operator-parens.md).

Il risultato di tale conversione è un puntatore all' *oggetto SubObject*, ovvero la parte dell'oggetto descritta completamente dalla classe base.

Nel codice seguente vengono definite due classi, `A` e `B`, dove `B` è derivata da `A`. Per ulteriori informazioni sull'ereditarietà, vedere [classi derivate](../cpp/inheritance-cpp.md). Definisce quindi `bObject`, un oggetto di tipo `B`e due puntatori (`pA` e `pB`) che puntano all'oggetto.

```cpp
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

Il puntatore `pA` è di tipo `A *`, che può essere interpretato con il significato di "puntatore a un oggetto di tipo `A`". I membri di `bObject` (ad esempio `BComponent` e `BMemberFunc`) sono univoci per il tipo `B` e pertanto non sono accessibili tramite `pA`. Il puntatore `pA` consente l'accesso solo a quelle caratteristiche (funzioni membro e dati) dell'oggetto definite nella classe `A`.

### <a name="pointer-to-function"></a>Puntatore a funzione

Un puntatore a una funzione può essere convertito nel tipo `void *`, se il tipo `void *` è sufficientemente grande da contenere tale puntatore.

### <a name="pointer-to-void"></a>Puntatore a void

I puntatori al tipo **void** possono essere convertiti in puntatori a qualsiasi altro tipo, ma solo con un cast di tipo esplicito (diversamente da C). Un puntatore a qualsiasi tipo può essere convertito in modo implicito in un puntatore al tipo **void**. Un puntatore a un oggetto incompleto di un tipo può essere convertito in un puntatore a **void** (implicitamente) e viceversa (in modo esplicito). Il risultato di tale conversione è uguale al valore del puntatore originale. Un oggetto viene considerato incompleto se è dichiarato, ma non sono disponibili informazioni sufficienti per determinarne le dimensioni o la classe di base.

Un puntatore a un oggetto che non è **const** o **volatile** può essere convertito in modo implicito in un puntatore di tipo `void *`.

### <a name="const-and-volatile-pointers"></a>Puntatori const e volatile

C++non fornisce una conversione standard da un tipo **const** o **volatile** a un tipo non **const** o **volatile**. Tuttavia, qualsiasi tipo di conversione può essere specificato utilizzando i cast di tipo espliciti (comprese le conversioni non sicure).

> [!NOTE]
> C++i puntatori ai membri, ad eccezione dei puntatori ai membri statici, sono diversi dai puntatori normali e non hanno le stesse conversioni standard. I puntatori ai membri statici sono puntatori normali e hanno le stesse conversioni dei puntatori normali.

### <a name="null-pointer-conversions"></a>Conversioni di puntatori Null

Un'espressione costante integrale che restituisce zero o tale espressione cast a un tipo di puntatore viene convertita in un puntatore denominato *puntatore null*. Questo puntatore viene sempre confrontato con un puntatore a un oggetto o a una funzione valida. Un'eccezione è costituita da puntatori a oggetti basati, che possono avere lo stesso offset e puntare ancora a oggetti diversi.

In C++ 11 il tipo [nullptr](../cpp/nullptr.md) deve essere preferito al puntatore null di tipo C.

### <a name="pointer-expression-conversions"></a>Conversioni di espressioni puntatore

Qualsiasi espressione con un tipo di matrice può essere convertita in un puntatore dello stesso tipo. Il risultato della conversione è un puntatore al primo elemento della matrice. Nell'esempio riportato di seguito viene illustrata tale conversione:

```cpp
char szPath[_MAX_PATH]; // Array of type char.
char *pszPath = szPath; // Equals &szPath[0].
```

Un'espressione che dà come risultato una funzione che restituisce un tipo specifico viene convertita in un puntatore a una funzione che restituisce il tipo, salvo quando:

- L'espressione viene utilizzata come operando per l'operatore address-of ( **&** ).

- L'espressione viene utilizzata come operando all'operatore function-call.

## <a name="reference-conversions"></a>Conversioni riferimento

In questi casi, un riferimento a una classe può essere convertito in un riferimento a una classe di base:

- La classe base specificata è accessibile.

- La conversione non è ambigua. Per ulteriori informazioni sui riferimenti ambigui della classe base, vedere [più classi base](../cpp/multiple-base-classes.md).

Il risultato della conversione è un puntatore al sotto-oggetto che rappresenta la classe base.

## <a name="pointer-to-member"></a>Puntatore a membro

I puntatori a membri di classe possono essere convertiti durante l'assegnazione, l'inizializzazione, il confronto e altre espressioni. In questa sezione vengono descritte le seguenti conversioni puntatore-a-membro:

### <a name="pointer-to-base-class-member"></a>Puntatore a un membro della classe base

Un puntatore a un membro di una classe base può essere convertito in un puntatore a un membro di una classe derivata, quando sono soddisfatte le condizioni seguenti:

- La conversione inversa, dal puntatore a una classe derivata al puntatore della classe base, è accessibile.

- La classe derivata non eredita virtualmente dalla classe base.

Se l'operando sinistro è un puntatore a un membro, l'operando destro deve essere del tipo di puntatore a membro oppure un'espressione costante che restituisce 0. Questa assegnazione è valida solo nei casi seguenti:

- L'operando destro è un puntatore a un membro della stessa classe dell'operando sinistro.

- L'operando sinistro è un puntatore a un membro di una classe derivata pubblicamente e inequivocabilmente derivante dalla classe dell'operando destro.

### <a name="null-pointer-to-member-conversions"></a>puntatore null a conversioni di membri

Un'espressione costante integrale che restituisce zero viene convertita in un puntatore null. Questo puntatore viene sempre confrontato con un puntatore a un oggetto o a una funzione valida. Un'eccezione è costituita da puntatori a oggetti basati, che possono avere lo stesso offset e puntare ancora a oggetti diversi.

Nel codice seguente viene illustrata la definizione di un puntatore al membro `i` nella classe `A`. Il puntatore `pai` viene inizializzato a 0, che è il puntatore null.

```cpp
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

[C++riferimenti per il linguaggio](../cpp/cpp-language-reference.md)

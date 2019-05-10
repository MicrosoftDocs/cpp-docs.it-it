---
title: decltype  (C++)
ms.date: 11/04/2016
f1_keywords:
- decltype_cpp
helpviewer_keywords:
- operators [C++], decltype
- decltype operator
- operators [C++], type of an expression
- operators [C++], deduce expression type
ms.assetid: 6dcf8888-8196-4f13-af50-51e3797255d4
ms.openlocfilehash: 0a4e9eb015df056dfe2a35da18cfa50875ced432
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65222461"
---
# <a name="decltype--c"></a>decltype  (C++)

Il **decltype** identificatore di tipo restituisce il tipo di un'espressione specificata. Il **decltype** identificatore di tipo con il [parola chiave auto](../cpp/auto-cpp.md), risulta principalmente utile per gli sviluppatori che scrivono librerie di modelli. Uso **automatica** e **decltype** per dichiarare una funzione di modello restituiscono il cui tipo dipende dai tipi dei relativi argomenti di modello. In alternativa, usare **automatica** e **decltype** per dichiarare una funzione di modello che esegue il wrapping di una chiamata a un'altra funzione e quindi restituisce il tipo restituito della funzione con wrapping.

## <a name="syntax"></a>Sintassi

```
decltype( expression )
```

### <a name="parameters"></a>Parametri

|Parametro|Descrizione|
|---------------|-----------------|
|*expression*|Un'espressione. Per altre informazioni, vedere [espressioni](../cpp/expressions-cpp.md).|

## <a name="return-value"></a>Valore restituito

Il tipo dei *espressione* parametro.

## <a name="remarks"></a>Note

Il **decltype** identificatore di tipo è supportato in Visual Studio 2010 o versioni successive e può essere utilizzato con codice nativo o gestito. `decltype(auto)` (C++14) è supportato in Visual Studio 2015 e versioni successive.

Il compilatore utilizza le regole seguenti per determinare il tipo dei *espressione* parametro.

- Se il *espressione* parametro è un identificatore o una [l'accesso ai membri di classe](../cpp/member-access-operators-dot-and.md), `decltype(expression)` è il tipo di entità denominato da *espressione*. Se non vi è alcuna entità o le *espressione* parametro denomina un set di funzioni in overload, il compilatore genera un messaggio di errore.

- Se il *espressione* parametro è una chiamata a una funzione o una funzione operatore di overload, `decltype(expression)` è il tipo restituito della funzione. Le parentesi di un operatore di overload vengono ignorate.

- Se il *espressione* parametro è un [rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md), `decltype(expression)` è il tipo di *espressione*. Se il *espressione* parametro è un [lvalue](../cpp/lvalues-and-rvalues-visual-cpp.md), `decltype(expression)` è un [riferimento lvalue](../cpp/lvalue-reference-declarator-amp.md) al tipo di *espressione*.

Esempio di codice seguente illustra alcuni usi del **decltype** identificatore di tipo. Innanzitutto, si supponga di aver codificato le istruzioni seguenti.

```cpp
int var;
const int&& fx();
struct A { double x; }
const A* a = new A();
```

Successivamente, esaminare i tipi restituiti dalle quattro **decltype** le istruzioni nella tabella seguente.

|Istruzione|Tipo|Note|
|---------------|----------|-----------|
|`decltype(fx());`|`const int&&`|Un' [riferimento rvalue](../cpp/rvalue-reference-declarator-amp-amp.md) a un **const int**.|
|`decltype(var);`|**int**|Il tipo di variabile `var`:|
|`decltype(a->x);`|**double**|Il tipo di accesso ai membri.|
|`decltype((a->x));`|`const double&`|Le parentesi interne determinano la valutazione dell'istruzione come un'espressione anziché come un accesso ai membri. E poiché `a` viene dichiarato come un `const` puntatore, il tipo è un riferimento a **doppia const**.|

## <a name="decltype-and-auto"></a>Decltype e auto

In c++14 è possibile usare `decltype(auto)` con alcun tipo restituito finale per dichiarare una funzione di modello il cui tipo restituito dipende dai tipi dei relativi argomenti di modello.

In c++11, è possibile usare la **decltype** digitare l'identificatore in un tipo restituito finale, insieme al **automatico** (parola chiave), per dichiarare una funzione di modello il cui tipo restituito dipende dai tipi del relativo modello argomenti. Si consideri il seguente esempio di codice in cui il tipo restituito della funzione di modello dipende dai tipi di argomenti di modello. Nell'esempio di codice, il *sconosciuto* segnaposto indica che il tipo restituito non può essere specificato.

```cpp
template<typename T, typename U>
UNKNOWN func(T&& t, U&& u){ return t + u; };
```

L'introduzione del **decltype** identificatore di tipo consente agli sviluppatori di ottenere il tipo dell'espressione che restituisce la funzione del modello. Usare la *sintassi di dichiarazione di funzione alternativa* che viene visualizzato in un secondo momento, il **automatico** (parola chiave) e il **decltype** digitare l'identificatore per dichiarare un  *ritardo-specificato* tipo restituito. Il tipo restituito ritardo-specificato viene determinato quando la dichiarazione viene compilata, anziché quando viene codificata.

Il prototipo indicato di seguito mostra la sintassi per la dichiarazione di una funzione alternativa. Si noti che il **const** e **volatile** qualificatori e il **throw** [specifica di eccezione](../cpp/exception-specifications-throw-cpp.md) sono facoltativi. Il *function_body* segnaposto rappresenta un'istruzione composta che specifica ciò che svolge la funzione. Come procedura consigliata, di codifica ottimale il *espressione* segnaposto nel **decltype** istruzione deve corrispondere all'espressione specificata dal **restituire** istruzione, se presente, nel *function_body*.

**Auto** *nome_funzione* **(** *parametri*<sub>opt</sub> **)**  **const**<sub>opt</sub> **volatile**<sub>opt</sub> **->** **decltype (** *espressione* **)** **throw**<sub>opt</sub> **{** *function_body* **};**

Nel seguente esempio di codice il tipo restituito ritardo-specificato della funzione di modello `myFunc` dipende dai tipi di argomenti di modello `t` e `u`. Come procedura di codifica ottimale, l'esempio di codice usa anche i riferimenti rvalue e i `forward` modello di funzione, che supporta *inoltro perfetto*. Per altre informazioni, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

```cpp
//C++11
template<typename T, typename U>
auto myFunc(T&& t, U&& u) -> decltype (forward<T>(t) + forward<U>(u))
        { return forward<T>(t) + forward<U>(u); };

//C++14
template<typename T, typename U>
decltype(auto) myFunc(T&& t, U&& u)
        { return forward<T>(t) + forward<U>(u); };
```

## <a name="decltype-and-forwarding-functions-c11"></a>Decltype e funzioni di inoltro (C++11)

Le funzioni di inoltro eseguono il wrapping delle chiamate ad altre funzioni. Si pensi a un modello di funzione che inoltra i relativi argomenti o i risultati di un'espressione che include tali argomenti, a un'altra funzione. Inoltre, la funzione di inoltro restituisce il risultato della chiamata all'altra funzione. In questo scenario il tipo restituito della funzione di inoltro deve essere uguale al tipo restituito della funzione di cui è stato eseguito il wrapping.

In questo scenario, non è possibile scrivere un'espressione di tipo appropriata senza il **decltype** identificatore di tipo. Il **decltype** identificatore di tipo consente le funzioni di inoltro generiche perché non perde le informazioni necessarie sul fatto che una funzione restituisce un tipo di riferimento. Per un esempio di codice di una funzione di inoltro, vedere l'esempio della funzione di modello `myFunc` precedente.

## <a name="example"></a>Esempio

Nell'esempio di codice seguente viene dichiarato il tipo restituito ritardo-specificato della funzione di modello `Plus()`. Il `Plus` funzione elabora i due operandi con il **operatore +** rapporto di overload. Di conseguenza, l'interpretazione dell'operatore più (+) e il tipo restituito della funzione `Plus` dipendono dai tipi di argomenti della funzione.

```cpp
// decltype_1.cpp
// compile with: cl /EHsc decltype_1.cpp

#include <iostream>
#include <string>
#include <utility>
#include <iomanip>

using namespace std;

template<typename T1, typename T2>
auto Plus(T1&& t1, T2&& t2) ->
   decltype(forward<T1>(t1) + forward<T2>(t2))
{
   return forward<T1>(t1) + forward<T2>(t2);
}

class X
{
   friend X operator+(const X& x1, const X& x2)
   {
      return X(x1.m_data + x2.m_data);
   }

public:
   X(int data) : m_data(data) {}
   int Dump() const { return m_data;}
private:
   int m_data;
};

int main()
{
   // Integer
   int i = 4;
   cout <<
      "Plus(i, 9) = " <<
      Plus(i, 9) << endl;

   // Floating point
   float dx = 4.0;
   float dy = 9.5;
   cout <<
      setprecision(3) <<
      "Plus(dx, dy) = " <<
      Plus(dx, dy) << endl;

   // String
   string hello = "Hello, ";
   string world = "world!";
   cout << Plus(hello, world) << endl;

   // Custom type
   X x1(20);
   X x2(22);
   X x3 = Plus(x1, x2);
   cout <<
      "x3.Dump() = " <<
      x3.Dump() << endl;
}
```

```Output
Plus(i, 9) = 13
Plus(dx, dy) = 13.5
Hello, world!
x3.Dump() = 42
```

## <a name="example"></a>Esempio

**Visual Studio 2017 e versioni successiva:** Il compilatore analizza argomenti decltype quando i modelli vengono dichiarati piuttosto che creare un'istanza. Di conseguenza, se viene rilevata una specializzazione non dipendente nell'argomento decltype, non verrà rinviata all'ora di creazione di un'istanza ma verrà elaborata immediatamente e sarà possibile diagnosticare eventuali errori risultanti in quel momento.

Nell'esempio seguente viene illustrato questo tipo di errore del compilatore che viene generato al momento della dichiarazione:

```cpp
#include <utility>
template <class T, class ReturnT, class... ArgsT> class IsCallable
{
public:
   struct BadType {};
   template <class U>
   static decltype(std::declval<T>()(std::declval<ArgsT>()...)) Test(int); //C2064. Should be declval<U>
   template <class U>
   static BadType Test(...);
   static constexpr bool value = std::is_convertible<decltype(Test<T>(0)), ReturnT>::value;
};

constexpr bool test1 = IsCallable<int(), int>::value;
static_assert(test1, "PASS1");
constexpr bool test2 = !IsCallable<int*, int>::value;
static_assert(test2, "PASS2");
```

## <a name="requirements"></a>Requisiti

Visual Studio 2010 o versioni successive.

`decltype(auto)` richiede Visual Studio 2015 o versione successiva.
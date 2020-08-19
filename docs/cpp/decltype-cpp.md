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
ms.openlocfilehash: 270500d2353c2d14a23ddad378521488cdec136f
ms.sourcegitcommit: 1839405b97036891b6e4d37c99def044d6f37eff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/18/2020
ms.locfileid: "88561388"
---
# <a name="decltype--c"></a>decltype  (C++)

L' **`decltype`** identificatore di tipo produce il tipo di un'espressione specificata. L' **`decltype`** identificatore di tipo, insieme alla [ `auto` parola chiave](../cpp/auto-cpp.md), è utile principalmente per gli sviluppatori che scrivono librerie di modelli. Usare **`auto`** e **`decltype`** per dichiarare una funzione di modello il cui tipo restituito dipende dai tipi dei relativi argomenti di modello. In alternativa, usare **`auto`** e **`decltype`** per dichiarare una funzione di modello che esegue il wrapping di una chiamata a un'altra funzione e quindi restituisce il tipo restituito della funzione di cui è stato eseguito il wrapping.

## <a name="syntax"></a>Sintassi

> **`decltype(`***espressione***`)`**

### <a name="parameters"></a>Parametri

*espressione*\
Espressione. Per ulteriori informazioni, vedere [espressioni](../cpp/expressions-cpp.md).

## <a name="return-value"></a>Valore restituito

Tipo del parametro dell' *espressione* .

## <a name="remarks"></a>Osservazioni

L' **`decltype`** identificatore di tipo è supportato in Visual Studio 2010 o versioni successive e può essere usato con codice nativo o gestito. `decltype(auto)` (C++14) è supportato in Visual Studio 2015 e versioni successive.

Il compilatore utilizza le regole seguenti per determinare il tipo del parametro dell' *espressione* .

- Se il parametro *Expression* è un identificatore o un [accesso ai membri di classe](../cpp/member-access-operators-dot-and.md), `decltype(expression)` è il tipo dell'entità denominata da *Expression*. Se non esiste alcuna entità di questo tipo o il parametro dell' *espressione* denomina un set di funzioni in overload, il compilatore genera un messaggio di errore.

- Se il parametro *Expression* è una chiamata a una funzione o a una funzione dell'operatore di overload, `decltype(expression)` è il tipo restituito della funzione. Le parentesi di un operatore di overload vengono ignorate.

- Se il parametro *Expression* è un [rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md), `decltype(expression)` è il tipo di *espressione*. Se il parametro *Expression* è un [lvalue](../cpp/lvalues-and-rvalues-visual-cpp.md), `decltype(expression)` è un [riferimento lvalue](../cpp/lvalue-reference-declarator-amp.md) al tipo di *espressione*.

Nell'esempio di codice riportato di seguito vengono illustrati alcuni utilizzi dell' **`decltype`** identificatore di tipo. Innanzitutto, si supponga di aver codificato le istruzioni seguenti.

```cpp
int var;
const int&& fx();
struct A { double x; }
const A* a = new A();
```

Esaminare quindi i tipi restituiti dalle quattro istruzioni riportate **`decltype`** nella tabella seguente.

|.|Type|Note|
|---------------|----------|-----------|
|`decltype(fx());`|`const int&&`|[Riferimento rvalue](../cpp/rvalue-reference-declarator-amp-amp.md) a un oggetto **`const int`** .|
|`decltype(var);`|**`int`**|Il tipo di variabile `var`:|
|`decltype(a->x);`|**`double`**|Il tipo di accesso ai membri.|
|`decltype((a->x));`|`const double&`|Le parentesi interne determinano la valutazione dell'istruzione come un'espressione anziché come un accesso ai membri. Poiché `a` è dichiarato come **`const`** puntatore, il tipo è un riferimento a **`const double`** .|

## <a name="decltype-and-auto"></a>Decltype e auto

In C++ 14 è possibile usare senza `decltype(auto)` tipo restituito finale per dichiarare una funzione di modello il cui tipo restituito dipende dai tipi dei relativi argomenti di modello.

In C++ 11, è possibile usare l' **`decltype`** identificatore di tipo in un tipo restituito finale, insieme alla **`auto`** parola chiave, per dichiarare una funzione di modello il cui tipo restituito dipende dai tipi dei relativi argomenti di modello. Si consideri il seguente esempio di codice in cui il tipo restituito della funzione di modello dipende dai tipi di argomenti di modello. Nell'esempio di codice il segnaposto *sconosciuto* indica che non è possibile specificare il tipo restituito.

```cpp
template<typename T, typename U>
UNKNOWN func(T&& t, U&& u){ return t + u; };
```

L'introduzione dell' **`decltype`** identificatore di tipo consente a uno sviluppatore di ottenere il tipo dell'espressione restituita dalla funzione del modello. Usare la *sintassi di dichiarazione di funzione alternativa* mostrata in seguito, la **`auto`** parola chiave e l' **`decltype`** identificatore di tipo per dichiarare un tipo restituito *specificato in ritardo* . Il tipo restituito ritardo-specificato viene determinato quando la dichiarazione viene compilata, anziché quando viene codificata.

Il prototipo indicato di seguito mostra la sintassi per la dichiarazione di una funzione alternativa. Si noti che **`const`** i **`volatile`** qualificatori e e la **`throw`** [specifica dell'eccezione](../cpp/exception-specifications-throw-cpp.md) sono facoltativi. Il segnaposto *function_body* rappresenta un'istruzione composta che specifica le operazioni svolte dalla funzione. Come procedura di codifica ottimale, il segnaposto dell' *espressione* nell' **`decltype`** istruzione deve corrispondere all'espressione specificata dall' **`return`** istruzione, se presente, nel *function_body*.

**`auto`***function_name* **`(`** *parametri*<sub>opt opt</sub> opt esplicito **`)`** **`const`** <sub>opt</sub> **`volatile`** <sub>opt</sub> **`->`** **`decltype(`** *expression* **`)`** **`noexcept`** <sub>opt</sub> **`{`** *function_body***`};`**

Nel seguente esempio di codice il tipo restituito ritardo-specificato della funzione di modello `myFunc` dipende dai tipi di argomenti di modello `t` e `u`. Come procedura di codifica ottimale, nell'esempio di codice vengono anche utilizzati i riferimenti rvalue e il `forward` modello di funzione, che supportano l' *invio perfetto*. Per altre informazioni, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

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

In questo scenario non è possibile scrivere un'espressione di tipo appropriata senza l' **`decltype`** identificatore di tipo. L' **`decltype`** identificatore di tipo Abilita funzioni di inoltri generiche perché non perde le informazioni necessarie sul fatto che una funzione restituisca un tipo di riferimento. Per un esempio di codice di una funzione di inoltro, vedere l'esempio della funzione di modello `myFunc` precedente.

## <a name="example"></a>Esempio

Nell'esempio di codice seguente viene dichiarato il tipo restituito ritardo-specificato della funzione di modello `Plus()`. La `Plus` funzione elabora i due operandi con l' **`operator+`** Overload. Di conseguenza, l'interpretazione dell'operatore di addizione ( **`+`** ) e il tipo restituito della `Plus` funzione dipendono dai tipi degli argomenti della funzione.

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

**Visual Studio 2017 e versioni successive:** Il compilatore analizza gli **`decltype`** argomenti quando vengono dichiarati i modelli anziché creare un'istanza. Di conseguenza, se nell'argomento viene individuata una specializzazione non dipendente **`decltype`** , non verrà rinviata all'ora di creazione dell'istanza e verrà elaborata immediatamente e gli eventuali errori risultanti verranno diagnosticati in quel momento.

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

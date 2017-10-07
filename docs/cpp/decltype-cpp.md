---
title: decltype (C++) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- decltype_cpp
dev_langs:
- C++
helpviewer_keywords:
- operators [C++], decltype
- decltype operator
- operators [C++], type of an expression
- operators [C++], deduce expression type
ms.assetid: 6dcf8888-8196-4f13-af50-51e3797255d4
caps.latest.revision: 14
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: HT
ms.sourcegitcommit: 6ffef5f51e57cf36d5984bfc43d023abc8bc5c62
ms.openlocfilehash: 1f07590275ca6e2b65d6f3d58bcea825acc71f73
ms.contentlocale: it-it
ms.lasthandoff: 09/25/2017

---
# <a name="decltype--c"></a>decltype (C++)
L'identificatore di tipo `decltype` restituisce il tipo di un'espressione specificata. Il `decltype` identificatore di tipo con il [parola chiave auto](../cpp/auto-cpp.md), è utile principalmente per gli sviluppatori che scrivono librerie di modelli. È, ad esempio, possibile usare le parole chiave `auto` e `decltype` per dichiarare una funzione di modello il cui tipo restituito dipende dai tipi dei relativi argomenti di modello. In alternativa, è possibile usare le parole chiave `auto` e `decltype` per dichiarare una funzione di modello che esegua il wrapping di una chiamata a un'altra funzione e che quindi restituisca il tipo restituito della funzione di cui è stato eseguito il wrapping.  
  
## <a name="syntax"></a>Sintassi  
  
```  
decltype( expression )  
```  
  
### <a name="parameters"></a>Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`expression`|Un'espressione. Per ulteriori informazioni, vedere [espressioni](../cpp/expressions-cpp.md).|  
  
## <a name="return-value"></a>Valore restituito  
 Tipo del parametro `expression`.  
  
## <a name="remarks"></a>Note  
 L'identificatore di tipo `decltype` è supportato in Visual C++ 2010 o versioni successive e può essere usato sia con il codice nativo che con il codice gestito. `decltype(auto)` (C++14) è supportato in Visual Studio 2015 e versioni successive.  
  
 Per determinare il tipo del parametro `expression`, il compilatore usa le regole elencate di seguito.  
  
-   Se il `expression` parametro è un identificatore o un [accesso a membro di classe](../cpp/member-access-operators-dot-and.md), `decltype(expression)` è il tipo di entità denominato da `expression`. In assenza di tale entità oppure se il parametro `expression` denomina un set di funzioni in overload, il compilatore genera un messaggio di errore.  
  
-   Se il `expression` parametro è una chiamata a una funzione o una funzione di operatore di overload, `decltype(expression)` è il tipo restituito della funzione. Le parentesi di un operatore di overload vengono ignorate.  
  
-   Se il `expression` parametro è un [rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md), `decltype(expression)` è il tipo di `expression`. Se il `expression` parametro è un [lvalue](../cpp/lvalues-and-rvalues-visual-cpp.md), `decltype(expression)` è un [riferimento lvalue](../cpp/lvalue-reference-declarator-amp.md) al tipo di `expression`.  
  
 Nell'esempio di codice seguente sono illustrati alcuni utilizzi dell'identificatore di tipo `decltype`. Innanzitutto, si supponga di aver codificato le istruzioni seguenti.  
  
```cpp  
int var;  
const int&& fx();   
struct A { double x; }  
const A* a = new A();  
```  
  
 Quindi, esaminare i tipi restituiti dalle quattro istruzioni `decltype` nella tabella seguente.  
  
|Istruzione|Tipo|Note|  
|---------------|----------|-----------|  
|`decltype(fx());`|`const int&&`|Un [riferimento rvalue](../cpp/rvalue-reference-declarator-amp-amp.md) per un `const int`.|  
|`decltype(var);`|`int`|Il tipo di variabile `var`:|  
|`decltype(a->x);`|`double`|Il tipo di accesso ai membri.|  
|`decltype((a->x));`|`const double&`|Le parentesi interne determinano la valutazione dell'istruzione come un'espressione anziché come un accesso ai membri. E poiché `a` viene dichiarato come un puntatore `const`, il tipo è un riferimento a `const double`.|  
  
## <a name="decltype-and-auto"></a>Decltype e auto  
 In C++ 14 è possibile utilizzare `decltype(auto)` senza tipo restituito finale per dichiarare una funzione di modello il cui tipo restituito dipende dai tipi dei relativi argomenti di modello.  
  
 In C++11 è possibile usare l'identificatore di tipo `decltype` in un tipo restituito finale, insieme alla parola chiave `auto`, per dichiarare una funzione di modello il cui tipo restituito dipende dai tipi dei relativi argomenti di modello. Si consideri il seguente esempio di codice in cui il tipo restituito della funzione di modello dipende dai tipi di argomenti di modello. Nell'esempio di codice, il *sconosciuto* segnaposto indica che il tipo restituito non può essere specificato.  
  
```cpp  
template<typename T, typename U>  
UNKNOWN func(T&& t, U&& u){ return t + u; };   
```  
  
 L'introduzione dell'identificatore di tipo `decltype` consente a uno sviluppatore di ottenere il tipo dell'espressione restituito dalla funzione di modello. Utilizzare il *sintassi di dichiarazione di funzione alternativo* che viene visualizzato in un secondo momento, il `auto` (parola chiave) e `decltype` digitare l'identificatore per dichiarare un *specificato in ritardo* tipo restituito. Il tipo restituito ritardo-specificato viene determinato quando la dichiarazione viene compilata, anziché quando viene codificata.  
  
 Il prototipo indicato di seguito mostra la sintassi per la dichiarazione di una funzione alternativa. Si noti che il `const` e `volatile` qualificatori e `throw` [specifica di eccezione](../cpp/exception-specifications-throw-cpp.md) sono facoltativi. Il *function_body* segnaposto rappresenta un'istruzione composta che specifica ciò che svolge la funzione. Come procedura di codifica, ottimale il *espressione* segnaposto nel `decltype` istruzione deve corrispondere all'espressione specificata per il `return` istruzione, se presente, nel *function_body*.  
  
 **Auto** *nome_funzione* **(** *parametri*<sub>opt</sub> **)** ** const**<sub>opt</sub> **volatile**<sub>opt</sub> ** -> ** **decltype (** *espressione* **)** **generare**<sub>opt</sub> **{** *function_body* **};**  
  
 Nel seguente esempio di codice il tipo restituito ritardo-specificato della funzione di modello `myFunc` dipende dai tipi di argomenti di modello `t` e `u`. Come procedura di codifica ottimale, il codice di esempio Usa anche i riferimenti rvalue e `forward` modello di funzione, che supporta *un inoltro perfetto*. Per altre informazioni, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).  
  
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
  
 In questo scenario non è possibile scrivere un'espressione del tipo appropriata senza l'identificatore di tipo `decltype`. L'identificatore di tipo `decltype` attiva le funzioni di inoltro generiche perché non perde le informazioni necessarie sul fatto che una funzione restituisce un tipo di riferimento o meno. Per un esempio di codice di una funzione di inoltro, vedere l'esempio della funzione di modello `myFunc` precedente.  
  
## <a name="example"></a>Esempio  
 Nell'esempio di codice seguente viene dichiarato il tipo restituito ritardo-specificato della funzione di modello `Plus()`. La funzione `Plus` elabora i due relativi operandi con l'overload di `operator+`. Di conseguenza, l'interpretazione dell'operatore più (+) e il tipo restituito della funzione `Plus` dipendono dai tipi di argomenti della funzione.  
  
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
**Visual Studio 2017 e versioni successiva:** il compilatore analizza argomenti decltype quando i modelli vengono dichiarati anziché creare un'istanza. Di conseguenza, se viene rilevata una specializzazione non dipendente nell'argomento decltype, non verrà rinviata all'ora di creazione di un'istanza ma verrà elaborata immediatamente e sarà possibile diagnosticare eventuali errori risultanti in quel momento.

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
 Visual C++ 2010 o versioni successive.  
  
 `decltype(auto)`richiede Visual Studio 2015 o versione successiva.  
  


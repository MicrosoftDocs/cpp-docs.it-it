---
title: "decltype (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "decltype"
  - "decltype_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "decltype (operatore)"
  - "operatori [C++], decltype"
  - "operatori [C++], dedurre il tipo di espressione"
  - "operatori [C++], tipo di espressione"
ms.assetid: 6dcf8888-8196-4f13-af50-51e3797255d4
caps.latest.revision: 14
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# decltype (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'identificatore di tipo `decltype` restituisce il tipo di un'espressione specificata.  L'identificatore di tipo `decltype`, insieme alla parola chiave [auto](../cpp/auto-cpp.md), risulta principalmente utile per gli sviluppatori che scrivono librerie di modelli.  È, ad esempio, possibile usare le parole chiave `auto` e `decltype` per dichiarare una funzione di modello il cui tipo restituito dipende dai tipi dei relativi argomenti di modello.  In alternativa, è possibile usare le parole chiave `auto` e `decltype` per dichiarare una funzione di modello che esegua il wrapping di una chiamata a un'altra funzione e che quindi restituisca il tipo restituito della funzione di cui è stato eseguito il wrapping.  
  
## Sintassi  
  
```  
decltype( expression )  
```  
  
#### Parametri  
  
|Parametro|Descrizione|  
|---------------|-----------------|  
|`expression`|Un'espressione.  Per altre informazioni, vedere [Espressioni](../cpp/expressions-cpp.md).|  
  
## Valore restituito  
 Tipo del parametro `expression`.  
  
## Note  
 L'identificatore di tipo `decltype` è supportato in Visual C\+\+ 2010 o versioni successive e può essere usato sia con il codice nativo che con il codice gestito.  `decltype(auto)` \(C\+\+14\) è supportato in Visual Studio 2015 e versioni successive.  
  
 Per determinare il tipo del parametro `expression`, il compilatore usa le regole elencate di seguito.  
  
-   Se il parametro `expression` è un identificatore o un [accesso ai membri della classe](../cpp/member-access-operators-dot-and.md), `decltype(``expression``)` è il tipo di entità denominato da `expression`.  In assenza di tale entità oppure se il parametro `expression` denomina un set di funzioni in overload, il compilatore genera un messaggio di errore.  
  
-   Se il parametro `expression` è una chiamata a una funzione o a una funzione dell'operatore di overload, `decltype(``expression``)` è il tipo restituito della funzione.  Le parentesi di un operatore di overload vengono ignorate.  
  
-   Se il parametro `expression` è un [rvalue](../cpp/lvalues-and-rvalues-visual-cpp.md), `decltype(``expression``)` è il tipo di `expression`.  Se il parametro `expression` è un [lvalue](../cpp/lvalues-and-rvalues-visual-cpp.md), `decltype(``expression``)` è un [riferimento lvalue](../cpp/lvalue-reference-declarator-amp.md) al tipo di `expression`.  
  
 Nell'esempio di codice seguente sono illustrati alcuni utilizzi dell'identificatore di tipo `decltype`.  Innanzitutto, si supponga di aver codificato le istruzioni seguenti.  
  
```  
int var;  
const int&& fx();   
struct A { double x; }  
const A* a = new A();  
```  
  
 Quindi, esaminare i tipi restituiti dalle quattro istruzioni `decltype` nella tabella seguente.  
  
|Istruzione|Tipo|Note|  
|----------------|----------|----------|  
|`decltype(fx());`|`const int&&`|Un [riferimento rvalue](../cpp/rvalue-reference-declarator-amp-amp.md) a `const int`.|  
|`decltype(var);`|`int`|Il tipo di variabile `var`:|  
|`decltype(a->x);`|`double`|Il tipo di accesso ai membri.|  
|`decltype((a->x));`|`const double&`|Le parentesi interne determinano la valutazione dell'istruzione come un'espressione anziché come un accesso ai membri.  E poiché `a` viene dichiarato come un puntatore `const`, il tipo è un riferimento a `const double`.|  
  
## Decltype e auto  
 In C\+\+14 è possibile usare  `decltype(auto)` senza tipo restituito finale per dichiarare una funzione di modello il cui tipo restituito dipende dai tipi dei relativi argomenti di modello.  
  
 In C\+\+11 è possibile usare l'identificatore di tipo `decltype` in un tipo restituito finale, insieme alla parola chiave `auto`, per dichiarare una funzione di modello il cui tipo restituito dipende dai tipi dei relativi argomenti di modello.  Si consideri il seguente esempio di codice in cui il tipo restituito della funzione di modello dipende dai tipi di argomenti di modello.  Nell'esempio di codice il segnaposto *UNKNOWN*  indica che il tipo restituito non può essere specificato.  
  
```  
template<typename T, typename U>  
UNKNOWN func(T&& t, U&& u){ return t + u; };   
```  
  
 L'introduzione dell'identificatore di tipo `decltype` consente a uno sviluppatore di ottenere il tipo dell'espressione restituito dalla funzione di modello.  Usare la *sintassi alternativa della dichiarazione di funzione* illustrata più avanti, la parola chiave `auto` e l'identificatore di tipo `decltype` per dichiarare un tipo restituito *ritardo\-specificato*.  Il tipo restituito ritardo\-specificato viene determinato quando la dichiarazione viene compilata, anziché quando viene codificata.  
  
 Il prototipo indicato di seguito mostra la sintassi per la dichiarazione di una funzione alternativa.  Tenere presente che i qualificatori `const` e `volatile` nonché la `throw` [specifica dell'eccezione](../cpp/exception-specifications-throw-cpp.md) sono facoltativi.  Il segnaposto *function\_body* rappresenta un'istruzione composta che specifica le azioni eseguite dalla funzione.  Come procedura di codifica ottimale, il segnaposto *expression* nell'istruzione `decltype` deve corrispondere all'espressione specificata dall'istruzione `return`, se presente, in *function\_body*.  
  
 `auto` *function\_name*`(`*parameters*opt`)` `const`opt `volatile`opt `−>` `decltype(`*expression*`)` `throw`opt `{`*function\_body*`};`  
  
 Nel seguente esempio di codice il tipo restituito ritardo\-specificato della funzione di modello `myFunc` dipende dai tipi di argomenti di modello `t` e `u`.  Come procedura di codifica ottimale, nell'esempio di codice vengono anche usati i riferimenti rvalue e il modello di funzione `forward`, che supportano l'*inoltro perfetto*.  Per altre informazioni, vedere [Dichiaratore di riferimento rvalue: &&](../cpp/rvalue-reference-declarator-amp-amp.md).  
  
```  
//C++11  
 template<typename T, typename U>  
auto myFunc(T&& t, U&& u) -> decltype (forward<T>(t) + forward<U>(u))   
        { return forward<T>(t) + forward<U>(u); };  
  
//C++14  
template<typename T, typename U>  
decltype(auto) myFunc(T&& t, U&& u)   
        { return forward<T>(t) + forward<U>(u); };  
  
```  
  
## Decltype e funzioni di inoltro \(C\+\+11\)  
 Le funzioni di inoltro eseguono il wrapping delle chiamate ad altre funzioni.  Si pensi a un modello di funzione che inoltra i relativi argomenti o i risultati di un'espressione che include tali argomenti, a un'altra funzione.  Inoltre, la funzione di inoltro restituisce il risultato della chiamata all'altra funzione.  In questo scenario il tipo restituito della funzione di inoltro deve essere uguale al tipo restituito della funzione di cui è stato eseguito il wrapping.  
  
 In questo scenario non è possibile scrivere un'espressione del tipo appropriata senza l'identificatore di tipo `decltype`.  L'identificatore di tipo `decltype` attiva le funzioni di inoltro generiche perché non perde le informazioni necessarie sul fatto che una funzione restituisce un tipo di riferimento o meno.  Per un esempio di codice di una funzione di inoltro, vedere l'esempio della funzione di modello `myFunc` precedente.  
  
## Esempio  
 Nell'esempio di codice seguente viene dichiarato il tipo restituito ritardo\-specificato della funzione di modello `Plus()`.  La funzione `Plus` elabora i due relativi operandi con l'overload di `operator+`.  Di conseguenza, l'interpretazione dell'operatore più \(\+\) e il tipo restituito della funzione `Plus` dipendono dai tipi di argomenti della funzione.  
  
```  
// decltype_1.cpp  
// compile with: /EHsc  
//  
#include "stdafx.h"  
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
  
 **Output**  
  
 Di seguito sono riportati i risultati di questo esempio di codice.  
  
 13  
  
 13.5  
  
 Hello, world\!  
  
 42  
  
## Requisiti  
 Visual C\+\+ 2010 o versioni successive.  
  
 decltype\(auto\) richiede Visual Studio 2015 o versioni successive  
  
## Vedere anche  
 [\(NOTINBUILD\)Simple Type Names](http://msdn.microsoft.com/it-it/333f45cb-2c72-4d81-8e59-e346b05f55e3)
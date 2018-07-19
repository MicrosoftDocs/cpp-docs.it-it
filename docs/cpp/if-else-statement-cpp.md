---
title: Istruzione if-else (C++) | Microsoft Docs
ms.custom: ''
ms.date: 07/17/2017
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- else_cpp
- if_cpp
dev_langs:
- C++
helpviewer_keywords:
- if keyword [C++]
- else keyword [C++]
- if keyword [C++], if-else
ms.assetid: f8c45cde-6bce-42ae-81db-426b3dbd4caa
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 42174837f0f60f9a4e3ba9f19702210d6d34ccca
ms.sourcegitcommit: 1fd1eb11f65f2999dfd93a2d924390ed0a0901ed
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/10/2018
ms.locfileid: "37943158"
---
# <a name="if-else-statement-c"></a>Istruzione if-else (C++)
Controlla la creazione di un ramo condizionale. Le istruzioni nel *blocco if* vengono eseguiti solo se il *espressione if* restituisce un valore diverso da zero (o TRUE). Se il valore di *espressione* è diverso da zero, *statement1* e vengono eseguite le altre istruzioni nel blocco e l'altro blocco, se presente, viene ignorato. Se il valore di *espressione* è uguale a zero, quindi il blocco se viene ignorato e l'altro blocco, se presente, viene eseguito. Sono espressioni che restituiscono diverso da zero
- true
- un puntatore non null,
- qualsiasi valore diverso da zero aritmetico, o 
- tipo di un tipo di classe che definisce una conversione non ambigua a un'operazione aritmetica, boolean o puntatore. (Per informazioni sulle conversioni, vedere [conversioni Standard](../cpp/standard-conversions.md).)   
  
## <a name="syntax"></a>Sintassi  
  
```  
  
if ( expression )  
{
   statement1;
   ...  
}
else  // optional
{
   statement2;
   ...
} 

// Visual Studio 2017 version 15.3 and later:
if ( initialization; expression )  
{
   statement1;
   ...  
}
else  // optional
{
   statement2;
   ...
}  

// Visual Studio 2017 version 15.3 and later:
if constexpr (expression)
{
    statement1;
    ...
}
else  // optional
{
   statement2;
   ...
} 
```  

## <a name="example"></a>Esempio  

```cpp  
// if_else_statement.cpp  
#include <iostream>

using namespace std;

class C
{
    public:
    void do_somthing(){}
};
void init(C){}
bool is_true() { return true; }
int x = 10;

int main()
{
    if (is_true())
    {
        cout << "b is true!\n";  // executed
    }
    else
    {
        cout << "b is false!\n";
    }

  // no else statement
    if (x == 10)
    {
        x = 0; 
    }
    
  
    C* c;
  init(c);
    if (c)
    {
        c->do_something();
    }
    else
    {
        cout << "c is null!\n";
    }
}
```  
## <a name="if-statement-with-an-initializer"></a>Se l'istruzione con un inizializzatore
**Visual Studio 2017 versione 15.3 e versioni successive** (disponibile con [/std: c + + 17](../build/reference/std-specify-language-standard-version.md)): un' **se** istruzione può inoltre contenere un'espressione che dichiara e Inizializza una variabile denominata. Utilizzare questa forma di istruzione if quando la variabile è necessaria solo all'interno dell'ambito del blocco di if. 

```cpp
## Example  
#include <iostream>
#include <mutex>
#include <map>
#include <string>
#include <algorithm>


using namespace std;

map<int, string> m;
mutex mx;
bool shared_flag; // guarded by mx
void unsafe_operation() {}

int main()
{

    if (auto it = m.find(10); it != m.end())
    {
        cout << it->second;
        return 0;
    }

    if (char buf[10]; fgets(buf, 10, stdin))
    {
        m[0] += buf;
    }

    if (lock_guard<mutex> lock(mx); shared_flag)
    {
        unsafe_operation();
        shared_flag = false;
    }


    string s{ "if" };
    if (auto keywords = { "if", "for", "while" }; any_of(keywords.begin(), keywords.end(), [&s](const char* kw) { return s == kw; }))
    {
        cout << "Error! Token must not be a keyword\n";
    }

}
```

 In tutte le forme del **se** istruzione *espressione*, che possono avere qualsiasi valore salvo una struttura, viene valutata, inclusi tutti gli effetti collaterali. Controllo passa dal **se** istruzione all'istruzione successiva nel programma, a meno che uno del *istruzione*s contiene una [interruzione](../cpp/break-statement-cpp.md), [continuare](../cpp/continue-statement-cpp.md), oppure [goto](../cpp/goto-statement-cpp.md).  
  
 Il **else** clausola di un `if...else` istruzione è associata a più vicina precedente **se** istruzione nello stesso ambito che non ha un corrispondente **else** istruzione.   

## <a name="constexpr-if-statements"></a>constexpr se le istruzioni
**Visual Studio 2017 versione 15.3 e versioni successive** (disponibile con [/std: c + + 17](../build/reference/std-specify-language-standard-version.md)): nei modelli di funzione, è possibile usare un `constexpr if` istruzione per prendere decisioni di diramazione in fase di compilazione senza dovere ricorrere al multiplo overload della funzione. Ad esempio, è possibile scrivere una singola funzione tale parametro handle decompressione (non è necessario alcun overload di parametro da zero): 

```cpp
template <class T, class... Rest>
void f(T&& t, Rest&&... r)
{
// handle t
   do_something(t);

   // handle r conditionally
   constexpr if (sizeof...(r)) 
   {
      
      f(r...); 
   }
   else
   {
       g(r...);
   }
}
```

  
 
## <a name="see-also"></a>Vedere anche  
 [Istruzioni di selezione](../cpp/selection-statements-cpp.md)   
 [Parole chiave](../cpp/keywords-cpp.md)   
 [Istruzione switch (C++)](../cpp/switch-statement-cpp.md)
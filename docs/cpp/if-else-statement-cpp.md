---
title: Istruzione if-else (C++) | Documenti Microsoft
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
ms.openlocfilehash: 8de2511096766cc4852c1c612eccb7dc65713218
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="if-else-statement-c"></a>Istruzione if-else (C++)
Controlla la creazione di un ramo condizionale. Istruzioni di *blocco se* vengono eseguiti solo se il *se espressione* restituisce un valore diverso da zero (o `true`). Se il valore di *espressione* è diverso da zero, *statement1* e vengono eseguite le altre istruzioni nel blocco e l'altro blocco, se presente, viene ignorato. Se il valore di *espressione* è zero, quindi il blocco se viene ignorato ed else-blocco, se presente, viene eseguito. Le espressioni che restituiscono diverso da zero sono
- `true`
- un puntatore non null,
- qualsiasi valore aritmetico diverso da zero, o 
- Digitare un tipo di classe che definisce una conversione non ambigua per un'operazione aritmetica, boolean o puntatore. (Per informazioni sulle conversioni, vedere [conversioni Standard](../cpp/standard-conversions.md).)   
  
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
```  
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
**Visual Studio 2017 15.3 e versioni successive** (disponibile con [/std:c + + 17](../build/reference/std-specify-language-standard-version.md)): un **se** istruzione può inoltre contenere un'espressione che dichiara e Inizializza una variabile denominata. Utilizzare questa forma di istruzione if quando la variabile è necessario solo all'interno dell'ambito del blocco di if. 

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

 In tutti i form del **se** istruzione *espressione*, che possono avere qualsiasi valore salvo una struttura, viene valutata, inclusi tutti gli effetti collaterali. Controllo passa dal **se** istruzione all'istruzione successiva nel programma, a meno che uno del *istruzione*s contiene un [interruzione](../cpp/break-statement-cpp.md), [continuare](../cpp/continue-statement-cpp.md), o [goto](../cpp/goto-statement-cpp.md).  
  
 Il **else** clausola di un `if...else` istruzione è associata a più vicina precedente **se** nello stesso ambito che non esiste un corrispondente istruzione **else** istruzione.   

## <a name="constexpr-if-statements"></a>constexpr se le istruzioni
**Visual Studio 2017 15.3 e versioni successive** (disponibile con [/std:c + + 17](../build/reference/std-specify-language-standard-version.md)): nei modelli di funzione, è possibile utilizzare un **constexpr se** istruzione per prendere decisioni di diramazione in fase di compilazione senza la necessità di ricorrere al più overload di funzione. Ad esempio, è possibile scrivere una singola funzione tale parametro handle disimballaggio (non è necessario alcun overload di parametro da zero): 

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
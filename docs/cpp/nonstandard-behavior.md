---
title: Comportamento non standard | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords:
- compatibility and compliance, nonstandard behavior
- Microsoft-specific, compiler behavior
- nonstandard behavior, compliance and compatibility
ms.assetid: a57dea27-dc79-4f64-8a83-017e84841773
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 73b60bbdbd38738f8cb5d127b464b14465de413b
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="nonstandard-behavior"></a>Comportamento non standard
Negli sezioni seguenti sono elencate alcune parti in cui l'implementazione Visual C++ di C++ non si conforma allo standard C++. I numeri delle sezioni indicati di seguito fanno riferimento ai numeri delle sezioni nello standard C++ 11 (ISO/IEC 14882:2011(E)).  
  
 L'elenco dei limiti del compilatore che differiscono da quelli definiti nello standard C++ è specificato in [limiti del compilatore](../cpp/compiler-limits.md).  
  
## <a name="covariant-return-types"></a>Tipi restituiti covarianti  
 Le classi base virtuali non sono supportate come tipi restituiti covarianti quando la funzione virtuale dispone di un numero variabile di argomenti. Questo non è conforme alla sezione 10.3, paragrafo 7 della specifica C++ ISO. L'esempio seguente non viene compilato, un errore del compilatore [C2688](../error-messages/compiler-errors-2/compiler-error-c2688.md)  
  
```cpp  
// CovariantReturn.cpp  
class A   
{  
   virtual A* f(int c, ...);   // remove ...  
};  
  
class B : virtual A  
{  
   B* f(int c, ...);   // C2688 remove ...  
};  
```  
  
## <a name="binding-nondependent-names-in-templates"></a>Associazione di nomi non dipendenti nei modelli  
 Il compilatore Visual C++ non supporta attualmente i nomi di associazione non dipendenti nell'analisi iniziale di un modello. Questo non è conforme alla sezione 16.6.3 della specifica C++ ISO. Ne possono conseguire overload dichiarati dopo il modello, ma prima della creazione di istanze del modello stesso.  
  
```cpp  
#include <iostream>  
using namespace std;  
  
namespace N {  
   void f(int) { cout << "f(int)" << endl;}  
}  
  
template <class T> void g(T) {  
    N::f('a');   // calls f(char), should call f(int)  
}  
  
namespace N {  
    void f(char) { cout << "f(char)" << endl;}  
}  
  
int main() {  
    g('c');  
}  
// Output: f(char)  
  
```  
  
## <a name="function-exception-specifiers"></a>Identificatori di eccezioni di funzione.  
 Gli identificatori di eccezioni di funzione diversi da `throw()` vengono analizzati, ma non utilizzati. Questo non è conforme alla sezione 15.4 della specifica ISO C++. Ad esempio:  
  
```cpp  
void f() throw(int); // parsed but not used  
void g() throw();    // parsed and used  
```  
  
 Per ulteriori informazioni sulle specifiche di eccezione, vedere [specifiche di eccezione](../cpp/exception-specifications-throw-cpp.md).  
  
## <a name="chartraitseof"></a>char_traits::eof()  
 Gli stati standard C++ che [char_traits:: EOF](../standard-library/char-traits-struct.md#eof) non devono corrispondere a un oggetto valido `char_type` valore. Il compilatore di Visual C++ applica questo vincolo al tipo `char`, ma non al tipo `wchar_t`. Questo non è conforme al requisito indicato nella Tabella 62 della sezione 12.1.1 della specifica ISO C++. Nell'esempio che segue viene illustrato quanto descritto.  
  
```cpp  
#include <iostream>  
  
int main()  
{  
    using namespace std;  
  
    char_traits<char>::int_type int2 = char_traits<char>::eof();  
    cout << "The eof marker for char_traits<char> is: " << int2 << endl;  
  
    char_traits<wchar_t>::int_type int3 = char_traits<wchar_t>::eof();  
    cout << "The eof marker for char_traits<wchar_t> is: " << int3 << endl;  
}  
```  
  
## <a name="storage-location-of-objects"></a>Percorso di archiviazione di oggetti  
 Lo standard C++ (sezione 1.8 paragrafo 6) richiede che oggetti C++ completi abbiano percorsi di archiviazione univoci. Tuttavia con Visual C++, vi sono casi in cui tipi senza membri dati condividono una posizione di archiviazione con altri tipi per la durata dell'oggetto.
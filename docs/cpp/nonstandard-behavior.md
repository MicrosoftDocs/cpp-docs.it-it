---
title: "Comportamento non standard | Microsoft Docs"
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
  - "compatibilità e conformità, comportamento non standard"
  - "specifico di Microsoft, comportamento del compilatore"
  - "comportamento non standard, conformità e compatibilità"
ms.assetid: a57dea27-dc79-4f64-8a83-017e84841773
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Comportamento non standard
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Negli sezioni seguenti sono elencate alcune parti in cui l'implementazione Visual C\+\+ di C\+\+ non si conforma allo standard C\+\+.  I numeri delle sezioni indicati di seguito fanno riferimento ai numeri delle sezioni nello standard C\+\+ 11 \(ISO\/IEC 14882:2011\(E\)\).  
  
 L'elenco dei limiti del compilatore che differiscono da quelli definiti nello standard C\+\+ viene fornito in [Limite del compilatore](../cpp/compiler-limits.md).  
  
## Tipi restituiti covarianti  
 Le classi base virtuali non sono supportate come tipi restituiti covarianti quando la funzione virtuale dispone di un numero variabile di argomenti.  Questo non è conforme alla sezione 10.3, paragrafo 7 della specifica C\+\+ ISO.  Nell'esempio seguente la compilazione non viene eseguita con il seguente errore del compilatore [C2688](../error-messages/compiler-errors-2/compiler-error-c2688.md)  
  
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
  
## Associazione di nomi non dipendenti nei modelli  
 Il compilatore Visual C\+\+ non supporta attualmente i nomi di associazione non dipendenti nell'analisi iniziale di un modello.  Questo non è conforme alla sezione 16.6.3 della specifica C\+\+ ISO.  Ne possono conseguire overload dichiarati dopo il modello, ma prima della creazione di istanze del modello stesso.  
  
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
  
## Identificatori di eccezioni di funzione.  
 Gli identificatori di eccezioni di funzione diversi da `throw()` vengono analizzati, ma non utilizzati.  Questo non è conforme alla sezione 15.4 della specifica ISO C\+\+.  Di seguito è riportato un esempio.  
  
```cpp  
void f() throw(int); // parsed but not used  
void g() throw();    // parsed and used  
```  
  
 Per ulteriori informazioni sulle specifiche di eccezione, vedere [Specifiche di eccezione](../cpp/exception-specifications-throw-cpp.md).  
  
## char\_traits::eof\(\)  
 Gli stati standard C\+\+ che [char\_traits::eof](../Topic/char_traits::eof.md) non devono corrispondere a un valore `char_type` valido.  Il compilatore di Visual C\+\+ applica questo vincolo al tipo `char`, ma non al tipo `wchar_t`.  Questo non è conforme al requisito indicato nella Tabella 62 della sezione 12.1.1 della specifica ISO C\+\+.  Nell'esempio che segue viene illustrato quanto descritto.  
  
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
  
## Percorso di archiviazione di oggetti  
 Lo standard C\+\+ \(sezione 1.8 paragrafo 6\) richiede che oggetti C\+\+ completi abbiano percorsi di archiviazione univoci.  Tuttavia con Visual C\+\+, vi sono casi in cui tipi senza membri dati condividono una posizione di archiviazione con altri tipi per la durata dell'oggetto.
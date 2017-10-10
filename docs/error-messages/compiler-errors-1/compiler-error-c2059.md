---
title: Errore del compilatore C2059 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords:
- C2059
dev_langs:
- C++
helpviewer_keywords:
- C2059
ms.assetid: 2be4eb39-3f37-4b32-8e8d-75835e07c78a
caps.latest.revision: 22
author: corob-msft
ms.author: corob
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: dbf80ab803eaaacc29ac82657af130194417f1c7
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

---
# <a name="compiler-error-c2059"></a>Errore del compilatore C2059
Errore di sintassi: 'token'  
  
 Il token ha causato un errore di sintassi.  
  
 L'esempio seguente genera un messaggio di errore per la riga che dichiara `j`.  
  
```  
// C2059e.cpp  
// compile with: /c  
// C2143 expected  
// Error caused by the incorrect use of '*'.  
   int j*; // C2059   
```  
  
 Per determinare la causa dell'errore, esaminare non solo la riga che è elencata nel messaggio di errore, ma anche le righe precedenti. Se l'esame delle righe alcuna indicazione sul problema, provare a impostare come commento la riga che è elencata nel messaggio di errore e probabilmente alcune righe precedenti.  
  
 Se il messaggio di errore si verifica su un simbolo che segue immediatamente un `typedef` variabile, assicurarsi che la variabile è definita nel codice sorgente.  
  
 L'errore C2059 se un simbolo di valuta su nothing, come può verificarsi quando **/D** `symbol`  **=**  viene utilizzato per compilare.  
  
```  
// C2059a.cpp  
// compile with: /DTEST=  
#include <stdio.h>  
  
int main() {  
   #ifdef TEST  
      printf_s("\nTEST defined %d", TEST);   // C2059  
   #else  
      printf_s("\nTEST not defined");  
   #endif  
}  
```  
  
 Un altro caso in cui può verificarsi C2059 è quando si compila un'applicazione che specifica una struttura in argomenti predefiniti per una funzione. Il valore predefinito per un argomento deve essere un'espressione. Un elenco di inizializzatori, ad esempio, uno utilizzato per inizializzare una struttura, ovvero non è un'espressione.  Per risolvere questo problema, definire un costruttore per eseguire l'inizializzazione necessaria.  
  
 Nell'esempio seguente genera l'errore C2059:  
  
```  
// C2059b.cpp  
// compile with: /c  
struct ag_type {  
   int a;  
   float b;  
   // Uncomment the following line to resolve.  
   // ag_type(int aa, float bb) : a(aa), b(bb) {}   
};  
  
void func(ag_type arg = {5, 7.0});   // C2059  
void func(ag_type arg = ag_type(5, 7.0));   // OK  
```  
  
 È inoltre possibile ottenere C2059 se si definisce una classe di modello di membro o una funzione all'esterno della classe. Per informazioni, vedere [articolo della Knowledge Base 241949](http://support.microsoft.com/kb/241949).  
  
 C2059 può verificarsi per un cast valido.  
  
 L'esempio seguente genera l'errore C2059:  
  
```  
// C2059c.cpp  
// compile with: /clr  
using namespace System;  
ref class From {};  
ref class To : public From {};  
  
int main() {  
   From^ refbase = gcnew To();  
   To^ refTo = safe_cast<To^>(From^);   // C2059  
   To^ refTo2 = safe_cast<To^>(refbase);   // OK  
}  
```  
  
 C2059 può verificarsi anche se si tenta di creare uno spazio dei nomi che contiene un punto.  
  
 L'esempio seguente genera l'errore C2059:  
  
```  
// C2059d.cpp  
// compile with: /c  
namespace A.B {}   // C2059  
  
// OK  
namespace A  {  
   namespace B {}  
}  
```  
  
 Errore C2059 può verificarsi quando un operatore che può qualificare un nome (`::`, `->`, e `.`) deve essere seguita dalla parola chiave `template`, come illustrato nel seguente esempio:  
  
```cpp  
template <typename T> struct Allocator {  
    template <typename U> struct Rebind {  
        typedef Allocator<U> Other;  
    };  
};  
  
template <typename X, typename AY> struct Container {  
    typedef typename AY::Rebind<X>::Other AX; // error C2059  
};  
  
```  
  
 Per impostazione predefinita, in C++ si presuppone che `AY::Rebind` non è un modello; pertanto, `<` viene interpretato come segno minore di.  È necessario indicare al compilatore in modo esplicito che `Rebind` è un modello in modo da poter analizzare correttamente la parentesi angolare. Per correggere questo errore, utilizzare la parola chiave `template` sul nome del tipo dipendente, come illustrato di seguito:  
  
```cpp  
template <typename T> struct Allocator {  
    template <typename U> struct Rebind {  
        typedef Allocator<U> Other;  
    };  
};  
  
template <typename X, typename AY> struct Container {  
    typedef typename AY::template Rebind<X>::Other AX; // correct  
};  
  
```

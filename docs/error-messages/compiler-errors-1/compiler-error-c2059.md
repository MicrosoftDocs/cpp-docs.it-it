---
title: "Errore del compilatore C2059 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2059"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2059"
ms.assetid: 2be4eb39-3f37-4b32-8e8d-75835e07c78a
caps.latest.revision: 22
caps.handback.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2059
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

errore di sintassi: 'token'  
  
 Si è verificato un errore di sintassi a causa del token.  
  
 Nell'esempio seguente viene generato un messaggio di errore per la riga che dichiara `j`.  
  
```  
// C2059e.cpp  
// compile with: /c  
// C2143 expected  
// Error caused by the incorrect use of '*'.  
   int j*; // C2059   
```  
  
 Per determinarne la causa dell'errore, non esaminare solo la riga indicata nel messaggio di errore, ma anche le righe precedenti.  Se l'esame delle righe non consente di individuare la causa dell'errore, impostare come commento la riga elencata nel messaggio di errore ed eventualmente alcune righe precedenti.  
  
 Se il messaggio di errore si verifica su un simbolo che segue immediatamente una variabile `typedef`, controllare che questa sia definita nel codice sorgente.  
  
 L'errore C2059 può venire generato se un simbolo viene valutato in niente, ad esempio quando si esegue la compilazione con **\/D**`symbol`**\=**.  
  
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
  
 È possibile che si verifichi l'errore C2059 anche quando si compila un'applicazione in cui viene specificata una struttura negli argomenti predefiniti di una funzione.  È necessario che il valore predefinito per un argomento sia un'espressione.  Un elenco di inizializzatori—ad esempio, quello utilizzato per inizializzare una struttura—non è un'espressione.  Per correggere l'errore, definire un costruttore per eseguire l'inizializzazione necessaria.  
  
 Nell'esempio seguente viene generato l'errore C2059:  
  
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
  
 È inoltre possibile che venga generato l'errore C2059 quando viene definita una classe template membro o una funzione esterna alla classe.  Per ulteriori informazioni, vedere l'[articolo 241949 di Conoscenza Base](http://support.microsoft.com/kb/241949).  
  
 L'errore C2059 può verificarsi a causa di un cast specificato in modo non valido.  
  
 Il seguente codice di esempio genera l'errore C2059:  
  
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
  
 L'errore C2059 può inoltre verificarsi se si tenta di creare un nome di spazio dei nomi contenente un punto.  
  
 Il seguente codice di esempio genera l'errore C2059:  
  
```  
// C2059d.cpp  
// compile with: /c  
namespace A.B {}   // C2059  
  
// OK  
namespace A  {  
   namespace B {}  
}  
```  
  
 C2059 può verificarsi quando un operatore che può qualificare un nome \(`::`, `->` e `.`\) deve essere seguito dalla parola chiave `template`, come mostrato nel seguente esempio:  
  
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
  
 Per impostazione predefinita, in C\+\+ si presuppone che `AY::Rebind` non è un modello; pertanto, `<` viene interpretato come segno minore di.  È necessario indicare al compilatore in modo esplicito che `Rebind` è un modello in modo da poter analizzare correttamente la parentesi angolare.  Per correggere questo errore, utilizzare la parola chiave di `template` sul nome del tipo dipendente, come illustrato di seguito:  
  
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
---
title: "Errore del compilatore C2143 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2143"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2143"
ms.assetid: 1d8d1456-e031-4965-9240-09a6e33ba81c
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 23
---
# Errore del compilatore C2143
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

errore di sintassi: 'token1' mancante prima di 'token2'  
  
 È stato rilevato un altro token in una posizione in cui era previsto un token specifico, ossia un elemento di linguaggio diverso da uno spazio vuoto.  
  
 Per informazioni su questo errore durante l'utilizzo di un blocco funzione\-try, vedere l'[articolo 241706 di Conoscenza Base](http://support.microsoft.com/kb/241706).  
  
 Consultare [Riferimenti al linguaggio C\+\+](../../cpp/cpp-language-reference.md) per determinare in quali punti la sintassi del codice sia errata.  Poiché questo errore potrebbe essere generato dopo la riga che ha provocato il problema, controllare diverse righe di codice precedenti.  
  
 L'errore C2143 può verificarsi in diverse situazioni.  
  
 Può verificarsi quando un operatore che può qualificare un nome \(`::`, `->` e `.`\) deve essere seguito dalla parola chiave `template`, come nel seguente esempio:  
  
```cpp  
class MyClass  
{  
    template<class Ty, typename PropTy>  
    struct PutFuncType : public Ty::PutFuncType<Ty, PropTy> // error C2143  
    {  
    };  
};  
  
```  
  
 Per impostazione predefinita, in C\+\+ si presuppone che `Ty::PutFuncType` non è un modello; pertanto, `<` viene interpretato come segno minore di.  È necessario indicare al compilatore in modo esplicito che `PutFuncType` è un modello in modo da poter analizzare correttamente la parentesi angolare.  Per correggere questo errore, utilizzare la parola chiave di `template` sul nome del tipo dipendente, come illustrato di seguito:  
  
```cpp  
class MyClass  
{  
    template<class Ty, typename PropTy>  
    struct PutFuncType : public Ty::template PutFuncType<Ty, PropTy> // correct  
    {  
    };  
};  
  
```  
  
 C2143 può verificarsi quando si utilizza **\/clr** e un'istruzione `using` che contiene un errore di sintassi:  
  
```cpp  
// C2143a.cpp  
// compile with: /clr /c  
using namespace System.Reflection;   // C2143  
using namespace System::Reflection;  
```  
  
 Si può verificare anche quando si tenta di compilare un file di codice sorgente utilizzando la sintassi CLR senza usare anche **\/clr**:  
  
```cpp  
// C2143b.cpp  
ref struct A {   // C2143 error compile with /clr  
   void Test() {}  
};  
  
int main() {  
   A a;  
   a.Test();  
}  
```  
  
 Il primo carattere diverso da uno spazio vuoto successivo a un'istruzione `if` deve essere una parentesi di apertura.  Il compilatore non è in grado di tradurre altri elementi:  
  
```cpp  
// C2143c.cpp  
int main() {  
   int j = 0;  
  
   // OK  
   if (j < 25)  
      ;  
  
   if (j < 25)   // C2143  
}  
```  
  
 C2143 può verificarsi sulla riga in cui viene rilevato l'errore o su una delle righe immediatamente precedenti quando manca una parentesi graffa o tonda di chiusura oppure un punto e virgola:  
  
```caml  
// C2143d.cpp  
// compile with: /c  
class X {  
   int member1;  
   int member2   // C2143  
} x;  
```  
  
 Oppure quando è presente un tag non valido in una dichiarazione di classe:  
  
```cpp  
// C2143e.cpp  
class X {  
   int member;  
} x;  
  
class + {};   // C2143 + is an invalid tag name  
class ValidName {};   // OK  
```  
  
 Oppure quando un'etichetta non è collegata ad un'istruzione.  Per inserire un'etichetta da sola, ad esempio alla fine di un'istruzione composta, collegarla a un'istruzione null:  
  
```cpp  
// C2143f.cpp  
// compile with: /c  
void func1() {  
   // OK  
   end1:  
      ;  
  
   end2:   // C2143  
}  
```  
  
 L'errore può verificarsi quando è stata eseguita una chiamata non qualificata a un tipo nella libreria standard di C\+\+:  
  
```cpp  
// C2143g.cpp  
// compile with: /EHsc /c  
#include <vector>  
static vector<char> bad;   // C2143  
static std::vector<char> good;   // OK  
```  
  
 Oppure c'è una parola chiave `typename` mancante:  
  
```cpp  
// C2143h.cpp  
template <typename T>  
struct X {  
   struct Y {  
      int i;  
   };  
   Y memFunc();  
};  
template <typename T>  
X<T>::Y X<T>::memFunc() {   // C2143  
// try the following line instead  
// typename X<T>::Y X<T>::memFunc() {  
   return Y();  
}  
```  
  
 Oppure se si tenta di definire una creazione di istanza esplicita:  
  
```cpp  
// C2143i.cpp  
// compile with: /EHsc /c  
// template definition  
template <class T>  
void PrintType(T i, T j) {}  
  
template void PrintType(float i, float j){}   // C2143  
template void PrintType(float i, float j);   // OK  
```  
  
 In un programma C è necessario dichiarare le variabili all'inizio della funzione e non è possibile dichiararle dopo che la funzione ha eseguito istruzioni di non dichiarazione.  
  
```c  
// C2143j.c  
int main()   
{  
    int i = 0;  
    i++;  
    int j = 0; // C2143  
}  
  
```
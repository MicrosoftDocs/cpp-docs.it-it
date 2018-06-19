---
title: Errore del compilatore C2143 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C2143
dev_langs:
- C++
helpviewer_keywords:
- C2143
ms.assetid: 1d8d1456-e031-4965-9240-09a6e33ba81c
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 076f2ccb594edd5d9e627d8a4dcea2d9bb928890
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33171640"
---
# <a name="compiler-error-c2143"></a>Errore del compilatore C2143
Errore di sintassi: manca 'token1' prima di 'token2'  
  
 Era previsto un token specifico (ovvero, un elemento di linguaggio diverso da spazi vuoti) ma è stato rilevato un altro token.  
  
 Per informazioni su questo errore quando si verifica quando si utilizza un blocco try di funzione, vedere [articolo della Knowledge Base 241706](http://support.microsoft.com/kb/241706).  
  
 Controllare il [riferimenti al linguaggio C++](../../cpp/cpp-language-reference.md) per determinare la posizione di codice errato. Poiché il compilatore può segnalare l'errore dopo che viene rilevata la riga che causa il problema, controllare diverse righe di codice che hanno preceduto l'errore.  
  
 C2143 può verificarsi in diverse situazioni.  
  
 Può verificarsi quando un operatore che può qualificare un nome (`::`, `->` e `.`) deve essere seguito dalla parola chiave `template`, come nel seguente esempio:  
  
```cpp  
class MyClass  
{  
    template<class Ty, typename PropTy>  
    struct PutFuncType : public Ty::PutFuncType<Ty, PropTy> // error C2143  
    {  
    };  
};  
  
```  
  
 Per impostazione predefinita, in C++ si presuppone che `Ty::PutFuncType` non è un modello; pertanto, `<` viene interpretato come segno minore di.  È necessario indicare al compilatore in modo esplicito che `PutFuncType` è un modello in modo da poter analizzare correttamente la parentesi angolare. Per correggere questo errore, utilizzare la parola chiave `template` sul nome del tipo dipendente, come illustrato di seguito:  
  
```cpp  
class MyClass  
{  
    template<class Ty, typename PropTy>  
    struct PutFuncType : public Ty::template PutFuncType<Ty, PropTy> // correct  
    {  
    };  
};  
  
```  
  
 C2143 può verificarsi quando **/clr** viene utilizzato e un `using` direttiva dispone di un errore di sintassi:  
  
```cpp  
// C2143a.cpp  
// compile with: /clr /c  
using namespace System.Reflection;   // C2143  
using namespace System::Reflection;  
```  
  
 Può inoltre verificarsi quando si sta tentando di compilare un file di codice sorgente utilizzando la sintassi CLR senza usare anche **/clr**:  
  
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
  
 Il primo carattere diverso da uno spazio vuoto successivo a un'istruzione `if` deve essere una parentesi di apertura. Il compilatore non è possibile tradurre altri elementi:  
  
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
  
 C2143 può verificarsi quando sulla riga in cui viene rilevato l'errore o su una delle righe immediatamente precedenti quando manca una parentesi graffa o tonda di chiusura oppure un punto e virgola:  
  
```cpp  
// C2143d.cpp  
// compile with: /c  
class X {  
   int member1;  
   int member2   // C2143  
} x;  
```  
  
 In alternativa, quando è presente un tag non valido in una dichiarazione di classe:  
  
```cpp  
// C2143e.cpp  
class X {  
   int member;  
} x;  
  
class + {};   // C2143 + is an invalid tag name  
class ValidName {};   // OK  
```  
  
 In alternativa, quando un'etichetta non è collegata ad un'istruzione. Se è necessario inserire un'etichetta da solo, ad esempio, alla fine di un'istruzione composta, associarla a un'istruzione null:  
  
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
  
 L'errore può verificarsi quando viene effettuata una chiamata non qualificata a un tipo nella libreria C++ Standard:  
  
```cpp  
// C2143g.cpp  
// compile with: /EHsc /c  
#include <vector>  
static vector<char> bad;   // C2143  
static std::vector<char> good;   // OK  
```  
  
 In alternativa, c'è una parola chiave `typename` mancante:  
  
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
  
 In alternativa, se si tenta di definire una creazione di istanza esplicita:  
  
```cpp  
// C2143i.cpp  
// compile with: /EHsc /c  
// template definition  
template <class T>  
void PrintType(T i, T j) {}  
  
template void PrintType(float i, float j){}   // C2143  
template void PrintType(float i, float j);   // OK  
```  
  
 In un programma C, le variabili devono essere dichiarate all'inizio della funzione e non possono essere dichiarati dopo la funzione esegue le istruzioni di dichiarazione non.  
  
```C  
// C2143j.c  
int main()   
{  
    int i = 0;  
    i++;  
    int j = 0; // C2143  
}  
```  

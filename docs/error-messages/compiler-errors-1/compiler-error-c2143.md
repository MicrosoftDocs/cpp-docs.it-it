---
title: Errore del compilatore C2143 | Microsoft Docs
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
ms.openlocfilehash: 5c729ecbdea13c36cf5df71efa16d12853fc4433
ms.sourcegitcommit: d3c41b16bf05af2149090e996d8e71cd6cd55c7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/09/2018
ms.locfileid: "48890494"
---
# <a name="compiler-error-c2143"></a>Errore del compilatore C2143

Errore di sintassi: manca 'token1' prima di 'token2'

Ma è stato rilevato un altro token era previsto un token specifico (vale a dire un elemento di linguaggio diverso da spazi vuoti).

Verificare i [riferimenti al linguaggio C++](../../cpp/cpp-language-reference.md) per determinare dove codice non è sintatticamente corretto. Poiché il compilatore può segnalare questo errore dopo che rileva la riga che causa il problema, controllare diverse righe di codice che precedono l'errore.

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

C2143 può verificarsi quando si **/clr** viene usato e un `using` direttiva dispone di un errore di sintassi:

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

Il primo carattere diverso da uno spazio vuoto successivo a un'istruzione `if` deve essere una parentesi di apertura. Il compilatore non è possibile convertire qualsiasi altro elemento:

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

In alternativa, quando un'etichetta non è collegata ad un'istruzione. Se è necessario inserire un'etichetta di per sé, ad esempio, alla fine di un'istruzione composta, associarla a un'istruzione null:

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

L'errore può verificarsi quando viene effettuata una chiamata non qualificata a un tipo nella libreria Standard C++:

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

In un programma C, le variabili devono essere dichiarate all'inizio della funzione e non possono essere dichiarati dopo la funzione esegue le istruzioni di dichiarazione di non.

```C
// C2143j.c
int main()
{
    int i = 0;
    i++;
    int j = 0; // C2143
}
```

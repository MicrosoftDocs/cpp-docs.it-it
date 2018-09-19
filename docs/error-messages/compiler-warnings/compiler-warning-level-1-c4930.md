---
title: Compilatore avviso (livello 1) C4930 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4930
dev_langs:
- C++
helpviewer_keywords:
- C4930
ms.assetid: 89a206c9-c536-4186-8e81-1cde3e7f4f5b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 33c202cc6f062ac13bef3a73e4509e4ba870e2d6
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46090191"
---
# <a name="compiler-warning-level-1-c4930"></a>Avviso del compilatore (livello 1) C4930

'prototipo di ': funzione con prototipo non chiamata (era destinata a una definizione di variabile)?

Il compilatore ha rilevato un prototipo di funzione non usata. Se il prototipo è da intendersi come una dichiarazione di variabile, rimuovere le parentesi di apertura e chiusura.

L'esempio seguente genera l'errore C4930:

```
// C4930.cpp
// compile with: /W1
class Lock {
public:
   int i;
};

void f() {
   Lock theLock();   // C4930
   // try the following line instead
   // Lock theLock;
}

int main() {
}
```

C4930 può verificarsi anche quando il compilatore non è possibile distinguere tra una dichiarazione di prototipo di funzione e una chiamata di funzione.

L'esempio seguente genera l'errore C4930:

```
// C4930b.cpp
// compile with: /EHsc /W1

class BooleanException
{
   bool _result;

public:
   BooleanException(bool result)
      : _result(result)
   {
   }

   bool GetResult() const
   {
      return _result;
   }
};

template<class T = BooleanException>
class IfFailedThrow
{
public:
   IfFailedThrow(bool result)
   {
      if (!result)
      {
         throw T(result);
      }
   }
};

class MyClass
{
public:
   bool MyFunc()
   {
      try
      {
         IfFailedThrow<>(MyMethod()); // C4930

         // try one of the following lines instead
         // IfFailedThrow<> ift(MyMethod());
         // IfFailedThrow<>(this->MyMethod());
         // IfFailedThrow<>((*this).MyMethod());

         return true;
      }
      catch (BooleanException e)
      {
         return e.GetResult();
      }
   }

private:
   bool MyMethod()
   {
      return true;
   }
};

int main()
{
   MyClass myClass;
   myClass.MyFunc();
}
```

Nell'esempio precedente, il risultato di un metodo che accetta zero argomenti viene passato come argomento al costruttore di una variabile di classe senza nome locale. La chiamata può eliminare le ambiguità dei nomi di variabile locale o precedere la chiamata di metodo da un'istanza dell'oggetto con l'operatore puntatore a membro appropriato.
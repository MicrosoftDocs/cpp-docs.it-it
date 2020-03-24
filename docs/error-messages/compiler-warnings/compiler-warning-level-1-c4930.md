---
title: Avviso del compilatore (livello 1) C4930
ms.date: 11/04/2016
f1_keywords:
- C4930
helpviewer_keywords:
- C4930
ms.assetid: 89a206c9-c536-4186-8e81-1cde3e7f4f5b
ms.openlocfilehash: 6c012e484bddeb204601265f9d56efb7bbee7e96
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80199316"
---
# <a name="compiler-warning-level-1-c4930"></a>Avviso del compilatore (livello 1) C4930

' Prototype ': funzione con prototipo non chiamata. è prevista una definizione di variabile?

Il compilatore ha rilevato un prototipo di funzione non utilizzato. Se il prototipo è stato progettato come dichiarazione di variabile, rimuovere le parentesi di apertura e chiusura.

L'esempio seguente genera l'C4930:

```cpp
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

C4930 può verificarsi anche quando il compilatore non è in grado di distinguere tra una dichiarazione del prototipo di funzione e una chiamata di funzione.

L'esempio seguente genera l'C4930:

```cpp
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

Nell'esempio precedente, il risultato di un metodo che accetta zero argomenti viene passato come argomento al costruttore di una variabile di classe locale senza nome. La chiamata può essere ambiguità assegnando un nome alla variabile locale o anteponendo la chiamata al metodo con un'istanza dell'oggetto insieme all'operatore puntatore a membro appropriato.

---
title: Errore del compilatore C2146
ms.date: 11/04/2016
f1_keywords:
- C2146
helpviewer_keywords:
- C2146
ms.assetid: 6bfb7de6-6723-4486-9350-c66ef88d7a64
ms.openlocfilehash: 8dc7b521243c4eafdc22fab851812b6c12b004cf
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74755915"
---
# <a name="compiler-error-c2146"></a>Errore del compilatore C2146

errore di sintassi:' token ' mancante prima dell'identificatore ' Identifier '

Il compilatore prevedeva `token` ed è stato trovato `identifier` in alternativa.  Cause possibili:

1. Errore di ortografia o di maiuscole.

1. Identificatore di tipo mancante nella dichiarazione dell'identificatore.

Questo errore può essere causato da un errore tipografico. Errore [C2065](../../error-messages/compiler-errors-1/compiler-error-c2065.md) in genere precede l'errore.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2146.

```cpp
// C2146.cpp
class CDeclaredClass {};

class CMyClass {
   CUndeclared m_myClass;   // C2146
   CDeclaredClass m_myClass2;   // OK
};

int main() {
   int x;
   int t x;   // C2146 : missing semicolon before 'x'
}
```

## <a name="example"></a>Esempio

Questo errore può anche essere generato come risultato delle operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: parola chiave `typename` mancante.

L'esempio seguente viene compilato in Visual Studio .NET 2002 ma avrà esito negativo in Visual Studio .NET 2003:

```cpp
// C2146b.cpp
// compile with: /c
template <typename T>
struct X {
   struct Y {
      int i;
   };
   Y memFunc();
};

template <typename T>
X<T>::Y func() { }   // C2146

// OK
template <typename T>
typename X<T>::Y func() { }
```

## <a name="example"></a>Esempio

Questo errore viene visualizzato anche in seguito alle operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: le specializzazioni esplicite non trovano più i parametri del modello dal modello primario.

L'uso di `T` dal modello primario non è consentito nella specializzazione esplicita. Affinché il codice sia valido in Visual Studio .NET 2003 e Visual Studio .NET, sostituire tutte le istanze del parametro di modello nella specializzazione con il tipo specializzato in modo esplicito.

L'esempio seguente viene compilato in Visual Studio .NET, ma avrà esito negativo in Visual Studio .NET 2003:

```cpp
// C2146_c.cpp
// compile with: /c
template <class T>
struct S;

template <>
struct S<int> {
   T m_t;   // C2146
   int m_t2;   // OK
};
```

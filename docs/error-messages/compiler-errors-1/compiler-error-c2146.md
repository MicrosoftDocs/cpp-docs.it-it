---
title: Errore del compilatore C2146
ms.date: 11/04/2016
f1_keywords:
- C2146
helpviewer_keywords:
- C2146
ms.assetid: 6bfb7de6-6723-4486-9350-c66ef88d7a64
ms.openlocfilehash: 3a0fd9c49a71f6f53d1a109378e3a6894bb68723
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62175428"
---
# <a name="compiler-error-c2146"></a>Errore del compilatore C2146

Errore di sintassi: manca 'token' prima dell'identificatore 'identifier'

Il compilatore prevedeva `token` e trovare `identifier` invece.  Possibili cause:

1. Errore di ortografia o maiuscole/minuscole.

1. Identificatore di tipo mancante nella dichiarazione dell'identificatore.

Questo errore può essere causato da un errore di digitazione. Errore [C2065](../../error-messages/compiler-errors-1/compiler-error-c2065.md) precede in genere questo errore.

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C2146.

```
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

Questo errore può anche essere generato in seguito a operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: mancante `typename` (parola chiave).

L'esempio seguente viene compilato in Visual Studio .NET 2002 ma avrà esito negativo in Visual Studio .NET 2003:

```
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

Verrà anche visualizzato l'errore in seguito a operazioni di conformità del compilatore eseguite per Visual Studio .NET 2003: specializzazioni esplicite non trovano più parametri di modello dal modello principale.

L'uso di `T` dal modello principale non è consentita nella specializzazione esplicita. Per il codice sia valida nelle versioni di Visual Studio .NET 2003 e Visual Studio .NET di Visual C++, sostituire tutte le istanze del parametro di modello nella specializzazione con il tipo specializzato in modo esplicito.

L'esempio seguente viene compilato in Visual Studio .NET, ma avrà esito negativo in Visual Studio .NET 2003:

```
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
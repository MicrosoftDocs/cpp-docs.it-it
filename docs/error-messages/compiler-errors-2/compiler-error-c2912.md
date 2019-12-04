---
title: Errore del compilatore C2912
ms.date: 11/04/2016
f1_keywords:
- C2912
helpviewer_keywords:
- C2912
ms.assetid: bd55cecd-ab1a-4636-ab8a-a00393fe7b3d
ms.openlocfilehash: 254252bfd21aa28c87810f1e21b4864e2775a71b
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74761085"
---
# <a name="compiler-error-c2912"></a>Errore del compilatore C2912

la specializzazione esplicita 'declaration' non è una specializzazione di un modello di funzione.

Non è possibile specializzare una funzione non modello.

L'esempio seguente genera l'errore C2912:

```cpp
// C2912.cpp
// compile with: /c
void f(char);
template<> void f(char);   // C2912
template<class T> void f(T);   // OK
```

Questo errore verrà generato anche in seguito alle operazioni di conformità del compilatore eseguite in Visual Studio .NET 2003: è necessario scegliere i parametri di ogni specializzazione esplicita in modo che corrispondano ai parametri del modello principale.

```cpp
// C2912b.cpp
class CF {
public:
   template <class A> CF(const A& a) {}   // primary template

   // attempted explicit specialization
   template <> CF(const char* p) {}   // C2912

   // try the following line instead
   // template <> CF(const char& p) {}
};
```

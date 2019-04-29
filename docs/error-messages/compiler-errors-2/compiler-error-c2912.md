---
title: Errore del compilatore C2912
ms.date: 11/04/2016
f1_keywords:
- C2912
helpviewer_keywords:
- C2912
ms.assetid: bd55cecd-ab1a-4636-ab8a-a00393fe7b3d
ms.openlocfilehash: b7f87ae2df5350fcfb2b7a662f517d8d7bd51ef8
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62408394"
---
# <a name="compiler-error-c2912"></a>Errore del compilatore C2912

la specializzazione esplicita 'declaration' non è una specializzazione di un modello di funzione.

Non è possibile specializzare una funzione non modello.

L'esempio seguente genera l'errore C2912:

```
// C2912.cpp
// compile with: /c
void f(char);
template<> void f(char);   // C2912
template<class T> void f(T);   // OK
```

Questo errore verrà generato anche in seguito alle operazioni di conformità del compilatore eseguite in Visual Studio .NET 2003: è necessario scegliere i parametri di ogni specializzazione esplicita in modo che corrispondano ai parametri del modello principale.

```
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
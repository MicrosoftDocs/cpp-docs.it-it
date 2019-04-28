---
title: Avviso del compilatore (livello 4) C4625
ms.date: 11/04/2016
f1_keywords:
- C4625
helpviewer_keywords:
- C4625
ms.assetid: 4cc99e50-846c-4784-97da-48b977067851
ms.openlocfilehash: edcb43bf11c073e6ce721ba999fd99d28a8df15d
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62220494"
---
# <a name="compiler-warning-level-4-c4625"></a>Avviso del compilatore (livello 4) C4625

'derived class': il costruttore di copia è stato definito in modo implicito come eliminato perché un costruttore di copia della classe di base è inaccessibile o è stato eliminato

Un costruttore di copia è stato eliminato o non è accessibile in una classe di base e quindi non è stato generato per una classe derivata. Qualsiasi tentativo di copiare un oggetto di questo tipo causerà un errore del compilatore.

Per impostazione predefinita, questo avviso non è attivo. Per altre informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md) .

## <a name="example"></a>Esempio

L'esempio seguente genera l'errore C4625 e mostra come risolverlo.

```
// C4625.cpp
// compile with: /W4 /c
#pragma warning(default : 4625)

struct A {
   A() {}

private:
   A(const A&) {}
};

struct C : private virtual A {};
struct B :  C {};   // C4625 no copy constructor

struct D : A {};
struct E :  D {};   // OK
```
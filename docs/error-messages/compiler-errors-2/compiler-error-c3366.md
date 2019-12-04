---
title: Errore del compilatore C3366
ms.date: 11/04/2016
f1_keywords:
- C3366
helpviewer_keywords:
- C3366
ms.assetid: efc55bcf-c16d-43c1-a36f-87a6165fa2a8
ms.openlocfilehash: 5173b1c0df7de6a4e8d9993e680b961a82bb10a7
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74738466"
---
# <a name="compiler-error-c3366"></a>Errore del compilatore C3366

' variable ': i membri dati statici di Managed o WinRTtypes devono essere definiti all'interno della definizione della classe

Si è tentato di fare riferimento a un membro statico di una classe o un'interfaccia WinRT o .NET al di fuori della definizione di tale classe o interfaccia.

Il compilatore deve conoscere la definizione completa della classe (per creare i metadati dopo un solo passaggio) ed è necessario che i membri dati statici vengano inizializzati all'interno della classe.

L'esempio seguente genera l'errore C3366 e mostra come risolverlo:

```cpp
// C3366.cpp
// compile with: /clr /c
ref class X {
   public:
   static int i;   // initialize i here to avoid C3366
};

int X::i = 5;      // C3366
```

---
title: Errore del compilatore C2032
ms.date: 11/04/2016
f1_keywords:
- C2032
helpviewer_keywords:
- C2032
ms.assetid: 625d7c83-70b6-42c2-a558-81fbc0026324
ms.openlocfilehash: d20bc61df2d0bab9115768b3bc0589f11a9bcdb9
ms.sourcegitcommit: a5fa9c6f4f0c239ac23be7de116066a978511de7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/20/2019
ms.locfileid: "75302094"
---
# <a name="compiler-error-c2032"></a>Errore del compilatore C2032

' Identifier ': la funzione non può essere membro di struct/union ' structorunion '

La struttura o l'Unione ha una funzione membro, che è consentita in C++ , ma non in C. Per risolvere l'errore, compilare come C++ programma o rimuovere la funzione membro.

L'esempio seguente genera l'C2032:

```c
// C2032.c
struct z {
   int i;
   void func();   // C2032
};
```

Possibile soluzione:

```c
// C2032b.c
// compile with: /c
struct z {
   int i;
};
```

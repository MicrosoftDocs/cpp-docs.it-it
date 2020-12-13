---
description: 'Altre informazioni su: errore del compilatore C2032'
title: Errore del compilatore C2032
ms.date: 11/04/2016
f1_keywords:
- C2032
helpviewer_keywords:
- C2032
ms.assetid: 625d7c83-70b6-42c2-a558-81fbc0026324
ms.openlocfilehash: cb39a539dc1e360f70cc2b217d50f3a1eabcf0f6
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97175456"
---
# <a name="compiler-error-c2032"></a>Errore del compilatore C2032

' Identifier ': la funzione non può essere membro di struct/union ' structorunion '

La struttura o l'Unione ha una funzione membro, che è consentita in C++, ma non in C. Per risolvere l'errore, compilare come programma C++ o rimuovere la funzione membro.

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

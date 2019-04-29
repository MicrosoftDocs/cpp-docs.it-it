---
title: Errore del compilatore C2032
ms.date: 11/04/2016
f1_keywords:
- C2032
helpviewer_keywords:
- C2032
ms.assetid: 625d7c83-70b6-42c2-a558-81fbc0026324
ms.openlocfilehash: 5743aba880f23d7706940936fc4a3a1973a84ca1
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62400513"
---
# <a name="compiler-error-c2032"></a>Errore del compilatore C2032

'identifier': funzione non può essere membro di struct/unione '

La struttura o unione ha una funzione membro, che è consentita in C++, ma non in C. Per risolvere l'errore, la compilazione come un programma C++ o rimuovere la funzione membro.

L'esempio seguente genera l'errore C2032:

```
// C2032.c
struct z {
   int i;
   void func();   // C2032
};
```

Possibile soluzione:

```
// C2032b.c
// compile with: /c
struct z {
   int i;
};
```
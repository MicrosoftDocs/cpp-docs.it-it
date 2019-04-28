---
title: Errore del compilatore C2005
ms.date: 11/04/2016
f1_keywords:
- C2005
helpviewer_keywords:
- C2005
ms.assetid: 090530ed-e0ec-4358-833a-ca24260e7ffe
ms.openlocfilehash: 49d0375d5733410d728797d2a881075377b33ba6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62209003"
---
# <a name="compiler-error-c2005"></a>Errore del compilatore C2005

\#riga previsto un numero di riga, trovato 'token'

Il `#line` direttiva deve essere seguita da un numero di riga.

L'esempio seguente genera l'errore C2005:

```
// C2005.cpp
int main() {
   int i = 0;
   #line i   // C2005
}
```

Possibile soluzione:

```
// C2005b.cpp
int main() {
   int i = 0;
   #line 0
}
```
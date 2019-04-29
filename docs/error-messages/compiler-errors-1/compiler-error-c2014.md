---
title: Errore del compilatore C2014
ms.date: 11/04/2016
f1_keywords:
- C2014
helpviewer_keywords:
- C2014
ms.assetid: 231d8e9c-48c0-4027-99a3-245d186275ec
ms.openlocfilehash: 58cf9867a9e36b304ab9da79084bc01dff453892
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62350702"
---
# <a name="compiler-error-c2014"></a>Errore del compilatore C2014

comando del preprocessore deve iniziare al primo carattere non vuoto

Il `#` segno di una direttiva del preprocessore deve essere il primo carattere in una riga che non è lo spazio vuoto.

L'esempio seguente genera l'errore C2014:

```
// C2014.cpp
int k; #include <stdio.h>   // C2014
```

Possibile soluzione:

```
// C2014b.cpp
// compile with: /c
int k;
#include <stdio.h>
```
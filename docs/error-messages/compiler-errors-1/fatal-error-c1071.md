---
title: Errore irreversibile C1071
ms.date: 11/04/2016
f1_keywords:
- C1071
helpviewer_keywords:
- C1071
ms.assetid: 489f1786-370e-4ecd-af67-538fe6e5bd4e
ms.openlocfilehash: 2f39359d55b5564c6379c84f07e942cf3484e011
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74747410"
---
# <a name="fatal-error-c1071"></a>Errore irreversibile C1071

fine file imprevista nel commento

Il compilatore ha raggiunto la fine del file durante l'analisi di un commento.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Manca il carattere di terminazione del commento (*/).

1. Carattere di nuova riga mancante dopo un commento sull'ultima riga di un file di origine.

L'esempio seguente genera l'C1071:

```cpp
// C1071.cpp
int main() {
}

/* this comment is fine */
/* forgot the closing tag        // C1071
```

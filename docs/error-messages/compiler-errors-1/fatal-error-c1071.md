---
title: Errore irreversibile C1071
ms.date: 11/04/2016
f1_keywords:
- C1071
helpviewer_keywords:
- C1071
ms.assetid: 489f1786-370e-4ecd-af67-538fe6e5bd4e
ms.openlocfilehash: 8fe6b0f3bb1253f72c97f29070ba81cdbdf80508
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62166659"
---
# <a name="fatal-error-c1071"></a>Errore irreversibile C1071

fine file imprevista nel commento

È stata raggiunta la fine del file durante l'analisi di un commento.

### <a name="to-fix-by-checking-the-following-possible-causes"></a>Per risolverlo è possibile verificare le seguenti cause possibili

1. Manca il terminatore di commento (* /).

1. Carattere di nuova riga mancante dopo un commento nell'ultima riga di un file di origine.

L'esempio seguente genera l'errore C1071:

```
// C1071.cpp
int main() {
}

/* this comment is fine */
/* forgot the closing tag        // C1071
```
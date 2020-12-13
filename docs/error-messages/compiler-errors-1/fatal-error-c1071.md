---
description: 'Altre informazioni su: errore irreversibile C1071'
title: Errore irreversibile C1071
ms.date: 11/04/2016
f1_keywords:
- C1071
helpviewer_keywords:
- C1071
ms.assetid: 489f1786-370e-4ecd-af67-538fe6e5bd4e
ms.openlocfilehash: c4a6734dcb515b6d495eac720f83ba39be3c3677
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97344380"
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

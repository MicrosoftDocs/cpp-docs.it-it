---
title: Errore irreversibile C1311
ms.date: 11/04/2016
f1_keywords:
- C1311
helpviewer_keywords:
- C1311
ms.assetid: 6590a06c-ce9d-4f17-8f62-c809343143b8
ms.openlocfilehash: ba2b797c9bf521533e7c2ccff8d358b6216d392f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50637905"
---
# <a name="fatal-error-c1311"></a>Errore irreversibile C1311

Formato COFF non è possibile inizializzare in modo statico 'var' con numero di byte di un indirizzo

Un indirizzo il cui valore non è noto in fase di compilazione non può essere assegnato in modo statico a una variabile il cui tipo è archiviazione di meno di quattro byte.

Questo errore può verificarsi nel codice che sarebbe altrimenti C++ valido.

Nell'esempio riportato di seguito viene illustrata una condizione da cui potrebbe essere generato l'errore C1311.

```
char c = (char)"Hello, world";   // C1311
char *d = (char*)"Hello, world";   // OK
```
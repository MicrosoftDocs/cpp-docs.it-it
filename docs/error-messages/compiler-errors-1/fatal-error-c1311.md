---
title: Errore irreversibile C1311 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1311
dev_langs:
- C++
helpviewer_keywords:
- C1311
ms.assetid: 6590a06c-ce9d-4f17-8f62-c809343143b8
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d93aa28d0cef3c07fd469349d485c4009fa4771d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46091062"
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
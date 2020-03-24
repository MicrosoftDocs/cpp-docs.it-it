---
title: Errore irreversibile C1311
ms.date: 11/04/2016
f1_keywords:
- C1311
helpviewer_keywords:
- C1311
ms.assetid: 6590a06c-ce9d-4f17-8f62-c809343143b8
ms.openlocfilehash: e57e4e0899a5f9d81e87a203b1b699cef0884f0d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80203268"
---
# <a name="fatal-error-c1311"></a>Errore irreversibile C1311

Formato COFF non in grado di inizializzare in modo statico ' var ' con un numero di byte di un indirizzo

Un indirizzo il cui valore non è noto in fase di compilazione non può essere assegnato in modo statico a una variabile il cui tipo dispone di spazio di archiviazione inferiore a quattro byte.

Questo errore può verificarsi nel codice altrimenti valido C++.

Nell'esempio riportato di seguito viene illustrata una condizione da cui potrebbe essere generato l'errore C1311.

```
char c = (char)"Hello, world";   // C1311
char *d = (char*)"Hello, world";   // OK
```

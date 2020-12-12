---
description: 'Altre informazioni su: errore irreversibile C1311'
title: Errore irreversibile C1311
ms.date: 11/04/2016
f1_keywords:
- C1311
helpviewer_keywords:
- C1311
ms.assetid: 6590a06c-ce9d-4f17-8f62-c809343143b8
ms.openlocfilehash: d6049bfedd01be02e8b3f26163fe062e9023bd78
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97177744"
---
# <a name="fatal-error-c1311"></a>Errore irreversibile C1311

Formato COFF non in grado di inizializzare in modo statico ' var ' con un numero di byte di un indirizzo

Un indirizzo il cui valore non è noto in fase di compilazione non può essere assegnato in modo statico a una variabile il cui tipo dispone di spazio di archiviazione inferiore a quattro byte.

Questo errore può verificarsi nel codice che altrimenti è valido in C++.

Nell'esempio riportato di seguito viene illustrata una condizione da cui potrebbe essere generato l'errore C1311.

```
char c = (char)"Hello, world";   // C1311
char *d = (char*)"Hello, world";   // OK
```

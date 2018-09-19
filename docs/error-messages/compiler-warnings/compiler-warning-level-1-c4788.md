---
title: Compilatore avviso (livello 1) C4788 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C4788
dev_langs:
- C++
helpviewer_keywords:
- C4788
ms.assetid: 47d75bda-f833-4bdd-93a0-a134df0cd303
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 1c8a6ad1aa3ae17944b8c2a292d484d55c24d9cd
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46051734"
---
# <a name="compiler-warning-level-1-c4788"></a>Avviso del compilatore (livello 1) C4788

'identifier': identificatore troncato a 'number' caratteri

Il compilatore consente di limitare la lunghezza massima consentita per un nome di funzione. Quando il compilatore genera il funclet per il codice EH, Exception HANDLING/SEH, costituisce il nome funclet anteponendo il nome della funzione con un testo, ad esempio catch","\__unwind ", o un'altra stringa.

Il nome risultante può essere troppo lungo e il compilatore troncare la tabella e generare C4788.

Per risolvere questo problema, abbreviare il nome della funzione originale. Se la funzione è un metodo o una funzione di modello C++, usare un typedef per parte del nome. Ad esempio:

```
C1<x, y, z<T>>::C2<a,b,c>::f
```

può essere sostituito da:

```
typedef C1<x, y, z<T>>::C2<a,b,c> new_class ;
new_class::f
```

Questo avviso viene generato solo in x64 compilatore.
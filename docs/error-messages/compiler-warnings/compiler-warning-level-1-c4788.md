---
title: Avviso del compilatore (livello 1) C4788
ms.date: 11/04/2016
f1_keywords:
- C4788
helpviewer_keywords:
- C4788
ms.assetid: 47d75bda-f833-4bdd-93a0-a134df0cd303
ms.openlocfilehash: c51a4409c2a3028823462539343654b5eac365d0
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62187205"
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
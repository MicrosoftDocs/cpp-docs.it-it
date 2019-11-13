---
title: Avviso del compilatore (livello 1) C4788
ms.date: 11/04/2016
f1_keywords:
- C4788
helpviewer_keywords:
- C4788
ms.assetid: 47d75bda-f833-4bdd-93a0-a134df0cd303
ms.openlocfilehash: 03ce38aaa910a410025c5cccdf39646d34104779
ms.sourcegitcommit: 458dcc794e3841919c01a3a5ff6b9a3767f8861b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/13/2019
ms.locfileid: "74052383"
---
# <a name="compiler-warning-level-1-c4788"></a>Avviso del compilatore (livello 1) C4788

' Identifier ': identificatore troncato a' Number ' caratteri

Il compilatore limita la lunghezza massima consentita per il nome di una funzione. Quando il compilatore genera funclets per il codice EH/SEH, costituisce il nome di funclet anteponendo il nome della funzione con testo, ad esempio "__catch", "\__unwind" o un'altra stringa.

Il nome funclet risultante può essere troppo lungo e il compilatore lo tronca e genera C4788.

Per risolvere il problema, abbreviare il nome della funzione originale. Se la funzione è una C++ funzione o un metodo del modello, usare un typedef per una parte del nome. Esempio:

```cpp
C1<x, y, z<T>>::C2<a,b,c>::f
```

può essere sostituito da:

```cpp
typedef C1<x, y, z<T>>::C2<a,b,c> new_class ;
new_class::f
```

Questo avviso si verifica solo nel compilatore x64.
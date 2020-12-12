---
description: 'Altre informazioni su: avviso del compilatore (livello 1) C4788'
title: Avviso del compilatore (livello 1) C4788
ms.date: 11/04/2016
f1_keywords:
- C4788
helpviewer_keywords:
- C4788
ms.assetid: 47d75bda-f833-4bdd-93a0-a134df0cd303
ms.openlocfilehash: 2aa87fd8a09b9f308e7fbb51fc4f05792210b0c1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97234605"
---
# <a name="compiler-warning-level-1-c4788"></a>Avviso del compilatore (livello 1) C4788

' Identifier ': identificatore troncato a' Number ' caratteri

Il compilatore limita la lunghezza massima consentita per il nome di una funzione. Quando il compilatore genera funclets per il codice EH/SEH, costituisce il nome di funclet anteponendo il nome della funzione con testo, ad esempio "__catch", " \_ _unwind" o un'altra stringa.

Il nome funclet risultante può essere troppo lungo e il compilatore lo tronca e genera C4788.

Per risolvere il problema, abbreviare il nome della funzione originale. Se la funzione è una funzione o un metodo del modello C++, usare un typedef per una parte del nome. Ad esempio:

```cpp
C1<x, y, z<T>>::C2<a,b,c>::f
```

può essere sostituito da:

```cpp
typedef C1<x, y, z<T>>::C2<a,b,c> new_class ;
new_class::f
```

Questo avviso si verifica solo nel compilatore x64.

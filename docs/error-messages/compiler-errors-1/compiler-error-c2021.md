---
title: Errore del compilatore C2021
ms.date: 11/04/2016
f1_keywords:
- C2021
helpviewer_keywords:
- C2021
ms.assetid: 064f32e2-3794-48d5-9767-991003dcb36a
ms.openlocfilehash: 24463abcf123fda285356c86e3394d7274f2f6c8
ms.sourcegitcommit: 16fa847794b60bf40c67d20f74751a67fccb602e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/03/2019
ms.locfileid: "74751040"
---
# <a name="compiler-error-c2021"></a>Errore del compilatore C2021

previsto valore esponente. Trovato 'character'

Il carattere utilizzato come esponente di una costante a virgola mobile non è un numero valido. Assicurarsi di usare un esponente compreso nell'intervallo.

## <a name="example"></a>Esempio

L'esempio seguente genera l'C2021:

```cpp
// C2021.cpp
float test1=1.175494351E;   // C2021
```

## <a name="example"></a>Esempio

Possibile soluzione:

```cpp
// C2021b.cpp
// compile with: /c
float test2=1.175494351E8;
```

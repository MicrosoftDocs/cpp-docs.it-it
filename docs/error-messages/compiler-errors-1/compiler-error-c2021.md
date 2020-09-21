---
title: Errore del compilatore C2021
ms.date: 11/04/2016
f1_keywords:
- C2021
helpviewer_keywords:
- C2021
ms.assetid: 064f32e2-3794-48d5-9767-991003dcb36a
ms.openlocfilehash: 97d1776bb3b29b3691ae31bb060410a83d581e2d
ms.sourcegitcommit: 72161bcd21d1ad9cc3f12261aa84a5b026884afa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2020
ms.locfileid: "90743295"
---
# <a name="compiler-error-c2021"></a>Errore del compilatore C2021

previsto valore esponente. Trovato 'character'

Il carattere utilizzato come esponente di una costante a virgola mobile non è un numero valido. Assicurarsi di usare un esponente compreso nell'intervallo.

## <a name="examples"></a>Esempi

L'esempio seguente genera l'C2021:

```cpp
// C2021.cpp
float test1=1.175494351E;   // C2021
```

Possibile soluzione:

```cpp
// C2021b.cpp
// compile with: /c
float test2=1.175494351E8;
```

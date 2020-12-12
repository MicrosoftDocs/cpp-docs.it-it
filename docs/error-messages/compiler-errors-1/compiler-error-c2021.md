---
description: 'Altre informazioni su: errore del compilatore C2021'
title: Errore del compilatore C2021
ms.date: 11/04/2016
f1_keywords:
- C2021
helpviewer_keywords:
- C2021
ms.assetid: 064f32e2-3794-48d5-9767-991003dcb36a
ms.openlocfilehash: 823d9c3d42f1df7bc6f6f398dafd804daef76110
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97175638"
---
# <a name="compiler-error-c2021"></a>Errore del compilatore C2021

previsto valore esponente. Trovato 'character'

Il carattere utilizzato come esponente di una costante a virgola mobile non è un numero valido. Assicurarsi di usare un esponente compreso nell'intervallo.

## <a name="examples"></a>Esempio

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

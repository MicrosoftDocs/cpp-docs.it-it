---
title: Matrici nelle espressioni
ms.date: 11/04/2016
helpviewer_keywords:
- expressions [C++], arrays in
- arrays [C++], in expressions
ms.assetid: 6e5a795b-d6bd-4e39-b313-6a20d47c4d4b
ms.openlocfilehash: 0f2ef43c2a5bc4f8a44378c21d6d53b14f07ea07
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50478169"
---
# <a name="arrays-in-expressions"></a>Matrici nelle espressioni

Quando un identificatore di tipo matrice viene visualizzata in un'espressione diversa `sizeof`, indirizzo-of (**&**), o l'inizializzazione di un riferimento, viene convertito in un puntatore al primo elemento della matrice. Ad esempio:

```cpp
char szError1[] = "Error: Disk drive not ready.";
char *psz = szError1;
```

Il puntatore `psz` fa riferimento al primo elemento della matrice `szError1`. Tenere presente che, a differenza dei puntatori, le matrici non sono l-value modificabili. Pertanto, la seguente assegnazione non è valida:

```cpp
szError1 = psz;
```

## <a name="see-also"></a>Vedere anche

[Matrici](../cpp/arrays-cpp.md)
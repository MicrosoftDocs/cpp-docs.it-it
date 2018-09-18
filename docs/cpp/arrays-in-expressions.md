---
title: Matrici nelle espressioni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- expressions [C++], arrays in
- arrays [C++], in expressions
ms.assetid: 6e5a795b-d6bd-4e39-b313-6a20d47c4d4b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 34f8a45dfa9de9a5a48e13cb6a38f667e5963f2d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46068546"
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

[Array](../cpp/arrays-cpp.md)
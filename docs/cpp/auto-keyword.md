---
title: Parola chiave auto
ms.date: 11/04/2016
ms.assetid: 744a41c0-2510-4140-a1be-96257e722908
ms.openlocfilehash: 3477bd5033fac5b69733db5d6095c1317aac42ee
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50607688"
---
# <a name="auto-keyword"></a>Parola chiave auto

Il **automatica** la parola chiave è un identificatore di dichiarazione. Tuttavia, lo standard C++ definisce per tale parola chiave un significato originale e uno rivisto. Prima di Visual C++ 2010, il **automatica** parola chiave dichiara una variabile nella *automatica* classe di archiviazione, vale a dire una variabile con una durata locale. A partire da Visual C++ 2010, il **automatica** parola chiave dichiara una variabile il cui tipo viene dedotto dall'espressione di inizializzazione nella relativa dichiarazione. Il [/Zc: Auto&#91;-&#93; ](../build/reference/zc-auto-deduce-variable-type.md) l'opzione del compilatore controlla il significato della **automatica** (parola chiave).

## <a name="syntax"></a>Sintassi

```cpp
auto declarator ;
auto declarator initializer;
```

## <a name="remarks"></a>Note

La definizione del **automatica** modifiche parola chiave nel linguaggio di programmazione C++, ma non nel linguaggio di programmazione C.

Gli argomenti seguenti descrivono le **automatica** (parola chiave) e l'opzione del compilatore corrispondente:

- [Auto](../cpp/auto-cpp.md) descrive la nuova definizione del **automatica** (parola chiave).

- [/Zc: auto (deduzione del tipo di variabile)](../build/reference/zc-auto-deduce-variable-type.md) descrive l'opzione del compilatore che indica al compilatore la definizione della **automatica** parola chiave da usare.

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)
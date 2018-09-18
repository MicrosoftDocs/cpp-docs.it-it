---
title: parola chiave Auto | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
ms.assetid: 744a41c0-2510-4140-a1be-96257e722908
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 10952e6360fc8170c59e9a67fe3027622cbea4bc
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46055531"
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
---
title: __unaligned
ms.date: 12/17/2018
f1_keywords:
- __unaligned_cpp
- __unaligned
- _unaligned
helpviewer_keywords:
- __unaligned keyword [C++]
ms.assetid: 0cd83aad-1840-47e3-ad33-59bfcbe6375b
ms.openlocfilehash: 2ab94a44d08165ca6e8f394278e24d7c8d201398
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87223499"
---
# <a name="__unaligned"></a>__unaligned

**Specifiche di Microsoft**. Quando si dichiara un puntatore con il **`__unaligned`** modificatore, il compilatore presuppone che il puntatore indirizzi i dati non allineati. Di conseguenza, il codice appropriato per la piattaforma viene generato per gestire letture e scritture non allineate tramite il puntatore.

## <a name="remarks"></a>Osservazioni

Questo modificatore descrive l'allineamento dei dati interessati dal puntatore. si presuppone che il puntatore venga allineato.

La necessità della **`__unaligned`** parola chiave varia a seconda della piattaforma e dell'ambiente. L'impossibilità di contrassegnare i dati in modo appropriato può comportare problemi di prestazioni, a causa di errori hardware. Il **`__unaligned`** modificatore non è valido per la piattaforma x86.

Per compatibilità con le versioni precedenti, **`_unaligned`** è un sinonimo di, a **`__unaligned`** meno che non sia specificata l'opzione del compilatore [ `/Za` \( Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

Per ulteriori informazioni sull'allineamento, vedere:

- [`align`](../cpp/align-cpp.md)

- [`alignof`Operatore](../cpp/alignof-operator.md)

- [`pack`](../preprocessor/pack.md)

- [`/Zp`(Allineamento membri struct)](../build/reference/zp-struct-member-alignment.md)

- [Esempi di allineamento di strutture](../build/x64-software-conventions.md#examples-of-structure-alignment)

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)

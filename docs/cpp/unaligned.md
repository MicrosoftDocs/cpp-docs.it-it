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
ms.openlocfilehash: 5f93aaa79fd7c3664ecf80d5007d5954002bce4a
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80160645"
---
# <a name="__unaligned"></a>__unaligned

**Specifiche di Microsoft**. Quando si dichiara un puntatore con il modificatore **__unaligned** , il compilatore presuppone che il puntatore indirizzi i dati non allineati. Di conseguenza, il codice appropriato per la piattaforma viene generato per gestire letture e scritture non allineate tramite il puntatore.

## <a name="remarks"></a>Osservazioni

Questo modificatore descrive l'allineamento dei dati interessati dal puntatore. si presuppone che il puntatore venga allineato.

La necessità della parola chiave **__unaligned** varia a seconda della piattaforma e dell'ambiente. L'impossibilità di contrassegnare i dati in modo appropriato può comportare problemi di prestazioni, a causa di errori hardware. Il modificatore **__unaligned** non è valido per la piattaforma x86.

Per compatibilità con le versioni precedenti, **_unaligned** è un sinonimo di **__unaligned** a meno che non sia specificata l'opzione del compilatore [/za \(Disable Language Extensions)](../build/reference/za-ze-disable-language-extensions.md) .

Per ulteriori informazioni sull'allineamento, vedere:

- [align](../cpp/align-cpp.md)

- [Operatore __alignof](../cpp/alignof-operator.md)

- [pack](../preprocessor/pack.md)

- [/Zp (allineamento membri struct)](../build/reference/zp-struct-member-alignment.md)

- [Esempi di allineamento di strutture](../build/x64-software-conventions.md#examples-of-structure-alignment)

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)

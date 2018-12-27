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
ms.openlocfilehash: 8eb1b93aa55601125600b6c69d9bff3d9ca43aa3
ms.sourcegitcommit: ff3cbe4235b6c316edcc7677f79f70c3e784ad76
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/19/2018
ms.locfileid: "53626864"
---
# <a name="unaligned"></a>__unaligned

**Sezione specifica Microsoft**. Quando si dichiara un puntatore con il **unaligned** modificatore, il compilatore presuppone che il puntatore faccia riferimento a dati che non sono allineati. Di conseguenza, appropriata per la piattaforma di codice viene generato per gestire letture non allineate e scrive tramite il puntatore del mouse.

## <a name="remarks"></a>Note

Questo modificatore descrive l'allineamento dei dati di cui il puntatore; si presuppone che il puntatore stesso essere allineati.

La necessità per il **unaligned** parola chiave varia a seconda della piattaforma e l'ambiente. Errore per contrassegnare i dati in modo appropriato può comportare problemi compreso tra le penalizzazioni delle prestazioni agli errori hardware. Il **unaligned** modificatore non valido per x86 piattaforma.

Per garantire la compatibilità con le versioni precedenti, **_unaligned** è un sinonimo **unaligned** , a meno che l'opzione del compilatore [/Za \(Disabilita estensioni linguaggio)](../build/reference/za-ze-disable-language-extensions.md) viene specificato.

Per ulteriori informazioni sull'allineamento, vedere:

- [align](../cpp/align-cpp.md)

- [Operatore __alignof](../cpp/alignof-operator.md)

- [pack](../preprocessor/pack.md)

- [/Zp (allineamento membri struct)](../build/reference/zp-struct-member-alignment.md)

- [Esempi di allineamento di strutture](../build/x64-software-conventions.md#examples-of-structure-alignment)

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)
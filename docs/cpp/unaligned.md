---
title: unaligned | Microsoft Docs
ms.custom: ''
ms.date: 10/10/2018
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- __unaligned_cpp
- __unaligned
- _unaligned
dev_langs:
- C++
helpviewer_keywords:
- __unaligned keyword [C++]
ms.assetid: 0cd83aad-1840-47e3-ad33-59bfcbe6375b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 444bc3372b22676cacb3ee89b9c0ad92000cedcc
ms.sourcegitcommit: 8480f16893f09911f08a58caf684405404f7ac8e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/12/2018
ms.locfileid: "49161218"
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

- [Esempi di allineamento di strutture](../build/examples-of-structure-alignment.md)

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)
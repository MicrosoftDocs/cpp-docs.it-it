---
title: unaligned | Microsoft Docs
ms.custom: ''
ms.date: 03/09/2018
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- __unaligned_cpp
dev_langs:
- C++
helpviewer_keywords:
- __unaligned keyword [C++]
ms.assetid: 0cd83aad-1840-47e3-ad33-59bfcbe6375b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9593a0b3c6e6980f5be2ce9dcf13e505e94dcace
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46040199"
---
# <a name="unaligned"></a>__unaligned

**Sezione specifica Microsoft**. Quando si dichiara un puntatore con il **unaligned** modificatore, il compilatore presuppone che il puntatore faccia riferimento a dati che non sono allineati. Di conseguenza, appropriata per la piattaforma di codice viene generato per gestire letture non allineate e scrive tramite il puntatore del mouse.

## <a name="remarks"></a>Note

Questo modificatore descrive l'allineamento dei dati di cui il puntatore; si presuppone che il puntatore stesso essere allineati.

La necessità per il **unaligned** parola chiave varia a seconda della piattaforma e l'ambiente. Errore per contrassegnare i dati in modo appropriato può comportare problemi compreso tra le penalizzazioni delle prestazioni agli errori hardware. Il **unaligned** modificatore non valido per x86 piattaforma.

Per ulteriori informazioni sull'allineamento, vedere:

- [align](../cpp/align-cpp.md)

- [Operatore __alignof](../cpp/alignof-operator.md)

- [pack](../preprocessor/pack.md)

- [/Zp (allineamento membri struct)](../build/reference/zp-struct-member-alignment.md)

- [Esempi di allineamento di strutture](../build/examples-of-structure-alignment.md)

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)
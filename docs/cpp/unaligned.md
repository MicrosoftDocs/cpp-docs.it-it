---
title: unaligned | Documenti Microsoft
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
ms.openlocfilehash: d73b082b9f41d03eb0b1a8c9fe772351ff4da91f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32420915"
---
# <a name="unaligned"></a>__unaligned

**Sezione specifica Microsoft**. Quando si dichiara un puntatore con il modificatore `__unaligned`, il compilatore presuppone che il puntatore faccia riferimento a dati non allineati. Di conseguenza, appropriata per la piattaforma di codice viene generato per la gestione di operazioni di lettura non allineati e scrive tramite il puntatore.

## <a name="remarks"></a>Note

Questo modificatore descrive l'allineamento dei dati a cui punta il puntatore; si presuppone che il puntatore stesso essere allineati.

La necessità di `__unaligned` parola chiave si differenzia dall'ambiente e della piattaforma. Errore per contrassegnare i dati in modo appropriato può provocare problemi comprese tra prestazioni e gli errori hardware. Il `__unaligned` modificatore non è valido per x86 piattaforma.

Per ulteriori informazioni sull'allineamento, vedere:

- [align](../cpp/align-cpp.md)

- [Operatore __alignof](../cpp/alignof-operator.md)

- [pack](../preprocessor/pack.md)

- [/Zp (allineamento membri struct)](../build/reference/zp-struct-member-alignment.md)

- [Esempi di allineamento di strutture](../build/examples-of-structure-alignment.md)

## <a name="see-also"></a>Vedere anche

[Parole chiave](../cpp/keywords-cpp.md)

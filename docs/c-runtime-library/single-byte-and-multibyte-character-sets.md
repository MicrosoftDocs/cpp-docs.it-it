---
title: Set di caratteri a un byte e multibyte | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: ''
ms.topic: article
f1_keywords:
- c.character.multibyte
dev_langs:
- C++
helpviewer_keywords:
- SBCS (single byte character set)
- MBCS [C++], about MBCS
- character sets [C++], multibyte
- character sets [C++], single byte
ms.assetid: 2cbc78ea-33c0-4cfb-b0df-7ce2458431ce
caps.latest.revision: 8
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 1d6c339f1ab2eecfac5f037e711f19d5ee9323fc
ms.sourcegitcommit: ef859ddf5afea903711e36bfd89a72389a12a8d6
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 04/20/2018
---
# <a name="single-byte-and-multibyte-character-sets"></a>Set di caratteri a byte singolo e multibyte

Il set di caratteri ASCII definisce i caratteri inclusi nell'intervallo da 0x00 a 0x7F. Sono disponibili altri set di caratteri, principalmente europei, che definiscono i caratteri inclusi nell'intervallo da 0x00 a 0x7F come il set di caratteri ASCII, e che includono anche un set di caratteri estesi inclusi nell'intervallo da 0x80 a 0xFF. Pertanto, un set di caratteri a 8 bit o a byte singolo (SBCS) è sufficiente per rappresentare sia il set di caratteri ASCII che i set di caratteri di molte lingue europee. Tuttavia, alcuni set di caratteri non europei, come il Kanji giapponese, includono molti più caratteri di quelli che possono essere rappresentati in uno schema di codifica a byte singolo e pertanto richiedono una codifica con set di caratteri multibyte (MBCS).

> [!NOTE]
> Molte routine SBCS nella libreria di runtime Microsoft gestiscono byte, caratteri e stringhe multibyte in modo appropriato. Molti set di caratteri multibyte definiscono il set di caratteri ASCII come subset. In molti set di caratteri multibyte, ogni carattere incluso nell'intervallo da 0x00 a 0x7F è identico al carattere che ha lo stesso valore nel set di caratteri ASCII. Ad esempio, sia nelle stringhe di caratteri ASCII che MBCS, il carattere NULL ('\0') a un byte ha il valore 0x00 e indica il carattere Null di terminazione.

Un set di caratteri multibyte può essere costituito sia da caratteri a un byte che a due byte. Pertanto una stringa di caratteri multibyte può contenere una combinazione di caratteri a byte singolo e a byte doppio. Un carattere multibyte a due byte ha un byte iniziale e un byte finale. In un determinato set di caratteri multibyte, i byte di apertura e di chiusura sono inclusi in un intervallo specifico. Quando questi intervalli si sovrappongono, può essere necessario valutare nel particolare contesto se un determinato byte funga da byte iniziale o finale.

## <a name="see-also"></a>Vedere anche

[Internazionalizzazione](../c-runtime-library/internationalization.md)<br/>
[Routine di Universal C Runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)<br/>

---
title: Unicode e MBCS | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- _mbcs
dev_langs:
- C++
helpviewer_keywords:
- MBCS [C++], Unicode
- MFC [C++], character sets
- character sets [C++], multibyte
- run-time libraries [C++], language portability
- character sets [C++], Unicode
- Unicode [C++], MFC and C run-time functions
- multibyte characters [C++]
- runtime [C++], language portability
ms.assetid: 677baec6-71b4-4579-94df-64f18bc117c4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3d57206afa5174db4d4ddf22817361b688feacf6
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46375679"
---
# <a name="unicode-and-mbcs"></a>Unicode e MBCS

La libreria Microsoft Foundation Classes (MFC), la libreria run-time di C per Visual C++ e l'ambiente di sviluppo di Visual C++ sono abilitate per facilitare la programmazione internazionale. Forniscono:

- Supporto per lo standard Unicode su Windows. Unicode è lo standard corrente e se ne consiglia l'utilizzo ovunque sia possibile.

   Unicode è un carattere a 16 bit di codifica, fornire sufficienti codifiche per tutte le lingue. Sono inclusi tutti i caratteri ASCII in formato Unicode come caratteri estesi.

- Supporto per una forma di set di caratteri multibyte (MBCS) denominato double byte character set (DBCS) in tutte le piattaforme.

   1 o 2 byte sono composti da caratteri DBCS. Alcuni intervalli di byte sono riservare per l'uso come byte di apertura. Un byte di apertura specifica che lo e il byte di chiusura seguenti costituiscono un singolo carattere wide a 2-byte. Deve tenere traccia di quali byte sono byte di apertura. In un determinato set di caratteri multibyte, i byte di apertura e di chiusura sono inclusi in un intervallo specifico. Quando questi intervalli si sovrappongono, potrebbe essere necessario valutare il contesto per determinare se un determinato byte funga da byte iniziale o finale.

- Supporto per gli strumenti che semplificano la programmazione MBCS di applicazioni scritte per i mercati internazionali.

   Quando eseguito su una versione del sistema operativo Windows, il sistema di sviluppo di Visual C++, tra cui l'editor del codice sorgente integrato, il debugger e strumenti da riga di comando, è completamente abilitata per MBCS. Per altre informazioni, vedere [supporto per MBCS in Visual C++](../text/mbcs-support-in-visual-cpp.md).

> [!NOTE]
>  In questa documentazione, MBCS viene usato per descrivere tutto il supporto per i caratteri multibyte non Unicode. In Visual C++, MBCS significa sempre DBCS. Set di caratteri maggiore di 2 byte non sono supportati.

Per definizione, il set di caratteri ASCII è un subset di tutti i set di caratteri multibyte. In molti set di caratteri multibyte, ogni carattere incluso nell'intervallo da 0x00 a 0x7F è identico al carattere che ha lo stesso valore nel set di caratteri ASCII. Ad esempio, nelle stringhe di caratteri ASCII e MBCS, il carattere NULL di 1 byte ('\0') ha il valore 0x00 e indica il carattere di terminazione null.

## <a name="see-also"></a>Vedere anche

[Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)<br/>
[Abilitazione di risorse internazionali](../text/international-enabling.md)
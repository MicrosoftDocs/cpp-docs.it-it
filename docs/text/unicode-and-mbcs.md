---
description: 'Altre informazioni su: Unicode e MBCS'
title: Unicode e MBCS
ms.date: 11/04/2016
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
ms.openlocfilehash: 4fc5afc447612a3f08067185072cd4f116ab80c3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97114975"
---
# <a name="unicode-and-mbcs"></a>Unicode e MBCS

La libreria Microsoft Foundation Classes (MFC), la libreria di runtime del linguaggio C per Visual C++ e l'ambiente di sviluppo Visual C++ sono abilitate per supportare la programmazione internazionale. Offrono le caratteristiche seguenti:

- Supporto per lo standard Unicode in Windows. Unicode è lo standard corrente e se ne consiglia l'utilizzo ovunque sia possibile.

   Unicode è una codifica dei caratteri a 16 bit che fornisce codifiche sufficienti per tutte le lingue. Tutti i caratteri ASCII sono inclusi in Unicode come caratteri ampliati.

- Supporto per un modulo di Multibyte Character Set (MBCS) denominato Double-byte character set (DBCS) in tutte le piattaforme.

   I caratteri DBCS sono composti da 1 o 2 byte. Alcuni intervalli di byte vengono accantonati per l'uso come byte di apertura. Un byte iniziale specifica che e il byte finale seguente costituiscono un singolo carattere a 2 byte. È necessario tenere traccia dei byte di apertura. In un determinato set di caratteri multibyte, i byte di apertura e di chiusura sono inclusi in un intervallo specifico. Quando questi intervalli si sovrappongono, potrebbe essere necessario valutare il contesto per determinare se un byte specificato funziona come un byte iniziale o finale.

- Supporto per strumenti che semplificano la programmazione MBCS di applicazioni scritte per i mercati internazionali.

   Quando viene eseguito in una versione abilitata per MBCS del sistema operativo Windows, il sistema di sviluppo Visual C++, tra cui l'editor del codice sorgente integrato, il debugger e gli strumenti da riga di comando, è abilitato per MBCS. Per ulteriori informazioni, vedere [supporto MBCS in Visual C++](../text/mbcs-support-in-visual-cpp.md).

> [!NOTE]
> In questa documentazione, MBCS viene utilizzato per descrivere tutto il supporto non Unicode per i caratteri multibyte. In Visual C++ il formato MBCS corrisponde sempre a DBCS. I set di caratteri più grandi di 2 byte non sono supportati.

Per definizione, il set di caratteri ASCII è un subset di tutti i set di caratteri multibyte. In molti set di caratteri multibyte, ogni carattere incluso nell'intervallo da 0x00 a 0x7F è identico al carattere che ha lo stesso valore nel set di caratteri ASCII. Ad esempio, nelle stringhe di caratteri ASCII e MBCS, il carattere NULL a 1 byte (' \ 0') ha il valore 0x00 e indica il carattere null di terminazione.

## <a name="see-also"></a>Vedi anche

[Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)<br/>
[Abilitazione internazionale](../text/international-enabling.md)

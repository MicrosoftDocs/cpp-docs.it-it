---
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
ms.openlocfilehash: 063c8b39ee0d29403b382b57a236f2a3e8759e3f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375749"
---
# <a name="unicode-and-mbcs"></a>Unicode e MBCS

La libreria microsoft Foundation Classes (MFC), la libreria di runtime del linguaggio C per Visual C, e l'ambiente di sviluppo di Visual C, sono abilitate per facilitare la programmazione internazionale. Offrono le caratteristiche seguenti:

- Supporto per lo standard Unicode in Windows. Unicode è lo standard corrente e se ne consiglia l'utilizzo ovunque sia possibile.

   Unicode è una codifica dei caratteri a 16 bit, che fornisce codifiche sufficienti per tutte le lingue. Tutti i caratteri ASCII sono inclusi in Unicode come caratteri allargati.

- Supporto per una forma di set di caratteri multibyte (MBCS) denominata set di caratteri a byte doppio (DBCS) su tutte le piattaforme.

   I caratteri DBCS sono composti da 1 o 2 byte. Alcuni intervalli di byte vengono messi da parte per l'utilizzo come byte iniziali. Un byte iniziale specifica che esso e il byte finale seguente comprendono un singolo carattere a 2 byte. È necessario tenere traccia di quali byte sono byte iniziali. In un determinato set di caratteri multibyte, i byte di apertura e di chiusura sono inclusi in un intervallo specifico. Quando questi intervalli si sovrappongono, potrebbe essere necessario valutare il contesto per determinare se un determinato byte funziona come un byte iniziale o un byte finale.

- Supporto per strumenti che semplificano la programmazione MBCS di applicazioni scritte per i mercati internazionali.

   Quando viene eseguito su una versione del sistema operativo Windows abilitata per MBCS, il sistema di sviluppo di Visual C, inclusi l'editor integrato del codice sorgente, il debugger e gli strumenti della riga di comando, è completamente abilitato per MBCS. Per ulteriori informazioni, vedere [Supporto di MBCS in Visual C](../text/mbcs-support-in-visual-cpp.md)

> [!NOTE]
> In questa documentazione, MBCS viene utilizzato per descrivere tutto il supporto non Unicode per i caratteri multibyte. In Visual C, MBCS significa sempre DBCS. I set di caratteri più larghi di 2 byte non sono supportati.

Per definizione, il set di caratteri ASCII è un sottoinsieme di tutti i set di caratteri multibyte. In molti set di caratteri multibyte, ogni carattere incluso nell'intervallo da 0x00 a 0x7F è identico al carattere che ha lo stesso valore nel set di caratteri ASCII. Ad esempio, nelle stringhe di caratteri ASCII e MBCS, il carattere NULL a 1 byte (''0') ha il valore 0x00 e indica il carattere di terminazione null.

## <a name="see-also"></a>Vedere anche

[Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)<br/>
[Abilitazione di risorse internazionali](../text/international-enabling.md)

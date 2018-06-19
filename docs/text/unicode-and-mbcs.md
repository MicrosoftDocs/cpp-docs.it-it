---
title: Unicode e MBCS | Documenti Microsoft
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
author: ghogen
ms.author: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 2e10c07e11cbe940b5f7cfee460ddd33f6f5ff1f
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33857350"
---
# <a name="unicode-and-mbcs"></a>Unicode e MBCS
La libreria Microsoft Foundation Classes (MFC), la libreria di runtime C per Visual C++ e l'ambiente di sviluppo di Visual C++ sono abilitati per agevolare la programmazione internazionale. Forniscono:  
  
-   Supporto per lo standard Unicode su Windows. Unicode è lo standard corrente e se ne consiglia l'utilizzo ovunque sia possibile.  
  
     Unicode è un carattere a 16 bit di codifica, fornire un'adeguata codifica per tutte le lingue. Tutti i caratteri ASCII sono inclusi in formato Unicode come caratteri estesi.  
  
-   Supporto per una forma di set di caratteri multibyte (MBCS) chiamato set di caratteri a byte doppio (DBCS) in tutte le piattaforme.  
  
     Caratteri DBCS sono costituiti da 1 o 2 byte. Alcuni intervalli di byte sono riservare per l'uso come byte di apertura. Un byte iniziale specifica che il byte e quello successivo itinerario costituiscono un singolo carattere wide a 2 byte. Deve tenere traccia di byte sono byte di apertura. In un determinato set di caratteri multibyte, i byte di apertura e di chiusura sono inclusi in un intervallo specifico. Quando questi intervalli si sovrappongono, potrebbe essere necessario valutare il contesto per determinare se un determinato byte funga da byte iniziale o finale.  
  
-   Supporto per gli strumenti che semplificano la programmazione MBCS di applicazioni scritte per i mercati internazionali.  
  
     Quando eseguito su una versione del sistema operativo Windows, il sistema di sviluppo di Visual C++, inclusi l'editor del codice sorgente integrato, debugger e strumenti da riga di comando, è completamente abilitato MBCS. Per ulteriori informazioni, vedere [supporto per MBCS in Visual C++](../text/mbcs-support-in-visual-cpp.md).  
  
> [!NOTE]
>  In questa documentazione, MBCS viene utilizzato per descrivere tutto il supporto tecnico non Unicode per i caratteri multibyte. In Visual C++, MBCS significa sempre DBCS. Set di caratteri maggiore di 2 byte non sono supportati.  
  
 Per definizione, il set di caratteri ASCII è un subset di tutti i set di caratteri multibyte. In molti set di caratteri multibyte, ogni carattere incluso nell'intervallo da 0x00 a 0x7F è identico al carattere che ha lo stesso valore nel set di caratteri ASCII. Ad esempio, nelle stringhe di caratteri ASCII e MBCS, 1 byte **NULL** ha il valore 0x00 e indica il carattere di terminazione null di caratteri ('\0').  
  
## <a name="see-also"></a>Vedere anche  
 [Testo e stringhe](../text/text-and-strings-in-visual-cpp.md)   
 [Abilitazione di risorse internazionali](../text/international-enabling.md)
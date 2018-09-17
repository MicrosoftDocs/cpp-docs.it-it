---
title: Blocchi di descrizione | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- description blocks
- NMAKE program, description blocks
- blocks, description
ms.assetid: 1321f228-d389-40ac-b0cd-4f6e9293602b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d83e010f690f96afa5a57eb89ca1e8f4cf444225
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45699660"
---
# <a name="description-blocks"></a>Blocchi di descrizione

Un blocco di descrizione è una linea di dipendenza seguita facoltativamente da un blocco di comandi:

```
targets... : dependents...
    commands...
```

Una linea di dipendenza specifica una o più destinazioni e zero o più dipendenti. All'inizio della riga deve essere una destinazione. Destinazioni separate da oggetti dipendenti da due punti (:), spazi o tabulazioni sono consentiti. Per suddividere la riga, usare una barra rovesciata (\) dopo una destinazione o dipendenti. Se una destinazione non esiste, ha un timestamp precedente a quello di un dipendente o è un [pseudo](../build/pseudotargets.md), NMAKE esegue i comandi. Se un dipendente è una destinazione di un' posizione e non esiste o non è aggiornato rispetto al proprio dipendenti, viene eseguito l'aggiornamento dipendenti prima di aggiornare la dipendenza corrente.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

[Destinazioni](../build/targets.md)

[Dipendenti](../build/dependents.md)

## <a name="see-also"></a>Vedere anche

[Riferimenti a NMAKE](../build/nmake-reference.md)
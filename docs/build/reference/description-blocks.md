---
title: Blocchi di descrizione
ms.date: 11/04/2016
helpviewer_keywords:
- description blocks
- NMAKE program, description blocks
- blocks, description
ms.assetid: 1321f228-d389-40ac-b0cd-4f6e9293602b
ms.openlocfilehash: da9265d6b0026bb47496d3aa58847824b5d634d2
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57827729"
---
# <a name="description-blocks"></a>Blocchi di descrizione

Un blocco di descrizione è una linea di dipendenza seguita facoltativamente da un blocco di comandi:

```
targets... : dependents...
    commands...
```

Una linea di dipendenza specifica una o più destinazioni e zero o più dipendenti. All'inizio della riga deve essere una destinazione. Destinazioni separate da oggetti dipendenti da due punti (:), spazi o tabulazioni sono consentiti. Per suddividere la riga, usare una barra rovesciata (\) dopo una destinazione o dipendenti. Se una destinazione non esiste, ha un timestamp precedente a quello di un dipendente o è un [pseudo](pseudotargets.md), NMAKE esegue i comandi. Se un dipendente è una destinazione di un' posizione e non esiste o non è aggiornato rispetto al proprio dipendenti, viene eseguito l'aggiornamento dipendenti prima di aggiornare la dipendenza corrente.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

[Destinazioni](targets.md)

[Dipendenti](dependents.md)

## <a name="see-also"></a>Vedere anche

[Riferimenti a NMAKE](nmake-reference.md)

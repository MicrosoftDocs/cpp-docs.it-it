---
title: /REBASE
ms.date: 11/04/2016
f1_keywords:
- /rebase
helpviewer_keywords:
- base addresses [C++]
- -REBASE editbin option
- REBASE editbin option
- DLLs [C++], linking
- executable files [C++], base address
- /REBASE editbin option [C++]
ms.assetid: 3f89d874-af5c-485b-974b-fd205f6e1a4b
ms.openlocfilehash: 42cbcb911fcd0aa7753d84aae5523d28371b9972
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57815400"
---
# <a name="rebase"></a>/REBASE

```
/REBASE[:modifiers]
```

## <a name="remarks"></a>Note

Questa opzione imposta gli indirizzi di base per i file specificati. EDITBIN assegna nuovi indirizzi di base in uno spazio di indirizzi contigui in base alle dimensioni di ogni file arrotondato un massimo di 64 KB più vicino. Per informazioni dettagliate sugli indirizzi di base, vedere la [indirizzo di Base](base-base-address.md) (/ BASE) l'opzione del linker.

Specificare il programma i file eseguibili e DLL nel *file* argomento nella riga di comando EDITBIN nell'ordine in cui sono baserà. È possibile specificare facoltativamente uno o più *modificatori*, ciascuno separato da virgole (**,**):

|Modificatore|Operazione|
|--------------|------------|
|**BASE=**<em>address</em>|Fornisce un indirizzo iniziale per la riassegnazione di indirizzi di base per i file. Specificare *indirizzo* in notazione decimale o del linguaggio C. Se BASE non viene specificata, l'impostazione predefinita l'indirizzo di base iniziale è 0x400000. Deve essere specificato se verso il basso viene usato, BASE, e *indirizzo* imposta la fine dell'intervallo di indirizzi di base.|
|**BASEFILE**|Crea un file denominato COFFBASE. TXT, che è un file di testo nel formato previsto del collegamento/opzione di BASE.|
|**DOWN**|Indica a EDITBIN riassegnare gli indirizzi di base verso il basso dall'indirizzo finale. I file vengono riassegnati nell'ordine specificato, con il primo file che si trova nel primo indirizzo disponibile sotto la fine dell'intervallo di indirizzi. BASE deve essere utilizzata con verso il basso per garantire uno spazio indirizzi sufficiente per basare i file. Per determinare lo spazio degli indirizzi necessaria per i file specificati, eseguire EDITBIN con /REBASE sui file e aggiungere 64 KB per le dimensioni totali visualizzate.|

## <a name="see-also"></a>Vedere anche

[Opzioni di EDITBIN](editbin-options.md)

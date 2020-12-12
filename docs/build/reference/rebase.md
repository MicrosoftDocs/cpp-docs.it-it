---
description: Altre informazioni su:/REBASE
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
ms.openlocfilehash: 6cbbf0a21bd9306167fb165b63c22e810518e161
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97225336"
---
# <a name="rebase"></a>/REBASE

```
/REBASE[:modifiers]
```

## <a name="remarks"></a>Commenti

Questa opzione consente di impostare gli indirizzi di base per i file specificati. EDITBIN) assegna i nuovi indirizzi di base in uno spazio di indirizzi contiguo in base alle dimensioni di ogni file arrotondato per eccesso al 64 KB più vicino. Per informazioni dettagliate sugli indirizzi di base, vedere l'opzione del linker [indirizzo di base](base-base-address.md) (/base).

Specificare i file eseguibili del programma e le dll nell'argomento *files* nella riga di comando di EDITBIN) nell'ordine in cui devono essere basati. Facoltativamente, è possibile specificare uno o più *modificatori*, separati da una virgola (**,**):

|Modificatore|Azione|
|--------------|------------|
|**Base =**<em>Indirizzo</em>|Fornisce un indirizzo iniziale per riassegnare gli indirizzi di base ai file. Specificare l' *Indirizzo* in notazione decimale o in linguaggio C. Se la BASE non è specificata, l'indirizzo di base iniziale predefinito è 0x400000. Se viene utilizzato DOWN, è necessario specificare BASE e *Address* imposta la fine dell'intervallo di indirizzi di base.|
|**BASEFILE**|Crea un file denominato COFFBASE.TXT, ovvero un file di testo nel formato previsto dall'opzione/BASE del collegamento.|
|**GIÙ**|Indica a EDITBIN) di riassegnare gli indirizzi di base verso il basso da un indirizzo finale. I file vengono riassegnati nell'ordine specificato e il primo file si trova nell'indirizzo più alto possibile al di sotto della fine dell'intervallo di indirizzi. La BASE deve essere usata con il basso per garantire uno spazio di indirizzi sufficiente per l'assegnazione dei file. Per determinare lo spazio di indirizzi necessario per i file specificati, eseguire EDITBIN) con/REBASE nei file e aggiungere 64 KB alle dimensioni totali visualizzate.|

## <a name="see-also"></a>Vedi anche

[Opzioni di EDITBIN)](editbin-options.md)

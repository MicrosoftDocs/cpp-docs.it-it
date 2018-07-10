---
title: -REBASE | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /rebase
dev_langs:
- C++
helpviewer_keywords:
- base addresses [C++]
- -REBASE editbin option
- REBASE editbin option
- DLLs [C++], linking
- executable files [C++], base address
- /REBASE editbin option [C++]
ms.assetid: 3f89d874-af5c-485b-974b-fd205f6e1a4b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4a5e2b68768b01d71532c358a14c53d8a033e1ed
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32377089"
---
# <a name="rebase"></a>/REBASE
```  
/REBASE[:modifiers]  
```  
  
## <a name="remarks"></a>Note  
 Questa opzione imposta gli indirizzi di base per i file specificati. EDITBIN assegna nuovi indirizzi di base in uno spazio di indirizzi contiguo in base alle dimensioni di ogni file arrotondata di 64 KB più vicino. Per informazioni dettagliate sugli indirizzi di base, vedere il [indirizzo di Base](../../build/reference/base-base-address.md) (/base) l'opzione del linker.  
  
 Specificare i file eseguibili del programma e DLL nel *file* argomento nella riga di comando EDITBIN nell'ordine in cui vengono baserà. È possibile specificare facoltativamente uno o più *modificatori*, ciascuno separato da una virgola (**,**):  
  
|Modificatore|Operazione|  
|--------------|------------|  
|BASE **= * * * indirizzo*|Fornisce un indirizzo iniziale per la riassegnazione di indirizzi di base per i file. Specificare *indirizzo* in notazione decimale o in linguaggio C. Se non si specifica BASE, il valore predefinito l'indirizzo di base iniziale è 0x400000. Specificare se verso il basso viene utilizzato, BASE, e *indirizzo* imposta la fine dell'intervallo di indirizzi di base.|  
|BASEFILE|Crea un file denominato COFFBASE. TXT, che è un file di testo nel formato previsto dal collegamento/opzione di BASE.|  
|GIÙ|Indica a EDITBIN riassegnare gli indirizzi di base verso il basso da un indirizzo finale. I file vengono riassegnati nell'ordine specificato, con il primo file che si trova nell'indirizzo più alto possibile oltre la fine dell'intervallo di indirizzi. BASE deve essere utilizzata con verso il basso per garantire una sufficiente spazio di indirizzi per basare i file. Per determinare lo spazio di indirizzi necessario per i file specificati, eseguire EDITBIN con /REBASE nei file e aggiungere 64 KB per le dimensioni totali visualizzate.|  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni di EDITBIN](../../build/reference/editbin-options.md)
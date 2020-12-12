---
description: 'Altre informazioni su: implementazione di un gestore di stringhe personalizzato (metodo avanzato)'
title: Implementazione di una gestione stringhe personalizzata (metodo avanzato)
ms.date: 11/04/2016
helpviewer_keywords:
- IAtlStringMgr class, using
ms.assetid: 64ab7da9-47c1-4c4a-9cd7-4cc37e7f3f57
ms.openlocfilehash: 042c0759076d14e2fd0cf8dd91e34c4f1d8bb534
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97166967"
---
# <a name="implementation-of-a-custom-string-manager-advanced-method"></a>Implementazione di una gestione stringhe personalizzata (metodo avanzato)

In situazioni specializzate, potrebbe essere necessario implementare un gestore di stringhe personalizzato che non limita semplicemente a modificare quale heap viene utilizzato per allocare memoria. In questa situazione, è necessario implementare manualmente l'interfaccia [IAtlStringMgr](../atl-mfc-shared/reference/iatlstringmgr-class.md) come gestore di stringhe personalizzato.

A tale scopo, è importante comprendere innanzitutto in che modo [CStringT](../atl-mfc-shared/reference/cstringt-class.md) utilizza tale interfaccia per gestire i dati di stringa. Ogni istanza di `CStringT` dispone di un puntatore a una struttura [CStringData](../atl-mfc-shared/reference/cstringdata-class.md) . Questa struttura a lunghezza variabile contiene informazioni importanti sulla stringa (ad esempio length), nonché sui dati di tipo carattere effettivi per la stringa. Ogni gestore di stringhe personalizzato è responsabile dell'allocazione e liberazione di queste strutture sulla richiesta di `CStringT` .

La `CStringData` struttura è costituita da quattro campi:

- [pStringMgr](../atl-mfc-shared/reference/cstringdata-class.md#pstringmgr) Questo campo punta all' `IAtlStringMgr` interfaccia utilizzata per gestire i dati stringa. Quando `CStringT` deve riallocare o liberare il buffer di stringa, chiama i metodi Reallocate o Free di questa interfaccia, passando la `CStringData` struttura come parametro. Quando si alloca una `CStringData` struttura in Gestione stringhe, è necessario impostare questo campo in modo che punti al gestore di stringhe personalizzato.

- [nDataLength](../atl-mfc-shared/reference/cstringdata-class.md#ndatalength) Questo campo contiene la lunghezza logica corrente della stringa archiviata nel buffer, escluso il valore null di terminazione. `CStringT` Aggiorna questo campo quando viene modificata la lunghezza della stringa. Quando si alloca una `CStringData` struttura, il gestore di stringhe deve impostare questo campo su zero. Quando si rialloca una `CStringData` struttura, il gestore di stringhe personalizzato deve lasciare invariato questo campo.

- [nAllocLength](../atl-mfc-shared/reference/cstringdata-class.md#nalloclength) Questo campo contiene il numero massimo di caratteri (escluso il carattere null di terminazione) che può essere archiviato in questo buffer di stringa senza riallocarlo. Quando `CStringT` deve aumentare la lunghezza logica della stringa, verifica innanzitutto questo campo per assicurarsi che lo spazio nel buffer sia sufficiente. Se il controllo ha esito negativo, effettua una `CStringT` chiamata al gestore di stringhe personalizzato per riallocare il buffer. Quando si alloca o si rialloca una `CStringData` struttura, è necessario impostare questo campo su almeno il numero di caratteri richiesti nel parametro *nChars* su [IAtlStringMgr:: allocate](../atl-mfc-shared/reference/iatlstringmgr-class.md#allocate) o [IAtlStringMgr:: Reallocate](../atl-mfc-shared/reference/iatlstringmgr-class.md#reallocate). Se è presente più spazio nel buffer rispetto a quello richiesto, è possibile impostare questo valore in modo da riflettere la quantità effettiva di spazio disponibile. In questo modo è possibile `CStringT` aumentare la stringa per riempire l'intero spazio allocato prima di richiamarlo in Gestione stringhe per riallocare il buffer.

- [nRefs](../atl-mfc-shared/reference/cstringdata-class.md#nrefs) Questo campo contiene il conteggio dei riferimenti corrente del buffer di stringa. Se il valore è uno, una singola istanza di `CStringT` sta utilizzando il buffer. Inoltre, l'istanza può leggere e modificare il contenuto del buffer. Se il valore è maggiore di uno, più istanze di `CStringT` possono utilizzare il buffer. Poiché il buffer di caratteri è condiviso, le `CStringT` istanze possono solo leggere il contenuto del buffer. Per modificare il contenuto, `CStringT` crea prima di tutto una copia del buffer. Se il valore è negativo, solo un'istanza di `CStringT` sta utilizzando il buffer. In questo caso, il buffer viene considerato bloccato. Quando un' `CStringT` istanza utilizza un buffer bloccato, nessun'altra istanza di `CStringT` può condividere il buffer. Al contrario, queste istanze creano una copia del buffer prima di modificare il contenuto. Inoltre, l' `CStringT` istanza che utilizza il buffer bloccato non tenta di condividere il buffer di qualsiasi altra `CStringT` istanza assegnata. In questo caso, l' `CStringT` istanza copia l'altra stringa nel buffer bloccato.

   Quando si alloca una `CStringData` struttura, è necessario impostare questo campo in modo che corrisponda al tipo di condivisione consentito per il buffer. Per la maggior parte delle implementazioni, impostare questo valore su uno. Questo consente il consueto comportamento di condivisione copy-on-Write. Tuttavia, se il gestore di stringhe non supporta la condivisione del buffer di stringa, impostare questo campo su uno stato bloccato. Questa operazione impone `CStringT` a di utilizzare solo questo buffer per l'istanza di `CStringT` che lo ha allocato.

## <a name="see-also"></a>Vedi anche

[Gestione della memoria con CStringt](../atl-mfc-shared/memory-management-with-cstringt.md)

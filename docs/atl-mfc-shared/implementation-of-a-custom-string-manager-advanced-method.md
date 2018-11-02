---
title: Implementazione di una gestione stringhe personalizzata (metodo avanzato)
ms.date: 11/04/2016
helpviewer_keywords:
- IAtlStringMgr class, using
ms.assetid: 64ab7da9-47c1-4c4a-9cd7-4cc37e7f3f57
ms.openlocfilehash: 824e9b1b71615bd3fc488052d5e713dee2e0d015
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50524818"
---
# <a name="implementation-of-a-custom-string-manager-advanced-method"></a>Implementazione di una gestione stringhe personalizzata (metodo avanzato)

In situazioni specifiche, si potrebbe voler implementare una gestione stringhe personalizzata che oltre la semplice modifica dell'heap viene usato per allocare memoria. In questo caso, è necessario implementare manualmente il [IAtlStringMgr](../atl-mfc-shared/reference/iatlstringmgr-class.md) interfaccia come la gestione di stringhe personalizzate.

Per eseguire questa operazione, è importante capire come [CStringT](../atl-mfc-shared/reference/cstringt-class.md) usa tale interfaccia per gestire i dati di stringa. Tutte le istanze di `CStringT` è un puntatore a un [CStringData](../atl-mfc-shared/reference/cstringdata-class.md) struttura. Questa struttura a lunghezza variabile contiene importanti informazioni sulla stringa (ad esempio lunghezza), nonché i dati effettivi della stringa. Ogni gestione stringhe personalizzata è responsabile dell'allocazione e liberazione di tali strutture su richiesta del `CStringT`.

Il `CStringData` struttura comprende quattro campi:

- [pStringMgr](../atl-mfc-shared/reference/cstringdata-class.md#pstringmgr) questo campo punta al `IAtlStringMgr` interfaccia utilizzata per gestire i dati stringa. Quando `CStringT` è necessario riallocare o liberare il buffer di stringa chiama la riallocazione o metodi gratuiti di questa interfaccia, passando il `CStringData` struttura come parametro. Quando si alloca un `CStringData` struttura nel gestore di stringhe, è necessario impostare questo campo in modo che punti al responsabile di stringa personalizzato.

- [nDataLength](../atl-mfc-shared/reference/cstringdata-class.md#ndatalength) questo campo contiene la lunghezza logica corrente della stringa memorizzata nel buffer escluso il carattere di terminazione null. `CStringT` Aggiorna questo campo quando cambia la lunghezza della stringa. Quando si alloca un `CStringData` struttura, la gestione di stringhe deve impostare questo campo su zero. Riallocare un `CStringData` struttura, la gestione stringhe personalizzata deve lasciare questo campo non modificato.

- [nAllocLength](../atl-mfc-shared/reference/cstringdata-class.md#nalloclength) questo campo contiene il numero massimo di caratteri (escluso il carattere di terminazione null) che possono essere archiviati nel buffer di stringhe senza. Ogni volta che `CStringT` deve aumentare la lunghezza della stringa, logica per prima cosa controlla questo campo per assicurarsi che sia presente spazio sufficiente nel buffer. Se il controllo ha esito negativo, `CStringT` chiamate nel gestore di stringhe personalizzate da riallocare il buffer. Quando allocare o riallocare una `CStringData` struttura, è necessario impostare questo campo per almeno il numero di caratteri richiesti nel *nChars* parametro [IAtlStringMgr:: allocate](../atl-mfc-shared/reference/iatlstringmgr-class.md#allocate) o[IAtlStringMgr:: ReAllocate](../atl-mfc-shared/reference/iatlstringmgr-class.md#reallocate). Se è presente più spazio nel buffer rispetto a quanto richiesto, è possibile impostare questo valore in modo da riflettere la quantità effettiva di spazio disponibile. In questo modo `CStringT` ad aumentare la stringa a occupare tutto lo spazio allocato prima di chiamare nuovamente nel gestore di stringa per riallocare il buffer.

- [nRefs](../atl-mfc-shared/reference/cstringdata-class.md#nrefs) questo campo contiene il conteggio di riferimenti corrente del buffer di stringa. Se il valore è uno, quindi una singola istanza di `CStringT` utilizza il buffer. Inoltre, l'istanza è consentito leggere e modificare il contenuto del buffer. Se il valore è maggiore di uno, più istanze di `CStringT` può utilizzare il buffer. Poiché il buffer di caratteri è condiviso, `CStringT` istanze possono solo leggere il contenuto del buffer. Per modificare il contenuto, `CStringT` esegue innanzitutto una copia del buffer. Se il valore è negativo, solo un'istanza di `CStringT` utilizza il buffer. In questo caso, il buffer viene considerato bloccato. Quando un `CStringT` istanza non usa un buffer bloccato altre istanze di `CStringT` può condividere il buffer. Queste istanze, invece, creare una copia del buffer prima la modifica del contenuto. Inoltre, il `CStringT` istanza utilizzando il buffer bloccato non prova a condividere il buffer di qualsiasi altro `CStringT` istanza assegnata a esso. In questo caso, il `CStringT` istanza copia di altra stringa nel buffer bloccato.

   Quando si alloca un `CStringData` struttura, è necessario impostare questo campo in base al tipo di condivisione consentita per il buffer. Per la maggior parte delle implementazioni, impostare questo valore su uno. In questo modo il normale funzionamento della condivisione copy-on-write. Tuttavia, se la gestione di stringhe non supporta la condivisione di buffer di stringa, è possibile impostare questo campo a uno stato bloccato. In tal modo `CStringT` da usare solo questo buffer per l'istanza di `CStringT` che viene allocata.

## <a name="see-also"></a>Vedere anche

[Gestione della memoria con CStringT](../atl-mfc-shared/memory-management-with-cstringt.md)


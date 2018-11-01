---
title: 'CFixedStringT: Esempio di una gestione stringhe personalizzata'
ms.date: 11/04/2016
helpviewer_keywords:
- CFixedStringT class, using a custom string manager
ms.assetid: 1cf11fd7-51b8-4b94-87af-02bc25f47dd6
ms.openlocfilehash: d35c4c998a6e5913cd972312c511b2a102480c81
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50663163"
---
# <a name="cfixedstringt-example-of-a-custom-string-manager"></a>CFixedStringT: Esempio di una gestione stringhe personalizzata

La libreria ATL implementa un esempio di una gestione stringhe personalizzata utilizzato dalla classe [CFixedStringT](../atl-mfc-shared/reference/cfixedstringt-class.md), detta **CFixedStringMgr**. `CFixedStringT` è derivato da [CStringT](../atl-mfc-shared/reference/cstringt-class.md) e implementa una stringa che alloca i caratteri come parte delle `CFixedStringT` dell'oggetto stesso, purché la stringa è minore della lunghezza specificata dal `t_nChars` parametro di modello di `CFixedStringT`. Con questo approccio, la stringa non è necessario l'heap affatto, a meno che la lunghezza della stringa di dimensioni superano le dimensioni del buffer fisso. In quanto `CFixedStringT` non utilizza sempre un heap per allocare i dati stringa, non può usare `CAtlStringMgr` come gestore delle stringhe. Usa una gestione stringhe personalizzata (`CFixedStringMgr`), che implementa le [IAtlStringMgr](../atl-mfc-shared/reference/iatlstringmgr-class.md) interfaccia. Questa interfaccia verrà discusso [implementazione di una gestione stringhe personalizzata (metodo avanzato)](../atl-mfc-shared/implementation-of-a-custom-string-manager-advanced-method.md).

Il costruttore per `CFixedStringMgr` accetta tre parametri:

- *pData:* un puntatore a fissa `CStringData` struttura da utilizzare.

- *nChars:* il numero massimo di caratteri di `CStringData` struttura può contenere.

- *pMgr:* un puntatore al `IAtlStringMgr` interfaccia di "gestione di stringhe di backup".

Il costruttore archivia i valori della *pData* e *pMgr* nelle rispettive variabili membro (`m_pData` e `m_pMgr`). Quindi imposta la lunghezza del buffer da zero, la lunghezza disponibile pari alla dimensione massima del buffer fisso e il conteggio dei riferimenti su -1. Il valore del conteggio di riferimento indica il buffer è bloccato e di utilizzare questa istanza di `CFixedStringMgr` come la gestione di stringhe.

Impostazione del buffer come bloccato impedisce loro `CStringT` istanze da un riferimento al buffer condiviso. Se altri `CStringT` istanze sono state autorizzate a condividere il buffer sarebbe possibile per il buffer di contenuto da `CFixedStringT` deve essere eliminato mentre le altre stringhe sono stati ancora utilizzando il buffer.

`CFixedStringMgr` è un'implementazione completa del `IAtlStringMgr` interfaccia. Viene descritta l'implementazione di ogni metodo.

## <a name="implementation-of-cfixedstringmgrallocate"></a>Implementazione di CFixedStringMgr

L'implementazione di `CFixedStringMgr::Allocate` controlla prima se la dimensione richiesta della stringa è minore o uguale alla dimensione del buffer fisso (archiviati nel `m_pData` membro). Se il buffer fisso è sufficientemente ampio, `CFixedStringMgr` blocca il buffer fissato con lunghezza pari a zero. Fino a quando la lunghezza della stringa dimensioni non possono aumentare oltre le dimensioni del buffer fissi, `CStringT` non sarà necessario riallocare il buffer.

Se la dimensione richiesta della stringa è maggiore del buffer fisso `CFixedStringMgr` inoltra la richiesta per la gestione di stringhe di backup. Si presuppone che la gestione di backup stringa allocare il buffer dall'heap. Tuttavia, prima di restituire questo buffer `CFixedStringMgr` blocca il buffer e sostituisce puntatore al gestore del buffer di stringa con un puntatore al `CFixedStringMgr` oggetto. In questo modo si garantisce che tenta di riallocare o liberare il buffer dal `CStringT` chiamerà in `CFixedStringMgr`.

## <a name="implementation-of-cfixedstringmgrreallocate"></a>Implementazione di CFixedStringMgr:: ReAllocate

L'implementazione di `CFixedStringMgr::ReAllocate` è molto simile alla relativa implementazione di `Allocate`.

Se il buffer vengono riallocato è buffer fisso e le dimensioni del buffer richiesto sono minore di buffer fisso, allocazione non verrà eseguita. Tuttavia, se il buffer riallocato non buffer fisso, deve essere un buffer allocato con la gestione di backup. In questo caso il gestore di backup consente di riallocare il buffer.

Se il buffer riallocato buffer fisso e la nuova dimensione del buffer è troppo grande per rientrare nel buffer fisso, `CFixedStringMgr` alloca un nuovo buffer utilizzando la gestione di backup. Il contenuto del buffer fissi viene quindi copiato nel nuovo buffer.

## <a name="implementation-of-cfixedstringmgrfree"></a>Implementazione di CFixedStringMgr

L'implementazione di `CFixedStringMgr::Free` segue lo stesso modello `Allocate` e `ReAllocate`. Se il buffer viene liberato il buffer fisso, il metodo lo imposta su un buffer bloccato di lunghezza zero. Se è stato allocato il buffer viene liberato con la gestione di backup, `CFixedStringMgr` utilizza la gestione di backup per liberarlo.

## <a name="implementation-of-cfixedstringmgrclone"></a>Implementazione di CFixedStringMgr:: Clone

L'implementazione di `CFixedStringMgr::Clone` restituisce sempre un puntatore per la gestione di backup invece `CFixedStringMgr` stesso. Ciò accade perché ogni istanza di `CFixedStringMgr` può solo essere associato a una singola istanza di `CStringT`. Eventuali altre istanze di `CStringT` si cerca di clonare la gestione dovrebbe essere il responsabile di backup alternativa. Questo avviene perché la gestione di backup supporta la condivisione.

## <a name="implementation-of-cfixedstringmgrgetnilstring"></a>Implementazione di CFixedStringMgr::GetNilString

L'implementazione di `CFixedStringMgr::GetNilString` restituisce il buffer fisso. A causa della corrispondenza uno a uno dei `CFixedStringMgr` e `CStringT`, un'istanza specifica di `CStringT` non usa mai più di un buffer alla volta. Pertanto, una stringa nulla un buffer di stringa reale non sono mai necessari e nello stesso momento.

Ogni volta che il buffer fisso non in uso, `CFixedStringMgr` assicura che venga inizializzato con una lunghezza pari a zero. In questo modo può essere usato come stringa nulla. Come bonus aggiuntivo, il `nAllocLength` membro del buffer fisso è sempre impostato per la dimensione totale del buffer fisso. Ciò significa che `CStringT` può aumentare la stringa senza chiamare [IAtlStringMgr:: ReAllocate](../atl-mfc-shared/reference/iatlstringmgr-class.md#reallocate), anche per la stringa null.

## <a name="requirements"></a>Requisiti

**Intestazione:** CStringT. h

## <a name="see-also"></a>Vedere anche

[Gestione della memoria con CStringT](../atl-mfc-shared/memory-management-with-cstringt.md)


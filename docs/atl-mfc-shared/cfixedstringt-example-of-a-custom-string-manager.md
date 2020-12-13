---
description: 'Altre informazioni su: CFixedStringT: esempio di una gestione stringhe personalizzata'
title: 'CFixedStringT: esempio di una gestione stringhe personalizzata'
ms.date: 11/04/2016
helpviewer_keywords:
- CFixedStringT class, using a custom string manager
ms.assetid: 1cf11fd7-51b8-4b94-87af-02bc25f47dd6
ms.openlocfilehash: c9af2530500ad5972c01d063116e7ac981109493
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97142506"
---
# <a name="cfixedstringt-example-of-a-custom-string-manager"></a>CFixedStringT: esempio di una gestione stringhe personalizzata

La libreria ATL implementa un esempio di una gestione stringhe personalizzata utilizzata dalla classe [CFixedStringT](../atl-mfc-shared/reference/cfixedstringt-class.md), denominata **CFixedStringMgr**. `CFixedStringT` deriva da [CStringT](../atl-mfc-shared/reference/cstringt-class.md) e implementa una stringa che alloca i dati di tipo carattere come parte dell' `CFixedStringT` oggetto stesso, purché la stringa sia minore della lunghezza specificata dal `t_nChars` parametro di modello di `CFixedStringT` . Con questo approccio, la stringa non necessita dell'heap, a meno che la lunghezza della stringa non superi le dimensioni del buffer fisso. Poiché non `CFixedStringT` utilizza sempre un heap per allocare i dati di stringa, non può utilizzare `CAtlStringMgr` come gestione stringhe. Usa una gestione stringhe personalizzata ( `CFixedStringMgr` ), implementando l'interfaccia [IAtlStringMgr](../atl-mfc-shared/reference/iatlstringmgr-class.md) . Questa interfaccia viene discussa nell' [implementazione di un gestore di stringhe personalizzato (metodo avanzato)](../atl-mfc-shared/implementation-of-a-custom-string-manager-advanced-method.md).

Il costruttore per `CFixedStringMgr` accetta tre parametri:

- *pData:* Puntatore alla `CStringData` struttura fissa da usare.

- *nChars:* Numero massimo di caratteri che possono essere contenuti nella `CStringData` struttura.

- *PMGR:* Puntatore all' `IAtlStringMgr` interfaccia di un "gestore di stringhe di backup".

Il costruttore archivia i valori di *pData* e *PMGR* nelle rispettive variabili membro ( `m_pData` e `m_pMgr` ). Imposta quindi la lunghezza del buffer su zero, la lunghezza disponibile uguale alla dimensione massima del buffer fisso e il conteggio dei riferimenti a-1. Il valore del conteggio dei riferimenti indica che il buffer è bloccato e per utilizzare questa istanza di `CFixedStringMgr` come gestione stringhe.

Contrassegnare il buffer come bloccato impedisce `CStringT` ad altre istanze di contenere un riferimento condiviso al buffer. Se ad altre `CStringT` istanze era consentito condividere il buffer, era possibile che il buffer contenuto da `CFixedStringT` venisse eliminato mentre altre stringhe utilizzavano ancora il buffer.

`CFixedStringMgr` è un'implementazione completa dell' `IAtlStringMgr` interfaccia. L'implementazione di ogni metodo viene discussa separatamente.

## <a name="implementation-of-cfixedstringmgrallocate"></a>Implementazione di CFixedStringMgr:: allocate

L'implementazione di `CFixedStringMgr::Allocate` verifica innanzitutto se la dimensione richiesta della stringa è minore o uguale alla dimensione del buffer fisso (archiviato nel `m_pData` membro). Se il buffer fisso è sufficientemente grande, `CFixedStringMgr` blocca il buffer fisso con una lunghezza pari a zero. Se la lunghezza della stringa non aumenta oltre la dimensione del buffer fisso, `CStringT` non sarà necessario riallocare il buffer.

Se le dimensioni richieste della stringa sono maggiori del buffer fisso `CFixedStringMgr` , la richiesta viene trasmessa al gestore delle stringhe di backup. Si presume che Gestione stringhe di backup allochi il buffer dall'heap. Tuttavia, prima di restituire questo buffer `CFixedStringMgr` blocca il buffer e sostituisce il puntatore di gestione stringhe del buffer con un puntatore all' `CFixedStringMgr` oggetto. Ciò garantisce che i tentativi di riallocare o liberare il buffer da `CStringT` effettueranno una chiamata a `CFixedStringMgr` .

## <a name="implementation-of-cfixedstringmgrreallocate"></a>Implementazione di CFixedStringMgr:: Reallocate

L'implementazione di `CFixedStringMgr::ReAllocate` è molto simile all'implementazione di `Allocate` .

Se il buffer da riallocare è il buffer fisso e le dimensioni del buffer richieste sono inferiori a quelle del buffer fisso, non viene eseguita alcuna allocazione. Tuttavia, se il buffer che viene riallocato non è il buffer fisso, deve essere un buffer allocato con gestione backup. In questo caso, gestione backup viene utilizzato per riallocare il buffer.

Se il buffer da riallocare è il buffer fisso e la nuova dimensione del buffer è troppo grande per essere contenuta nel buffer fisso, `CFixedStringMgr` alloca un nuovo buffer utilizzando Gestione backup. Il contenuto del buffer fisso viene quindi copiato nel nuovo buffer.

## <a name="implementation-of-cfixedstringmgrfree"></a>Implementazione di CFixedStringMgr:: Free

L'implementazione di `CFixedStringMgr::Free` segue lo stesso modello di `Allocate` e `ReAllocate` . Se il buffer che viene liberato è il buffer fisso, il metodo lo imposta su un buffer a lunghezza zero. Se il buffer da liberare è stato allocato con gestione backup, `CFixedStringMgr` Usa Gestione backup per liberarlo.

## <a name="implementation-of-cfixedstringmgrclone"></a>Implementazione di CFixedStringMgr:: Clone

L'implementazione di `CFixedStringMgr::Clone` restituisce sempre un puntatore a gestione backup anziché a `CFixedStringMgr` se stesso. Questa situazione si verifica perché ogni istanza di `CFixedStringMgr` può essere associata solo a una singola istanza di `CStringT` . Tutte le altre istanze di `CStringT` che tentano di clonare il gestore dovrebbero invece ottenere la gestione backup. Questo perché Gestione backup supporta la condivisione.

## <a name="implementation-of-cfixedstringmgrgetnilstring"></a>Implementazione di CFixedStringMgr:: GetNilString

L'implementazione di `CFixedStringMgr::GetNilString` restituisce il buffer fisso. A causa della corrispondenza uno-a-uno tra `CFixedStringMgr` e `CStringT` , un'istanza specificata di `CStringT` non usa mai più di un buffer alla volta. Pertanto, una stringa nil e un buffer di stringa reale non sono mai necessari nello stesso momento.

Ogni volta che il buffer fisso non è in uso, `CFixedStringMgr` garantisce che venga inizializzato con una lunghezza pari a zero. In questo modo è possibile utilizzarlo come stringa Nil. Un ulteriore vantaggio è che il `nAllocLength` membro del buffer fisso è sempre impostato sulla dimensione massima del buffer fisso. Ciò significa che `CStringT` può aumentare la stringa senza chiamare [IAtlStringMgr:: Reallocate](../atl-mfc-shared/reference/iatlstringmgr-class.md#reallocate), anche per la stringa Nil.

## <a name="requirements"></a>Requisiti

**Intestazione:** CStringT. h

## <a name="see-also"></a>Vedi anche

[Gestione della memoria con CStringt](../atl-mfc-shared/memory-management-with-cstringt.md)

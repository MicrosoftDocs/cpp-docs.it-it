---
title: 'CFixedStringT: Esempio di un gestore di stringa personalizzato | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs: C++
helpviewer_keywords: CFixedStringT class, using a custom string manager
ms.assetid: 1cf11fd7-51b8-4b94-87af-02bc25f47dd6
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: ceb64bb71ad43dd1a6e6fd45a3a0480d68eb643a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="cfixedstringt-example-of-a-custom-string-manager"></a>CFixedStringT: Esempio di una gestione stringa personalizzata
La libreria ATL implementa un esempio di un gestore di stringa personalizzato usato dalla classe [CFixedStringT](../atl-mfc-shared/reference/cfixedstringt-class.md), denominato **CFixedStringMgr**. `CFixedStringT`derivato da [CStringT](../atl-mfc-shared/reference/cstringt-class.md) e implementa una stringa che alloca i caratteri come parte di `CFixedStringT` oggetto stesso, purché la stringa è minore della lunghezza specificata dal **t_nChars** parametro di modello di `CFixedStringT`. Con questo approccio, la stringa non è necessario l'heap, a meno che la lunghezza della stringa di dimensioni superano le dimensioni del buffer fisso. Poiché `CFixedStringT` non utilizza sempre un heap per allocare i dati delle stringhe, non sarà possibile utilizzare **CAtlStringMgr** come gestore delle stringhe. Viene utilizzato un gestore di stringa personalizzato (**CFixedStringMgr**), che implementa il [IAtlStringMgr](../atl-mfc-shared/reference/iatlstringmgr-class.md) interfaccia. Questa interfaccia, vedere [implementazione di un gestore di stringa personalizzato (metodo avanzato)](../atl-mfc-shared/implementation-of-a-custom-string-manager-advanced-method.md).  
  
 Il costruttore per **CFixedStringMgr** accetta tre parametri:  
  
-   **pData:** un puntatore a fissi `CStringData` struttura da utilizzare.  
  
-   **nChars:** il numero massimo di caratteri di `CStringData` struttura può contenere.  
  
-   **pMgr:** un puntatore al `IAtlStringMgr` interfaccia di "gestione di stringhe di backup".  
  
 Il costruttore archivia i valori di `pData` e **pMgr** nelle rispettive variabili membro (`m_pData` e **m_pMgr**). Viene quindi impostata la lunghezza del buffer da zero, la lunghezza disponibile per la dimensione massima del buffer predefinito e il conteggio dei riferimenti su -1. Il valore del conteggio di riferimento indica che il buffer è bloccato e per l'utilizzo di questa istanza di **CFixedStringMgr** come gestore di stringhe.  
  
 Contrassegnare il buffer come bloccato impedisce altri `CStringT` le istanze di un riferimento al buffer condiviso. Se altri `CStringT` istanze sono state consentite per condividere il buffer sia possibile per il buffer contenuto `CFixedStringT` da eliminare durante le altre stringhe sono stati ancora utilizzando il buffer.  
  
 **CFixedStringMgr** è un'implementazione completa del `IAtlStringMgr` interfaccia. Viene descritta l'implementazione di ogni metodo.  
  
## <a name="implementation-of-cfixedstringmgrallocate"></a>Implementazione di CFixedStringMgr  
 L'implementazione di **CFixedStringMgr** controlla prima se la dimensione richiesta della stringa è minore o uguale alla dimensione del buffer fisso (archiviati nel `m_pData` membro). Se il buffer fisso è sufficientemente ampio, **CFixedStringMgr** blocca il buffer fissa con lunghezza pari a zero. Fino a quando la lunghezza della stringa dimensioni non eccedere le dimensioni del buffer fisso, `CStringT` non sarà necessario riallocare il buffer.  
  
 Se la dimensione richiesta della stringa è maggiore di buffer fisso **CFixedStringMgr** inoltra la richiesta per la gestione di stringhe di backup. Il gestore backup si presume che per il buffer dall'heap. Tuttavia, prima di restituire questo buffer **CFixedStringMgr** blocca il buffer e consente di sostituire con un puntatore a puntatore al gestore del buffer di stringa di **CFixedStringMgr** oggetto. In questo modo si garantisce che tenta di riallocare o liberare il buffer di `CStringT` chiamerà **CFixedStringMgr**.  
  
## <a name="implementation-of-cfixedstringmgrreallocate"></a>Implementazione di CFixedStringMgr:: ReAllocate  
 L'implementazione di **CFixedStringMgr:: ReAllocate** è molto simile alla relativa implementazione di **allocare**.  
  
 Se il buffer riallocato è il buffer fisso e le dimensioni del buffer richieste sono inferiori a quelle del buffer predefinito, non viene eseguita alcuna allocazione. Tuttavia, se il buffer riallocato non è il buffer fisso, è necessario un buffer allocato con la gestione di backup. In questo caso, il gestore di backup viene utilizzato per riallocare il buffer.  
  
 Se il buffer riallocato è il buffer fisso e la nuova dimensione del buffer è troppo grande per adattarsi all'interno del buffer predefinito, **CFixedStringMgr** alloca un nuovo buffer tramite il gestore di backup. Il contenuto del buffer predefinito viene quindi copiato nel nuovo buffer.  
  
## <a name="implementation-of-cfixedstringmgrfree"></a>Implementazione di CFixedStringMgr  
 L'implementazione di **CFixedStringMgr** segue lo stesso modello come **allocare** e `ReAllocate`. Se il buffer deallocato è il buffer fisso, il metodo imposta a un buffer bloccato di lunghezza zero. Se il buffer deallocato è stato allocato con il gestore di backup, **CFixedStringMgr** utilizza la gestione di backup per liberarlo.  
  
## <a name="implementation-of-cfixedstringmgrclone"></a>Implementazione di CFixedStringMgr:: Clone  
 L'implementazione di **CFixedStringMgr:: Clone** restituisce sempre un puntatore per la gestione di backup invece di **CFixedStringMgr** stesso. Ciò accade perché ogni istanza di **CFixedStringMgr** può solo essere associato a una singola istanza di `CStringT`. Eventuali altre istanze `CStringT` tentativo di clonare la gestione deve ottenere il gestore di backup invece. Questo avviene perché la gestione di backup supporta la condivisione.  
  
## <a name="implementation-of-cfixedstringmgrgetnilstring"></a>Implementazione di CFixedStringMgr:: GetNilString  
 L'implementazione di **CFixedStringMgr:: GetNilString** restituisce il buffer fisso. A causa della corrispondenza 1: 1 di **CFixedStringMgr** e `CStringT`, un'istanza specifica di `CStringT` non utilizza mai più di un buffer alla volta. Pertanto, una stringa null e un buffer di stringa reale non sono necessari mai nello stesso momento.  
  
 Ogni volta che il buffer fisso non è in uso, **CFixedStringMgr** assicura che viene inizializzato con una lunghezza pari a zero. In questo modo possono essere utilizzate come stringa nulla. Inoltre, il `nAllocLength` membro del buffer fisso è sempre impostata per la dimensione totale del buffer fisso. Ciò significa che `CStringT` possibile aumentare la stringa senza chiamare [IAtlStringMgr:: ReAllocate](../atl-mfc-shared/reference/iatlstringmgr-class.md#reallocate), anche per la stringa null.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** CStringT. h  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione della memoria con CStringT](../atl-mfc-shared/memory-management-with-cstringt.md)


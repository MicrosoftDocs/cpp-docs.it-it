---
title: Implementazione di un gestore di stringa di personalizzata (metodo avanzate) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs: C++
helpviewer_keywords: IAtlStringMgr class, using
ms.assetid: 64ab7da9-47c1-4c4a-9cd7-4cc37e7f3f57
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 7e76edc65e5f30fee90f346d5434ecbee320a37a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="implementation-of-a-custom-string-manager-advanced-method"></a>Implementazione di un gestore di stringa personalizzato (metodo avanzato)
In situazioni specifiche, si potrebbe voler implementare un gestore di stringa personalizzato che è sufficiente modificare dell'heap è utilizzato per allocare memoria. In questo caso, è necessario implementare manualmente il [IAtlStringMgr](../atl-mfc-shared/reference/iatlstringmgr-class.md) interfaccia come gestore di stringhe personalizzato.  
  
 A questo scopo, è importante capire come [CStringT](../atl-mfc-shared/reference/cstringt-class.md) tale interfaccia viene utilizzata per gestire i dati di stringa. Ogni istanza di `CStringT` è un puntatore a un [CStringData](../atl-mfc-shared/reference/cstringdata-class.md) struttura. Questa struttura di lunghezza variabile contiene importanti informazioni per la stringa (ad esempio lunghezza), nonché i dati carattere effettivo per la stringa. Ogni gestore di stringhe personalizzato è responsabile dell'allocazione e deallocazione di queste strutture su richiesta del `CStringT`.  
  
 Il `CStringData` struttura è costituito da quattro campi:  
  
-   [pStringMgr](../atl-mfc-shared/reference/cstringdata-class.md#pstringmgr) punta questo campo per il `IAtlStringMgr` interfaccia utilizzata per gestire i dati della stringa. Quando `CStringT` è necessario riallocare o liberare il buffer di stringa chiama il Reallocate o Free di questa interfaccia, passando il `CStringData` struttura come parametro. Quando si alloca una `CStringData` struttura nel gestore di stringhe, è necessario impostare questo campo per puntare al gestore di stringhe personalizzato.  
  
-   [nDataLength](../atl-mfc-shared/reference/cstringdata-class.md#ndatalength) questo campo contiene la lunghezza logica corrente della stringa di cui è memorizzata nel buffer escluso il carattere di terminazione null. `CStringT`Aggiorna questo campo quando viene modificata la lunghezza della stringa. Quando si alloca una `CStringData` struttura, il gestore di stringhe deve impostare questo campo su zero. Durante la riallocazione di un `CStringData` struttura, il gestore di stringa personalizzato necessario lasciare questo campo.  
  
-   [nAllocLength](../atl-mfc-shared/reference/cstringdata-class.md#nalloclength) questo campo contiene il numero massimo di caratteri (escluso il carattere di terminazione null) che possono essere archiviati nel buffer di stringhe senza. Ogni volta che `CStringT` è necessario aumentare la lunghezza della stringa, logica, viene controllato innanzitutto questo campo per verificare che lo spazio sia sufficiente nel buffer. Se il controllo ha esito negativo, `CStringT` chiamate nel gestore di stringhe personalizzato per riallocare il buffer. Quando allocare o riallocare un `CStringData` struttura, è necessario impostare questo campo per almeno il numero di caratteri richiesti nel **nChars** parametro [IAtlStringMgr:: allocate](../atl-mfc-shared/reference/iatlstringmgr-class.md#allocate) o [IAtlStringMgr:: ReAllocate](../atl-mfc-shared/reference/iatlstringmgr-class.md#reallocate). Se è presente più spazio nel buffer di quella richiesta, è possibile impostare questo valore in modo da riflettere la quantità effettiva di spazio disponibile. In questo modo `CStringT` per aumentare la stringa a occupare tutto lo spazio allocato prima di chiamare nuovamente il gestore di stringhe per riallocare il buffer.  
  
-   [nRefs](../atl-mfc-shared/reference/cstringdata-class.md#nrefs) questo campo contiene il conteggio dei riferimenti corrente del buffer di stringa. Se il valore è uno, quindi una singola istanza di `CStringT` utilizza il buffer. Inoltre, l'istanza è consentito leggere e modificare il contenuto del buffer. Se il valore è maggiore di uno, più istanze di `CStringT` può utilizzare il buffer. Perché il buffer di caratteri è condiviso, `CStringT` istanze possono solo leggere il contenuto del buffer. Per modificare il contenuto, `CStringT` crea innanzitutto una copia del buffer. Se il valore è negativo, solo un'istanza di `CStringT` utilizza il buffer. In questo caso, il buffer viene considerato bloccato. Quando un `CStringT` istanza non utilizza un buffer bloccato altre istanze di `CStringT` possono condividere il buffer. Queste istanze, invece, creare una copia del buffer prima la modifica del contenuto. Inoltre, il `CStringT` istanza utilizzando il buffer bloccato non tenta di condividere il buffer di qualsiasi altro `CStringT` assegnata a tale istanza. In questo caso, il `CStringT` istanza copia di altra stringa nel buffer bloccato.  
  
     Quando si alloca una `CStringData` struttura, è necessario impostare questo campo in modo da riflettere il tipo di condivisione che è consentito per il buffer. Per la maggior parte delle implementazioni, impostare questo valore su uno. In questo modo il normale funzionamento della condivisione copy-on-write. Tuttavia, se il gestore di stringhe non supporta la condivisione di buffer di stringa, è possibile impostare questo campo su uno stato bloccato. In questo modo `CStringT` siano usati solo per l'istanza di questo buffer `CStringT` che viene allocata.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione della memoria con CStringT](../atl-mfc-shared/memory-management-with-cstringt.md)


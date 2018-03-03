---
title: Transazioni (accesso ai dati MFC) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- transactions [C++], support for
- transactions [C++]
- databases [C++], transactions
ms.assetid: f80afbfe-1517-4fec-8870-9ffc70a58b05
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 2f0c028eaf58e828366ae9534ff06b53254e3601
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="transactions--mfc-data-access"></a>Transazioni (accesso ai dati MFC)
Il concetto di transazione è stato sviluppato per gestire i casi in cui lo stato risultante del database dipende dalla corretta esecuzione globale di una serie di operazioni, ad esempio quando operazioni successive potrebbero modificare i risultati di operazioni precedenti. In tali casi, se un'operazione non riesce, lo stato risultante potrebbe essere indeterminato.  
  
 Per risolvere questo problema, è possibile raggruppare in una transazione una serie di operazioni in modo da garantire l'integrità del risultato finale. Per la riuscita dell'intera transazione, tutte le operazioni devono avere esito positivo ed è necessario che ne venga eseguito il commit, ovvero che vengano scritte nel database, altrimenti l'intera transazione avrà esito negativo. L'annullamento della transazione viene definito rollback. Il rollback consente di ripristinare i dati come erano prima delle modifiche e di riportare il database allo stato precedente la transazione.  
  
 Ad esempio, in una transazione bancaria automatica, se si trasferisce del denaro dal conto A al conto B, sia il prelievo da A che il deposito in B dovranno essere completati correttamente, altrimenti l'intera transazione dovrà avere esito negativo.  
  
 Una transazione deve avere le proprietà ACID, ovvero:  
  
-   **Atomicità** una transazione è un'unità atomica di lavoro e viene eseguita una sola volta, tutto il lavoro viene svolto o nessuna parte di esso.  
  
-   **Coerenza** una transazione preserva la coerenza dei dati, trasformando uno stato coerente di dati in un altro stato coerente di dati. I dati associati da una transazione devono mantenere la stessa semantica.  
  
-   **Isolamento** una transazione è un'unità di isolamento e ognuna viene eseguita separatamente e indipendentemente dalle transazioni simultanee. È importante che una transazione non sia mai interessata dalle fasi intermedie di un'altra transazione.  
  
-   **Durabilità** una transazione è un'unità di recupero. Se una transazione riesce, gli aggiornamenti vengono mantenuti anche se il sistema si arresta in modo anomalo o viene chiuso. Se una transazione non riesce, il sistema rimane nello stato precedente al commit della transazione.  
  
 È possibile supportare le transazioni in OLE DB (vedere [supporto delle transazioni in OLE DB](../data/oledb/supporting-transactions-in-ole-db.md)) o ODBC (vedere [transazione (ODBC)](../data/odbc/transaction-odbc.md)).  
  
 Una transazione distribuita è una transazione che aggiorna i dati distribuiti, ovvero dati presenti in più sistemi collegati in rete. Se si desidera supportare le transazioni in un sistema distribuito, è consigliabile utilizzare ADO.NET anziché il supporto delle transazioni di OLE DB.  
  
## <a name="see-also"></a>Vedere anche  
 [Accesso ai dati di programmazione (MFC/ATL)](../data/data-access-programming-mfc-atl.md)
---
title: Transazioni (accesso ai dati MFC)
ms.date: 11/04/2016
helpviewer_keywords:
- transactions [C++], support for
- transactions [C++]
- databases [C++], transactions
ms.assetid: f80afbfe-1517-4fec-8870-9ffc70a58b05
ms.openlocfilehash: 742e95d896d107fb89b3d65f0eeb6d418f1b2057
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80209066"
---
# <a name="transactions--mfc-data-access"></a>Transazioni (accesso ai dati MFC)

Il concetto di transazione è stato sviluppato per gestire i casi in cui lo stato risultante del database dipende dalla corretta esecuzione globale di una serie di operazioni, ad esempio quando operazioni successive potrebbero modificare i risultati di operazioni precedenti. In tali casi, se un'operazione non riesce, lo stato risultante potrebbe essere indeterminato.

Per risolvere questo problema, è possibile raggruppare in una transazione una serie di operazioni in modo da garantire l'integrità del risultato finale. Per la riuscita dell'intera transazione, tutte le operazioni devono avere esito positivo ed è necessario che ne venga eseguito il commit, ovvero che vengano scritte nel database, altrimenti l'intera transazione avrà esito negativo. L'annullamento della transazione viene definito rollback. Il rollback consente di ripristinare i dati come erano prima delle modifiche e di riportare il database allo stato precedente la transazione.

Ad esempio, in una transazione bancaria automatica, se si trasferisce del denaro dal conto A al conto B, sia il prelievo da A che il deposito in B dovranno essere completati correttamente, altrimenti l'intera transazione dovrà avere esito negativo.

Una transazione deve avere le proprietà ACID, ovvero:

- **Atomicità** Una transazione è un'unità di lavoro atomica ed eseguita esattamente una volta. tutto il lavoro viene eseguito o nessuno di essi è.

- **Coerenza** Una transazione conserva la coerenza dei dati, trasformando uno stato coerente dei dati in un altro stato coerente di dati. I dati associati da una transazione devono mantenere la stessa semantica.

- **Isolamento** Una transazione è un'unità di isolamento e ognuna viene eseguita separatamente e indipendentemente dalle transazioni simultanee. È importante che una transazione non sia mai interessata dalle fasi intermedie di un'altra transazione.

- **Durabilità** Una transazione è un'unità di ripristino. Se una transazione riesce, gli aggiornamenti vengono mantenuti anche se il sistema si arresta in modo anomalo o viene chiuso. Se una transazione non riesce, il sistema rimane nello stato precedente al commit della transazione.

È possibile supportare le transazioni in OLE DB (vedere [supporto di transazioni in OLE DB](../data/oledb/supporting-transactions-in-ole-db.md)) o ODBC (vedere [Transaction (ODBC)](../data/odbc/transaction-odbc.md)).

Una transazione distribuita è una transazione che aggiorna i dati distribuiti, ovvero dati presenti in più sistemi collegati in rete. Se si desidera supportare le transazioni in un sistema distribuito, è necessario utilizzare ADO.NET anziché il supporto OLE DB Transaction.

## <a name="see-also"></a>Vedere anche

[Programmazione dell'accesso ai dati (MFC/ATL)](../data/data-access-programming-mfc-atl.md)

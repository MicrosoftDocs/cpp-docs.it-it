---
title: "Transazioni (accesso ai dati MFC) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "database [C++], transazioni"
  - "transazioni [C++]"
  - "transazioni [C++], supporto per"
ms.assetid: f80afbfe-1517-4fec-8870-9ffc70a58b05
caps.latest.revision: 11
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Transazioni (accesso ai dati MFC)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il concetto di transazione è stato sviluppato per gestire i casi in cui lo stato risultante del database dipende dalla corretta esecuzione globale di una serie di operazioni,  ad esempio quando operazioni successive potrebbero modificare i risultati di operazioni precedenti.  In tali casi, se un'operazione non riesce, lo stato risultante potrebbe essere indeterminato.  
  
 Per risolvere questo problema, è possibile raggruppare in una transazione una serie di operazioni in modo da garantire l'integrità del risultato finale.  Per la riuscita dell'intera transazione, tutte le operazioni devono avere esito positivo ed è necessario che ne venga eseguito il commit, ovvero che vengano scritte nel database, altrimenti l'intera transazione avrà esito negativo.  L'annullamento della transazione viene definito rollback.  Il rollback consente di ripristinare i dati come erano prima delle modifiche e di riportare il database allo stato precedente la transazione.  
  
 Ad esempio, in una transazione bancaria automatica, se si trasferisce del denaro dal conto A al conto B, sia il prelievo da A che il deposito in B dovranno essere completati correttamente, altrimenti l'intera transazione dovrà avere esito negativo.  
  
 Una transazione deve avere le proprietà ACID, ovvero:  
  
-   **Atomicità**: una transazione è un'unità di lavoro atomica e viene eseguita solo una volta, ovvero o viene completata del tutto o viene annullata totalmente.  
  
-   **Coerenza**: una transazione preserva la coerenza dei dati, trasformando uno stato coerente di dati in un altro stato coerente di dati.  I dati associati da una transazione devono mantenere la stessa semantica.  
  
-   **Isolamento**: una transazione è un'unità di isolamento e ognuna viene eseguita separatamente e in modo indipendente rispetto alle transazioni simultanee.  È importante che una transazione non sia mai interessata dalle fasi intermedie di un'altra transazione.  
  
-   **Durabilità**: una transazione è un'unità di recupero.  Se una transazione riesce, gli aggiornamenti vengono mantenuti anche se il sistema si arresta in modo anomalo o viene chiuso.  Se una transazione non riesce, il sistema rimane nello stato precedente al commit della transazione.  
  
 Le transazioni sono supportate in OLE DB \(vedere [Supporto delle transazioni in OLE DB](../data/oledb/supporting-transactions-in-ole-db.md)\) o ODBC \(vedere [Transazione \(ODBC\)](../data/odbc/transaction-odbc.md)\).  
  
 Una transazione distribuita è una transazione che aggiorna i dati distribuiti, ovvero dati presenti in più sistemi collegati in rete.  Per supportare le transazioni in un sistema distribuito, è necessario usare Microsoft .NET Framework anziché il supporto delle transazioni di OLE DB.  
  
## Vedere anche  
 [Programmazione dell'accesso ai dati \(MFC\/ATL\)](../data/data-access-programming-mfc-atl.md)
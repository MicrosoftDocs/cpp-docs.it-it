---
title: "Transazione (ODBC) | Microsoft Docs"
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
  - "ODBC [C++], transazioni"
  - "ODBC (recordset) [C++], transazioni"
  - "ODBC (recordset) [C++], aggiornamento"
  - "recordset [C++], transazioni"
  - "recordset [C++], aggiornamento"
  - "transazioni [C++], classi ODBC MFC"
ms.assetid: a2ec0995-2029-45f2-8092-6efd6f2a77f4
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Transazione (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
 Una transazione è una soluzione per raggruppare una serie di aggiornamenti relativi a un'[origine dati](../../data/odbc/data-source-odbc.md), in modo che il commit di tutti gli aggiornamenti venga eseguito in un'unica operazione oppure non venga eseguito in caso di rollback della transazione.  Se non si utilizzano le transazioni, il commit delle modifiche apportate all'origine dati viene eseguito automaticamente anziché su richiesta.  
  
> [!NOTE]
>  Non tutti i driver per database ODBC supportano le transazioni.  Chiamare la funzione membro `CanTransact` dell'oggetto [CDatabase](../../mfc/reference/cdatabase-class.md) o [CRecordset](../../mfc/reference/crecordset-class.md) per determinare se il driver utilizzato supporta le transazioni per un determinato database.  Si tenga presente che `CanTransact` non indica se l'origine dati fornisce il supporto completo delle transazioni.  È inoltre necessario chiamare `CDatabase::GetCursorCommitBehavior` e `CDatabase::GetCursorRollbackBehavior` dopo **CommitTrans** e **Rollback** per verificare gli effetti della transazione sull'oggetto `CRecordset` aperto.  
  
 Quando si chiama **Update**, le chiamate alle funzioni membro `AddNew` ed **Edit** di un oggetto `CRecordset` agiscono immediatamente sull'origine dati.  Anche le chiamate a **Delete** hanno effetto immediato.  Al contrario, è possibile utilizzare una transazione composta da più chiamate ad `AddNew`, **Edit**, **Update** e **Delete**, che vengono eseguite ma non applicate finché **CommitTrans** non viene chiamata in modo esplicito.  Quando si imposta una transazione, è possibile eseguire una serie di chiamate di questo tipo, senza perdere la possibilità di annullarle.  Se una risorsa fondamentale non è disponibile oppure se altre condizioni impediscono il completamento dell'intera transazione, è possibile eseguire il rollback anziché il commit della transazione.  In questo caso, nessuna delle modifiche riguardanti la transazione viene applicata all'origine dati.  
  
> [!NOTE]
>  Attualmente la classe `CRecordset` non supporta gli aggiornamenti dell'origine dati se si è implementato il recupero di massa delle righe,  pertanto non è possibile inviare chiamate ad `AddNew`, **Edit**, **Delete** o **Update**.  Tuttavia, è possibile scrivere funzioni personalizzate per effettuare gli aggiornamenti e quindi chiamare tali funzioni all'interno di una determinata transazione.  Per ulteriori informazioni sul recupero di massa di righe, vedere [Recordset: recupero di massa di record \(ODBC\)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).  
  
> [!NOTE]
>  Oltre a influire sul recordset, le transazioni hanno effetto sulle istruzioni SQL eseguite direttamente mentre si utilizza l'oggetto ODBC **HDBC** associato all'oggetto `CDatabase` oppure un oggetto **HSTMT** ODBC basato su tale oggetto **HDBC**.  
  
 Le transazioni sono particolarmente utili quando più record devono essere aggiornati simultaneamente.  In questo caso, è necessario che la transazione non rimanga incompleta, come può accadere se viene generata un'eccezione prima che venga effettuato l'ultimo aggiornamento.  Il raggruppamento di più aggiornamenti in una transazione consente l'annullamento delle modifiche \(rollback\) per riportare i record allo stato precedente alla transazione.  Se ad esempio una banca trasferisce denaro dal conto A al conto B, sia il prelievo da A che il deposito in B dovranno essere completati correttamente, altrimenti l'intera transazione non verrà eseguita.  
  
 Nelle classi di database è necessario eseguire le transazioni attraverso gli oggetti `CDatabase`.  Un oggetto `CDatabase` rappresenta un collegamento con un'origine dati. Uno o più recordset associati a tale oggetto `CDatabase` operano su tabelle del database attraverso funzioni membro del recordset.  
  
> [!NOTE]
>  È supportato un solo livello di transazioni.  Non è possibile annidare le transazioni e una transazione non può comprendere più oggetti di database.  
  
 Negli argomenti riportati di seguito vengono fornite ulteriori informazioni sull'esecuzione delle transazioni:  
  
-   [Transazione: esecuzione di una transazione in un recordset \(ODBC\)](../../data/odbc/transaction-performing-a-transaction-in-a-recordset-odbc.md)  
  
-   [Transazione: effetti delle transazioni sugli aggiornamenti \(ODBC\)](../../data/odbc/transaction-how-transactions-affect-updates-odbc.md)  
  
## Vedere anche  
 [Open Database Connectivity \(ODBC\)](../../data/odbc/open-database-connectivity-odbc.md)
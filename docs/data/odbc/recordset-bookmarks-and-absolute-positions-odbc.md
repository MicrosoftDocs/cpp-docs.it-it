---
title: "Recordset: bookmark e absolute position (ODBC) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SetAbsolutePosition"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "posizioni assolute, recordset ODBC"
  - "segnalibri"
  - "segnalibri, CDBVariant"
  - "segnalibri, recordset ODBC"
  - "CDBVariant (classe), segnalibri"
  - "cursori [ODBC], posizione assoluta in recordset"
  - "GetBookmark (metodo)"
  - "recordset ODBC, posizioni assolute"
  - "recordset ODBC, segnalibri"
  - "posizionamento di record"
  - "posizionamento di record"
  - "recordset, posizioni assolute"
  - "recordset, segnalibri"
  - "SetAbsolutePosition (metodo)"
  - "SetAbsolutePosition (metodo), segnalibri"
  - "SetBookmark (metodo)"
ms.assetid: 189788d6-33c1-41c5-9265-97db2a5d43cc
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Recordset: bookmark e absolute position (ODBC)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'argomento è relativo alle classi ODBC MFC.  
  
 Durante lo spostamento all'interno di un recordset, è spesso necessario tornare a un record specifico.  Il bookmark e la absolute position di un record forniscono due diversi metodi per l'esecuzione di questa operazione.  
  
 In questo argomento vengono fornite informazioni su:  
  
-   [Bookmark in ODBC MFC](#_core_bookmarks_in_mfc_odbc).  
  
-   [Absolute position in ODBC MFC](#_core_absolute_positions_in_mfc_odbc).  
  
##  <a name="_core_bookmarks_in_mfc_odbc"></a> Bookmark in ODBC MFC  
 Un bookmark identifica un record in modo univoco.  Quando ci si sposta all'interno di un recordset, non è sempre possibile basarsi sulla absolute position di un record, poiché i record possono essere eliminati dal recordset.  Per tenere traccia in modo affidabile della posizione di un record, utilizzare un bookmark.  La classe `CRecordset` fornisce le funzioni membro per effettuare le operazioni riportate di seguito.  
  
-   Recupero del bookmark del record corrente per salvarlo in una variabile \([GetBookmark](../Topic/CRecordset::GetBookmark.md)\).  
  
-   Spostamento rapido su un determinato record, specificando il relativo bookmark salvato in precedenza in una variabile \([SetBookmark](../Topic/CRecordset::SetBookmark.md)\).  
  
 Nell'esempio seguente viene illustrato l'utilizzo delle funzioni membro sopra riportate per contrassegnare e tornare in seguito al record corrente:  
  
```  
// rs is a CRecordset or  
// CRecordset-derived object  
  
CDBVariant varRecordToReturnTo;  
rs.GetBookmark( varRecordToReturnTo );  
  
// More code in which you  
// move to other records  
  
rs.SetBookmark( varRecordToReturnTo );  
```  
  
 Non è necessario estrarre il tipo di dati sottostante dall'oggetto [CDBVariant Class](../../mfc/reference/cdbvariant-class.md).  Assegnare il valore mediante `GetBookmark` e tornare al bookmark tramite `SetBookmark`.  
  
> [!NOTE]
>  Il supporto dei bookmark dipende dal driver ODBC e dal tipo di recordset utilizzati.  È possibile determinare facilmente se i segnalibri sono supportati chiamando [CRecordset::CanBookmark](../Topic/CRecordset::CanBookmark.md).  Se i segnalibri sono supportati, sarà inoltre necessario scegliere di implementarli in modo esplicito specificando l'opzione **CRecordset::useBookmarks** nella funzione membro [CRecordset::Open](../Topic/CRecordset::Open.md).  Si consiglia inoltre di controllare la persistenza dei bookmark dopo aver eseguito determinate operazioni sui recordset.  Se, ad esempio, si esegue **Requery** su un recordset, i bookmark potrebbero non essere più validi.  Chiamare [CDatabase::GetBookmarkPersistence](../Topic/CDatabase::GetBookmarkPersistence.md) per controllare se è possibile chiamare in modo sicuro `SetBookmark`.  
  
##  <a name="_core_absolute_positions_in_mfc_odbc"></a> Absolute position in ODBC MFC  
 Oltre ai bookmark, la classe `CRecordset` consente di impostare il record corrente specificando una posizione sequenziale,  definita absolute position.  
  
> [!NOTE]
>  La absolute position non è disponibile per i recordset di tipo forward\-only.  Per ulteriori informazioni sui recordset forward only, vedere [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md).  
  
 Per spostare il puntatore del record corrente utilizzando una posizione assoluta, chiamare [CRecordset::SetAbsolutePosition](../Topic/CRecordset::SetAbsolutePosition.md).  Quando si passa un valore a `SetAbsolutePosition`, il record corrispondente alla posizione sequenziale diventa il record corrente.  
  
> [!NOTE]
>  La absolute position di un record potrebbe non essere affidabile.  Se infatti si eliminano record dal recordset, la posizione di tutti i record successivi a quelli eliminati verrà modificata.  Per spostare il record corrente, si consiglia di utilizzare i bookmark.  Per ulteriori informazioni, vedere [Bookmark in ODBC MFC](#_core_bookmarks_in_mfc_odbc).  
  
 Per ulteriori informazioni sulla navigazione all'interno dei recordset, vedere [Recordset: scorrimento \(ODBC\)](../../data/odbc/recordset-scrolling-odbc.md).  
  
## Vedere anche  
 [Recordset \(ODBC\)](../../data/odbc/recordset-odbc.md)
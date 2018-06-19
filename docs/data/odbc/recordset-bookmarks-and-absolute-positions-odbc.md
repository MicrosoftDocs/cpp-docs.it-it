---
title: 'Recordset: Bookmark e Absolute Position (ODBC) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: conceptual
f1_keywords:
- SetAbsolutePosition
dev_langs:
- C++
helpviewer_keywords:
- CDBVariant class, bookmarks
- absolute positions, ODBC recordsets
- bookmarks, CDBVariant
- bookmarks, ODBC recordsets
- ODBC recordsets, absolute positions
- ODBC recordsets, bookmarks
- cursors [ODBC], absolute position in recordsets
- recordsets, bookmarks
- bookmarks
- SetAbsolutePosition method
- recordsets, absolute positions
- positioning records
- SetBookmark method
- record positioning
- GetBookmark method
- SetAbsolutePosition method, bookmarks
ms.assetid: 189788d6-33c1-41c5-9265-97db2a5d43cc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: e5e45d2f9dd942e76ccce4231e8280a142e66e56
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33091317"
---
# <a name="recordset-bookmarks-and-absolute-positions-odbc"></a>Recordset: bookmark e absolute position (ODBC)
Questo argomento si applica alle classi ODBC MFC.  
  
 Durante la navigazione all'interno di un recordset, è spesso necessario un modo per la restituzione di un record specifico. Un record segnalibro e la posizione assoluta forniscono due diversi metodi.  
  
 Questo argomento viene illustrato:  
  
-   [Come usare segnalibri](#_core_bookmarks_in_mfc_odbc).  
  
-   [Come impostare il record corrente utilizzando posizioni assolute](#_core_absolute_positions_in_mfc_odbc).  
  
##  <a name="_core_bookmarks_in_mfc_odbc"></a> Segnalibri in ODBC MFC  
 Un segnalibro identifica in modo univoco un record. Quando si Esplora un recordset, è sempre possibile basarsi sulla posizione assoluta di un record perché i record possono essere eliminati dal recordset. Il metodo affidabile per tenere traccia della posizione di un record è utilizzare il segnalibro. Classe `CRecordset` fornisce le funzioni membro per:  
  
-   Recupero del segnalibro del record corrente, pertanto è possibile salvarlo in una variabile ([GetBookmark](../../mfc/reference/crecordset-class.md#getbookmark)).  
  
-   Spostamento rapido su un determinato record, specificando il segnalibro è stato salvato in precedenza in una variabile ([SetBookmark](../../mfc/reference/crecordset-class.md#setbookmark)).  
  
 Nell'esempio seguente viene illustrato come utilizzare queste funzioni membro per contrassegnare il record corrente e ritornare in seguito a esso:  
  
```  
// rs is a CRecordset or  
// CRecordset-derived object  
  
CDBVariant varRecordToReturnTo;  
rs.GetBookmark( varRecordToReturnTo );  
  
// More code in which you  
// move to other records  
  
rs.SetBookmark( varRecordToReturnTo );  
```  
  
 Non è necessario per il tipo sottostante di dati da estrarre il [CDBVariant (classe)](../../mfc/reference/cdbvariant-class.md) oggetto. Assegnare il valore con `GetBookmark` e tornare al bookmark con `SetBookmark`.  
  
> [!NOTE]
>  A seconda dei driver ODBC e il tipo di recordset, i segnalibri potrebbero non essere supportati. È possibile determinare facilmente se i segnalibri sono supportati tramite la chiamata [CRecordset:: CanBookmark](../../mfc/reference/crecordset-class.md#canbookmark). Inoltre, se i segnalibri sono supportati, è necessario in modo esplicito scegliere implementarle specificando il **CRecordset:: useBookmarks** opzione il [CRecordset:: Open](../../mfc/reference/crecordset-class.md#open) funzione membro. È inoltre necessario verificare la persistenza dei segnalibri dopo alcune operazioni di recordset. Ad esempio, se si **Requery** un recordset, i segnalibri potrebbero non essere più validi. Chiamare [CDatabase:: GetBookmarkPersistence](../../mfc/reference/cdatabase-class.md#getbookmarkpersistence) per verificare se è possibile chiamare `SetBookmark`.  
  
##  <a name="_core_absolute_positions_in_mfc_odbc"></a> Posizioni assolute in ODBC MFC  
 Oltre ai segnalibri, classe `CRecordset` consente di impostare il record corrente specificando una posizione ordinale. Si tratta di posizionamento assoluto.  
  
> [!NOTE]
>  Il posizionamento assoluto non è disponibile nei recordset forward-only. Per ulteriori informazioni su recordset forward-only, vedere [Recordset (ODBC)](../../data/odbc/recordset-odbc.md).  
  
 Per spostare il puntatore del record corrente utilizzando una posizione assoluta, chiamare [CRecordset:: SetAbsolutePosition](../../mfc/reference/crecordset-class.md#setabsoluteposition). Quando si passa un valore per `SetAbsolutePosition`, il record corrispondente alla posizione ordinale diventa il record corrente.  
  
> [!NOTE]
>  La posizione assoluta di un record è potrebbe non essere affidabile. Se l'utente elimina i record dal recordset, la posizione ordinale di tutti i record successivi. I segnalibri sono il metodo consigliato per spostare il record corrente. Per ulteriori informazioni, vedere [segnalibri in MFC ODBC](#_core_bookmarks_in_mfc_odbc).  
  
 Per ulteriori informazioni sulla navigazione del recordset, vedere [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Recordset (ODBC)](../../data/odbc/recordset-odbc.md)
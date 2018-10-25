---
title: 'Recordset: Bookmark e Absolute Position (ODBC) | Microsoft Docs'
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
ms.openlocfilehash: 4e751ab86548f42e5ab9350f95cb2b49d813ec8c
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50064075"
---
# <a name="recordset-bookmarks-and-absolute-positions-odbc"></a>Recordset: bookmark e absolute position (ODBC)

Questo argomento si applica alle classi ODBC MFC.

Durante la navigazione all'interno di un recordset, spesso è necessario un modo per la restituzione di un record specifico. Un record segnalibro e la posizione assoluta forniscono due metodi.

Questo argomento viene illustrato:

- [Come usare segnalibri](#_core_bookmarks_in_mfc_odbc).

- [Come impostare il record corrente utilizzando posizioni assolute](#_core_absolute_positions_in_mfc_odbc).

##  <a name="_core_bookmarks_in_mfc_odbc"></a> Segnalibri in ODBC MFC

Un segnalibro identifica in modo univoco un record. Quando si passa attraverso un set di record, non è sempre possibile basarsi sulla posizione assoluta di un record, perché possono essere eliminati i record dal set di record. Il modo affidabile per tenere traccia della posizione di un record è usare il segnalibro. Classe `CRecordset` fornisce le funzioni membro per:

- Ottenere il segnalibro del record corrente, in modo che è possibile salvarlo in una variabile ([GetBookmark](../../mfc/reference/crecordset-class.md#getbookmark)).

- Spostamento rapido per un determinato record, specificando il segnalibro, che è stato salvato in precedenza in una variabile ([SetBookmark](../../mfc/reference/crecordset-class.md#setbookmark)).

L'esempio seguente illustra come usare queste funzioni membro per contrassegnare il record corrente e ripristinarne in seguito a esso:

```cpp
// rs is a CRecordset or
// CRecordset-derived object

CDBVariant varRecordToReturnTo;
rs.GetBookmark( varRecordToReturnTo );

// More code in which you
// move to other records

rs.SetBookmark( varRecordToReturnTo );
```

Non è necessario estrarre il tipo di dati sottostanti dal [classe CDBVariant](../../mfc/reference/cdbvariant-class.md) oggetto. Assegnare il valore con `GetBookmark` e tornare a questo segnalibro con `SetBookmark`.

> [!NOTE]
>  A seconda del driver ODBC e il tipo di recordset, segnalibri potrebbero non essere supportati. È possibile determinare facilmente se i segnalibri sono supportati tramite la chiamata [CRecordset:: CanBookmark](../../mfc/reference/crecordset-class.md#canbookmark). Inoltre, se sono supportati i segnalibri, è necessario scegliere esplicitamente per la relativa implementazione, specificando il `CRecordset::useBookmarks` opzione il [CRecordset:: Open](../../mfc/reference/crecordset-class.md#open) funzione membro. È inoltre consigliabile controllare la persistenza dei segnalibri dopo determinate operazioni di recordset. Ad esempio, se si `Requery` un recordset, segnalibri potrebbero non essere più validi. Chiamare [CDatabase:: GetBookmarkPersistence](../../mfc/reference/cdatabase-class.md#getbookmarkpersistence) per verificare se è possibile chiamare `SetBookmark`.

##  <a name="_core_absolute_positions_in_mfc_odbc"></a> Posizioni assolute in ODBC MFC

Oltre ai segnalibri, classe `CRecordset` consente di impostare il record corrente specificando una posizione ordinale. Si tratta il posizionamento assoluto.

> [!NOTE]
>  Il posizionamento assoluto non è disponibile nei recordset forward-only. Per altre informazioni sulle recordset forward-only, vedere [Recordset (ODBC)](../../data/odbc/recordset-odbc.md).

Per spostare il puntatore di record corrente utilizzando la posizione assoluta, chiamare [CRecordset:: SetAbsolutePosition](../../mfc/reference/crecordset-class.md#setabsoluteposition). Quando si passa un valore a `SetAbsolutePosition`, il record corrispondente alla posizione ordinale diventa il record corrente.

> [!NOTE]
>  La posizione assoluta di un record è potenzialmente non affidabile. Se l'utente elimina i record dal recordset, cambia la posizione ordinale di tutti i record successivi. I segnalibri sono il metodo consigliato per lo spostamento del record corrente. Per altre informazioni, vedere [segnalibri in MFC ODBC](#_core_bookmarks_in_mfc_odbc).

Per altre informazioni sull'esplorazione del recordset, vedere [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)
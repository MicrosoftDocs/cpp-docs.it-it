---
title: 'Recordset: bookmark e absolute position (ODBC)'
ms.date: 11/04/2016
f1_keywords:
- SetAbsolutePosition
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
ms.openlocfilehash: 77c8bbaf7c0bc21dab62c3785364e72656287815
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81367064"
---
# <a name="recordset-bookmarks-and-absolute-positions-odbc"></a>Recordset: bookmark e absolute position (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

Quando si esegue lo spostamento all'interno di un recordset, è spesso necessario un modo per tornare a un record specifico. Il segnalibro e la posizione assoluta di un record forniscono due metodi di questo tipo.

In questo argomento:

- [Come utilizzare i segnalibri](#_core_bookmarks_in_mfc_odbc).

- [Come impostare il record corrente utilizzando posizioni assolute](#_core_absolute_positions_in_mfc_odbc).

## <a name="bookmarks-in-mfc-odbc"></a><a name="_core_bookmarks_in_mfc_odbc"></a>Segnalibri in ODBC MFC

Un segnalibro identifica in modo univoco un record. Quando ci si sposta all'interno di un recordset, non è sempre possibile basarsi sulla posizione assoluta di un record perché i record possono essere eliminati dal recordset. Il modo affidabile per tenere traccia della posizione di un record consiste nell'utilizzare il segnalibro. Classe `CRecordset` fornisce funzioni membro per:

- Ottenere il segnalibro del record corrente, in modo da poterlo salvare in una variabile ([GetBookmark](../../mfc/reference/crecordset-class.md#getbookmark)).

- Spostamento rapido in un determinato record specificandone il segnalibro, salvato in precedenza in una variabile ([SetBookmark](../../mfc/reference/crecordset-class.md#setbookmark)).

Nell'esempio seguente viene illustrato come utilizzare queste funzioni membro per contrassegnare il record corrente e ritornarvi in un secondo momento:

```cpp
// rs is a CRecordset or
// CRecordset-derived object

CDBVariant varRecordToReturnTo;
rs.GetBookmark( varRecordToReturnTo );

// More code in which you
// move to other records

rs.SetBookmark( varRecordToReturnTo );
```

Non è necessario estrarre il tipo di dati sottostante dall'oggetto [Classe CDBVariant](../../mfc/reference/cdbvariant-class.md) . Assegnare il `GetBookmark` valore con e `SetBookmark`tornare al segnalibro con .

> [!NOTE]
> A seconda del driver ODBC e del tipo di recordset, i segnalibri potrebbero non essere supportati. È possibile determinare facilmente se i segnalibri sono supportati chiamando [CRecordset::CanBookmark](../../mfc/reference/crecordset-class.md#canbookmark). Inoltre, se i segnalibri sono supportati, è necessario `CRecordset::useBookmarks` scegliere in modo esplicito di implementarli specificando l'opzione nel [CRecordset::Open](../../mfc/reference/crecordset-class.md#open) funzione membro. È inoltre necessario controllare la persistenza dei segnalibri dopo determinate operazioni del recordset. Ad esempio, `Requery` se si recordset di un recordset, i segnalibri potrebbero non essere più validi. Chiamare [CDatabase::GetBookmarkPersistence](../../mfc/reference/cdatabase-class.md#getbookmarkpersistence) per verificare `SetBookmark`se è possibile chiamare in modo sicuro .

## <a name="absolute-positions-in-mfc-odbc"></a><a name="_core_absolute_positions_in_mfc_odbc"></a>Posizioni assolute in ODBC MFCAbsolute Positions in MFC ODBC

Oltre ai segnalibri, class `CRecordset` consente di impostare il record corrente specificando una posizione ordinale. Questo è chiamato posizionamento assoluto.

> [!NOTE]
> Il posizionamento assoluto non è disponibile nei recordset forward-only. Per ulteriori informazioni sui recordset forward-only, vedere [Recordset (ODBC)](../../data/odbc/recordset-odbc.md).

Per spostare il puntatore del record corrente utilizzando la posizione assoluta, chiamare [CRecordset::SetAbsolutePosition](../../mfc/reference/crecordset-class.md#setabsoluteposition). Quando si passa `SetAbsolutePosition`un valore a , il record corrispondente a tale posizione ordinale diventa il record corrente.

> [!NOTE]
> La posizione assoluta di un record è potenzialmente inaffidabile. Se l'utente elimina i record dal recordset, la posizione ordinale di qualsiasi record successivo viene modificata. I segnalibri sono il metodo consigliato per spostare il record corrente. Per ulteriori informazioni, vedere [Segnalibri in ODBC MFC](#_core_bookmarks_in_mfc_odbc).

Per ulteriori informazioni sullo spostamento tra recordset, vedere [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).

## <a name="see-also"></a>Vedere anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)

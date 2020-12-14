---
description: 'Ulteriori informazioni su: Recordset: segnalibri e posizioni assolute (ODBC)'
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
ms.openlocfilehash: b52ca2e43a89a6cab0e9197d8dbf32c321feca5e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97186116"
---
# <a name="recordset-bookmarks-and-absolute-positions-odbc"></a>Recordset: bookmark e absolute position (ODBC)

Le informazioni contenute in questo argomento sono valide per le classi ODBC MFC.

Quando si Esplora un recordset, è spesso necessario un modo per tornare a un record specifico. Il segnalibro e la posizione assoluta di un record forniscono due metodi di questo tipo.

In questo argomento:

- [Come usare i segnalibri](#_core_bookmarks_in_mfc_odbc).

- [Come impostare il record corrente usando posizioni assolute](#_core_absolute_positions_in_mfc_odbc).

## <a name="bookmarks-in-mfc-odbc"></a><a name="_core_bookmarks_in_mfc_odbc"></a> Segnalibri in ODBC MFC

Un segnalibro identifica in modo univoco un record. Quando si Esplora un recordset, non è sempre possibile fare affidamento sulla posizione assoluta di un record, perché i record possono essere eliminati dal recordset. Il modo affidabile per tenere traccia della posizione di un record consiste nell'usare il relativo segnalibro. `CRecordset`La classe fornisce funzioni membro per:

- Recupero del segnalibro del record corrente, in modo che sia possibile salvarlo in una variabile ([GetBookmark](../../mfc/reference/crecordset-class.md#getbookmark)).

- Passaggio rapido a un determinato record specificando il relativo segnalibro, salvato in precedenza in una variabile ([Sesegnalibro](../../mfc/reference/crecordset-class.md#setbookmark)).

Nell'esempio seguente viene illustrato come utilizzare queste funzioni membro per contrassegnare il record corrente e ritornarvi in seguito:

```cpp
// rs is a CRecordset or
// CRecordset-derived object

CDBVariant varRecordToReturnTo;
rs.GetBookmark( varRecordToReturnTo );

// More code in which you
// move to other records

rs.SetBookmark( varRecordToReturnTo );
```

Non è necessario estrarre il tipo di dati sottostante dall'oggetto della [classe CDBVariant](../../mfc/reference/cdbvariant-class.md) . Assegnare il valore a `GetBookmark` e tornare a tale segnalibro con `SetBookmark` .

> [!NOTE]
> A seconda del driver ODBC e del tipo di recordset, i segnalibri potrebbero non essere supportati. È possibile determinare facilmente se i segnalibri sono supportati chiamando [CRecordset:: CanBookmark](../../mfc/reference/crecordset-class.md#canbookmark). Se inoltre sono supportati segnalibri, è necessario scegliere esplicitamente di implementarli specificando l' `CRecordset::useBookmarks` opzione nella funzione membro [CRecordset:: Open](../../mfc/reference/crecordset-class.md#open) . È inoltre consigliabile controllare la persistenza dei segnalibri dopo determinate operazioni del recordset. Se, ad esempio, si `Requery` tratta di un recordset, i segnalibri potrebbero non essere più validi. Chiamare [CDatabase:: GetBookmarkPersistence](../../mfc/reference/cdatabase-class.md#getbookmarkpersistence) per verificare se è possibile chiamare in modo sicuro `SetBookmark` .

## <a name="absolute-positions-in-mfc-odbc"></a><a name="_core_absolute_positions_in_mfc_odbc"></a> Posizioni assolute in ODBC MFC

Oltre ai segnalibri, `CRecordset` la classe consente di impostare il record corrente specificando una posizione ordinale. Questa operazione viene definita posizionamento assoluto.

> [!NOTE]
> Il posizionamento assoluto non è disponibile nei recordset di sola trasmissione. Per ulteriori informazioni sui recordset di sola trasmissione, vedere [Recordset (ODBC)](../../data/odbc/recordset-odbc.md).

Per spostare il puntatore di record corrente usando la posizione assoluta, chiamare [CRecordset:: SetAbsolutePosition](../../mfc/reference/crecordset-class.md#setabsoluteposition). Quando si passa un valore a `SetAbsolutePosition` , il record corrispondente a tale posizione ordinale diventa il record corrente.

> [!NOTE]
> La posizione assoluta di un record è potenzialmente inaffidabile. Se l'utente elimina i record dal recordset, viene modificata la posizione ordinale di qualsiasi record successivo. I segnalibri sono il metodo consigliato per lo trasferimento del record corrente. Per ulteriori informazioni, vedere [segnalibri in ODBC MFC](#_core_bookmarks_in_mfc_odbc).

Per ulteriori informazioni sull'esplorazione dei recordset, vedere [Recordset: scorrimento (ODBC)](../../data/odbc/recordset-scrolling-odbc.md).

## <a name="see-also"></a>Vedi anche

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)

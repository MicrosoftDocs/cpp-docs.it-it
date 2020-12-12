---
description: 'Altre informazioni su: TN047: relaxed database Transaction requirements'
title: 'TN047: rilascio dei requisiti di transazione database'
ms.date: 11/04/2016
f1_keywords:
- vc.data
helpviewer_keywords:
- TN047
ms.assetid: f93c51cf-a8c0-43d0-aa47-7bcb8333d693
ms.openlocfilehash: 6f356db75df93466bc392e555246a363e6b52187
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97215118"
---
# <a name="tn047-relaxing-database-transaction-requirements"></a>TN047: rilascio dei requisiti di transazione database

Questa nota tecnica, che illustra i requisiti di transazione delle classi di database ODBC MFC, è ora obsoleta. Prima di MFC 4,2, le classi di database richiedevano che i cursori venissero conservati nei recordset dopo un'operazione **CommitTrans** o **rollback** . Se il driver ODBC e il sistema DBMS non supportano questo livello di conservazione del cursore, le classi del database non hanno abilitato le transazioni.

A partire da MFC 4,2, le classi di database hanno attenuato la limitazione della richiesta di conservazione del cursore. Se il driver li supporta, verranno abilitate le transazioni. Tuttavia, è ora necessario controllare l'effetto di un'operazione **CommitTrans** o **rollback** sui recordset aperti. Per ulteriori informazioni, vedere le funzioni membro [CDatabase:: GetCursorCommitBehavior](../mfc/reference/cdatabase-class.md#getcursorcommitbehavior) e [CDatabase:: GetCursorRollbackBehavior](../mfc/reference/cdatabase-class.md#getcursorrollbackbehavior) .

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)

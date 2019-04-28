---
title: 'TN047: Requisiti di transazione di Database'
ms.date: 11/04/2016
f1_keywords:
- vc.data
helpviewer_keywords:
- TN047
ms.assetid: f93c51cf-a8c0-43d0-aa47-7bcb8333d693
ms.openlocfilehash: 968420658a90c983d8e6c3eaf1e0c61603fc5441
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62305346"
---
# <a name="tn047-relaxing-database-transaction-requirements"></a>TN047: Requisiti di transazione di Database

Questa nota tecnica, che è descritti i requisiti di transazione delle classi di database ODBC MFC, è ora obsoleta. Prima di MFC 4.2, le classi di database necessari che i cursori mantenute in caso di recordset dopo una **CommitTrans** oppure **Rollback** operazione. Se il driver ODBC e DBMS non supporta questo livello di conservazione di cursore, quindi le classi di database non è stata abilitata transazioni.

A partire da MFC 4.2, le classi di database hanno aumentato la restrizione di che richiedono la conservazione del cursore. Verranno abilitate se il driver supporta le transazioni. Tuttavia, è ora necessario controllare l'effetto di un **CommitTrans** oppure **Rollback** operazione per i recordset aperti. Vedere le funzioni membro [CDatabase:: GetCursorCommitBehavior](../mfc/reference/cdatabase-class.md#getcursorcommitbehavior) e [CDatabase:: GetCursorRollbackBehavior](../mfc/reference/cdatabase-class.md#getcursorrollbackbehavior) per altre informazioni.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)

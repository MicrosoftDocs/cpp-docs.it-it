---
title: ': Tn047 requisiti di transazione di Database | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.data
dev_langs:
- C++
helpviewer_keywords:
- TN047
ms.assetid: f93c51cf-a8c0-43d0-aa47-7bcb8333d693
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 96f3116f503ffa0ffc461ea2c1a0bdaf8947a0be
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46427017"
---
# <a name="tn047-relaxing-database-transaction-requirements"></a>TN047: rilascio dei requisiti di transazione database

Questa nota tecnica, che è descritti i requisiti di transazione delle classi di database ODBC MFC, è ora obsoleta. Prima di MFC 4.2, le classi di database necessari che i cursori mantenute in caso di recordset dopo una **CommitTrans** oppure **Rollback** operazione. Se il driver ODBC e DBMS non supporta questo livello di conservazione di cursore, quindi le classi di database non è stata abilitata transazioni.

A partire da MFC 4.2, le classi di database hanno aumentato la restrizione di che richiedono la conservazione del cursore. Verranno abilitate se il driver supporta le transazioni. Tuttavia, è ora necessario controllare l'effetto di un **CommitTrans** oppure **Rollback** operazione per i recordset aperti. Vedere le funzioni membro [CDatabase:: GetCursorCommitBehavior](../mfc/reference/cdatabase-class.md#getcursorcommitbehavior) e [CDatabase:: GetCursorRollbackBehavior](../mfc/reference/cdatabase-class.md#getcursorrollbackbehavior) per altre informazioni.

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)


---
title: 'TN047: Rilascio dei requisiti di transazione di Database | Documenti Microsoft'
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
ms.openlocfilehash: be5870efacb61d5c0bb74f85427c41f787d2edd6
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="tn047-relaxing-database-transaction-requirements"></a>TN047: rilascio dei requisiti di transazione database
Questa nota tecnica, che esaminati i requisiti della transazione delle classi di database ODBC MFC, è ora obsoleta. Prima di MFC 4.2, le classi di database necessari che cursori mantenuti nei recordset dopo un **CommitTrans** o **Rollback** operazione. Se il driver ODBC e DBMS non supporta questo livello di conservazione di cursore, le classi di database non abilitare le transazioni.  
  
 A partire da MFC 4.2, le classi di database sono flessibili la restrizione di richiedere la conservazione del cursore. Le transazioni verranno abilitate se il driver supportarle. Tuttavia, è ora necessario controllare l'effetto di un **CommitTrans** o **Rollback** operazione nei recordset aperto. Vedere le funzioni membro [CDatabase:: GetCursorCommitBehavior](../mfc/reference/cdatabase-class.md#getcursorcommitbehavior) e [CDatabase:: GetCursorRollbackBehavior](../mfc/reference/cdatabase-class.md#getcursorrollbackbehavior) per ulteriori informazioni.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)


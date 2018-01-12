---
title: 'CCommand:: Close | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CCommand.Close
- CCommand::Close
dev_langs: C++
helpviewer_keywords: Close method
ms.assetid: 4da9c02c-7082-4e47-a0fa-78b546f0f7d2
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: cad9d6a892b31d4e0c3945d94c36466d72fb9c81
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ccommandclose"></a>CCommand::Close
Rilascia il set di righe della funzione di accesso associato al comando.  
  
## <a name="syntax"></a>Sintassi  
  
```  
void Close( );  
```  
  
## <a name="remarks"></a>Note  
 Un comando Usa un set di righe, funzione di accesso set di risultati e, facoltativamente, una funzione di accesso parametro (a differenza delle tabelle, che non supportano parametri e non richiedono una funzione di accesso parametro).  
  
 Quando si esegue un comando, è necessario chiamare sia `Close` e [ReleaseCommand](../../data/oledb/ccommand-releasecommand.md) dopo il comando.  
  
 Quando si desidera eseguire ripetutamente lo stesso comando, è necessario rilasciare ogni funzione di accesso set di risultati chiamando `Close` prima di chiamare `Execute`. Alla fine della serie, è necessario rilasciare la funzione di accesso parametro chiamando `ReleaseCommand`. Un altro scenario comune viene chiamata una stored procedure con parametri di output. In molti provider (ad esempio, il provider OLE DB per SQL Server) i valori dei parametri di output non sarà accessibile finché non si chiude la funzione di accesso set di risultati. Chiamare `Close` per chiudere il set di righe restituito e funzione di accesso set di risultati, ma non il parametro della funzione di accesso, consentendo in tal modo è possibile recuperare i valori dei parametri di output.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come chiamare `Close` e `ReleaseCommand` quando si esegue più volte lo stesso comando.  
  
 [!code-cpp[NVC_OLEDB_Consumer#2](../../data/oledb/codesnippet/cpp/ccommand-close_1.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldbcli.h  
  
## <a name="see-also"></a>Vedere anche  
 [CCommand (classe)](../../data/oledb/ccommand-class.md)   
 [CCommand::ReleaseCommand](../../data/oledb/ccommand-releasecommand.md)
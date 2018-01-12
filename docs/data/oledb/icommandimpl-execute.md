---
title: 'ICommandImpl:: Execute | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ICommandImpl::Execute
- ICommandImpl.Execute
dev_langs: C++
helpviewer_keywords: Execute method
ms.assetid: 033e0d4e-256b-4eed-9215-70e0bebb768c
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 965a344b55b6d290f112970ff357f383fefcd630
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="icommandimplexecute"></a>ICommandImpl::Execute
Esegue il comando.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
      HRESULT Execute(  
   IUnknown* pUnkOuter,  
   REFIID riid,  
   DBPARAMS* pParams,  
   DBROWCOUNT* pcRowsAffected,  
   IUnknown** ppRowset   
);  
```  
  
#### <a name="parameters"></a>Parametri  
 Vedere [ICommand:: Execute](https://msdn.microsoft.com/en-us/library/ms718095.aspx) nel *di riferimento per programmatori OLE DB*.  
  
## <a name="remarks"></a>Note  
 L'interfaccia in uscita richiesta sarà un'interfaccia acquisita dall'oggetto set di righe a cui questa funzione crea.  
  
 **Eseguire** chiamate [CreateRowset](../../data/oledb/icommandimpl-createrowset.md). Override dell'implementazione predefinita per creare più di un set di righe o per fornire la propria condizioni per la creazione di diversi set di righe.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [ICommandImpl (classe)](../../data/oledb/icommandimpl-class.md)   
 [ICommandImpl::CancelExecution](../../data/oledb/icommandimpl-cancelexecution.md)
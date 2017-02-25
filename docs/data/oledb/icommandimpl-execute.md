---
title: "ICommandImpl::Execute | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ICommandImpl::Execute"
  - "ICommandImpl.Execute"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Execute (metodo)"
ms.assetid: 033e0d4e-256b-4eed-9215-70e0bebb768c
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# ICommandImpl::Execute
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Viene eseguito il comando.  
  
## Sintassi  
  
```  
  
      HRESULT Execute(  
   IUnknown* pUnkOuter,  
   REFIID riid,  
   DBPARAMS* pParams,  
   DBROWCOUNT* pcRowsAffected,  
   IUnknown** ppRowset   
);  
```  
  
#### Parametri  
 Vedere [ICommand::Execute](https://msdn.microsoft.com/en-us/library/ms718095.aspx) nel *riferimento di programmatore OLE DB*.  
  
## Note  
 L'interfaccia in uscita richiesta è un'interfaccia acquisita dall'oggetto rowset che crea questa funzione.  
  
 **Execute** chiama [CreateRowset](../../data/oledb/icommandimpl-createrowset.md).  Eseguire l'override dell'implementazione predefinita per creare più di un rowset o per fornire le proprie condizioni per creare rowset diversi.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe ICommandImpl](../../data/oledb/icommandimpl-class.md)   
 [ICommandImpl::CancelExecution](../../data/oledb/icommandimpl-cancelexecution.md)
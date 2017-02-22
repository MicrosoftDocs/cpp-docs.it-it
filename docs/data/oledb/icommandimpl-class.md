---
title: "Classe ICommandImpl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ICommandImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ICommandImpl (classe)"
ms.assetid: ef285fef-0d66-45e6-a762-b03357098e3b
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Classe ICommandImpl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce l'implementazione per l'interfaccia di [ICommand](https://msdn.microsoft.com/en-us/library/ms709737.aspx).  
  
## Sintassi  
  
```  
template <class T, class CommandBase = ICommand>   
class ATL_NO_VTABLE ICommandImpl : public CommandBase  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `ICommandImpl`.  
  
 `CommandBase`  
 Un'interfaccia di comando.  Il valore predefinito è `ICommand`.  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[CancelExecution](../../data/oledb/icommandimpl-cancelexecution.md)|Annulla l'esecuzione di comandi corrente.|  
|[Annulla](../../data/oledb/icommandimpl-cancel.md)|Annulla l'esecuzione di comandi corrente.|  
|[CreateRowset](../../data/oledb/icommandimpl-createrowset.md)|Crea un oggetto rowset.|  
|[Execute](../../data/oledb/icommandimpl-execute.md)|Viene eseguito il comando.|  
|[GetDBSession](../../data/oledb/icommandimpl-getdbsession.md)|Restituisce un puntatore a interfaccia alla sessione che ha creato il comando.|  
|[ICommandImpl](../../data/oledb/icommandimpl-icommandimpl.md)|Costruttore.|  
  
### Membri di dati  
  
|||  
|-|-|  
|[m\_bCancel](../../data/oledb/icommandimpl-m-bcancel.md)|Indica se il comando deve essere annullato.|  
|[m\_bCancelWhenExecuting](../../data/oledb/icommandimpl-m-bcancelwhenexecuting.md)|Indica se il comando deve essere annullato quando viene eseguita.|  
|[m\_bIsExecuting](../../data/oledb/icommandimpl-m-bisexecuting.md)|Indica se il comando è in esecuzione.|  
  
## Note  
 Un'interfaccia richiesta sull'oggetto comando.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
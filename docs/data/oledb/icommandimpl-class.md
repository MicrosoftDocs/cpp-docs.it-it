---
title: Classe ICommandImpl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: ICommandImpl
dev_langs: C++
helpviewer_keywords: ICommandImpl class
ms.assetid: ef285fef-0d66-45e6-a762-b03357098e3b
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: c553effb6ad6a4aa9571eed62f30e4e83910afbd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="icommandimpl-class"></a>Classe ICommandImpl
Fornisce l'implementazione per il [ICommand](https://msdn.microsoft.com/en-us/library/ms709737.aspx) interfaccia.  
  
## <a name="syntax"></a>Sintassi  
  
```  
template <class T, class CommandBase = ICommand>   
class ATL_NO_VTABLE ICommandImpl : public CommandBase  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe, derivata da `ICommandImpl`.  
  
 `CommandBase`  
 Un'interfaccia di comando. Il valore predefinito è `ICommand`.  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[CancelExecution](../../data/oledb/icommandimpl-cancelexecution.md)|Annulla l'esecuzione del comando corrente.|  
|[Annulla](../../data/oledb/icommandimpl-cancel.md)|Annulla l'esecuzione del comando corrente.|  
|[CreateRowset](../../data/oledb/icommandimpl-createrowset.md)|Crea un oggetto set di righe.|  
|[Eseguire](../../data/oledb/icommandimpl-execute.md)|Esegue il comando.|  
|[GetDBSession](../../data/oledb/icommandimpl-getdbsession.md)|Restituisce un puntatore a interfaccia per la sessione che ha creato il comando.|  
|[ICommandImpl](../../data/oledb/icommandimpl-icommandimpl.md)|Costruttore.|  
  
### <a name="data-members"></a>Membri di dati  
  
|||  
|-|-|  
|[m_bCancel](../../data/oledb/icommandimpl-m-bcancel.md)|Indica se il comando deve essere annullata.|  
|[m_bCancelWhenExecuting](../../data/oledb/icommandimpl-m-bcancelwhenexecuting.md)|Indica se il comando deve essere annullata durante l'esecuzione.|  
|[m_bIsExecuting](../../data/oledb/icommandimpl-m-bisexecuting.md)|Indica se il comando è attualmente in esecuzione.|  
  
## <a name="remarks"></a>Note  
 Un'interfaccia obbligatoria per l'oggetto comando.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
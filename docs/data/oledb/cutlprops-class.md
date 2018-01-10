---
title: Classe CUtlProps | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: CUtlProps
dev_langs: C++
helpviewer_keywords: CUtlProps class
ms.assetid: bb525178-765c-4e23-a110-c0fd70c05437
caps.latest.revision: "9"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 75e92f48729d0aae9f85cc7b7c5c97e4778f96a7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cutlprops-class"></a>Classe CUtlProps
Implementa le proprietà per un'ampia gamma di interfacce di proprietà OLE DB (ad esempio, `IDBProperties`, `IDBProperties`, e `IRowsetInfo`).  
  
## <a name="syntax"></a>Sintassi  
  
```  
template < class T >  
class ATL_NO_VTABLE CUtlProps : public CUtlPropsBase  
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 La classe che contiene il `BEGIN_PROPSET_MAP`.  
  
## <a name="members"></a>Membri  
  
### <a name="methods"></a>Metodi  
  
|||  
|-|-|  
|[GetPropValue](../../data/oledb/cutlprops-getpropvalue.md)|Ottiene una proprietà da un set di proprietà.|  
|[IsValidValue](../../data/oledb/cutlprops-isvalidvalue.md)|Utilizzato per convalidare un valore prima di impostare una proprietà.|  
|[OnInterfaceRequested](../../data/oledb/cutlprops-oninterfacerequested.md)|Gestisce le richieste di un'interfaccia facoltativa quando un consumer chiama un metodo su un'interfaccia di creazione di oggetti.|  
|[OnPropertyChanged](../../data/oledb/cutlprops-onpropertychanged.md)|Chiamata eseguita dopo l'impostazione di una proprietà per gestire proprietà concatenate.|  
|[SetPropValue](../../data/oledb/cutlprops-setpropvalue.md)|Imposta una proprietà in un set di proprietà.|  
  
## <a name="remarks"></a>Note  
 La maggior parte di questa classe è un dettaglio di implementazione.  
  
 `CUtlProps`contiene due membri per l'impostazione di proprietà internamente: [GetPropValue](../../data/oledb/cutlprops-getpropvalue.md) e [SetPropValue](../../data/oledb/cutlprops-setpropvalue.md).  
  
 Per ulteriori informazioni sulle macro di utilizzato in una mappa di set di proprietà, vedere [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md) e [END_PROPSET_MAP](../../data/oledb/end-propset-map.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
---
title: "Classe CUtlProps | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CUtlProps"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CUtlProps (classe)"
ms.assetid: bb525178-765c-4e23-a110-c0fd70c05437
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Classe CUtlProps
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa le proprietà di diverse interfacce della proprietà OLE DB, ad esempio `IDBProperties`, `IDBProperties` e `IRowsetInfo`\).  
  
## Sintassi  
  
```  
template < class T >  
class ATL_NO_VTABLE CUtlProps : public CUtlPropsBase  
```  
  
#### Parametri  
 `T`  
 La classe che contiene `BEGIN_PROPSET_MAP`.  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[GetPropValue](../../data/oledb/cutlprops-getpropvalue.md)|Ottiene una proprietà da un insieme di proprietà.|  
|[IsValidValue](../../data/oledb/cutlprops-isvalidvalue.md)|Utilizzato per convalidare un valore prima di impostare una proprietà.|  
|[OnInterfaceRequested](../../data/oledb/cutlprops-oninterfacerequested.md)|Gestisce le richieste per un'interfaccia facoltativa quando un consumer chiama un metodo di un'interfaccia della creazione di un oggetto.|  
|[OnPropertyChanged](../../data/oledb/cutlprops-onpropertychanged.md)|Chiamata dopo avere impostato una proprietà per gestire proprietà concatenate.|  
|[SetPropValue](../../data/oledb/cutlprops-setpropvalue.md)|Imposta una proprietà in una raccolta di proprietà.|  
  
## Note  
 La maggior parte di questa classe è un dettaglio di implementazione.  
  
 `CUtlProps` contiene due membri per impostare le proprietà internamente: [GetPropValue](../../data/oledb/cutlprops-getpropvalue.md) e [SetPropValue](../../data/oledb/cutlprops-setpropvalue.md).  
  
 Per ulteriori informazioni sulle macro utilizzate in una mappa degli insiemi di proprietà, vedere [BEGIN\_PROPSET\_MAP](../../data/oledb/begin-propset-map.md) e [END\_PROPSET\_MAP](../../data/oledb/end-propset-map.md).  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
---
title: "Classe IRowsetInfoImpl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.IRowsetInfoImpl"
  - "IRowsetInfoImpl"
  - "ATL::IRowsetInfoImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IRowsetInfoImpl (classe)"
ms.assetid: 9c654155-7727-464e-bd31-143e68391a47
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Classe IRowsetInfoImpl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce un'implementazione per l'interfaccia di [IRowsetInfo](https://msdn.microsoft.com/en-us/library/ms724541.aspx).  
  
## Sintassi  
  
```  
template <class T, class PropClass = T>  
class ATL_NO_VTABLE IRowsetInfoImpl :   
   public IRowsetInfo,    
   public CUtlProps<PropClass>  
```  
  
#### Parametri  
 `T`  
 La classe, derivata da `IRowsetInfoImpl`.  
  
 `PropClass`  
 Una classe di proprietà definibile dall'utente che per impostazione predefinita a `T`.  
  
## Membri  
  
### Metodi di interfaccia  
  
|||  
|-|-|  
|[GetProperties](../../data/oledb/irowsetinfoimpl-getproperties.md)|Restituisce le impostazioni correnti di tutte le proprietà supportate dal rowset.|  
|[GetReferencedRowset](../../data/oledb/irowsetinfoimpl-getreferencedrowset.md)|Restituisce un puntatore a interfaccia nel rowset in cui un segnalibro viene applicato.|  
|[GetSpecification](../../data/oledb/irowsetinfoimpl-getspecification.md)|Restituisce un puntatore a un'interfaccia sull'oggetto \(comando o sessione\) che crea questo rowset.|  
  
## Note  
 Un'interfaccia richiesta sui rowset.  Questa classe implementa le proprietà del rowset tramite [mappa degli insiemi di proprietà](../../data/oledb/begin-propset-map.md) definite nella classe del comando.  Sebbene la classe del rowset sia utilizzare gli insiemi di proprietà delle classi dei comandi, il rowset è fornito con la propria copia delle proprietà in fase di esecuzione, quando viene creato da un oggetto sessione o il comando.  
  
## Requisiti  
 **Intestazione:** altdb.h  
  
## Vedere anche  
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
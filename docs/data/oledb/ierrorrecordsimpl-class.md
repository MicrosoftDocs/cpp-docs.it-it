---
title: "Classe IErrorRecordsImpl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::IErrorRecordsImpl"
  - "ATL.IErrorRecordsImpl"
  - "IErrorRecordsImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IErrorRecordsImpl (classe)"
ms.assetid: dea8e938-c5d8-45ab-86de-eb8fbf534ffb
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Classe IErrorRecordsImpl
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Implementa l'interfaccia OLE DB [IErrorRecords](https://msdn.microsoft.com/en-us/library/ms718112.aspx), aggiungendo i record e il recupero dei record da un membro dati \([m\_rgErrors](../../data/oledb/ierrorrecordsimpl-m-rgerrors.md)\) di tipo **CAtlArray\<**`RecordClass`**\>**.  
  
## Sintassi  
  
```  
template <  
   class T,   
   class RecordClass = ATLERRORINFO  
>  
class IErrorRecordsImpl : public IErrorRecords  
```  
  
#### Parametri  
 `T`  
 Classe derivata da `IErrorRecordsImpl`.  
  
 `RecordClass`  
 Classe che rappresenta un oggetto error OLE DB.  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[GetErrorDescriptionString](../../data/oledb/ierrorrecordsimpl-geterrordescriptionstring.md)|Ottiene la stringa descrittiva di errori da un record di errore.|  
|[GetErrorGUID](../../data/oledb/ierrorrecordsimpl-geterrorguid.md)|Ottiene l'errore GUID da un record di errore.|  
|[GetErrorHelpContext](../../data/oledb/ierrorrecordsimpl-geterrorhelpcontext.md)|Ottiene l'id del contesto della guida da un record di errore.|  
|[GetErrorHelpFile](../../data/oledb/ierrorrecordsimpl-geterrorhelpfile.md)|Ottiene il percorso completo del file della Guida da un record di errore.|  
|[GetErrorSource](../../data/oledb/ierrorrecordsimpl-geterrorsource.md)|Ottiene il codice sorgente di errore da un record di errore.|  
  
### Metodi di interfaccia  
  
|||  
|-|-|  
|[AddErrorRecord](../../data/oledb/ierrorrecordsimpl-adderrorrecord.md)|Aggiunge un record all'oggetto error OLE DB.|  
|[GetBasicErrorInfo](../../data/oledb/cdberrorinfo-getbasicerrorinfo.md)|Restituisce le informazioni di base sull'errore, ad esempio il numero di errore specifico del provider e del codice restituito.|  
|[GetCustomErrorObject](../../data/oledb/cdberrorinfo-getcustomerrorobject.md)|Restituisce un puntatore a un'interfaccia a un oggetto di errore personalizzato.|  
|[GetErrorInfo](../../data/oledb/cdberrorinfo-geterrorinfo.md)|Restituisce un puntatore a interfaccia di [IErrorInfo](https://msdn.microsoft.com/en-us/library/ms718112.aspx) sul record specificato.|  
|[GetErrorParameters](../../data/oledb/cdberrorinfo-geterrorparameters.md)|Restituisce i parametri di errore.|  
|[GetRecordCount](../Topic/CDaoRecordset::GetRecordCount.md)|Restituisce il numero di record nell'oggetto del record OLE DB.|  
  
### Membri di dati  
  
|||  
|-|-|  
|[m\_rgErrors](../../data/oledb/ierrorrecordsimpl-m-rgerrors.md)|Una matrice di record di errore.|  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)
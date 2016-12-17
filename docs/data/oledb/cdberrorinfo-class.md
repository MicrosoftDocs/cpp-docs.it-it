---
title: "Classe CDBErrorInfo | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDBErrorInfo"
  - "ATL::CDBErrorInfo"
  - "ATL.CDBErrorInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDBErrorInfo (classe)"
ms.assetid: 9a5c18a2-ee3e-40f5-ab4c-581288d7f737
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CDBErrorInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Fornisce supporto per l'elaborazione di errore OLE DB mediante l'interfaccia OLE DB [IErrorRecords](https://msdn.microsoft.com/en-us/library/ms718112.aspx).  
  
## Sintassi  
  
```  
class CDBErrorInfo  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[GetAllErrorInfo](../../data/oledb/cdberrorinfo-getallerrorinfo.md)|Restituisce tutte le informazioni sugli errori contenute in un record di errore.|  
|[GetBasicErrorInfo](../../data/oledb/cdberrorinfo-getbasicerrorinfo.md)|Chiama [IErrorRecords::GetBasicErrorInfo](https://msdn.microsoft.com/en-us/library/ms723907.aspx) per restituire informazioni di base sull'errore specificato.|  
|[GetCustomErrorObject](../../data/oledb/cdberrorinfo-getcustomerrorobject.md)|Chiamate [IErrorRecords::GetCustomErrorObject](https://msdn.microsoft.com/en-us/library/ms725417.aspx) per restituire un puntatore a un'interfaccia a un oggetto di errore personalizzato.|  
|[GetErrorInfo](../../data/oledb/cdberrorinfo-geterrorinfo.md)|Chiama [IErrorRecords::GetErrorInfo](https://msdn.microsoft.com/en-us/library/ms711230.aspx) per restituire un puntatore a interfaccia di **IErrorInfo** al record specificato.|  
|[GetErrorParameters](../../data/oledb/cdberrorinfo-geterrorparameters.md)|Chiama [IErrorRecords::GetErrorParameters](https://msdn.microsoft.com/en-us/library/ms715793.aspx) per restituire i parametri di errore.|  
|[GetErrorRecords](../../data/oledb/cdberrorinfo-geterrorrecords.md)|Recupera i record di errore per l'oggetto specificato.|  
  
## Note  
 Questa interfaccia restituisce uno o più record di errore all'utente.  Chiamare [CDBErrorInfo::GetErrorRecords](../../data/oledb/cdberrorinfo-geterrorrecords.md) innanzitutto, per ottenere un conteggio dei record di errore.  Chiamare una delle funzioni di accesso, ad [CDBErrorInfo::GetAllErrorInfo](../../data/oledb/cdberrorinfo-getallerrorinfo.md), recuperare informazioni sugli errori per ciascun record.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [DBViewer](../../top/visual-cpp-samples.md)   
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
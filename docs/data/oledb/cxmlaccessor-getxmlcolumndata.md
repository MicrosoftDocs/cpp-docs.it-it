---
title: "CXMLAccessor::GetXMLColumnData | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.CXMLAccessor.GetXMLColumnData"
  - "CXMLAccessor::GetXMLColumnData"
  - "CXMLAccessor.GetXMLColumnData"
  - "ATL::CXMLAccessor::GetXMLColumnData"
  - "GetXMLColumnData"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetXMLColumnData (metodo)"
ms.assetid: 719e8efe-8758-4af7-a855-0e44ea196546
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# CXMLAccessor::GetXMLColumnData
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera le informazioni sul tipo di una tabella in formato stringa XML, dalla colonna.  
  
## Sintassi  
  
```  
  
      HRESULT GetXMLColumnData(   
   CSimpleStringW& strOutput    
) throw( );  
```  
  
#### Parametri  
 `strOutput`  
 \[out\] riferimento A un buffer di stringa contenente le informazioni sul tipo di colonna da recuperare.  La stringa formattata con i nomi dei tag XML che corrispondono ai nomi di colonna dell'archivio dati.  
  
## Valore restituito  
 Uno dei valori standard di `HRESULT`.  
  
## Note  
 Di seguito viene illustrato come le informazioni sul tipo di colonna sono formattate in XML.  `type` specifica il tipo di dati della colonna.  Si noti che i tipi di dati sono basati sui tipi di dati OLE DB, non quelli del database a cui si accede.  
  
 `<columninfo>`  
  
 `<column type = I2/> ColumnName`  
  
 `</columninfo>`  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CXMLAccessor](../../data/oledb/cxmlaccessor-class.md)
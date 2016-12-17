---
title: "CXMLAccessor::GetXMLRowData | Microsoft Docs"
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
  - "ATL::CXMLAccessor::GetXMLRowData"
  - "ATL.CXMLAccessor.GetXMLRowData"
  - "CXMLAccessor::GetXMLRowData"
  - "CXMLAccessor.GetXMLRowData"
  - "GetXMLRowData"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetXMLRowData (metodo)"
ms.assetid: 156b66e3-42fd-491c-8943-38cf5e36f687
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CXMLAccessor::GetXMLRowData
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera l'intero contenuto di una tabella in formato stringa XML, per riga.  
  
## Sintassi  
  
```  
  
      HRESULT GetXMLRowData(   
   CSimpleStringW& strOutput,   
   bool bAppend = false    
) throw( );  
```  
  
#### Parametri  
 `strOutput`  
 \[out\] Riferimento a un buffer che contiene i dati della tabella da recuperare.  I dati vengono formattati in formato stringa con i nomi dei tag XML che corrispondono ai nomi di colonna dell'archivio dati.  
  
 *bAppend*  
 \[in\] valore booleano che specifica se aggiungere una stringa alla fine dei dati di output.  
  
## Valore restituito  
 Uno dei valori standard di `HRESULT`.  
  
## Note  
 Di seguito viene illustrato come sono formattati i dati della riga in XML.  `DATA` rappresenta i dati della riga.  Utilizzare i metodi di spostamento per passare alla riga desiderata.  
  
 `<row>`  
  
 `<column name>DATA</column name>`  
  
 `</row>`  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CXMLAccessor](../../data/oledb/cxmlaccessor-class.md)
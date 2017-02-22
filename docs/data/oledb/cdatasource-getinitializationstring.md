---
title: "CDataSource::GetInitializationString | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CDataSource::GetInitializationString"
  - "CDataSource.GetInitializationString"
  - "GetInitializationString"
  - "CDataSource::GetInitializationString"
  - "ATL.CDataSource.GetInitializationString"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetInitializationString (metodo)"
ms.assetid: 97134723-6e99-4004-a56d-ec57543dbf3b
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# CDataSource::GetInitializationString
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recuperare la stringa di inizializzazione di un'origine dati attualmente aperta.  
  
## Sintassi  
  
```  
  
      HRESULT GetInitializationString(   
   BSTR* pInitializationString,   
   bool bIncludePassword = false    
) throw( );  
```  
  
#### Parametri  
 *pInitializationString*  
 \[out\] puntatore Alla stringa di inizializzazione.  
  
 *bIncludePassword*  
 \[in\] **true** se la stringa include una password; in caso contrario **false**.  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 La stringa di inizializzazione risultante può essere utilizzato in un secondo momento per riaprire la connessione a un'origine dati.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDataSource](../../data/oledb/cdatasource-class.md)
---
title: "CDataConnection::Copy | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDataConnection.Copy"
  - "ATL.CDataConnection.Copy"
  - "ATL::CDataConnection::Copy"
  - "CDataConnection::Copy"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Copy (metodo)"
ms.assetid: a3dbd70d-36be-49e0-a527-00e3910a7a56
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# CDataConnection::Copy
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Crea una copia di una connessione dati esistente.  
  
## Sintassi  
  
```  
  
      CDataConnection& Copy(   
   const CDataConnection & ds    
) throw( );  
```  
  
#### Parametri  
 `ds`  
 \[in\] riferimento A una connessione dati esistente da copiare.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDataConnection](../../data/oledb/cdataconnection-class.md)
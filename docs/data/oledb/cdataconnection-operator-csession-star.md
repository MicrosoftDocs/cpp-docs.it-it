---
title: "CDataConnection::operator CSession* | Microsoft Docs"
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
  - "CDataConnection.operatorCSession*"
  - "CDataConnection::operatorCSession*"
  - "operatorCSession*"
  - "CSession*"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSession* (operatore)"
  - "operatore CSession*"
ms.assetid: 0b0feede-5c3e-4835-be5b-03651597014d
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDataConnection::operator CSession*
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce un puntatore all'oggetto `CSession` contenuto.  
  
## Sintassi  
  
```  
  
operator const CSession*() throw( );  
  
```  
  
## Note  
 Questo operatore restituisce un puntatore all'oggetto `CSession` contenuto, consentendo di passare un oggetto `CDataConnection` dove è previsto un puntatore `CSession`.  
  
## Esempio  
 Vedere [operatore CSession&](../../data/oledb/cdataconnection-operator-csession-amp.md) per un esempio di utilizzo.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDataConnection](../../data/oledb/cdataconnection-class.md)   
 [CDataConnection::operator CSession&](../../data/oledb/cdataconnection-operator-csession-amp.md)
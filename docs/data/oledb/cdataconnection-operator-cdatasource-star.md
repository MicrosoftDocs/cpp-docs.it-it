---
title: "CDataConnection::operator CDataSource* | Microsoft Docs"
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
  - "CDataSource*"
  - "CDataConnection::operatorCDataSource*"
  - "CDataConnection.operatorCDataSource*"
  - "operatorCDataSource*"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDataSource* (operatore)"
  - "operatore * (CDataSource)"
ms.assetid: 9118e324-e68d-45c5-a791-03f041d420ed
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDataConnection::operator CDataSource*
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce un puntatore all'oggetto contenuto di `CDataSource`.  
  
## Sintassi  
  
```  
  
operator const CDataSource*() throw( );  
  
```  
  
## Note  
 Questo operatore restituisce un puntatore all'oggetto contenuto di `CDataSource`, consentendo di passare un oggetto di `CDataConnection` in cui un puntatore di `CDataSource` previsto.  
  
 Vedere [operatore CDataSource&](../../data/oledb/cdataconnection-operator-cdatasource-amp.md) per un esempio di utilizzo.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDataConnection](../../data/oledb/cdataconnection-class.md)   
 [CDataConnection::operator CDataSource&](../../data/oledb/cdataconnection-operator-cdatasource-amp.md)
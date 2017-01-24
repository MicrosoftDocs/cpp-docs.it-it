---
title: "CDataConnection::operator CDataSource&amp; | Microsoft Docs"
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
  - "CDataSource&"
  - "CDataConnection.operatorCDataSource&"
  - "operatorCDataSource&"
  - "CDataConnection::operatorCDataSource&"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDataSource& (operatore)"
  - "operatore & (CDataSource)"
ms.assetid: 852faeee-f1b1-4465-9828-b261d1edf022
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDataConnection::operator CDataSource&amp;
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce un riferimento all'oggetto contenuto di `CDataSource`.  
  
## Sintassi  
  
```  
  
operator const CDataSource&() throw( );  
  
```  
  
## Note  
 Questo operatore restituisce un riferimento all'oggetto contenuto di `CDataSource`, consentendo di passare un oggetto di `CDataConnection` in cui un riferimento di `CDataSource` previsto.  
  
## Esempio  
 Se si dispone di una funzione \(come `func` di seguito\) che accetta un riferimento di `CDataSource`, è possibile utilizzare **CDataSource&** per passare un oggetto di `CDataConnection` invece.  
  
 [!code-cpp[NVC_OLEDB_Consumer#3](../../data/oledb/codesnippet/CPP/cdataconnection-operator-cdatasource-amp_1.cpp)]  
  
 [!code-cpp[NVC_OLEDB_Consumer#4](../../data/oledb/codesnippet/CPP/cdataconnection-operator-cdatasource-amp_2.cpp)]  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDataConnection](../../data/oledb/cdataconnection-class.md)   
 [CDataConnection::operator CDataSource\*](../../data/oledb/cdataconnection-operator-cdatasource-star.md)
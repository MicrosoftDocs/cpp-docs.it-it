---
title: "CEnumerator::Find | Microsoft Docs"
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
  - "CEnumerator::Find"
  - "ATL::CEnumerator::Find"
  - "ATL.CEnumerator.Find"
  - "CEnumerator.Find"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Find (metodo)"
ms.assetid: 69a153af-d6c3-40fd-9018-27c7d2f344c6
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CEnumerator::Find
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Cerca un nome specificato tra i provider disponibili.  
  
## Sintassi  
  
```  
  
      bool Find(   
   TCHAR* szSearchName    
) throw( );  
```  
  
#### Parametri  
 *szSearchName*  
 \[in\] nome da cercare.  
  
## Valore restituito  
 **true** se il nome è stato individuato.  In caso contrario, **false**.  
  
## Note  
 Mappe di questo nome al membro di **SOURCES\_NAME** di [ISourcesRowset](https://msdn.microsoft.com/en-us/library/ms715969.aspx) collegamento.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CEnumerator](../../data/oledb/cenumerator-class.md)
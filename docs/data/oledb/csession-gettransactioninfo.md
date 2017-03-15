---
title: "CSession::GetTransactionInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "GetTransactionInfo"
  - "CSession.GetTransactionInfo"
  - "ATL.CSession.GetTransactionInfo"
  - "CSession::GetTransactionInfo"
  - "ATL::CSession::GetTransactionInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetTransactionInfo (metodo)"
ms.assetid: 9fa62808-3162-4b5a-8610-e1abb8cf9a71
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# CSession::GetTransactionInfo
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce le informazioni relative a una transazione.  
  
## Sintassi  
  
```  
  
      HRESULT GetTransactionInfo(   
   XACTTRANSINFO* pInfo    
) const throw( );  
```  
  
#### Parametri  
 Vedere [ITransaction::GetTransactionInfo](https://msdn.microsoft.com/en-us/library/ms714975.aspx)*in OLE DB Programmer's Reference*.  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 Per ulteriori informazioni, vedere [ITransaction::GetTransactionInfo](https://msdn.microsoft.com/en-us/library/ms714975.aspx)*in OLE DB Programmer's Reference*.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CSession](../../data/oledb/csession-class.md)
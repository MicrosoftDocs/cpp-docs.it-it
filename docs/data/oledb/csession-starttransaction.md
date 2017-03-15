---
title: "CSession::StartTransaction | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CSession::StartTransaction"
  - "StartTransaction"
  - "ATL.CSession.StartTransaction"
  - "CSession.StartTransaction"
  - "ATL::CSession::StartTransaction"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "StartTransaction (metodo)"
ms.assetid: cd7bd2be-fad1-4e2b-932b-79d308efb8fb
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# CSession::StartTransaction
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Inizia una nuova transazione per questa sessione.  
  
## Sintassi  
  
```  
  
      HRESULT StartTransaction(  
   ISOLEVEL isoLevel = ISOLATIONLEVEL_READCOMMITTED,  
   ULONG isoFlags = 0,  
   ITransactionOptions* pOtherOptions = NULL,  
   ULONG* pulTransactionLevel = NULL   
) const throw( );  
```  
  
#### Parametri  
 Vedere [ITransactionLocal::StartTransaction](https://msdn.microsoft.com/en-us/library/ms709786.aspx)*in OLE DB Programmer's Reference*.  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 Per ulteriori informazioni, vedere [ITransactionLocal::StartTransaction](https://msdn.microsoft.com/en-us/library/ms709786.aspx)*in OLE DB Programmer's Reference*.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CSession](../../data/oledb/csession-class.md)
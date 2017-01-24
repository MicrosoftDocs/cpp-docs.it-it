---
title: "CEnumerator::Open | Microsoft Docs"
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
  - "ATL.CEnumerator.Open"
  - "CEnumerator::Open"
  - "ATL::CEnumerator::Open"
  - "CEnumerator.Open"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Open (metodo)"
ms.assetid: b22821a0-257a-4543-ad0c-2649d4ac092e
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CEnumerator::Open
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Associa il moniker dell'enumeratore, se si è specificato, quindi viene recuperato il rowset dell'enumeratore chiamando [ISourcesRowset::GetSourcesRowset](https://msdn.microsoft.com/en-us/library/ms711200.aspx).  
  
## Sintassi  
  
```  
  
      HRESULT Open(   
   LPMONIKER pMoniker    
) throw( );  
HRESULT Open(   
   const CLSID* pClsid = & CLSID_OLEDB_ENUMERATOR    
) throw( );  
HRESULT Open(   
   const CEnumerator& enumerator    
) throw( );  
```  
  
#### Parametri  
 `pMoniker`  
 \[in\] puntatore A un moniker per un enumeratore.  
  
 *pClsid*  
 \[in\] puntatore A **CLSID** di un enumeratore.  
  
 `enumerator`  
 \[in\] riferimento A un enumeratore.  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CEnumerator](../../data/oledb/cenumerator-class.md)
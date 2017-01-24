---
title: "CRowset::GetDataHere | Microsoft Docs"
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
  - "CRowset<TAccessor>::GetDataHere"
  - "CRowset<TAccessor>.GetDataHere"
  - "CRowset.GetDataHere"
  - "GetDataHere"
  - "CRowset::GetDataHere"
  - "ATL::CRowset::GetDataHere"
  - "ATL::CRowset<TAccessor>::GetDataHere"
  - "ATL.CRowset<TAccessor>.GetDataHere"
  - "ATL.CRowset.GetDataHere"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetDataHere (metodo)"
ms.assetid: 2fe2a987-1c4c-4299-876e-0591caf63af4
caps.latest.revision: 10
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRowset::GetDataHere
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera i dati della riga corrente e li posiziona nel buffer specificato.  
  
## Sintassi  
  
```  
  
      HRESULT GetDataHere(   
   int nAccessor,   
   void* pBuffer    
) throw( );  
```  
  
#### Parametri  
 `nAccessor`  
 \[in\] Il numero di indice della funzione di accesso da utilizzare per accedere ai dati.  
  
 `pBuffer`  
 \[out\] Un buffer in cui inserire i dati per il record corrente.  
  
## Valore restituito  
 Un `HRESULT` standard.  
  
## Note  
 Per un esempio di come utilizzare questa funzione, vedere [Esempio MultiRead](../../top/visual-cpp-samples.md).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CRowset](../../data/oledb/crowset-class.md)   
 [CRowset::GetData](../../data/oledb/crowset-getdata.md)
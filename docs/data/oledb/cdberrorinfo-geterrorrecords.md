---
title: "CDBErrorInfo::GetErrorRecords | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDBErrorInfo.GetErrorRecords"
  - "ATL.CDBErrorInfo.GetErrorRecords"
  - "ATL::CDBErrorInfo::GetErrorRecords"
  - "GetErrorRecords"
  - "CDBErrorInfo::GetErrorRecords"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetErrorRecords (metodo)"
ms.assetid: 07746774-bcca-4833-8f55-a619e9777c17
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# CDBErrorInfo::GetErrorRecords
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera i record di errore per l'oggetto specificato.  
  
## Sintassi  
  
```  
  
      HRESULT GetErrorRecords(   
   IUnknown* pUnk,   
   const IID& iid,   
   ULONG* pcRecords    
) throw( );  
HRESULT GetErrorRecords(   
   ULONG* pcRecords    
) throw( );  
```  
  
#### Parametri  
 *pUnk*  
 \[in\] Interfaccia all'oggetto per cui ottenere i record di errore.  
  
 `iid`  
 \[in\] L'IID dell'interfaccia associata all'errore.  
  
 *pcRecords*  
 \[out\] Un puntatore al conteggio \(in base uno\) dei record di errore.  
  
## Valore restituito  
 Un `HRESULT` standard.  
  
## Note  
 Utilizzare il primo form della funzione se si desidera controllare da quale interfaccia ottenere le informazioni sugli errori.  In caso contrario, utilizzare il secondo form.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDBErrorInfo](../../data/oledb/cdberrorinfo-class.md)
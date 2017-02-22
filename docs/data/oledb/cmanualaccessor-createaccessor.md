---
title: "CManualAccessor::CreateAccessor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CManualAccessor::CreateAccessor"
  - "CreateAccessor"
  - "ATL.CManualAccessor.CreateAccessor"
  - "CManualAccessor.CreateAccessor"
  - "CManualAccessor::CreateAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateAccessor (metodo)"
ms.assetid: 594c8d6d-b49a-4818-a9a5-81c8115d4e42
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# CManualAccessor::CreateAccessor
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Alloca memoria per l'associazione delle colonne struttura e inizializza i membri dati della colonna.  
  
## Sintassi  
  
```  
  
      HRESULT CreateAccessor(   
   int nBindEntries,   
   void* pBuffer,   
   DBLENGTH nBufferSize    
) throw( );  
```  
  
#### Parametri  
 `nBindEntries`  
 \[in\] numero di colonne.  Questo valore deve corrispondere al numero di chiamate alla funzione di [CManualAccessor::AddBindEntry](../../data/oledb/cmanualaccessor-addbindentry.md).  
  
 `pBuffer`  
 \[in\] puntatore Al buffer in cui le colonne di output vengono archiviate.  
  
 `nBufferSize`  
 \[in\] dimensione del buffer in byte.  
  
## Valore restituito  
 Uno dei valori standard di `HRESULT`.  
  
## Note  
 Chiamare questa funzione prima di chiamare la funzione di `CManualAccessor::AddBindEntry`.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)   
 [Esempio di DBViewer](../../top/visual-cpp-samples.md)
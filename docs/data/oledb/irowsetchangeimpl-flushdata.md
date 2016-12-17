---
title: "IRowsetChangeImpl::FlushData | Microsoft Docs"
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
  - "IRowsetChangeImpl::FlushData"
  - "IRowsetChangeImpl.FlushData"
  - "FlushData"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "FlushData (metodo)"
ms.assetid: fd4bc73b-bc25-4aab-90d5-0bed92670c88
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IRowsetChangeImpl::FlushData
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Overidden dal provider per eseguire il commit dei dati all'archivio.  
  
## Sintassi  
  
```  
  
      HRESULT FlushData(  
   HROW hRowToFlush,  
   HACCESSOR hAccessorToFlush   
);  
```  
  
#### Parametri  
 *hRowToFlush*  
 \[in\] handle alle righe per i dati.  Il tipo di questa riga è determinato dall'argomento di modello *RowClass* della classe di `IRowsetImpl` \(`CSimpleRow` per impostazione predefinita\).  
  
 *hAccessorToFlush*  
 \[in\] handle alla funzione di accesso, che contiene informazioni di associazione e informazioni sul tipo nel **PROVIDER\_MAP** \(vedere [IAccessorImpl](../../data/oledb/iaccessorimpl-class.md)\).  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IRowsetChangeImpl](../../data/oledb/irowsetchangeimpl-class.md)
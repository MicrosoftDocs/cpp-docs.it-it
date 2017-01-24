---
title: "CDynamicAccessor::SetBlobSizeLimit | Microsoft Docs"
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
  - "CDynamicAccessor::SetBlobSizeLimit"
  - "SetBlobSizeLimit"
  - "CDynamicAccessor.SetBlobSizeLimit"
  - "ATL.CDynamicAccessor.SetBlobSizeLimit"
  - "ATL::CDynamicAccessor::SetBlobSizeLimit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetBlobSizeLimit (metodo)"
ms.assetid: fb8cb85d-f841-408e-a344-37895b10993f
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDynamicAccessor::SetBlobSizeLimit
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta il massimo della dimensione dei BLOB in byte.  
  
## Sintassi  
  
```  
  
      void SetBlobSizeLimit(  
   DBLENGTH nBlobSize   
);  
```  
  
#### Parametri  
 `nBlobSize`  
 Specifica il limite di dimensione dei BLOB.  
  
## Note  
 Imposta il massimo della dimensione dei BLOB in byte; i dati della colonna più grandi di questo valore vengono considerati come BLOB.  Alcuni provider forniscono le dimensioni estremamente grandi per le colonne \(ad esempio 2 GB\).  Anziché tentando di allocare memoria per una colonna questa dimensione, in genere provereste a associare le colonne come BLOB.  In tale modalità non è necessario allocare tutta la memoria, ma è comunque possibile leggere tutti i dati senza temere del troncamento.  Tuttavia, vi sono casi in cui potrebbe essere necessario forzare `CDynamicAccessor` per associare grandi colonne nei tipi di dati nativi.  A tale scopo, chiamare `SetBlobSizeLimit` prima di chiamare **Apri**.  
  
 Il metodo [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) del costruttore imposta il massimo della dimensione dei BLOB su un valore predefinito di 8.000 byte.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)
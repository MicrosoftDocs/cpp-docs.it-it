---
title: "CDynamicAccessor::CDynamicAccessor | Microsoft Docs"
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
  - "CDynamicAccessor::CDynamicAccessor"
  - "ATL::CDynamicAccessor::CDynamicAccessor"
  - "ATL.CDynamicAccessor.CDynamicAccessor"
  - "CDynamicAccessor.CDynamicAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDynamicAccessor (classe), costruttore"
ms.assetid: bf40fe81-2c85-473e-9075-51ad9b060b39
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDynamicAccessor::CDynamicAccessor
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Crea un'istanza e inizializza l'oggetto di `CDynamicAccessor`.  
  
## Sintassi  
  
```  
  
      CDynamicAccessor(   
   DBBLOBHANDLINGENUM eBlobHandling = DBBLOBHANDLING_DEFAULT,   
   DBLENGTH nBlobSize = 8000   
);  
```  
  
#### Parametri  
 `eBlobHandling`  
 Specifica l'allineamento dei dati di \(BLOB\) dell'oggetto binario di grandi dimensioni devono essere gestiti.  Il valore predefinito è **DBBLOBHANDLING\_DEFAULT**.  Vedere [SetBlobHandling](../../data/oledb/cdynamicaccessor-setblobhandling.md) per una descrizione dei valori di **DBBLOBHANDLINGENUM**.  
  
 `nBlobSize`  
 Il valore massimo della dimensione dei BLOB in byte; i dati della colonna su questo valore vengono considerati come BLOB.  Il valore predefinito è 8,000.  Vedere [SetBlobSizeLimit](../../data/oledb/cdynamicaccessor-setblobsizelimit.md) per i dettagli.  
  
## Note  
 Se si utilizza il costruttore per inizializzare l'oggetto di `CDynamicAccessor`, è possibile specificare come verrà associata BLOB.  I BLOB possono contenere dati binari quali immagini, il suono, o compilato.  Il comportamento predefinito prevede di trattare le colonne più di 8.000 byte come BLOB e di tentare di eseguire l'associazione a un oggetto di `ISequentialStream`.  Tuttavia, è possibile specificare un valore diverso per la dimensione dei BLOB.  
  
 È inoltre possibile specificare come `CDynamicAccessor` gestisce i dati della colonna che sono qualificati come dati BLOB: possono gestire i dati BLOB in modo predefinito; può ignorare \(non esegue l'associazione ai dati BLOB; oppure è possibile associare dati BLOB in memoria allocata provider.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)
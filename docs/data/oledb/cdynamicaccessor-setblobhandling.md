---
title: "CDynamicAccessor::SetBlobHandling | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDynamicAccessor::SetBlobHandling"
  - "CDynamicAccessor.SetBlobHandling"
  - "ATL::CDynamicAccessor::SetBlobHandling"
  - "SetBlobHandling"
  - "ATL.CDynamicAccessor.SetBlobHandling"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetBlobHandling (metodo)"
ms.assetid: fa8b0bb3-a21b-4d64-aeef-e79bf61d079c
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# CDynamicAccessor::SetBlobHandling
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta il valore di gestione dei BLOB della riga corrente.  
  
## Sintassi  
  
```  
  
      bool SetBlobHandling(  
   DBBLOBHANDLINGENUM eBlobHandling   
);  
```  
  
#### Parametri  
 `eBlobHandling`  
 Specifica l'allineamento dei dati BLOB devono essere gestiti.  Accetta i seguenti valori:  
  
-   **DBBLOBHANDLING\_DEFAULT**: Gestire i dati della colonna più grandi di `nBlobSize` \(come impostare da `SetBlobSizeLimit`\) come dati BLOB e recuperilo tramite un oggetto di `IStream` o di `ISequentialStream`.  Questa opzione tenterà di associare ciascuna colonna che contiene i dati più grandi di `nBlobSize` o elencato come **DBTYPE\_IUNKNOWN** come dati BLOB.  
  
-   **DBBLOBHANDLING\_NOSTREAMS**: Gestire i dati della colonna più grandi di `nBlobSize` \(come impostare da `SetBlobSizeLimit`\) come dati BLOB e recuperilo con riferimento nella memoria allocata provider e da proprietà di consumer.  Questa opzione è utile per le tabelle con più colonne dei BLOB e il provider supporta un solo oggetto di `ISequentialStream` per funzione.  
  
-   **DBBLOBHANDLING\_SKIP**: Ignorare \(non esegue l'associazione\) le colonne che sono qualificati come contenere i BLOB \(la funzione di accesso non verrà associata o non venga ripristinato il valore della colonna ma che venga ripristinato lo stato e la lunghezza della colonna\).  
  
## Note  
 È necessario chiamare `SetBlobHandling` prima di chiamare **Apri**.  
  
 Il metodo [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) del costruttore imposta il valore di gestione dei BLOB a **DBBLOBHANDLING\_DEFAULT**.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)
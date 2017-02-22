---
title: "Classe CColumnAccessor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CColumnAccessor"
  - "ATL::CColumnAccessor"
  - "ATL.CColumnAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CColumnAccessor (classe)"
ms.assetid: 6ce1e67f-6a20-490d-9326-c168b43eee7e
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Classe CColumnAccessor
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Genera ha inserito il codice del consumer.  
  
## Sintassi  
  
```  
class CColumnAccessor : public CAccessorBase  
```  
  
## Note  
 Nel codice inserito, ogni colonna è associata come funzione di accesso separata.  È necessario tenere presente che questa classe viene utilizzata nel codice inserito, ad esempio se si incontrarlo durante il debug\), ma è necessario utilizzare in genere mai direttamente o i relativi metodi.  
  
 `CColumnAccessor` implementa i metodi stub, ognuno dei quali corrispondono alle funzionalità ad altri metodi della classe di funzioni di accesso:  
  
-   `CColumnAccessor` il costruttore; crea un'istanza e inizializza l'oggetto di `CColumnAccessor`.  
  
-   `CreateAccessor` alloca memoria per le strutture di associazione di colonna e inizializza i membri dati della colonna.  
  
-   Colonne di associazioni di**BindColumns**funzioni di accesso.  
  
-   **SetParameterBuffer** per allocare i buffer per i parametri.  
  
-   `AddParameter` aggiunge una voce di parametro per le strutture delle voci di parametro.  
  
-   **HasOutputColumns** determina se la funzione di accesso contiene colonne di output  
  
-   **HasParameters** determina se la funzione di accesso dispone di parametri.  
  
-   `BindParameters` associa i parametri creati alle colonne.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
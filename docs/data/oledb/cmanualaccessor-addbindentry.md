---
title: "CManualAccessor::AddBindEntry | Microsoft Docs"
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
  - "ATL::CManualAccessor::AddBindEntry"
  - "ATL.CManualAccessor.AddBindEntry"
  - "CManualAccessor::AddBindEntry"
  - "AddBindEntry"
  - "CManualAccessor.AddBindEntry"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddBindEntry (metodo)"
ms.assetid: 8556dda9-dda1-4f67-96bc-6031e6c6a271
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CManualAccessor::AddBindEntry
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Aggiunge una voce di associazione alle colonne di output.  
  
## Sintassi  
  
```  
  
      void AddBindEntry(  
   DBORDINAL nOrdinal,  
   DBTYPE wType,  
   DBLENGTH nColumnSize,  
   void* pData,  
   void* pLength = NULL,  
   void* pStatus = NULL   
) throw ( );  
```  
  
#### Parametri  
 Vedere [DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx)*in OLE DB Programmer's Reference*.  
  
 `nOrdinal`  
 \[in\] numero di colonne.  
  
 `wType`  
 \[in\] tipo di dati.  
  
 `nColumnSize`  
 \[in\] dimensione della colonna in byte.  
  
 `pData`  
 \[in\] puntatore Ai dati della colonna memorizzati nel buffer.  
  
 `pLength`  
 \[in\] puntatore Alla lunghezza di campo, se necessario.  
  
 `pStatus`  
 \[in\] puntatore Alla variabile da associare allo stato della colonna, se necessario.  
  
## Note  
 Per utilizzare questa funzione, è necessario prima chiamata [CreateAccessor](../../data/oledb/cmanualaccessor-createaccessor.md).  Non è possibile aggiungere più voci che il numero di colonne specificato in `CreateAccessor`.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)   
 [Esempio di DBViewer](../../top/visual-cpp-samples.md)
---
title: "CManualAccessor::AddParameterEntry | Microsoft Docs"
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
  - "CManualAccessor::AddParameterEntry"
  - "ATL.CManualAccessor.AddParameterEntry"
  - "CManualAccessor.AddParameterEntry"
  - "AddParameterEntry"
  - "ATL::CManualAccessor::AddParameterEntry"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddParameterEntry (metodo)"
ms.assetid: 9048b164-052b-41b1-a861-227fc529e0b5
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CManualAccessor::AddParameterEntry
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Aggiunge una voce di parametro per le strutture delle voci di parametro.  
  
## Sintassi  
  
```  
  
      void AddParameterEntry(  
   DBORDINAL nOrdinal,  
   DBTYPE wType,  
   DBLENGTH nColumnSize,  
   void* pData,  
   void* pLength = NULL,  
   void* pStatus = NULL,  
   DBPARAMIO eParamIO = DBPARAMIO_INPUT   
) throw ( );  
```  
  
#### Parametri  
 Vedere [DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx)*in OLE DB Programmer's Reference*.  
  
 `nOrdinal`  
 \[in\] numero di parametri.  
  
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
  
 *eParamIO*  
 \[in\] specifica se il parametro con cui l'associazione viene associata è un input, un input\/output, o di output.  
  
## Note  
 Per utilizzare questa funzione, è necessario prima chiamata [CreateParameterAccessor](../../data/oledb/cmanualaccessor-createparameteraccessor.md).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CManualAccessor](../../data/oledb/cmanualaccessor-class.md)   
 [CManualAccessor::AddBindEntry](../../data/oledb/cmanualaccessor-addbindentry.md)   
 [Esempio di DBViewer](../../top/visual-cpp-samples.md)
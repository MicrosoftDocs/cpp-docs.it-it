---
title: "BEGIN_ACCESSOR | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "BEGIN_ACCESSOR"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BEGIN_ACCESSOR (macro)"
  - "BEGIN_ACCESSOR (macro), sintassi"
ms.assetid: 59d0ff3e-7cfd-4ce8-9a1c-d664c0892a52
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# BEGIN_ACCESSOR
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Contrassegna l'inizio di una voce della funzione di accesso.  
  
## Sintassi  
  
```  
  
BEGIN_ACCESSOR(  
num  
,   
bAuto  
 )  
  
```  
  
#### Parametri  
 *num*  
 \[in\] numero di zero offset per la funzione di accesso in questa mappa della funzione di accesso.  
  
 *bAuto*  
 \[in\] specifica se la funzione di accesso è una funzione di accesso automatica o una funzione di accesso manuale.  Se **true**, la funzione di accesso è automatico; se **false**, la funzione di accesso è manuale.  I dati automatici di seguito la funzione di accesso vengono recuperati automaticamente le operazioni di spostamento.  
  
## Note  
 Nel caso di più funzioni di accesso per un rowset, è necessario specificare `BEGIN_ACCESSOR_MAP` e utilizzare la macro di `BEGIN_ACCESSOR` per ogni singola funzione di accesso.  La macro di `BEGIN_ACCESSOR` viene completata con la macro di `END_ACCESSOR`.  La macro di `BEGIN_ACCESSOR_MAP` viene completata con la macro di `END_ACCESSOR_MAP`.  
  
## Esempio  
 Vedere [BEGIN\_ACCESSOR\_MAP](../../data/oledb/begin-accessor-map.md).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN\_ACCESSOR\_MAP](../../data/oledb/begin-accessor-map.md)   
 [END\_ACCESSOR](../../data/oledb/end-accessor.md)   
 [END\_ACCESSOR\_MAP](../../data/oledb/end-accessor-map.md)
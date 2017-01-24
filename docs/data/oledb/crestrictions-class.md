---
title: "Classe CRestrictions | Microsoft Docs"
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
  - "ATL::CRestrictions"
  - "CRestrictions"
  - "ATL.CRestrictions"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRestrictions (classe)"
ms.assetid: 0aaa2364-641c-4318-b110-7446aada4b4f
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe CRestrictions
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una classe generica che consente di specificare le restrizioni per i rowset dello schema.  
  
## Sintassi  
  
```  
template <   
   class T,   
   short nRestrictions,   
   const GUID* pguid   
>  
class CRestrictions : public CSchemaRowset <   
   T,   
   nRestrictions   
>  
```  
  
#### Parametri  
 `T`  
 Classe utilizzata per la funzione di accesso.  
  
 `nRestrictions`  
 Numero di colonne delle restrizioni per il rowset dello schema.  
  
 `pguid`  
 Puntatore al GUID per lo schema.  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[Aprire](../../data/oledb/crestrictions-open.md)|Restituisce un set di risultati in base alle restrizioni fornite dall'utente.|  
  
## Requisiti  
 **Intestazione:** atldbsch.h  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)
---
title: "CDefaultCharTraits Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CDefaultCharTraits"
  - "ATL::CDefaultCharTraits<T>"
  - "ATL.CDefaultCharTraits"
  - "ATL.CDefaultCharTraits<T>"
  - "ATL::CDefaultCharTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDefaultCharTraits class"
ms.assetid: f94a3934-597f-401d-8513-ed6924ae069a
caps.latest.revision: 19
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDefaultCharTraits Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe include due funzioni statiche per convertire i caratteri tra maiuscole e minuscole.  
  
## Sintassi  
  
```  
  
      template <  
   typename T  
>  
class CDefaultCharTraits  
```  
  
#### Parametri  
 `T`  
 Il tipo di dati da archiviare nella libreria.  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDefaultCharTraits::CharToLower](../Topic/CDefaultCharTraits::CharToLower.md)|\(Proprietà statica\) chiamare questa funzione per convertire un carattere in maiuscolo.|  
|[CDefaultCharTraits::CharToUpper](../Topic/CDefaultCharTraits::CharToUpper.md)|\(Proprietà statica\) chiamare questa funzione per convertire un carattere minuscolo.|  
  
## Note  
 Questa classe fornisce funzioni utilizzate dalla classe [CStringElementTraitsI](../../atl/reference/cstringelementtraitsi-class.md).  
  
## Requisiti  
 **Header:** atlcoll.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)
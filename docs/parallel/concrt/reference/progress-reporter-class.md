---
title: "Classe progress_reporter | Microsoft Docs"
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
  - "ppltasks/concurrency::progress_reporter"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "progress_reporter (classe)"
ms.assetid: b836efab-2d05-4649-b6fa-d15236f1f813
caps.latest.revision: 11
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe progress_reporter
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

La classe del reporter dello stato di avanzamento consente la creazione di rapporti per notifiche dello stato di avanzamento di un tipo specifico.  Ogni oggetto progress\_reporter è associato a una determinata azione o operazione asincrona.  
  
## Sintassi  
  
```  
template<  
   typename _ProgressType  
>  
class progress_reporter;  
```  
  
#### Parametri  
 `_ProgressType`  
 Il tipo di payload di ogni notifica dello stato di avanzamento segnalato mediante il reporter dello stato di avanzamento.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore progress\_reporter::progress\_reporter](../Topic/progress_reporter::progress_reporter%20Constructor.md)||  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo progress\_reporter::report](../Topic/progress_reporter::report%20Method.md)|Invia un rapporto sullo stato di avanzamento all'azione o all'operazione asincrona a cui questo reporter è associato.|  
  
## Note  
 Questo tipo è disponibile solo per le applicazioni Windows Store.  
  
## Gerarchia di ereditarietà  
 `progress_reporter`  
  
## Requisiti  
 **Intestazione:** ppltasks.h  
  
 **Spazio dei nomi:** concorrenza  
  
## Vedere anche  
 [Spazio dei nomi concurrency](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [Funzione create\_async](../Topic/create_async%20Function.md)
---
title: "CAutoPtr Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CAutoPtr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAutoPtr class"
ms.assetid: 08988d53-4fb0-4711-bdfc-8ac29c63f410
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 26
---
# CAutoPtr Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe rappresenta un oggetto del puntatore intelligente.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template<   
typename T  
>  
class CAutoPtr  
```  
  
#### Parametri  
 `T`  
 Il tipo puntatore.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoPtr::CAutoPtr](../Topic/CAutoPtr::CAutoPtr.md)|Costruttore.|  
|[CAutoPtr::~CAutoPtr](../Topic/CAutoPtr::~CAutoPtr.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoPtr::Attach](../Topic/CAutoPtr::Attach.md)|Chiamare questo metodo per eseguire la proprietà di un puntatore esistente.|  
|[CAutoPtr::Detach](../Topic/CAutoPtr::Detach.md)|Chiamare questo metodo per liberare la proprietà di un puntatore.|  
|[CAutoPtr::Free](../Topic/CAutoPtr::Free.md)|Chiamare questo metodo per eliminare un oggetto fa riferimento a `CAutoPtr`.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoPtr::operator T\*](../Topic/CAutoPtr::operator%20T*.md)|l'operatore di cast.|  
|[CAutoPtr::operator \=](../Topic/CAutoPtr::operator%20=.md)|l'operatore di assegnazione.|  
|[CAutoPtr::operator \-\>](../Topic/CAutoPtr::operator%20-%3E.md)|L'operatore di puntatore a membro.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoPtr::m\_p](../Topic/CAutoPtr::m_p.md)|La variabile membro dati puntatore.|  
  
## Note  
 Questa classe fornisce metodi per creare e gestire un puntatore intelligente, che consente di proteggere dalle perdite di memoria automaticamente liberando risorse quando esegue il fallback all'ambito.  
  
 Inoltre, il costruttore di copia di `CAutoPtr` e l'operatore di assegnazione contengono la proprietà del puntatore, copiando il puntatore di origine al puntatore di destinazione e impostando il puntatore di origine SU NULL.  È pertanto impossibile avere due oggetti ognuno `CAutoPtr` che consente di archiviare lo stesso puntatore e questo riduce la possibilità di eliminare lo stesso puntatore due volte.  
  
 `CAutoPtr` anche semplifica la creazione di raccolte di puntatori.  Anziché derivare una classe di raccolta e di eseguire l'override del distruttore, è più semplice creare una raccolta di oggetti `CAutoPtr`.  Quando la raccolta viene eliminato, gli oggetti `CAutoPtr` queste variabili escono dall'ambito di validità e verranno eliminate automaticamente.  
  
 [CHeapPtr](../../atl/reference/cheapptr-class.md) e varianti funzionano come `CAutoPtr`, eccetto che per allocare e liberare memoria utilizzando le funzioni di heap anziché C\+\+ **new** gli operatori e delete.  [CAutoVectorPtr](../../atl/reference/cautovectorptr-class.md) è simile a `CAutoPtr`, l'unica differenza è che utilizza **vector new\[\]** e **vector delete\[\]** per allocare e liberare memoria.  
  
 Vedere anche [CAutoPtrArray](../../atl/reference/cautoptrarray-class.md) e [CAutoPtrList](../../atl/reference/cautoptrlist-class.md) quando le matrici o elenchi dei puntatori intelligenti necessari.  
  
## Requisiti  
 **Header:** atlbase.h  
  
## Esempio  
 [!code-cpp[NVC_ATL_Utilities#74](../../atl/codesnippet/CPP/cautoptr-class_1.cpp)]  
  
## Vedere anche  
 [CHeapPtr Class](../../atl/reference/cheapptr-class.md)   
 [CAutoVectorPtr Class](../../atl/reference/cautovectorptr-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
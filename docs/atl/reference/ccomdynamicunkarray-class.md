---
title: "CComDynamicUnkArray Class | Microsoft Docs"
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
  - "ATL.CComDynamicUnkArray"
  - "CComDynamicUnkArray"
  - "ATL::CComDynamicUnkArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComDynamicUnkArray class"
  - "punti di connessione [C++], gestione"
ms.assetid: 202470d7-9a1b-498f-b96d-659d681acd65
caps.latest.revision: 17
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComDynamicUnkArray Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe archivia una matrice di puntatori a **IUnknown**.  
  
## Sintassi  
  
```  
class CComDynamicUnkArray  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComDynamicUnkArray::CComDynamicUnkArray](../Topic/CComDynamicUnkArray::CComDynamicUnkArray.md)|Costruttore.  Inizializza i valori di libreria a **NULL** e la dimensione della raccolta su zero.|  
|[CComDynamicUnkArray::~CComDynamicUnkArray](../Topic/CComDynamicUnkArray::~CComDynamicUnkArray.md)|Il distruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComDynamicUnkArray::Add](../Topic/CComDynamicUnkArray::Add.md)|Chiamare questo metodo per aggiungere un puntatore `IUnknown` la matrice.|  
|[CComDynamicUnkArray::begin](../Topic/CComDynamicUnkArray::begin.md)|Restituisce un puntatore al primo puntatore `IUnknown` nella raccolta.|  
|[CComDynamicUnkArray::clear](../Topic/CComDynamicUnkArray::clear.md)|Svuota la matrice.|  
|[CComDynamicUnkArray::end](../Topic/CComDynamicUnkArray::end.md)|Restituisce un puntatore a uno dopo l'ultimo puntatore **IUnknown** nella raccolta.|  
|[CComDynamicUnkArray::GetAt](../Topic/CComDynamicUnkArray::GetAt.md)|Recupera l'elemento in corrispondenza dell'indice specificato.|  
|[CComDynamicUnkArray::GetCookie](../Topic/CComDynamicUnkArray::GetCookie.md)|Chiamare questo metodo per ottenere un cookie associate a un puntatore specificato **IUnknown**.|  
|[CComDynamicUnkArray::GetSize](../Topic/CComDynamicUnkArray::GetSize.md)|Restituisce la lunghezza di una matrice.|  
|[CComDynamicUnkArray::GetUnknown](../Topic/CComDynamicUnkArray::GetUnknown.md)|Chiamare questo metodo per ottenere il puntatore **IUnknown** associato al cookie specificato.|  
|[CComDynamicUnkArray::Remove](../Topic/CComDynamicUnkArray::Remove.md)|Chiamare questo metodo per rimuovere un puntatore **IUnknown** la matrice.|  
  
## Note  
 **CComDynamicUnkArray** viene utilizzata una matrice dinamica assegnata di puntatori a **IUnknown**, ogni interfaccia su un punto di connessione.  **CComDynamicUnkArray** può essere utilizzato come parametro alla classe modello [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md).  
  
 I metodi [inizio](../Topic/CComDynamicUnkArray::begin.md) e [fine](../Topic/CComDynamicUnkArray::end.md)**CComDynamicUnkArray** possono essere utilizzati per scorrere in ciclo i punti di connessione, ad esempio quando viene generato un evento\).  
  
 Vedere [Adding Connection Points to an Object](../../atl/adding-connection-points-to-an-object.md) per informazioni dettagliate sull'automatizzare la creazione dei proxy del punto di connessione.  
  
> [!NOTE]
>  **Note** la classe **CComDynamicUnkArray** viene utilizzato dalla procedura guidata **Aggiungi classe** per creare un controllo che presenta punti di connessione.  Se si desidera specificare il numero di punti di connessione manualmente, modificare il riferimento **CComDynamicUnkArray** a `CComUnkArray<`*n* `>`, dove *n* è il numero di punti di connessione necessarie.  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [CComUnkArray Class](../../atl/reference/ccomunkarray-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
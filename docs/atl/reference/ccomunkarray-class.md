---
title: "CComUnkArray Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CComUnkArray"
  - "ATL.CComUnkArray<nMaxSize>"
  - "ATL::CComUnkArray<nMaxSize>"
  - "ATL::CComUnkArray"
  - "CComUnkArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComUnkArray class"
  - "punti di connessione [C++], gestione"
ms.assetid: 5fd4b378-a7b5-4cc1-8866-8ab72a73639e
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 20
---
# CComUnkArray Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe archivia i puntatori **IUnknown** ed è progettata per essere utilizzata come parametro alla classe modello [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md).  
  
## Sintassi  
  
```  
template<  
   unsigned int nMaxSize  
>  
class CComUnkArray  
```  
  
#### Parametri  
 *nMaxSize*  
 Numero massimo di puntatori a **IUnknown** utilizzabili nella matrice statica.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComUnkArray::CComUnkArray](../Topic/CComUnkArray::CComUnkArray.md)|Costruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComUnkArray::Add](../Topic/CComUnkArray::Add.md)|Chiamare questo metodo per aggiungere un puntatore **IUnknown** la matrice.|  
|[CComUnkArray::begin](../Topic/CComUnkArray::begin.md)|Restituisce un puntatore al primo puntatore **IUnknown** nella raccolta.|  
|[CComUnkArray::end](../Topic/CComUnkArray::end.md)|Restituisce un puntatore a uno dopo l'ultimo puntatore **IUnknown** nella raccolta.|  
|[CComUnkArray::GetCookie](../Topic/CComUnkArray::GetCookie.md)|Chiamare questo metodo per ottenere un cookie associate a un puntatore specificato **IUnknown**.|  
|[CComUnkArray::GetUnknown](../Topic/CComUnkArray::GetUnknown.md)|Chiamare questo metodo per ottenere il puntatore **IUnknown** associato al cookie specificato.|  
|[CComUnkArray::Remove](../Topic/CComUnkArray::Remove.md)|Chiamare questo metodo per rimuovere un puntatore **IUnknown** la matrice.|  
  
## Note  
 **CComUnkArray** utilizza un numero fisso di puntatori a **IUnknown**, ogni interfaccia su un punto di connessione.  **CComUnkArray** può essere utilizzato come parametro alla classe modello [IConnectionPointImpl](../../atl/reference/iconnectionpointimpl-class.md).  **CComUnkArray\<1\>** è una specializzazione di template **CComUnkArray** che è stata ottimizzata per un punto di connessione.  
  
 I metodi [inizio](../Topic/CComUnkArray::begin.md) e [fine](../Topic/CComUnkArray::end.md)**CComUnkArray** possono essere utilizzati per scorrere in ciclo i punti di connessione, ad esempio quando viene generato un evento\).  
  
 Vedere [Adding Connection Points to an Object](../../atl/adding-connection-points-to-an-object.md) per informazioni dettagliate sull'automatizzare la creazione dei proxy del punto di connessione.  
  
> [!NOTE]
>  **Note** la classe [CComDynamicUnkArray](../../atl/reference/ccomdynamicunkarray-class.md) viene utilizzato dalla procedura guidata **Aggiungi classe** per creare un controllo che presenta punti di connessione.  Se si desidera specificare il numero di punti di connessione manualmente, modificare il riferimento **CComDynamicUnkArray** a `CComUnkArray<`*n* `>`, dove *n* è il numero di punti di connessione necessarie.  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [CComDynamicUnkArray Class](../../atl/reference/ccomdynamicunkarray-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
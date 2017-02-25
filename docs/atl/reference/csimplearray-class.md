---
title: "CSimpleArray Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CSimpleArray"
  - "ATL::CSimpleArray"
  - "CSimpleArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CSimpleArray class"
ms.assetid: ee0c9f39-b61c-4c18-bc43-4eada21dca3a
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 23
---
# CSimpleArray Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per gestire una matrice semplice.  
  
## Sintassi  
  
```  
  
      template <  
   class T,  
   class TEqual = CSimpleArrayEqualHelper< T >  
>   
class CSimpleArray  
```  
  
#### Parametri  
 `T`  
 Il tipo di dati da archiviare nella matrice.  
  
 `TEqual`  
 Un oggetto di tratto, definendo il test di uguaglianza per gli elementi di tipo `T`.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleArray::CSimpleArray](../Topic/CSimpleArray::CSimpleArray.md)|Il costruttore della matrice semplice.|  
|[CSimpleArray::~CSimpleArray](../Topic/CSimpleArray::~CSimpleArray.md)|Il distruttore della matrice semplice.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleArray::Add](../Topic/CSimpleArray::Add.md)|Aggiungere un nuovo elemento della matrice.|  
|[CSimpleArray::Find](../Topic/CSimpleArray::Find.md)|Cerca un elemento nella matrice.|  
|[CSimpleArray::GetData](../Topic/CSimpleArray::GetData.md)|Restituisce un puntatore ai dati memorizzati nella matrice.|  
|[CSimpleArray::GetSize](../Topic/CSimpleArray::GetSize.md)|Restituisce il numero di elementi archiviati nella matrice.|  
|[CSimpleArray::Remove](../Topic/CSimpleArray::Remove.md)|Rimuove un elemento specificato dalla matrice.|  
|[CSimpleArray::RemoveAll](../Topic/CSimpleArray::RemoveAll.md)|Rimuove tutti gli elementi della matrice.|  
|[CSimpleArray::RemoveAt](../Topic/CSimpleArray::RemoveAt.md)|Rimuove l'elemento specificato dalla matrice.|  
|[CSimpleArray::SetAtIndex](../Topic/CSimpleArray::SetAtIndex.md)|Imposta l'elemento specificato nella matrice.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CSimpleArray::operator](../Topic/CSimpleArray::operator.md)|Recupera un elemento dalla matrice.|  
|[CSimpleArray::operator \=](../Topic/CSimpleArray::operator%20=.md)|Operatore di assegnazione.|  
  
## Note  
 `CSimpleArray` fornisce metodi per creare e gestire una matrice semplice, di qualsiasi tipo specificato `T`.  
  
 Il parametro `TEqual` consente di definizione della funzione di uguaglianza di due elementi di tipo `T`.  Creando una classe simile a [CSimpleArrayEqualHelper](../../atl/reference/csimplearrayequalhelper-class.md), è possibile modificare il comportamento di test di uguaglianza per qualsiasi matrice specificata.  Ad esempio quando si occupa di una matrice di puntatori, può essere utile definire l'uguaglianza come base ai valori puntatori fanno riferimento.  l'implementazione predefinita utilizza **operator\=\(\)**.  
  
 Sia `CSimpleArray` che [CSimpleMap](../../atl/reference/csimplemap-class.md) sono progettati per un numero limitato di elementi.  [CAtlArray](../../atl/reference/catlarray-class.md) e [CAtlMap](../../atl/reference/catlmap-class.md) devono essere utilizzati quando la matrice contiene numerosi elementi.  
  
## Requisiti  
 **Header:** atlsimpcoll.h  
  
## Esempio  
 [!code-cpp[NVC_ATL_Utilities#86](../../atl/codesnippet/CPP/csimplearray-class_1.cpp)]  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)
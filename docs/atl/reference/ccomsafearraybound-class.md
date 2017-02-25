---
title: "CComSafeArrayBound Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CComSafeArrayBound"
  - "ATL::CComSafeArrayBound"
  - "CComSafeArrayBound"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComSafeArrayBound class"
ms.assetid: dd6299db-5f84-4630-bbf0-f5add5318437
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CComSafeArrayBound Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe è un wrapper per una struttura [SAFEARRAYBOUND](http://msdn.microsoft.com/it-it/303a9bdb-71d6-4f14-8747-84cf84936c6d).  
  
## Sintassi  
  
```  
  
class CComSafeArrayBound : public SAFEARRAYBOUND  
  
```  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[CComSafeArrayBound](../Topic/CComSafeArrayBound::CComSafeArrayBound.md)|Costruttore.|  
|[GetCount](../Topic/CComSafeArrayBound::GetCount.md)|Chiamare questo metodo per restituire il numero di elementi.|  
|[GetLowerBound](../Topic/CComSafeArrayBound::GetLowerBound.md)|Chiamare questo metodo per restituire il limite inferiore.|  
|[GetUpperBound](../Topic/CComSafeArrayBound::GetUpperBound.md)|Chiamare questo metodo per restituire il limite superiore.|  
|[SetCount](../Topic/CComSafeArrayBound::SetCount.md)|Chiamare questo metodo per impostare il numero di elementi.|  
|[SetLowerBound](../Topic/CComSafeArrayBound::SetLowerBound.md)|Chiamare questo metodo per impostare il limite inferiore.|  
  
### Operatori  
  
|||  
|-|-|  
|[operatore \=](../Topic/CComSafeArrayBound::operator%20=.md)|Imposta `CComSafeArrayBound` a un nuovo valore.|  
  
## Note  
 Questa classe è un wrapper per la struttura **SAFEARRAYBOUND** utilizzata da [CComSafeArray](../../atl/reference/ccomsafearray-class.md).  Fornisce metodi per eseguire una query e l'impostazione dei limiti superiore e inferiore di una singola dimensione `CComSafeArray` oggetto e il numero di elementi che contiene.  Un oggetto multidimensionale `CComSafeArray` viene utilizzata una matrice di oggetti `CComSafeArrayBound`, uno per ciascuna dimensione.  Di conseguenza quando si utilizzano i metodi come [GetCount](../Topic/CComSafeArrayBound::GetCount.md), tenere presente che il metodo restituisca un numero complessivo di elementi in una matrice multidimensionale.  
  
 **Header:** atlsafe.h  
  
## Requisiti  
 **Header:** atlsafe.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)
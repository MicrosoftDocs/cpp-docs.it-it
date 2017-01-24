---
title: "CAtlException Class | Microsoft Docs"
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
  - "CAtlException"
  - "ATL::CAtlException"
  - "ATL.CAtlException"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlException class"
ms.assetid: 3fd7b041-f70d-4292-b947-0d70781d95a8
caps.latest.revision: 19
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAtlException Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe definisce un'eccezione ATL.  
  
## Sintassi  
  
```  
  
class CAtlException  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlException::CAtlException](../Topic/CAtlException::CAtlException.md)|Costruttore.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlException::operator HRESULT](../Topic/CAtlException::operator%20HRESULT.md)|Esegue il cast dell'oggetto corrente a un valore HRESULT.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAtlException::m\_hr](../Topic/CAtlException::m_hr.md)|La variabile di HRESULT di tipo creata dall'oggetto e utilizzata per archiviare la condizione di errore.|  
  
## Note  
 Un oggetto `CAtlException` rappresenta uno stato di errore correlato a un'operazione ATL.  La classe `CAtlException` include un membro dati pubblico che archivia il codice di stato che indica il motivo dell'eccezione e un operatore di cast che consente di trattiate l'eccezione come se fosse un HRESULT.  
  
 Verrà in genere `AtlThrow` anziché creare un oggetto `CAtlException` direttamente.  
  
## Requisiti  
 **Header:** atlexcept.h  
  
## Vedere anche  
 [AtlThrow](../Topic/AtlThrow.md)   
 [Class Overview](../../atl/atl-class-overview.md)
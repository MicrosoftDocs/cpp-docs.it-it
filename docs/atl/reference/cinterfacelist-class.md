---
title: "CInterfaceList Class | Microsoft Docs"
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
  - "ATL::CInterfaceList"
  - "ATL.CInterfaceList"
  - "CInterfaceList"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CInterfaceList class"
ms.assetid: 2077764d-25e5-4b3d-96c8-08a287bbcd25
caps.latest.revision: 19
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CInterfaceList Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi utili quando si crea un elenco tramite puntatori all'interfaccia COM.  
  
## Sintassi  
  
```  
  
      template<  
   class I,  
   const IID* piid = & __uuidof( I )  
>   
class CInterfaceList : public CAtlList<  
   ATL::CComQIPtr< I, piid >,  
   CComQIPtrElementTraits< I, piid >  
>  
```  
  
#### Parametri  
 `I`  
 Un'interfaccia COM che specifica il tipo di puntatore da archiviare.  
  
 `piid`  
 Un puntatore all'IID `I`.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInterfaceList::CInterfaceList](../Topic/CInterfaceList::CInterfaceList.md)|Il costruttore per l'elenco dell'interfaccia.|  
  
## Note  
 Questa classe fornisce un costruttore e i metodi derivati per creare un elenco dei puntatori all'interfaccia COM.  Utilizzo [CInterfaceArray](../../atl/reference/cinterfacearray-class.md) quando una matrice è richiesta.  
  
 Per ulteriori informazioni, vedere [Classi di raccolte ATL](../../atl/atl-collection-classes.md).  
  
## Gerarchia di ereditarietà  
 [CAtlList](../../atl/reference/catllist-class.md)  
  
 `CInterfaceList`  
  
## Requisiti  
 **Header:** atlcoll.h  
  
## Vedere anche  
 [CAtlList Class](../../atl/reference/catllist-class.md)   
 [CComQIPtr Class](../../atl/reference/ccomqiptr-class.md)   
 [CComQIPtrElementTraits Class](../../atl/reference/ccomqiptrelementtraits-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
---
title: "CAutoPtrArray Class | Microsoft Docs"
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
  - "ATL::CAutoPtrArray<E>"
  - "CAutoPtrArray"
  - "ATL::CAutoPtrArray"
  - "ATL.CAutoPtrArray<E>"
  - "ATL.CAutoPtrArray"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAutoPtrArray class"
ms.assetid: 880a70da-8c81-4427-8ac6-49aa8d424244
caps.latest.revision: 21
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CAutoPtrArray Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi utili quando si crea una matrice di puntatori intelligenti.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template<  
typename E  
>  
class CAutoPtrArray : public CAtlArray<  
ATL::CAutoPtr< E>,  
CAutoPtrElementTraits< E>  
>  
```  
  
#### Parametri  
 `E`  
 Il tipo puntatore.  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CAutoPtrArray::CAutoPtrArray](../Topic/CAutoPtrArray::CAutoPtrArray.md)|Costruttore.|  
  
## Note  
 Questa classe fornisce un costruttore e deriva i metodi da [CAtlArray](../../atl/reference/catlarray-class.md) e da [CAutoPtrElementTraits](../../atl/reference/cautoptrelementtraits-class.md) per consentire la creazione di un oggetto classe di raccolte che archivia i puntatori intelligenti.  
  
 Per ulteriori informazioni, vedere [Classi di raccolte ATL](../../atl/atl-collection-classes.md).  
  
## Gerarchia di ereditarietà  
 `CAtlArray`  
  
 `CAutoPtrArray`  
  
## Requisiti  
 **Header:** atlcoll.h  
  
## Vedere anche  
 [CAtlArray Class](../../atl/reference/catlarray-class.md)   
 [CAutoPtrElementTraits Class](../../atl/reference/cautoptrelementtraits-class.md)   
 [CAutoPtrList Class](../../atl/reference/cautoptrlist-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
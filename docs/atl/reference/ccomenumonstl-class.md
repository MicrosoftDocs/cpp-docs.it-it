---
title: "CComEnumOnSTL Class | Microsoft Docs"
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
  - "CComEnumOnSTL"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComEnumOnSTL class"
ms.assetid: befe1a44-7a00-4f28-9a2e-cc0fa526643c
caps.latest.revision: 21
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComEnumOnSTL Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe definisce un oggetto enumeratore COM basato su una raccolta STL.  
  
## Sintassi  
  
```  
  
      template <  
   class Base,  
   const IID* piid,  
   class T,  
   class Copy,  
   class CollType,  
   class ThreadModel = CComObjectThreadModel  
>  
class ATL_NO_VTABLE CComEnumOnSTL :  
   public IEnumOnSTLImpl<Base, piid, T, Copy, CollType>,  
   public CComObjectRootEx< ThreadModel >  
```  
  
#### Parametri  
 `Base`  
 Un'interfaccia dell'enumeratore COM \(\).  
  
 `piid`  
 Un puntatore all'ID dell'interfaccia dell'enumeratore.  
  
 `T`  
 Il tipo di elemento esposto dall'enumeratore.  
  
 `Copy`  
 Una classe [criteri di copia](../../atl/atl-copy-policy-classes.md).  
  
 `CollType`  
 Una classe di contenitori STL.  
  
## Note  
 `CComEnumOnSTL` definisce un oggetto enumeratore COM basato su una raccolta STL.  Questa classe può essere utilizzata da sola o insieme a [ICollectionOnSTLImpl](../../atl/reference/icollectiononstlimpl-class.md).  I passaggi comuni per l'utilizzo di tale classe sono descritti in.  Per ulteriori informazioni, vedere [Raccolte e enumeratori ATL](../../atl/atl-collections-and-enumerators.md).  
  
## Per utilizzare questa classe con ICollectionOnSTLImpl:  
  
-   `typedef` una specializzazione di questa classe.  
  
-   Utilizzare `typedef` come argomento di modello finale in una specializzazione `ICollectionOnSTLImpl`.  
  
 Vedere [Raccolte e enumeratori ATL](../../atl/atl-collections-and-enumerators.md) per un esempio.  
  
## Per utilizzare questa classe indipendentemente da ICollectionOnSTLImpl:  
  
-   `typedef` una specializzazione di questa classe.  
  
-   Utilizzare `typedef` come argomento di modello in una specializzazione `CComObject`.  
  
-   Creare un'istanza della specializzazione `CComObject`.  
  
-   Inizializzare l'oggetto enumeratore chiamando [IEnumOnSTLImpl::Init](../Topic/IEnumOnSTLImpl::Init.md).  
  
-   Restituisce l'interfaccia dell'enumeratore al client.  
  
## Gerarchia di ereditarietà  
 `CComObjectRootBase`  
  
 `Base`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 [IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md)  
  
 `CComEnumOnSTL`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Esempio  
 Il codice riportato di seguito fornisce una funzione generica per gestire la creazione e l'inizializzazione di un oggetto enumerator:  
  
 [!code-cpp[NVC_ATL_COM#34](../../atl/codesnippet/CPP/ccomenumonstl-class_1.h)]  
  
 Questa funzione modello può essere utilizzata per implementare la proprietà `_NewEnum` di un'interfaccia di raccolta come illustrato di seguito:  
  
 [!code-cpp[NVC_ATL_COM#35](../../atl/codesnippet/CPP/ccomenumonstl-class_2.h)]  
  
 Questo codice crea `typedef` per `CComEnumOnSTL` che espone un vettore `CComVariant`s per l'utilizzo dell'interfaccia **IEnumVariant**.  La classe **CVariantCollection** specializza semplicemente **CreateSTLEnumerator** per l'utilizzo degli oggetti enumeratori di questo tipo.  
  
## Vedere anche  
 [IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md)   
 [Esempio ATLCollections: Dimostrazione di ICollectionOnSTLImpl, CComEnumOnSTL e di classi criteri di copia personalizzate](../../top/visual-cpp-samples.md)   
 [Class Overview](../../atl/atl-class-overview.md)   
 [CComObjectRootEx Class](../../atl/reference/ccomobjectrootex-class.md)   
 [CComObjectThreadModel](../Topic/CComObjectThreadModel.md)   
 [IEnumOnSTLImpl Class](../../atl/reference/ienumonstlimpl-class.md)
---
title: "CComEnum Class | Microsoft Docs"
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
  - "CComEnum"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComEnum class"
ms.assetid: bff7dd7b-eb6e-4d6e-96ed-2706e66c8b3b
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComEnum Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe definisce un oggetto enumeratore COM basato su una matrice.  
  
## Sintassi  
  
```  
  
      template <  
   class Base,  
   const IID* piid,  
   class T,  
   class Copy,  
   class ThreadModel = CcomObjectThreadModel  
>  
class ATL_NO_VTABLE CComEnum :  
   public CComEnumImpl<Base, piid, T, Copy>,  
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
 [classe criteri di copia](../../atl/atl-copy-policy-classes.md)omogeneo.  
  
 `ThreadModel`  
 Il modello di threading della classe.  Impostazioni predefinite di questo parametro al modello di threading globale dell'oggetto utilizzato nel progetto.  
  
## Note  
 `CComEnum` definisce un oggetto enumeratore COM basato su una matrice.  Questa classe è analogo a [CComEnumOnSTL](../../atl/reference/ccomenumonstl-class.md) che implementa un enumeratore basato su un contenitore STL.  I passaggi comuni per l'utilizzo di tale classe sono descritti in.  Per ulteriori informazioni, vedere [Raccolte e enumeratori ATL](../../atl/atl-collections-and-enumerators.md).  
  
## Per utilizzare questa classe:  
  
-   `typedef` una specializzazione di questa classe.  
  
-   Utilizzare `typedef` come argomento di modello in una specializzazione `CComObject`.  
  
-   Creare un'istanza della specializzazione `CComObject`.  
  
-   Inizializzare l'oggetto enumeratore chiamando [CComEnumImpl::Init](../Topic/CComEnumImpl::Init.md).  
  
-   Restituisce l'interfaccia dell'enumeratore al client.  
  
## Gerarchia di ereditarietà  
 `CComObjectRootBase`  
  
 `Base`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 [CComEnumImpl](../../atl/reference/ccomenumimpl-class.md)  
  
 `CComEnum`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Esempio  
 Il codice riportato di seguito fornisce una funzione riutilizzabile per creare e inizializzare un oggetto enumerator.  
  
 [!code-cpp[NVC_ATL_COM#32](../../atl/codesnippet/CPP/ccomenum-class_1.h)]  
  
 Questa funzione modello può essere utilizzata per implementare la proprietà `_NewEnum` di un'interfaccia di raccolta come illustrato di seguito:  
  
 [!code-cpp[NVC_ATL_COM#33](../../atl/codesnippet/CPP/ccomenum-class_2.h)]  
  
 Questo codice crea `typedef` per `CComEnum` che espone un vettore **VARIANT**oggetti tramite l'interfaccia **IEnumVariant**.  La classe **CVariantArrayCollection** specializza semplicemente **CreateEnumerator** per l'utilizzo degli oggetti enumeratori di questo tipo e passa gli argomenti necessari.  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)   
 [CComObjectThreadModel](../Topic/CComObjectThreadModel.md)   
 [CComEnumImpl Class](../../atl/reference/ccomenumimpl-class.md)   
 [CComObjectRootEx Class](../../atl/reference/ccomobjectrootex-class.md)
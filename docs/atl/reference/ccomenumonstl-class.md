---
title: Classe CComEnumOnSTL | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComEnumOnSTL
- atlcom/ATL::CComEnumOnSTL
dev_langs:
- C++
helpviewer_keywords:
- CComEnumOnSTL class
ms.assetid: befe1a44-7a00-4f28-9a2e-cc0fa526643c
caps.latest.revision: 21
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: 23e234f82ce8c77a6ebde50070475deeab59f362
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="ccomenumonstl-class"></a>CComEnumOnSTL (classe)
Questa classe definisce un oggetto enumeratore COM basato su una raccolta della libreria Standard C++.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Base,
    const IID* piid, class T, class Copy, class CollType, class ThreadModel = CComObjectThreadModel>  
class ATL_NO_VTABLE CComEnumOnSTL : public IEnumOnSTLImpl<Base, piid,
 T,
    Copy,
 CollType>,
    public CComObjectRootEx<ThreadModel>
```  
  
#### <a name="parameters"></a>Parametri  
 `Base`  
 Un enumeratore COM ( [IEnumXXXX](https://msdn.microsoft.com/library/ms680089.aspx)) dell'interfaccia.  
  
 `piid`  
 Puntatore all'ID dell'interfaccia dell'enumeratore.  
  
 `T`  
 Il tipo di elemento esposta dall'interfaccia dell'enumeratore.  
  
 `Copy`  
 Oggetto [copiare criteri](../../atl/atl-copy-policy-classes.md) (classe).  
  
 `CollType`  
 Classe contenitore della libreria Standard C++.  
  
## <a name="remarks"></a>Note  
 `CComEnumOnSTL`definisce un oggetto enumeratore COM basato su una raccolta della libreria Standard C++. Questa classe può essere utilizzata in modo autonomo o in combinazione con [ICollectionOnSTLImpl](../../atl/reference/icollectiononstlimpl-class.md). I passaggi tipici per l'utilizzo di questa classe sono descritti di seguito. Per ulteriori informazioni, vedere [insiemi ed enumeratori ATL](../../atl/atl-collections-and-enumerators.md).  
  
## <a name="to-use-this-class-with-icollectiononstlimpl"></a>Utilizzare questa classe con ICollectionOnSTLImpl:  
  
- `typedef`una specializzazione di questa classe.  
  
-   Utilizzare il `typedef` come argomento del modello finale in una specializzazione di `ICollectionOnSTLImpl`.  
  
 Vedere [insiemi ed enumeratori ATL](../../atl/atl-collections-and-enumerators.md) per un esempio.  
  
## <a name="to-use-this-class-independently-of-icollectiononstlimpl"></a>Utilizzare questa classe in modo indipendente ICollectionOnSTLImpl:  
  
- `typedef`una specializzazione di questa classe.  
  
-   Utilizzare il `typedef` come argomento del modello in una specializzazione di `CComObject`.  
  
-   Creare un'istanza di `CComObject` specializzazione.  
  
-   Inizializzare l'oggetto enumeratore chiamando [IEnumOnSTLImpl::Init](../../atl/reference/ienumonstlimpl-class.md#init).  
  
-   Restituisce l'interfaccia di enumeratore al client.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CComObjectRootBase`  
  
 `Base`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 [IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md)  
  
 `CComEnumOnSTL`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
## <a name="example"></a>Esempio  
 Il codice riportato di seguito fornisce una funzione generica per gestire la creazione e inizializzazione di un oggetto enumeratore:  
  
 [!code-cpp[NVC_ATL_COM&#34;](../../atl/codesnippet/cpp/ccomenumonstl-class_1.h)]  
  
 Questa funzione di modello può essere utilizzata per implementare la `_NewEnum` proprietà di un'interfaccia di raccolta, come illustrato di seguito:  
  
 [!code-cpp[NVC_ATL_COM N.&35;](../../atl/codesnippet/cpp/ccomenumonstl-class_2.h)]  
  
 Questo codice crea un `typedef` per `CComEnumOnSTL` che espone un vettore di `CComVariant`s tramite il **IEnumVariant** interfaccia. Il **CVariantCollection** classe specializzata semplicemente **CreateSTLEnumerator** per lavorare con questo tipo di oggetto enumeratore.  
  
## <a name="see-also"></a>Vedere anche  
 [IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md)   
 [ATLCollections: Dimostrazione di ICollectionOnSTLImpl e CComEnumOnSTL classi dei criteri di copia personalizzate](../../visual-cpp-samples.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [CComObjectRootEx (classe)](../../atl/reference/ccomobjectrootex-class.md)   
 [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel)   
 [Classe IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md)


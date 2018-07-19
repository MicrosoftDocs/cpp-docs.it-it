---
title: Classe CComEnumOnSTL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComEnumOnSTL
- atlcom/ATL::CComEnumOnSTL
dev_langs:
- C++
helpviewer_keywords:
- CComEnumOnSTL class
ms.assetid: befe1a44-7a00-4f28-9a2e-cc0fa526643c
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ca7b7d38c204d7dd8402b9d610a5800dcef6ced9
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37883229"
---
# <a name="ccomenumonstl-class"></a>Classe CComEnumOnSTL
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
 *base*  
 Un enumeratore COM ( [IEnumXXXX](https://msdn.microsoft.com/library/ms680089.aspx)) dell'interfaccia.  
  
 *piid*  
 Un puntatore all'ID di interfaccia di interfaccia dell'enumeratore.  
  
 *T*  
 Il tipo di elemento esposto dall'interfaccia dell'enumeratore.  
  
 *Copia*  
 Oggetto [copiare criteri](../../atl/atl-copy-policy-classes.md) classe.  
  
 *CollType*  
 Classe contenitore della libreria Standard C++.  
  
## <a name="remarks"></a>Note  
 `CComEnumOnSTL` definisce un oggetto enumeratore COM basato su una raccolta della libreria Standard C++. Questa classe può essere utilizzata in modo autonomo o in combinazione con [ICollectionOnSTLImpl](../../atl/reference/icollectiononstlimpl-class.md). Passaggi tipici per l'utilizzo di questa classe sono descritti di seguito. Per altre informazioni, vedere [ATL raccolte ed enumeratori](../../atl/atl-collections-and-enumerators.md).  
  
## <a name="to-use-this-class-with-icollectiononstlimpl"></a>Per usare questa classe con ICollectionOnSTLImpl:  
  
- **typedef** una specializzazione della classe.  
  
-   Usare la **typedef** come argomento del modello finale in una specializzazione di `ICollectionOnSTLImpl`.  
  
 Visualizzare [ATL raccolte ed enumeratori](../../atl/atl-collections-and-enumerators.md) per un esempio.  
  
## <a name="to-use-this-class-independently-of-icollectiononstlimpl"></a>Utilizzare questa classe indipendentemente da ICollectionOnSTLImpl:  
  
- **typedef** una specializzazione della classe.  
  
-   Usare la **typedef** come argomento del modello in una specializzazione di `CComObject`.  
  
-   Creare un'istanza di `CComObject` specializzazione.  
  
-   Inizializzare l'oggetto enumeratore chiamando [IEnumOnSTLImpl::Init](../../atl/reference/ienumonstlimpl-class.md#init).  
  
-   Restituire l'interfaccia dell'enumeratore al client.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CComObjectRootBase`  
  
 `Base`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 [IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md)  
  
 `CComEnumOnSTL`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
## <a name="example"></a>Esempio  
 Il codice seguente offre una funzione generica per gestire la creazione e inizializzazione di un oggetto enumeratore:  
  
 [!code-cpp[NVC_ATL_COM#34](../../atl/codesnippet/cpp/ccomenumonstl-class_1.h)]  
  
 Questa funzione di modello può essere utilizzata per implementare il `_NewEnum` proprietà di un'interfaccia di raccolta, come illustrato di seguito:  
  
 [!code-cpp[NVC_ATL_COM#35](../../atl/codesnippet/cpp/ccomenumonstl-class_2.h)]  
  
 Questo codice crea un **typedef** per `CComEnumOnSTL` che espone un vettore di `CComVariant`s tramite il `IEnumVariant` interfaccia. Il `CVariantCollection` classe specializzata semplicemente `CreateSTLEnumerator` per lavorare con oggetti dell'enumeratore di questo tipo.  
  
## <a name="see-also"></a>Vedere anche  
 [IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md)   
 [ATLCollections: Dimostrazione di classi di criteri personalizzata copia ICollectionOnSTLImpl e CComEnumOnSTL](../../visual-cpp-samples.md)   
 [Panoramica della classe](../../atl/atl-class-overview.md)   
 [Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)   
 [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel)   
 [Classe IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md)

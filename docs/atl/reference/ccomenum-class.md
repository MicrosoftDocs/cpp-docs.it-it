---
title: Classe CComEnum | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComEnum
- atlcom/ATL::CComEnum
dev_langs:
- C++
helpviewer_keywords:
- CComEnum class
ms.assetid: bff7dd7b-eb6e-4d6e-96ed-2706e66c8b3b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: dd8fe2120ad42d7df223d05a43591937ffcce6e2
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37885389"
---
# <a name="ccomenum-class"></a>Classe CComEnum
Questa classe definisce un oggetto enumeratore COM basato su una matrice.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Base,
    const IID* piid, class T, class Copy, class ThreadModel = CcomObjectThreadModel>  
class ATL_NO_VTABLE CComEnum : public CComEnumImpl<Base, piid,
 T,
    Copy>,
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
 Un omogenei [copiare criteri classe](../../atl/atl-copy-policy-classes.md).  
  
 *ThreadModel*  
 Il modello di threading della classe. Questo parametro viene impostato globale modello a oggetti di thread utilizzato nel progetto.  
  
## <a name="remarks"></a>Note  
 `CComEnum` definisce un oggetto enumeratore COM basato su una matrice. Questa classe è analoga a [CComEnumOnSTL](../../atl/reference/ccomenumonstl-class.md) che implementa un enumeratore in base a un contenitore della libreria Standard C++. Passaggi tipici per l'utilizzo di questa classe sono descritti di seguito. Per altre informazioni, vedere [ATL raccolte ed enumeratori](../../atl/atl-collections-and-enumerators.md).  
  
## <a name="to-use-this-class"></a>Utilizzare questa classe:  
  
- **typedef** una specializzazione della classe.  
  
-   Usare la **typedef** come argomento del modello in una specializzazione di `CComObject`.  
  
-   Creare un'istanza di `CComObject` specializzazione.  
  
-   Inizializzare l'oggetto enumeratore chiamando [CComEnumImpl::Init](../../atl/reference/ccomenumimpl-class.md#init).  
  
-   Restituire l'interfaccia dell'enumeratore al client.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CComObjectRootBase`  
  
 `Base`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 [CComEnumImpl](../../atl/reference/ccomenumimpl-class.md)  
  
 `CComEnum`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
## <a name="example"></a>Esempio  
 Il codice illustrato di seguito fornisce una funzione riutilizzabile per la creazione e inizializzazione di un oggetto enumeratore.  
  
 [!code-cpp[NVC_ATL_COM#32](../../atl/codesnippet/cpp/ccomenum-class_1.h)]  
  
 Questa funzione di modello può essere utilizzata per implementare il `_NewEnum` proprietà di un'interfaccia di raccolta, come illustrato di seguito:  
  
 [!code-cpp[NVC_ATL_COM#33](../../atl/codesnippet/cpp/ccomenum-class_2.h)]  
  
 Questo codice crea un **typedef** per `CComEnum` che espone un vettore di varianti attraverso il `IEnumVariant` interfaccia. Il `CVariantArrayCollection` classe specializzata semplicemente `CreateEnumerator` per lavorare con oggetti dell'enumeratore di questo tipo e passa gli argomenti necessari.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica della classe](../../atl/atl-class-overview.md)   
 [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel)   
 [Classe CComEnumImpl](../../atl/reference/ccomenumimpl-class.md)   
 [Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

---
title: Classe CComEnum | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComEnum
- atlcom/ATL::CComEnum
dev_langs: C++
helpviewer_keywords: CComEnum class
ms.assetid: bff7dd7b-eb6e-4d6e-96ed-2706e66c8b3b
caps.latest.revision: "20"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 792c5ff95858936d38d9a87350dd3ca405c5ec66
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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
 `Base`  
 Un enumeratore COM ( [IEnumXXXX](https://msdn.microsoft.com/library/ms680089.aspx)) dell'interfaccia.  
  
 `piid`  
 Puntatore all'ID dell'interfaccia dell'enumeratore.  
  
 `T`  
 Il tipo di elemento esposta dall'interfaccia dell'enumeratore.  
  
 `Copy`  
 Un omogenea [classe criteri di copia](../../atl/atl-copy-policy-classes.md).  
  
 `ThreadModel`  
 Il modello di threading della classe. Questo parametro per impostazione predefinita il modello oggetto globale di thread utilizzato nel progetto.  
  
## <a name="remarks"></a>Note  
 `CComEnum`definisce un oggetto enumeratore COM basato su una matrice. Questa classe è analoga a [CComEnumOnSTL](../../atl/reference/ccomenumonstl-class.md) che implementa un enumeratore in base a un contenitore della libreria Standard C++. Di seguito sono descritti i passaggi tipici per l'utilizzo di questa classe. Per ulteriori informazioni, vedere [insiemi ed enumeratori ATL](../../atl/atl-collections-and-enumerators.md).  
  
## <a name="to-use-this-class"></a>Utilizzare questa classe:  
  
- `typedef`una specializzazione di questa classe.  
  
-   Utilizzare il `typedef` come argomento del modello in una specializzazione di `CComObject`.  
  
-   Creare un'istanza di `CComObject` specializzazione.  
  
-   Inizializzare l'oggetto enumeratore chiamando [CComEnumImpl::Init](../../atl/reference/ccomenumimpl-class.md#init).  
  
-   Restituisce l'interfaccia di enumeratore al client.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CComObjectRootBase`  
  
 `Base`  
  
 [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)  
  
 [CComEnumImpl](../../atl/reference/ccomenumimpl-class.md)  
  
 `CComEnum`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
## <a name="example"></a>Esempio  
 Il codice riportato di seguito fornisce una funzione riutilizzabile per la creazione e inizializzazione di un oggetto enumeratore.  
  
 [!code-cpp[NVC_ATL_COM#32](../../atl/codesnippet/cpp/ccomenum-class_1.h)]  
  
 Questa funzione di modello può essere utilizzata per implementare il `_NewEnum` proprietà di un'interfaccia di raccolta, come illustrato di seguito:  
  
 [!code-cpp[NVC_ATL_COM#33](../../atl/codesnippet/cpp/ccomenum-class_2.h)]  
  
 Questo codice crea un `typedef` per `CComEnum` che espone un vettore di **VARIANT**s tramite il **IEnumVariant** interfaccia. Il **CVariantArrayCollection** classe specializzata semplicemente **CreateEnumerator** per gestire gli oggetti di enumeratore di questo tipo e passa gli argomenti necessari.  
  
## <a name="see-also"></a>Vedere anche  
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)   
 [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel)   
 [Classe CComEnumImpl](../../atl/reference/ccomenumimpl-class.md)   
 [Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

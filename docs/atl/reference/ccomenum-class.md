---
title: Classe CComEnum
ms.date: 11/04/2016
f1_keywords:
- CComEnum
- atlcom/ATL::CComEnum
helpviewer_keywords:
- CComEnum class
ms.assetid: bff7dd7b-eb6e-4d6e-96ed-2706e66c8b3b
ms.openlocfilehash: 4d83b06f37c132c0d2325304e2cc155ccb490690
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62246395"
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

*Base*<br/>
Un'interfaccia dell'enumeratore COM. Visualizzare [IEnumString](/windows/desktop/api/objidl/nn-objidl-ienumstring) per un esempio.

*piid*<br/>
Un puntatore all'ID di interfaccia di interfaccia dell'enumeratore.

*T*<br/>
Il tipo di elemento esposto dall'interfaccia dell'enumeratore.

*Copia*<br/>
Un omogenei [copiare criteri classe](../../atl/atl-copy-policy-classes.md).

*ThreadModel*<br/>
Il modello di threading della classe. Questo parametro viene impostato globale modello a oggetti di thread utilizzato nel progetto.

## <a name="remarks"></a>Note

`CComEnum` definisce un oggetto enumeratore COM basato su una matrice. Questa classe è analoga a [CComEnumOnSTL](../../atl/reference/ccomenumonstl-class.md) che implementa un enumeratore in base a un contenitore della libreria Standard C++. Passaggi tipici per l'utilizzo di questa classe sono descritti di seguito. Per altre informazioni, vedere [ATL raccolte ed enumeratori](../../atl/atl-collections-and-enumerators.md).

## <a name="to-use-this-class"></a>Utilizzare questa classe:

- **typedef** una specializzazione della classe.

- Usare la **typedef** come argomento del modello in una specializzazione di `CComObject`.

- Creare un'istanza di `CComObject` specializzazione.

- Inizializzare l'oggetto enumeratore chiamando [CComEnumImpl::Init](../../atl/reference/ccomenumimpl-class.md#init).

- Restituire l'interfaccia dell'enumeratore al client.

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

[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel)<br/>
[Classe CComEnumImpl](../../atl/reference/ccomenumimpl-class.md)<br/>
[Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

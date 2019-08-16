---
title: Classe CComEnum
ms.date: 11/04/2016
f1_keywords:
- CComEnum
- atlcom/ATL::CComEnum
helpviewer_keywords:
- CComEnum class
ms.assetid: bff7dd7b-eb6e-4d6e-96ed-2706e66c8b3b
ms.openlocfilehash: 7252eb2fa5d34618a1c38484a2506bae27a1106a
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69497215"
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
Interfaccia dell'enumeratore COM. Per un esempio, vedere [IEnumString](/windows/win32/api/objidl/nn-objidl-ienumstring) .

*piid*<br/>
Puntatore all'ID di interfaccia dell'interfaccia dell'enumeratore.

*T*<br/>
Tipo di elemento esposto dall'interfaccia dell'enumeratore.

*Copia*<br/>
[Classe di criteri di copia](../../atl/atl-copy-policy-classes.md)omogenei.

*ThreadModel*<br/>
Modello di threading della classe. Per impostazione predefinita, questo parametro è il modello di thread oggetto globale usato nel progetto.

## <a name="remarks"></a>Note

`CComEnum`definisce un oggetto enumeratore COM basato su una matrice. Questa classe è analoga a [CComEnumOnSTL](../../atl/reference/ccomenumonstl-class.md) che implementa un enumeratore basato C++ su un contenitore della libreria standard. Di seguito sono descritti i passaggi tipici per l'uso di questa classe. Per ulteriori informazioni, vedere [raccolte ed enumeratori ATL](../../atl/atl-collections-and-enumerators.md).

## <a name="to-use-this-class"></a>Per usare questa classe:

- **typedef** una specializzazione di questa classe.

- Utilizzare **typedef** come argomento di modello in una specializzazione di `CComObject`.

- Creare un'istanza della `CComObject` specializzazione.

- Inizializzare l'oggetto enumeratore chiamando [CComEnumImpl:: init](../../atl/reference/ccomenumimpl-class.md#init).

- Restituisce l'interfaccia dell'enumeratore al client.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CComObjectRootBase`

`Base`

[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

[CComEnumImpl](../../atl/reference/ccomenumimpl-class.md)

`CComEnum`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="example"></a>Esempio

Il codice riportato di seguito fornisce una funzione riutilizzabile per la creazione e l'inizializzazione di un oggetto enumeratore.

[!code-cpp[NVC_ATL_COM#32](../../atl/codesnippet/cpp/ccomenum-class_1.h)]

Questa funzione di modello può essere usata per implementare `_NewEnum` la proprietà di un'interfaccia di raccolta, come illustrato di seguito:

[!code-cpp[NVC_ATL_COM#33](../../atl/codesnippet/cpp/ccomenum-class_2.h)]

Questo codice crea un **typedef** per `CComEnum` che espone un vettore di varianti attraverso l' `IEnumVariant` interfaccia. La `CVariantArrayCollection` classe si `CreateEnumerator` specializza semplicemente per lavorare con gli oggetti enumeratore di questo tipo e passa gli argomenti necessari.

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../../atl/atl-class-overview.md)<br/>
[CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel)<br/>
[Classe CComEnumImpl](../../atl/reference/ccomenumimpl-class.md)<br/>
[Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

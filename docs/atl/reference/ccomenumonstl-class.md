---
description: 'Altre informazioni su: classe CComEnumOnSTL'
title: Classe CComEnumOnSTL
ms.date: 11/04/2016
f1_keywords:
- CComEnumOnSTL
- atlcom/ATL::CComEnumOnSTL
helpviewer_keywords:
- CComEnumOnSTL class
ms.assetid: befe1a44-7a00-4f28-9a2e-cc0fa526643c
ms.openlocfilehash: 1ff73796d7e3eefa76cbecdeb6d997bede2d2be5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97146666"
---
# <a name="ccomenumonstl-class"></a>Classe CComEnumOnSTL

Questa classe definisce un oggetto enumeratore COM basato su una raccolta di librerie standard C++.

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

*Base*<br/>
Enumeratore COM. Per un esempio, vedere [IEnumString](/windows/win32/api/objidl/nn-objidl-ienumstring) .

*pIID*<br/>
Puntatore all'ID di interfaccia dell'interfaccia dell'enumeratore.

*T*<br/>
Tipo di elemento esposto dall'interfaccia dell'enumeratore.

*Copia*<br/>
Classe di [criteri Copy](../../atl/atl-copy-policy-classes.md) .

*CollType*<br/>
Classe contenitore della libreria standard C++.

## <a name="remarks"></a>Commenti

`CComEnumOnSTL` definisce un oggetto enumeratore COM basato su una raccolta di librerie standard C++. Questa classe può essere utilizzata autonomamente o in combinazione con [ICollectionOnSTLImpl](../../atl/reference/icollectiononstlimpl-class.md). Di seguito sono descritti i passaggi tipici per l'uso di questa classe. Per ulteriori informazioni, vedere [raccolte ed enumeratori ATL](../../atl/atl-collections-and-enumerators.md).

## <a name="to-use-this-class-with-icollectiononstlimpl"></a>Per usare questa classe con ICollectionOnSTLImpl:

- **`typedef`** specializzazione di questa classe.

- Utilizzare **`typedef`** come argomento di modello finale in una specializzazione di `ICollectionOnSTLImpl` .

Per un esempio, vedere [raccolte ed enumeratori ATL](../../atl/atl-collections-and-enumerators.md) .

## <a name="to-use-this-class-independently-of-icollectiononstlimpl"></a>Per usare questa classe in modo indipendente da ICollectionOnSTLImpl:

- **`typedef`** specializzazione di questa classe.

- Utilizzare **`typedef`** come argomento di modello in una specializzazione di `CComObject` .

- Creare un'istanza della `CComObject` specializzazione.

- Inizializzare l'oggetto enumeratore chiamando [IEnumOnSTLImpl:: init](../../atl/reference/ienumonstlimpl-class.md#init).

- Restituisce l'interfaccia dell'enumeratore al client.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CComObjectRootBase`

`Base`

[CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)

[IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md)

`CComEnumOnSTL`

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="example"></a>Esempio

Il codice riportato di seguito fornisce una funzione generica per gestire la creazione e l'inizializzazione di un oggetto enumeratore:

[!code-cpp[NVC_ATL_COM#34](../../atl/codesnippet/cpp/ccomenumonstl-class_1.h)]

Questa funzione di modello può essere usata per implementare la `_NewEnum` proprietà di un'interfaccia di raccolta, come illustrato di seguito:

[!code-cpp[NVC_ATL_COM#35](../../atl/codesnippet/cpp/ccomenumonstl-class_2.h)]

Questo codice crea un oggetto **`typedef`** per `CComEnumOnSTL` che espone un vettore di `CComVariant` s per mezzo dell' `IEnumVariant` interfaccia. La `CVariantCollection` classe si specializza semplicemente `CreateSTLEnumerator` per lavorare con gli oggetti enumeratore di questo tipo.

## <a name="see-also"></a>Vedi anche

[IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md)<br/>
[Esempio ATLCollections: illustra le classi di criteri di copia ICollectionOnSTLImpl, CComEnumOnSTL e personalizzata](../../overview/visual-cpp-samples.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)<br/>
[Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)<br/>
[CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel)<br/>
[Classe IEnumOnSTLImpl](../../atl/reference/ienumonstlimpl-class.md)

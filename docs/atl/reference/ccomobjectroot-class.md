---
description: 'Altre informazioni su: classe CComObjectRoot'
title: Classe CComObjectRoot
ms.date: 11/04/2016
f1_keywords:
- CComObjectRoot
- atlcom/ATL::CComObjectRoot
helpviewer_keywords:
- CComObjectRoot class
ms.assetid: f8797c38-6e73-4f67-85c2-71654cffa8eb
ms.openlocfilehash: 924b85ee7ed6e17eb44e753ad16f57251bb189ba
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97142467"
---
# <a name="ccomobjectroot-class"></a>Classe CComObjectRoot

Questo typedef di [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md) è creato un modello nel modello di threading predefinito del server.

## <a name="syntax"></a>Sintassi

```
typedef CComObjectRootEx<CComObjectThreadModel> CComObjectRoot;
```

## <a name="remarks"></a>Osservazioni

`CComObjectRoot` è **`typedef`** di [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md) creato un modello sul modello di threading predefinito del server. Quindi [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel) fa riferimento a [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) o [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md).

`CComObjectRootEx` gestisce la gestione dei conteggi dei riferimenti agli oggetti per gli oggetti non aggregati e aggregati. Include il conteggio dei riferimenti all'oggetto se l'oggetto non viene aggregato e il puntatore all'oggetto sconosciuto esterno se l'oggetto viene aggregato. Per gli oggetti aggregati, `CComObjectRootEx` è possibile usare i metodi per gestire l'errore dell'oggetto interno da costruire e proteggere l'oggetto esterno dall'eliminazione quando vengono rilasciate le interfacce interne o l'oggetto interno viene eliminato.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="see-also"></a>Vedi anche

[Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)<br/>
[Classe Ccomaggobjec](../../atl/reference/ccomaggobject-class.md)<br/>
[Classe CComObject](../../atl/reference/ccomobject-class.md)<br/>
[Classe CComPolyObject](../../atl/reference/ccompolyobject-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)

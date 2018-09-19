---
title: Classe CComObjectRoot | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CComObjectRoot
- atlcom/ATL::CComObjectRoot
dev_langs:
- C++
helpviewer_keywords:
- CComObjectRoot class
ms.assetid: f8797c38-6e73-4f67-85c2-71654cffa8eb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 2647ea3ac46ec3783f584de996c3d988c168980d
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46054862"
---
# <a name="ccomobjectroot-class"></a>Classe CComObjectRoot

Questo typedef dei [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md) viene creato un modello predefinito del server del modello di threading.

## <a name="syntax"></a>Sintassi

```
typedef CComObjectRootEx<CComObjectThreadModel> CComObjectRoot;
```

## <a name="remarks"></a>Note

`CComObjectRoot` è un `typedef` dei [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md) creato un modello predefinito del server del modello di threading. In questo modo [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel) farà riferimento a uno [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) oppure [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md).

`CComObjectRootEx` gestisce gestione di conteggio di riferimento di oggetto per gli oggetti aggregati e non aggregati. Contiene il conteggio dei riferimenti oggetto se l'oggetto non è vengono aggregato e contiene il puntatore a unknown esterno se l'oggetto da aggregare. Per gli oggetti aggregati, `CComObjectRootEx` metodi possono essere utilizzati per gestire l'errore dell'oggetto interno per costruire e per proteggere l'oggetto esterno dall'eliminazione quando vengono rilasciate le interfacce interne o l'oggetto interno viene eliminato.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="see-also"></a>Vedere anche

[Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)<br/>
[Classe CComAggObject](../../atl/reference/ccomaggobject-class.md)<br/>
[Classe CComObject](../../atl/reference/ccomobject-class.md)<br/>
[Classe CComPolyObject](../../atl/reference/ccompolyobject-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)

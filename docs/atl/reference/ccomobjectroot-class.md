---
title: Classe CComObjectRoot | Documenti Microsoft
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
ms.openlocfilehash: e6a7d350f7bd50476c1c327d824089981d3e8321
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="ccomobjectroot-class"></a>CComObjectRoot (classe)
Il typedef di [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md) trasformare in modello predefinito del server del modello di threading.  
  
## <a name="syntax"></a>Sintassi  
  
```
typedef CComObjectRootEx<CComObjectThreadModel> CComObjectRoot;
```  
  
## <a name="remarks"></a>Note  
 `CComObjectRoot` è un `typedef` dei [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md) trasformare in modello predefinito del server del modello di threading. In questo modo [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel) farà riferimento a uno [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) o [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md).  
  
 `CComObjectRootEx` gestione oggetto riferimento conteggio per gli oggetti aggregati e non aggregati. Se l'oggetto non viene aggregato e posiziona il puntatore per l'outer unknown se l'oggetto da aggregare contiene il numero di riferimento di oggetto. Per gli oggetti aggregati, `CComObjectRootEx` metodi possono essere utilizzati per gestire l'errore dell'oggetto interno per costruire e per proteggere l'oggetto esterno dall'eliminazione quando vengono rilasciate le interfacce interne o l'oggetto interno viene eliminato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
## <a name="see-also"></a>Vedere anche  
 [Membri della classe CComObjectRootEx](http://msdn.microsoft.com/en-us/e3ce9c3d-9c8e-4fe5-b682-8e56740a0164)   
 [Classe CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md)   
 [Classe CComAggObject](../../atl/reference/ccomaggobject-class.md)   
 [CComObject (classe)](../../atl/reference/ccomobject-class.md)   
 [CComPolyObject (classe)](../../atl/reference/ccompolyobject-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

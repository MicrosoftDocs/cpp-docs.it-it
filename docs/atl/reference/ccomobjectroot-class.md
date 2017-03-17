---
title: Classe CComObjectRoot | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CComObjectRoot
- atlcom/ATL::CComObjectRoot
dev_langs:
- C++
helpviewer_keywords:
- CComObjectRoot class
ms.assetid: f8797c38-6e73-4f67-85c2-71654cffa8eb
caps.latest.revision: 17
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
translationtype: Machine Translation
ms.sourcegitcommit: 31295a07704e272799398aa82c6a9f0bbac17717
ms.openlocfilehash: 34653d55091a8e872f075010a0ef7cecbb3484c8
ms.lasthandoff: 02/24/2017

---
# <a name="ccomobjectroot-class"></a>CComObjectRoot (classe)
Questo typedef di [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md) creato predefinito del server del modello di threading.  
  
## <a name="syntax"></a>Sintassi  
  
```
typedef CComObjectRootEx<CComObjectThreadModel> CComObjectRoot;
```  
  
## <a name="remarks"></a>Note  
 `CComObjectRoot`è un `typedef` di [CComObjectRootEx](../../atl/reference/ccomobjectrootex-class.md) creato predefinito del server del modello di threading. In questo modo [CComObjectThreadModel](atl-typedefs.md#ccomobjectthreadmodel) farà riferimento a una [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) o [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md).  
  
 `CComObjectRootEx`gestione oggetto riferimento conteggio per gli oggetti aggregati e non aggregati. Contiene il conteggio dei riferimenti oggetto se l'oggetto non aggregato e posiziona il puntatore per l'outer unknown se l'oggetto aggregato. Per gli oggetti aggregati, `CComObjectRootEx` metodi possono essere utilizzati per gestire gli errori dell'oggetto interno per costruire e per proteggere l'oggetto esterno dall'eliminazione quando vengono rilasciate le interfacce interne o oggetto interno sia stato eliminato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  
  
## <a name="see-also"></a>Vedere anche  
 [Membri della classe CComObjectRootEx](http://msdn.microsoft.com/en-us/e3ce9c3d-9c8e-4fe5-b682-8e56740a0164)   
 [CComObjectRootEx (classe)](../../atl/reference/ccomobjectrootex-class.md)   
 [Classe CComAggObject](../../atl/reference/ccomaggobject-class.md)   
 [CComObject (classe)](../../atl/reference/ccomobject-class.md)   
 [CComPolyObject (classe)](../../atl/reference/ccompolyobject-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)


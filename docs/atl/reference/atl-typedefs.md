---
title: TypeDef ATL | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atlcore/ATL::_ATL_BASE_MODULE
- atlbase/ATL::_ATL_COM_MODULE
- atlbase/ATL::_ATL_MODULE
- atlbase/ATL::_ATL_WIN_MODULE
- atlutil/ATL::ATL_URL_PORT
- atlbase/ATL::CComDispatchDriver
- atlbase/ATL::CComGlobalsThreadModel
- atlbase/ATL::CComObjectThreadModel
- atlwin/ATL::CContainedWindow
- atlpath/ATL::CPath
- atlpath/ATL::CPathA
- atlpath/ATL::CPathW
- " atlsimpcoll/ATL::CSimpleValArray"
- " atlutil/ATL::LPCURL"
- atlbase/ATL::DefaultThreadTraits
- atlutil/ATL::LPURL
dev_langs:
- C++
helpviewer_keywords:
- typedefs, ATL
- typedefs
- ATL, typedefs
ms.assetid: 7dd05baa-3efb-4e3b-af23-793c610f4560
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: fb730faae0b70b840b637dc54a9f7b636f1d7a6e
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="atl-typedefs"></a>TypeDef ATL
Active Template Library include i seguenti typedef.  
  
|||  
|-|-|  
|[_ATL_BASE_MODULE](#_atl_base_module)|Definito come un typedef basato su [_ATL_BASE_MODULE70](../../atl/reference/atl-base-module70-structure.md).|  
|[_ATL_COM_MODULE](#_atl_com_module)|Definito come un typedef basato su [_ATL_COM_MODULE70](../../atl/reference/atl-com-module70-structure.md).|  
|[_ATL_MODULE](#_atl_module)|Definito come un typedef basato su [_ATL_MODULE70](../../atl/reference/atl-module70-structure.md).|  
|[_ATL_WIN_MODULE](#_atl_win_module)|Definito come un typedef basato [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md)|  
|[ATL_URL_PORT](#atl_url_port)|Il tipo utilizzato dal [CUrl](../../atl/reference/curl-class.md) per specificare un numero di porta.|  
|[CComDispatchDriver](#ccomdispatchdriver)|Questa classe gestisce i puntatori a interfaccia COM.|  
|[CComGlobalsThreadModel](#ccomglobalsthreadmodel)|Chiama i metodi del modello, indipendentemente dal modello di threading in uso di thread appropriato.|  
|[CComObjectThreadModel](#ccomobjectthreadmodel)|Chiama i metodi del modello, indipendentemente dal modello di threading in uso di thread appropriato.|  
|[CContainedWindow](#ccontainedwindow)|Questa classe è una specializzazione di **CContainedWindowT.**|  
|[CPath](#cpath)|Una specializzazione di [CPathT](../../atl/reference/cpatht-class.md) utilizzando `CString`.|  
|[CPathA](#cpatha)|Una specializzazione di [CPathT](../../atl/reference/cpatht-class.md) utilizzando `CStringA`.|  
|[CPathW](#cpathw)|Una specializzazione di [CPathT](../../atl/reference/cpatht-class.md) utilizzando `CStringW`.|  
|[CSimpleValArray](#csimplevalarray)|Rappresenta una matrice per l'archiviazione di tipi semplici.|  
|[DefaultThreadTraits](#defaultthreadtraits)|La classe di tratti thread predefinita.|  
|[LPCURL](#lpcurl)|Un puntatore a una costante [CUrl](../../atl/reference/curl-class.md) oggetto.|  
|[LPURL](#lpurl)|Un puntatore a un [CUrl](../../atl/reference/curl-class.md) oggetto.|  
  
##  <a name="_atl_base_module"></a>  _ATL_BASE_MODULE  
 Definito come un typedef basato su _ATL_BASE_MODULE70.  
  
```   
typedef ATL::_ATL_BASE_MODULE70 _ATL_BASE_MODULE;   
```  
  
### <a name="remarks"></a>Note  
 Utilizzata in tutti i progetti ATL. In base a [_ATL_BASE_MODULE70](../../atl/reference/atl-base-module70-structure.md).  
  
 Le classi che fanno parte delle classi ATL 7.0 modulo derivano dalla struttura _ATL_BASE_MODULE.  Per ulteriori informazioni sulle classi di modulo ATL, vedere [classi moduli COM](../../atl/com-modules-classes.md).  

## <a name="requirements"></a>Requisiti
**Intestazione:** atlcore

##  <a name="_atl_com_module"></a>  _ATL_COM_MODULE  
 Definito come un typedef basato su _ATL_COM_MODULE70.  
  
```   
typedef ATL::_ATL_COM_MODULE70 _ATL_COM_MODULE;   
```  
  
### <a name="remarks"></a>Note  
 Utilizzato da ATL (progetti) che usano funzionalità COM. In base a [_ATL_COM_MODULE70](../../atl/reference/atl-com-module70-structure.md).  

## <a name="requirements"></a>Requisiti
**Intestazione:** atlbase. h
  
##  <a name="_atl_module"></a>  _ATL_MODULE  
 Definito come un typedef basato su _ATL_MODULE70.  
  
```   
typedef ATL::_ATL_MODULE70 _ATL_MODULE;   
```  
## <a name="requirements"></a>Requisiti
**Intestazione:** 
  
### <a name="remarks"></a>Note  
 In base a [_ATL_MODULE70](../../atl/reference/atl-module70-structure.md).  
  
##  <a name="_atl_win_module"></a>  _ATL_WIN_MODULE  
 Definito come un typedef basato su _ATL_WIN_MODULE70.  
  
```   
typedef ATL::_ATL_WIN_MODULE70 _ATL_WIN_MODULE; 
 
```  
  
### <a name="remarks"></a>Note  
 Utilizzato da qualsiasi ATL (progetti) che usano funzionalità di windowing. In base a [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md).  

## <a name="requirements"></a>Requisiti
**Intestazione:** atlbase. h 
  
##  <a name="atl_url_port"></a>  ATL_URL_PORT 
  Il tipo utilizzato dal [CUrl](curl-class.md) per specificare un numero di porta.
```  
typedef WORD ATL_URL_PORT;
```  

## <a name="requirements"></a>Requisiti
**Intestazione:** atlutil. h

##  <a name="ccomdispatchdriver"></a>  CComDispatchDriver  
 Questa classe gestisce i puntatori a interfaccia COM.  
  
```   
typedef CComQIPtr<IDispatch, &__uuidof(IDispatch)> CComDispatchDriver;   
```  
## <a name="requirements"></a>Requisiti
**Intestazione:** atlbase. h
  
##  <a name="ccomglobalsthreadmodel"></a>  CComGlobalsThreadModel  
 Chiama i metodi del modello, indipendentemente dal modello di threading in uso di thread appropriato.  
  
```   
#if defined(_ATL_SINGLE_THREADED)  
typedef CComSingleThreadModel CComGlobalsThreadModel;  
#elif defined(_ATL_APARTMENT_THREADED)  
typedef CComMultiThreadModel CComGlobalsThreadModel;  
#elif defined(_ATL_FREE_THREADED)  
typedef CComMultiThreadModel CComGlobalsThreadModel;  
#else  
#pragma message ("No global threading model defined")  
#endif   
```  
  
### <a name="remarks"></a>Note  
 A seconda del modello di threading utilizzato dall'applicazione, il `typedef` nome `CComGlobalsThreadModel` fa riferimento a uno [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) o [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md). Queste classi forniscono ulteriori `typedef` nomi per fare riferimento a una classe di sezione critica.  
  
> [!NOTE]
> `CComGlobalsThreadModel` non fa riferimento a classe [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md).  
  
 Utilizzando `CComGlobalsThreadModel` consente di specificare una determinata classe di modello di threading. Indipendentemente dal modello di threading in uso, verranno chiamati i metodi appropriati.  
  
 Oltre a `CComGlobalsThreadModel`, ATL fornisce il `typedef` nome [CComObjectThreadModel](#ccomobjectthreadmodel). La classe a cui fa riferimento ogni `typedef` dipende dal modello di threading utilizzato, come illustrato nella tabella seguente:  
  
|typedef|Threading singolo|Modello di threading apartment|Modello di threading Free|  
|-------------|----------------------|-------------------------|--------------------|  
|`CComObjectThreadModel`|S|S|M|  
|`CComGlobalsThreadModel`|S|M|M|  
  
 S = `CComSingleThreadModel`; M = `CComMultiThreadModel`  
  
 Utilizzare `CComObjectThreadModel` all'interno di una classe di oggetto singolo. Utilizzare `CComGlobalsThreadModel` in un oggetto che è disponibile a livello globale per il programma, o quando si desidera proteggere le risorse del modulo tra più thread.  

## <a name="requirements"></a>Requisiti
**Intestazione:** atlbase. h
  
##  <a name="ccomobjectthreadmodel"></a>  CComObjectThreadModel  
 Chiama i metodi del modello, indipendentemente dal modello di threading in uso di thread appropriato.  
  
```   
#if defined(_ATL_SINGLE_THREADED)  
typedef CComSingleThreadModel CComObjectThreadModel;  
#elif defined(_ATL_APARTMENT_THREADED)  
typedef CComSingleThreadModel CComObjectThreadModel;  
#elif defined(_ATL_FREE_THREADED)  
typedef CComMultiThreadModel CComObjectThreadModel;  
#else  
#pragma message ("No global threading model defined")  
#endif   
```  
  
### <a name="remarks"></a>Note  
 A seconda del modello di threading utilizzato dall'applicazione, il `typedef` nome `CComObjectThreadModel` fa riferimento a uno [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) o [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md). Queste classi forniscono ulteriori `typedef` nomi per fare riferimento a una classe di sezione critica.  
  
> [!NOTE]
> `CComObjectThreadModel` non fa riferimento a classe [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md).  
  
 Utilizzando `CComObjectThreadModel` consente di specificare una determinata classe di modello di threading. Indipendentemente dal modello di threading in uso, verranno chiamati i metodi appropriati.  
  
 Oltre a `CComObjectThreadModel`, ATL fornisce il `typedef` nome [CComGlobalsThreadModel](#ccomglobalsthreadmodel). La classe a cui fa riferimento ogni `typedef` dipende dal modello di threading utilizzato, come illustrato nella tabella seguente:  
  
|typedef|Threading singolo|Modello di threading apartment|Modello di threading Free|  
|-------------|----------------------|-------------------------|--------------------|  
|`CComObjectThreadModel`|S|S|M|  
|`CComGlobalsThreadModel`|S|M|M|  
  
 S = `CComSingleThreadModel`; M = `CComMultiThreadModel`  
  
 Utilizzare `CComObjectThreadModel` all'interno di una classe di oggetto singolo. Utilizzare `CComGlobalsThreadModel` in un oggetto che è disponibile a livello globale per il programma, o quando si desidera proteggere le risorse del modulo tra più thread.  

## <a name="requirements"></a>Requisiti
**Intestazione:** atlbase. h
  
##  <a name="ccontainedwindow"></a>  CContainedWindow  
 Questa classe è una specializzazione di **CContainedWindowT.**  
  
```   
typedef CContainedWindowT<CWindow> CContainedWindow;   
```  

## <a name="requirements"></a>Requisiti
**Intestazione:** atlwin. h
  
### <a name="remarks"></a>Note  
 `CContainedWindow` rappresenta una specializzazione dello [CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md). Se si desidera modificare la classe base o tratti, utilizzare `CContainedWindowT` direttamente.  
  
##  <a name="cpath"></a>  CPath  
 Una specializzazione di [CPathT](../../atl/reference/cpatht-class.md) utilizzando `CString`.  
  
```   
typedef CPathT<CString> CPath;   
```  

## <a name="requirements"></a>Requisiti
**Intestazione:** atlpath. h
  
##  <a name="cpatha"></a>  CPathA  
 Una specializzazione di [CPathT](../../atl/reference/cpatht-class.md) utilizzando `CStringA`.  
  
```   
typedef CPathT<CStringA> CPathA;   
```

## <a name="requirements"></a>Requisiti
**Intestazione:** atlpath. h  
  
##  <a name="cpathw"></a>  CPathW  
 Una specializzazione di [CPathT](../../atl/reference/cpatht-class.md) utilizzando `CStringW`.  
  
```   
typedef ATL::CPathT<CStringW> CPathW;   
```  
## <a name="requirements"></a>Requisiti
**Intestazione:** atlpath. h
  
##  <a name="csimplevalarray"></a>  CSimpleValArray  
 Rappresenta una matrice per l'archiviazione di tipi semplici.  
  
```   
#define CSimpleValArray CSimpleArray   
```  

  
### <a name="remarks"></a>Note  
 `CSimpleValArray` viene fornito per la creazione e gestione di matrici che contengono tipi di dati semplici. È un semplice #define di [CSimpleArray](../../atl/reference/csimplearray-class.md).  


## <a name="requirements"></a>Requisiti
**Intestazione:** atlsimpcoll. h
  
##  <a name="lpcurl"></a>  LPCURL  
 Un puntatore a una costante [CUrl](../../atl/reference/curl-class.md) oggetto.  
  
```   
typedef const CUrl* LPCURL;   
```  

## <a name="requirements"></a>Requisiti
**Intestazione:** atlutil. h

##  <a name="defaultthreadtraits"></a>  DefaultThreadTraits
La classe di tratti thread predefinita.

### <a name="syntax"></a>Sintassi
```  
      #if defined(_MT)  
   typedef CRTThreadTraits DefaultThreadTraits;  
#else  
   typedef Win32ThreadTraits DefaultThreadTraits;  
#endif  
```

## <a name="remarks"></a>Note
Se il progetto corrente utilizza la libreria CRT con multithreading, DefaultThreadTraits è definito come CRTThreadTraits. In caso contrario, viene utilizzato Win32ThreadTraits.


## <a name="requirements"></a>Requisiti
**Intestazione:** atlbase. h
  
##  <a name="lpurl"></a>  LPURL  
 Un puntatore a un [CUrl](../../atl/reference/curl-class.md) oggetto.  
  
```   
typedef CUrl* LPURL;   
```  

## <a name="requirements"></a>Requisiti
**Intestazione:** atlutil. h


## <a name="see-also"></a>Vedere anche  
 [Componenti COM Desktop ATL](../../atl/atl-com-desktop-components.md)   
 [Funzioni](../../atl/reference/atl-functions.md)   
 [Global Variables](../../atl/reference/atl-global-variables.md)  (Variabili globali)  
 [Strutture](../../atl/reference/atl-structures.md)   
 [Macro](../../atl/reference/atl-macros.md)   
 [Classi](../../atl/reference/atl-classes.md)
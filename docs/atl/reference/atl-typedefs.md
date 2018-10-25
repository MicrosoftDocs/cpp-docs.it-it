---
title: TypeDef ATL | Microsoft Docs
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
ms.openlocfilehash: 9835b8cadb5a24aea130b1e32d919ebb49d20293
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50065696"
---
# <a name="atl-typedefs"></a>TypeDef ATL

Active Template Library include i seguenti typedef.

|||
|-|-|
|[_ATL_BASE_MODULE](#_atl_base_module)|Definito come un typedef basato [_ATL_BASE_MODULE70](../../atl/reference/atl-base-module70-structure.md).|
|[_ATL_COM_MODULE](#_atl_com_module)|Definito come un typedef basato [_ATL_COM_MODULE70](../../atl/reference/atl-com-module70-structure.md).|
|[_ATL_MODULE](#_atl_module)|Definito come un typedef basato [_ATL_MODULE70](../../atl/reference/atl-module70-structure.md).|
|[_ATL_WIN_MODULE](#_atl_win_module)|Definito come un typedef basato [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md)|
|[ATL_URL_PORT](#atl_url_port)|Il tipo usato dal [CUrl](../../atl/reference/curl-class.md) per specificare un numero di porta.|
|[CComDispatchDriver](#ccomdispatchdriver)|Questa classe gestisce puntatori a interfaccia COM.|
|[CComGlobalsThreadModel](#ccomglobalsthreadmodel)|Chiama i metodi di modello, indipendentemente dal modello di threading utilizzato thread appropriato.|
|[CComObjectThreadModel](#ccomobjectthreadmodel)|Chiama i metodi di modello, indipendentemente dal modello di threading utilizzato thread appropriato.|
|[CContainedWindow](#ccontainedwindow)|Questa classe è una specializzazione di `CContainedWindowT`.|
|[CPath](#cpath)|Una specializzazione dello [CPathT](../../atl/reference/cpatht-class.md) usando `CString`.|
|[CPathA](#cpatha)|Una specializzazione dello [CPathT](../../atl/reference/cpatht-class.md) usando `CStringA`.|
|[CPathW](#cpathw)|Una specializzazione dello [CPathT](../../atl/reference/cpatht-class.md) usando `CStringW`.|
|[CSimpleValArray](#csimplevalarray)|Rappresenta una matrice per l'archiviazione dei tipi semplici.|
|[DefaultThreadTraits](#defaultthreadtraits)|Classe traits thread predefinita.|
|[LPCURL](#lpcurl)|Un puntatore a una costante [CUrl](../../atl/reference/curl-class.md) oggetto.|
|[LPURL](#lpurl)|Un puntatore a un [CUrl](../../atl/reference/curl-class.md) oggetto.|

##  <a name="_atl_base_module"></a>  _ATL_BASE_MODULE

Definito come un typedef basato _ATL_BASE_MODULE70.

```
typedef ATL::_ATL_BASE_MODULE70 _ATL_BASE_MODULE;
```

### <a name="remarks"></a>Note

Utilizzato in tutti i progetti ATL. In base [_ATL_BASE_MODULE70](../../atl/reference/atl-base-module70-structure.md).

Le classi che fanno parte delle classi di modulo ATL 7.0 derivare dalla struttura _ATL_BASE_MODULE.  Per altre informazioni sulle classi di modulo ATL, consultare [classi dei moduli COM](../../atl/com-modules-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore

##  <a name="_atl_com_module"></a>  _ATL_COM_MODULE

Definito come un typedef basato _ATL_COM_MODULE70.

```
typedef ATL::_ATL_COM_MODULE70 _ATL_COM_MODULE;
```

### <a name="remarks"></a>Note

Utilizzato dai progetti ATL che usano funzionalità COM. In base [_ATL_COM_MODULE70](../../atl/reference/atl-com-module70-structure.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="_atl_module"></a>  _ATL_MODULE

Definito come un typedef basato _ATL_MODULE70.

```
typedef ATL::_ATL_MODULE70 _ATL_MODULE;
```

## <a name="requirements"></a>Requisiti

**Intestazione:**

### <a name="remarks"></a>Note

In base [_ATL_MODULE70](../../atl/reference/atl-module70-structure.md).

##  <a name="_atl_win_module"></a>  _ATL_WIN_MODULE

Definito come un typedef basato _ATL_WIN_MODULE70.

```
typedef ATL::_ATL_WIN_MODULE70 _ATL_WIN_MODULE;
```

### <a name="remarks"></a>Note

Utilizzato da tutti i progetti ATL che usano funzionalità di windowing. In base [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="atl_url_port"></a>  ATL_URL_PORT

Il tipo usato dal [CUrl](curl-class.md) per specificare un numero di porta.

```
typedef WORD ATL_URL_PORT;
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil. h

##  <a name="ccomdispatchdriver"></a>  CComDispatchDriver

Questa classe gestisce puntatori a interfaccia COM.

```
typedef CComQIPtr<IDispatch, &__uuidof(IDispatch)> CComDispatchDriver;
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="ccomglobalsthreadmodel"></a>  CComGlobalsThreadModel

Chiama i metodi di modello, indipendentemente dal modello di threading utilizzato thread appropriato.

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

A seconda del modello di threading usato dall'applicazione, il **typedef** name `CComGlobalsThreadModel` si riferisce a [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) o [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md). Queste classi forniscono ulteriori `typedef` i nomi di fare riferimento a una classe di sezione critica.

> [!NOTE]
> `CComGlobalsThreadModel` non fa riferimento a classi [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md).

Usando `CComGlobalsThreadModel` libera è dall'impostazione di una classe di modello di threading particolare. Indipendentemente dal modello di threading in uso, verranno chiamati i metodi appropriati.

Oltre a `CComGlobalsThreadModel`, ATL fornisce il **typedef** name [CComObjectThreadModel](#ccomobjectthreadmodel). La classe fa riferimento ognuno `typedef` dipende dal modello di threading utilizzato, come illustrato nella tabella seguente:

|typedef|Single threading|Threading apartment|Modello di threading Free|
|-------------|----------------------|-------------------------|--------------------|
|`CComObjectThreadModel`|S|S|M|
|`CComGlobalsThreadModel`|S|M|M|

S = `CComSingleThreadModel`; M = `CComMultiThreadModel`

Usare `CComObjectThreadModel` all'interno di una classe di oggetto singolo. Usare `CComGlobalsThreadModel` in un oggetto che è disponibile a livello globale per il programma, o quando si desidera proteggere le risorse di modulo in più thread.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="ccomobjectthreadmodel"></a>  CComObjectThreadModel

Chiama i metodi di modello, indipendentemente dal modello di threading utilizzato thread appropriato.

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

A seconda del modello di threading usato dall'applicazione, il `typedef` name `CComObjectThreadModel` fa riferimento a uno [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) oppure [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md). Queste classi forniscono ulteriori `typedef` i nomi di fare riferimento a una classe di sezione critica.

> [!NOTE]
> `CComObjectThreadModel` non fa riferimento a classi [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md).

Usando `CComObjectThreadModel` libera è dall'impostazione di una classe di modello di threading particolare. Indipendentemente dal modello di threading in uso, verranno chiamati i metodi appropriati.

Oltre a `CComObjectThreadModel`, ATL fornisce il **typedef** name [CComGlobalsThreadModel](#ccomglobalsthreadmodel). La classe fa riferimento ognuno **typedef** dipende dal modello di threading utilizzato, come illustrato nella tabella seguente:

|typedef|Single threading|Threading apartment|Modello di threading Free|
|-------------|----------------------|-------------------------|--------------------|
|`CComObjectThreadModel`|S|S|M|
|`CComGlobalsThreadModel`|S|M|M|

S = `CComSingleThreadModel`; M = `CComMultiThreadModel`

Usare `CComObjectThreadModel` all'interno di una classe di oggetto singolo. Usare `CComGlobalsThreadModel` in un oggetto che può essere disponibile a livello globale per il programma, o quando si desidera proteggere le risorse di modulo in più thread.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="ccontainedwindow"></a>  CContainedWindow

Questa classe è una specializzazione di `CContainedWindowT`.

```
typedef CContainedWindowT<CWindow> CContainedWindow;
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

### <a name="remarks"></a>Note

`CContainedWindow` rappresenta una specializzazione dello [CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md). Se si desidera modificare la classe di base o traits, usare `CContainedWindowT` direttamente.

##  <a name="cpath"></a>  CPath

Una specializzazione dello [CPathT](../../atl/reference/cpatht-class.md) usando `CString`.

```
typedef CPathT<CString> CPath;
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atlpath. h

##  <a name="cpatha"></a>  CPathA

Una specializzazione dello [CPathT](../../atl/reference/cpatht-class.md) usando `CStringA`.

```
typedef CPathT<CStringA> CPathA;
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atlpath. h

##  <a name="cpathw"></a>  CPathW

Una specializzazione dello [CPathT](../../atl/reference/cpatht-class.md) usando `CStringW`.

```
typedef ATL::CPathT<CStringW> CPathW;
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atlpath. h

##  <a name="csimplevalarray"></a>  CSimpleValArray

Rappresenta una matrice per l'archiviazione dei tipi semplici.

```
#define CSimpleValArray CSimpleArray
```

### <a name="remarks"></a>Note

`CSimpleValArray` viene fornito per la creazione e la gestione di matrici che contengono tipi di dati semplici. È una semplice #define dei [CSimpleArray](../../atl/reference/csimplearray-class.md).

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

Classe traits thread predefinita.

### <a name="syntax"></a>Sintassi

```
#if defined(_MT)
   typedef CRTThreadTraits DefaultThreadTraits;
#else
   typedef Win32ThreadTraits DefaultThreadTraits;
#endif
```

## <a name="remarks"></a>Note

Se il progetto corrente Usa la libreria CRT a thread multipli, DefaultThreadTraits viene definito come CRTThreadTraits. In caso contrario, viene usato Win32ThreadTraits.

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

[Componenti Desktop COM ATL](../../atl/atl-com-desktop-components.md)<br/>
[Funzioni](../../atl/reference/atl-functions.md)<br/>
[Variabili globali](../../atl/reference/atl-global-variables.md)<br/>
[Classi e struct](../../atl/reference/atl-classes.md)<br/>
[Macro](../../atl/reference/atl-macros.md)

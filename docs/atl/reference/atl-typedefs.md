---
description: 'Altre informazioni su: typedef ATL'
title: Typedef ATL
ms.date: 11/04/2016
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
helpviewer_keywords:
- typedefs, ATL
- typedefs
- ATL, typedefs
ms.assetid: 7dd05baa-3efb-4e3b-af23-793c610f4560
ms.openlocfilehash: cb243ef3d16689a1a0ddeb81d3de0bb4ec234a9c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97158647"
---
# <a name="atl-typedefs"></a>Typedef ATL

Il Active Template Library include i typedef seguenti.

|Typedef|Descrizione|
|-|-|
|[_ATL_BASE_MODULE](#_atl_base_module)|Definito come typedef basato su [_ATL_BASE_MODULE70](../../atl/reference/atl-base-module70-structure.md).|
|[_ATL_COM_MODULE](#_atl_com_module)|Definito come typedef basato su [_ATL_COM_MODULE70](../../atl/reference/atl-com-module70-structure.md).|
|[_ATL_MODULE](#_atl_module)|Definito come typedef basato su [_ATL_MODULE70](../../atl/reference/atl-module70-structure.md).|
|[_ATL_WIN_MODULE](#_atl_win_module)|Definito come typedef basato su [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md)|
|[ATL_URL_PORT](#atl_url_port)|Tipo usato da [curl](../../atl/reference/curl-class.md) per specificare un numero di porta.|
|[CComDispatchDriver](#ccomdispatchdriver)|Questa classe gestisce i puntatori di interfaccia COM.|
|[CComGlobalsThreadModel](#ccomglobalsthreadmodel)|Chiama i metodi del modello di thread appropriato, indipendentemente dal modello di threading utilizzato.|
|[CComObjectThreadModel](#ccomobjectthreadmodel)|Chiama i metodi del modello di thread appropriato, indipendentemente dal modello di threading utilizzato.|
|[CContainedWindow](#ccontainedwindow)|Questa classe è una specializzazione di `CContainedWindowT` .|
|[CPath](#cpath)|Una specializzazione di [CPathT](../../atl/reference/cpatht-class.md) con `CString` .|
|[CPathA](#cpatha)|Una specializzazione di [CPathT](../../atl/reference/cpatht-class.md) con `CStringA` .|
|[CPathW](#cpathw)|Una specializzazione di [CPathT](../../atl/reference/cpatht-class.md) con `CStringW` .|
|[CSimpleValArray](#csimplevalarray)|Rappresenta una matrice per l'archiviazione di tipi semplici.|
|[DefaultThreadTraits](#defaultthreadtraits)|Classe dei tratti di thread predefinita.|
|[LPCURL](#lpcurl)|Puntatore a un oggetto [curl](../../atl/reference/curl-class.md) costante.|
|[LPURL](#lpurl)|Puntatore a un oggetto [curl](../../atl/reference/curl-class.md) .|

## <a name="_atl_base_module"></a><a name="_atl_base_module"></a> _ATL_BASE_MODULE

Definito come typedef basato su _ATL_BASE_MODULE70.

```cpp
typedef ATL::_ATL_BASE_MODULE70 _ATL_BASE_MODULE;
```

### <a name="remarks"></a>Commenti

Utilizzato in ogni progetto ATL. Basato su [_ATL_BASE_MODULE70](../../atl/reference/atl-base-module70-structure.md).

Le classi che fanno parte delle classi del modulo ATL 7,0 derivano dalla struttura _ATL_BASE_MODULE.  Per ulteriori informazioni sulle classi del modulo ATL, fare riferimento alle [classi dei moduli com](../../atl/com-modules-classes.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlcore. h

## <a name="_atl_com_module"></a><a name="_atl_com_module"></a> _ATL_COM_MODULE

Definito come typedef basato su _ATL_COM_MODULE70.

```cpp
typedef ATL::_ATL_COM_MODULE70 _ATL_COM_MODULE;
```

### <a name="remarks"></a>Commenti

Utilizzato dai progetti ATL che utilizzano le funzionalità COM. Basato su [_ATL_COM_MODULE70](../../atl/reference/atl-com-module70-structure.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="_atl_module"></a><a name="_atl_module"></a> _ATL_MODULE

Definito come typedef basato su _ATL_MODULE70.

```cpp
typedef ATL::_ATL_MODULE70 _ATL_MODULE;
```

### <a name="requirements"></a>Requisiti

**Intestazione**

### <a name="remarks"></a>Commenti

Basato su [_ATL_MODULE70](../../atl/reference/atl-module70-structure.md).

## <a name="_atl_win_module"></a><a name="_atl_win_module"></a> _ATL_WIN_MODULE

Definito come typedef basato su _ATL_WIN_MODULE70.

```cpp
typedef ATL::_ATL_WIN_MODULE70 _ATL_WIN_MODULE;
```

### <a name="remarks"></a>Commenti

Utilizzato da qualsiasi progetto ATL che utilizza le funzionalità di windowing. Basato su [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="atl_url_port"></a><a name="atl_url_port"></a> ATL_URL_PORT

Tipo usato da [curl](curl-class.md) per specificare un numero di porta.

```cpp
typedef WORD ATL_URL_PORT;
```

### <a name="requirements"></a>Requisiti

**Intestazione:** atlutil. h

## <a name="ccomdispatchdriver"></a><a name="ccomdispatchdriver"></a> CComDispatchDriver

Questa classe gestisce i puntatori di interfaccia COM.

```cpp
typedef CComQIPtr<IDispatch, &__uuidof(IDispatch)> CComDispatchDriver;
```

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="ccomglobalsthreadmodel"></a><a name="ccomglobalsthreadmodel"></a> CComGlobalsThreadModel

Chiama i metodi del modello di thread appropriato, indipendentemente dal modello di threading utilizzato.

```cpp
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

### <a name="remarks"></a>Commenti

A seconda del modello di threading utilizzato dall'applicazione, il **`typedef`** nome `CComGlobalsThreadModel` fa riferimento a [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) o [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md). Queste classi forniscono **`typedef`** nomi aggiuntivi per fare riferimento a una classe di sezione critica.

> [!NOTE]
> `CComGlobalsThreadModel` non fa riferimento alla classe [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md).

`CComGlobalsThreadModel`L'utilizzo di consente di specificare una particolare classe del modello di Threading. Indipendentemente dal modello di threading utilizzato, verranno chiamati i metodi appropriati.

In aggiunta a `CComGlobalsThreadModel` , ATL fornisce il **`typedef`** nome [CComObjectThreadModel](#ccomobjectthreadmodel). La classe a cui fa riferimento ogni oggetto **`typedef`** dipende dal modello di threading utilizzato, come illustrato nella tabella seguente:

|typedef|Thread singolo|Threading Apartment|Threading libero|
|-------------|----------------------|-------------------------|--------------------|
|`CComObjectThreadModel`|S|S|M|
|`CComGlobalsThreadModel`|S|M|M|

S = `CComSingleThreadModel` ; M = `CComMultiThreadModel`

`CComObjectThreadModel`Da usare all'interno di una singola classe di oggetti. Usare `CComGlobalsThreadModel` in un oggetto disponibile a livello globale per il programma o quando si vuole proteggere le risorse del modulo tra più thread.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="ccomobjectthreadmodel"></a><a name="ccomobjectthreadmodel"></a> CComObjectThreadModel

Chiama i metodi del modello di thread appropriato, indipendentemente dal modello di threading utilizzato.

```cpp
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

### <a name="remarks"></a>Commenti

A seconda del modello di threading utilizzato dall'applicazione, il **`typedef`** nome `CComObjectThreadModel` fa riferimento a [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) o [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md). Queste classi forniscono **`typedef`** nomi aggiuntivi per fare riferimento a una classe di sezione critica.

> [!NOTE]
> `CComObjectThreadModel` non fa riferimento alla classe [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md).

`CComObjectThreadModel`L'utilizzo di consente di specificare una particolare classe del modello di Threading. Indipendentemente dal modello di threading utilizzato, verranno chiamati i metodi appropriati.

In aggiunta a `CComObjectThreadModel` , ATL fornisce il **`typedef`** nome [CComGlobalsThreadModel](#ccomglobalsthreadmodel). La classe a cui fa riferimento ogni oggetto **`typedef`** dipende dal modello di threading utilizzato, come illustrato nella tabella seguente:

|typedef|Thread singolo|Threading Apartment|Threading libero|
|-------------|----------------------|-------------------------|--------------------|
|`CComObjectThreadModel`|S|S|M|
|`CComGlobalsThreadModel`|S|M|M|

S = `CComSingleThreadModel` ; M = `CComMultiThreadModel`

`CComObjectThreadModel`Da usare all'interno di una singola classe di oggetti. Usare `CComGlobalsThreadModel` in un oggetto disponibile a livello globale per il programma o quando si vuole proteggere le risorse del modulo tra più thread.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="ccontainedwindow"></a><a name="ccontainedwindow"></a> CContainedWindow

Questa classe è una specializzazione di `CContainedWindowT` .

```cpp
typedef CContainedWindowT<CWindow> CContainedWindow;
```

### <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

### <a name="remarks"></a>Commenti

`CContainedWindow` è una specializzazione di [CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md). Se si desidera modificare la classe di base o i tratti, utilizzare `CContainedWindowT` direttamente.

## <a name="cpath"></a><a name="cpath"></a> CPath

Una specializzazione di [CPathT](../../atl/reference/cpatht-class.md) con `CString` .

```cpp
typedef CPathT<CString> CPath;
```

### <a name="requirements"></a>Requisiti

**Intestazione:** atlpath. h

## <a name="cpatha"></a><a name="cpatha"></a> CPathA

Una specializzazione di [CPathT](../../atl/reference/cpatht-class.md) con `CStringA` .

```cpp
typedef CPathT<CStringA> CPathA;
```

### <a name="requirements"></a>Requisiti

**Intestazione:** atlpath. h

## <a name="cpathw"></a><a name="cpathw"></a> CPathW

Una specializzazione di [CPathT](../../atl/reference/cpatht-class.md) con `CStringW` .

```cpp
typedef ATL::CPathT<CStringW> CPathW;
```

### <a name="requirements"></a>Requisiti

**Intestazione:** atlpath. h

## <a name="csimplevalarray"></a><a name="csimplevalarray"></a> CSimpleValArray

Rappresenta una matrice per l'archiviazione di tipi semplici.

```cpp
#define CSimpleValArray CSimpleArray
```

### <a name="remarks"></a>Commenti

`CSimpleValArray` viene fornito per la creazione e la gestione di matrici contenenti tipi di dati semplici. Si tratta di una semplice #define di [CSimpleArray](../../atl/reference/csimplearray-class.md).

### <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpcoll. h

## <a name="lpcurl"></a><a name="lpcurl"></a> LPCURL

Puntatore a un oggetto [curl](../../atl/reference/curl-class.md) costante.

```cpp
typedef const CUrl* LPCURL;
```

### <a name="requirements"></a>Requisiti

**Intestazione:** atlutil. h

## <a name="defaultthreadtraits"></a><a name="defaultthreadtraits"></a> DefaultThreadTraits

Classe dei tratti di thread predefinita.

### <a name="syntax"></a>Sintassi

```cpp
#if defined(_MT)
   typedef CRTThreadTraits DefaultThreadTraits;
#else
   typedef Win32ThreadTraits DefaultThreadTraits;
#endif
```

## <a name="remarks"></a>Osservazioni

Se il progetto corrente usa la libreria CRT multithreading, DefaultThreadTraits viene definito come CRTThreadTraits. In caso contrario, viene usato Win32ThreadTraits.

### <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="lpurl"></a><a name="lpurl"></a> LPURL

Puntatore a un oggetto [curl](../../atl/reference/curl-class.md) .

```cpp
typedef CUrl* LPURL;
```

### <a name="requirements"></a>Requisiti

**Intestazione:** atlutil. h

## <a name="see-also"></a>Vedi anche

[Componenti Desktop COM ATL](../../atl/atl-com-desktop-components.md)<br/>
[Funzioni](../../atl/reference/atl-functions.md)<br/>
[Variabili globali](../../atl/reference/atl-global-variables.md)<br/>
[Classi e struct](../../atl/reference/atl-classes.md)<br/>
[Macro](../../atl/reference/atl-macros.md)

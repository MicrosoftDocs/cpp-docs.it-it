---
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
ms.openlocfilehash: 5548bee36ac52dbd6add31241714b0404289be45
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319188"
---
# <a name="atl-typedefs"></a>Typedef ATL

La libreria di modelli attivi include i seguenti typedef.

|||
|-|-|
|[_ATL_BASE_MODULE](#_atl_base_module)|Definito come typedef basato su [_ATL_BASE_MODULE70](../../atl/reference/atl-base-module70-structure.md).|
|[_ATL_COM_MODULE](#_atl_com_module)|Definito come typedef basato su [_ATL_COM_MODULE70](../../atl/reference/atl-com-module70-structure.md).|
|[_ATL_MODULE](#_atl_module)|Definito come typedef basato su [_ATL_MODULE70](../../atl/reference/atl-module70-structure.md).|
|[_ATL_WIN_MODULE](#_atl_win_module)|Definito come typedef basato su [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md)|
|[ATL_URL_PORT](#atl_url_port)|Tipo utilizzato da [CUrl](../../atl/reference/curl-class.md) per specificare un numero di porta.|
|[CComDispatchDriver](#ccomdispatchdriver)|Questa classe gestisce i puntatori a interfaccia COM.|
|[CComGlobalsThreadModel (modello CComGlobalsThreadModel)](#ccomglobalsthreadmodel)|Chiama i metodi del modello di thread appropriati, indipendentemente dal modello di threading in uso.|
|[CComObjectThreadModel](#ccomobjectthreadmodel)|Chiama i metodi del modello di thread appropriati, indipendentemente dal modello di threading in uso.|
|[CContainedWindow](#ccontainedwindow)|Questa classe è una `CContainedWindowT`specializzazione di .|
|[CPath (percorso dati)](#cpath)|Specializzazione di [CPathT](../../atl/reference/cpatht-class.md) utilizzando `CString`.|
|[CPathA](#cpatha)|Specializzazione di [CPathT](../../atl/reference/cpatht-class.md) utilizzando `CStringA`.|
|[CPathW](#cpathw)|Specializzazione di [CPathT](../../atl/reference/cpatht-class.md) utilizzando `CStringW`.|
|[CSimpleValArray](#csimplevalarray)|Rappresenta una matrice per l'archiviazione di tipi semplici.|
|[DefaultThreadTraits](#defaultthreadtraits)|Classe di tratti di filettatura predefinita.|
|[URL LPC](#lpcurl)|Puntatore a un oggetto [CUrl](../../atl/reference/curl-class.md) costante.|
|[LPURL](#lpurl)|Puntatore a un oggetto [CUrl.](../../atl/reference/curl-class.md)|

## <a name="_atl_base_module"></a><a name="_atl_base_module"></a>_ATL_BASE_MODULE

Definito come typedef basato su _ATL_BASE_MODULE70.

```
typedef ATL::_ATL_BASE_MODULE70 _ATL_BASE_MODULE;
```

### <a name="remarks"></a>Osservazioni

Utilizzato in ogni progetto ATL. Sulla base [di _ATL_BASE_MODULE70](../../atl/reference/atl-base-module70-structure.md).

Le classi che fanno parte delle classi di modulo ATL 7.0 derivano dalla struttura _ATL_BASE_MODULE.  Per ulteriori informazioni sulle classi di moduli ATL, fare riferimento a [Classi di moduli COM](../../atl/com-modules-classes.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore.h

## <a name="_atl_com_module"></a><a name="_atl_com_module"></a>_ATL_COM_MODULE

Definito come typedef basato su _ATL_COM_MODULE70.

```
typedef ATL::_ATL_COM_MODULE70 _ATL_COM_MODULE;
```

### <a name="remarks"></a>Osservazioni

Utilizzato dai progetti ATL che utilizzano funzionalità COM. Sulla base [di _ATL_COM_MODULE70](../../atl/reference/atl-com-module70-structure.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="_atl_module"></a><a name="_atl_module"></a>_ATL_MODULE

Definito come typedef basato su _ATL_MODULE70.

```
typedef ATL::_ATL_MODULE70 _ATL_MODULE;
```

## <a name="requirements"></a>Requisiti

**Intestazione:**

### <a name="remarks"></a>Osservazioni

Sulla base [di _ATL_MODULE70](../../atl/reference/atl-module70-structure.md).

## <a name="_atl_win_module"></a><a name="_atl_win_module"></a>_ATL_WIN_MODULE

Definito come typedef basato su _ATL_WIN_MODULE70.

```
typedef ATL::_ATL_WIN_MODULE70 _ATL_WIN_MODULE;
```

### <a name="remarks"></a>Osservazioni

Utilizzato da qualsiasi progetto ATL che utilizza le funzionalità di windowing. Sulla base [di _ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="atl_url_port"></a><a name="atl_url_port"></a>ATL_URL_PORT

Tipo utilizzato da [CUrl](curl-class.md) per specificare un numero di porta.

```
typedef WORD ATL_URL_PORT;
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil.h

## <a name="ccomdispatchdriver"></a><a name="ccomdispatchdriver"></a>CComDispatchDriver

Questa classe gestisce i puntatori a interfaccia COM.

```
typedef CComQIPtr<IDispatch, &__uuidof(IDispatch)> CComDispatchDriver;
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="ccomglobalsthreadmodel"></a><a name="ccomglobalsthreadmodel"></a>CComGlobalsThreadModel (modello CComGlobalsThreadModel)

Chiama i metodi del modello di thread appropriati, indipendentemente dal modello di threading in uso.

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

### <a name="remarks"></a>Osservazioni

A seconda del modello di threading utilizzato `CComGlobalsThreadModel` dall'applicazione, il nome **typedef** fa riferimento a [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) o [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md). Queste classi `typedef` forniscono nomi aggiuntivi per fare riferimento a una classe di sezione critica.

> [!NOTE]
> `CComGlobalsThreadModel`non fa riferimento alla classe [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md).

L'utilizzo `CComGlobalsThreadModel` consente di evitare di specificare una classe del modello di threading specifica. Indipendentemente dal modello di threading utilizzato, verranno chiamati i metodi appropriati.

Oltre a `CComGlobalsThreadModel`, ATL fornisce il nome **typedef** [CComObjectThreadModel](#ccomobjectthreadmodel). La classe a `typedef` cui fa riferimento ognuna dipende dal modello di threading utilizzato, come illustrato nella tabella seguente:The class referenced by each depends on the threading model used, as shown in the following table:

|typedef|Filettatura singola|Appartamento filettatura|Filettatura libera|
|-------------|----------------------|-------------------------|--------------------|
|`CComObjectThreadModel`|S|S|M|
|`CComGlobalsThreadModel`|S|M|M|

( `CComSingleThreadModel`) e così via, è stato possibile Operatore di ammortamento, la proprietà`CComMultiThreadModel`

Utilizzare `CComObjectThreadModel` all'interno di una singola classe di oggetti. Utilizzare `CComGlobalsThreadModel` in un oggetto disponibile a livello globale per il programma o quando si desidera proteggere le risorse del modulo tra più thread.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="ccomobjectthreadmodel"></a><a name="ccomobjectthreadmodel"></a>CComObjectThreadModel

Chiama i metodi del modello di thread appropriati, indipendentemente dal modello di threading in uso.

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

### <a name="remarks"></a>Osservazioni

A seconda del modello di threading `typedef` `CComObjectThreadModel` utilizzato dall'applicazione, il nome fa riferimento a [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) o [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md). Queste classi `typedef` forniscono nomi aggiuntivi per fare riferimento a una classe di sezione critica.

> [!NOTE]
> `CComObjectThreadModel`non fa riferimento alla classe [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md).

L'utilizzo `CComObjectThreadModel` consente di evitare di specificare una classe del modello di threading specifica. Indipendentemente dal modello di threading utilizzato, verranno chiamati i metodi appropriati.

Oltre a `CComObjectThreadModel`, ATL fornisce il nome **typedef** [CComGlobalsThreadModel](#ccomglobalsthreadmodel). La classe a cui fa riferimento ogni typedef dipende dal modello di threading utilizzato, come illustrato nella tabella seguente:The class referenced by each **typedef** depends on the threading model used, as shown in the following table:

|typedef|Filettatura singola|Appartamento filettatura|Filettatura libera|
|-------------|----------------------|-------------------------|--------------------|
|`CComObjectThreadModel`|S|S|M|
|`CComGlobalsThreadModel`|S|M|M|

( `CComSingleThreadModel`) e così via, è stato possibile Operatore di ammortamento, la proprietà`CComMultiThreadModel`

Utilizzare `CComObjectThreadModel` all'interno di una singola classe di oggetti. Utilizzare `CComGlobalsThreadModel` in un oggetto disponibile a livello globale per il programma o quando si desidera proteggere le risorse del modulo tra più thread.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="ccontainedwindow"></a><a name="ccontainedwindow"></a>CContainedWindow

Questa classe è una `CContainedWindowT`specializzazione di .

```
typedef CContainedWindowT<CWindow> CContainedWindow;
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin.h

### <a name="remarks"></a>Osservazioni

`CContainedWindow`è una specializzazione di [CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md). Se si desidera modificare la classe o `CContainedWindowT` i tratti di base, utilizzare direttamente.

## <a name="cpath"></a><a name="cpath"></a>CPath (percorso dati)

Specializzazione di [CPathT](../../atl/reference/cpatht-class.md) utilizzando `CString`.

```
typedef CPathT<CString> CPath;
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atlpath.h

## <a name="cpatha"></a><a name="cpatha"></a>CPathA

Specializzazione di [CPathT](../../atl/reference/cpatht-class.md) utilizzando `CStringA`.

```
typedef CPathT<CStringA> CPathA;
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atlpath.h

## <a name="cpathw"></a><a name="cpathw"></a>CPathW

Specializzazione di [CPathT](../../atl/reference/cpatht-class.md) utilizzando `CStringW`.

```
typedef ATL::CPathT<CStringW> CPathW;
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atlpath.h

## <a name="csimplevalarray"></a><a name="csimplevalarray"></a>CSimpleValArray

Rappresenta una matrice per l'archiviazione di tipi semplici.

```
#define CSimpleValArray CSimpleArray
```

### <a name="remarks"></a>Osservazioni

`CSimpleValArray`viene fornito per la creazione e la gestione di matrici contenenti tipi di dati semplici. Si tratta di un #define semplice di [CSimpleArray](../../atl/reference/csimplearray-class.md).

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsimpcoll.h

## <a name="lpcurl"></a><a name="lpcurl"></a>URL LPC

Puntatore a un oggetto [CUrl](../../atl/reference/curl-class.md) costante.

```
typedef const CUrl* LPCURL;
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil.h

## <a name="defaultthreadtraits"></a><a name="defaultthreadtraits"></a>DefaultThreadTraits

Classe di tratti di filettatura predefinita.

### <a name="syntax"></a>Sintassi

```
#if defined(_MT)
   typedef CRTThreadTraits DefaultThreadTraits;
#else
   typedef Win32ThreadTraits DefaultThreadTraits;
#endif
```

## <a name="remarks"></a>Osservazioni

Se il progetto corrente utilizza la libreria CRT con multithreading, DefaultThreadTraits viene definito come CRTThread Traits. In caso contrario, viene utilizzato Win32Thread Traits.Otherwise, Win32Thread Traits is used.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="lpurl"></a><a name="lpurl"></a>LPURL

Puntatore a un oggetto [CUrl.](../../atl/reference/curl-class.md)

```
typedef CUrl* LPURL;
```

## <a name="requirements"></a>Requisiti

**Intestazione:** atlutil.h

## <a name="see-also"></a>Vedere anche

[Componenti Desktop COM ATL](../../atl/atl-com-desktop-components.md)<br/>
[Funzioni](../../atl/reference/atl-functions.md)<br/>
[Variabili globali](../../atl/reference/atl-global-variables.md)<br/>
[Classi e struct](../../atl/reference/atl-classes.md)<br/>
[Macro](../../atl/reference/atl-macros.md)

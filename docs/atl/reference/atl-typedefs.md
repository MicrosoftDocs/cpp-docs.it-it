---
title: TypeDef ATL | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: 'index-page '
dev_langs:
- C++
helpviewer_keywords:
- typedefs, ATL
- typedefs
- ATL, typedefs
ms.assetid: 7dd05baa-3efb-4e3b-af23-793c610f4560
caps.latest.revision: 20
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 347e7bf7cd9173fb2815f44fc052ec23ab4055a6
ms.openlocfilehash: aa57212b602538e4e8d2854c6075562e72472796
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="atl-typedefs"></a>TypeDef ATL
Active Template Library include i seguenti typedef.  
  
|||  
|-|-|  
|[_ATL_BASE_MODULE](#_atl_base_module)|Definito come un typedef in base alle [_ATL_BASE_MODULE70](../../atl/reference/atl-base-module70-structure.md).|  
|[_ATL_COM_MODULE](#_atl_com_module)|Definito come un typedef in base alle [_ATL_COM_MODULE70](../../atl/reference/atl-com-module70-structure.md).|  
|[_ATL_MODULE](#_atl_module)|Definito come un typedef in base alle [_ATL_MODULE70](../../atl/reference/atl-module70-structure.md).|  
|[_ATL_WIN_MODULE](#_atl_win_module)|Definito come un typedef in base alle [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md)|  
|[ATL_URL_PORT](#atl_url_port)|Il tipo utilizzato dal [CUrl](../../atl/reference/curl-class.md) per specificare un numero di porta.|  
|[CComDispatchDriver](#ccomdispatchdriver)|Questa classe gestisce i puntatori a interfaccia COM.|  
|[CComGlobalsThreadModel](#ccomglobalsthreadmodel)|Chiama i metodi del modello, indipendentemente dal modello di threading utilizzato thread appropriato.|  
|[CComObjectThreadModel](#ccomobjectthreadmodel)|Chiama i metodi del modello, indipendentemente dal modello di threading utilizzato thread appropriato.|  
|[CContainedWindow](#ccontainedwindow)|Questa classe è una specializzazione di **CContainedWindowT.**|  
|[CPath](#cpath)|Una specializzazione di [CPathT](../../atl/reference/cpatht-class.md) utilizzando `CString`.|  
|[CPathA](#cpatha)|Una specializzazione di [CPathT](../../atl/reference/cpatht-class.md) utilizzando `CStringA`.|  
|[CPathW](#cpathw)|Una specializzazione di [CPathT](../../atl/reference/cpatht-class.md) utilizzando `CStringW`.|  
|[CSimpleValArray](#csimplevalarray)|Rappresenta una matrice per l'archiviazione di tipi semplici.|  
|[DefaultThreadTraits](#defaultthreadtraits)|La classe di tratti thread predefinita.|  
|[LPCURL](#lpcurl)|Un puntatore a una costante [CUrl](../../atl/reference/curl-class.md) oggetto.|  
|[LPURL](#lpurl)|Un puntatore a un [CUrl](../../atl/reference/curl-class.md) oggetto.|  
  
##  <a name="_atl_base_module"></a>_ATL_BASE_MODULE  
 Definito come un typedef basato su _ATL_BASE_MODULE70.  
  
```   
typedef ATL::_ATL_BASE_MODULE70 _ATL_BASE_MODULE;   
```  
  
### <a name="remarks"></a>Note  
 Utilizzato in tutti i progetti ATL. In base alle [_ATL_BASE_MODULE70](../../atl/reference/atl-base-module70-structure.md).  
  
 Classi che fanno parte delle classi ATL 7.0 modulo derivano dalla struttura _ATL_BASE_MODULE.  Per ulteriori informazioni sulle classi di modulo ATL, vedere [classi COM moduli](../../atl/com-modules-classes.md).  
  
##  <a name="_atl_com_module"></a>_ATL_COM_MODULE  
 Definito come un typedef basato su _ATL_COM_MODULE70.  
  
```   
typedef ATL::_ATL_COM_MODULE70 _ATL_COM_MODULE;   
```  
  
### <a name="remarks"></a>Note  
 Utilizzato da ATL (progetti) che utilizzano funzionalità COM. In base alle [_ATL_COM_MODULE70](../../atl/reference/atl-com-module70-structure.md).  
  
##  <a name="_atl_module"></a>_ATL_MODULE  
 Definito come un typedef basato su _ATL_MODULE70.  
  
```   
typedef ATL::_ATL_MODULE70 _ATL_MODULE;   
```  
  
### <a name="remarks"></a>Note  
 In base alle [_ATL_MODULE70](../../atl/reference/atl-module70-structure.md).  
  
##  <a name="_atl_win_module"></a>_ATL_WIN_MODULE  
 Definito come un typedef basato su _ATL_WIN_MODULE70.  
  
```   
typedef ATL::_ATL_WIN_MODULE70 _ATL_WIN_MODULE; 
 
```  
  
### <a name="remarks"></a>Note  
 Utilizzato da qualsiasi ATL (progetti) che utilizzano funzioni di windowing. In base alle [_ATL_WIN_MODULE70](../../atl/reference/atl-win-module70-structure.md).  
  
##  <a name="atl_url_port"></a>ATL_URL_PORT 
  Il tipo utilizzato dal [CUrl](curl-class.md) per specificare un numero di porta.
```  
typedef WORD ATL_URL_PORT;
```  

##  <a name="ccomdispatchdriver"></a>CComDispatchDriver  
 Questa classe gestisce i puntatori a interfaccia COM.  
  
```   
typedef CComQIPtr<IDispatch, &__uuidof(IDispatch)> CComDispatchDriver;   
```  
  
##  <a name="ccomglobalsthreadmodel"></a>CComGlobalsThreadModel  
 Chiama i metodi del modello, indipendentemente dal modello di threading utilizzato thread appropriato.  
  
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
 A seconda del modello di threading utilizzato dall'applicazione, il `typedef` nome `CComGlobalsThreadModel` fa riferimento a una [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) o [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md). Queste classi forniscono ulteriori `typedef` nomi fare riferimento a una classe di sezione critica.  
  
> [!NOTE]
> `CComGlobalsThreadModel`non fa riferimento classe [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md).  
  
 Utilizzando `CComGlobalsThreadModel` consente di specificare una determinata classe di modello di threading. Indipendentemente dal modello di threading in uso, verranno chiamati i metodi appropriati.  
  
 Oltre a `CComGlobalsThreadModel`, ATL fornisce il `typedef` nome [CComObjectThreadModel](#ccomobjectthreadmodel). La classe a cui fa riferimento ogni `typedef` dipende dal modello di threading utilizzato, come illustrato nella tabella riportata di seguito:  
  
|typedef|Threading singolo|Il threading apartment|Modello di threading Free|  
|-------------|----------------------|-------------------------|--------------------|  
|`CComObjectThreadModel`|S|S|M|  
|`CComGlobalsThreadModel`|S|M|M|  
  
 S= `CComSingleThreadModel`; M =`CComMultiThreadModel`  
  
 Utilizzare `CComObjectThreadModel` all'interno di una classe di oggetto singolo. Utilizzare `CComGlobalsThreadModel` in un oggetto che è disponibile a livello globale per il programma, o quando si desidera proteggere le risorse del modulo in più thread.  
  
##  <a name="ccomobjectthreadmodel"></a>CComObjectThreadModel  
 Chiama i metodi del modello, indipendentemente dal modello di threading utilizzato thread appropriato.  
  
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
 A seconda del modello di threading utilizzato dall'applicazione, il `typedef` nome `CComObjectThreadModel` fa riferimento a una [CComSingleThreadModel](../../atl/reference/ccomsinglethreadmodel-class.md) o [CComMultiThreadModel](../../atl/reference/ccommultithreadmodel-class.md). Queste classi forniscono ulteriori `typedef` nomi fare riferimento a una classe di sezione critica.  
  
> [!NOTE]
> `CComObjectThreadModel`non fa riferimento classe [CComMultiThreadModelNoCS](../../atl/reference/ccommultithreadmodelnocs-class.md).  
  
 Utilizzando `CComObjectThreadModel` consente di specificare una determinata classe di modello di threading. Indipendentemente dal modello di threading in uso, verranno chiamati i metodi appropriati.  
  
 Oltre a `CComObjectThreadModel`, ATL fornisce il `typedef` nome [CComGlobalsThreadModel](#ccomglobalsthreadmodel). La classe a cui fa riferimento ogni `typedef` dipende dal modello di threading utilizzato, come illustrato nella tabella riportata di seguito:  
  
|typedef|Threading singolo|Il threading apartment|Modello di threading Free|  
|-------------|----------------------|-------------------------|--------------------|  
|`CComObjectThreadModel`|S|S|M|  
|`CComGlobalsThreadModel`|S|M|M|  
  
 S= `CComSingleThreadModel`; M =`CComMultiThreadModel`  
  
 Utilizzare `CComObjectThreadModel` all'interno di una classe di oggetto singolo. Utilizzare `CComGlobalsThreadModel` in un oggetto che è disponibile a livello globale per il programma o quando si desidera proteggere le risorse del modulo in più thread.  
  
##  <a name="ccontainedwindow"></a>CContainedWindow  
 Questa classe è una specializzazione di **CContainedWindowT.**  
  
```   
typedef CContainedWindowT<CWindow> CContainedWindow;   
```  
  
### <a name="remarks"></a>Note  
 `CContainedWindow`è una specializzazione di [CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md). Se si desidera modificare la classe di base o tratti, utilizzare `CContainedWindowT` direttamente.  
  
##  <a name="cpath"></a>CPath  
 Una specializzazione di [CPathT](../../atl/reference/cpatht-class.md) utilizzando `CString`.  
  
```   
typedef CPathT<CString> CPath;   
```  
  
##  <a name="cpatha"></a>CPathA  
 Una specializzazione di [CPathT](../../atl/reference/cpatht-class.md) utilizzando `CStringA`.  
  
```   
typedef CPathT<CStringA> CPathA;   
```  
  
##  <a name="cpathw"></a>CPathW  
 Una specializzazione di [CPathT](../../atl/reference/cpatht-class.md) utilizzando `CStringW`.  
  
```   
typedef ATL::CPathT<CStringW> CPathW;   
```  
  
##  <a name="csimplevalarray"></a>CSimpleValArray  
 Rappresenta una matrice per l'archiviazione di tipi semplici.  
  
```   
#define CSimpleValArray CSimpleArray   
```  
  
### <a name="remarks"></a>Note  
 `CSimpleValArray`viene fornito per la creazione e gestione di matrici che contengono tipi di dati semplici. È una semplice #define di [CSimpleArray](../../atl/reference/csimplearray-class.md).  
  
##  <a name="lpcurl"></a>LPCURL  
 Un puntatore a una costante [CUrl](../../atl/reference/curl-class.md) oggetto.  
  
```   
typedef const CUrl* LPCURL;   
```  

##  <a name="defaultthreadtraits"></a>DefaultThreadTraits
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
Se il progetto corrente viene utilizzata la libreria CRT con multithreading, DefaultThreadTraits è definito come CRTThreadTraits. In caso contrario, viene utilizzato Win32ThreadTraits.
  
##  <a name="lpurl"></a>LPURL  
 Un puntatore a un [CUrl](../../atl/reference/curl-class.md) oggetto.  
  
```   
typedef CUrl* LPURL;   
```  
  
## <a name="see-also"></a>Vedere anche  
 [Componenti COM Desktop ATL](../../atl/atl-com-desktop-components.md)   
 [Funzioni](../../atl/reference/atl-functions.md)   
 [Global Variables](../../atl/reference/atl-global-variables.md)  (Variabili globali)  
 [Strutture](../../atl/reference/atl-structures.md)   
 [Macro](../../atl/reference/atl-macros.md)   
 [Classi](../../atl/reference/atl-classes.md)

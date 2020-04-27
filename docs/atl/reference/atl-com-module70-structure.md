---
title: Struttura _ATL_COM_MODULE70
ms.date: 11/04/2016
f1_keywords:
- ATL::_ATL_COM_MODULE70
- ATL._ATL_COM_MODULE70
- _ATL_COM_MODULE70
helpviewer_keywords:
- _ATL_COM_MODULE70 structure
- ATL_COM_MODULE70 structure
ms.assetid: 5b0b2fd0-bdeb-4c7e-8870-78fa69ace6e6
ms.openlocfilehash: c2e9e3d6695a7fbbcc87c489edf2e96fcdffb835
ms.sourcegitcommit: 2bc15c5b36372ab01fa21e9bcf718fa22705814f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/27/2020
ms.locfileid: "82168631"
---
# <a name="_atl_com_module70-structure"></a>Struttura _ATL_COM_MODULE70

Utilizzato dal codice correlato a COM in ATL.

## <a name="syntax"></a>Sintassi

```cpp
struct _ATL_COM_MODULE70 {
    UINT cbSize;
    HINSTANCE m_hInstTypeLib;
    _ATL_OBJMAP_ENTRY** m_ppAutoObjMapFirst;
    _ATL_OBJMAP_ENTRY** m_ppAutoObjMapLast;
    CRITICAL_SECTION m_csObjMap;
};
```

## <a name="members"></a>Members

`cbSize`<br/>
Dimensioni della struttura, utilizzate per il controllo delle versioni.

`m_hInstTypeLib`<br/>
Istanza dell'handle per la libreria dei tipi per questo modulo.

`m_ppAutoObjMapFirst`<br/>
Indirizzo dell'elemento di matrice che indica l'inizio delle voci della mappa degli oggetti per questo modulo.

`m_ppAutoObjMapLast`<br/>
Indirizzo dell'elemento di matrice che indica la fine delle voci della mappa oggetto per questo modulo.

`m_csObjMap`<br/>
Sezione critica per serializzare l'accesso alle voci della mappa degli oggetti. Utilizzato internamente da ATL.

## <a name="remarks"></a>Osservazioni

[_ATL_COM_MODULE](atl-typedefs.md#_atl_com_module) viene definito come typedef di _ATL_COM_MODULE70.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="see-also"></a>Vedere anche

[Classi e struct](../../atl/reference/atl-classes.md)

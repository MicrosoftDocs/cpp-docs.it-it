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
ms.openlocfilehash: c6361fc5374ed732cd9ccbfbbd1d3d1c2fc8f1f0
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57261284"
---
# <a name="atlcommodule70-structure"></a>Struttura _ATL_COM_MODULE70

Utilizzato dal codice correlato a COM in ATL.

## <a name="syntax"></a>Sintassi

```
struct _ATL_COM_MODULE70 {
    UINT cbSize;
    HINSTANCE m_hInstTypeLib;
    _ATL_OBJMAP_ENTRY** m_ppAutoObjMapFirst;
    _ATL_OBJMAP_ENTRY** m_ppAutoObjMapLast;
    CRITICAL_SECTION m_csObjMap;
};
```

## <a name="members"></a>Membri

`cbSize`<br/>
Le dimensioni della struttura, usata per il controllo delle versioni.

`m_hInstTypeLib`<br/>
L'handle di istanza alla libreria dei tipi per questo modulo.

`m_ppAutoObjMapFirst`<br/>
Indirizzo dell'elemento della matrice che indica l'inizio delle voci della mappa oggetti per questo modulo.

`m_ppAutoObjMapLast`<br/>
Indirizzo dell'elemento della matrice che indica la fine delle voci della mappa oggetti per questo modulo.

`m_csObjMap`<br/>
Sezione critica per serializzare l'accesso alle voci della mappa oggetto. Usato internamente da ATL.

## <a name="remarks"></a>Note

[_ATL_COM_MODULE](atl-typedefs.md#_atl_com_module) viene definito come un typedef di _ATL_COM_MODULE70.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="see-also"></a>Vedere anche

[Classi e struct](../../atl/reference/atl-classes.md)

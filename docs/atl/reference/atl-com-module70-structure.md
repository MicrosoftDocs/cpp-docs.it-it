---
title: Struttura _ATL_COM_MODULE70 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- ATL::_ATL_COM_MODULE70
- ATL._ATL_COM_MODULE70
- _ATL_COM_MODULE70
dev_langs:
- C++
helpviewer_keywords:
- _ATL_COM_MODULE70 structure
- ATL_COM_MODULE70 structure
ms.assetid: 5b0b2fd0-bdeb-4c7e-8870-78fa69ace6e6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7cfa52749f6789ef8bfe65f9bdcdf5238923216f
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46019382"
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


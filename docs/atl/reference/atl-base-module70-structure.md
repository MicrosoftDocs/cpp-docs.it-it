---
description: 'Altre informazioni su: struttura _ATL_BASE_MODULE70'
title: Struttura _ATL_BASE_MODULE70
ms.date: 11/04/2016
f1_keywords:
- ATL::_ATL_BASE_MODULE70
- ATL._ATL_BASE_MODULE70
- _ATL_BASE_MODULE70
helpviewer_keywords:
- ATL_BASE_MODULE70 structure
- _ATL_BASE_MODULE70 structure
ms.assetid: 4539282f-15b8-4d7c-aafa-a85dc56f4980
ms.openlocfilehash: 5bcf2083f9c8991871c05535fd3e20a39bfeb822
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97165511"
---
# <a name="_atl_base_module70-structure"></a>Struttura _ATL_BASE_MODULE70

Utilizzato da qualsiasi progetto che utilizza ATL.

## <a name="syntax"></a>Sintassi

```cpp
struct _ATL_BASE_MODULE70 {
    UINT cbSize;
    HINSTANCE m_hInst;
    HINSTANCE m_hInstResource;
    bool m_bNT5orWin98;
    DWORD dwAtlBuildVer;
    GUID* pguidVer;
    CRITICAL_SECTION m_csResource;
    CSimpleArray<HINSTANCE> m_rgResourceInstance;
};
```

## <a name="members"></a>Members

`cbSize`<br/>
Dimensioni della struttura, utilizzate per il controllo delle versioni.

`m_hInst`<br/>
`hInstance`Per questo modulo (exe o dll).

`m_hInstResource`<br/>
Handle di risorsa dell'istanza predefinita.

`m_bNT5orWin98`<br/>
Informazioni sulla versione del sistema operativo. Utilizzato internamente da ATL.

`dwAtlBuildVer`<br/>
Archivia la versione di ATL. Attualmente 0x0700.

`pguidVer`<br/>
GUID interno di ATL.

`m_csResource`<br/>
Utilizzato per sincronizzare l'accesso alla `m_rgResourceInstance` matrice. Utilizzato internamente da ATL.

`m_rgResourceInstance`<br/>
Matrice utilizzata per la ricerca di risorse in tutte le istanze di risorse di cui è in grado di riconoscere ATL. Utilizzato internamente da ATL.

## <a name="remarks"></a>Commenti

[_ATL_BASE_MODULE](atl-typedefs.md#_atl_base_module) viene definito come typedef di _ATL_BASE_MODULE70.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore. h

## <a name="see-also"></a>Vedi anche

[Classi e struct](../../atl/reference/atl-classes.md)

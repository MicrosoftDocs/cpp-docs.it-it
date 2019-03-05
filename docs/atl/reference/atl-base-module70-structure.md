---
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
ms.openlocfilehash: 4fddd4b3af6155d0663b9c01edfab4fcf4a60426
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57261454"
---
# <a name="atlbasemodule70-structure"></a>Struttura _ATL_BASE_MODULE70

Usato da qualsiasi progetto che utilizza ATL.

## <a name="syntax"></a>Sintassi

```
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

## <a name="members"></a>Membri

`cbSize`<br/>
Le dimensioni della struttura, usata per il controllo delle versioni.

`m_hInst`<br/>
Il `hInstance` per questo modulo (exe o dll).

`m_hInstResource`<br/>
Handle di risorsa istanza predefinita.

`m_bNT5orWin98`<br/>
Informazioni sulla versione del sistema operativo. Usato internamente da ATL.

`dwAtlBuildVer`<br/>
Archivia la versione di ATL. Attualmente 0x0700.

`pguidVer`<br/>
GUID interno ATL.

`m_csResource`<br/>
Utilizzato per sincronizzare l'accesso al `m_rgResourceInstance` matrice. Usato internamente da ATL.

`m_rgResourceInstance`<br/>
Matrice utilizzata per cercare le risorse in tutte le istanze di risorse di cui è compatibile con ATL. Usato internamente da ATL.

## <a name="remarks"></a>Note

[_ATL_BASE_MODULE](atl-typedefs.md#_atl_base_module) viene definito come un typedef di _ATL_BASE_MODULE70.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcore

## <a name="see-also"></a>Vedere anche

[Classi e struct](../../atl/reference/atl-classes.md)

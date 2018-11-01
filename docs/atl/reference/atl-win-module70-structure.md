---
title: Struttura _ATL_WIN_MODULE70
ms.date: 11/04/2016
f1_keywords:
- _ATL_WIN_MODULE70
- ATL::_ATL_WIN_MODULE70
- ATL._ATL_WIN_MODULE70
helpviewer_keywords:
- _ATL_WIN_MODULE70 structure
- ATL_WIN_MODULE70 structure
ms.assetid: a0aaf3ea-ca77-46ec-bd53-4dfb61dffbea
ms.openlocfilehash: 4f1718c76d21f2e13b36c29db785fe989ff6108e
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50482518"
---
# <a name="atlwinmodule70-structure"></a>Struttura _ATL_WIN_MODULE70

Utilizzato dal codice di windowing in ATL.

## <a name="syntax"></a>Sintassi

```
struct _ATL_WIN_MODULE70 {
    UNIT cbSize;
    CRITICAL_SECTION m_csWindowCreate;
    _AtlCreateWndData* m_pCreateWndList;
    CSimpleArray<ATOM> m_rgWindowClassAtoms;
};
```

## <a name="members"></a>Membri

`cbSize`<br/>
Le dimensioni della struttura, usata per il controllo delle versioni.

`m_csWindowCreate`<br/>
Utilizzato per serializzare l'accesso al codice di registrazione di finestra. Usato internamente da ATL.

`m_pCreateWndList`<br/>
Utilizzato per associare windows agli oggetti. Usato internamente da ATL.

`m_rgWindowClassAtoms`<br/>
Usato per tenere traccia delle registrazioni di classe di finestra in modo che possano essere correttamente non registrati alla chiusura. Usato internamente da ATL.

## <a name="remarks"></a>Note

[_ATL_WIN_MODULE](atl-typedefs.md#_atl_win_module) viene definito come un typedef di `_ATL_WIN_MODULE70`.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="see-also"></a>Vedere anche

[Classi e struct](../../atl/reference/atl-classes.md)


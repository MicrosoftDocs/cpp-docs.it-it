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
ms.openlocfilehash: 0b636d328852daf821269230aae443cef084578b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62260753"
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

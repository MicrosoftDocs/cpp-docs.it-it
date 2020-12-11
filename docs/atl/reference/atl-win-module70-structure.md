---
description: 'Altre informazioni su: struttura _ATL_WIN_MODULE70'
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
ms.openlocfilehash: 11b7fdad71fa8c7b615a0e6873571c38420c9b5d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97158621"
---
# <a name="_atl_win_module70-structure"></a>Struttura _ATL_WIN_MODULE70

Utilizzato dal codice di finestra in ATL.

## <a name="syntax"></a>Sintassi

```cpp
struct _ATL_WIN_MODULE70 {
    UNIT cbSize;
    CRITICAL_SECTION m_csWindowCreate;
    _AtlCreateWndData* m_pCreateWndList;
    CSimpleArray<ATOM> m_rgWindowClassAtoms;
};
```

## <a name="members"></a>Members

`cbSize`<br/>
Dimensioni della struttura, utilizzate per il controllo delle versioni.

`m_csWindowCreate`<br/>
Usato per serializzare l'accesso al codice di registrazione della finestra. Utilizzato internamente da ATL.

`m_pCreateWndList`<br/>
Utilizzato per associare Windows ai relativi oggetti. Utilizzato internamente da ATL.

`m_rgWindowClassAtoms`<br/>
Usato per tenere traccia delle registrazioni della classe di finestra in modo che possano essere annullate correttamente alla chiusura. Utilizzato internamente da ATL.

## <a name="remarks"></a>Commenti

[_ATL_WIN_MODULE](atl-typedefs.md#_atl_win_module) viene definito come typedef di `_ATL_WIN_MODULE70` .

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="see-also"></a>Vedi anche

[Classi e struct](../../atl/reference/atl-classes.md)

---
title: Struttura _ATL_MODULE70
ms.date: 11/04/2016
f1_keywords:
- _ATL_MODULE70
- ATL::_ATL_MODULE70
- ATL._ATL_MODULE70
helpviewer_keywords:
- ATL_MODULE70 structure
- _ATL_MODULE70 structure
ms.assetid: b059b2c8-dfd1-4ac9-b07d-39df638cc7b3
ms.openlocfilehash: d05683383fab64f027f198d49bfbf42aa593d582
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62260922"
---
# <a name="atlmodule70-structure"></a>Struttura _ATL_MODULE70

Contiene i dati usati da ogni modulo ATL.

## <a name="syntax"></a>Sintassi

```
struct _ATL_MODULE70 {
    UINT cbSize;
    LONG m_nLockCnt;
    _ATL_TERMFUNC_ELEM* m_pTermFuncs;
    CComCriticalSection m_csStaticDataInitAndTypeInfo;
};
```

## <a name="members"></a>Membri

`cbSize`<br/>
Le dimensioni della struttura, usata per il controllo delle versioni.

`m_nLockCnt`<br/>
Conteggio dei riferimenti per determinare quanto tempo il modulo deve rimanere attivo.

`m_pTermFuncs`<br/>
Funzioni tracce registrate da chiamare quando ATL viene arrestato.

`m_csStaticDataInitAndTypeInfo`<br/>
Consente di coordinare l'accesso ai dati interni in situazioni multithread.

## <a name="remarks"></a>Note

[_ATL_MODULE](atl-typedefs.md#_atl_module) viene definito come un typedef di `_ATL_MODULE70`.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="see-also"></a>Vedere anche

[Classi e struct](../../atl/reference/atl-classes.md)

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
ms.openlocfilehash: 8d39cdd281e09cdfe09546627aa630a11d12464e
ms.sourcegitcommit: 2bc15c5b36372ab01fa21e9bcf718fa22705814f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/27/2020
ms.locfileid: "82168566"
---
# <a name="_atl_module70-structure"></a>Struttura _ATL_MODULE70

Contiene i dati utilizzati da ogni modulo ATL.

## <a name="syntax"></a>Sintassi

```cpp
struct _ATL_MODULE70 {
    UINT cbSize;
    LONG m_nLockCnt;
    _ATL_TERMFUNC_ELEM* m_pTermFuncs;
    CComCriticalSection m_csStaticDataInitAndTypeInfo;
};
```

## <a name="members"></a>Members

`cbSize`<br/>
Dimensioni della struttura, utilizzate per il controllo delle versioni.

`m_nLockCnt`<br/>
Conteggio dei riferimenti per determinare per quanto tempo il modulo deve rimanere attivo.

`m_pTermFuncs`<br/>
Tiene traccia delle funzioni che sono state registrate per essere chiamate al momento dell'arresto di ATL.

`m_csStaticDataInitAndTypeInfo`<br/>
Utilizzato per coordinare l'accesso ai dati interni in situazioni multithread.

## <a name="remarks"></a>Osservazioni

[_ATL_MODULE](atl-typedefs.md#_atl_module) viene definito come typedef di `_ATL_MODULE70`.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="see-also"></a>Vedere anche

[Classi e struct](../../atl/reference/atl-classes.md)

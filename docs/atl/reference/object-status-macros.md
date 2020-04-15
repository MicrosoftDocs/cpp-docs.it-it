---
title: Macro di stato degli oggetti
ms.date: 11/04/2016
f1_keywords:
- atlcom/ATL::DECLARE_OLEMISC_STATUS
ms.assetid: 727dbef2-a342-4157-9d64-a421805d9747
ms.openlocfilehash: 5617ce7fb972c98775072f72244f91052d41ece3
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326172"
---
# <a name="object-status-macros"></a>Macro di stato degli oggetti

Questa macro imposta i flag appartenenti ai controlli ActiveX.

|||
|-|-|
|[DECLARE_OLEMISC_STATUS](#declare_olemisc_status)|Utilizzato nei controlli ActiveX ATL per impostare i flag OLEMISC.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom.h

## <a name="declare_olemisc_status"></a><a name="declare_olemisc_status"></a>DECLARE_OLEMISC_STATUS

Utilizzato nei controlli ActiveX ATL per impostare i flag OLEMISC.

```
DECLARE_OLEMISC_STATUS( miscstatus )
```

### <a name="parameters"></a>Parametri

*miscstatus (stato di errore)*<br/>
Tutti i flag OLEMISC applicabili.

### <a name="remarks"></a>Osservazioni

Questa macro viene utilizzata per impostare i flag OLEMISC per un controllo ActiveX. Per ulteriori informazioni, fare riferimento a [IOleObject::GetMiscStatus](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getmiscstatus) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#124](../../atl/codesnippet/cpp/object-status-macros_1.h)]

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)

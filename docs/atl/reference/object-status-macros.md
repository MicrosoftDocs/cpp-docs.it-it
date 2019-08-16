---
title: Macro stato oggetto
ms.date: 11/04/2016
f1_keywords:
- atlcom/ATL::DECLARE_OLEMISC_STATUS
ms.assetid: 727dbef2-a342-4157-9d64-a421805d9747
ms.openlocfilehash: dc50825d6b6e74dc263a097e86d8ea0d42989825
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69495313"
---
# <a name="object-status-macros"></a>Macro stato oggetto

Questa macro imposta i flag appartenenti ai controlli ActiveX.

|||
|-|-|
|[DECLARE_OLEMISC_STATUS](#declare_olemisc_status)|Utilizzato nei controlli ActiveX ATL per impostare i flag OLEMISC.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="declare_olemisc_status"></a>  DECLARE_OLEMISC_STATUS

Utilizzato nei controlli ActiveX ATL per impostare i flag OLEMISC.

```
DECLARE_OLEMISC_STATUS( miscstatus )
```

### <a name="parameters"></a>Parametri

*MiscStatus*<br/>
Tutti i flag OLEMISC applicabili.

### <a name="remarks"></a>Note

Questa macro viene utilizzata per impostare i flag OLEMISC per un controllo ActiveX. Per altri dettagli, vedere [IOleObject:: GetMiscStatus](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getmiscstatus) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#124](../../atl/codesnippet/cpp/object-status-macros_1.h)]

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)

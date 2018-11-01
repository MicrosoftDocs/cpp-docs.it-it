---
title: Macro di stato oggetto
ms.date: 11/04/2016
f1_keywords:
- atlcom/ATL::DECLARE_OLEMISC_STATUS
ms.assetid: 727dbef2-a342-4157-9d64-a421805d9747
ms.openlocfilehash: 9c4df80b2b9828077ec3738bc296f19aadf2df68
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50658952"
---
# <a name="object-status-macros"></a>Macro di stato oggetto

Questa macro imposta flag appartenenti a controlli ActiveX.

|||
|-|-|
|[DECLARE_OLEMISC_STATUS](#declare_olemisc_status)|Utilizzato nei controlli ActiveX di ATL per impostare i flag OLEMISC.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

##  <a name="declare_olemisc_status"></a>  DECLARE_OLEMISC_STATUS

Utilizzato nei controlli ActiveX di ATL per impostare i flag OLEMISC.

```
DECLARE_OLEMISC_STATUS( miscstatus )
```

### <a name="parameters"></a>Parametri

*MiscStatus*<br/>
Tutti i flag OLEMISC.

### <a name="remarks"></a>Note

Questa macro viene usata per impostare i flag OLEMISC per un controllo ActiveX. Fare riferimento a [IOleObject::GetMiscStatus](/windows/desktop/api/oleidl/nf-oleidl-ioleobject-getmiscstatus) per altri dettagli.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#124](../../atl/codesnippet/cpp/object-status-macros_1.h)]

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)

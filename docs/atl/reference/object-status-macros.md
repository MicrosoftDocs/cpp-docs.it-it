---
description: 'Altre informazioni su: macro stato oggetto'
title: Macro stato oggetto
ms.date: 11/04/2016
f1_keywords:
- atlcom/ATL::DECLARE_OLEMISC_STATUS
ms.assetid: 727dbef2-a342-4157-9d64-a421805d9747
ms.openlocfilehash: 7aac547ac0b63a7db9ceea3b58befdea3e076f3f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97157906"
---
# <a name="object-status-macros"></a>Macro stato oggetto

Questa macro imposta i flag appartenenti ai controlli ActiveX.

|Nome|Description|
|-|-|
|[DECLARE_OLEMISC_STATUS](#declare_olemisc_status)|Utilizzato nei controlli ActiveX ATL per impostare i flag OLEMISC.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlcom. h

## <a name="declare_olemisc_status"></a><a name="declare_olemisc_status"></a> DECLARE_OLEMISC_STATUS

Utilizzato nei controlli ActiveX ATL per impostare i flag OLEMISC.

```
DECLARE_OLEMISC_STATUS( miscstatus )
```

### <a name="parameters"></a>Parametri

*MiscStatus*<br/>
Tutti i flag OLEMISC applicabili.

### <a name="remarks"></a>Commenti

Questa macro viene utilizzata per impostare i flag OLEMISC per un controllo ActiveX. Per altri dettagli, vedere [IOleObject:: GetMiscStatus](/windows/win32/api/oleidl/nf-oleidl-ioleobject-getmiscstatus) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Windowing#124](../../atl/codesnippet/cpp/object-status-macros_1.h)]

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)

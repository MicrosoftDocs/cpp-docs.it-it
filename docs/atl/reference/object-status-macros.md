---
title: Macro di stato dell'oggetto | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atlcom/ATL::DECLARE_OLEMISC_STATUS
dev_langs:
- C++
ms.assetid: 727dbef2-a342-4157-9d64-a421805d9747
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c4b8be9cf1b421a66081fcf650462447d3c0ef7e
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50052538"
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

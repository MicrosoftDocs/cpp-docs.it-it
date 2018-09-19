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
ms.openlocfilehash: 9b684d66a96a7a3a7d7d60a1b107792c2061ce57
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46086603"
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

---
title: Funzioni globali di contesto di dispositivo
ms.date: 11/04/2016
f1_keywords:
- atlwin/ATL::AtlCreateTargetDC
ms.assetid: 08ec28f6-daff-4882-9544-e8a4639d05c4
ms.openlocfilehash: 25ceae897d3cc845ab06fd4d898c87518b15eacb
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50551203"
---
# <a name="device-context-global-functions"></a>Funzioni globali di contesto di dispositivo

Questa funzione crea un contesto di dispositivo per un determinato dispositivo.

|||
|-|-|
|[AtlCreateTargetDC](#atlcreatetargetdc)|Crea un contesto di dispositivo.|

##  <a name="atlcreatetargetdc"></a>  AtlCreateTargetDC

Crea un contesto di dispositivo per il dispositivo specificato nella [DVTARGETDEVICE](/windows/desktop/api/objidl/ns-objidl-tagdvtargetdevice) struttura.

```
HDC AtlCreateTargetDC(HDC hdc, DVTARGETDEVICE* ptd);
```

### <a name="parameters"></a>Parametri

*HDC*<br/>
[in] L'handle esistente di un contesto di dispositivo o NULL.

*ptd*<br/>
[in] Un puntatore al `DVTARGETDEVICE` struttura che contiene informazioni sul dispositivo di destinazione.

### <a name="return-value"></a>Valore restituito

Restituisce l'handle per un contesto di dispositivo per il dispositivo specificato nella `DVTARGETDEVICE`. Se nessuna periferica è specificata, restituisce l'handle per il dispositivo di visualizzazione predefinito.

### <a name="remarks"></a>Note

Se la struttura è NULL e *hdc* è NULL, crea un contesto di dispositivo per il dispositivo di visualizzazione predefinito.

Se *hdc* non è NULL e *ptd* è NULL, la funzione restituisce l'oggetto esistente *hdc*.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

## <a name="see-also"></a>Vedere anche

[Funzioni](../../atl/reference/atl-functions.md)

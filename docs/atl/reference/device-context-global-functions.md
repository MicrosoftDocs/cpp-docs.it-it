---
title: Funzioni globali del contesto di dispositivo
ms.date: 11/04/2016
f1_keywords:
- atlwin/ATL::AtlCreateTargetDC
ms.assetid: 08ec28f6-daff-4882-9544-e8a4639d05c4
ms.openlocfilehash: d2d25660083f074683a3f42f878497ce14a008b8
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88833465"
---
# <a name="device-context-global-functions"></a>Funzioni globali del contesto di dispositivo

Questa funzione crea un contesto di dispositivo per un determinato dispositivo.

|Nome|Descrizione|
|-|-|
|[AtlCreateTargetDC](#atlcreatetargetdc)|Crea un contesto di dispositivo.|

## <a name="atlcreatetargetdc"></a><a name="atlcreatetargetdc"></a> AtlCreateTargetDC

Crea un contesto di dispositivo per il dispositivo specificato nella struttura [DVTARGETDEVICE](/windows/win32/api/objidl/ns-objidl-dvtargetdevice) .

```
HDC AtlCreateTargetDC(HDC hdc, DVTARGETDEVICE* ptd);
```

### <a name="parameters"></a>Parametri

*HDC*<br/>
in Handle esistente di un contesto di dispositivo o NULL.

*PTD*<br/>
in Puntatore alla `DVTARGETDEVICE` struttura che contiene informazioni sul dispositivo di destinazione.

### <a name="return-value"></a>Valore restituito

Restituisce l'handle per un contesto di dispositivo per il dispositivo specificato in `DVTARGETDEVICE` . Se non viene specificato alcun dispositivo, restituisce l'handle al dispositivo di visualizzazione predefinito.

### <a name="remarks"></a>Osservazioni

Se la struttura è NULL e *HDC* è null, crea un contesto di dispositivo per il dispositivo di visualizzazione predefinito.

Se *HDC* non è null e *PTD* è null, la funzione restituisce l' *HDC*esistente.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

## <a name="see-also"></a>Vedi anche

[Funzioni](../../atl/reference/atl-functions.md)

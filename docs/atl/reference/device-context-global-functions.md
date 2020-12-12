---
description: 'Altre informazioni su: funzioni globali del contesto di dispositivo'
title: Funzioni globali del contesto di dispositivo
ms.date: 11/04/2016
f1_keywords:
- atlwin/ATL::AtlCreateTargetDC
ms.assetid: 08ec28f6-daff-4882-9544-e8a4639d05c4
ms.openlocfilehash: f5e87271170e29a2f0cc4d42b4e7739a5fd869ab
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97139906"
---
# <a name="device-context-global-functions"></a>Funzioni globali del contesto di dispositivo

Questa funzione crea un contesto di dispositivo per un determinato dispositivo.

|Nome|Description|
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

### <a name="remarks"></a>Commenti

Se la struttura è NULL e *HDC* è null, crea un contesto di dispositivo per il dispositivo di visualizzazione predefinito.

Se *HDC* non è null e *PTD* è null, la funzione restituisce l' *HDC* esistente.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

## <a name="see-also"></a>Vedi anche

[Funzioni](../../atl/reference/atl-functions.md)

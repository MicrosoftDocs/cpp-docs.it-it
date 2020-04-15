---
title: Funzioni globali del contesto di dispositivoDevice Context Global Functions
ms.date: 11/04/2016
f1_keywords:
- atlwin/ATL::AtlCreateTargetDC
ms.assetid: 08ec28f6-daff-4882-9544-e8a4639d05c4
ms.openlocfilehash: e640f310a1976c29a39f0ab7c2575dfd1073c889
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330145"
---
# <a name="device-context-global-functions"></a>Funzioni globali del contesto di dispositivoDevice Context Global Functions

Questa funzione crea un contesto di dispositivo per un determinato dispositivo.

|||
|-|-|
|[AtlCreateTargetDC](#atlcreatetargetdc)|Crea un contesto di dispositivo.|

## <a name="atlcreatetargetdc"></a><a name="atlcreatetargetdc"></a>AtlCreateTargetDC (AtlCreateTargetDC)

Crea un contesto di dispositivo per il dispositivo specificato nella struttura [DVTARGETDEVICE.](/windows/win32/api/objidl/ns-objidl-dvtargetdevice)

```
HDC AtlCreateTargetDC(HDC hdc, DVTARGETDEVICE* ptd);
```

### <a name="parameters"></a>Parametri

*Hdc*<br/>
[in] Handle esistente di un contesto di dispositivo o NULL.

*Ptd*<br/>
[in] Puntatore alla `DVTARGETDEVICE` struttura che contiene informazioni sul dispositivo di destinazione.

### <a name="return-value"></a>Valore restituito

Restituisce l'handle a un contesto `DVTARGETDEVICE`di periferica per il dispositivo specificato nel file . Se non viene specificato alcun dispositivo, restituisce l'handle al dispositivo di visualizzazione predefinito.

### <a name="remarks"></a>Osservazioni

Se la struttura è NULL e *hdc* è NULL, crea un contesto di dispositivo per la periferica di visualizzazione predefinita.

Se *hdc* non è NULL e *ptd* è NULL, la funzione restituisce l'oggetto *hdc*esistente.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin.h

## <a name="see-also"></a>Vedere anche

[Funzioni](../../atl/reference/atl-functions.md)

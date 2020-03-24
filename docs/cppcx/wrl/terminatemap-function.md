---
title: Funzione TerminateMap
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::TerminateMap
helpviewer_keywords:
- TerminateMap function
ms.assetid: 1c314a61-da5d-49bb-ac44-c34ee3c23b66
ms.openlocfilehash: 560f563e43fc8b818b04cd0bda6b01fbc916cb84
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213551"
---
# <a name="terminatemap-function"></a>Funzione TerminateMap

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
inline bool TerminateMap(
   _In_ ModuleBase *module,
   _In_opt_z_ const wchar_t *serverName,
    bool forceTerminate) throw()
```

### <a name="parameters"></a>Parametri

*module*<br/>
Un [modulo](module-class.md).

*serverName*<br/>
Nome di un subset di class factory nel modulo specificato dal *modulo*Parameter.

*forceTerminate*<br/>
**true** per terminare le class factory indipendentemente dal fatto che siano attive; **false** per non terminare le class factory se una factory è attiva.

## <a name="return-value"></a>Valore restituito

**true** se tutte le class factory sono state terminate; in caso contrario, **false**.

## <a name="remarks"></a>Osservazioni

Arresta le class factory nel modulo specificato.

## <a name="requirements"></a>Requisiti

**Intestazione:** Module. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](microsoft-wrl-details-namespace.md)

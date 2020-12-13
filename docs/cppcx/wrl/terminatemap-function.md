---
description: 'Altre informazioni su: Funzione TerminateMap'
title: Funzione TerminateMap
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::TerminateMap
helpviewer_keywords:
- TerminateMap function
ms.assetid: 1c314a61-da5d-49bb-ac44-c34ee3c23b66
ms.openlocfilehash: 919759d0b4b7f67cf3aff83c3e83678860d0badc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97135063"
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

*modulo*<br/>
Un [modulo](module-class.md).

*serverName*<br/>
Nome di un subset di class factory nel modulo specificato dal *modulo* Parameter.

*forceTerminate*<br/>
**`true`** per terminare le class factory indipendentemente dal fatto che siano attive; **`false`** per non terminare le class factory se è attiva una factory.

## <a name="return-value"></a>Valore restituito

**`true`** Se tutte le class factory sono state terminate; in caso contrario, **`false`** .

## <a name="remarks"></a>Commenti

Arresta le class factory nel modulo specificato.

## <a name="requirements"></a>Requisiti

**Intestazione:** Module. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Microsoft:: WRL::D etails](microsoft-wrl-details-namespace.md)

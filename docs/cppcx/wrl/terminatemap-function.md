---
title: Funzione TerminateMap
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::TerminateMap
helpviewer_keywords:
- TerminateMap function
ms.assetid: 1c314a61-da5d-49bb-ac44-c34ee3c23b66
ms.openlocfilehash: 2a451bf68bfb543ee5e82a9a48097cac7e8a9821
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62398121"
---
# <a name="terminatemap-function"></a>Funzione TerminateMap

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
inline bool TerminateMap(
   _In_ ModuleBase *module,
   _In_opt_z_ const wchar_t *serverName,
    bool forceTerminate) throw()
```

### <a name="parameters"></a>Parametri

*module*<br/>
Oggetto [modulo](module-class.md).

*serverName*<br/>
Il nome di un subset di class factory del modulo specificato dal parametro *modulo*.

*forceTerminate*<br/>
**true** per terminare la classe factory indipendentemente dal fatto sono attive; **false** non terminare le class factory se qualsiasi factory è attivo.

## <a name="return-value"></a>Valore restituito

**true** se tutte le class factory sono state terminate; in caso contrario, **false**.

## <a name="remarks"></a>Note

Arresta la class factory nel modulo specificato.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](microsoft-wrl-details-namespace.md)
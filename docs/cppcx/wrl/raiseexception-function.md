---
title: RaiseException (funzione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::RaiseException
helpviewer_keywords:
- RaiseException function
ms.assetid: f9c74f6d-112a-4d2e-900f-622f795d5dbf
ms.openlocfilehash: 08305c5d59d7e272aac87ad9aa183c8e82588632
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59029959"
---
# <a name="raiseexception-function"></a>RaiseException (funzione)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
inline void __declspec(noreturn)   RaiseException(
      HRESULT hr,
      DWORD dwExceptionFlags = EXCEPTION_NONCONTINUABLE);
```

### <a name="parameters"></a>Parametri

*hr*<br/>
Il codice di eccezione dell'eccezione generato; vale a dire, il valore HRESULT di un'operazione non riuscita.

*dwExceptionFlags*<br/>
Un flag che indica un'eccezione consentita (il valore del flag è zero) o eccezione noncontinuable (valore del flag è diverso da zero). Per impostazione predefinita, l'eccezione è critica.

## <a name="remarks"></a>Note

Genera un'eccezione nel thread chiamante.

Per altre informazioni, vedere il Windows `RaiseException` (funzione).

## <a name="requirements"></a>Requisiti

**Intestazione:** FTM

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](microsoft-wrl-details-namespace.md)
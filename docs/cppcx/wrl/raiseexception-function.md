---
title: RaiseException (funzione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::RaiseException
helpviewer_keywords:
- RaiseException function
ms.assetid: f9c74f6d-112a-4d2e-900f-622f795d5dbf
ms.openlocfilehash: 3270057bf5b1b27a98bef1ab236291eab15d27ab
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213629"
---
# <a name="raiseexception-function"></a>RaiseException (funzione)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
inline void __declspec(noreturn)   RaiseException(
      HRESULT hr,
      DWORD dwExceptionFlags = EXCEPTION_NONCONTINUABLE);
```

### <a name="parameters"></a>Parametri

*HR*<br/>
Codice dell'eccezione generata. ovvero HRESULT di un'operazione non riuscita.

*dwExceptionFlags*<br/>
Flag che indica un'eccezione continua (il valore del flag è zero) o un'eccezione non continua (il valore del flag è diverso da zero). Per impostazione predefinita, l'eccezione è non continuabile.

## <a name="remarks"></a>Osservazioni

Genera un'eccezione nel thread chiamante.

Per ulteriori informazioni, vedere la funzione Windows `RaiseException`.

## <a name="requirements"></a>Requisiti

**Intestazione:** Internal. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](microsoft-wrl-details-namespace.md)

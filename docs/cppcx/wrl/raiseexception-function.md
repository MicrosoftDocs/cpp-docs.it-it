---
description: 'Ulteriori informazioni su: funzione RaiseException'
title: RaiseException (funzione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- internal/Microsoft::WRL::Details::RaiseException
helpviewer_keywords:
- RaiseException function
ms.assetid: f9c74f6d-112a-4d2e-900f-622f795d5dbf
ms.openlocfilehash: b5353757ff04ab12c0fc61da6b2e98b2df835ef0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97198440"
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

*h*<br/>
Codice dell'eccezione generata. ovvero HRESULT di un'operazione non riuscita.

*dwExceptionFlags*<br/>
Flag che indica un'eccezione continua (il valore del flag è zero) o un'eccezione non continua (il valore del flag è diverso da zero). Per impostazione predefinita, l'eccezione è non continuabile.

## <a name="remarks"></a>Commenti

Genera un'eccezione nel thread chiamante.

Per ulteriori informazioni, vedere la `RaiseException` funzione Windows.

## <a name="requirements"></a>Requisiti

**Intestazione:** Internal. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Microsoft:: WRL::D etails](microsoft-wrl-details-namespace.md)

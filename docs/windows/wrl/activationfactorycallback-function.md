---
title: ActivationFactoryCallback (funzione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::ActivationFactoryCallback
helpviewer_keywords:
- ActivationFactoryCallback function
ms.assetid: dd40c79b-1273-4f2a-8c24-ae9926fb4fd9
ms.openlocfilehash: 93db10e19cce0658bf731c14e7ac76b575841bf3
ms.sourcegitcommit: 360b55e89e5954f494e52b1cf989fbaceda06f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/16/2019
ms.locfileid: "54337339"
---
# <a name="activationfactorycallback-function"></a>ActivationFactoryCallback (funzione)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
inline HRESULT STDAPICALLTYPE ActivationFactoryCallback(
   HSTRING activationId,
   IActivationFactory **ppFactory
);
```

### <a name="parameters"></a>Parametri

*activationId*<br/>
Handle per una stringa che specifica il nome di una classe di runtime.

*ppFactory*<br/>
Quando questa operazione viene completata, una factory di attivazione corrispondente al parametro *activationId*.

## <a name="return-value"></a>Valore restituito

S_OK se riesce; in caso contrario, HRESULT che descrive l'errore. HRESULT di errore probabilmente sono CLASS_E_CLASSNOTAVAILABLE ed E_INVALIDARG.

## <a name="remarks"></a>Note

Ottiene la factory di attivazione per l'ID di attivazione specificato.

Il Runtime Windows chiama questa funzione di richiamata per richiedere un oggetto specificato dal nome della classe di runtime.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](microsoft-wrl-details-namespace.md)
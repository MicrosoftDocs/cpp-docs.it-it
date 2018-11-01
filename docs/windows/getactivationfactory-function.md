---
title: GetActivationFactory (funzione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::GetActivationFactory
- client/ABI::Windows::Foundation::GetActivationFactory
- client/Windows::Foundation::GetActivationFactory
helpviewer_keywords:
- GetActivationFactory function
ms.assetid: 5736d285-6beb-42aa-8788-e261c0010afe
ms.openlocfilehash: a2581fce3c15c96317bf68de0ed918b19edd8b38
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50481708"
---
# <a name="getactivationfactory-function"></a>GetActivationFactory (funzione)

Recupera una factory di attivazione per il tipo specificato dal parametro di modello.

## <a name="syntax"></a>Sintassi

```cpp
template<typename T>
inline HRESULT GetActivationFactory(
   _In_ HSTRING activatableClassId,
   _Out_ Microsoft::WRL::Details::ComPtrRef<T> factory
);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Un parametro di modello che specifica il tipo della factory dell'attivazione.

*activatableClassId*<br/>
Il nome della classe che la factory di attivazione può produrre.

*factory*<br/>
Al termine di questa operazione, un riferimento alla factory di attivazione per il tipo *T*.

## <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, un errore HRESULT che indica il motivo per cui questa operazione non è riuscita.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Namespace:** spazio

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Windows::Foundation](../windows/windows-foundation-namespace.md)
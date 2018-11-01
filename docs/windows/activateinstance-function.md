---
title: ActivateInstance (funzione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- client/Windows::Foundation::ActivateInstance
- client/ABI::Windows::Foundation::ActivateInstance
helpviewer_keywords:
- ActivateInstance function
ms.assetid: 8cfd1dd9-5fda-4cc2-acf8-d40e783b3875
ms.openlocfilehash: 65648d62657bf989d4a08660e0fd7724511350c1
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50666297"
---
# <a name="activateinstance-function"></a>ActivateInstance (funzione)

Registra e recupera un'istanza di un tipo specificato definito in un ID di classe specificata.

## <a name="syntax"></a>Sintassi

```cpp
template<typename T>
inline HRESULT ActivateInstance(
   _In_ HSTRING activatableClassId,
   _Out_ Microsoft::WRL::Details::ComPtrRef<T> instance
);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Un tipo da attivare.

*activatableClassId*<br/>
Il nome dell'ID di classe che definisce i parametri *T*.

*Istanza*<br/>
Al termine di questa operazione, un riferimento a un'istanza di *T*.

## <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, un errore HRESULT che indica la causa dell'errore.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Namespace:** spazio

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Windows::Foundation](../windows/windows-foundation-namespace.md)
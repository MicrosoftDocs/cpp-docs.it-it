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
ms.openlocfilehash: 43aa34153f0e71dd665090243ff2288bff704404
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59029080"
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

*istanza*<br/>
Al termine di questa operazione, un riferimento a un'istanza di *T*.

## <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, un errore HRESULT che indica la causa dell'errore.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Windows::Foundation

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Windows::Foundation](windows-foundation-namespace.md)
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
ms.openlocfilehash: 4525ee74bc63a9655e7f1142fb1b2b6812d82bb6
ms.sourcegitcommit: 5cecccba0a96c1b4ccea1f7a1cfd91f259cc5bde
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/01/2019
ms.locfileid: "58785015"
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

*instance*<br/>
Al termine di questa operazione, un riferimento a un'istanza di *T*.

## <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, un errore HRESULT che indica la causa dell'errore.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Windows::Foundation

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Windows::Foundation](windows-foundation-namespace.md)
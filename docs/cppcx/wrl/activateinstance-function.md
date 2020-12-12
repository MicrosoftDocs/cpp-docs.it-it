---
description: 'Altre informazioni su: Funzione ActivateInstance'
title: ActivateInstance (funzione)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- client/Windows::Foundation::ActivateInstance
- client/ABI::Windows::Foundation::ActivateInstance
helpviewer_keywords:
- ActivateInstance function
ms.assetid: 8cfd1dd9-5fda-4cc2-acf8-d40e783b3875
ms.openlocfilehash: 03d7b67810ee2ab287072546b098f81f43687233
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97287853"
---
# <a name="activateinstance-function"></a>ActivateInstance (funzione)

Registra e recupera un'istanza di un tipo specificato definito in un ID di classe specificato.

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
Tipo da attivare.

*activatableClassId*<br/>
Nome dell'ID classe che definisce il parametro *T*.

*istanza*<br/>
Al termine di questa operazione, un riferimento a un'istanza di *T*.

## <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, viene generato un errore HRESULT che indica la cause dell'errore.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Windows:: Foundation

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Windows:: Foundation](windows-foundation-namespace.md)

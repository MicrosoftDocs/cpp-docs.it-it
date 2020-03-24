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
ms.openlocfilehash: d1109e769352d412df8348822e05b66063159ee8
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80214227"
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

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Windows::Foundation](windows-foundation-namespace.md)

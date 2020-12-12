---
description: 'Altre informazioni su: funzione GetActivationFactory'
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
ms.openlocfilehash: ae2384e0620282723c6f10090a0028347408b271
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97124631"
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
Parametro di modello che specifica il tipo della factory di attivazione.

*activatableClassId*<br/>
Nome della classe che può essere prodotta dalla factory di attivazione.

*factory*<br/>
Al termine di questa operazione, un riferimento alla Factory di attivazione per il tipo *T*.

## <a name="return-value"></a>Valore restituito

S_OK in caso di esito positivo; in caso contrario, un errore HRESULT che indica il motivo per cui questa operazione non è riuscita.

## <a name="requirements"></a>Requisiti

**Intestazione:** client.h

**Spazio dei nomi:** Windows:: Foundation

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Windows:: Foundation](windows-foundation-namespace.md)

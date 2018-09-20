---
title: GetActivationFactory (funzione) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Details::GetActivationFactory
- client/ABI::Windows::Foundation::GetActivationFactory
- client/Windows::Foundation::GetActivationFactory
dev_langs:
- C++
helpviewer_keywords:
- GetActivationFactory function
ms.assetid: 5736d285-6beb-42aa-8788-e261c0010afe
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: f5afaa14d926cc7dde86cdbdb6b5ca8162f81d7c
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46402148"
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
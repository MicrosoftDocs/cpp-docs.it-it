---
description: 'Altre informazioni su: funzione di callback (WRL)'
title: Funzione di callback (WRL)
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Callback
ms.assetid: afb15d25-3230-44f7-b321-e17c54872943
ms.openlocfilehash: 75b24c67c0a7f2102307e2f868da7799b02c71e8
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97344549"
---
# <a name="callback-function-wrl"></a>Funzione di callback (WRL)

Crea un oggetto la cui funzione membro è un metodo di callback.

## <a name="syntax"></a>Sintassi

```cpp
template<
   typename TDelegateInterface,
   typename TCallback
>
ComPtr<TDelegateInterface> Callback(
   TCallback callback
);
template<
   typename TDelegateInterface,
   typename TCallbackObject
>
ComPtr<TDelegateInterface> Callback(
   _In_ TCallbackObject *object,
   _In_ HRESULT (TCallbackObject::* method)()
);
template<
   typename TDelegateInterface,
   typename TCallbackObject,
   typename TArg1
>
ComPtr<TDelegateInterface> Callback(
   _In_ TCallbackObject *object,
   _In_ HRESULT (TCallbackObject::* method)(TArg1)
);
template<
   typename TDelegateInterface,
   typename TCallbackObject,
   typename TArg1,
   typename TArg2
>
ComPtr<TDelegateInterface> Callback(
   _In_ TCallbackObject *object,
   _In_ HRESULT (TCallbackObject::* method)(TArg1,
   TArg2)
);
template<
   typename TDelegateInterface,
   typename TCallbackObject,
   typename TArg1,
   typename TArg2,
   typename TArg3
>
ComPtr<TDelegateInterface> Callback(
   _In_ TCallbackObject *object,
   _In_ HRESULT (TCallbackObject::* method)(TArg1,
   TArg2,
   TArg3)
);
template<
   typename TDelegateInterface,
   typename TCallbackObject,
   typename TArg1,
   typename TArg2,
   typename TArg3,
   typename TArg4
>
ComPtr<TDelegateInterface> Callback(
   _In_ TCallbackObject *object,
   _In_ HRESULT (TCallbackObject::* method)(TArg1,
   TArg2,
   TArg3,
   TArg4)
);
template<
   typename TDelegateInterface,
   typename TCallbackObject,
   typename TArg1,
   typename TArg2,
   typename TArg3,
   typename TArg4,
   typename TArg5
>
ComPtr<TDelegateInterface> Callback(
   _In_ TCallbackObject *object,
   _In_ HRESULT (TCallbackObject::* method)(TArg1,
   TArg2,
   TArg3,
   TArg4,
   TArg5)
);
template<
   typename TDelegateInterface,
   typename TCallbackObject,
   typename TArg1,
   typename TArg2,
   typename TArg3,
   typename TArg4,
   typename TArg5,
   typename TArg6
>
ComPtr<TDelegateInterface> Callback(
   _In_ TCallbackObject *object,
   _In_ HRESULT (TCallbackObject::* method)(TArg1,
   TArg2,
   TArg3,
   TArg4,
   TArg5,
   TArg6)
);
template<
   typename TDelegateInterface,
   typename TCallbackObject,
   typename TArg1,
   typename TArg2,
   typename TArg3,
   typename TArg4,
   typename TArg5,
   typename TArg6,
   typename TArg7
>
ComPtr<TDelegateInterface> Callback(
   _In_ TCallbackObject *object,
   _In_ HRESULT (TCallbackObject::* method)(TArg1,
   TArg2,
   TArg3,
   TArg4,
   TArg5,
   TArg6,
   TArg7)
);
template<
   typename TDelegateInterface,
   typename TCallbackObject,
   typename TArg1,
   typename TArg2,
   typename TArg3,
   typename TArg4,
   typename TArg5,
   typename TArg6,
   typename TArg7,
   typename TArg8
>
ComPtr<TDelegateInterface> Callback(
   _In_ TCallbackObject *object,
   _In_ HRESULT (TCallbackObject::* method)(TArg1,
   TArg2,
   TArg3,
   TArg4,
   TArg5,
   TArg6,
   TArg7,
   TArg8)
);
template<
   typename TDelegateInterface,
   typename TCallbackObject,
   typename TArg1,
   typename TArg2,
   typename TArg3,
   typename TArg4,
   typename TArg5,
   typename TArg6,
   typename TArg7,
   typename TArg8,
   typename TArg9
>
ComPtr<TDelegateInterface> Callback(
   _In_ TCallbackObject *object,
   _In_ HRESULT (TCallbackObject::* method)(TArg1,
   TArg2,
   TArg3,
   TArg4,
   TArg5,
   TArg6,
   TArg7,
   TArg8,
   TArg9)
);
```

### <a name="parameters"></a>Parametri

*TDelegateInterface*<br/>
Parametro di modello che specifica l'interfaccia del delegato da chiamare quando si verifica un evento.

*TCallback*<br/>
Parametro di modello che specifica il tipo di oggetto che rappresenta un oggetto e la relativa funzione membro di callback.

*TCallbackObject*<br/>
Parametro di modello che specifica l'oggetto di cui la funzione membro è il metodo da chiamare quando si verifica un evento.

*TArg1*<br/>
Parametro di modello che specifica il tipo del primo argomento del metodo di callback.

*TArg2*<br/>
Parametro di modello che specifica il tipo del secondo argomento del metodo di callback.

*TArg3*<br/>
Parametro di modello che specifica il tipo del terzo argomento del metodo di callback.

*TArg4*<br/>
Parametro di modello che specifica il tipo del quarto argomento del metodo di callback.

*TArg5*<br/>
Parametro di modello che specifica il tipo del quinto argomento del metodo di callback.

*TArg6*<br/>
Parametro di modello che specifica il tipo del sesto argomento del metodo di callback.

*TArg7*<br/>
Parametro di modello che specifica il tipo del settimo argomento del metodo di callback.

*TArg8*<br/>
Parametro di modello che specifica il tipo dell'ottavo argomento del metodo di callback.

*TArg9*<br/>
Parametro di modello che specifica il tipo del nono argomento del metodo di callback.

*callback*<br/>
Oggetto che rappresenta l'oggetto di callback e la relativa funzione membro.

*object*<br/>
L'oggetto di cui la funzione membro viene chiamata quando si verifica un evento.

*Metodo*<br/>
La funzione membro da chiamare quando si verifica un evento.

## <a name="return-value"></a>Valore restituito

Oggetto la cui funzione membro è il metodo di callback specificato.

## <a name="remarks"></a>Commenti

La base di un oggetto delegato deve essere `IUnknown` , non `IInspectable` .

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Microsoft:: WRL](microsoft-wrl-namespace.md)

---
title: InvokeHelper (struttura) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Details::InvokeHelper
dev_langs:
- C++
helpviewer_keywords:
- InvokeHelper structure
ms.assetid: 555ad2bc-4dd6-4e65-a2e2-1242c395f0e5
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0586b5073e8d97c882f33bb118d62b0c1bb04c07
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42611551"
---
# <a name="invokehelper-structure"></a>InvokeHelper (struttura)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template<
   typename TDelegateInterface,
   typename TCallback,
   unsigned int argCount
>
struct InvokeHelper;
template<
   typename TDelegateInterface,
   typename TCallback
>
struct InvokeHelper<TDelegateInterface, TCallback, 0> : public Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>;
template<
   typename TDelegateInterface,
   typename TCallback
>
struct InvokeHelper<TDelegateInterface, TCallback, 1> : public Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>;
template<
   typename TDelegateInterface,
   typename TCallback
>
struct InvokeHelper<TDelegateInterface, TCallback, 2> : public Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>;
template<
   typename TDelegateInterface,
   typename TCallback
>
struct InvokeHelper<TDelegateInterface, TCallback, 3> : public Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>;
template<
   typename TDelegateInterface,
   typename TCallback
>
struct InvokeHelper<TDelegateInterface, TCallback, 4> : Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>;
template<
   typename TDelegateInterface,
   typename TCallback
>
struct InvokeHelper<TDelegateInterface, TCallback, 5> : Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>;
template<
   typename TDelegateInterface,
   typename TCallback
>
struct InvokeHelper<TDelegateInterface, TCallback, 6> : Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>;
template<
   typename TDelegateInterface,
   typename TCallback
>
struct InvokeHelper<TDelegateInterface, TCallback, 7> : Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>;
template<
   typename TDelegateInterface,
   typename TCallback
>
struct InvokeHelper<TDelegateInterface, TCallback, 8> : Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>;
template<
   typename TDelegateInterface,
   typename TCallback
>
struct InvokeHelper<TDelegateInterface, TCallback, 9> : Microsoft::WRL::RuntimeClass<RuntimeClassFlags<Delegate>, TDelegateInterface>;
```

### <a name="parameters"></a>Parametri

*TDelegateInterface*  
*TCallback*  
Tipo di funzione del gestore eventi.

*argCount*  
Il numero di argomenti in un' **InvokeHelper** specializzazione.

## <a name="remarks"></a>Note

Fornisce un'implementazione del `Invoke()` metodo basato sul numero specificato e il tipo di argomenti.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`Traits`|Un sinonimo della classe che definisce il tipo di ogni argomento di gestore dell'evento.|

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore InvokeHelper::InvokeHelper](../windows/invokehelper-invokehelper-constructor.md)|Inizializza una nuova istanza di **InvokeHelper** classe.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Metodo InvokeHelper::Invoke](../windows/invokehelper-invoke-method.md)|Chiama il gestore dell'evento la cui firma contiene il numero di argomenti specificato.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Membro dati InvokeHelper::callback_ Data](../windows/invokehelper-callback-data-member.md)|Rappresenta il gestore eventi da chiamare quando si verifica un evento.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`InvokeHelper`

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)
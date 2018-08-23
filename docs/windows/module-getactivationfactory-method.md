---
title: 'Metodo Module:: getactivationfactory | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- module/Microsoft::WRL::Module::GetActivationFactory
dev_langs:
- C++
helpviewer_keywords:
- GetActivationFactory method
ms.assetid: 59da8844-072e-414b-b89c-1db1cc4fd81d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 0e87ea3b0e44732d4271385073c48fd92e1aa114
ms.sourcegitcommit: 6f8dd98de57bb80bf4c9852abafef1c35a7600f1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/22/2018
ms.locfileid: "42608927"
---
# <a name="modulegetactivationfactory-method"></a>Metodo Module::GetActivationFactory

Ottiene una factory di attivazione per il modulo.

## <a name="syntax"></a>Sintassi

```cpp
WRL_NOTHROW HRESULT GetActivationFactory(
   _In_ HSTRING pActivatibleClassId,
   _Deref_out_ IActivationFactory **ppIFactory,
   wchar_t* serverName = nullptr
);
```

### <a name="parameters"></a>Parametri

*pActivatibleClassId*  
IID di una classe di runtime.

*ppIFactory*  
IActivationFactory per la classe di runtime specificato.

*ServerName*  
Il nome di un subset di class factory nel modulo corrente. Specificare il nome del server usato nel [ActivatableClassWithFactoryEx](../windows/activatableclass-macros.md) (macro), oppure specificare **nullptr** per ottenere il nome del server predefinito.

## <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, il valore HRESULT restituito dal GetActivationFactory.

## <a name="requirements"></a>Requisiti

**Intestazione:** module.h

**Spazio dei nomi:** Microsoft::WRL

## <a name="see-also"></a>Vedere anche

[Classe Module](../windows/module-class.md)  
[Macro ActivatableClass](../windows/activatableclass-macros.md)
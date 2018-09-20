---
title: 'Metodo runtimeclassbaset:: Asiid | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::RuntimeClassBaseT::AsIID
dev_langs:
- C++
helpviewer_keywords:
- AsIID method
ms.assetid: 90d7df8a-cf9e-4eef-8837-bc1a25f3fa1a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 7092153e49fdb40fc32fb1cbee5bc2376080ff4e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46391878"
---
# <a name="runtimeclassbasetasiid-method"></a>Metodo RuntimeClassBaseT::AsIID

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template<typename T>
__forceinline static HRESULT AsIID(
   _In_ T* implements,
   REFIID riid,
   _Deref_out_ void **ppvObject
);
```

### <a name="parameters"></a>Parametri

*T*<br/>
Un tipo che implementa l'ID di interfaccia specificato dal parametro *riid*.

*Implementa*<br/>
Una variabile del tipo specificato dal parametro di modello *T*.

*riid*<br/>
L'ID di interfaccia da recuperare.

*ppvObject*<br/>
Se questa operazione ha esito positivo, un puntatore-a-a-puntatore all'interfaccia specificata dal parametro *riid*.

## <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, HRESULT che descrive l'errore.

## <a name="remarks"></a>Note

Recupera un puntatore all'ID di interfaccia specificato.

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Struttura RuntimeClassBaseT](../windows/runtimeclassbaset-structure.md)<br/>
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)
---
title: 'Metodo InvokeHelper:: Invoke | Microsoft Docs'
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: reference
f1_keywords:
- event/Microsoft::WRL::Details::InvokeHelper::Invoke
dev_langs:
- C++
helpviewer_keywords:
- Invoke method
ms.assetid: 98618815-c30e-4699-b3dd-203c91b1bf3b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 7d1addd96456a33b30259182e4490df70335d0d3
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46408362"
---
# <a name="invokehelperinvoke-method"></a>Metodo InvokeHelper::Invoke

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
STDMETHOD(
   Invoke
)();
STDMETHOD(
   Invoke
)(typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
```

### <a name="parameters"></a>Parametri

*arg1*<br/>
Argomento 1.

*Arg2*<br/>
Argomento 2.

*arg3*<br/>
Argomento 3.

*Arg4*<br/>
Argomento 4.

*Arg5*<br/>
Argomento 5.

*Arg6*<br/>
Argomento 6.

*Arg7*<br/>
Argomento 7.

*arg8*<br/>
Argomento 8.

*arg9*<br/>
Argomento 9.

## <a name="return-value"></a>Valore restituito

S_OK se l'esito positivo. in caso contrario, HRESULT che descrive l'errore.

## <a name="remarks"></a>Note

Chiama il gestore dell'evento la cui firma contiene il numero di argomenti specificato.

## <a name="requirements"></a>Requisiti

**Intestazione:** Event. h

**Namespace:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Struttura InvokeHelper](../windows/invokehelper-structure.md)<br/>
[Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)
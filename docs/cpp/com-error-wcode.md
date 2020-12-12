---
description: 'Altre informazioni su: _com_error:: WCode'
title: _com_error::WCode
ms.date: 11/04/2016
f1_keywords:
- _com_error::WCode
helpviewer_keywords:
- WCode method [C++]
ms.assetid: f3b21852-f8ea-4e43-bff1-11c2d35454c4
ms.openlocfilehash: e3a19e5ae6c98cb38445e5eaa822474b2a852135
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97295731"
---
# <a name="_com_errorwcode"></a>_com_error::WCode

**Specifico di Microsoft**

Recupera il codice di errore a 16 bit mappato nell'HRESULT incapsulato.

## <a name="syntax"></a>Sintassi

```
WORD WCode ( ) const throw( );
```

## <a name="return-value"></a>Valore restituito

Se HRESULT è compreso nell'intervallo tra 0x80040200 e 0x8004FFFF, il `WCode` metodo restituisce HRESULT meno 0x80040200; in caso contrario, restituisce zero.

## <a name="remarks"></a>Commenti

Il `WCode` metodo viene utilizzato per annullare un mapping che si verifica nel codice di supporto com. Il wrapper per una `dispinterface` proprietà o un metodo chiama una routine di supporto che mette in pacchetto gli argomenti e le chiamate `IDispatch::Invoke` . Quando viene restituito, se viene restituito un errore HRESULT di `DISP_E_EXCEPTION` , le informazioni sull'errore vengono recuperate dalla `EXCEPINFO` struttura passata a `IDispatch::Invoke` . Il codice di errore può essere un valore a 16 bit archiviato nel `wCode` membro della `EXCEPINFO` struttura o un valore intero a 32 bit nel `scode` membro della `EXCEPINFO` struttura. Se viene restituito un valore a 16 bit `wCode` , è necessario prima eseguirne il mapping a un HRESULT di errore a 32 bit.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[_com_error::HRESULTToWCode](../cpp/com-error-hresulttowcode.md)<br/>
[_com_error::WCodeToHRESULT](../cpp/com-error-wcodetohresult.md)<br/>
[Classe _com_error](../cpp/com-error-class.md)

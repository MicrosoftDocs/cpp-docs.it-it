---
title: _com_error::WCode
ms.date: 11/04/2016
f1_keywords:
- _com_error::WCode
helpviewer_keywords:
- WCode method [C++]
ms.assetid: f3b21852-f8ea-4e43-bff1-11c2d35454c4
ms.openlocfilehash: f33871634b516723c94fead847f64ef20d25513f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50620974"
---
# <a name="comerrorwcode"></a>_com_error::WCode

**Sezione specifica Microsoft**

Recupera il codice di errore a 16 bit mappato in HRESULT incapsulato.

## <a name="syntax"></a>Sintassi

```
WORD WCode ( ) const throw( );
```

## <a name="return-value"></a>Valore restituito

Se il valore HRESULT è compreso nell'intervallo tra 0x80040200 e 0x8004FFFF, il `WCode` metodo restituisce il valore HRESULT meno 0x80040200; in caso contrario, restituisce zero.

## <a name="remarks"></a>Note

Il `WCode` metodo viene utilizzato per annullare un mapping che si verifica nel codice di supporto COM. Il wrapper per un `dispinterface` proprietà o il metodo chiama una routine di supporto che assembla gli argomenti e le chiamate `IDispatch::Invoke`. Al termine, se un HRESULT di errore del `DISP_E_EXCEPTION` viene restituito, le informazioni sull'errore vengono recuperati dal `EXCEPINFO` struttura passata al `IDispatch::Invoke`. Il codice di errore possono essere archiviato in un valore a 16 bit il `wCode` membro del `EXCEPINFO` struttura o un valore a 32 bit completo nel `scode` membro del `EXCEPINFO` struttura. Se un bit 16 `wCode` viene restituito, prima deve essere mappato a un HRESULT di errore a 32 bit.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[_com_error::HRESULTToWCode](../cpp/com-error-hresulttowcode.md)<br/>
[_com_error::WCodeToHRESULT](../cpp/com-error-wcodetohresult.md)<br/>
[Classe _com_error](../cpp/com-error-class.md)
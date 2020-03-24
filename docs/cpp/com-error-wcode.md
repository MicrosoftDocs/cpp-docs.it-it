---
title: _com_error::WCode
ms.date: 11/04/2016
f1_keywords:
- _com_error::WCode
helpviewer_keywords:
- WCode method [C++]
ms.assetid: f3b21852-f8ea-4e43-bff1-11c2d35454c4
ms.openlocfilehash: 92dffbdbe034ef55be04c1b7d204be6880d8d4b2
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80190196"
---
# <a name="_com_errorwcode"></a>_com_error::WCode

**Sezione specifica Microsoft**

Recupera il codice di errore a 16 bit mappato nell'HRESULT incapsulato.

## <a name="syntax"></a>Sintassi

```
WORD WCode ( ) const throw( );
```

## <a name="return-value"></a>Valore restituito

Se HRESULT è compreso nell'intervallo tra 0x80040200 e 0x8004FFFF, il metodo `WCode` restituisce HRESULT meno 0x80040200; in caso contrario, restituisce zero.

## <a name="remarks"></a>Osservazioni

Il metodo `WCode` viene utilizzato per annullare un mapping che si verifica nel codice di supporto COM. Il wrapper per una proprietà o un metodo di `dispinterface` chiama una routine di supporto che esegue il package degli argomenti e chiama `IDispatch::Invoke`. Quando viene restituito un errore HRESULT di `DISP_E_EXCEPTION`, le informazioni sull'errore vengono recuperate dalla struttura `EXCEPINFO` passata a `IDispatch::Invoke`. Il codice di errore può essere un valore a 16 bit archiviato nel membro `wCode` della struttura `EXCEPINFO` o un valore intero a 32 bit nel membro `scode` della struttura `EXCEPINFO`. Se viene restituito un `wCode` a 16 bit, è necessario prima eseguirne il mapping a un HRESULT di errore a 32 bit.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[_com_error::HRESULTToWCode](../cpp/com-error-hresulttowcode.md)<br/>
[_com_error::WCodeToHRESULT](../cpp/com-error-wcodetohresult.md)<br/>
[Classe _com_error](../cpp/com-error-class.md)

---
title: _com_error::HRESULTToWCode
ms.date: 11/04/2016
f1_keywords:
- _com_error::HRESULTToWCode
helpviewer_keywords:
- HRESULTToWCode method [C++]
ms.assetid: ff3789f5-1047-41a0-b7e3-86dd8f638dba
ms.openlocfilehash: d89503e822d92bf6a1fcb2b6bb658d532af32c5d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50581233"
---
# <a name="comerrorhresulttowcode"></a>_com_error::HRESULTToWCode

**Sezione specifica Microsoft**

Esegue il mapping di HRESULT a 32 bit a 16 bit `wCode`.

## <a name="syntax"></a>Sintassi

```
static WORD HRESULTToWCode(
   HRESULT hr
) throw( );
```

#### <a name="parameters"></a>Parametri

*risorse umane*<br/>
Il valore HRESULT a 32 bit per eseguire il mapping a 16 bit `wCode`.

## <a name="return-value"></a>Valore restituito

16 bit `wCode` eseguito il mapping di HRESULT a 32 bit.

## <a name="remarks"></a>Note

Visualizzare [_com_error::WCode](../cpp/com-error-wcode.md) per altre informazioni.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[_com_error::WCode](../cpp/com-error-wcode.md)<br/>
[_com_error::WCodeToHRESULT](../cpp/com-error-wcodetohresult.md)<br/>
[Classe _com_error](../cpp/com-error-class.md)
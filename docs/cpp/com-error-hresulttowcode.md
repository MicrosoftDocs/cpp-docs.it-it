---
description: 'Altre informazioni su: _com_error:: HRESULTToWCode'
title: _com_error::HRESULTToWCode
ms.date: 11/04/2016
f1_keywords:
- _com_error::HRESULTToWCode
helpviewer_keywords:
- HRESULTToWCode method [C++]
ms.assetid: ff3789f5-1047-41a0-b7e3-86dd8f638dba
ms.openlocfilehash: 1bbf62be42d4e34a2ef73493f0449c2ffbaf0646
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97295834"
---
# <a name="_com_errorhresulttowcode"></a>_com_error::HRESULTToWCode

**Specifico di Microsoft**

Esegue il mapping di HRESULT a 32 bit a 16 bit `wCode` .

## <a name="syntax"></a>Sintassi

```
static WORD HRESULTToWCode(
   HRESULT hr
) throw( );
```

#### <a name="parameters"></a>Parametri

*h*<br/>
HRESULT a 32 bit da mappare a 16 bit `wCode` .

## <a name="return-value"></a>Valore restituito

`wCode`mappato a 16 bit dall'HRESULT a 32 bit.

## <a name="remarks"></a>Commenti

Per ulteriori informazioni, vedere [_com_error:: wCode](../cpp/com-error-wcode.md) .

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[_com_error::WCode](../cpp/com-error-wcode.md)<br/>
[_com_error::WCodeToHRESULT](../cpp/com-error-wcodetohresult.md)<br/>
[Classe _com_error](../cpp/com-error-class.md)

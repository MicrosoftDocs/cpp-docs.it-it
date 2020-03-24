---
title: _com_error::HRESULTToWCode
ms.date: 11/04/2016
f1_keywords:
- _com_error::HRESULTToWCode
helpviewer_keywords:
- HRESULTToWCode method [C++]
ms.assetid: ff3789f5-1047-41a0-b7e3-86dd8f638dba
ms.openlocfilehash: 35a497c273f15c9755d3607e7907a3a48dad8dc8
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80180563"
---
# <a name="_com_errorhresulttowcode"></a>_com_error::HRESULTToWCode

**Sezione specifica Microsoft**

Esegue il mapping di HRESULT a 32 bit a `wCode`a 16 bit.

## <a name="syntax"></a>Sintassi

```
static WORD HRESULTToWCode(
   HRESULT hr
) throw( );
```

#### <a name="parameters"></a>Parametri

*HR*<br/>
HRESULT a 32 bit da mappare a `wCode`a 16 bit.

## <a name="return-value"></a>Valore restituito

`wCode` a 16 bit mappato dall'HRESULT a 32 bit.

## <a name="remarks"></a>Osservazioni

Per ulteriori informazioni, vedere [_com_error:: wCode](../cpp/com-error-wcode.md) .

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[_com_error::WCode](../cpp/com-error-wcode.md)<br/>
[_com_error::WCodeToHRESULT](../cpp/com-error-wcodetohresult.md)<br/>
[Classe _com_error](../cpp/com-error-class.md)

---
title: _com_error::WCodeToHRESULT
ms.date: 11/04/2016
f1_keywords:
- _com_error::WCodeToHRESULT
helpviewer_keywords:
- WCodeToHRESULT method [C++]
ms.assetid: 0ec43a4b-ca91-42d5-b270-3fde9c8412ea
ms.openlocfilehash: f2194e0e54a93d3227b84d893f9d3f208d972d09
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80180511"
---
# <a name="_com_errorwcodetohresult"></a>_com_error::WCodeToHRESULT

**Sezione specifica Microsoft**

Esegue il mapping di *wCode* a 16 bit a HRESULT a 32 bit.

## <a name="syntax"></a>Sintassi

```
static HRESULT WCodeToHRESULT(
   WORD wCode
) throw( );
```

#### <a name="parameters"></a>Parametri

*wCode*<br/>
*WCode* a 16 bit di cui eseguire il mapping a HRESULT a 32 bit.

## <a name="return-value"></a>Valore restituito

HRESULT a 32 bit mappato da *wCode*a 16 bit.

## <a name="remarks"></a>Osservazioni

Vedere la funzione membro [wCode](../cpp/com-error-wcode.md) .

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[_com_error::WCode](../cpp/com-error-wcode.md)<br/>
[_com_error::HRESULTToWCode](../cpp/com-error-hresulttowcode.md)<br/>
[Classe _com_error](../cpp/com-error-class.md)

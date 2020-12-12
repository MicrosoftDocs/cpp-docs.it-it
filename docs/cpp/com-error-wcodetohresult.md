---
description: 'Altre informazioni su: _com_error:: WCodeToHRESULT'
title: _com_error::WCodeToHRESULT
ms.date: 11/04/2016
f1_keywords:
- _com_error::WCodeToHRESULT
helpviewer_keywords:
- WCodeToHRESULT method [C++]
ms.assetid: 0ec43a4b-ca91-42d5-b270-3fde9c8412ea
ms.openlocfilehash: 9925c34f14f0685cb563e37a8cae0970911f009c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97295718"
---
# <a name="_com_errorwcodetohresult"></a>_com_error::WCodeToHRESULT

**Specifico di Microsoft**

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

HRESULT a 32 bit mappato da *wCode* a 16 bit.

## <a name="remarks"></a>Commenti

Vedere la funzione membro [wCode](../cpp/com-error-wcode.md) .

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[_com_error::WCode](../cpp/com-error-wcode.md)<br/>
[_com_error::HRESULTToWCode](../cpp/com-error-hresulttowcode.md)<br/>
[Classe _com_error](../cpp/com-error-class.md)

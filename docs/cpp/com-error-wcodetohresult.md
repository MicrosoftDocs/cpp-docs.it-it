---
title: _com_error::WCodeToHRESULT
ms.date: 11/04/2016
f1_keywords:
- _com_error::WCodeToHRESULT
helpviewer_keywords:
- WCodeToHRESULT method [C++]
ms.assetid: 0ec43a4b-ca91-42d5-b270-3fde9c8412ea
ms.openlocfilehash: f2fc84be53d95754d21c30eaea8dd981447453d6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50593062"
---
# <a name="comerrorwcodetohresult"></a>_com_error::WCodeToHRESULT

**Sezione specifica Microsoft**

Esegue il mapping a 16 *wCode* a 32 bit HRESULT.

## <a name="syntax"></a>Sintassi

```
static HRESULT WCodeToHRESULT(
   WORD wCode
) throw( );
```

#### <a name="parameters"></a>Parametri

*wCode*<br/>
Il 16-bit *wCode* devono essere mappati a 32 bit HRESULT.

## <a name="return-value"></a>Valore restituito

32 bit HRESULT mappato da 16 bit *wCode*.

## <a name="remarks"></a>Note

Vedere le [WCode](../cpp/com-error-wcode.md) funzione membro.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[_com_error::WCode](../cpp/com-error-wcode.md)<br/>
[_com_error::HRESULTToWCode](../cpp/com-error-hresulttowcode.md)<br/>
[Classe _com_error](../cpp/com-error-class.md)
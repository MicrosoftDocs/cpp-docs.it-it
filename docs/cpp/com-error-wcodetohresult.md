---
title: _com_error::WCodeToHRESULT | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_error::WCodeToHRESULT
dev_langs:
- C++
helpviewer_keywords:
- WCodeToHRESULT method [C++]
ms.assetid: 0ec43a4b-ca91-42d5-b270-3fde9c8412ea
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5b6712734cd7283558ad5776444586f8c0b3fa6e
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46077568"
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
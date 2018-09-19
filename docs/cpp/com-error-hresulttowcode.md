---
title: _com_error::HRESULTToWCode | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_error::HRESULTToWCode
dev_langs:
- C++
helpviewer_keywords:
- HRESULTToWCode method [C++]
ms.assetid: ff3789f5-1047-41a0-b7e3-86dd8f638dba
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c39b638451aa8ea89191e323eae5f2c140563990
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46082066"
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
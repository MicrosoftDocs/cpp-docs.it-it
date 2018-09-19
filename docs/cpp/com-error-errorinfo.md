---
title: _com_error::ErrorInfo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_error::ErrorInfo
dev_langs:
- C++
helpviewer_keywords:
- ErrorInfo method [C++]
ms.assetid: 071b446c-4395-4fb8-bd3d-300a8b25f5cd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1fc2906827e6a465106a3dbdcb8b63c7b53a39ee
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46039348"
---
# <a name="comerrorerrorinfo"></a>_com_error::ErrorInfo

**Sezione specifica Microsoft**

Recupera il `IErrorInfo` oggetto passato al costruttore.

## <a name="syntax"></a>Sintassi

```
IErrorInfo * ErrorInfo( ) const throw( );
```

## <a name="return-value"></a>Valore restituito

L'elemento `IErrorInfo` non elaborato passato nel costruttore.

## <a name="remarks"></a>Note

Recupera incapsulato `IErrorInfo` di elemento un `_com_error` dell'oggetto, o NULL se nessun `IErrorInfo` voce viene registrata. Il chiamante deve chiamare `Release` sull'oggetto restituito al termine utilizzarlo.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_error](../cpp/com-error-class.md)
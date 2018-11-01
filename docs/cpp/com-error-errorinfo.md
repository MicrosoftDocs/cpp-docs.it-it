---
title: _com_error::ErrorInfo
ms.date: 11/04/2016
f1_keywords:
- _com_error::ErrorInfo
helpviewer_keywords:
- ErrorInfo method [C++]
ms.assetid: 071b446c-4395-4fb8-bd3d-300a8b25f5cd
ms.openlocfilehash: 59ada8a7e098e57cca5641a439365851bbae2485
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50559003"
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
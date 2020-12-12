---
description: 'Altre informazioni su: _com_error:: GUID'
title: _com_error::GUID
ms.date: 11/04/2016
f1_keywords:
- _com_error::GUID
helpviewer_keywords:
- GUID method [C++]
ms.assetid: e84c2c23-d02e-48f8-b776-9bd6937296d2
ms.openlocfilehash: 32f88728d5c0f93094413aaeae8fb3c116b415c3
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97295965"
---
# <a name="_com_errorguid"></a>_com_error::GUID

**Specifico di Microsoft**

Chiama la `IErrorInfo::GetGUID` funzione.

## <a name="syntax"></a>Sintassi

```
GUID GUID( ) const throw( );
```

## <a name="return-value"></a>Valore restituito

Restituisce il risultato di `IErrorInfo::GetGUID` per l' `IErrorInfo` oggetto registrato nell' `_com_error` oggetto. Se non `IErrorInfo` viene registrato alcun oggetto, viene restituito `GUID_NULL` .

## <a name="remarks"></a>Commenti

Qualsiasi errore durante la chiamata del `IErrorInfo::GetGUID` metodo viene ignorato.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _com_error](../cpp/com-error-class.md)

---
description: 'Altre informazioni su: _com_error:: ErrorInfo'
title: _com_error::ErrorInfo
ms.date: 11/04/2016
f1_keywords:
- _com_error::ErrorInfo
helpviewer_keywords:
- ErrorInfo method [C++]
ms.assetid: 071b446c-4395-4fb8-bd3d-300a8b25f5cd
ms.openlocfilehash: 36092ae9287352d421bf502ad24c054cf3b7a907
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97296043"
---
# <a name="_com_errorerrorinfo"></a>_com_error::ErrorInfo

**Specifico di Microsoft**

Recupera l' `IErrorInfo` oggetto passato al costruttore.

## <a name="syntax"></a>Sintassi

```
IErrorInfo * ErrorInfo( ) const throw( );
```

## <a name="return-value"></a>Valore restituito

L'elemento `IErrorInfo` non elaborato passato nel costruttore.

## <a name="remarks"></a>Commenti

Recupera l'elemento incapsulato `IErrorInfo` in un `_com_error` oggetto o null se non `IErrorInfo` viene registrato alcun elemento. Al termine dell'utilizzo, il chiamante deve chiamare `Release` sull'oggetto restituito.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _com_error](../cpp/com-error-class.md)

---
title: _com_error::ErrorInfo
ms.date: 11/04/2016
f1_keywords:
- _com_error::ErrorInfo
helpviewer_keywords:
- ErrorInfo method [C++]
ms.assetid: 071b446c-4395-4fb8-bd3d-300a8b25f5cd
ms.openlocfilehash: cedb9ccadc63166c43d980333d93a195254700d8
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80180706"
---
# <a name="_com_errorerrorinfo"></a>_com_error::ErrorInfo

**Sezione specifica Microsoft**

Recupera il `IErrorInfo` oggetto passato al costruttore.

## <a name="syntax"></a>Sintassi

```
IErrorInfo * ErrorInfo( ) const throw( );
```

## <a name="return-value"></a>Valore restituito

L'elemento `IErrorInfo` non elaborato passato nel costruttore.

## <a name="remarks"></a>Osservazioni

Recupera l'elemento `IErrorInfo` incapsulato in un oggetto `_com_error` o NULL se non viene registrato alcun elemento di `IErrorInfo`. Al termine dell'utilizzo, il chiamante deve chiamare `Release` sull'oggetto restituito.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_error](../cpp/com-error-class.md)

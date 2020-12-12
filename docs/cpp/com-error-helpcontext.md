---
description: 'Altre informazioni su: _com_error:: HelpContext'
title: _com_error::HelpContext
ms.date: 11/04/2016
f1_keywords:
- _com_error::HelpContext
helpviewer_keywords:
- HelpContext method [C++]
ms.assetid: 160d6443-9b68-4cf5-a540-50da951a5b2b
ms.openlocfilehash: 757fb572d9e41486af419712eb7f70cd7cfa7b14
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97295939"
---
# <a name="_com_errorhelpcontext"></a>_com_error::HelpContext

**Specifico di Microsoft**

Chiama la `IErrorInfo::GetHelpContext` funzione.

## <a name="syntax"></a>Sintassi

```
DWORD HelpContext( ) const throw( );
```

## <a name="return-value"></a>Valore restituito

Restituisce il risultato di `IErrorInfo::GetHelpContext` per l' `IErrorInfo` oggetto registrato nell' `_com_error` oggetto. Se non `IErrorInfo` viene registrato alcun oggetto, viene restituito zero.

## <a name="remarks"></a>Commenti

Qualsiasi errore durante la chiamata del `IErrorInfo::GetHelpContext` metodo viene ignorato.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _com_error](../cpp/com-error-class.md)

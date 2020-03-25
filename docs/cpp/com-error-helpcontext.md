---
title: _com_error::HelpContext
ms.date: 11/04/2016
f1_keywords:
- _com_error::HelpContext
helpviewer_keywords:
- HelpContext method [C++]
ms.assetid: 160d6443-9b68-4cf5-a540-50da951a5b2b
ms.openlocfilehash: b3c79bb069ef504680e83359d6ec90c803f16d9d
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80180589"
---
# <a name="_com_errorhelpcontext"></a>_com_error::HelpContext

**Sezione specifica Microsoft**

Chiama `IErrorInfo::GetHelpContext` funzione.

## <a name="syntax"></a>Sintassi

```
DWORD HelpContext( ) const throw( );
```

## <a name="return-value"></a>Valore restituito

Restituisce il risultato di `IErrorInfo::GetHelpContext` per l'oggetto `IErrorInfo` registrato nell'oggetto `_com_error`. Se non viene registrato alcun oggetto `IErrorInfo`, viene restituito zero.

## <a name="remarks"></a>Osservazioni

Qualsiasi errore durante la chiamata del metodo `IErrorInfo::GetHelpContext` viene ignorato.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_error](../cpp/com-error-class.md)

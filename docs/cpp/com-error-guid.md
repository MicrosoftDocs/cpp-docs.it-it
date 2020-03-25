---
title: _com_error::GUID
ms.date: 11/04/2016
f1_keywords:
- _com_error::GUID
helpviewer_keywords:
- GUID method [C++]
ms.assetid: e84c2c23-d02e-48f8-b776-9bd6937296d2
ms.openlocfilehash: d5b05cd4e26f89d42ea23b605f5e6560795a0cfa
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80180641"
---
# <a name="_com_errorguid"></a>_com_error::GUID

**Sezione specifica Microsoft**

Chiama `IErrorInfo::GetGUID` funzione.

## <a name="syntax"></a>Sintassi

```
GUID GUID( ) const throw( );
```

## <a name="return-value"></a>Valore restituito

Restituisce il risultato di `IErrorInfo::GetGUID` per l'oggetto `IErrorInfo` registrato nell'oggetto `_com_error`. Se non viene registrato alcun oggetto `IErrorInfo`, viene restituito `GUID_NULL`.

## <a name="remarks"></a>Osservazioni

Qualsiasi errore durante la chiamata del metodo `IErrorInfo::GetGUID` viene ignorato.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_error](../cpp/com-error-class.md)

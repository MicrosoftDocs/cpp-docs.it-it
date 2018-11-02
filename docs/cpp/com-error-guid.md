---
title: _com_error::GUID
ms.date: 11/04/2016
f1_keywords:
- _com_error::GUID
helpviewer_keywords:
- GUID method [C++]
ms.assetid: e84c2c23-d02e-48f8-b776-9bd6937296d2
ms.openlocfilehash: 905b67577a65b81be0b4d18c7513652dd8c5f055
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50661630"
---
# <a name="comerrorguid"></a>_com_error::GUID

**Sezione specifica Microsoft**

Le chiamate `IErrorInfo::GetGUID` (funzione).

## <a name="syntax"></a>Sintassi

```
GUID GUID( ) const throw( );
```

## <a name="return-value"></a>Valore restituito

Restituisce il risultato del `IErrorInfo::GetGUID` per il `IErrorInfo` registrato nel `_com_error` oggetto. Se nessun `IErrorInfo` viene registrato, viene restituito `GUID_NULL`.

## <a name="remarks"></a>Note

Qualsiasi errore durante la chiamata di `IErrorInfo::GetGUID` metodo viene ignorato.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_error](../cpp/com-error-class.md)
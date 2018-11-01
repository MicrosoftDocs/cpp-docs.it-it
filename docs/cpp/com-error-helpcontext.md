---
title: _com_error::HelpContext
ms.date: 11/04/2016
f1_keywords:
- _com_error::HelpContext
helpviewer_keywords:
- HelpContext method [C++]
ms.assetid: 160d6443-9b68-4cf5-a540-50da951a5b2b
ms.openlocfilehash: a421a7fd7fa0817c74dac66946e28928b2ad82dc
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50648708"
---
# <a name="comerrorhelpcontext"></a>_com_error::HelpContext

**Sezione specifica Microsoft**

Le chiamate `IErrorInfo::GetHelpContext` (funzione).

## <a name="syntax"></a>Sintassi

```
DWORD HelpContext( ) const throw( );
```

## <a name="return-value"></a>Valore restituito

Restituisce il risultato del `IErrorInfo::GetHelpContext` per il `IErrorInfo` registrato nel `_com_error` oggetto. Se nessun `IErrorInfo` è registrato, restituisce zero.

## <a name="remarks"></a>Note

Qualsiasi errore durante la chiamata di `IErrorInfo::GetHelpContext` metodo viene ignorato.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_error](../cpp/com-error-class.md)
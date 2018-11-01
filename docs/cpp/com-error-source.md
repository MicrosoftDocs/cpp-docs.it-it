---
title: _com_error::Source
ms.date: 11/04/2016
f1_keywords:
- _com_error::Source
helpviewer_keywords:
- Source method [C++]
ms.assetid: 55353741-fabc-4b0c-9787-b5a69bb189f2
ms.openlocfilehash: 682070877f269967405677d027b20707c8366f61
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50644431"
---
# <a name="comerrorsource"></a>_com_error::Source

**Sezione specifica Microsoft**

Le chiamate `IErrorInfo::GetSource` (funzione).

## <a name="syntax"></a>Sintassi

```
_bstr_t Source() const;
```

## <a name="return-value"></a>Valore restituito

Restituisce il risultato del `IErrorInfo::GetSource` per il `IErrorInfo` registrato nel `_com_error` oggetto. La stringa `BSTR` risultante viene incapsulata in un oggetto `_bstr_t`. Se nessun `IErrorInfo` viene registrato, restituisce un oggetto vuoto `_bstr_t`.

## <a name="remarks"></a>Note

Qualsiasi errore durante la chiamata di `IErrorInfo::GetSource` metodo viene ignorato.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_error](../cpp/com-error-class.md)
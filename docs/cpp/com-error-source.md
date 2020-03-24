---
title: _com_error::Source
ms.date: 11/04/2016
f1_keywords:
- _com_error::Source
helpviewer_keywords:
- Source method [C++]
ms.assetid: 55353741-fabc-4b0c-9787-b5a69bb189f2
ms.openlocfilehash: 43dd21297ddd54863d535402dddd59243d589eec
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80180524"
---
# <a name="_com_errorsource"></a>_com_error::Source

**Sezione specifica Microsoft**

Chiama `IErrorInfo::GetSource` funzione.

## <a name="syntax"></a>Sintassi

```
_bstr_t Source() const;
```

## <a name="return-value"></a>Valore restituito

Restituisce il risultato di `IErrorInfo::GetSource` per l'oggetto `IErrorInfo` registrato nell'oggetto `_com_error`. La stringa `BSTR` risultante viene incapsulata in un oggetto `_bstr_t`. Se non viene registrato alcun `IErrorInfo`, viene restituita una `_bstr_t`vuota.

## <a name="remarks"></a>Osservazioni

Qualsiasi errore durante la chiamata del metodo `IErrorInfo::GetSource` viene ignorato.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_error](../cpp/com-error-class.md)

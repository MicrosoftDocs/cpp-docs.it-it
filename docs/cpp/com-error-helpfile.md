---
title: _com_error::HelpFile
ms.date: 11/04/2016
f1_keywords:
- _com_error::HelpFile
helpviewer_keywords:
- HelpFile method [C++]
ms.assetid: d2d3a0a1-6b62-4d52-a818-3cfae545a4af
ms.openlocfilehash: 775adfa7d5dd5aca098edcd793c2164d65fe7efa
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80190222"
---
# <a name="_com_errorhelpfile"></a>_com_error::HelpFile

**Sezione specifica Microsoft**

Chiama `IErrorInfo::GetHelpFile` funzione.

## <a name="syntax"></a>Sintassi

```
_bstr_t HelpFile() const;
```

## <a name="return-value"></a>Valore restituito

Restituisce il risultato di `IErrorInfo::GetHelpFile` per l'oggetto `IErrorInfo` registrato nell'oggetto `_com_error`. La stringa BSTR risultante viene incapsulata in un oggetto `_bstr_t`. Se non viene registrato alcun `IErrorInfo`, viene restituita una `_bstr_t`vuota.

## <a name="remarks"></a>Osservazioni

Qualsiasi errore durante la chiamata del metodo `IErrorInfo::GetHelpFile` viene ignorato.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_error](../cpp/com-error-class.md)

---
description: 'Altre informazioni su: _com_error:: filelima'
title: _com_error::HelpFile
ms.date: 11/04/2016
f1_keywords:
- _com_error::HelpFile
helpviewer_keywords:
- HelpFile method [C++]
ms.assetid: d2d3a0a1-6b62-4d52-a818-3cfae545a4af
ms.openlocfilehash: e45785913a8a5a1909f702bce672727171e0baef
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97295926"
---
# <a name="_com_errorhelpfile"></a>_com_error::HelpFile

**Specifico di Microsoft**

Chiama la `IErrorInfo::GetHelpFile` funzione.

## <a name="syntax"></a>Sintassi

```
_bstr_t HelpFile() const;
```

## <a name="return-value"></a>Valore restituito

Restituisce il risultato di `IErrorInfo::GetHelpFile` per l' `IErrorInfo` oggetto registrato nell' `_com_error` oggetto. La stringa BSTR risultante viene incapsulata in un oggetto `_bstr_t`. Se non `IErrorInfo` viene registrato alcun oggetto, viene restituito un oggetto vuoto `_bstr_t` .

## <a name="remarks"></a>Commenti

Qualsiasi errore durante la chiamata del `IErrorInfo::GetHelpFile` metodo viene ignorato.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _com_error](../cpp/com-error-class.md)

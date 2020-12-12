---
description: 'Altre informazioni su: _com_error:: Source'
title: _com_error::Source
ms.date: 11/04/2016
f1_keywords:
- _com_error::Source
helpviewer_keywords:
- Source method [C++]
ms.assetid: 55353741-fabc-4b0c-9787-b5a69bb189f2
ms.openlocfilehash: 3b6cf35420454e8285d3d8b4deee3df8fe8771e4
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97295770"
---
# <a name="_com_errorsource"></a>_com_error::Source

**Specifico di Microsoft**

Chiama la `IErrorInfo::GetSource` funzione.

## <a name="syntax"></a>Sintassi

```
_bstr_t Source() const;
```

## <a name="return-value"></a>Valore restituito

Restituisce il risultato di `IErrorInfo::GetSource` per l' `IErrorInfo` oggetto registrato nell' `_com_error` oggetto. La stringa `BSTR` risultante viene incapsulata in un oggetto `_bstr_t`. Se non `IErrorInfo` viene registrato alcun oggetto, viene restituito un oggetto vuoto `_bstr_t` .

## <a name="remarks"></a>Commenti

Qualsiasi errore durante la chiamata del `IErrorInfo::GetSource` metodo viene ignorato.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _com_error](../cpp/com-error-class.md)

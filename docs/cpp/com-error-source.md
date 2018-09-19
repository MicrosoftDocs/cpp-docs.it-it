---
title: _com_error::Source | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_error::Source
dev_langs:
- C++
helpviewer_keywords:
- Source method [C++]
ms.assetid: 55353741-fabc-4b0c-9787-b5a69bb189f2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 69baf10012a461d60c6e7ae2d95a523ec725c255
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46116542"
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
---
title: _com_error::HelpFile
ms.date: 11/04/2016
f1_keywords:
- _com_error::HelpFile
helpviewer_keywords:
- HelpFile method [C++]
ms.assetid: d2d3a0a1-6b62-4d52-a818-3cfae545a4af
ms.openlocfilehash: 826ac53f001355127f16b7ad2a7583a0f8800de7
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62155033"
---
# <a name="comerrorhelpfile"></a>_com_error::HelpFile

**Sezione specifica Microsoft**

Le chiamate `IErrorInfo::GetHelpFile` (funzione).

## <a name="syntax"></a>Sintassi

```
_bstr_t HelpFile() const;
```

## <a name="return-value"></a>Valore restituito

Restituisce il risultato del `IErrorInfo::GetHelpFile` per il `IErrorInfo` registrato nel `_com_error` oggetto. La stringa BSTR risultante viene incapsulata in un oggetto `_bstr_t`. Se nessun `IErrorInfo` viene registrato, restituisce un oggetto vuoto `_bstr_t`.

## <a name="remarks"></a>Note

Qualsiasi errore durante la chiamata di `IErrorInfo::GetHelpFile` metodo viene ignorato.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_error](../cpp/com-error-class.md)
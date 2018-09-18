---
title: _com_error::GUID | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_error::GUID
dev_langs:
- C++
helpviewer_keywords:
- GUID method [C++]
ms.assetid: e84c2c23-d02e-48f8-b776-9bd6937296d2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f63d81fa8550bd9cbb7c051803c0d1e891cefe15
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46031056"
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
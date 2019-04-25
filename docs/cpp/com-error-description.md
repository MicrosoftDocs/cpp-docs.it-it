---
title: _com_error::Description
ms.date: 11/04/2016
f1_keywords:
- _com_error::Description
helpviewer_keywords:
- Description method [C++]
ms.assetid: 88191e24-4ee8-44a6-8c4c-3758e22e0548
ms.openlocfilehash: a517c40e9adfbda2d790ce41a48ccf8658bcd3e0
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62155111"
---
# <a name="comerrordescription"></a>_com_error::Description

**Sezione specifica Microsoft**

Le chiamate `IErrorInfo::GetDescription` (funzione).

## <a name="syntax"></a>Sintassi

```
_bstr_t Description( ) const;
```

## <a name="return-value"></a>Valore restituito

Restituisce il risultato del `IErrorInfo::GetDescription` per il `IErrorInfo` registrato nel `_com_error` oggetto. La stringa `BSTR` risultante viene incapsulata in un oggetto `_bstr_t`. Se nessun `IErrorInfo` viene registrato, restituisce un oggetto vuoto `_bstr_t`.

## <a name="remarks"></a>Note

Chiama il `IErrorInfo::GetDescription` funzione e recupera `IErrorInfo` registrato nel `_com_error` oggetto. Qualsiasi errore durante la chiamata di `IErrorInfo::GetDescription` metodo viene ignorato.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_error](../cpp/com-error-class.md)
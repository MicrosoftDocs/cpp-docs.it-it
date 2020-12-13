---
description: 'Altre informazioni su: _com_error::D Descrizione'
title: _com_error::Description
ms.date: 11/04/2016
f1_keywords:
- _com_error::Description
helpviewer_keywords:
- Description method [C++]
ms.assetid: 88191e24-4ee8-44a6-8c4c-3758e22e0548
ms.openlocfilehash: 6404d16361abe81d9e234a6b63039a7476d91ef1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97332556"
---
# <a name="_com_errordescription"></a>_com_error::Description

**Specifico di Microsoft**

Chiama la `IErrorInfo::GetDescription` funzione.

## <a name="syntax"></a>Sintassi

```
_bstr_t Description( ) const;
```

## <a name="return-value"></a>Valore restituito

Restituisce il risultato di `IErrorInfo::GetDescription` per l' `IErrorInfo` oggetto registrato nell' `_com_error` oggetto. La stringa `BSTR` risultante viene incapsulata in un oggetto `_bstr_t`. Se non `IErrorInfo` viene registrato alcun oggetto, viene restituito un oggetto vuoto `_bstr_t` .

## <a name="remarks"></a>Commenti

Chiama la `IErrorInfo::GetDescription` funzione e recupera i `IErrorInfo` record registrati all'interno dell' `_com_error` oggetto. Qualsiasi errore durante la chiamata del `IErrorInfo::GetDescription` metodo viene ignorato.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _com_error](../cpp/com-error-class.md)

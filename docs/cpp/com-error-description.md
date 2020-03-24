---
title: _com_error::Description
ms.date: 11/04/2016
f1_keywords:
- _com_error::Description
helpviewer_keywords:
- Description method [C++]
ms.assetid: 88191e24-4ee8-44a6-8c4c-3758e22e0548
ms.openlocfilehash: de2275f096fe2fde96e64cbc3034602a1fde5e88
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80180771"
---
# <a name="_com_errordescription"></a>_com_error::Description

**Sezione specifica Microsoft**

Chiama `IErrorInfo::GetDescription` funzione.

## <a name="syntax"></a>Sintassi

```
_bstr_t Description( ) const;
```

## <a name="return-value"></a>Valore restituito

Restituisce il risultato di `IErrorInfo::GetDescription` per l'oggetto `IErrorInfo` registrato nell'oggetto `_com_error`. La stringa `BSTR` risultante viene incapsulata in un oggetto `_bstr_t`. Se non viene registrato alcun `IErrorInfo`, viene restituita una `_bstr_t`vuota.

## <a name="remarks"></a>Osservazioni

Chiama la funzione `IErrorInfo::GetDescription` e recupera `IErrorInfo` registrati all'interno dell'oggetto `_com_error`. Qualsiasi errore durante la chiamata del metodo `IErrorInfo::GetDescription` viene ignorato.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_error](../cpp/com-error-class.md)

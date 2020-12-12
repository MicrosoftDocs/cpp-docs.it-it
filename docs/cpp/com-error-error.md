---
description: 'Altre informazioni su: _com_error:: Error'
title: _com_error::Error
ms.date: 11/04/2016
f1_keywords:
- _com_error::Error
- Error
helpviewer_keywords:
- Error method [C++]
ms.assetid: b53a15fd-198e-4276-afcd-13439c4807f7
ms.openlocfilehash: 25dd78caeada9e7606bc26f241126b0d0f510f4c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318195"
---
# <a name="_com_errorerror"></a>_com_error::Error

**Specifico di Microsoft**

Recupera il valore HRESULT passato al costruttore.

## <a name="syntax"></a>Sintassi

```
HRESULT Error( ) const throw( );
```

## <a name="return-value"></a>Valore restituito

Elemento HRESULT non elaborato passato al costruttore.

## <a name="remarks"></a>Commenti

Recupera l'elemento HRESULT incapsulato in un `_com_error` oggetto.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _com_error](../cpp/com-error-class.md)

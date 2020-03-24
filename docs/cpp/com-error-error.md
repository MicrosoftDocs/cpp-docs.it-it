---
title: _com_error::Error
ms.date: 11/04/2016
f1_keywords:
- _com_error::Error
- Error
helpviewer_keywords:
- Error method [C++]
ms.assetid: b53a15fd-198e-4276-afcd-13439c4807f7
ms.openlocfilehash: 8e2c52d10b15822703329dcea18944773f5784ea
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80180758"
---
# <a name="_com_errorerror"></a>_com_error::Error

**Sezione specifica Microsoft**

Recupera il valore HRESULT passato al costruttore.

## <a name="syntax"></a>Sintassi

```
HRESULT Error( ) const throw( );
```

## <a name="return-value"></a>Valore restituito

Elemento HRESULT non elaborato passato al costruttore.

## <a name="remarks"></a>Osservazioni

Recupera l'elemento HRESULT incapsulato in un oggetto `_com_error`.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_error](../cpp/com-error-class.md)

---
title: _com_error::Error
ms.date: 11/04/2016
f1_keywords:
- _com_error::Error
- Error
helpviewer_keywords:
- Error method [C++]
ms.assetid: b53a15fd-198e-4276-afcd-13439c4807f7
ms.openlocfilehash: 606f553060e71ece18b3d48159ec40133be28965
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50465468"
---
# <a name="comerrorerror"></a>_com_error::Error

**Sezione specifica Microsoft**

Recupera il valore HRESULT passato al costruttore.

## <a name="syntax"></a>Sintassi

```
HRESULT Error( ) const throw( );
```

## <a name="return-value"></a>Valore restituito

Elemento HRESULT non elaborato passato al costruttore.

## <a name="remarks"></a>Note

Recupera l'elemento HRESULT incapsulato in un `_com_error` oggetto.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_error](../cpp/com-error-class.md)
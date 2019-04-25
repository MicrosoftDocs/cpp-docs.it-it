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
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62155098"
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
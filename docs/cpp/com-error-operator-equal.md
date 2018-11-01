---
title: _com_error::operator =
ms.date: 11/04/2016
f1_keywords:
- _com_error::operator=
helpviewer_keywords:
- operator= _com_error objects
- = operator [C++], with specific Visual C++ objects
- operator = _com_error objects
ms.assetid: b9cc4094-d055-450c-b45a-0a95317488f8
ms.openlocfilehash: 68eb486ec109d98890ebf3adc0c086368380142b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50449595"
---
# <a name="comerroroperator-"></a>_com_error::operator =

**Sezione specifica Microsoft**

Assegnare un oggetto `_com_error` esistente a un altro.

## <a name="syntax"></a>Sintassi

```
_com_error& operator = (
   const _com_error& that
) throw ( );
```

#### <a name="parameters"></a>Parametri

*che*<br/>
Oggetto `_com_error`.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_error](../cpp/com-error-class.md)
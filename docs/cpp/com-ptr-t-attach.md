---
title: _com_ptr_t::Attach
ms.date: 11/04/2016
f1_keywords:
- _com_ptr_t::Attach
helpviewer_keywords:
- COM interfaces, attach pointer
- Attach method [C++]
ms.assetid: 94c18e0a-06be-4ca7-bdaf-cd54ec0a645e
ms.openlocfilehash: 057d784bb495aefaeec1b86697a7421f6464cbd7
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81745077"
---
# <a name="_com_ptr_tattach"></a>_com_ptr_t::Attach

**Specifico di Microsoft**

Incapsula un puntatore a interfaccia raw di questo tipo di puntatore intelligente.

## <a name="syntax"></a>Sintassi

```cpp
void Attach( Interface* pInterface ) throw( );
void Attach( Interface* pInterface, bool fAddRef ) throw( );
```

#### <a name="parameters"></a>Parametri

*pInterfaccia*<br/>
Puntatore a interfaccia raw.

*fAddRef (in modo infuso)*<br/>
Se è TRUE, `AddRef` allora viene chiamato. Se è FALSE, `_com_ptr_t` l'oggetto assume la proprietà `AddRef`del puntatore a interfaccia non elaborato senza chiamare .

## <a name="remarks"></a>Osservazioni

- **Attach(**  *pInterface*  **)** `AddRef` non viene chiamato. La proprietà dell'interfaccia viene passata a questo oggetto `_com_ptr_t`. `Release`viene chiamato per diminuire il conteggio dei riferimenti per il puntatore incapsulato in precedenza.

- **Attach(**  *pInterface* **,**  *fAddRef*  **)** Se *fAddRef* è `AddRef` TRUE, viene chiamato per incrementare il conteggio dei riferimenti per il puntatore a interfaccia incapsulata. Se *fAddRef* è `_com_ptr_t` FALSE, questo oggetto assume la `AddRef`proprietà del puntatore a interfaccia non elaborato senza chiamare . `Release`viene chiamato per diminuire il conteggio dei riferimenti per il puntatore incapsulato in precedenza.

**FINE Specifico di Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)

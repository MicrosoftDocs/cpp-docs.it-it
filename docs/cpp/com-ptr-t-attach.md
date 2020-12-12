---
description: 'Altre informazioni su: _com_ptr_t:: Connetti'
title: _com_ptr_t::Attach
ms.date: 11/04/2016
f1_keywords:
- _com_ptr_t::Attach
helpviewer_keywords:
- COM interfaces, attach pointer
- Attach method [C++]
ms.assetid: 94c18e0a-06be-4ca7-bdaf-cd54ec0a645e
ms.openlocfilehash: 5b27a4bd6572f2f1429766328c01f377672ee11d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97295653"
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

*pInterface*<br/>
Puntatore a interfaccia raw.

*fAddRef*<br/>
In caso contrario **`true`** , `AddRef` viene chiamato. In caso **`false`** contrario, l' `_com_ptr_t` oggetto acquisisce la proprietà del puntatore a interfaccia raw senza chiamare `AddRef` .

## <a name="remarks"></a>Commenti

- **Connetti (**  *pInterface*  **)** `AddRef` non viene chiamato. La proprietà dell'interfaccia viene passata a questo oggetto `_com_ptr_t`. `Release` viene chiamato per decrementare il conteggio dei riferimenti per il puntatore incapsulato in precedenza.

- **Connetti (**  *pInterface* **,**  *fAddRef*  **)** Se *fAddRef* è **`true`** , `AddRef` viene chiamato per incrementare il conteggio dei riferimenti per il puntatore a interfaccia incapsulato. Se *fAddRef* è **`false`** , questo `_com_ptr_t` oggetto acquisisce la proprietà del puntatore a interfaccia raw senza chiamare `AddRef` . `Release` viene chiamato per decrementare il conteggio dei riferimenti per il puntatore incapsulato in precedenza.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)

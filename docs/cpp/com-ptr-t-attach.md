---
title: _com_ptr_t::Attach
ms.date: 11/04/2016
f1_keywords:
- _com_ptr_t::Attach
helpviewer_keywords:
- COM interfaces, attach pointer
- Attach method [C++]
ms.assetid: 94c18e0a-06be-4ca7-bdaf-cd54ec0a645e
ms.openlocfilehash: 4b4b7a21d12cc645c486dd93d555510c1e716563
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62154890"
---
# <a name="comptrtattach"></a>_com_ptr_t::Attach

**Sezione specifica Microsoft**

Incapsula un puntatore a interfaccia raw di questo tipo di puntatore intelligente.

## <a name="syntax"></a>Sintassi

```
void Attach( Interface* pInterface ) throw( );
void Attach( Interface* pInterface, bool fAddRef ) throw( );
```

#### <a name="parameters"></a>Parametri

*pInterface*<br/>
Puntatore a interfaccia raw.

*fAddRef*<br/>
Se è TRUE, quindi `AddRef` viene chiamato. Se è FALSE, il `_com_ptr_t` oggetto acquisisce la proprietà del puntatore a interfaccia raw senza chiamare `AddRef`.

## <a name="remarks"></a>Note

- **Collega (***pInterface***)** `AddRef` non viene chiamato. La proprietà dell'interfaccia viene passata a questo oggetto `_com_ptr_t`. `Release` viene chiamato per diminuire il conteggio dei riferimenti del puntatore incapsulato in precedenza.

- **Collega (***pInterface* **,***fAddRef***)** se *fAddRef* è TRUE, `AddRef`viene chiamato per incrementare il conteggio dei riferimenti per il puntatore a interfaccia incapsulato. Se *fAddRef* è FALSE, questa `_com_ptr_t` oggetto acquisisce la proprietà del puntatore a interfaccia raw senza chiamare `AddRef`. `Release` viene chiamato per diminuire il conteggio dei riferimenti del puntatore incapsulato in precedenza.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)
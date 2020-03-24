---
title: _com_ptr_t::Attach
ms.date: 11/04/2016
f1_keywords:
- _com_ptr_t::Attach
helpviewer_keywords:
- COM interfaces, attach pointer
- Attach method [C++]
ms.assetid: 94c18e0a-06be-4ca7-bdaf-cd54ec0a645e
ms.openlocfilehash: 870e3580ed23ce994d832f7c59b951680d725e41
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80180498"
---
# <a name="_com_ptr_tattach"></a>_com_ptr_t::Attach

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
Se è TRUE, viene chiamato `AddRef`. Se è FALSE, l'oggetto `_com_ptr_t` acquisisce la proprietà del puntatore a interfaccia raw senza chiamare `AddRef`.

## <a name="remarks"></a>Osservazioni

- Il `AddRef` di **connessione (** *pInterface* **)** non viene chiamato. La proprietà dell'interfaccia viene passata a questo oggetto `_com_ptr_t`. `Release` viene chiamato per decrementare il conteggio dei riferimenti per il puntatore incapsulato in precedenza.

- **Connetti (**  *pInterface* **,**  *fAddRef*  **)** Se *fAddRef* è true, viene chiamato `AddRef` per incrementare il conteggio dei riferimenti per il puntatore a interfaccia incapsulato. Se *fAddRef* è false, questo `_com_ptr_t` oggetto acquisisce la proprietà del puntatore a interfaccia raw senza chiamare `AddRef`. `Release` viene chiamato per decrementare il conteggio dei riferimenti per il puntatore incapsulato in precedenza.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)

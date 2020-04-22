---
title: _com_ptr_t::Release
ms.date: 11/04/2016
f1_keywords:
- _com_ptr_t.Release
- _com_ptr_t::Release
helpviewer_keywords:
- Release method [C++]
ms.assetid: db448b34-0efa-4f02-b701-ad1ca3ae6ca5
ms.openlocfilehash: 73de3c2d19063f0738b8b0a3c510ea520f58de0b
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81745052"
---
# <a name="_com_ptr_trelease"></a>_com_ptr_t::Release

**Specifico di Microsoft**

Chiama **Release** la funzione `IUnknown` membro Release di sul puntatore a interfaccia incapsulato.

## <a name="syntax"></a>Sintassi

```cpp
void Release( );
```

## <a name="remarks"></a>Osservazioni

Chiama `IUnknown::Release` il puntatore a interfaccia `E_POINTER` incapsulato, generando un errore se questo puntatore a interfaccia è NULL.

**FINE Specifico di Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)

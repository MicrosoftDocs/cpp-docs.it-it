---
title: _com_ptr_t::AddRef
ms.date: 11/04/2016
f1_keywords:
- _com_ptr_t::AddRef
helpviewer_keywords:
- AddRef method [C++], interface pointers
ms.assetid: c104dac3-aad3-40bb-a298-75c6cd0e63a2
ms.openlocfilehash: 4dcf643357c9b368d4b2ea3bc51e6567acf45a44
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81745100"
---
# <a name="_com_ptr_taddref"></a>_com_ptr_t::AddRef

**Specifico di Microsoft**

Chiama `AddRef` la funzione `IUnknown` membro di sul puntatore a interfaccia incapsulato.

## <a name="syntax"></a>Sintassi

```cpp
void AddRef( );
```

## <a name="remarks"></a>Osservazioni

Chiama `IUnknown::AddRef` il puntatore a interfaccia `E_POINTER` incapsulato, generando un errore se il puntatore è NULL.

**FINE Specifico di Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)

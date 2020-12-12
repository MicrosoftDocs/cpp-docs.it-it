---
description: 'Altre informazioni su: _com_ptr_t:: AddRef'
title: _com_ptr_t::AddRef
ms.date: 11/04/2016
f1_keywords:
- _com_ptr_t::AddRef
helpviewer_keywords:
- AddRef method [C++], interface pointers
ms.assetid: c104dac3-aad3-40bb-a298-75c6cd0e63a2
ms.openlocfilehash: 0979245662a94596307b1a63af918d0ce67c7b6f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97295692"
---
# <a name="_com_ptr_taddref"></a>_com_ptr_t::AddRef

**Specifico di Microsoft**

Chiama la `AddRef` funzione membro di `IUnknown` sul puntatore a interfaccia incapsulato.

## <a name="syntax"></a>Sintassi

```cpp
void AddRef( );
```

## <a name="remarks"></a>Osservazioni

Chiama `IUnknown::AddRef` sul puntatore a interfaccia incapsulato, generando un `E_POINTER` errore se il puntatore è null.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)

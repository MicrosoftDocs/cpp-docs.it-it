---
title: _com_ptr_t::AddRef
ms.date: 11/04/2016
f1_keywords:
- _com_ptr_t::AddRef
helpviewer_keywords:
- AddRef method [C++], interface pointers
ms.assetid: c104dac3-aad3-40bb-a298-75c6cd0e63a2
ms.openlocfilehash: 51182b461aeac83c12bb18a573a49b2d4347a190
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80189929"
---
# <a name="_com_ptr_taddref"></a>_com_ptr_t::AddRef

**Sezione specifica Microsoft**

Chiama la funzione membro `AddRef` di `IUnknown` sul puntatore a interfaccia incapsulato.

## <a name="syntax"></a>Sintassi

```
void AddRef( );
```

## <a name="remarks"></a>Osservazioni

Chiama `IUnknown::AddRef` sul puntatore a interfaccia incapsulato, generando un errore `E_POINTER` se il puntatore è NULL.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)

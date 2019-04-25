---
title: _com_ptr_t::AddRef
ms.date: 11/04/2016
f1_keywords:
- _com_ptr_t::AddRef
helpviewer_keywords:
- AddRef method [C++], interface pointers
ms.assetid: c104dac3-aad3-40bb-a298-75c6cd0e63a2
ms.openlocfilehash: 7408b5c174f76673b56caffd56aaa87895bd08d4
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62154942"
---
# <a name="comptrtaddref"></a>_com_ptr_t::AddRef

**Sezione specifica Microsoft**

Chiama il `AddRef` funzione membro di `IUnknown` sul puntatore a interfaccia incapsulato.

## <a name="syntax"></a>Sintassi

```
void AddRef( );
```

## <a name="remarks"></a>Note

Le chiamate `IUnknown::AddRef` sul puntatore a interfaccia incapsulato, che genera un `E_POINTER` errore se il puntatore è NULL.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)
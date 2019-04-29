---
title: _com_ptr_t::Release
ms.date: 11/04/2016
f1_keywords:
- _com_ptr_t.Release
- _com_ptr_t::Release
helpviewer_keywords:
- Release method [C++]
ms.assetid: db448b34-0efa-4f02-b701-ad1ca3ae6ca5
ms.openlocfilehash: cf4cea35386d1f781d6d2946c1730ba2e18dacea
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62399226"
---
# <a name="comptrtrelease"></a>_com_ptr_t::Release

**Sezione specifica Microsoft**

Chiama il **Release** funzione di membro di `IUnknown` sul puntatore a interfaccia incapsulato.

## <a name="syntax"></a>Sintassi

```
void Release( );
```

## <a name="remarks"></a>Note

Le chiamate `IUnknown::Release` sul puntatore a interfaccia incapsulato, che genera un `E_POINTER` errore se il puntatore di interfaccia è NULL.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)
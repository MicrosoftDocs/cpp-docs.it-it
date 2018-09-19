---
title: _com_ptr_t::Detach | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- _com_ptr_t::Detach
dev_langs:
- C++
helpviewer_keywords:
- Detach method [C++]
ms.assetid: 0652053e-af37-44e9-a278-2522212ebfed
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a7f2f44df96ca339e5d8e4b251b5f2d259cb606b
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46092141"
---
# <a name="comptrtdetach"></a>_com_ptr_t::Detach

**Sezione specifica Microsoft**

Estrae e restituisce un puntatore a interfaccia incapsulato.

## <a name="syntax"></a>Sintassi

```
Interface* Detach( ) throw( );
```

## <a name="remarks"></a>Note

Estrae e restituisce un puntatore a interfaccia incapsulato, quindi Cancella lo spazio di archiviazione puntatore incapsulato su NULL. In questo modo il puntatore a interfaccia viene rimosso dall'incapsulamento. È responsabilità dell'utente per chiamare `Release` sul puntatore a interfaccia restituito.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)
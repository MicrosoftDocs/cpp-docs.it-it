---
title: _com_ptr_t::Detach
ms.date: 11/04/2016
f1_keywords:
- _com_ptr_t::Detach
helpviewer_keywords:
- Detach method [C++]
ms.assetid: 0652053e-af37-44e9-a278-2522212ebfed
ms.openlocfilehash: 8ba42f19e3474cc4a3199771f761b021221f430e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80190014"
---
# <a name="_com_ptr_tdetach"></a>_com_ptr_t::Detach

**Sezione specifica Microsoft**

Estrae e restituisce un puntatore a interfaccia incapsulato.

## <a name="syntax"></a>Sintassi

```
Interface* Detach( ) throw( );
```

## <a name="remarks"></a>Osservazioni

Estrae e restituisce un puntatore a interfaccia incapsulato, quindi cancella lo spazio di archiviazione del puntatore incapsulato impostandolo su NULL. In questo modo il puntatore a interfaccia viene rimosso dall'incapsulamento. È necessario chiamare `Release` sul puntatore a interfaccia restituito.

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)

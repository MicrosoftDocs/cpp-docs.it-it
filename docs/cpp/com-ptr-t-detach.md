---
title: _com_ptr_t::Detach
ms.date: 11/04/2016
f1_keywords:
- _com_ptr_t::Detach
helpviewer_keywords:
- Detach method [C++]
ms.assetid: 0652053e-af37-44e9-a278-2522212ebfed
ms.openlocfilehash: affaefd8af4802836733587af62977171ba01410
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62154968"
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
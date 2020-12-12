---
description: 'Altre informazioni su: _com_ptr_t::D etach'
title: _com_ptr_t::Detach
ms.date: 11/04/2016
f1_keywords:
- _com_ptr_t::Detach
helpviewer_keywords:
- Detach method [C++]
ms.assetid: 0652053e-af37-44e9-a278-2522212ebfed
ms.openlocfilehash: ec2a18a04b8c32e373225235fd0d6f520e768af0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97295510"
---
# <a name="_com_ptr_tdetach"></a>_com_ptr_t::Detach

**Specifico di Microsoft**

Estrae e restituisce un puntatore a interfaccia incapsulato.

## <a name="syntax"></a>Sintassi

```
Interface* Detach( ) throw( );
```

## <a name="remarks"></a>Osservazioni

Estrae e restituisce un puntatore a interfaccia incapsulato, quindi cancella lo spazio di archiviazione del puntatore incapsulato impostandolo su NULL. In questo modo il puntatore a interfaccia viene rimosso dall'incapsulamento. È necessario chiamare `Release` sul puntatore a interfaccia restituito.

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedi anche

[Classe _com_ptr_t](../cpp/com-ptr-t-class.md)

---
description: 'Altre informazioni su: Struttura InterfaceListHelper'
title: InterfaceListHelper (struttura)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::InterfaceListHelper
helpviewer_keywords:
- InterfaceListHelper structure
ms.assetid: 4297e419-c96b-45df-8a00-7568062125ba
ms.openlocfilehash: ca9e13e66acb6f27fba76a7653388305c57146dc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97249802"
---
# <a name="interfacelisthelper-structure"></a>InterfaceListHelper (struttura)

Supporta l'infrastruttura WRL e non può essere utilizzato direttamente dal codice.

## <a name="syntax"></a>Sintassi

```cpp
template <
    typename T0,
    typename T1 = Nil,
    typename T2 = Nil,
    typename T3 = Nil,
    typename T4 = Nil,
    typename T5 = Nil,
    typename T6 = Nil,
    typename T7 = Nil,
    typename T8 = Nil,
    typename T9 = Nil
>
struct InterfaceListHelper;

template <typename T0>
struct InterfaceListHelper<T0, Nil, Nil, Nil, Nil, Nil, Nil, Nil, Nil>;
```

### <a name="parameters"></a>Parametri

*T0*<br/>
Parametro di modello 0, che è obbligatorio.

*T1*<br/>
Parametro di modello 1, che per impostazione predefinita non è specificato.

*T2*<br/>
Parametro di modello 2, che per impostazione predefinita non è specificato. Terzo parametro di modello.

*T3*<br/>
Parametro di modello 3, che per impostazione predefinita non è specificato.

*T4*<br/>
Parametro di modello 4, che per impostazione predefinita non è specificato.

*T5*<br/>
Parametro di modello 5, che per impostazione predefinita non è specificato.

*T6*<br/>
Parametro di modello 6, che per impostazione predefinita non è specificato.

*T7*<br/>
Parametro di modello 7, che per impostazione predefinita non è specificato.

*T8*<br/>
Parametro di modello 8, che per impostazione predefinita non è specificato.

*T9*<br/>
Parametro di modello 9, che per impostazione predefinita non è specificato.

## <a name="remarks"></a>Commenti

Compila un `InterfaceList` tipo ricorsivo applicando gli argomenti specificati per il parametro di modello.

Il modello **InterfaceListHelper** usa il parametro di modello *T0* per definire il primo membro dati in una `InterfaceList` struttura e quindi applica in modo ricorsivo il modello **InterfaceListHelper** a tutti i parametri di modello rimanenti. **InterfaceListHelper** si interrompe quando non sono presenti parametri di modello rimanenti.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Description|
|----------|-----------------|
|`TypeT`|Sinonimo del tipo di interfacet.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`InterfaceListHelper`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="see-also"></a>Vedi anche

[Spazio dei nomi Microsoft:: WRL::D etails](microsoft-wrl-details-namespace.md)

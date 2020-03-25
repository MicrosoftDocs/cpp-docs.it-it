---
title: InterfaceListHelper (struttura)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::InterfaceListHelper
helpviewer_keywords:
- InterfaceListHelper structure
ms.assetid: 4297e419-c96b-45df-8a00-7568062125ba
ms.openlocfilehash: 1a7b4c19bbcdd4161e9078274f18f96a48f9e7d7
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80213850"
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

## <a name="remarks"></a>Osservazioni

Compila un tipo di `InterfaceList` riapplicando in modo ricorsivo gli argomenti specificati per il parametro di modello.

Il modello **InterfaceListHelper** usa il parametro di modello *T0* per definire il primo membro dati in una struttura di `InterfaceList` e quindi applica in modo ricorsivo il modello **InterfaceListHelper** a tutti i parametri di modello rimanenti. **InterfaceListHelper** si interrompe quando non sono presenti parametri di modello rimanenti.

## <a name="members"></a>Members

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`TypeT`|Sinonimo del tipo di interfacet.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`InterfaceListHelper`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft:: WRL::D etails

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](microsoft-wrl-details-namespace.md)

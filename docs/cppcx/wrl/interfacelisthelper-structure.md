---
title: InterfaceListHelper (struttura)
ms.date: 10/03/2018
ms.topic: reference
f1_keywords:
- implements/Microsoft::WRL::Details::InterfaceListHelper
helpviewer_keywords:
- InterfaceListHelper structure
ms.assetid: 4297e419-c96b-45df-8a00-7568062125ba
ms.openlocfilehash: 03bfed00147daef22fe91e6f061ea6720834090f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62396034"
---
# <a name="interfacelisthelper-structure"></a>InterfaceListHelper (struttura)

Supporta l'infrastruttura WRL e non deve essere usato direttamente dal codice.

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
Parametro di modello 2, che per impostazione predefinita non è specificato. Il terzo parametro di modello.

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

## <a name="remarks"></a>Note

Compila un `InterfaceList` tipo applicando gli argomenti di parametro di modello specificato in modo ricorsivo.

Il **InterfaceListHelper** modello Usa il parametro di modello *T0* per definire il primo membro di dati in un `InterfaceList` struttura, quindi in modo ricorsivo e si applica il  **InterfaceListHelper** modello per i rimanenti parametri del modello. **InterfaceListHelper** si interrompe quando non sono presenti parametri di modello rimanenti.

## <a name="members"></a>Membri

### <a name="public-typedefs"></a>Typedef pubblici

|Nome|Descrizione|
|----------|-----------------|
|`TypeT`|Un sinonimo del tipo InterfaceList.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`InterfaceListHelper`

## <a name="requirements"></a>Requisiti

**Intestazione:** Implements. h

**Spazio dei nomi:** Microsoft::WRL::Details

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Microsoft::WRL::Details](microsoft-wrl-details-namespace.md)
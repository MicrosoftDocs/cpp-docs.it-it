---
description: 'Altre informazioni su: operatori ATL'
title: Operatori ATL
ms.date: 11/04/2016
helpviewer_keywords:
- operators [ATL]
ms.assetid: 58ccd252-2869-45ee-8a5c-3ca40ee7f8a2
ms.openlocfilehash: 8c336732aeee9146b89e300580c0fbee506ec343
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97158686"
---
# <a name="atl-operators"></a>Operatori ATL

Questa sezione contiene gli argomenti di riferimento per gli operatori globali ATL.

|Operatore|Descrizione|
|--------------|-----------------|
|[operatore = =](#operator_eq_eq)|Confronta due `CSid` oggetti o strutture per verificarne l' `SID` uguaglianza.|
|[operatore! =](#operator_neq)|Confronta due `CSid` oggetti o `SID` strutture per verificarne la disuguaglianza.|
|[operatore <](#operator_lt)|Verifica se l' `CSid` oggetto o la `SID` struttura a sinistra dell'operatore è minore dell' `CSid` oggetto o della `SID` struttura sul lato destro (per compatibilità con la libreria standard C++).|
|[operatore >](#operator_gt)|Verifica se l' `CSid` oggetto o la `SID` struttura a sinistra dell'operatore è maggiore dell' `CSid` oggetto o della `SID` struttura sul lato destro (per compatibilità con la libreria standard C++).|
|[operatore <=](#operator_lt__eq)|Verifica se l' `CSid` oggetto o la `SID` struttura a sinistra dell'operatore è minore o uguale all' `CSid` oggetto o alla `SID` struttura sul lato destro (per compatibilità con la libreria standard C++).|
|[operatore >=](#operator_gt__eq)|Verifica se l' `CSid` oggetto o la `SID` struttura a sinistra dell'operatore è maggiore o uguale all' `CSid` oggetto o alla `SID` struttura sul lato destro (per compatibilità con la libreria standard C++).|

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h.

## <a name="operator-"></a><a name="operator_eq_eq"></a> operatore = =

Confronta `CSid` gli oggetti o le `SID` strutture (ID di sicurezza) per verificarne l'uguaglianza.

```cpp
bool operator==(const CSid& lhs, const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*LHS*<br/>
Primo `CSid` oggetto o `SID` struttura da confrontare.

*rhs*<br/>
Secondo `CSid` oggetto o `SID` struttura da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se gli oggetti sono uguali, FALSE se non sono uguali.

## <a name="operator-"></a><a name="operator_neq"></a> operatore! =

Confronta `CSid` gli oggetti o le `SID` strutture (ID di sicurezza) per verificarne la disuguaglianza.

```cpp
bool operator==(const CSid& lhs, const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*LHS*<br/>
Primo `CSid` oggetto o `SID` struttura da confrontare.

*rhs*<br/>
Secondo `CSid` oggetto o `SID` struttura da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se gli oggetti non sono uguali, FALSE se sono uguali.

## <a name="operator-"></a><a name="operator_lt"></a> operatore <

Verifica se l' `CSid` oggetto o la `SID` struttura a sinistra dell'operatore è minore dell' `CSid` oggetto o della `SID` struttura sul lato destro (per compatibilità con la libreria standard C++).

```cpp
bool operator<(const CSid& lhs, const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*LHS*<br/>
Primo `CSid` oggetto o `SID` struttura da confrontare.

*rhs*<br/>
Secondo `CSid` oggetto o `SID` struttura da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'indirizzo dell'oggetto *LHS* è minore dell'indirizzo dell'oggetto *RHS* ; in caso contrario, false.

### <a name="remarks"></a>Commenti

Questo operatore agisce sull'indirizzo dell' `CSid` oggetto o della `SID` struttura e viene implementato per garantire la compatibilità con le classi di raccolta della libreria standard C++.

## <a name="operator-"></a><a name="operator_gt"></a> operatore >

Verifica se l' `CSid` oggetto o la `SID` struttura a sinistra dell'operatore è maggiore dell' `CSid` oggetto o della `SID` struttura sul lato destro (per compatibilità con la libreria standard C++).

```cpp
bool operator<(const CSid& lhs, const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*LHS*<br/>
Primo `CSid` oggetto o `SID` struttura da confrontare.

*rhs*<br/>
Secondo `CSid` oggetto o `SID` struttura da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'indirizzo di *LHS* è maggiore dell'indirizzo del *RHS*, in caso contrario false.

### <a name="remarks"></a>Commenti

Questo operatore agisce sull'indirizzo dell' `CSid` oggetto o della `SID` struttura e viene implementato per garantire la compatibilità con le classi di raccolta della libreria standard C++.

## <a name="operator-"></a><a name="operator_lt__eq"></a> operatore <=

Verifica se l' `CSid` oggetto o la `SID` struttura a sinistra dell'operatore è minore o uguale all' `CSid` oggetto o alla `SID` struttura sul lato destro (per compatibilità con la libreria standard C++).

```cpp
bool operator<(const CSid& lhs, const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*LHS*<br/>
Primo `CSid` oggetto o `SID` struttura da confrontare.

*rhs*<br/>
Secondo `CSid` oggetto o `SID` struttura da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'indirizzo di *LHS* è minore o uguale all'indirizzo del *RHS*, in caso contrario false.

### <a name="remarks"></a>Commenti

Questo operatore agisce sull'indirizzo dell' `CSid` oggetto o della `SID` struttura e viene implementato per garantire la compatibilità con le classi di raccolta della libreria standard C++.

## <a name="operator-"></a><a name="operator_gt__eq"></a> operatore >=

Verifica se l' `CSid` oggetto o la `SID` struttura a sinistra dell'operatore è maggiore o uguale all' `CSid` oggetto o alla `SID` struttura sul lato destro (per compatibilità con la libreria standard C++).

```cpp
bool operator<(const CSid& lhs, const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*LHS*<br/>
Primo `CSid` oggetto o `SID` struttura da confrontare.

*rhs*<br/>
Secondo `CSid` oggetto o `SID` struttura da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'indirizzo di *LHS* è maggiore o uguale all'indirizzo del *RHS*, false in caso contrario.

### <a name="remarks"></a>Commenti

Questo operatore agisce sull'indirizzo dell' `CSid` oggetto o della `SID` struttura e viene implementato per garantire la compatibilità con le classi di raccolta della libreria standard C++.

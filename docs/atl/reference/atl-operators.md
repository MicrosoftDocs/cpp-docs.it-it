---
title: Operatori ATL
ms.date: 11/04/2016
helpviewer_keywords:
- operators [ATL]
ms.assetid: 58ccd252-2869-45ee-8a5c-3ca40ee7f8a2
ms.openlocfilehash: fe5363d3d05123c17e45254898e2210797400022
ms.sourcegitcommit: 2bc15c5b36372ab01fa21e9bcf718fa22705814f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/27/2020
ms.locfileid: "82168852"
---
# <a name="atl-operators"></a>Operatori ATL

Questa sezione contiene gli argomenti di riferimento per gli operatori globali ATL.

|Operatore|Descrizione|
|--------------|-----------------|
|[operatore = =](#operator_eq_eq)|Confronta due `CSid` oggetti o `SID` strutture per verificarne l'uguaglianza.|
|[operatore! =](#operator_neq)|Confronta due `CSid` oggetti o `SID` strutture per verificarne la disuguaglianza.|
|[operatore <](#operator_lt)|Verifica se l' `CSid` oggetto o `SID` la struttura a sinistra dell'operatore è minore dell' `CSid` oggetto o `SID` della struttura sul lato destro (per compatibilità con la libreria standard C++).|
|[operatore >](#operator_gt)|Verifica se l' `CSid` oggetto o `SID` la struttura a sinistra dell'operatore è maggiore dell' `CSid` oggetto o `SID` della struttura sul lato destro (per compatibilità con la libreria standard C++).|
|[operatore <=](#operator_lt__eq)|Verifica se l' `CSid` oggetto o `SID` la struttura a sinistra dell'operatore è minore o uguale all' `CSid` oggetto o `SID` alla struttura sul lato destro (per compatibilità con la libreria standard C++).|
|[operatore >=](#operator_gt__eq)|Verifica se l' `CSid` oggetto o `SID` la struttura a sinistra dell'operatore è maggiore o uguale all' `CSid` oggetto o `SID` alla struttura sul lato destro (per compatibilità con la libreria standard C++).|

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h.

## <a name="operator-"></a><a name="operator_eq_eq"></a>operatore = =

Confronta `CSid` gli oggetti o `SID` le strutture (ID di sicurezza) per verificarne l'uguaglianza.

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

## <a name="operator-"></a><a name="operator_neq"></a>operatore! =

Confronta `CSid` gli oggetti o `SID` le strutture (ID di sicurezza) per verificarne la disuguaglianza.

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

## <a name="operator-"></a><a name="operator_lt"></a>operatore <

Verifica se l' `CSid` oggetto o `SID` la struttura a sinistra dell'operatore è minore dell' `CSid` oggetto o `SID` della struttura sul lato destro (per compatibilità con la libreria standard C++).

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

### <a name="remarks"></a>Osservazioni

Questo operatore agisce sull'indirizzo dell' `CSid` oggetto o `SID` della struttura e viene implementato per garantire la compatibilità con le classi di raccolta della libreria standard C++.

## <a name="operator-"></a><a name="operator_gt"></a>operatore >

Verifica se l' `CSid` oggetto o `SID` la struttura a sinistra dell'operatore è maggiore dell' `CSid` oggetto o `SID` della struttura sul lato destro (per compatibilità con la libreria standard C++).

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

### <a name="remarks"></a>Osservazioni

Questo operatore agisce sull'indirizzo dell' `CSid` oggetto o `SID` della struttura e viene implementato per garantire la compatibilità con le classi di raccolta della libreria standard C++.

## <a name="operator-"></a><a name="operator_lt__eq"></a>operatore <=

Verifica se l' `CSid` oggetto o `SID` la struttura a sinistra dell'operatore è minore o uguale all' `CSid` oggetto o `SID` alla struttura sul lato destro (per compatibilità con la libreria standard C++).

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

### <a name="remarks"></a>Osservazioni

Questo operatore agisce sull'indirizzo dell' `CSid` oggetto o `SID` della struttura e viene implementato per garantire la compatibilità con le classi di raccolta della libreria standard C++.

## <a name="operator-"></a><a name="operator_gt__eq"></a>operatore >=

Verifica se l' `CSid` oggetto o `SID` la struttura a sinistra dell'operatore è maggiore o uguale all' `CSid` oggetto o `SID` alla struttura sul lato destro (per compatibilità con la libreria standard C++).

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

### <a name="remarks"></a>Osservazioni

Questo operatore agisce sull'indirizzo dell' `CSid` oggetto o `SID` della struttura e viene implementato per garantire la compatibilità con le classi di raccolta della libreria standard C++.

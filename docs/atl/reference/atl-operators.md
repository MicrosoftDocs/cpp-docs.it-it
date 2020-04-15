---
title: Operatori ATL
ms.date: 11/04/2016
helpviewer_keywords:
- operators [ATL]
ms.assetid: 58ccd252-2869-45ee-8a5c-3ca40ee7f8a2
ms.openlocfilehash: 8c15daa1d2b12c58323ef5ef75559a2ab911ad93
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81319228"
---
# <a name="atl-operators"></a>Operatori ATL

Questa sezione contiene gli argomenti di riferimento per gli operatori globali ATL.

|Operatore|Descrizione|
|--------------|-----------------|
|[operatore .](#operator_eq_eq)|Confronta due `CSid` oggetti `SID` o strutture per verificarne l'uguaglianza.|
|[Operatore !](#operator_neq)|Confronta due `CSid` oggetti `SID` o strutture per verificarne la disuguaglianza.|
|[<operatore](#operator_lt)|Verifica se `CSid` l'oggetto o `SID` la struttura sul lato sinistro dell'operatore è minore dell'oggetto `CSid` o `SID` della struttura sul lato destro (per la compatibilità della libreria standard di C.|
|[>operatore](#operator_gt)|Verifica se `CSid` l'oggetto o `SID` la struttura sul lato sinistro dell'operatore è maggiore dell'oggetto `CSid` o `SID` della struttura sul lato destro (per la compatibilità della libreria standard di C.|
|[operatore <](#operator_lt__eq)|Verifica se `CSid` l'oggetto o `SID` la struttura sul lato sinistro `CSid` dell'operatore è minore o uguale all'oggetto o `SID` alla struttura sul lato destro (per la compatibilità della libreria standard di C.|
|[operatore >](#operator_gt__eq)|Verifica se `CSid` l'oggetto o `SID` la struttura sul lato sinistro `CSid` dell'operatore è maggiore o uguale all'oggetto o `SID` alla struttura sul lato destro (per la compatibilità della libreria standard di C.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlsecurity.h.

## <a name="operator-"></a><a name="operator_eq_eq"></a>operatore .

Confronta `CSid` oggetti `SID` o strutture (identificatore di sicurezza) per verificarne l'uguaglianza.

```
bool operator==(const CSid& lhs, const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*Lhs*<br/>
Primo `CSid` oggetto `SID` o struttura da confrontare.

*rhs*<br/>
Secondo `CSid` oggetto `SID` o struttura da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se gli oggetti sono uguali, FALSE se non sono uguali.

## <a name="operator-"></a><a name="operator_neq"></a>Operatore !

Confronta `CSid` oggetti `SID` o strutture (identificatore di sicurezza) per verificarne la disuguaglianza.

```
bool operator==(const CSid& lhs, const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*Lhs*<br/>
Primo `CSid` oggetto `SID` o struttura da confrontare.

*rhs*<br/>
Secondo `CSid` oggetto `SID` o struttura da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se gli oggetti non sono uguali, FALSE se sono uguali.

## <a name="operator-"></a><a name="operator_lt"></a>< operatore

Verifica se `CSid` l'oggetto o `SID` la struttura sul lato sinistro dell'operatore è minore dell'oggetto `CSid` o `SID` della struttura sul lato destro (per la compatibilità della libreria standard di C.

```
bool operator<(const CSid& lhs, const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*Lhs*<br/>
Primo `CSid` oggetto `SID` o struttura da confrontare.

*rhs*<br/>
Secondo `CSid` oggetto `SID` o struttura da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'indirizzo dell'oggetto *lhs* è minore dell'indirizzo dell'oggetto *rhs,* FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Questo operatore agisce sull'indirizzo dell'oggetto `CSid` o `SID` della struttura e viene implementato per garantire la compatibilità con le classi di raccolta della libreria standard di C.

## <a name="operator-"></a><a name="operator_gt"></a>> operatore

Verifica se `CSid` l'oggetto o `SID` la struttura sul lato sinistro dell'operatore è maggiore dell'oggetto `CSid` o `SID` della struttura sul lato destro (per la compatibilità della libreria standard di C.

```
bool operator<(const CSid& lhs, const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*Lhs*<br/>
Primo `CSid` oggetto `SID` o struttura da confrontare.

*rhs*<br/>
Secondo `CSid` oggetto `SID` o struttura da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce VERO se l'indirizzo del *lhs* è maggiore dell'indirizzo di *rhs*, FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Questo operatore agisce sull'indirizzo dell'oggetto `CSid` o `SID` della struttura e viene implementato per garantire la compatibilità con le classi di raccolta della libreria standard di C.

## <a name="operator-"></a><a name="operator_lt__eq"></a>operatore <

Verifica se `CSid` l'oggetto o `SID` la struttura sul lato sinistro `CSid` dell'operatore è minore o uguale all'oggetto o `SID` alla struttura sul lato destro (per la compatibilità della libreria standard di C.

```
bool operator<(const CSid& lhs, const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*Lhs*<br/>
Primo `CSid` oggetto `SID` o struttura da confrontare.

*rhs*<br/>
Secondo `CSid` oggetto `SID` o struttura da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce VERO se l'indirizzo del *lhs* è minore o uguale all'indirizzo di *rhs*, FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Questo operatore agisce sull'indirizzo dell'oggetto `CSid` o `SID` della struttura e viene implementato per garantire la compatibilità con le classi di raccolta della libreria standard di C.

## <a name="operator-"></a><a name="operator_gt__eq"></a>operatore >

Verifica se `CSid` l'oggetto o `SID` la struttura sul lato sinistro `CSid` dell'operatore è maggiore o uguale all'oggetto o `SID` alla struttura sul lato destro (per la compatibilità della libreria standard di C.

```
bool operator<(const CSid& lhs, const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*Lhs*<br/>
Primo `CSid` oggetto `SID` o struttura da confrontare.

*rhs*<br/>
Secondo `CSid` oggetto `SID` o struttura da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce VERO se l'indirizzo del *lhs* è maggiore o uguale all'indirizzo di *rhs*, FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Questo operatore agisce sull'indirizzo dell'oggetto `CSid` o `SID` della struttura e viene implementato per garantire la compatibilità con le classi di raccolta della libreria standard di C.

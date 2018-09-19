---
title: Gli operatori ATL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- operators [ATL]
ms.assetid: 58ccd252-2869-45ee-8a5c-3ca40ee7f8a2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 0741cd65924a2c968153333aa1a557c31f429d45
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46039777"
---
# <a name="atl-operators"></a>Operatori ATL

In questa sezione contiene gli argomenti di riferimento per gli operatori globali ATL.

|Operatore|Descrizione|
|--------------|-----------------|
|[operatore = =](#operator_eq_eq)|Confronta due `CSid` oggetti o `SID` strutture per verificarne l'uguaglianza.|
|[operatore! =](#operator_neq)|Confronta due `CSid` oggetti o `SID` strutture per verificarne la disuguaglianza.|
|[operatore <](#operator_lt)|Verifica se il `CSid` oggetto oppure `SID` struttura a sinistra dell'operatore è minore di `CSid` oggetto o `SID` struttura sul lato destro (per la compatibilità della libreria Standard C++).|
|[operatore >](#operator_gt)|Verifica se il `CSid` oggetto o `SID` struttura a sinistra dell'operatore è maggiore di `CSid` oggetto o `SID` struttura sul lato destro (per la compatibilità della libreria Standard C++).|
|[operatore < =](#operator_lt__eq)|Verifica se il `CSid` oggetto oppure `SID` struttura a sinistra dell'operatore è minore o uguale al `CSid` oggetto o `SID` struttura sul lato destro (per la compatibilità della libreria Standard C++).|
|[operatore > =](#operator_gt__eq)|Verifica se il `CSid` oggetto oppure `SID` struttura a sinistra dell'operatore è maggiore o uguale al `CSid` oggetto o `SID` struttura sul lato destro (per la compatibilità della libreria Standard C++).|

## <a name="requirements"></a>Requisiti

**Intestazione:** ATLSecurity. h.

##  <a name="operator_eq_eq"></a>  operator ==

Confronta `CSid` oggetti o `SID` uguaglianza nelle strutture (ID di sicurezza).

```
bool operator==(const CSid& lhs, const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*sul lato sinistro*<br/>
Il primo `CSid` oggetto o `SID` struttura da confrontare.

*rhs*<br/>
La seconda `CSid` oggetto o `SID` struttura da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se gli oggetti sono uguali e FALSE se non sono uguali.

##  <a name="operator_neq"></a>  operatore! =

Confronta `CSid` oggetti o `SID` disuguaglianza nelle strutture (ID di sicurezza).

```
bool operator==(const CSid& lhs, const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*sul lato sinistro*<br/>
Il primo `CSid` oggetto o `SID` struttura da confrontare.

*rhs*<br/>
La seconda `CSid` oggetto o `SID` struttura da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se gli oggetti non sono uguali, FALSE se sono uguali.

##  <a name="operator_lt"></a>  operator <

Verifica se il `CSid` oggetto oppure `SID` struttura a sinistra dell'operatore è minore di `CSid` oggetto o `SID` struttura sul lato destro (per la compatibilità della libreria Standard C++).

```
bool operator<(const CSid& lhs, const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*sul lato sinistro*<br/>
Il primo `CSid` oggetto o `SID` struttura da confrontare.

*rhs*<br/>
La seconda `CSid` oggetto o `SID` struttura da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'indirizzo del *lhs* oggetto è minore rispetto all'indirizzo delle *rhs* dell'oggetto, FALSE in caso contrario.

### <a name="remarks"></a>Note

Questo operatore agisce sull'indirizzo della `CSid` oggetto o `SID` struttura ed è implementato per garantire la compatibilità con le classi di raccolta della libreria Standard C++.

##  <a name="operator_gt"></a>  operator >

Verifica se il `CSid` oggetto o `SID` struttura a sinistra dell'operatore è maggiore di `CSid` oggetto o `SID` struttura sul lato destro (per la compatibilità della libreria Standard C++).

```
bool operator<(const CSid& lhs, const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*sul lato sinistro*<br/>
Il primo `CSid` oggetto o `SID` struttura da confrontare.

*rhs*<br/>
La seconda `CSid` oggetto o `SID` struttura da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'indirizzo del *lhs* è maggiore dell'indirizzo delle *rhs*, FALSE in caso contrario.

### <a name="remarks"></a>Note

Questo operatore agisce sull'indirizzo della `CSid` oggetto o `SID` struttura ed è implementato per garantire la compatibilità con le classi di raccolta della libreria Standard C++.

##  <a name="operator_lt__eq"></a>  operator <=

Verifica se il `CSid` oggetto oppure `SID` struttura a sinistra dell'operatore è minore o uguale al `CSid` oggetto o `SID` struttura sul lato destro (per la compatibilità della libreria Standard C++).

```
bool operator<(const CSid& lhs, const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*sul lato sinistro*<br/>
Il primo `CSid` oggetto o `SID` struttura da confrontare.

*rhs*<br/>
La seconda `CSid` oggetto o `SID` struttura da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'indirizzo del *lhs* è minore o uguale all'indirizzo delle *rhs*, FALSE in caso contrario.

### <a name="remarks"></a>Note

Questo operatore agisce sull'indirizzo della `CSid` oggetto o `SID` struttura ed è implementato per garantire la compatibilità con le classi di raccolta della libreria Standard C++.

##  <a name="operator_gt__eq"></a>  operator >=

Verifica se il `CSid` oggetto oppure `SID` struttura a sinistra dell'operatore è maggiore o uguale al `CSid` oggetto o `SID` struttura sul lato destro (per la compatibilità della libreria Standard C++).

```
bool operator<(const CSid& lhs, const CSid& rhs) throw();
```

### <a name="parameters"></a>Parametri

*sul lato sinistro*<br/>
Il primo `CSid` oggetto o `SID` struttura da confrontare.

*rhs*<br/>
La seconda `CSid` oggetto o `SID` struttura da confrontare.

### <a name="return-value"></a>Valore restituito

Restituisce TRUE se l'indirizzo del *lhs* è maggiore o uguale all'indirizzo delle *rhs*, FALSE in caso contrario.

### <a name="remarks"></a>Note

Questo operatore agisce sull'indirizzo della `CSid` oggetto o `SID` struttura ed è implementato per garantire la compatibilità con le classi di raccolta della libreria Standard C++.


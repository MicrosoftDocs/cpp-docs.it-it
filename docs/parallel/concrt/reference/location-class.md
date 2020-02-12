---
title: Classe location
ms.date: 11/04/2016
f1_keywords:
- location
- CONCRT/concurrency::location
- CONCRT/concurrency::location::location
- CONCRT/concurrency::location::current
- CONCRT/concurrency::location::from_numa_node
helpviewer_keywords:
- location class
ms.assetid: c3289f51-5bf1-4dff-a18d-d0dab8e5d9c7
ms.openlocfilehash: 7f45ff6d3092bd7c27e81adddca72c9411f752d1
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77139818"
---
# <a name="location-class"></a>Classe location

Un'astrazione di una posizione fisica sull'hardware.

## <a name="syntax"></a>Sintassi

```cpp
class location;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[location](#ctor)|Di overload. Costruisce un oggetto `location`.|
|[~ distruttore località](#dtor)|Elimina un oggetto `location`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[corrente](#current)|Restituisce un oggetto `location` che rappresenta il punto più specifico in cui il thread chiamante è in esecuzione.|
|[from_numa_node](#from_numa_node)|Restituisce un oggetto `location` che rappresenta un nodo NUMA specifico.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator!=](#operator_neq)|Determina se due oggetti `location` rappresentano posizioni diverse.|
|[operator=](#operator_eq)|Assegna il contenuto di un oggetto `location` differente a questo oggetto.|
|[operator==](#operator_eq_eq)|Determina se due oggetti `location` rappresentano la stessa posizione.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`location`

## <a name="requirements"></a>Requisiti

**Intestazione:** concrt. h

**Spazio dei nomi:** Concurrency

## <a name="dtor"></a>~ località

Elimina un oggetto `location`.

```cpp
~location();
```

## <a name="current"></a>corrente

Restituisce un oggetto `location` che rappresenta il punto più specifico in cui il thread chiamante è in esecuzione.

```cpp
static location __cdecl current();
```

### <a name="return-value"></a>Valore restituito

Posizione che rappresenta il punto più specifico in cui il thread chiamante è in esecuzione.

## <a name="from_numa_node"></a>from_numa_node

Restituisce un oggetto `location` che rappresenta un nodo NUMA specifico.

```cpp
static location __cdecl from_numa_node(unsigned short _NumaNodeNumber);
```

### <a name="parameters"></a>Parametri

*_NumaNodeNumber*<br/>
Numero del nodo NUMA per cui costruire una posizione.

### <a name="return-value"></a>Valore restituito

Posizione che rappresenta il nodo NUMA specificato dal parametro `_NumaNodeNumber`.

## <a name="ctor"></a>percorso

Costruisce un oggetto `location`.

```cpp
location();

location(
    const location& _Src);

location(
    T _LocationType,
    unsigned int _Id,
    unsigned int _BindingId = 0,
    _Inout_opt_ void* _PBinding = NULL);
```

### <a name="parameters"></a>Parametri

*_Src*<br/>

*_LocationType*<br/>

*_Id*<br/>

*_BindingId*<br/>

*_PBinding*<br/>
Opzionale Puntatore di associazione.

### <a name="remarks"></a>Osservazioni

Una posizione costruita predefinita rappresenta il sistema nel suo complesso.

## <a name="operator_neq"></a>operatore! =

Determina se due oggetti `location` rappresentano posizioni diverse.

```cpp
bool operator!= (const location& _Rhs) const;
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
`location`dell'operando.

### <a name="return-value"></a>Valore restituito

**true** se le due posizioni sono diverse; in caso contrario, **false** .

## <a name="operator_eq"></a>operatore =

Assegna il contenuto di un oggetto `location` differente a questo oggetto.

```cpp
location& operator= (const location& _Rhs);
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
Oggetto `location` di origine.

### <a name="return-value"></a>Valore restituito

## <a name="operator_eq_eq"></a>operatore = =

Determina se due oggetti `location` rappresentano la stessa posizione.

```cpp
bool operator== (const location& _Rhs) const;
```

### <a name="parameters"></a>Parametri

*_Rhs*<br/>
`location`dell'operando.

### <a name="return-value"></a>Valore restituito

**true** se le due posizioni sono identiche e **false** in caso contrario.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)

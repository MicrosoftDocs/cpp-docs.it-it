---
title: Classe combinable
ms.date: 11/04/2016
f1_keywords:
- combinable
- PPL/concurrency::combinable
- PPL/concurrency::combinable::combinable
- PPL/concurrency::combinable::clear
- PPL/concurrency::combinable::combine
- PPL/concurrency::combinable::combine_each
- PPL/concurrency::combinable::local
helpviewer_keywords:
- combinable class
ms.assetid: fe0bfbf6-6250-47da-b8d0-f75369f0b5be
ms.openlocfilehash: b392a46c3aafac9ab5f3ca2b626f5f78daebc85d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50630750"
---
# <a name="combinable-class"></a>Classe combinable

L'oggetto `combinable<T>` ha lo scopo di fornire copie di dati di thread privato, per eseguire calcoli secondari locali per thread senza blocco durante algoritmi paralleli. Alla fine dell'operazione parallela, è possibile unire i sub-calcoli del thread privato in un risultato finale. Questa classe può essere usata in sostituzione di una variabile condivisa e può determinare un miglioramento delle prestazioni qualora vi fosse invece molto conflitto su tale variabile condivisa.

## <a name="syntax"></a>Sintassi

```
template<typename T>
class combinable;
```

#### <a name="parameters"></a>Parametri

*T*<br/>
Il tipo di dati del risultato unito finale. Il tipo deve avere un costruttore di copia e un costruttore predefinito.

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[combinable](#ctor)|Di overload. Costruisce un nuovo oggetto `combinable`.|
|[~ Distruttore combinable](#dtor)|Elimina un oggetto `combinable`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[clear](#clear)|Cancella gli eventuali risultati di calcolo intermedi da un utilizzo precedente.|
|[combine](#combine)|Calcola un valore finale del set di calcoli secondari locali del thread chiamando il funtore combinato.|
|[combine_each](#combine_each)|Calcola un valore finale del set di calcoli secondari locali del thread chiamando il funtore combinato fornito una volta per ogni calcolo secondario thread-local. Il risultato finale verrà accumulato dall'oggetto funzione.|
|[local](#local)|Di overload. Restituisce un riferimento al calcolo secondario thread privato.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator=](#operator_eq)|Assegna a un `combinable` da un altro oggetto `combinable` oggetto.|

## <a name="remarks"></a>Note

Per altre informazioni, vedere [contenitori e oggetti paralleli](../../../parallel/concrt/parallel-containers-and-objects.md).

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`combinable`

## <a name="requirements"></a>Requisiti

**Intestazione:** PPL

**Spazio dei nomi:** Concurrency

##  <a name="clear"></a> Cancella

Cancella gli eventuali risultati di calcolo intermedi da un utilizzo precedente.

```
void clear();
```

##  <a name="ctor"></a> classe combinable

Costruisce un nuovo oggetto `combinable`.

```
combinable();

template <typename _Function>
explicit combinable(_Function _FnInitialize);

combinable(const combinable& _Copy);
```

### <a name="parameters"></a>Parametri

*_Function*<br/>
Il tipo dell'oggetto funtore inizializzazione.

*FnInitialize*<br/>
Una funzione che verrà chiamata per inizializzare ogni nuovo valore di thread privato del tipo `T`. Deve supportare un operatore di chiamata di funzione con la firma `T ()`.

*Copia*<br/>
Un oggetto esistente `combinable` da copiare in questo oggetto.

### <a name="remarks"></a>Note

Il primo costruttore inizializza gli elementi di nuovo con il costruttore predefinito per il tipo `T`.

Il secondo costruttore inizializza gli elementi di nuovo usando il funtore inizializzazione fornito come il `_FnInitialize` parametro.

Il terzo costruttore è il costruttore di copia.

##  <a name="dtor"></a> ~combinable

Elimina un oggetto `combinable`.

```
~combinable();
```

##  <a name="combine"></a> combinare

Calcola un valore finale del set di calcoli secondari locali del thread chiamando il funtore combinato.

```
template<typename _Function>
T combine(_Function _FnCombine) const;
```

### <a name="parameters"></a>Parametri

*_Function*<br/>
Il tipo dell'oggetto funzione che verrà richiamato per combinare due calcoli secondari locali del thread.

*_FnCombine*<br/>
Il funtore che consente di combinare i calcoli secondari. La firma viene `T (T, T)` o `T (const T&, const T&)`, e deve essere associativo e commutativo.

### <a name="return-value"></a>Valore restituito

Il risultato finale della combinazione di tutti i calcoli secondari thread privato.

##  <a name="combine_each"></a> combine_each

Calcola un valore finale del set di calcoli secondari locali del thread chiamando il funtore combinato fornito una volta per ogni calcolo secondario thread-local. Il risultato finale verrà accumulato dall'oggetto funzione.

```
template<typename _Function>
void combine_each(_Function _FnCombine) const;
```

### <a name="parameters"></a>Parametri

*_Function*<br/>
Il tipo dell'oggetto funzione che verrà richiamato per combinare un calcolo secondario locale di thread singolo.

*_FnCombine*<br/>
Il funtore che viene usato per combinare un calcolo secondario. La firma viene `void (T)` o `void (const T&)`e deve essere associativo e commutativo.

##  <a name="local"></a> locale

Restituisce un riferimento al calcolo secondario thread privato.

```
T& local();

T& local(bool& _Exists);
```

### <a name="parameters"></a>Parametri

*Exists*<br/>
Un riferimento a un valore booleano. Il valore booleano per fare riferimento in questo argomento verrà impostato su **true** se il calcolo secondario già esistente su questo thread e impostato su **false** se questo è il primo calcolo secondario su questo thread.

### <a name="return-value"></a>Valore restituito

Riferimento per il calcolo secondario thread privato.

##  <a name="operator_eq"></a> operator=

Assegna a un `combinable` da un altro oggetto `combinable` oggetto.

```
combinable& operator= (const combinable& _Copy);
```

### <a name="parameters"></a>Parametri

*Copia*<br/>
Un oggetto esistente `combinable` da copiare in questo oggetto.

### <a name="return-value"></a>Valore restituito

Un riferimento a questo `combinable` oggetto.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi concurrency](concurrency-namespace.md)

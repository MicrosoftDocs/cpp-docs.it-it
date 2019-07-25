---
title: Struttura atomic
ms.date: 04/20/2018
f1_keywords:
- atomic/std::atomic
ms.assetid: 261628ed-7049-41ac-99b9-cfe49f696b44
ms.openlocfilehash: 1b3b60d71fcdf68fdf215820535c3bfb3d4dfb2b
ms.sourcegitcommit: 0dcab746c49f13946b0a7317fc9769130969e76d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/24/2019
ms.locfileid: "68456740"
---
# <a name="atomic-structure"></a>Struttura atomic

Descrive un oggetto che esegue operazioni atomiche su un valore archiviato di tipo *Ty*.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct atomic;
```

## <a name="members"></a>Members

|Member|DESCRIZIONE|
|----------|-----------------|
|**Costruttore**||
|[atomic](#atomic)|Costruisce un oggetto atomico.|
|**Operatori**||
|[Atomic:: operator Ty](#op_ty)|Legge e restituisce il valore archiviato. ([Atomic:: Load](#load))|
|[atomic::operator=](#op_eq)|Usa un valore specificato per sostituire il valore archiviato. ([atomic::store](#store))|
|[atomic::operator++](#op_inc)|Incrementa il valore archiviato. Usato solo da specializzazioni integrali e dei puntatori.|
|[atomic::operator+=](#op_add_eq)|Aggiunge un valore specificato al valore archiviato. Usato solo da specializzazioni integrali e dei puntatori.|
|[atomic::operator--](#op_dec)|Decrementa il valore archiviato. Usato solo da specializzazioni integrali e dei puntatori.|
|[atomic::operator-=](#op_sub_eq)|Sottrae un valore specificato da un valore archiviato. Usato solo da specializzazioni integrali e dei puntatori.|
|[Atomic:: operator & =](#op_and_eq)|Esegue un operatore and bit per bit su un valore specificato e il valore archiviato. Usato solo da specializzazioni integrali.|
|[atomic::operator&#124;=](#op_or_eq)|Esegue un'operazione OR bit per bit su un valore specificato e il valore archiviato. Usato solo da specializzazioni integrali.|
|[atomic::operator^=](#op_xor_eq)|Esegue un'operazione con OR esclusivo bit per bit su un valore specificato e il valore archiviato. Usato solo da specializzazioni integrali.|
|**Funzioni**||
|[compare_exchange_strong](#compare_exchange_strong)|Esegue un'operazione *atomic_compare_and_exchange* su **questo** oggetto e restituisce il risultato.|
|[compare_exchange_weak](#compare_exchange_weak)|Esegue un'operazione *weak_atomic_compare_and_exchange* su **questo** oggetto e restituisce il risultato.|
|[fetch_add](#fetch_add)|Aggiunge un valore specificato al valore archiviato.|
|[fetch_and](#fetch_and)|Esegue un operatore and bit per bit su un valore specificato e il valore archiviato.|
|[fetch_or](#fetch_or)|Esegue un'operazione OR bit per bit su un valore specificato e il valore archiviato.|
|[fetch_sub](#fetch_sub)|Sottrae un valore specificato da un valore archiviato.|
|[fetch_xor](#fetch_xor)|Esegue un'operazione con OR esclusivo bit per bit su un valore specificato e il valore archiviato.|
|[is_lock_free](#is_lock_free)|Specifica se le operazioni atomiche in **questo** *blocco*sono gratuite. Un tipo atomico è *senza blocco* se nessuna operazione atomica in tale tipo usa i blocchi.|
|[load](#load)|Legge e restituisce il valore archiviato.|
|[store](#store)|Usa un valore specificato per sostituire il valore archiviato.|

## <a name="remarks"></a>Note

Il tipo *Ty* deve essere facilmente copiabile. Ovvero, l'utilizzo di [memcpy](../c-runtime-library/reference/memcpy-wmemcpy.md) per la copia dei relativi byte deve produrre un oggetto *Ty* valido che risulta uguale all'oggetto originale. Le funzioni membro [compare_exchange_weak](#compare_exchange_weak) e [compare_exchange_strong](#compare_exchange_strong) usano [memcmp](../c-runtime-library/reference/memcmp-wmemcmp.md) per determinare se due valori *Ty* sono uguali. Queste funzioni non useranno un oggetto definito `operator==`da Ty. Le funzioni membro di `atomic` usano `memcpy` per copiare i valori di tipo *Ty*.

Una specializzazione parziale **,\<Atomic \*Ty >** , esiste per tutti i tipi di puntatore. La specializzazione consente l'aggiunta o la sottrazione di un offset dal valore del puntatore gestito. Le operazioni aritmetiche accettano un argomento di `ptrdiff_t` tipo e modificano l'argomento in base alle dimensioni di *Ty* per essere coerenti con l'aritmetica degli indirizzi ordinari.

Esiste una specializzazione per ogni tipo integrale eccetto **bool**. Ogni specializzazione offre un set di metodi per le operazioni logiche e di aritmetica atomica.

||||
|-|-|-|
|**atomic\<char>**|**>\<char con segno atomico**|**>\<char senza segno atomico**|
|**atomic\<char16_t>**|**atomic\<char32_t>**|**atomic\<wchar_t>**|
|**atomic\<short>**|**>\<short senza segno atomico**|**>\<Atomic int**|
|**>\<int senza segno atomico**|**>\<Long atomico**|**>\<Long senza segno atomico**|
|**>\<Long Long atomico**|**>\<Long Long senza segno atomico**|

Le specializzazioni integrali sono derivate dai tipi `atomic_integral` corrispondenti. Ad esempio, **il\<> int senza segno atomico** deriva da. `atomic_uint`

## <a name="requirements"></a>Requisiti

**Intestazione:** \<> atomico

**Spazio dei nomi:** std

## <a name="atomic"></a>Atomic:: Atomic

Costruisce un oggetto atomico.

```cpp
atomic();
atomic( const atomic& );
atomic( Ty Value ) noexcept;
```

### <a name="parameters"></a>Parametri

*Valore*\
Valore di inizializzazione.

### <a name="remarks"></a>Note

Gli oggetti atomici non possono essere copiati o spostati.

Gli oggetti che creano creazioni di istanze\<di Atomic*Ty*> possono essere inizializzati solo dal costruttore che accetta un argomento di tipo *Ty* e non usando l'inizializzazione aggregata. Tuttavia, gli oggetti atomic_integral possono essere inizializzati solo usando l'inizializzazione aggregata.

```cpp
atomic<int> ai0 = ATOMIC_VAR_INIT(0);
atomic<int> ai1(0);
```

## <a name="op_ty"></a>Atomic:: operator *Ty*

Operatore per il tipo specificato nel modello Atomic\<*Ty*>. Recupera il valore archiviato in  **\*questo**oggetto.

```cpp
atomic<Ty>::operator Ty() const volatile noexcept;
atomic<Ty>::operator Ty() const noexcept;
```

### <a name="remarks"></a>Note

Questo operatore applica `memory_order_seq_cst` [memory_order](atomic-enums.md).

## <a name="op_eq"></a>Atomic:: operator =

Archivia un valore specificato.

```cpp
Ty operator=(
   Ty Value
) volatile noexcept;
Ty operator=(
   Ty Value
) noexcept;
```

### <a name="parameters"></a>Parametri

*Valore*\
Oggetto *Ty* .

### <a name="return-value"></a>Valore restituito

Restituisce un *valore*.

## <a name="op_inc"></a>Atomic:: operator + +

Incrementa il valore archiviato. Usato solo da specializzazioni integrali e dei puntatori.

```cpp
Ty atomic<Ty>::operator++(int) volatile noexcept;
Ty atomic<Ty>::operator++(int) noexcept;
Ty atomic<Ty>::operator++() volatile noexcept;
Ty atomic<Ty>::operator++() noexcept;
```

### <a name="return-value"></a>Valore restituito

I primi due operatori restituiscono il valore incrementato. gli ultimi due operatori restituiscono il valore prima dell'incremento. Gli operatori usano `memory_order_seq_cst` [memory_order](atomic-enums.md).

## <a name="op_add_eq"></a>Atomic:: operator + =

Aggiunge un valore specificato al valore archiviato. Usato solo da specializzazioni integrali e dei puntatori.

```cpp
Ty atomic<Ty>::operator+=(
   Ty Value
) volatile noexcept;
Ty atomic<Ty>::operator+=(
   Ty Value
) noexcept;
```

### <a name="parameters"></a>Parametri

*Valore*\
Valore integrale o puntatore.

### <a name="return-value"></a>Valore restituito

Oggetto *Ty* che contiene il risultato dell'addizione.

### <a name="remarks"></a>Note

Questo operatore utilizza `memory_order_seq_cst` [memory_order](atomic-enums.md).

## <a name="op_dec"></a>Atomic:: operator--

Decrementa il valore archiviato. Usato solo da specializzazioni integrali e dei puntatori.

```cpp
Ty atomic<Ty>::operator--(int) volatile noexcept;
Ty atomic<Ty>::operator--(int) noexcept;
Ty atomic<Ty>::operator--() volatile noexcept;
Ty atomic<Ty>::operator--() noexcept;
```

### <a name="return-value"></a>Valore restituito

I primi due operatori restituiscono il valore decrementato. gli ultimi due operatori restituiscono il valore prima del decremento. Gli operatori usano `memory_order_seq_cst` [memory_order](atomic-enums.md).

## <a name="op_sub_eq"></a>Atomic:: operator-=

Sottrae un valore specificato da un valore archiviato. Usato solo da specializzazioni integrali e dei puntatori.

```cpp
Ty atomic<Ty>::operator-=(
   Ty Value
) volatile noexcept;
Ty atomic<Ty>::operator-=(
   Ty Value
) noexcept;
```

### <a name="parameters"></a>Parametri

*Valore*\
Valore integrale o puntatore.

### <a name="return-value"></a>Valore restituito

Oggetto *Ty* che contiene il risultato della sottrazione.

### <a name="remarks"></a>Note

Questo operatore utilizza `memory_order_seq_cst` [memory_order](atomic-enums.md).

## <a name="op_and_eq"></a>Atomic:: operator & =

Esegue un operatore and bit per bit su un valore specificato e il valore archiviato di  **\*questo**. Usato solo da specializzazioni integrali.

```cpp
atomic<Ty>::operator&= (
   Ty Value
) volatile noexcept;
atomic<Ty>::operator&= (
   Ty Value
) noexcept;
```

### <a name="parameters"></a>Parametri

*Valore*\
Un valore di tipo *Ty*.

### <a name="return-value"></a>Valore restituito

Risultato dell'operatore and bit per bit.

### <a name="remarks"></a>Note

Questo operatore esegue un'operazione di lettura-modifica-scrittura per sostituire il valore archiviato di  **\*questo** oggetto con un'operazione and bit per bit di *value* e il valore corrente archiviato in  **\*questo**oggetto, entro i vincoli del `memory_order_seq_cst` [memory_order](atomic-enums.md).

## <a name="op_or_eq"></a>Atomic:: operator&#124;=

Esegue un'operazione OR bit per bit su un valore specificato e il valore archiviato di  **\*questo**oggetto. Usato solo da specializzazioni integrali.

```cpp
atomic<Ty>::operator|= (
   Ty Value
) volatile noexcept;
atomic<Ty>::operator|= (
   Ty Value
) noexcept;
```

### <a name="parameters"></a>Parametri

*Valore*\
Un valore di tipo *Ty*.

### <a name="return-value"></a>Valore restituito

Risultato dell'operatore OR bit per bit.

### <a name="remarks"></a>Note

Questo operatore esegue un'operazione di lettura-modifica-scrittura per sostituire il valore archiviato di  **\*questo** oggetto con un'operazione OR bit per bit di *value* e il valore corrente archiviato in  **\*questo**oggetto, entro i vincoli del `memory_order_seq_cst`vincoli [memory_order](atomic-enums.md) .

## <a name="op_xor_eq"></a>Atomic:: operator ^ =

Esegue un'operazione con OR esclusivo bit per bit su un valore specificato e il valore archiviato di  **\*questo**oggetto. Usato solo da specializzazioni integrali.

```cpp
atomic<Ty>::operator^= (
   Ty Value
) volatile noexcept;
atomic<Ty>::operator^= (
   Ty Value
) noexcept;
```

### <a name="parameters"></a>Parametri

*Valore*\
Un valore di tipo *Ty*.

### <a name="return-value"></a>Valore restituito

Risultato dell'oggetto or esclusivo bit per bit.

### <a name="remarks"></a>Note

Questo operatore esegue un'operazione di lettura-modifica-scrittura per sostituire il valore archiviato  **\*di con un** or esclusivo bit per bit di *valore* e il valore corrente archiviato in  **\*questo**oggetto, entro i vincoli del `memory_order_seq_cst` vincoli [memory_order](atomic-enums.md) .

## <a name="compare_exchange_strong"></a> atomic::compare_exchange_strong

Esegue un'operazione di confronto e scambio atomica su  **\*questo**oggetto.

```cpp
bool compare_exchange_strong(
   Ty& Exp,
   Ty Value,
   memory_order Order1,
   memory_order Order2
) volatile noexcept;
bool compare_exchange_strong(
   Ty& Exp,
   Ty Value,
   memory_order Order1,
   memory_order Order2
) noexcept;
bool compare_exchange_strong(
   Ty& Exp,
   Ty Value,
   memory_order Order1 = memory_order_seq_cst
) volatile noexcept;
bool compare_exchange_strong(
   Ty& Exp,
   Ty Value,
   memory_order Order1 = memory_order_seq_cst
) noexcept;
```

### <a name="parameters"></a>Parametri

*Exp*\
Un valore di tipo *Ty*.

*Valore*\
Un valore di tipo *Ty*.

*Order1*\
Primo `memory_order` argomento.

*Order2*\
Secondo argomento `memory_order`.

### <a name="return-value"></a>Valore restituito

**Bool** che indica il risultato del confronto dei valori.

### <a name="remarks"></a>Note

Questa operazione di confronto e scambio atomico confronta il valore  **\*archiviato in con** *Exp*. Se i valori sono uguali, l'operazione sostituisce il valore archiviato in  **\*questo** oggetto con *valore* utilizzando un'operazione di lettura-modifica-scrittura e applicando i vincoli dell'ordine di memoria specificati da *Order1*. Se i valori non sono uguali, l'operazione usa il valore  **\*archiviato in per** sostituire *Exp* e applica i vincoli dell'ordine di memoria specificati da *Order2*.

Gli overload che non dispongono di un secondo `memory_order` utilizzano un *Order2* implicito basato sul valore di *Order1*. Se *Order1* è `memory_order_acq_rel`, *Order2* è `memory_order_acquire`. Se *Order1* è `memory_order_release`, *Order2* è `memory_order_relaxed`. In tutti gli altri casi, *Order2* è uguale a *Order1*.

Per gli overload che accettano due `memory_order` parametri, il valore di *Order2* non deve essere `memory_order_release` o `memory_order_acq_rel`e non deve essere maggiore del valore di *Order1*.

## <a name="compare_exchange_weak"></a> atomic::compare_exchange_weak

Esegue un'operazione di confronto e scambio atomica debole in  **\*questo**oggetto.

```cpp
bool compare_exchange_weak(
   Ty& Exp,
   Ty Value,
   memory_order Order1,
   memory_order Order2
) volatile noexcept;
bool compare_exchange_weak(
   Ty& Exp,
   Ty Value,
   memory_order Order1,
   memory_order Order2
) noexcept;
bool compare_exchange_weak(
   Ty& Exp,
   Ty Value,
   memory_order Order1 = memory_order_seq_cst
) volatile noexcept;
bool compare_exchange_weak(
   Ty& Exp,
   Ty Value,
   memory_order Order1 = memory_order_seq_cst
) noexcept;
```

### <a name="parameters"></a>Parametri

*Exp*\
Un valore di tipo *Ty*.

*Valore*\
Un valore di tipo *Ty*.

*Order1*\
Primo `memory_order` argomento.

*Order2*\
Secondo argomento `memory_order`.

### <a name="return-value"></a>Valore restituito

**Bool** che indica il risultato del confronto dei valori.

### <a name="remarks"></a>Note

Questa operazione di confronto e scambio atomico confronta il valore  **\*archiviato in con** *Exp*. Se i valori sono uguali, l'operazione sostituisce il valore archiviato in  **\*questo** oggetto con*valore* utilizzando un'operazione di lettura-modifica-scrittura e applicando i vincoli dell'ordine di memoria specificati da *Order1*. Se i valori non sono uguali, l'operazione usa il valore  **\*archiviato in per** sostituire *Exp* e applica i vincoli dell'ordine di memoria specificati da *Order2*.

Un'operazione di confronto e scambio atomica debole esegue uno scambio se i valori confrontati sono uguali. Se i valori non sono uguali, l'operazione non garantisce l'esecuzione di uno scambio.

Gli overload che non dispongono di un secondo `memory_order` utilizzano un *Order2* implicito basato sul valore di *Order1*. Se *Order1* è `memory_order_acq_rel`, *Order2* è `memory_order_acquire`. Se *Order1* è `memory_order_release`, *Order2* è `memory_order_relaxed`. In tutti gli altri casi, *Order2* è uguale a *Order1*.

Per gli overload che accettano due `memory_order` parametri, il valore di *Order2* non deve essere `memory_order_release` o `memory_order_acq_rel`e non deve essere maggiore del valore di *Order1*.

## <a name="exchange"></a>Atomic:: Exchange

Usa un valore specificato per sostituire il valore archiviato di  **\*questo**oggetto.

```cpp
Ty atomic<Ty>::exchange(
   Ty Value,
   memory_order Order = memory_order_seq_cst
) volatile noexcept;
Ty atomic<Ty>::exchange(
   Ty Value,
   memory_order Order = memory_order_seq_cst
) noexcept;
```

### <a name="parameters"></a>Parametri

*Valore*\
Un valore di tipo *Ty*.

*Ordine*\
Oggetto `memory_order`.

### <a name="return-value"></a>Valore restituito

Valore archiviato di  **\*questo** oggetto prima di Exchange.

### <a name="remarks"></a>Note

Questa operazione esegue un'operazione di lettura-modifica-scrittura per usare *value* per sostituire il valore archiviato in  **\*questo**oggetto, all'interno dei vincoli di memoria specificati dall' *ordine*.

## <a name="fetch_add"></a> atomic::fetch_add

Recupera il valore archiviato in  **\*questo**oggetto, quindi aggiunge un valore specificato al valore archiviato.

```cpp
Ty atomic<Ty>::fetch_add (
   Ty Value,
   memory_order Order = memory_order_seq_cst
) volatile noexcept;
Ty atomic<Ty>::fetch_add (
   Ty Value,
   memory_order Order = memory_order_seq_cst
) noexcept;
```

### <a name="parameters"></a>Parametri

*Valore*\
Un valore di tipo *Ty*.

*Ordine*\
Oggetto `memory_order`.

### <a name="return-value"></a>Valore restituito

Oggetto *Ty* che contiene il valore archiviato in  **\*questo** oggetto prima dell'addizione.

### <a name="remarks"></a>Note

Il `fetch_add` metodo esegue un'operazione di lettura-modifica-scrittura per aggiungere in modo atomico un *valore* al valore archiviato in  **\*questo**oggetto e applica i vincoli di memoria specificati dall' *ordine*.

## <a name="fetch_and"></a> atomic::fetch_and

Esegue un operatore and bit per bit su un valore e un valore esistente archiviato in  **\*questo**oggetto.

```cpp
Ty atomic<Ty>::fetch_and (
   Ty Value,
   memory_order Order = memory_order_seq_cst
) volatile noexcept;
Ty atomic<Ty>::fetch_and (
   Ty Value,
   memory_order Order = memory_order_seq_cst
) noexcept;
```

### <a name="parameters"></a>Parametri

*Valore*\
Un valore di tipo *Ty*.

*Ordine*\
Oggetto `memory_order`.

### <a name="return-value"></a>Valore restituito

Oggetto *Ty* che contiene il risultato dell'operatore and bit per bit.

### <a name="remarks"></a>Note

Il `fetch_and` metodo esegue un'operazione di lettura-modifica-scrittura per sostituire il valore archiviato di  **\*questo** oggetto con l'operatore and bit per bit di *value* e il valore corrente archiviato in  **\*questo**oggetto, all'interno della memoria. vincoli specificati dall' *ordine*.

## <a name="fetch_or"></a>Atomic:: fetch_or

Esegue un'operazione OR bit per bit su un valore e un valore esistente archiviato in  **\*questo**oggetto.

```cpp
Ty atomic<Ty>::fetch_or (
   Ty Value,
   memory_order Order = memory_order_seq_cst
) volatile noexcept;
Ty atomic<Ty>::fetch_or (
   Ty Value,
   memory_order Order = memory_order_seq_cst
) noexcept;
```

### <a name="parameters"></a>Parametri

*Valore*\
Un valore di tipo *Ty*.

*Ordine*\
Oggetto `memory_order`.

### <a name="return-value"></a>Valore restituito

Oggetto *Ty* che contiene il risultato dell'operatore OR bit per bit.

### <a name="remarks"></a>Note

Il `fetch_or` metodo esegue un'operazione di lettura-modifica-scrittura per sostituire il valore archiviato di  **\*questo** oggetto con un'operazione OR bit per bit di *value* e il valore corrente archiviato in  **\*questo**oggetto, all'interno della memoria. vincoli specificati dall' *ordine*.

## <a name="fetch_sub"></a>Atomic:: fetch_sub

Sottrae un valore specificato da un valore archiviato.

```cpp
Ty atomic<Ty>::fetch_sub (
   Ty Value,
   memory_order Order = memory_order_seq_cst
) volatile noexcept;
Ty atomic<Ty>::fetch_sub (
   Ty Value,
   memory_order Order = memory_order_seq_cst
) noexcept;
```

### <a name="parameters"></a>Parametri

*Valore*\
Un valore di tipo *Ty*.

*Ordine*\
Oggetto `memory_order`.

### <a name="return-value"></a>Valore restituito

Oggetto *Ty* che contiene il risultato della sottrazione.

### <a name="remarks"></a>Note

Il `fetch_sub` metodo esegue un'operazione di lettura-modifica-scrittura per sottrarre in modo atomico il *valore* dal valore archiviato in  **\*questo**, all'interno dei vincoli di memoria specificati dall' *ordine*.

## <a name="fetch_xor"></a>Atomic:: fetch_xor

Esegue un'operazione con OR esclusivo bit per bit su un valore e un valore esistente archiviato in  **\*questo**oggetto.

```cpp
Ty atomic<Ty>::fetch_xor (
   Ty Value,
   memory_order Order = memory_order_seq_cst
) volatile noexcept;
Ty atomic<Ty>::fetch_xor (
   Ty Value,
   memory_order Order = memory_order_seq_cst
) noexcept;
```

### <a name="parameters"></a>Parametri

*Valore*\
Un valore di tipo *Ty*.

*Ordine*\
Oggetto `memory_order`.

### <a name="return-value"></a>Valore restituito

Oggetto *Ty* che contiene il risultato dell'OR esclusivo bit per bit.

### <a name="remarks"></a>Note

Il `fetch_xor` metodo esegue un'operazione di lettura-modifica-scrittura per sostituire il valore archiviato  **\*di con** un oggetto or esclusivo bit per bit di *valore* e il valore corrente archiviato in  **\*questo**oggetto e applica l'oggetto vincoli di memoria specificati dall' *ordine*.

## <a name="is_lock_free"></a> atomic::is_lock_free

Specifica se le operazioni atomiche in  **\*questo** blocco sono gratuite.

```cpp
bool is_lock_free() const volatile noexcept;
```

### <a name="return-value"></a>Valore restituito

true se le operazioni atomiche su  **\*questo** sono senza blocco; in caso contrario, false.

### <a name="remarks"></a>Note

Un tipo atomico è senza blocco se nessuna operazione atomica su tale tipo usa i blocchi.

## <a name="load"></a>Atomic:: Load

Recupera il valore archiviato in  **\*questo**oggetto, entro i vincoli di memoria specificati.

```cpp
Ty atomic::load(
   memory_order Order = memory_order_seq_cst
) const volatile noexcept;
Ty atomic::load(
   memory_order Order = memory_order_seq_cst
) const noexcept;
```

### <a name="parameters"></a>Parametri

*Ordine*\
Oggetto `memory_order`. L' *ordine* non deve `memory_order_release` essere `memory_order_acq_rel`o.

### <a name="return-value"></a>Valore restituito

Valore recuperato  **\*archiviato in.**

## <a name="store"></a>Atomic:: Store

Archivia un valore specificato.

```cpp
void atomic<Ty>::store(
   Ty Value,
   memory_order Order = memory_order_seq_cst
) volatile noexcept;
void atomic<Ty>::store(
   Ty Value,
   memory_order Order = memory_order_seq_cst
) noexcept;
```

### <a name="parameters"></a>Parametri

*Valore*\
Oggetto *Ty* .

*Ordine*\
`memory_order` Vincolo.

### <a name="remarks"></a>Note

Questa funzione membro archivia in modo  atomico il `*this`valore in, all'interno dei vincoli di memoria specificati dall' *ordine*.

## <a name="see-also"></a>Vedere anche

[\<atomic>](../standard-library/atomic.md)\
[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)

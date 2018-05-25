---
title: Struttura atomic | Microsoft Docs
ms.custom: ''
ms.date: 04/20/2018
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- atomic/std::atomic
dev_langs:
- C++
ms.assetid: 261628ed-7049-41ac-99b9-cfe49f696b44
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7308c127bebd2185429509315ebafb3d83a7efea
ms.sourcegitcommit: b0d5557dbb57128da560a0a4634312ec4a050a90
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/24/2018
---
# <a name="atomic-structure"></a>Struttura atomic

Descrive un oggetto che consente di eseguire operazioni atomiche su un valore archiviato di tipo *Ty*.

## <a name="syntax"></a>Sintassi

```cpp
template <class Ty>
struct atomic;
```

## <a name="members"></a>Membri

|Membro|Descrizione|
|----------|-----------------|
|**Costruttore**||
|[atomic](#atomic)|Costruisce un oggetto atomico.|
|**Operatori**||
|[operatore atomic:: Ty](#op_ty)|Legge e restituisce il valore archiviato. ([atomic:: Load](#load))|
|[operatore atomic:: =](#op_eq)|Usa un valore specificato per sostituire il valore archiviato. ([atomic::store](#store))|
|[operatore atomic:: + +](#op_inc)|Incrementa il valore archiviato. Usato solo da specializzazioni integrali e dei puntatori.|
|[operatore atomic:: + =](#op_add_eq)|Aggiunge un valore specificato al valore archiviato. Usato solo da specializzazioni integrali e dei puntatori.|
|[operatore atomic::-](#op_dec)|Decrementa il valore archiviato. Usato solo da specializzazioni integrali e dei puntatori.|
|[operatore atomic:: =](#op_sub_eq)|Sottrae un valore specificato da un valore archiviato. Usato solo da specializzazioni integrali e dei puntatori.|
|[operatore atomic:: & =](#op_and_eq)|Bit per bit e un valore specificato e il valore archiviato. Usato solo da specializzazioni integrali.|
|[operatore atomic::&#124;=](#op_or_eq)|Bit per bit o su un valore specificato e il valore archiviato. Usato solo da specializzazioni integrali.|
|[operatore atomic:: ^ =](#op_xor_eq)|Esegue un esclusivo bit per bit o su un valore specificato e il valore archiviato. Usato solo da specializzazioni integrali.|
|**Funzioni**||
|[compare_exchange_strong](#compare_exchange_strong)|Esegue un' *atomic_compare_and_exchange* operazione sul **ciò** e restituisce il risultato.|
|[compare_exchange_weak](#compare_exchange_weak)|Esegue un *weak_atomic_compare_and_exchange* operazione sul **ciò** e restituisce il risultato.|
|[fetch_add](#fetch_add)|Aggiunge un valore specificato al valore archiviato.|
|[fetch_and](#fetch_and)|Bit per bit e un valore specificato e il valore archiviato.|
|[fetch_or](#fetch_or)|Bit per bit o su un valore specificato e il valore archiviato.|
|[fetch_sub](#fetch_sub)|Sottrae un valore specificato da un valore archiviato.|
|[fetch_xor](#fetch_xor)|Esegue un esclusivo bit per bit o su un valore specificato e il valore archiviato.|
|[is_lock_free](#is_lock_free)|Specifica se eseguire operazioni atomiche su **ciò** vengono *blocco libero*. Un tipo atomico è *senza blocco* se nessuna operazione atomica in tale tipo usa i blocchi.|
|[load](#load)|Legge e restituisce il valore archiviato.|
|[store](#store)|Usa un valore specificato per sostituire il valore archiviato.|

## <a name="remarks"></a>Note

Il tipo *Ty* deve essere *facilmente copiabili*. Vale a dire usando [memcpy](../c-runtime-library/reference/memcpy-wmemcpy.md) copiare i relativi byte deve produrre un valore valido *Ty* oggetti che risultano uguali all'oggetto originale. Il [compare_exchange_weak](#compare_exchange_weak) e [compare_exchange_strong](#compare_exchange_strong) utilizzare le funzioni membro [memcmp](../c-runtime-library/reference/memcmp-wmemcmp.md) per determinare se due *Ty* valori sono uguali. Queste funzioni non utilizzerà un *Ty*-definiti **operatore = =**. Le funzioni membro **atomica** utilizzare **memcpy** per copiare i valori di tipo *Ty*.

Una specializzazione parziale **atomica\<Ty \* >** , è destinato a tutti i tipi di puntatore. La specializzazione consente l'aggiunta o la sottrazione di un offset dal valore del puntatore gestito. Operazioni aritmetiche accettano un argomento di tipo **ptrdiff_t** e modificare tale argomento in base alle dimensioni dei *Ty* siano coerenti con l'indirizzo ordinario aritmetico.

Una specializzazione esiste per ogni tipo integrale eccetto **bool**. Ogni specializzazione offre un set di metodi per le operazioni logiche e di aritmetica atomica.

||||
|-|-|-|
|**atomic\<char >**|**atomic\<char con segno >**|**atomic\<unsigned char >**|
|**atomic\<char16_t >**|**atomic\<char32_t >**|**atomic\<wchar_t >**|
|**atomic\<breve >**|**atomic\<breve senza segno >**|**atomic\<int >**|
|**atomic\<int senza segno >**|**atomic\<lungo >**|**atomic\<long senza segno >**|
|**atomic\<long long >**|**atomic\<long long senza segno >**|

Le specializzazioni integrale derivano dalla corrispondente **atomic_integral** tipi. Ad esempio **atomica\<int senza segno >** derivato da **atomic_uint**.

## <a name="requirements"></a>Requisiti

**Intestazione:** \<atomic >

**Spazio dei nomi:** std

## <a name="atomic"></a> atomic:: Atomic

Costruisce un oggetto atomico.

```cpp
atomic();
atomic( const atomic& );
atomic( Ty Value ) noexcept;
```

### <a name="parameters"></a>Parametri

*Valore*<br/>
Valore di inizializzazione.

### <a name="remarks"></a>Note

Oggetti atomici non è possibile copiare o spostare.

Gli oggetti che sono istanze di atomic\<*Ty*> può essere inizializzato solo dal costruttore che accetta un argomento di tipo *Ty* e non tramite l'inizializzazione aggregata. Tuttavia, gli oggetti atomic_integral possono essere inizializzati solo tramite l'inizializzazione aggregata.

```cpp
atomic<int> ai0 = ATOMIC_VAR_INIT(0);
atomic<int> ai1(0);
```

## <a name="op_ty"></a> operatore atomic:: *Ty*

L'operatore per il tipo specificato per il modello, atomic\<*Ty*>. Recupera il valore archiviato in  **\*questo**.

```cpp
atomic<Ty>::operator Ty() const volatile noexcept;
atomic<Ty>::operator Ty() const noexcept;
```

### <a name="remarks"></a>Note

Questo operatore viene applicato il **memory_order_seq_cst** [memory_order](atomic-enums.md).

## <a name="op_eq"></a> operatore atomic:: =

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

*Valore*<br/>
Un *Ty* oggetto.

### <a name="return-value"></a>Valore restituito

Restituisce *valore*.

## <a name="op_inc"></a> operatore atomic:: + +

Incrementa il valore archiviato. Usato solo da specializzazioni integrali e dei puntatori.

```cpp
Ty atomic<Ty>::operator++(int) volatile noexcept;
Ty atomic<Ty>::operator++(int) noexcept;
Ty atomic<Ty>::operator++() volatile noexcept;
Ty atomic<Ty>::operator++() noexcept;
```

### <a name="return-value"></a>Valore restituito

I primi due operatori restituiscono il valore incrementato; gli ultimi due operatori restituiscono il valore prima l'incremento. Gli operatori di usano il **memory_order_seq_cst** [memory_order](atomic-enums.md).

## <a name="op_add_eq"></a> operatore atomic:: + =

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

*Valore*<br/>
Un valore integrale o puntatore.

### <a name="return-value"></a>Valore restituito

Un *Ty* oggetto che contiene il risultato dell'addizione.

### <a name="remarks"></a>Note

Questo operatore viene utilizzato il **memory_order_seq_cst** [memory_order](atomic-enums.md).

## <a name="op_dec"></a> operatore atomic::-

Decrementa il valore archiviato. Usato solo da specializzazioni integrali e dei puntatori.

```cpp
Ty atomic<Ty>::operator--(int) volatile noexcept;
Ty atomic<Ty>::operator--(int) noexcept;
Ty atomic<Ty>::operator--() volatile noexcept;
Ty atomic<Ty>::operator--() noexcept;
```

### <a name="return-value"></a>Valore restituito

I primi due operatori restituiscono il valore decrementato; gli ultimi due operatori restituiscono il valore prima il decremento. Gli operatori di usano il **memory_order_seq_cst** [memory_order](atomic-enums.md).

## <a name="op_sub_eq"></a> operatore atomic:: =

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

*Valore*<br/>
Un valore integrale o puntatore.

### <a name="return-value"></a>Valore restituito

Un *Ty* oggetto che contiene il risultato della sottrazione.

### <a name="remarks"></a>Note

Questo operatore viene utilizzato il **memory_order_seq_cst** [memory_order](atomic-enums.md).

## <a name="op_and_eq"></a> operatore atomic:: & =

Bit per bit e in un valore specificato e il valore archiviato  **\*questo**. Usato solo da specializzazioni integrali.

```cpp
atomic<Ty>::operator&= (
   Ty Value
) volatile noexcept;
atomic<Ty>::operator&= (
   Ty Value
) noexcept;
```

### <a name="parameters"></a>Parametri

*Valore*<br/>
Un valore di tipo *Ty*.

### <a name="return-value"></a>Valore restituito

Il risultato di bit per bit e.

### <a name="remarks"></a>Note

Questo operatore esegue un'operazione read-modify-write per sostituire il valore archiviato  **\*questo** con un bit per bit e di *valore* e il valore corrente viene archiviato in  **\*ciò**, entro i limiti del **memory_order_seq_cst** [memory_order](atomic-enums.md).

## <a name="op_or_eq"></a> operatore atomic::&#124;=

Bit per bit o su un valore specificato e il valore archiviato  **\*questo**. Usato solo da specializzazioni integrali.

```cpp
atomic<Ty>::operator|= (
   Ty Value
) volatile noexcept;
atomic<Ty>::operator|= (
   Ty Value
) noexcept;
```

### <a name="parameters"></a>Parametri

*Valore*<br/>
Un valore di tipo *Ty*.

### <a name="return-value"></a>Valore restituito

Il risultato di bit per bit o.

### <a name="remarks"></a>Note

Questo operatore esegue un'operazione read-modify-write per sostituire il valore archiviato  **\*questo** con un bit per bit o della *valore* e il valore corrente viene archiviato in  **\*ciò**, entro i limiti del **memory_order_seq_cst** [memory_order](atomic-enums.md) vincoli.

## <a name="op_xor_eq"></a> operatore atomic:: ^ =

Esegue un esclusivo bit per bit o su un valore specificato e il valore archiviato  **\*questo**. Usato solo da specializzazioni integrali.

```cpp
atomic<Ty>::operator^= (
   Ty Value
) volatile noexcept;
atomic<Ty>::operator^= (
   Ty Value
) noexcept;
```

### <a name="parameters"></a>Parametri

*Valore*<br/>
Un valore di tipo *Ty*.

### <a name="return-value"></a>Valore restituito

Il risultato di bit per bit esclusivo o.

### <a name="remarks"></a>Note

Questo operatore esegue un'operazione read-modify-write per sostituire il valore archiviato  **\*questo** con un bit per bit esclusivo o della *valore* e il valore corrente viene archiviato in  **\*ciò**, entro i limiti del **memory_order_seq_cst** [memory_order](atomic-enums.md) vincoli.

## <a name="compare_exchange_strong"></a> atomic:: compare_exchange_strong

Esegue un'operazione di confronto e scambio atomica sul  **\*questo**.

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

*Exp*<br/>
Un valore di tipo *Ty*.

*Valore*<br/>
Un valore di tipo *Ty*.

*Diffgr:ID="Order1*<br/>
Primo argomento **memory_order**.

*Order2*<br/>
Secondo **memory_order** argomento.

### <a name="return-value"></a>Valore restituito

Un **bool** che indica il risultato del confronto del valore.

### <a name="remarks"></a>Note

Questa operazione di confronto e scambio atomica confronta il valore archiviato in  **\*questo** con *Exp*. Se i valori sono uguali, l'operazione sostituisce il valore archiviato in  **\*questo** con *valore* utilizzando un'operazione read-modify-write e applicando i vincoli di ordine di memoria che sono specificato da *diffgr:ID="Order1*. Se i valori non sono uguali, l'operazione viene utilizzato il valore archiviato in  **\*questo** sostituire *Exp* e applica i vincoli di ordine di memoria specificati da *Order2* .

Gli overload che non dispongono di un secondo **memory_order** utilizzare implicita *Order2* che è in base al valore di *diffgr:ID="Order1*. Se *diffgr:ID="Order1* viene **memory_order_acq_rel**, *Order2* è **memory_order_acquire**. Se *diffgr:ID="Order1* viene **memory_order_release**, *Order2* è **memory_order_relaxed**. In tutti gli altri casi *Order2* è uguale a *diffgr:ID="Order1*.

Per gli overload che accettano due **memory_order** parametri, il valore di *Order2* non deve essere **memory_order_release** o **memory_order_acq_rel**e non deve essere maggiore rispetto al valore del *diffgr:ID="Order1*.

## <a name="compare_exchange_weak"></a> atomic:: compare_exchange_weak

Esegue un'operazione confronto e scambio atomica debole sugli  **\*questo**.

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

*Exp*<br/>
Un valore di tipo *Ty*.

*Valore*<br/>
Un valore di tipo *Ty*.

*Diffgr:ID="Order1*<br/>
Primo argomento **memory_order**.

*Order2*<br/>
Secondo **memory_order** argomento.

### <a name="return-value"></a>Valore restituito

Un **bool** che indica il risultato del confronto del valore.

### <a name="remarks"></a>Note

Questa operazione di confronto e scambio atomica confronta il valore archiviato in  **\*questo** con *Exp*. Se i valori sono uguali, l'operazione sostituisce il valore archiviato in  **\*questo** con*valore* utilizzando un'operazione read-modify-write e applicando i vincoli di ordine di memoria che sono specificato da *diffgr:ID="Order1*. Se i valori non sono uguali, l'operazione viene utilizzato il valore archiviato in  **\*questo** sostituire *Exp* e applica i vincoli di ordine di memoria specificati da *Order2* .

Confrontare un "Weak" atomico e operazione di scambio esegue uno scambio se i valori confrontati sono uguali. Se i valori non sono uguali, l'operazione non è garantita per eseguire uno scambio.

Gli overload che non dispongono di un secondo **memory_order** utilizzare implicita *Order2* che è in base al valore di *diffgr:ID="Order1*. Se *diffgr:ID="Order1* viene **memory_order_acq_rel**, *Order2* è **memory_order_acquire**. Se *diffgr:ID="Order1* viene **memory_order_release**, *Order2* è **memory_order_relaxed**. In tutti gli altri casi *Order2* è uguale a *diffgr:ID="Order1*.

Per gli overload che accettano due **memory_order** parametri, il valore di *Order2* non deve essere **memory_order_release** o **memory_order_acq_rel**e non deve essere maggiore rispetto al valore del *diffgr:ID="Order1*.

## <a name="exchange"></a> atomic:: Exchange

Usa un valore specificato per sostituire il valore archiviato  **\*questo**.

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

*Valore*<br/>
Un valore di tipo *Ty*.

*Ordine*<br/>
Un **memory_order**.

### <a name="return-value"></a>Valore restituito

Il valore archiviato  **\*questo** prima dello scambio.

### <a name="remarks"></a>Note

Questa operazione esegue un'operazione read-modify-write per utilizzare *valore* per sostituire il valore viene memorizzato in  **\*questo**, nei vincoli di memoria specificati da  *Ordine*.

## <a name="fetch_add"></a> atomic:: fetch_add

Recupera il valore archiviato  **\*questo**e quindi aggiunge un valore specificato al valore archiviato.

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

*Valore*<br/>
Un valore di tipo *Ty*.

*Ordine*<br/>
Un **memory_order**.

### <a name="return-value"></a>Valore restituito

Un *Ty* oggetto che contiene il valore archiviato nella  **\*questo** prima dell'aggiunta.

### <a name="remarks"></a>Note

Il **fetch_add** metodo esegue un'operazione read-modify-write per aggiungere in modo atomico *valore* al valore archiviato nella  **\*questo**e applica la memoria i vincoli specificati da *ordine*.

## <a name="fetch_and"></a> atomic:: fetch_and

Bit per bit e su un valore e un valore esistente archiviato in  **\*questo**.

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

*Valore*<br/>
Un valore di tipo *Ty*.

*Ordine*<br/>
Un **memory_order**.

### <a name="return-value"></a>Valore restituito

Un *Ty* oggetto che contiene il risultato di bit per bit e.

### <a name="remarks"></a>Note

Il **fetch_and** metodo esegue un'operazione read-modify-write per sostituire il valore archiviato  **\*questo** con un bit per bit e di *valore* e corrente valore che viene archiviato in  **\*questo**, nei vincoli di memoria specificati da *ordine*.

## <a name="fetch_or"></a> atomic:: fetch_or

Bit per bit o su un valore e un valore esistente archiviato in  **\*questo**.

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

*Valore*<br/>
Un valore di tipo *Ty*.

*Ordine*<br/>
Un **memory_order**.

### <a name="return-value"></a>Valore restituito

Un *Ty* oggetto che contiene il risultato di bit per bit o.

### <a name="remarks"></a>Note

Il **fetch_or** metodo esegue un'operazione read-modify-write per sostituire il valore archiviato  **\*questo** con un bit per bit o di *valore* e il valore corrente che viene archiviato  **\*questo**, nei vincoli di memoria specificati da *ordine*.

## <a name="fetch_sub"></a> atomic:: fetch_sub

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

*Valore*<br/>
Un valore di tipo *Ty*.

*Ordine*<br/>
Un **memory_order**.

### <a name="return-value"></a>Valore restituito

Un *Ty* oggetto che contiene il risultato della sottrazione.

### <a name="remarks"></a>Note

Il **fetch_sub** metodo esegue un'operazione read-modify-write sottrarre atomicamente *valore* rispetto al valore archiviato nel  **\*questo**, all'interno della memoria i vincoli specificati da *ordine*.

## <a name="fetch_xor"></a> atomic:: fetch_xor

Esegue un esclusivo bit per bit o su un valore e un valore esistente archiviato in  **\*questo**.

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

*Valore*<br/>
Un valore di tipo *Ty*.

*Ordine*<br/>
Un **memory_order**.

### <a name="return-value"></a>Valore restituito

Un *Ty* oggetto che contiene il risultato di bit per bit esclusivo o.

### <a name="remarks"></a>Note

Il **fetch_xor** metodo esegue un'operazione read-modify-write per sostituire il valore archiviato  **\*questo** con un bit per bit esclusivo o di *valore* e valore corrente è memorizzato in  **\*questo**e applica i vincoli di memoria specificati da *ordine*.

## <a name="is_lock_free"></a> atomic:: is_lock_free

Specifica se eseguire operazioni atomiche su  **\*questo** sono blocco libero.

```cpp
bool is_lock_free() const volatile noexcept;
```

### <a name="return-value"></a>Valore restituito

true se atomica operazioni sui  **\*questo** sono blocco libero; in caso contrario, false.

### <a name="remarks"></a>Note

Un tipo atomic è blocco libero se nessun operazioni atomiche su quel tipo utilizzano i blocchi.

## <a name="load"></a> atomic:: Load

Recupera il valore archiviato in  **\*questo**, entro i limiti di memoria specificata.

```cpp
Ty atomic::load(
   memory_order Order = memory_order_seq_cst
) const volatile noexcept;
Ty atomic::load(
   memory_order Order = memory_order_seq_cst
) const noexcept;
```

### <a name="parameters"></a>Parametri

*Ordine*<br/>
Un **memory_order**. *Ordine* non deve essere **memory_order_release** o **memory_order_acq_rel**.

### <a name="return-value"></a>Valore restituito

Il valore recuperato archiviato in  **\*questo**.

## <a name="store"></a> atomic:: Store

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

*Valore*<br/>
Un *Ty* oggetto.

*Ordine*<br/>
Un **memory_order** vincolo.

### <a name="remarks"></a>Note

Questa funzione membro archivia in modo atomico *valore* in `*this`, nei vincoli di memoria specificati da *ordine*.

## <a name="see-also"></a>Vedere anche

[\<atomic>](../standard-library/atomic.md)<br/>
[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>

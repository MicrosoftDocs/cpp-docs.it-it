---
title: Classe mutex (libreria standard C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-standard-libraries
ms.topic: reference
f1_keywords:
- mutex/std::mutex
- mutex/std::mutex::mutex
- mutex/std::mutex::lock
- mutex/std::mutex::native_handle
- mutex/std::mutex::try_lock
- mutex/std::mutex::unlock
dev_langs:
- C++
ms.assetid: 7999d055-f74f-4303-810f-8d3c9cde2f69
author: corob-msft
ms.author: corob
helpviewer_keywords:
- std::mutex [C++]
- std::mutex [C++], mutex
- std::mutex [C++], lock
- std::mutex [C++], native_handle
- std::mutex [C++], try_lock
- std::mutex [C++], unlock
ms.workload:
- cplusplus
ms.openlocfilehash: 84a6b685501927d9fbd79fa7c82a90c5671f70b2
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38958945"
---
# <a name="mutex-class-c-standard-library"></a>Classe mutex (libreria standard C++)

Rappresenta un *tipo mutex*. Gli oggetti di questo tipo possono essere utilizzati per gestire l'esclusione reciproca in un programma.

## <a name="syntax"></a>Sintassi

```cpp
class mutex;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[mutex](#mutex)|Costruisce un oggetto `mutex`.|
|[Distruttore mutex::~mutex](#dtormutex_destructor)|Rilascia le risorse utilizzate dall'oggetto `mutex`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[lock](#lock)|Blocca il thread chiamante finché il thread non ottiene la proprietà di `mutex`.|
|[native_handle](#native_handle)|Restituisce il tipo specifico dell'implementazione che rappresenta l'handle mutex.|
|[try_lock](#try_lock)|Tenta di ottenere proprietà di `mutex` senza bloccare.|
|[unlock](#unlock)|Rilascia la proprietà di `mutex`.|

## <a name="requirements"></a>Requisiti

**Intestazione:** \<mutex >

**Spazio dei nomi:** std

## <a name="lock"></a>  mutex::lock

Blocca il thread chiamante finché il thread non ottiene la proprietà di `mutex`.

```cpp
void lock();
```

### <a name="remarks"></a>Note

Se il thread chiamante è già proprietario di `mutex`, il comportamento non è definito.

## <a name="mutex"></a>  Costruttore mutex::mutex

Costruisce un oggetto `mutex` non bloccato.

```cpp
constexpr mutex() noexcept;
```

## <a name="dtormutex_destructor"></a>  Distruttore mutex::~mutex

Rilascia le risorse usate dall'oggetto `mutex`.

```cpp
~mutex();
```

### <a name="remarks"></a>Note

Se l'oggetto è bloccato quando il distruttore viene eseguito, il comportamento non è definito.

## <a name="native_handle"></a>  mutex::native_handle

Restituisce il tipo specifico dell'implementazione che rappresenta l'handle mutex. L'handle del mutex può essere usato in modi specifici dell'implementazione.

```cpp
native_handle_type native_handle();
```

### <a name="return-value"></a>Valore restituito

`native_handle_type` viene definito come `Concurrency::critical_section *` di cui viene eseguito il cast come `void *`.

## <a name="try_lock"></a>  mutex::try_lock

Tenta di ottenere proprietà di `mutex` senza bloccare.

```cpp
bool try_lock();
```

### <a name="return-value"></a>Valore restituito

**true** se il metodo ottiene correttamente la proprietà del `mutex`; in caso contrario, **false**.

### <a name="remarks"></a>Note

Se il thread chiamante è già proprietario di `mutex`, il comportamento non è definito.

## <a name="unlock"></a>  mutex::unlock

Rilascia la proprietà di `mutex`.

```cpp
void unlock();
```

### <a name="remarks"></a>Note

Se il thread chiamante non è proprietario di `mutex`, il comportamento non è definito.

## <a name="see-also"></a>Vedere anche

[Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)<br/>
[\<mutex>](../standard-library/mutex.md)<br/>

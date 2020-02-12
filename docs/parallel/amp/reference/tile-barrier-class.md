---
title: Classe tile_barrier
ms.date: 03/27/2019
f1_keywords:
- tile_barrier
- AMP/tile_barrier
- AMP/Concurrency::tile_barrier::tile_barrier::tile_barrier
- AMP/Concurrency::tile_barrier::tile_barrier::wait
- AMP/Concurrency::tile_barrier::tile_barrier::wait_with_all_memory_fence
- AMP/Concurrency::tile_barrier::tile_barrier::wait_with_global_memory_fence
- AMP/Concurrency::tile_barrier::tile_barrier::wait_with_tile_static_memory_fence
helpviewer_keywords:
- tile_barrier class
ms.assetid: b4ccdccb-0032-4e11-b7bd-dc9d43445dee
ms.openlocfilehash: 757309a10da3e6d1c9c053430cce2cf603380b1f
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77127764"
---
# <a name="tile_barrier-class"></a>Classe tile_barrier

Sincronizza l'esecuzione di thread in esecuzione nel gruppo di thread (il riquadro) utilizzando `wait` metodi. Solo il runtime può creare un'istanza di questa classe.

## <a name="syntax"></a>Sintassi

```cpp
class tile_barrier;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore tile_barrier](#ctor)|Inizializza una nuova istanza della classe `tile_barrier`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[attendere](#wait)|Indica a tutti i thread del gruppo di thread (riquadro) di arrestare l'esecuzione fino a quando tutti i thread nel riquadro non hanno terminato l'attesa.|
|[wait_with_all_memory_fence](#wait_with_all_memory_fence)|Blocca l'esecuzione di tutti i thread in una sezione finché tutti gli accessi alla memoria non sono stati completati e tutti i thread nella sezione non hanno raggiunto questa chiamata.|
|[wait_with_global_memory_fence](#wait_with_global_memory_fence)|Blocca l'esecuzione di tutti i thread in una sezione finché tutti gli accessi alla memoria globale non sono stati completati e tutti i thread nella sezione non hanno raggiunto questa chiamata.|
|[wait_with_tile_static_memory_fence](#wait_with_tile_static_memory_fence)|Blocca l'esecuzione di tutti i thread in una sezione fino a quando tutti i `tile_static` accessi alla memoria non sono stati completati e tutti i thread nel riquadro hanno raggiunto questa chiamata.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`tile_barrier`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp.h

**Spazio dei nomi:** Concurrency

## <a name="ctor"></a>Costruttore tile_barrier

Inizializza una nuova istanza della classe copiando una esistente.

### <a name="syntax"></a>Sintassi

```cpp
tile_barrier(
    const tile_barrier& _Other ) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Oggetto `tile_barrier` da copiare.

## <a name="wait"></a>wait

Indica a tutti i thread del gruppo di thread (riquadro) di arrestare l'esecuzione fino a quando tutti i thread nel riquadro non hanno terminato l'attesa.

### <a name="syntax"></a>Sintassi

```cpp
void wait() const restrict(amp);
```

## <a name="wait_with_all_memory_fence"></a>wait_with_all_memory_fence

Blocca l'esecuzione di tutti i thread in una sezione fino a quando tutti i thread in una sezione non hanno raggiunto questa chiamata. In questo modo si garantisce che tutti gli accessi alla memoria siano visibili agli altri thread nella sezione del thread e siano stati eseguiti nell'ordine del programma.

### <a name="syntax"></a>Sintassi

```cpp
void wait_with_all_memory_fence() const restrict(amp);
```

## <a name="a-namewait_with_global_memory_fence-wait_with_global_memory_fence"></a><a name="wait_with_global_memory_fence"> wait_with_global_memory_fence

Blocca l'esecuzione di tutti i thread in una sezione fino a quando tutti i thread in una sezione non hanno raggiunto questa chiamata. Ciò garantisce che tutti gli accessi alla memoria globale siano visibili agli altri thread nella sezione del thread e siano stati eseguiti nell'ordine del programma.

### <a name="syntax"></a>Sintassi

```cpp
void wait_with_global_memory_fence() const  restrict(amp);
```

## <a name="a-namewait_with_tile_static_memory_fence-wait_with_tile_static_memory_fence"></a><a name="wait_with_tile_static_memory_fence"> wait_with_tile_static_memory_fence

Blocca l'esecuzione di tutti i thread in una sezione fino a quando tutti i thread in una sezione non hanno raggiunto questa chiamata. In questo modo si garantisce che `tile_static` gli accessi di memoria siano visibili agli altri thread nella sezione del thread e siano stati eseguiti nell'ordine del programma.

### <a name="syntax"></a>Sintassi

```cpp
void wait_with_tile_static_memory_fence() const restrict(amp);
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)

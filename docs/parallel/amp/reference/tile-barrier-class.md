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
ms.openlocfilehash: c00f1e41e70e723be185959eeff176390def7647
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374717"
---
# <a name="tile_barrier-class"></a>Classe tile_barrier

Sincronizza l'esecuzione dei thread in esecuzione nel gruppo di `wait` thread (il riquadro) utilizzando i metodi. Solo il runtime può creare un'istanza di questa classe.

## <a name="syntax"></a>Sintassi

```cpp
class tile_barrier;
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore tile_barrier](#ctor)|Inizializza una nuova istanza della classe `tile_barrier`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Aspettare](#wait)|Indica a tutti i thread nel gruppo di thread (riquadro) di interrompere l'esecuzione fino a quando tutti i thread nel riquadro non hanno terminato l'attesa.|
|[wait_with_all_memory_fence](#wait_with_all_memory_fence)|Blocca l'esecuzione di tutti i thread in un riquadro fino a quando tutti gli accessi alla memoria non sono stati completati e tutti i thread nel riquadro hanno raggiunto questa chiamata.|
|[wait_with_global_memory_fence](#wait_with_global_memory_fence)|Blocca l'esecuzione di tutti i thread in un riquadro finché tutti gli accessi alla memoria globale non sono stati completati e tutti i thread nel riquadro hanno raggiunto questa chiamata.|
|[wait_with_tile_static_memory_fence](#wait_with_tile_static_memory_fence)|Blocca l'esecuzione di tutti `tile_static` i thread in un riquadro fino a quando tutti gli accessi alla memoria non sono stati completati e tutti i thread nel riquadro hanno raggiunto questa chiamata.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`tile_barrier`

## <a name="requirements"></a>Requisiti

**Intestazione:** amp.h

**Spazio dei nomi:** Concorrenza

## <a name="tile_barrier-constructor"></a><a name="ctor"></a>Costruttore tile_barrier

Inizializza una nuova istanza della classe copiandone una esistente.

### <a name="syntax"></a>Sintassi

```cpp
tile_barrier(
    const tile_barrier& _Other ) restrict(amp,cpu);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Oggetto `tile_barrier` da copiare.

## <a name="wait"></a>wait

Indica a tutti i thread nel gruppo di thread (riquadro) di interrompere l'esecuzione fino al termine dell'attesa di tutti i thread nel riquadro.

### <a name="syntax"></a>Sintassi

```cpp
void wait() const restrict(amp);
```

## <a name="wait_with_all_memory_fence"></a><a name="wait_with_all_memory_fence"></a>wait_with_all_memory_fence

Blocca l'esecuzione di tutti i thread in un riquadro finché tutti i thread in un riquadro non hanno raggiunto questa chiamata. Ciò garantisce che tutti gli accessi alla memoria siano visibili ad altri thread nel riquadro del thread e siano stati eseguiti nell'ordine del programma.

### <a name="syntax"></a>Sintassi

```cpp
void wait_with_all_memory_fence() const restrict(amp);
```

## <a name="a-namewait_with_global_memory_fence-wait_with_global_memory_fence"></a><a name="wait_with_global_memory_fence">wait_with_global_memory_fence

Blocca l'esecuzione di tutti i thread in un riquadro finché tutti i thread in un riquadro non hanno raggiunto questa chiamata. Ciò garantisce che tutti gli accessi alla memoria globale siano visibili ad altri thread nel riquadro del thread e siano stati eseguiti nell'ordine del programma.

### <a name="syntax"></a>Sintassi

```cpp
void wait_with_global_memory_fence() const  restrict(amp);
```

## <a name="a-namewait_with_tile_static_memory_fence-wait_with_tile_static_memory_fence"></a><a name="wait_with_tile_static_memory_fence">wait_with_tile_static_memory_fence

Blocca l'esecuzione di tutti i thread in un riquadro finché tutti i thread in un riquadro non hanno raggiunto questa chiamata. Ciò garantisce che `tile_static` gli accessi alla memoria siano visibili ad altri thread nel riquadro del thread e siano stati eseguiti nell'ordine del programma.

### <a name="syntax"></a>Sintassi

```cpp
void wait_with_tile_static_memory_fence() const restrict(amp);
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (AMP)](concurrency-namespace-cpp-amp.md)

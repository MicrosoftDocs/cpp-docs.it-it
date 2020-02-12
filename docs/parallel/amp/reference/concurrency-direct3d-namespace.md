---
title: Spazio dei nomi Concurrency::direct3d
ms.date: 11/04/2016
f1_keywords:
- amp/Concurrency::direct3d
- amprt/Concurrency::direct3d
- amp_short_vectors/Concurrency::direct3d
- amp_graphics/Concurrency::direct3d
- amp_math/Concurrency::direct3d
helpviewer_keywords:
- direct3d namespace
ms.assetid: 9566a2f1-4d5f-43e4-a3ac-676643d38420
ms.openlocfilehash: e1374acbd7061afaba372100cf6e69d9d717da8a
ms.sourcegitcommit: a8ef52ff4a4944a1a257bdaba1a3331607fb8d0f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/11/2020
ms.locfileid: "77127033"
---
# <a name="concurrencydirect3d-namespace"></a>Spazio dei nomi Concurrency::direct3d

Lo spazio dei nomi `direct3d` fornisce funzioni che supportano l'interoperabilità D3D. Consente di usare le risorse D3D per il calcolo in codice AMP. Consente inoltre di utilizzare le risorse create in AMP nel codice D3D, senza creare copie intermedie ridondanti. È possibile accelerare gradualmente le sezioni con utilizzo intensivo di calcolo delle applicazioni DirectX usando C++ amp e usare l'API D3D sui dati prodotti da calcoli amp.

## <a name="syntax"></a>Sintassi

```cpp
namespace direct3d;
```

## <a name="members"></a>Members

### <a name="classes"></a>Classi

|Nome|Descrizione|
|----------|-----------------|
|[Classe scoped_d3d_access_lock](scoped-d3d-access-lock-class.md)|Wrapper RAII per un blocco di accesso D3D su un oggetto `accelerator_view`.|

### <a name="structures"></a>Strutture

|Nome|Descrizione|
|----------|-----------------|
|[Struttura adopt_d3d_access_lock_t](adopt-d3d-access-lock-t-structure.md)|Tipo di tag per indicare che è necessario adottare il blocco di accesso D3D anziché acquisire.|

### <a name="functions"></a>Funzioni

|Nome|Descrizione|
|----------|-----------------|
|[abs](concurrency-direct3d-namespace-functions-amp.md#abs)|Restituisce il valore assoluto dell'argomento.|
|[morsetto](concurrency-direct3d-namespace-functions-amp.md#clamp)|Di overload. Clamp _X al _Min e all'intervallo di _Max specificati|
|[countbits](concurrency-direct3d-namespace-functions-amp.md#countbits)|Conta il numero di bit impostati in _X|
|[create_accelerator_view](concurrency-direct3d-namespace-functions-amp.md#create_accelerator_view)|Crea una [classe di accelerator_view](accelerator-view-class.md) da un puntatore a un'interfaccia del dispositivo Direct3D|
|[d3d_access_lock](concurrency-direct3d-namespace-functions-amp.md#d3d_access_lock)|Acquisisce un blocco su un accelerator_view per eseguire in modo sicuro le operazioni D3D sulle risorse condivise con l'accelerator_view|
|[d3d_access_try_lock](concurrency-direct3d-namespace-functions-amp.md#d3d_access_try_lock)|Tentativo di acquisire il blocco di accesso D3D su un accelerator_view senza blocco.|
|[d3d_access_unlock](concurrency-direct3d-namespace-functions-amp.md#d3d_access_unlock)|Rilascia il blocco di accesso D3D sul accelerator_view specificato.|
|[firstbithigh](concurrency-direct3d-namespace-functions-amp.md#firstbithigh)|Ottiene la posizione del primo bit impostato in _X, iniziando dal bit di ordine più elevato e lavorando verso il basso|
|[firstbitlow](concurrency-direct3d-namespace-functions-amp.md#firstbitlow)|Ottiene la posizione del primo bit impostato in _X, a partire dal bit di ordine più basso e lavorando verso l'alto|
|[get_buffer](concurrency-direct3d-namespace-functions-amp.md#get_buffer)|Ottiene l'interfaccia del buffer D3D sottostante a una matrice.|
|[IMAX](concurrency-direct3d-namespace-functions-amp.md#imax)|Confronta due valori, restituendo il valore maggiore.|
|[Imin](concurrency-direct3d-namespace-functions-amp.md#imin)|Confronta due valori, restituendo il valore più piccolo.|
|[is_timeout_disabled](concurrency-direct3d-namespace-functions-amp.md#is_timeout_disabled)|Restituisce un flag booleano che indica se il timeout è disabilitato per il accelerator_view specificato.|
|[pazzo](concurrency-direct3d-namespace-functions-amp.md#mad)|Di overload. Esegue un'operazione di moltiplicazione/aggiunta aritmetica su tre argomenti: _X \* _Y + _Z|
|[make_array](concurrency-direct3d-namespace-functions-amp.md#make_array)|Crea una matrice da un puntatore all'interfaccia del buffer D3D.|
|[rumore](concurrency-direct3d-namespace-functions-amp.md#noise)|Genera un valore casuale usando l'algoritmo di disturbo Perlin|
|[radianti](concurrency-direct3d-namespace-functions-amp.md#radians)|Converte _X da gradi a radianti|
|[RCP](concurrency-direct3d-namespace-functions-amp.md#rcp)|Calcola un reciproco veloce e approssimativo dell'argomento|
|[reversebits](concurrency-direct3d-namespace-functions-amp.md#reversebits)|Inverte l'ordine dei bit in _X|
|[saturare](concurrency-direct3d-namespace-functions-amp.md#saturate)|Clamp _X nell'intervallo compreso tra 0 e 1|
|[sign](concurrency-direct3d-namespace-functions-amp.md#sign)|Di overload. Restituisce il segno dell'argomento.|
|[SmoothStep](concurrency-direct3d-namespace-functions-amp.md#smoothstep)|Restituisce un'interpolazione dell'eremita smussata tra 0 e 1, se _X è compreso nell'intervallo [_Min, _Max].|
|[passo](concurrency-direct3d-namespace-functions-amp.md#step)|Confronta due valori, restituendo 0 o 1 in base al valore maggiore.|
|[Umax](concurrency-direct3d-namespace-functions-amp.md#umax)|Confronta due valori senza segno, restituendo il valore maggiore.|
|[Umin](concurrency-direct3d-namespace-functions-amp.md#umin)|Confronta due valori senza segno, restituendo il valore più piccolo.|

## <a name="requirements"></a>Requisiti

**Intestazione:** amp.h

**Spazio dei nomi:** Concurrency

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)

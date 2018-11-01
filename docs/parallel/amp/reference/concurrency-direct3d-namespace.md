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
ms.openlocfilehash: c99aba319df6f84dbda7b9cf90a1abebdc3757f0
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50570352"
---
# <a name="concurrencydirect3d-namespace"></a>Spazio dei nomi Concurrency::direct3d

Il `direct3d` dello spazio dei nomi fornisce funzioni che supportano l'interoperabilità D3D. Abilita il solo utilizzo delle risorse D3D per il calcolo in codice AMP nonché consentire l'utilizzo delle risorse create in AMP nel codice D3D, senza creare copie intermedie ridondanti. In modo incrementale, è possibile accelerare le sezioni con utilizzo intensivo di calcolo delle applicazioni DirectX utilizzando C++ AMP e usare le API D3D sui dati prodotti dai calcoli AMP.

## <a name="syntax"></a>Sintassi

```
namespace direct3d;
```

## <a name="members"></a>Membri

### <a name="classes"></a>Classi

|Nome|Descrizione|
|----------|-----------------|
|[Classe scoped_d3d_access_lock](scoped-d3d-access-lock-class.md)|Wrapper RAII per un blocco di accesso di D3D su un `accelerator_view` oggetto.|

### <a name="structures"></a>Strutture

|Nome|Descrizione|
|----------|-----------------|
|[Struttura adopt_d3d_access_lock_t](adopt-d3d-access-lock-t-structure.md)|Tipo di tag per indicare il blocco di accesso di D3D dovrebbe essere adottato anziché acquisito.|

### <a name="functions"></a>Funzioni

|Nome|Descrizione|
|----------|-----------------|
|[abs](concurrency-direct3d-namespace-functions-amp.md#abs)|Restituisce il valore assoluto dell'argomento|
|[clamp](concurrency-direct3d-namespace-functions-amp.md#clamp)|Di overload. Fissa x nell'intervallo specificato di Min e max|
|[countbits](concurrency-direct3d-namespace-functions-amp.md#countbits)|Conta il numero di bit impostati in x|
|[create_accelerator_view](concurrency-direct3d-namespace-functions-amp.md#create_accelerator_view)|Crea un' [classe accelerator_view](accelerator-view-class.md) da un puntatore a un'interfaccia del dispositivo Direct3D|
|[d3d_access_lock](concurrency-direct3d-namespace-functions-amp.md#d3d_access_lock)|Acquisisce un blocco in un accelerator_view per eseguire in modo sicuro le operazioni D3D sulle risorse condivise con accelerator_view|
|[d3d_access_try_lock](concurrency-direct3d-namespace-functions-amp.md#d3d_access_try_lock)|Tentativo di acquisire il blocco di accesso di D3D su un accelerator_view senza bloccare.|
|[d3d_access_unlock](concurrency-direct3d-namespace-functions-amp.md#d3d_access_unlock)|Rilasciare il blocco di accesso di D3D sull'oggetto accelerator_view specificato.|
|[firstbithigh](concurrency-direct3d-namespace-functions-amp.md#firstbithigh)|Ottiene la posizione del primo bit impostato in x, a partire dal bit di ordine più elevato e l'utilizzo verso il basso|
|[firstbitlow](concurrency-direct3d-namespace-functions-amp.md#firstbitlow)|Ottiene la posizione del primo bit impostato in x, a partire dal bit di ordine inferiore e andando|
|[get_buffer](concurrency-direct3d-namespace-functions-amp.md#get_buffer)|Ottenere l'interfaccia del buffer D3D sottostante a un array.|
|[imax](concurrency-direct3d-namespace-functions-amp.md#imax)|Confronta due valori, restituendo il valore è maggiore.|
|[imin](concurrency-direct3d-namespace-functions-amp.md#imin)|Confronta due valori, restituendo il valore è inferiore.|
|[is_timeout_disabled](concurrency-direct3d-namespace-functions-amp.md#is_timeout_disabled)|Restituisce un flag booleano che indica se il timeout è disabilitato per l'oggetto accelerator_view specificato.|
|[mad](concurrency-direct3d-namespace-functions-amp.md#mad)|Di overload. Esegue un'operazione aritmetica di moltiplicazione/somma su tre argomenti: x \* y + z|
|[make_array](concurrency-direct3d-namespace-functions-amp.md#make_array)|Creare una matrice da un puntatore di interfaccia del buffer di D3D.|
|[rumore](concurrency-direct3d-namespace-functions-amp.md#noise)|Genera un valore casuale usando l'algoritmo Perlin noise|
|[radianti](concurrency-direct3d-namespace-functions-amp.md#radians)|Converte x da gradi a radianti|
|[rcp](concurrency-direct3d-namespace-functions-amp.md#rcp)|Calcola un reciproco veloce e approssimativo dell'argomento|
|[reversebits](concurrency-direct3d-namespace-functions-amp.md#reversebits)|Inverte l'ordine dei bit in x|
|[saturate](concurrency-direct3d-namespace-functions-amp.md#saturate)|Fissa x all'interno dell'intervallo da 0 a 1|
|[sign](concurrency-direct3d-namespace-functions-amp.md#sign)|Di overload. Restituisce il segno dell'argomento|
|[smoothstep](concurrency-direct3d-namespace-functions-amp.md#smoothstep)|Restituisce un'interpolazione continua di Hermite tra 0 e 1, se x è compreso nell'intervallo [ min, max].|
|[step](concurrency-direct3d-namespace-functions-amp.md#step)|Confronta due valori, restituendo 0 o basato su quale valore è maggiore di 1|
|[umax](concurrency-direct3d-namespace-functions-amp.md#umax)|Confronta due valori senza segno, restituendo il valore è maggiore.|
|[umin](concurrency-direct3d-namespace-functions-amp.md#umin)|Confronta due valori senza segno, restituendo il valore è inferiore.|

## <a name="requirements"></a>Requisiti

**Intestazione:** amp.h

**Spazio dei nomi:** Concurrency

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)

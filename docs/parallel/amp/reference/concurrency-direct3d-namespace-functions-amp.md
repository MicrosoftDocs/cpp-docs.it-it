---
title: Funzioni dello spazio dei nomi Concurrency::direct3d (AMP)
ms.date: 08/31/2018
f1_keywords:
- amp/Concurrency::direct3d::abs
- amp/Concurrency::direct3d::countbits
- amp/Concurrency::direct3d::create_accelerator_view
- amp/Concurrency::direct3d::d3d_access_lock
- amp/Concurrency::direct3d::d3d_access_unlock
- amp/Concurrency::direct3d::firstbithigh
- amp/Concurrency::direct3d::get_buffer
- amp/Concurrency::direct3d::get_device
- amp/Concurrency::direct3d::imax
- amp/Concurrency::direct3d::is_timeout_disabled
- amp/Concurrency::direct3d::mad
- amp/Concurrency::direct3d::noise
- amp/Concurrency::direct3d::radians
- amp/Concurrency::direct3d::reversebits
- amp/Concurrency::direct3d::saturate
- amp/Concurrency::direct3d::smoothstep
- amp/Concurrency::direct3d::step
- amp/Concurrency::direct3d::umin
ms.assetid: 28943b62-52c9-42dc-baf1-ca7b095c1a19
ms.openlocfilehash: e21b1f2869ab81973b341abc5371714fbf8580e2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81375937"
---
# <a name="concurrencydirect3d-namespace-functions-amp"></a>Funzioni dello spazio dei nomi Concurrency::direct3d (AMP)

||||
|-|-|-|
|[Ass](#abs)|[Morsetto](#clamp)|[countbits](#countbits)|
|[create_accelerator_view](#create_accelerator_view)|[d3d_access_lock](#d3d_access_lock)||
|[d3d_access_try_lock](#d3d_access_try_lock)|[d3d_access_unlock](#d3d_access_unlock)|[firstbithigh](#firstbithigh)|
|[firstbitlow](#firstbitlow)|[get_buffer](#get_buffer)|[get_device](#get_device)|
|[Imax](#imax)|[imin](#imin)|[is_timeout_disabled](#is_timeout_disabled)|
|[matto](#mad)|[make_array](#make_array)|[Rumore](#noise)|
|[Radianti](#radians)|[rcp](#rcp)|[reversebits](#reversebits)|
|[Saturare](#saturate)|[Segno](#sign)|[passo liscio](#smoothstep)|
|[step](#step)|[Umax](#umax)|[umin](#umin)|

## <a name="requirements"></a>Requisiti

**Intestazione:** spazio dei nomi amp.h: concorrenzaHeader: amp.h **Namespace:** Concurrency

## <a name="abs"></a><a name="abs"></a>Ass

Restituisce il valore assoluto dell'argomento

```cpp
inline int abs(int _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore Integer

### <a name="return-value"></a>Valore restituito

Restituisce il valore assoluto dell'argomento.

## <a name="clamp"></a><a name="clamp"></a>Morsetto

Calcola il valore del primo argomento specificato bloccato in un intervallo definito dal secondo e dal terzo argomento specificati.

```cpp
inline float clamp(
    float _X,
    float _Min,
    float _Max) restrict(amp);

inline int clamp(
    int _X,
    int _Min,
    int _Max) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Il valore da bloccare

*_Min*<br/>
Limite inferiore dell'intervallo di bloccaggio.

*_Max*<br/>
Limite superiore dell'intervallo di bloccaggio.

### <a name="return-value"></a>Valore restituito

Il valore bloccato `_X`di .

## <a name="countbits"></a><a name="countbits"></a>countbits

Conta il numero di bit impostati in _X

```cpp
inline unsigned int countbits(unsigned int _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore intero senza segno

### <a name="return-value"></a>Valore restituito

Restituisce il numero di bit impostati in _X

## <a name="create_accelerator_view"></a><a name="create_accelerator_view"></a>create_accelerator_view

Crea un [oggetto accelerator_view](accelerator-view-class.md) da un puntatore a un'interfaccia del dispositivo Direct3D.

## <a name="syntax"></a>Sintassi

```cpp
accelerator_view create_accelerator_view(
    IUnknown * _D3D_device
    queuing_mode _Qmode = queuing_mode_automatic);

accelerator_view create_accelerator_view(
    accelerator& _Accelerator,
    bool _Disable_timeout
    queuing_mode _Qmode = queuing_mode_automatic);
```

### <a name="parameters"></a>Parametri

*_Accelerator*<br/>
Acceleratore su cui deve essere creato il nuovo accelerator_view.

*_D3D_device*<br/>
Puntatore all'interfaccia del dispositivo Direct3D.

*_Disable_timeout*<br/>
Parametro booleano che specifica se il timeout deve essere disabilitato per il accelerator_view appena creato. Corrisponde al flag di D3D11_CREATE_DEVICE_DISABLE_GPU_TIMEOUT per la creazione di dispositivi Direct3D e viene usato per indicare se il sistema operativo deve consentire l'esecuzione di carichi di lavoro che richiedono più di 2 secondi senza reimpostare il dispositivo in base al meccanismo di rilevamento e ripristino del timeout di Windows. L'utilizzo di questo flag è consigliato se è necessario eseguire attività che richiedono molto tempo nel accelerator_view.

*_Qmode*<br/>
Il [queuing_mode](concurrency-namespace-enums-amp.md#queuing_mode) da utilizzare per la accelerator_view appena creata. Il valore predefinito di `queuing_mode_automatic`questo parametro è .

## <a name="return-value"></a>Valore restituito

Oggetto `accelerator_view` creato dall'interfaccia del dispositivo Direct3D passato.

## <a name="remarks"></a>Osservazioni

Questa funzione crea `accelerator_view` un nuovo oggetto da un puntatore esistente a un'interfaccia del dispositivo Direct3D.This function creates a new object from an existing pointer to a Direct3D device interface. Se la chiamata di funzione ha esito positivo, il `AddRef` conteggio dei riferimenti del parametro viene incrementato tramite una chiamata all'interfaccia. È possibile rilasciare in modo sicuro l'oggetto quando non è più necessario nel codice DirectX.You can safely release the object when it is no longer required in your DirectX code. Se la chiamata al metodo ha esito negativo, viene generata [un'runtime_exception.](runtime-exception-class.md)

L'oggetto `accelerator_view` creato utilizzando questa funzione è thread-safe. È necessario sincronizzare l'utilizzo simultaneo dell'oggetto. `accelerator_view` L'utilizzo simultaneo non `accelerator_view` sincronizzato dell'oggetto e dell'interfaccia ID3D11Device non elaborata causa un comportamento indefinito.

Se si utilizza il `D3D11_CREATE_DEVICE_DEBUG` flag, il runtime AMP di Cè fornisce informazioni dettagliate sull'errore in modalità di debug utilizzando il livello di debug D3D.

## <a name="d3d_access_lock"></a><a name="d3d_access_lock"></a>d3d_access_lock

Acquisire un blocco su un accelerator_view allo scopo di eseguire in modo sicuro le operazioni D3D sulle risorse condivise con il accelerator_view. L'accelerator_view e tutte le risorse AMP di C, associate a questo accelerator_view, accettano internamente questo blocco durante l'esecuzione delle operazioni e si bloccheranno mentre un altro thread mantiene il blocco di accesso D3D. Questo blocco non è ricorsivo: è un comportamento indefinito chiamare questa funzione da un thread che contiene già il blocco. È un comportamento indefinito eseguire operazioni sul accelerator_view o qualsiasi contenitore di dati associato al accelerator_view dal thread che contiene il blocco di accesso D3D. Vedere anche scoped_d3d_access_lock, una classe di tipo RAII per un blocco di accesso D3D basato sull'ambito.

```cpp
void __cdecl d3d_access_lock(accelerator_view& _Av);
```

### <a name="parameters"></a>Parametri

*_Av*<br/>
Il accelerator_view da bloccare.

## <a name="d3d_access_try_lock"></a><a name="d3d_access_try_lock"></a>d3d_access_try_lock

Tentare di acquisire il blocco di accesso D3D su un accelerator_view senza bloccare.

```cpp
bool __cdecl d3d_access_try_lock(accelerator_view& _Av);
```

### <a name="parameters"></a>Parametri

*_Av*<br/>
Il accelerator_view da bloccare.

### <a name="return-value"></a>Valore restituito

true se il blocco è stato acquisito o false se è attualmente mantenuto da un altro thread.

## <a name="d3d_access_unlock"></a><a name="d3d_access_unlock"></a>d3d_access_unlock

Rilasciare il blocco di accesso D3D sul accelerator_view specificato. Se il thread chiamante non blocca il blocco sul accelerator_view i risultati non sono definiti.

```cpp
void __cdecl d3d_access_unlock(accelerator_view& _Av);
```

### <a name="parameters"></a>Parametri

*_Av*<br/>
Il accelerator_view per il quale il blocco deve essere rilasciato.

## <a name="firstbithigh"></a><a name="firstbithigh"></a>firstbithigh

Ottiene la posizione del primo bit impostato in _X, a partire dal bit più alto e spostandosi verso il bit di ordine più basso.

```cpp
inline int firstbithigh(int _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore Integer

### <a name="return-value"></a>Valore restituito

La posizione del primo bit impostato

## <a name="firstbitlow"></a><a name="firstbitlow"></a>firstbitlow

Ottiene la posizione del primo bit impostato in _X, a partire dal bit di ordine più basso e lavorando verso il bit di ordine più alto.

```cpp
inline int firstbitlow(int _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore Integer

### <a name="return-value"></a>Valore restituito

Restituisce la posizione del primo bit impostato

## <a name="get_buffer"></a><a name="get_buffer"></a>get_buffer

Ottenere l'interfaccia del buffer Direct3D sottostante la matrice specificata.

```cpp
template<
    typename value_type,
    int _Rank
>
IUnknown *get_buffer(
    const array<value_type, _Rank>& _Array)  ;
```

### <a name="parameters"></a>Parametri

*Value_type*<br/>
Tipo di elementi nella matrice.

*_Rank*<br/>
Specifica il numero di dimensioni della matrice.

*_Array*<br/>
Matrice in un accelerator_view Direct3D per il quale viene restituita l'interfaccia del buffer Direct3D sottostante.

### <a name="return-value"></a>Valore restituito

Il puntatore a interfaccia IUnknown corrispondente al buffer Direct3D sottostante la matrice.

## <a name="a-nameget_device-get_device"></a><a name="get_device">get_device

Ottenere l'interfaccia del dispositivo D3D sottostante un accelerator_view.

```cpp
IUnknown* get_device(const accelerator_view Av);
```

### <a name="parameters"></a>Parametri

*Av*<br/>
Il accelerator_view D3D per il quale viene restituita l'interfaccia del dispositivo D3D sottostante.

### <a name="return-value"></a>Valore restituito

Puntatore `IUnknown` a interfaccia del dispositivo D3D sottostante il accelerator_view.

## <a name="imax"></a><a name="imax"></a>Imax

Determinare il valore numerico massimo degli argomenti

```cpp
inline int imax(
    int _X,
    int _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore Integer

*_Y*<br/>
Valore Integer

### <a name="return-value"></a>Valore restituito

Restituisce il valore numerico massimo degli argomenti

## <a name="imin"></a><a name="imin"></a>imin

Determinare il valore numerico minimo degli argomenti

```cpp
inline int imin(
    int _X,
    int _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore Integer

*_Y*<br/>
Valore Integer

### <a name="return-value"></a>Valore restituito

Restituisce il valore numerico minimo degli argomenti

## <a name="is_timeout_disabled"></a><a name="is_timeout_disabled"></a>is_timeout_disabled

Restituisce un flag booleano che indica se il timeout è disabilitato per il accelerator_view specificato. Corrisponde al flag D3D11_CREATE_DEVICE_DISABLE_GPU_TIMEOUT per la creazione di dispositivi Direct3D.This corresponds to the D3D11_CREATE_DEVICE_DISABLE_GPU_TIMEOUT flag for Direct3D device creation.

```cpp
bool __cdecl is_timeout_disabled(const accelerator_view& _Accelerator_view);
```

### <a name="parameters"></a>Parametri

*_Accelerator_view*<br/>
Il accelerator_view per il quale deve essere eseguita una query sull'impostazione di timeout disabilitata.

### <a name="return-value"></a>Valore restituito

Flag booleano che indica se il timeout è disabilitato per il accelerator_view specificato.

## <a name="mad"></a><a name="mad"></a>matto

Calcola il prodotto del primo e del secondo argomento specificato, quindi aggiunge il terzo argomento specificato.

```cpp
inline float mad(
    float _X,
    float _Y,
    float _Z) restrict(amp);

inline double mad(
    double _X,
    double _Y,
    double _Z) restrict(amp);

inline int mad(
    int _X,
    int _Y,
    int _Z) restrict(amp);

inline unsigned int mad(
    unsigned int _X,
    unsigned int _Y,
    unsigned int _Z) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Primo argomento specificato.

*_Y*<br/>
Secondo argomento specificato.

*_Z*<br/>
Terzo argomento specificato.

### <a name="return-value"></a>Valore restituito

Il risultato di `_X` \* `_Y`  +  `_Z`.

## <a name="make_array"></a><a name="make_array"></a>make_array

Creare una matrice da un puntatore a interfaccia del buffer Direct3D.Create an array from a Direct3D buffer interface pointer.

```cpp
template<
    typename value_type,
    int _Rank
>
array<value_type, _Rank> make_array(
    const extent<_Rank>& _Extent,
    const Concurrency::accelerator_view& _Rv,
    IUnknown* _D3D_buffer)  ;
```

### <a name="parameters"></a>Parametri

*Value_type*<br/>
Tipo di elemento della matrice da creare.

*_Rank*<br/>
Classificazione della matrice da creare.

*_Extent*<br/>
Estensione che descrive la forma dell'aggregazione di matrici.

*_Rv*<br/>
Una vista dell'acceleratore D3D in cui deve essere creata la matrice.

*_D3D_buffer*<br/>
Puntatore a interfaccia IUnknown del buffer D3D da cui creare la matrice.

### <a name="return-value"></a>Valore restituito

Matrice creata utilizzando il buffer Direct3D fornito.

## <a name="noise"></a><a name="noise"></a>Rumore

Genera un valore casuale utilizzando l'algoritmo di disturbo Perlin

```cpp
inline float noise(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile da cui generare il rumore Perlin

### <a name="return-value"></a>Valore restituito

Restituisce il valore del rumore Dilin compreso tra -1 e 1

## <a name="radians"></a><a name="radians"></a>Radianti

Converte _X da gradi a radianti

```cpp
inline float radians(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce _X convertiti da gradi in radianti

## <a name="rcp"></a><a name="rcp"></a>Rcp

Calcola il reciproco dell'argomento specificato utilizzando un'approssimazione rapida.

```cpp
inline float rcp(float _X) restrict(amp);

inline double rcp(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore per il quale calcolare il reciproco.

### <a name="return-value"></a>Valore restituito

Il reciproco dell'argomento specificato.

## <a name="reversebits"></a><a name="reversebits"></a>reversebits

Inverte l'ordine dei bit nel _X

```cpp
inline unsigned int reversebits(unsigned int _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore intero senza segno

### <a name="return-value"></a>Valore restituito

Restituisce il valore con l'ordine dei bit invertito nel _X

## <a name="saturate"></a><a name="saturate"></a>Saturare

Clamps _X compresi nell'intervallo da 0 a 1

```cpp
inline float saturate(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce _X bloccato nell'intervallo da 0 a 1

## <a name="sign"></a><a name="sign"></a>Segno

Determina il segno dell'argomento specificato.

```cpp
inline int sign(int _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore Integer

### <a name="return-value"></a>Valore restituito

Segno dell'argomento.

## <a name="smoothstep"></a><a name="smoothstep"></a>passo liscio

Restituisce un'interpolazione Hermite uniforme compresa tra 0 e 1, se _X è compreso nell'intervallo [_Min, _Max].

```cpp
inline float smoothstep(
    float _Min,
    float _Max,
    float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Min*<br/>
Valore a virgola mobile

*_Max*<br/>
Valore a virgola mobile

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce 0 se _X è minore di _Min; 1 se _X è maggiore di _Max; in caso contrario, un valore compreso tra 0 e 1 se _X è compreso nell'intervallo [_Min, _Max]

## <a name="step"></a><a name="step"></a>Passo

Confronta due valori, restituendo 0 o 1 in base al valore maggiore

```cpp
inline float step(
    float _Y,
    float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_Y*<br/>
Valore a virgola mobile

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce 1 se il _X è maggiore o uguale a _Y; in caso contrario, 0

## <a name="umax"></a><a name="umax"></a>Umax

Determinare il valore numerico massimo degli argomenti

```cpp
inline unsigned int umax(
    unsigned int _X,
    unsigned int _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore Integer

*_Y*<br/>
Valore Integer

### <a name="return-value"></a>Valore restituito

Restituisce il valore numerico massimo degli argomenti

## <a name="umin"></a><a name="umin"></a>umin

Determinare il valore numerico minimo degli argomenti

```cpp
inline unsigned int umin(
    unsigned int _X,
    unsigned int _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore Integer

*_Y*<br/>
Valore Integer

### <a name="return-value"></a>Valore restituito

Restituisce il valore numerico minimo degli argomenti

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency::direct3d](concurrency-direct3d-namespace.md)

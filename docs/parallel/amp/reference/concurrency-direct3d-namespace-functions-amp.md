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
ms.openlocfilehash: 438d211ac2f15bf781b704a7d0d7484d1542f131
ms.sourcegitcommit: 7ecd91d8ce18088a956917cdaf3a3565bd128510
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/16/2020
ms.locfileid: "79419308"
---
# <a name="concurrencydirect3d-namespace-functions-amp"></a>Funzioni dello spazio dei nomi Concurrency::direct3d (AMP)

||||
|-|-|-|
|[abs](#abs)|[morsetto](#clamp)|[countbits](#countbits)|
|[create_accelerator_view](#create_accelerator_view)|[d3d_access_lock](#d3d_access_lock)||
|[d3d_access_try_lock](#d3d_access_try_lock)|[d3d_access_unlock](#d3d_access_unlock)|[firstbithigh](#firstbithigh)|
|[firstbitlow](#firstbitlow)|[get_buffer](#get_buffer)|[get_device](#get_device)|
|[IMAX](#imax)|[Imin](#imin)|[is_timeout_disabled](#is_timeout_disabled)|
|[pazzo](#mad)|[make_array](#make_array)|[rumore](#noise)|
|[radianti](#radians)|[RCP](#rcp)|[reversebits](#reversebits)|
|[saturare](#saturate)|[sign](#sign)|[SmoothStep](#smoothstep)|
|[passo](#step)|[Umax](#umax)|[Umin](#umin)|

## <a name="requirements"></a>Requisiti

**Intestazione:** **spazio dei nomi** amp. h: concorrenza

## <a name="abs"></a>  abs

Restituisce il valore assoluto dell'argomento.

```cpp
inline int abs(int _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore intero

### <a name="return-value"></a>Valore restituito

Restituisce il valore assoluto dell'argomento.

## <a name="clamp"></a>morsetto

Calcola il valore del primo argomento specificato impostato su un intervallo definito dal secondo e dal terzo argomento specificato.

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
Valore da bloccare

*_Min*<br/>
Limite inferiore dell'intervallo di bloccaggio.

*_Max*<br/>
Limite superiore dell'intervallo di bloccaggio.

### <a name="return-value"></a>Valore restituito

Valore premuto di `_X`.

## <a name="countbits"></a>countbits

Conta il numero di bit impostati in _X

```cpp
inline unsigned int countbits(unsigned int _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore intero senza segno

### <a name="return-value"></a>Valore restituito

Restituisce il numero di bit impostati in _X

## <a name="create_accelerator_view"></a>create_accelerator_view

Crea un oggetto [accelerator_view](accelerator-view-class.md) da un puntatore a un'interfaccia del dispositivo Direct3D.

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
Acceleratore in cui deve essere creata la nuova accelerator_view.

*_D3D_device*<br/>
Puntatore all'interfaccia del dispositivo Direct3D.

*_Disable_timeout*<br/>
Parametro booleano che specifica se il timeout deve essere disabilitato per il accelerator_view appena creato. Corrisponde al flag di D3D11_CREATE_DEVICE_DISABLE_GPU_TIMEOUT per la creazione del dispositivo Direct3D e viene usato per indicare se il sistema operativo deve consentire l'esecuzione di carichi di lavoro che impiegano più di 2 secondi senza reimpostare il dispositivo in base al timeout di Windows meccanismo di rilevamento e ripristino. L'uso di questo flag è consigliato se è necessario eseguire attività che richiedono molto tempo sul accelerator_view.

*_Qmode*<br/>
[Queuing_mode](concurrency-namespace-enums-amp.md#queuing_mode) da utilizzare per il accelerator_view appena creato. Il valore predefinito di questo parametro è `queuing_mode_automatic`.

## <a name="return-value"></a>Valore restituito

Oggetto `accelerator_view` creato dall'interfaccia del dispositivo Direct3D passata.

## <a name="remarks"></a>Osservazioni

Questa funzione crea un nuovo oggetto `accelerator_view` da un puntatore esistente a un'interfaccia del dispositivo Direct3D. Se la chiamata di funzione ha esito positivo, il conteggio dei riferimenti del parametro viene incrementato per mezzo di una chiamata `AddRef` all'interfaccia. È possibile rilasciare in modo sicuro l'oggetto quando non è più necessario nel codice DirectX. Se la chiamata al metodo ha esito negativo, viene generata un' [runtime_exception](runtime-exception-class.md) .

L'oggetto `accelerator_view` creato mediante questa funzione è thread-safe. È necessario sincronizzare l'uso simultaneo dell'oggetto `accelerator_view`. L'utilizzo simultaneo non sincronizzato dell'oggetto `accelerator_view` e l'interfaccia ID3D11Device non elaborata causa un comportamento non definito.

Il C++ runtime di amp fornisce informazioni dettagliate sugli errori in modalità di debug usando il livello di debug D3D se si usa il flag `D3D11_CREATE_DEVICE_DEBUG`.

## <a name="d3d_access_lock"></a>d3d_access_lock

Acquisire un blocco su un accelerator_view allo scopo di eseguire in modo sicuro le operazioni D3D sulle risorse condivise con l'accelerator_view. Il accelerator_view e tutte C++ le risorse amp associate a questo accelerator_view accettano internamente questo blocco durante l'esecuzione di operazioni e si bloccherà mentre un altro thread include il blocco di accesso D3D. Questo blocco non è ricorsivo: si tratta di un comportamento non definito per chiamare questa funzione da un thread che già include il blocco. Si tratta di un comportamento non definito per l'esecuzione di operazioni sul accelerator_view o su qualsiasi contenitore di dati associato al accelerator_view dal thread che include il blocco di accesso D3D. Vedere anche scoped_d3d_access_lock, una classe in stile RAII per un blocco di accesso D3D basato su ambito.

```cpp
void __cdecl d3d_access_lock(accelerator_view& _Av);
```

### <a name="parameters"></a>Parametri

*_Av*<br/>
Accelerator_view da bloccare.

## <a name="d3d_access_try_lock"></a>d3d_access_try_lock

Tentativo di acquisire il blocco di accesso D3D su un accelerator_view senza blocco.

```cpp
bool __cdecl d3d_access_try_lock(accelerator_view& _Av);
```

### <a name="parameters"></a>Parametri

*_Av*<br/>
Accelerator_view da bloccare.

### <a name="return-value"></a>Valore restituito

true se il blocco è stato acquisito oppure false se è attualmente utilizzato da un altro thread.

## <a name="d3d_access_unlock"></a>d3d_access_unlock

Rilascia il blocco di accesso D3D sul accelerator_view specificato. Se il thread chiamante non tiene il blocco sul accelerator_view i risultati non sono definiti.

```cpp
void __cdecl d3d_access_unlock(accelerator_view& _Av);
```

### <a name="parameters"></a>Parametri

*_Av*<br/>
Accelerator_view per cui deve essere rilasciato il blocco.

## <a name="firstbithigh"></a>firstbithigh

Ottiene la posizione del primo bit impostato in _X, iniziando dal bit di ordine più elevato e procedendo verso il bit di ordine più basso.

```cpp
inline int firstbithigh(int _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore intero

### <a name="return-value"></a>Valore restituito

Posizione del primo bit impostato

## <a name="firstbitlow"></a>firstbitlow

Ottiene la posizione del primo bit impostato in _X, iniziando dal bit di ordine più basso e lavorando verso il bit più ordinato.

```cpp
inline int firstbitlow(int _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore intero

### <a name="return-value"></a>Valore restituito

Restituisce la posizione del primo bit impostato

## <a name="get_buffer"></a>get_buffer

Ottiene l'interfaccia del buffer Direct3D sottostante alla matrice specificata.

```cpp
template<
    typename value_type,
    int _Rank
>
IUnknown *get_buffer(
    const array<value_type, _Rank>& _Array)  ;
```

### <a name="parameters"></a>Parametri

*value_type*<br/>
Tipo di elementi nella matrice.

*_Rank*<br/>
Specifica il numero di dimensioni della matrice.

*_Array*<br/>
Matrice in un accelerator_view Direct3D per cui viene restituita l'interfaccia del buffer Direct3D sottostante.

### <a name="return-value"></a>Valore restituito

Puntatore all'interfaccia IUnknown corrispondente al buffer Direct3D sottostante alla matrice.

## <a name="a-nameget_device-get_device"></a><a name="get_device"> get_device

Ottenere l'interfaccia del dispositivo D3D sottostante un accelerator_view.

```cpp
IUnknown* get_device(const accelerator_view Av);
```

### <a name="parameters"></a>Parametri

*AV*<br/>
Accelerator_view D3D per cui viene restituita l'interfaccia del dispositivo D3D sottostante.

### <a name="return-value"></a>Valore restituito

Puntatore a interfaccia `IUnknown` del dispositivo D3D sottostante l'accelerator_view.

## <a name="imax"></a>IMAX

Determinare il valore numerico massimo degli argomenti

```cpp
inline int imax(
    int _X,
    int _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore intero

*_Y*<br/>
Valore intero

### <a name="return-value"></a>Valore restituito

Restituisce il valore numerico massimo degli argomenti

## <a name="imin"></a>Imin

Determinare il valore numerico minimo degli argomenti

```cpp
inline int imin(
    int _X,
    int _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore intero

*_Y*<br/>
Valore intero

### <a name="return-value"></a>Valore restituito

Restituisce il valore numerico minimo degli argomenti

## <a name="is_timeout_disabled"></a>is_timeout_disabled

Restituisce un flag booleano che indica se il timeout è disabilitato per il accelerator_view specificato. Corrisponde al flag di D3D11_CREATE_DEVICE_DISABLE_GPU_TIMEOUT per la creazione del dispositivo Direct3D.

```cpp
bool __cdecl is_timeout_disabled(const accelerator_view& _Accelerator_view);
```

### <a name="parameters"></a>Parametri

*_Accelerator_view*<br/>
Accelerator_view per cui viene eseguita una query sull'impostazione di timeout disabilitata.

### <a name="return-value"></a>Valore restituito

Flag booleano che indica se il timeout è disabilitato per la accelerator_view specificata.

## <a name="mad"></a>pazzo

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

Risultato di `_X` \* `_Y` + `_Z`.

## <a name="make_array"></a>make_array

Creare una matrice da un puntatore all'interfaccia del buffer Direct3D.

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

*value_type*<br/>
Tipo di elemento della matrice da creare.

*_Rank*<br/>
Rango della matrice da creare.

*_Extent*<br/>
Extent che descrive la forma dell'aggregazione di matrici.

*_Rv*<br/>
Visualizzazione acceleratore D3D in cui deve essere creata la matrice.

*_D3D_buffer*<br/>
Puntatore all'interfaccia IUnknown del buffer D3D dal quale creare la matrice.

### <a name="return-value"></a>Valore restituito

Matrice creata utilizzando il buffer Direct3D fornito.

## <a name="noise"></a>rumore

Genera un valore casuale usando l'algoritmo di disturbo Perlin

```cpp
inline float noise(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile da cui generare il rumore Perlin

### <a name="return-value"></a>Valore restituito

Restituisce il valore del rumore Perlin compreso in un intervallo compreso tra-1 e 1

## <a name="radians"></a>radianti

Converte _X da gradi a radianti

```cpp
inline float radians(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce _X convertiti da gradi a radianti

## <a name="rcp"></a>RCP

Calcola il reciproco dell'argomento specificato utilizzando un'approssimazione rapida.

```cpp
inline float rcp(float _X) restrict(amp);

inline double rcp(double _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore per il quale calcolare il reciproco.

### <a name="return-value"></a>Valore restituito

Reciproco dell'argomento specificato.

## <a name="reversebits"></a>reversebits

Inverte l'ordine dei bit in _X

```cpp
inline unsigned int reversebits(unsigned int _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore intero senza segno

### <a name="return-value"></a>Valore restituito

Restituisce il valore con l'ordine dei bit invertito in _X

## <a name="saturate"></a>saturare

Clamp _X nell'intervallo compreso tra 0 e 1

```cpp
inline float saturate(float _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore a virgola mobile

### <a name="return-value"></a>Valore restituito

Restituisce _X fissato nell'intervallo compreso tra 0 e 1.

## <a name="sign"></a>Sign

Determina il segno dell'argomento specificato.

```cpp
inline int sign(int _X) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore intero

### <a name="return-value"></a>Valore restituito

Segno dell'argomento.

## <a name="smoothstep"></a>SmoothStep

Restituisce un'interpolazione dell'eremita smussata tra 0 e 1, se _X è compreso nell'intervallo [_Min, _Max].

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

## <a name="step"></a>passo

Confronta due valori, restituendo 0 o 1 in base al valore maggiore.

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

Restituisce 1 se la _X è maggiore o uguale _Y; in caso contrario, 0

## <a name="umax"></a>Umax

Determinare il valore numerico massimo degli argomenti

```cpp
inline unsigned int umax(
    unsigned int _X,
    unsigned int _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore intero

*_Y*<br/>
Valore intero

### <a name="return-value"></a>Valore restituito

Restituisce il valore numerico massimo degli argomenti

## <a name="umin"></a>Umin

Determinare il valore numerico minimo degli argomenti

```cpp
inline unsigned int umin(
    unsigned int _X,
    unsigned int _Y) restrict(amp);
```

### <a name="parameters"></a>Parametri

*_X*<br/>
Valore intero

*_Y*<br/>
Valore intero

### <a name="return-value"></a>Valore restituito

Restituisce il valore numerico minimo degli argomenti

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency::direct3d](concurrency-direct3d-namespace.md)

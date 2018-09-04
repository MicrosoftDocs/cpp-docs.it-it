---
title: Funzioni dello spazio dei nomi Concurrency::Direct3D (AMP) | Microsoft Docs
ms.custom: ''
ms.date: 08/31/2018
ms.topic: reference
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
dev_langs:
- C++
ms.assetid: 28943b62-52c9-42dc-baf1-ca7b095c1a19
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a1a4bcc194f2d762e48144be2c2bdb84376ed31b
ms.sourcegitcommit: a7046aac86f1c83faba1088c80698474e25fe7c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/04/2018
ms.locfileid: "43682168"
---
# <a name="concurrencydirect3d-namespace-functions-amp"></a>Funzioni dello spazio dei nomi Concurrency::Direct3D (AMP)
||||  
|-|-|-|  
|[abs](#abs)|[clamp](#clamp)|[countbits](#countbits)|
|[create_accelerator_view](#create_accelerator_view)|[d3d_access_lock](#d3d_access_lock)||
|[d3d_access_try_lock](#d3d_access_try_lock)|[d3d_access_unlock](#d3d_access_unlock)|[firstbithigh](#firstbithigh)|  
|[firstbitlow](#firstbitlow)|[get_buffer](#get_buffer)|[get_device](#get_device)|  
|[imax](#imax)|[imin](#imin)|[is_timeout_disabled](#is_timeout_disabled)|  
|[mad](#mad)|[make_array](#make_array)|[rumore](#noise)|  
|[radianti](#radians)|[rcp](#rcp)|[reversebits](#reversebits)|  
|[saturate](#saturate)|[sign](#sign)|[smoothstep](#smoothstep)|  
|[step](#step)|[umax](#umax)|[umin](#umin)|  

## <a name="requirements"></a>Requisiti
**Intestazione:** amp. h **Namespace:** concorrenza
  
##  <a name="abs"></a>  abs  
 Restituisce il valore assoluto dell'argomento  
  
```  
inline int abs(int _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore Integer  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore assoluto dell'argomento.  
  
##  <a name="clamp"></a>  clamp  
 Calcola il valore del primo argomento specificato impostato a un intervallo definito per il secondo e terzo argomento specificato.  
  
```  
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
 `_X`  
 Il valore da fissare  
  
 `_Min`  
 Il limite inferiore dell'intervallo di clamping.  
  
 `_Max`  
 Il limite superiore dell'intervallo di clamping.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore del `_X`.  
  
##  <a name="countbits"></a>  countbits  
 Conta il numero di bit impostati in x  
  
```  
inline unsigned int countbits(unsigned int _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore intero senza segno  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di bit impostati in x  

## <a name="create_accelerator_view"></a> create_accelerator_view  
Crea un' [accelerator_view](accelerator-view-class.md) oggetto da un puntatore a un'interfaccia del dispositivo Direct3D.  
  
## <a name="syntax"></a>Sintassi  
  
```  
accelerator_view create_accelerator_view(  
    IUnknown * _D3D_device  
    queuing_mode _Qmode = queuing_mode_automatic);  
  
accelerator_view create_accelerator_view(  
    accelerator& _Accelerator,  
    bool _Disable_timeout  
    queuing_mode _Qmode = queuing_mode_automatic);  
```  
  
#### <a name="parameters"></a>Parametri  
 `_Accelerator`  
 Tasto di scelta rapida in cui è necessario creare l'oggetto accelerator_view di nuovo.  
  
 `_D3D_device`  
 Puntatore all'interfaccia del dispositivo Direct3D.  
  
 `_Disable_timeout`  
 Un parametro booleano che specifica se il timeout deve essere disabilitato per l'accelerator_view appena creato. Questo corrisponde al flag D3D11_CREATE_DEVICE_DISABLE_GPU_TIMEOUT per la creazione di un dispositivo Direct3D e viene utilizzato per indicare se il sistema operativo deve consentire carichi di lavoro che richiedono più di 2 secondi per l'esecuzione senza reimpostare il dispositivo per il timeout di Windows meccanismo di rilevamento e ripristino. È consigliabile usare questo flag se è necessario eseguire attività lunghe su accelerator_view.  
  
 `_Qmode`  
 Il [queuing_mode](concurrency-namespace-enums-amp.md#queuing_mode) da utilizzare per l'accelerator_view appena creato. Questo parametro ha un valore predefinito di `queuing_mode_automatic`.  
  
## <a name="return-value"></a>Valore restituito  
 Il `accelerator_view` oggetto creato dall'interfaccia del dispositivo Direct3D passata.  
  
## <a name="remarks"></a>Note  
 Questa funzione crea un nuovo `accelerator_view` oggetto da un puntatore esistente a un'interfaccia del dispositivo Direct3D. Se la chiamata di funzione ha esito positivo, il conteggio dei riferimenti del parametro viene incrementato per mezzo di un `AddRef` chiamata all'interfaccia. È possibile rilasciare l'oggetto in modo sicuro quando non è più necessario nel codice di DirectX. Se la chiamata al metodo ha esito negativo, un [runtime_exception](runtime-exception-class.md) viene generata un'eccezione.  
  
 Il `accelerator_view` oggetto creato utilizzando questa funzione è thread-safe. È necessario sincronizzare usare contemporaneamente la `accelerator_view` oggetto. Utilizzo simultaneo di non sincronizzato il `accelerator_view` oggetto e l'interfaccia raw di ID3D11Device genera un comportamento indefinito.  
  
 Il runtime di AMP C++ offre informazioni dettagliate sull'errore in modalità di debug usando il livello di eseguire il Debug di D3D se si usa il `D3D11_CREATE_DEVICE_DEBUG` flag.  
  
  
##  <a name="d3d_access_lock"></a>  d3d_access_lock  
 Acquisire un blocco in un accelerator_view per eseguire in modo sicuro le operazioni D3D sulle risorse condivise con accelerator_view. L'oggetto accelerator_view e tutte le risorse di AMP C++ associate ad accelerator_view internamente accettano questo blocco quando si eseguono operazioni e si bloccheranno mentre un altro thread utilizza il blocco di accesso di D3D. Questo blocco non è ricorrente: si tratta di un comportamento definito chiamare questa funzione da un thread che contiene già il blocco. È un comportamento definito eseguire operazioni su accelerator_view o su qualsiasi contenitore di dati associato ad accelerator_view dal thread che contiene il blocco di accesso di D3D. Vedere anche scoped_d3d_access_lock, una classe stile RAII per un blocco di accesso di D3D basata sull'ambito.  
  
```  
void __cdecl d3d_access_lock(accelerator_view& _Av);
```  
  
### <a name="parameters"></a>Parametri  
 `_Av`  
 L'oggetto accelerator_view da bloccare.  
  
##  <a name="d3d_access_try_lock"></a>  d3d_access_try_lock  
 Tentativo di acquisire il blocco di accesso di D3D su un accelerator_view senza bloccare.  
  
```  
bool __cdecl d3d_access_try_lock(accelerator_view& _Av);
```  
  
### <a name="parameters"></a>Parametri  
 `_Av`  
 L'oggetto accelerator_view da bloccare.  
  
### <a name="return-value"></a>Valore restituito  
 true se il blocco è stato acquisito, o false se è stato mantenuto attivo da un altro thread.  
  
##  <a name="d3d_access_unlock"></a>  d3d_access_unlock  
 Rilasciare il blocco di accesso di D3D sull'oggetto accelerator_view specificato. Se il thread chiamante non è il blocco su accelerator_view i risultati sono indefiniti.  
  
```  
void __cdecl d3d_access_unlock(accelerator_view& _Av);
```  
  
### <a name="parameters"></a>Parametri  
 `_Av`  
 L'oggetto accelerator_view per il quale il blocco è deve essere rilasciato.  
  
##  <a name="firstbithigh"></a>  firstbithigh  
 Ottiene la posizione del primo bit impostato in x, che inizia con il bit più significativo e spostandosi verso il bit meno significativo.  
  
```  
inline int firstbithigh(int _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore Integer  
  
### <a name="return-value"></a>Valore restituito  
 La posizione del primo bit impostato  
  
##  <a name="firstbitlow"></a>  firstbitlow  
 Ottiene la posizione del primo bit impostato in x, che inizia con il bit di ordine più basso e verso il bit più significativo.  
  
```  
inline int firstbitlow(int _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore Integer  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la posizione del primo bit impostato  
  
##  <a name="get_buffer"></a>  get_buffer  
 Ottenere l'interfaccia del buffer Direct3D sottostante alla matrice specificata.  
  
```  
template<
    typename value_type,  
    int _Rank  
>  
IUnknown *get_buffer(
    const array<value_type, _Rank>& _Array)  ;  
```  
  
### <a name="parameters"></a>Parametri  
 `value_type`  
 Tipo di elementi nella matrice.  
  
 `_Rank`  
 Il rango della matrice.  
  
 `_Array`  
 Matrice in un accelerator_view Direct3D per il quale viene restituito l'interfaccia del buffer Direct3D sottostante.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a interfaccia IUnknown corrispondente al buffer Direct3D sottostante alla matrice.  

## <a name="a-namegetdevice-getdevice"></a><a name="get_device"> get_device
Ottenere l'interfaccia del dispositivo D3D sottostante un accelerator_view.

```
IUnknown* get_device(const accelerator_view Av);
```

### <a name="parameters"></a>Parametri
`Av` L'oggetto accelerator_view D3D per il quale viene restituito l'interfaccia del dispositivo D3D sottostante.


### <a name="return-value"></a>Valore restituito
Il `IUnknown` puntatore all'interfaccia del dispositivo D3D sottostante l'oggetto accelerator_view.

##  <a name="imax"></a>  imax  
 Determinare il valore numerico massimo degli argomenti  

```  
inline int imax(
    int _X,  
    int _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore Integer  
  
 `_Y`  
 Valore Integer  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore numerico massimo degli argomenti  
  
##  <a name="imin"></a>  imin  
 Determinare il valore numerico minimo degli argomenti  
  
```  
inline int imin(
    int _X,  
    int _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore Integer  
  
 `_Y`  
 Valore Integer  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore numerico minimo degli argomenti  
  
##  <a name="is_timeout_disabled"></a>  is_timeout_disabled  
 Restituisce un flag booleano che indica se il timeout è disabilitato per l'oggetto accelerator_view specificato. Corrisponde al flag D3D11_CREATE_DEVICE_DISABLE_GPU_TIMEOUT per la creazione di un dispositivo Direct3D.  
  
```  
bool __cdecl is_timeout_disabled(const accelerator_view& _Accelerator_view);
```  
  
### <a name="parameters"></a>Parametri  
 `_Accelerator_view`  
 Accelerator_view per il quale il timeout disabilitato l'impostazione deve essere sottoposto a query.  
  
### <a name="return-value"></a>Valore restituito  
 Flag booleano che indica se il timeout è disabilitato per l'oggetto accelerator_view specificato.  
  
##  <a name="mad"></a>  mad  
 Calcola il prodotto del primo e il secondo argomento specificato, quindi aggiunge il terzo argomento specificato.  
  
```  
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
 `_X`  
 Il primo argomento specificato.  
  
 `_Y`  
 Il secondo argomento specificato.  
  
 `_Z`  
 Il terzo argomento specificato.  
  
### <a name="return-value"></a>Valore restituito  
 Il risultato del `_X` \* `_Y`  +  `_Z`.  
  
##  <a name="make_array"></a>  make_array  
 Creare una matrice da un puntatore all'interfaccia del buffer Direct3D.  
  
```  
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
 `value_type`  
 Il tipo di elemento della matrice da creare.  
  
 `_Rank`  
 Il rango della matrice da creare.  
  
 `_Extent`  
 Extent che descrive la forma della funzione di aggregazione di matrice.  
  
 `_Rv`  
 Una visualizzazione di tasti di scelta rapida D3D sul quale è possibile creare la matrice.  
  
 `_D3D_buffer`  
 Puntatore a interfaccia IUnknown del buffer di D3D da cui creare la matrice.  
  
### <a name="return-value"></a>Valore restituito  
 Matrice creata utilizzando il buffer Direct3D fornito.  
  
##  <a name="noise"></a>  noise  
 Genera un valore casuale usando l'algoritmo Perlin noise  
  
```  
inline float noise(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile da cui generare Perlin noise  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore di rumore Perlin The all'interno di un intervallo compreso tra -1 e 1  
  
##  <a name="radians"></a>  radianti  
 Converte x da gradi a radianti  
  
```  
inline float radians(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce x convertita i gradi in radianti  
  
##  <a name="rcp"></a>  rcp  
 Calcola il reciproco dell'argomento specificato con un'approssimazione veloce.  
  
```  
inline float rcp(float _X) restrict(amp);

 
inline double rcp(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Il valore per la quale calcolare il reciproco.  
  
### <a name="return-value"></a>Valore restituito  
 Il reciproco dell'argomento specificato.  
  
##  <a name="reversebits"></a>  reversebits  
 Inverte l'ordine dei bit in x  
  
```  
inline unsigned int reversebits(unsigned int _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore intero senza segno  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore con l'ordine di bit invertito in x  
  
##  <a name="saturate"></a>  saturate  
 Fissa x all'interno dell'intervallo da 0 a 1  
  
```  
inline float saturate(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce x impostato all'interno dell'intervallo da 0 a 1  
  
##  <a name="sign"></a>  sign  
 Determina il segno dell'argomento specificato.  
  
```  
inline int sign(int _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore Integer  
  
### <a name="return-value"></a>Valore restituito  
 Segno dell'argomento.  
  
##  <a name="smoothstep"></a>  smoothstep  
 Restituisce un'interpolazione continua di Hermite tra 0 e 1, se x è compreso nell'intervallo [ min, max].  
  
```  
inline float smoothstep(
    float _Min,  
    float _Max,  
    float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_Min`  
 Valore a virgola mobile  
  
 `_Max`  
 Valore a virgola mobile  
  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce 0 se x è minore di Min; 1 se x è maggiore di max; in caso contrario, un valore compreso tra 0 e 1 se x è compreso nell'intervallo [ min, max]  
  
##  <a name="step"></a>  step  
 Confronta due valori, restituendo 0 o basato su quale valore è maggiore di 1  
  
```  
inline float step(
    float _Y,  
    float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_Y`  
 Valore a virgola mobile  
  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce 1 se la x è maggiore o uguale a y; in caso contrario, 0  
  
##  <a name="umax"></a>  umax  
 Determinare il valore numerico massimo degli argomenti  
  
```  
inline unsigned int umax(
    unsigned int _X,  
    unsigned int _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore Integer  
  
 `_Y`  
 Valore Integer  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore numerico massimo degli argomenti  
  
##  <a name="umin"></a>  umin  
 Determinare il valore numerico minimo degli argomenti  
  
```  
inline unsigned int umin(
    unsigned int _X,  
    unsigned int _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore Integer  
  
 `_Y`  
 Valore Integer  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore numerico minimo degli argomenti  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency::direct3d](concurrency-direct3d-namespace.md)

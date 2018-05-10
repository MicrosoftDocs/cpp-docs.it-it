---
title: 'Funzioni dello spazio dei nomi Concurrency:: Direct3D (AMP) | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
ms.topic: reference
f1_keywords:
- amp/Concurrency::direct3d::abs
- amp/Concurrency::direct3d::countbits
- amp/Concurrency::direct3d::create_accelerator_view
- amp/Concurrency::direct3d::d3d_access_lock
- amp/Concurrency::direct3d::d3d_access_unlock
- amp/Concurrency::direct3d::firstbithigh
- amp/Concurrency::direct3d::get_buffer
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
ms.openlocfilehash: 57015cc84053216e76f3459170c3dde9a26bb43c
ms.sourcegitcommit: 7019081488f68abdd5b2935a3b36e2a5e8c571f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="concurrencydirect3d-namespace-functions-amp"></a>Funzioni dello spazio dei nomi Concurrency:: Direct3D (AMP)
||||  
|-|-|-|  
|[abs](#abs)|[clamp](#clamp)|[countbits](#countbits)|
|[create_accelerator_view](#create_accelerator_view)|||
|[d3d_access_lock](#d3d_access_lock)|[d3d_access_try_lock](#d3d_access_try_lock)|[d3d_access_unlock](#d3d_access_unlock)|  
|[firstbithigh](#firstbithigh)|[firstbitlow](#firstbitlow)|[get_buffer](#get_buffer)|  
|[imax](#imax)|[imin](#imin)|[is_timeout_disabled](#is_timeout_disabled)|  
|[mad](#mad)|[make_array](#make_array)|[Noise](#noise)|  
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
 Calcola il valore del primo argomento specificato impostato un intervallo definito per il secondo e terzo argomento specificato.  
  
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
 Il valore impostato  
  
 `_Min`  
 Il limite inferiore dell'intervallo di bloccaggio.  
  
 `_Max`  
 Il limite superiore dell'intervallo di bloccaggio.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore di fissati `_X`.  
  
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
Crea un [accelerator_view](accelerator-view-class.md) oggetto da un puntatore a un'interfaccia del dispositivo Direct3D.  
  
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
 Tasto di scelta rapida in cui si desidera creare il nuovo accelerator_view.  
  
 `_D3D_device`  
 Puntatore all'interfaccia del dispositivo Direct3D.  
  
 `_Disable_timeout`  
 Un parametro booleano che specifica se i timeout deve essere disabilitato per il accelerator_view appena creato. Questo corrisponde al flag D3D11_CREATE_DEVICE_DISABLE_GPU_TIMEOUT per la creazione di un dispositivo Direct3D e viene utilizzato per indicare se il sistema operativo deve consentire carichi di lavoro che accettano più di due secondi per l'esecuzione senza reimpostare il dispositivo per il timeout di Windows meccanismo di rilevamento e ripristino. Se è necessario eseguire attività di tempo il accelerator_view, è consigliabile usare questo flag.  
  
 `_Qmode`  
 Il [queuing_mode](concurrency-namespace-enums-amp.md#queuing_mode) da utilizzare per il accelerator_view appena creato. Questo parametro ha un valore predefinito di `queuing_mode_automatic`.  
  
## <a name="return-value"></a>Valore restituito  
 Il `accelerator_view` oggetto creato dall'interfaccia del dispositivo Direct3D passato.  
  
## <a name="remarks"></a>Note  
 Questa funzione crea un nuovo `accelerator_view` oggetto da un indicatore di misura esistente a un'interfaccia del dispositivo Direct3D. Se la chiamata di funzione ha esito positivo, il conteggio dei riferimenti del parametro viene incrementato per mezzo di un `AddRef` chiamata all'interfaccia. È possibile rilasciare l'oggetto in modo sicuro quando non è più necessario nel codice DirectX. Se la chiamata al metodo non riesce, un [runtime_exception](runtime-exception-class.md) viene generata un'eccezione.  
  
 Il `accelerator_view` che l'oggetto creato mediante questa funzione è thread-safe. È necessario sincronizzare l'utilizzo simultaneo del `accelerator_view` oggetto. Uso simultaneo di sincronizzato il `accelerator_view` oggetto e l'interfaccia raw ID3D11Device causa un comportamento indefinito.  
  
 Il runtime C++ AMP fornisce informazioni dettagliate sull'errore in modalità di debug tramite il livello di D3D Debug se si utilizza il `D3D11_CREATE_DEVICE_DEBUG` flag.  
  
  
##  <a name="d3d_access_lock"></a>  d3d_access_lock  
 Acquisire un blocco su un accelerator_view per eseguire in modo sicuro le operazioni di D3D su risorse condivise con il accelerator_view. Il accelerator_view e tutte le risorse di C++ AMP associate a questo accelerator_view internamente richiedere questo blocco quando si eseguono operazioni e verranno bloccati mentre un altro thread è responsabile del blocco di accesso D3D. Questo blocco è non ricorsiva: si tratta di un comportamento indefinito per chiamare questa funzione da un thread che contiene già il blocco. È un comportamento non definito per eseguire operazioni sul accelerator_view o qualsiasi contenitore di dati associato il accelerator_view dal thread che contiene il blocco di accesso D3D. Vedere anche scoped_d3d_access_lock, una classe di tipo RAII per un blocco di accesso basati sull'ambito D3D.  
  
```  
void __cdecl d3d_access_lock(accelerator_view& _Av);
```  
  
### <a name="parameters"></a>Parametri  
 `_Av`  
 Accelerator_view di blocco.  
  
##  <a name="d3d_access_try_lock"></a>  d3d_access_try_lock  
 Tentativo di acquisire il blocco di accesso D3D su un accelerator_view senza bloccare.  
  
```  
bool __cdecl d3d_access_try_lock(accelerator_view& _Av);
```  
  
### <a name="parameters"></a>Parametri  
 `_Av`  
 Accelerator_view di blocco.  
  
### <a name="return-value"></a>Valore restituito  
 true se è stato acquisito il blocco, oppure false se è stato mantenuto attivo da un altro thread.  
  
##  <a name="d3d_access_unlock"></a>  d3d_access_unlock  
 Rilasciare il blocco accesso D3D il accelerator_view specificato. Se il thread chiamante non viene mantenuto il blocco di accelerator_view i risultati sono indefiniti.  
  
```  
void __cdecl d3d_access_unlock(accelerator_view& _Av);
```  
  
### <a name="parameters"></a>Parametri  
 `_Av`  
 Accelerator_view per cui viene rilasciato il blocco.  
  
##  <a name="firstbithigh"></a>  firstbithigh  
 Ottiene la posizione del primo set di bit in x, che inizia con il bit di ordine più alto e verso il bit di ordine più basso.  
  
```  
inline int firstbithigh(int _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore Integer  
  
### <a name="return-value"></a>Valore restituito  
 La posizione del primo set di bit  
  
##  <a name="firstbitlow"></a>  firstbitlow  
 Ottiene la posizione del primo set di bit in x, partire con il bit di ordine più basso e procedendo verso il bit più significativo.  
  
```  
inline int firstbitlow(int _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore Integer  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la posizione del primo set di bit  
  
##  <a name="get_buffer"></a>  get_buffer  
 Ottenere l'interfaccia di buffer Direct3D sottostante nella matrice specificata.  
  
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
 Il numero di dimensioni della matrice.  
  
 `_Array`  
 Matrice in un accelerator_view Direct3D di cui viene restituita l'interfaccia di buffer Direct3D sottostante.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a interfaccia IUnknown corrispondente al buffer di Direct3D sottostante della matrice.  
  
##  <a name="imax"></a>  imax  
 Determinare il valore numerico massimo di argomenti  
  
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
 Restituisce il valore numerico massimo di argomenti  
  
##  <a name="imin"></a>  imin  
 Determinare il valore numerico minimo di argomenti  
  
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
 Restituisce il valore numerico minimo di argomenti  
  
##  <a name="is_timeout_disabled"></a>  is_timeout_disabled  
 Restituisce un flag booleano che indica se i timeout è disabilitato per il accelerator_view specificato. Corrisponde al flag D3D11_CREATE_DEVICE_DISABLE_GPU_TIMEOUT per la creazione di un dispositivo Direct3D.  
  
```  
bool __cdecl is_timeout_disabled(const accelerator_view& _Accelerator_view);
```  
  
### <a name="parameters"></a>Parametri  
 `_Accelerator_view`  
 Accelerator_view per il quale il timeout disabilitato l'impostazione è eseguire una query.  
  
### <a name="return-value"></a>Valore restituito  
 Flag booleano che indica se i timeout è disabilitato per il accelerator_view specificato.  
  
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
 Il risultato di `_X`  *  `_Y`  +  `_Z`.  
  
##  <a name="make_array"></a>  make_array  
 Creare una matrice da un puntatore a interfaccia buffer Direct3D.  
  
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
 Il numero di dimensioni della matrice da creare.  
  
 `_Extent`  
 Un extent che descrive la forma della funzione di aggregazione di matrice.  
  
 `_Rv`  
 Una vista D3D tasti di scelta rapida in cui è possibile creare la matrice.  
  
 `_D3D_buffer`  
 Puntatore a interfaccia IUnknown del buffer da cui creare la matrice D3D.  
  
### <a name="return-value"></a>Valore restituito  
 Una matrice creata utilizzando il buffer fornito di Direct3D.  
  
##  <a name="noise"></a>  noise  
 Genera un valore casuale usando l'algoritmo di disturbo Perlin  
  
```  
inline float noise(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile da cui generare il disturbo Perlin  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce Perlin il valore di disturbo in un intervallo compreso tra -1 e 1  
  
##  <a name="radians"></a>  radianti  
 Converte x gradi in radianti  
  
```  
inline float radians(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce x convertito gradi in radianti  
  
##  <a name="rcp"></a>  rcp  
 Calcola il reciproco dell'argomento specificato con un'approssimazione veloce.  
  
```  
inline float rcp(float _X) restrict(amp);

 
inline double rcp(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Il valore per cui calcolare il reciproco.  
  
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
 Il segno dell'argomento.  
  
##  <a name="smoothstep"></a>  smoothstep  
 Restituisce un'interpolazione Hermite smooth compreso tra 0 e 1, se è compreso nell'intervallo [ min, massimo] x.  
  
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
 Restituisce 0 se x è minore di Min; 1 se x è maggiore di massimo; in caso contrario, un valore compreso tra 0 e 1 se x è compreso nell'intervallo [ min, massimo]  
  
##  <a name="step"></a>  step  
 Confronta due valori, restituisce 0 o 1, in base a cui valore è maggiore di  
  
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
 Restituisce 1 se il x è maggiore o uguale a y; in caso contrario, 0  
  
##  <a name="umax"></a>  umax  
 Determinare il valore numerico massimo di argomenti  
  
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
 Restituisce il valore numerico massimo di argomenti  
  
##  <a name="umin"></a>  umin  
 Determinare il valore numerico minimo di argomenti  
  
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
 Restituisce il valore numerico minimo di argomenti  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency::direct3d](concurrency-direct3d-namespace.md)

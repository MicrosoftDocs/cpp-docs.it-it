---
title: 'Funzioni dello spazio dei nomi Concurrency:: Direct3D (AMP) | Documenti di Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 28943b62-52c9-42dc-baf1-ca7b095c1a19
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 46cafc3c6d6f21eaf147ef0edfeca7f2c81d64e6
ms.lasthandoff: 02/24/2017

---
# <a name="concurrencydirect3d-namespace-functions-amp"></a>Funzioni dello spazio dei nomi Concurrency:: Direct3D (AMP)
||||  
|-|-|-|  
|[Abs (funzione)](#abs)|[Clamp (funzione)](#clamp)|[Funzione countbits](#countbits)|
|[Funzione create_accelerator_view](#create_accelerator_view)|||
|[Funzione d3d_access_lock](#d3d_access_lock)|[Funzione d3d_access_try_lock](#d3d_access_try_lock)|[Funzione d3d_access_unlock](#d3d_access_unlock)|  
|[Funzione firstbithigh](#firstbithigh)|[Funzione firstbitlow](#firstbitlow)|[Funzione get_buffer](#get_buffer)|  
|[Funzione IMAX](#imax)|[Funzione imin](#imin)|[Funzione is_timeout_disabled](#is_timeout_disabled)|  
|[MAD (funzione)](#mad)|[Funzione make_array](#make_array)|[Funzione Noise](#noise)|  
|[Funzione RADIANS](#radians)|[RCP (funzione)](#rcp)|[Funzione reversebits](#reversebits)|  
|[saturate (funzione)](#saturate)|[Sign (funzione)](#sign)|[Funzione smoothstep](#smoothstep)|  
|[Funzione Step](#step)|[Funzione UMAX](#umax)|[Funzione umin](#umin)|  
  
##  <a name="a-nameabsa--abs-function"></a><a name="abs"></a>Abs (funzione)  
 Restituisce il valore assoluto dell'argomento  
  
```  
inline int abs(int _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore intero  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore assoluto dell'argomento.  
  
##  <a name="a-nameclampa--clamp-function"></a><a name="clamp"></a>Clamp (funzione)  
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
 Il valore fissato `_X`.  
  
##  <a name="a-namecountbitsa--countbits-function"></a><a name="countbits"></a>Funzione countbits  
 Conta il numero di bit impostati in x  
  
```  
inline unsigned int countbits(unsigned int _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore intero senza segno  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il numero di bit impostati in x  

## <a name="a-namecreateacceleratorviewa-createacceleratorview-function"></a><a name="create_accelerator_view"></a>Funzione create_accelerator_view
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
 Tasto di scelta rapida in cui viene creato il nuovo accelerator_view.  
  
 `_D3D_device`  
 Puntatore all'interfaccia dispositivo Direct3D.  
  
 `_Disable_timeout`  
 Un parametro booleano che specifica se i timeout deve essere disabilitato per accelerator_view appena creato. Questo corrisponde al flag D3D11_CREATE_DEVICE_DISABLE_GPU_TIMEOUT per creare un dispositivo Direct3D e viene utilizzato per indicare se il sistema operativo deve consentire carichi di lavoro che richiedono più di 2 secondi per eseguire senza reimpostare il dispositivo per il rilevamento di timeout di Windows e il meccanismo di ripristino. È consigliabile utilizzare questo flag se è necessario eseguire attività di tempo il accelerator_view.  
  
 `_Qmode`  
 Il [queuing_mode](concurrency-namespace-enums-amp.md#queuing_mode) da utilizzare per accelerator_view appena creato. Questo parametro ha un valore predefinito di `queuing_mode_automatic`.  
  
## <a name="return-value"></a>Valore restituito  
 Il `accelerator_view` oggetto creato tramite l'interfaccia del dispositivo Direct3D passato.  
  
## <a name="remarks"></a>Note  
 Questa funzione crea un nuovo `accelerator_view` oggetto da un puntatore esistente a un'interfaccia del dispositivo Direct3D. Se la chiamata di funzione ha esito positivo, viene incrementato il conteggio dei riferimenti del parametro per mezzo di un `AddRef` chiamata all'interfaccia. È possibile rilasciare l'oggetto in modo sicuro quando non è più necessario nel codice DirectX. Se la chiamata al metodo non riesce, un [runtime_exception](runtime-exception-class.md) viene generata un'eccezione.  
  
 Il `accelerator_view` che l'oggetto creato mediante questa funzione è thread-safe. È necessario sincronizzare contemporaneamente il `accelerator_view` oggetto. Non sincronizzate utilizzo simultaneo di `accelerator_view` oggetto e l'interfaccia ID3D11Device raw genera un comportamento indefinito.  
  
 Il runtime di C++ AMP fornisce informazioni dettagliate sull'errore in modalità debug tramite il livello D3D Debug se si utilizza il `D3D11_CREATE_DEVICE_DEBUG` flag.  
  
  
##  <a name="a-named3daccesslocka--d3daccesslock-function"></a><a name="d3d_access_lock"></a>Funzione d3d_access_lock  
 Acquisire un blocco su un accelerator_view per eseguire in modo sicuro D3D operazioni sulle risorse condivise con il accelerator_view. Il accelerator_view e tutte le risorse di C++ AMP associate a questo accelerator_view internamente accettano questo blocco quando si eseguono operazioni e verranno bloccati mentre un altro thread è responsabile del blocco di accesso D3D. Questo blocco è non ricorsiva: è un comportamento non definito per chiamare questa funzione da un thread già proprietario del blocco. È un comportamento non definito per eseguire operazioni in qualsiasi contenitore di dati associato accelerator_view dal thread che causa il blocco di accesso D3D o il accelerator_view. Vedere anche scoped_d3d_access_lock, una classe di stile RAII per un blocco di accesso basata sull'ambito D3D.  
  
```  
void __cdecl d3d_access_lock(accelerator_view& _Av);
```  
  
### <a name="parameters"></a>Parametri  
 `_Av`  
 Accelerator_view di blocco.  
  
##  <a name="a-named3daccesstrylocka--d3daccesstrylock-function"></a><a name="d3d_access_try_lock"></a>Funzione d3d_access_try_lock  
 Tenta di acquisire il blocco di accesso D3D su un accelerator_view senza bloccare.  
  
```  
bool __cdecl d3d_access_try_lock(accelerator_view& _Av);
```  
  
### <a name="parameters"></a>Parametri  
 `_Av`  
 Accelerator_view di blocco.  
  
### <a name="return-value"></a>Valore restituito  
 true se è stato acquisito il blocco, oppure false se è stato mantenuto attivo da un altro thread.  
  
##  <a name="a-named3daccessunlocka--d3daccessunlock-function"></a><a name="d3d_access_unlock"></a>Funzione d3d_access_unlock  
 Rilasciare il blocco accesso D3D accelerator_view specificato. Se il thread chiamante non aspetta il blocco di accelerator_view i risultati sono indefiniti.  
  
```  
void __cdecl d3d_access_unlock(accelerator_view& _Av);
```  
  
### <a name="parameters"></a>Parametri  
 `_Av`  
 Accelerator_view per cui viene rilasciato il blocco.  
  
##  <a name="a-namefirstbithigha--firstbithigh-function"></a><a name="firstbithigh"></a>Funzione firstbithigh  
 Ottiene la posizione del primo bit impostato in x, che inizia con il bit di ordine più alto e verso il bit di ordine più basso.  
  
```  
inline int firstbithigh(int _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore intero  
  
### <a name="return-value"></a>Valore restituito  
 La posizione del primo set di bit  
  
##  <a name="a-namefirstbitlowa--firstbitlow-function"></a><a name="firstbitlow"></a>Funzione firstbitlow  
 Ottiene la posizione del primo bit impostato in x, partire con il bit di ordine più basso e procedendo verso il bit più significativo.  
  
```  
inline int firstbitlow(int _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore intero  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce la posizione del primo bit impostato  
  
##  <a name="a-namegetbuffera--getbuffer-function"></a><a name="get_buffer"></a>Funzione get_buffer  
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
 Una matrice con un accelerator_view Direct3D per il quale viene restituito l'interfaccia di buffer Direct3D sottostante.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a interfaccia IUnknown corrispondente al buffer di Direct3D sottostante della matrice.  
  
##  <a name="a-nameimaxa--imax-function"></a><a name="imax"></a>Funzione IMAX  
 Determinare il valore numerico massimo degli argomenti  
  
```  
inline int imax(
    int _X,  
    int _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore intero  
  
 `_Y`  
 Valore intero  
  
### <a name="return-value"></a>Valore restituito  
 Restituire il valore numerico massimo degli argomenti  
  
##  <a name="a-nameimina--imin-function"></a><a name="imin"></a>Funzione imin  
 Determinare il valore numerico minimo degli argomenti  
  
```  
inline int imin(
    int _X,  
    int _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore intero  
  
 `_Y`  
 Valore intero  
  
### <a name="return-value"></a>Valore restituito  
 Restituire il valore numerico minimo degli argomenti  
  
##  <a name="a-nameistimeoutdisableda--istimeoutdisabled-function"></a><a name="is_timeout_disabled"></a>Funzione is_timeout_disabled  
 Restituisce un flag booleano che indica se i timeout è disabilitato per accelerator_view specificato. Corrisponde al flag D3D11_CREATE_DEVICE_DISABLE_GPU_TIMEOUT per creare un dispositivo Direct3D.  
  
```  
bool __cdecl is_timeout_disabled(const accelerator_view& _Accelerator_view);
```  
  
### <a name="parameters"></a>Parametri  
 `_Accelerator_view`  
 Accelerator_view per cui è possibile eseguire una query timeout disabilitato l'impostazione.  
  
### <a name="return-value"></a>Valore restituito  
 Flag booleano che indica se i timeout è disabilitato per accelerator_view specificato.  
  
##  <a name="a-namemada--mad-function"></a><a name="mad"></a>MAD (funzione)  
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
 The result of `_X` * `_Y` + `_Z`.  
  
##  <a name="a-namemakearraya--makearray-function"></a><a name="make_array"></a>Funzione make_array  
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
 Una vista D3D tasti di scelta rapida in cui si desidera creare la matrice.  
  
 `_D3D_buffer`  
 Puntatore a interfaccia IUnknown del buffer da cui creare la matrice D3D.  
  
### <a name="return-value"></a>Valore restituito  
 Una matrice creata utilizzando il buffer fornito Direct3D.  
  
##  <a name="a-namenoisea--noise-function"></a><a name="noise"></a>Funzione Noise  
 Genera un valore casuale utilizzando l'algoritmo di disturbo Perlin  
  
```  
inline float noise(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile da cui generare il disturbo Perlin  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce Perlin il rumore valore all'interno di un intervallo compreso tra -1 e 1  
  
##  <a name="a-nameradiansa--radians-function"></a><a name="radians"></a>Funzione RADIANS  
 Converte i x da gradi in radianti  
  
```  
inline float radians(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce x convertito da gradi in radianti  
  
##  <a name="a-namercpa--rcp-function"></a><a name="rcp"></a>RCP (funzione)  
 Calcola il reciproco dell'argomento specificato con un'approssimazione rapida.  
  
```  
inline float rcp(float _X) restrict(amp);

 
inline double rcp(double _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Il valore per cui calcolare il reciproco.  
  
### <a name="return-value"></a>Valore restituito  
 Il reciproco dell'argomento specificato.  
  
##  <a name="a-namereversebitsa--reversebits-function"></a><a name="reversebits"></a>Funzione reversebits  
 Inverte l'ordine dei bit in x  
  
```  
inline unsigned int reversebits(unsigned int _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore intero senza segno  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce il valore con l'ordine di bit invertito x  
  
##  <a name="a-namesaturatea--saturate-function"></a><a name="saturate"></a>saturate (funzione)  
 Applica x all'interno dell'intervallo da 0 a 1  
  
```  
inline float saturate(float _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore a virgola mobile  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce x impostato all'interno dell'intervallo da 0 a 1  
  
##  <a name="a-namesigna--sign-function"></a><a name="sign"></a>Sign (funzione)  
 Determina il segno dell'argomento specificato.  
  
```  
inline int sign(int _X) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore intero  
  
### <a name="return-value"></a>Valore restituito  
 Il segno dell'argomento.  
  
##  <a name="a-namesmoothstepa--smoothstep-function"></a><a name="smoothstep"></a>Funzione smoothstep  
 Restituisce un'interpolazione Hermite smooth compreso tra 0 e 1, se x è compreso nell'intervallo [ min, massimo].  
  
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
  
##  <a name="a-namestepa--step-function"></a><a name="step"></a>Funzione Step  
 Confronta due valori, restituisce 0 o 1 in base alla quale valore maggiore  
  
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
  
##  <a name="a-nameumaxa--umax-function"></a><a name="umax"></a>Funzione UMAX  
 Determinare il valore numerico massimo degli argomenti  
  
```  
inline unsigned int umax(
    unsigned int _X,  
    unsigned int _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore intero  
  
 `_Y`  
 Valore intero  
  
### <a name="return-value"></a>Valore restituito  
 Restituire il valore numerico massimo degli argomenti  
  
##  <a name="a-nameumina--umin-function"></a><a name="umin"></a>Funzione umin  
 Determinare il valore numerico minimo degli argomenti  
  
```  
inline unsigned int umin(
    unsigned int _X,  
    unsigned int _Y) restrict(amp);
```  
  
### <a name="parameters"></a>Parametri  
 `_X`  
 Valore intero  
  
 `_Y`  
 Valore intero  
  
### <a name="return-value"></a>Valore restituito  
 Restituire il valore numerico minimo degli argomenti  
  
## <a name="see-also"></a>Vedere anche  
 [Namespace Concurrency:: Direct3D](concurrency-direct3d-namespace.md)


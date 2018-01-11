---
title: Classe Accelerator | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- AMPRT/accelerator
- AMPRT/Concurrency::accelerator::accelerator
- AMPRT/Concurrency::accelerator::create_view
- AMPRT/Concurrency::accelerator::get_all
- AMPRT/Concurrency::accelerator::get_auto_selection_view
- AMPRT/Concurrency::accelerator::get_dedicated_memory
- AMPRT/Concurrency::accelerator::get_default_cpu_access_type
- AMPRT/Concurrency::accelerator::get_default_view
- AMPRT/Concurrency::accelerator::get_description
- AMPRT/Concurrency::accelerator::get_device_path
- AMPRT/Concurrency::accelerator::get_has_display
- AMPRT/Concurrency::accelerator::get_is_debug
- AMPRT/Concurrency::accelerator::get_is_emulated
- AMPRT/Concurrency::accelerator::get_supports_cpu_shared_memory
- AMPRT/Concurrency::accelerator::get_supports_double_precision
- AMPRT/Concurrency::accelerator::get_supports_limited_double_precision
- AMPRT/Concurrency::accelerator::get_version
- AMPRT/Concurrency::accelerator::set_default
- AMPRT/Concurrency::accelerator::set_default_cpu_access_type
- AMPRT/Concurrency::accelerator::cpu_accelerator
- AMPRT/Concurrency::accelerator::dedicated_memory
- AMPRT/Concurrency::accelerator::default_accelerator
- AMPRT/Concurrency::accelerator::default_cpu_access_type
- AMPRT/Concurrency::accelerator::default_view
- AMPRT/Concurrency::accelerator::description
- AMPRT/Concurrency::accelerator::device_path
- AMPRT/Concurrency::accelerator::direct3d_ref
- AMPRT/Concurrency::accelerator::direct3d_warp
- AMPRT/Concurrency::accelerator::has_display
- AMPRT/Concurrency::accelerator::is_debug
- AMPRT/Concurrency::accelerator::is_emulated
- AMPRT/Concurrency::accelerator::supports_cpu_shared_memory
- AMPRT/Concurrency::accelerator::supports_double_precision
- AMPRT/Concurrency::accelerator::supports_limited_double_precision
- AMPRT/Concurrency::accelerator::version
dev_langs: C++
helpviewer_keywords: accelerator class
ms.assetid: 37eed593-cf87-4611-9cdc-e98df6c2377a
caps.latest.revision: "29"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: ff64eeedb324d3a849029b15744cd630603aef67
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="accelerator-class"></a>Classe accelerator
Un tasto di scelta rapida è una funzionalità di hardware che è ottimizzata per l'elaborazione dati in parallelo. Un tasto di scelta rapida sia un dispositivo collegato a un bus PCIe (ad esempio una GPU), o potrebbe essere un'istruzione estesa impostato sulla CPU principale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class accelerator;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore Accelerator](#ctor)|Inizializza una nuova istanza della classe `accelerator`.|  
|[~ accelerator, distruttore](#ctor)|Elimina definitivamente il `accelerator` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CREATE_VIEW](#create_view)|Crea e restituisce un `accelerator_view` oggetto questo tasto di scelta rapida.|  
|[get_all](#get_all)|Restituisce un vettore di `accelerator` gli oggetti che rappresentano tutti i tasti disponibili.|  
|[get_auto_selection_view](#get_auto_selection_view)|Restituisce la selezione automatica `accelerator_view`.|  
|[get_dedicated_memory](#get_dedicated_memory)|Restituisce la memoria dedicata per il `accelerator`, espressa in kilobyte.|  
|[get_default_cpu_access_type](#get_default_cpu_access_type)|Restituisce il valore predefinito [access_type](concurrency-namespace-enums-amp.md#access_type) per buffer creati in questo tasto di scelta rapida.|  
|[get_default_view](#get_default_view)|Restituisce il valore predefinito `accelerator_view` oggetto a cui è associato il `accelerator`.|  
|[get_Description](#get_description)|Restituisce una breve descrizione di `accelerator` dispositivo.|  
|[get_device_path](#get_device_path)|Restituisce il percorso del dispositivo.|  
|[get_has_display](#get_has_display)|Determina se il `accelerator` è collegato a una visualizzazione.|  
|[get_is_debug](#get_is_debug)|Determina se il `accelerator` dispone del livello DEBUG abilitato per la segnalazione errori estesa.|  
|[get_is_emulated](#get_is_emulated)|Determina se il `accelerator` viene emulata.|  
|[get_supports_cpu_shared_memory](#get_supports_cpu_shared_memory)|Determina se il `accelerator` supporta il protocollo shared memory|  
|[get_supports_double_precision](#get_supports_double_precision)|Determina se il `accelerator` è collegato a una visualizzazione.|  
|[get_supports_limited_double_precision](#get_supports_limited_double_precision)|Determina se il `accelerator` offre supporto limitato per matematiche e con precisione doppia.|  
|[get_version](#get_version)|Restituisce la versione di `accelerator`.|  
|[set_default](#set_default)|Restituisce il percorso dell'acceleratore predefinito.|  
|[set_default_cpu_access_type](#set_default_cpu_access_type)|Imposta la CPU predefinito [access_type](concurrency-namespace-enums-amp.md#access_type)per le matrici e allocazioni di memoria implicita effettuate su questo `accelerator`.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operator!=](#operator_neq)|Confronta questo `accelerator` oggetto con un altro e restituisce `false` se sono uguali; in caso contrario, restituisce `true`.|  
|[operator=](#operator_eq)|Copia il contenuto dell'oggetto specificato `accelerator` questo oggetto.|  
|[operator==](#operator_eq_eq)|Confronta questo `accelerator` oggetto con un altro e restituisce `true` se sono uguali; in caso contrario, restituisce `false`.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[cpu_accelerator](#cpu_accelerator)|Ottiene una stringa costante per la CPU `accelerator`.|  
|[dedicated_memory](#dedicated_memory)|Ottiene la memoria dedicata per il `accelerator`, espressa in kilobyte.|  
|[default_accelerator](#default_accelerator)|Ottiene una stringa costante per il valore predefinito `accelerator`.|  
|[default_cpu_access_type](#default_cpu_access_type)|Ottiene o imposta la CPU predefinito [access_type](concurrency-namespace-enums-amp.md#access_type)per le matrici e allocazioni di memoria implicita effettuate su questo `accelerator`.|  
|[default_view](#default_view)|Ottiene il valore predefinito `accelerator_view` oggetto a cui è associato il `accelerator`.|  
|[description](#description)|Ottiene una breve descrizione di `accelerator` dispositivo.|  
|[device_path](#device_path)|Ottiene il percorso del dispositivo.|  
|[direct3d_ref](#direct3d_ref)|Ottiene una stringa costante per un riferimento di Direct3D `accelerator`.|  
|[direct3d_warp](#direct3d_warp)|Ottiene la stringa costante per un `accelerator` che è possibile utilizzare per l'esecuzione di codice C++ AMP nelle CPU multicore che utilizzano Streaming SIMD Extensions (SSE).|  
|[has_display](#has_display)|Ottiene un valore booleano che indica se il `accelerator` è collegato a una visualizzazione.|  
|[is_debug](#is_debug)|Indica se il `accelerator` dispone del livello DEBUG abilitato per la segnalazione errori estesa.|  
|[is_emulated](#is_emulated)|Indica se il `accelerator` viene emulata.|  
|[supports_cpu_shared_memory](#supports_cpu_shared_memory)|Indica se il `accelerator` supporta il protocollo shared memory.|  
|[supports_double_precision](#supports_double_precision)|Indica se il tasto di scelta rapida supporta matematiche e con precisione doppia.|  
|[supports_limited_double_precision](#supports_limited_double_precision)|Indica se il tasto di scelta rapida è un supporto limitato per matematiche e con precisione doppia.|  
|[version](#version)|Ottiene la versione di `accelerator`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `accelerator`  
  
## <a name="remarks"></a>Note  
 Un tasto di scelta rapida è una funzionalità di hardware che è ottimizzata per l'elaborazione dati in parallelo. Un tasto di scelta rapida è spesso una GPU, ma può anche essere un'entità sul lato host virtuale, ad esempio un dispositivo di riferimento di DirectX, una distorsione (un dispositivo lato della CPU viene accelerato tramite istruzioni SSE) o la CPU.  
  
 È possibile costruire un `accelerator` oggetto enumerando i dispositivi disponibili, o ottenendo la periferica predefinita, il dispositivo di riferimento o il dispositivo WARP.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amprt.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="dtor"></a></a> ~ accelerator 

 Elimina definitivamente il `accelerator` oggetto.  
  
```  
~accelerator();
```  
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="ctor"></a>tasti di scelta rapida 

 Inizializza una nuova istanza di [accelerator_class](accelerator-class.md).  
  
```  
accelerator();

 
explicit accelerator(const std::wstring& _Device_path);

 
accelerator(const accelerator& _Other);
```  
  
### <a name="parameters"></a>Parametri  
 `_Device_path`  
 Il percorso del dispositivo fisico.  
  
 `_Other`  
 Tasti di scelta rapida da copiare.  
  
##  <a name="cpu_accelerator"></a>cpu_accelerator 

 Ottiene una stringa costante per il tasto di scelta rapida della CPU.  
  
```  
static const wchar_t cpu_accelerator[];  
```  
  
##  <a name="create_view"></a>CREATE_VIEW 

 Crea e restituisce un `accelerator_view` oggetto questo tasto di scelta rapida, utilizzando la modalità di Accodamento messaggi specificata. Quando la modalità di accodamento non viene specificata, il nuovo `accelerator_view` utilizza il [queuing_mode::immediate](concurrency-namespace-enums-amp.md#queuing_mode) modalità di Accodamento.  
  
```  
accelerator_view create_view(queuing_mode qmode = queuing_mode_automatic);
```  
  
### <a name="parameters"></a>Parametri  
 `qmode`  
 La modalità di Accodamento.  
  
### <a name="return-value"></a>Valore restituito  
 Un nuovo `accelerator_view` oggetto questo tasto di scelta rapida, utilizzando la modalità di Accodamento messaggi specificata.  
  
##  <a name="dedicated_memory"></a>dedicated_memory 

 Ottiene la memoria dedicata per il `accelerator`, espressa in kilobyte.  
  
```  
__declspec(property(get= get_dedicated_memory)) size_t dedicated_memory;  
```  
  
##  <a name="default_accelerator"></a>default_accelerator 

 Ottiene una stringa costante per il valore predefinito `accelerator`.  
  
```  
static const wchar_t default_accelerator[];  
```  
  
##  <a name="default_cpu_access_type"></a>default_cpu_access_type 

 Il valore predefinito della cpu [access_type](concurrency-namespace-enums-amp.md#access_type)per le matrici e allocazioni di memoria implicita effettuate su questa questo `accelerator`.  
  
```  
__declspec(property(get= get_default_cpu_access_type)) access_type default_cpu_access_type;  
```  
  
##  <a name="default_view"></a>default_view 

 Ottiene la visualizzazione di tasti di scelta rapida predefinita che è associata il `accelerator`.  
  
```  
__declspec(property(get= get_default_view)) accelerator_view default_view;  
```  
  
##  <a name="description"></a>Descrizione 

 Ottiene una breve descrizione di `accelerator` dispositivo.  
  
```  
__declspec(property(get= get_description)) std::wstring description;  
```  
  
##  <a name="device_path"></a>device_path 

 Ottiene il percorso dell'acceleratore. Il percorso è univoco nel sistema.  
  
```  
__declspec(property(get= get_device_path)) std::wstring device_path;  
```  
  
##  <a name="direct3d_ref"></a>direct3d_ref 

 Ottiene una stringa costante per un acceleratore di riferimento di Direct3D.  
  
```  
static const wchar_t direct3d_ref[];  
```  
  
##  <a name="direct3d_warp"></a>direct3d_warp 

 Ottiene la stringa costante per un `accelerator` che è possibile utilizzare per l'esecuzione di codice C++ AMP nelle CPU multicore utilizzando Streaming SIMD Extensions (SSE).  
  
```  
static const wchar_t direct3d_warp[];  
```  
  
##  <a name="get_all"></a>get_all 

 Restituisce un vettore di `accelerator` gli oggetti che rappresentano tutti i tasti disponibili.  
  
```  
static inline std::vector<accelerator> get_all();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il vettore di tasti di scelta rapida disponibili  
  
##  <a name="get_auto_selection_view"></a>get_auto_selection_view 

 Restituisce accelerator_view la selezione automatica, quale, se specificato come i risultati di destinazione parallel_for_each in accelerator_view la destinazione per l'esecuzione di parallel_for_each kernel per essere selezionato automaticamente dal runtime. Per altri scopi, le accelerator_view restituito da questo metodo è identico accelerator_view l'impostazione predefinita dell'acceleratore predefinito  
  
```  
static accelerator_view __cdecl get_auto_selection_view();
```  
  
### <a name="return-value"></a>Valore restituito  
 Accelerator_view la selezione automatica.  
  
##  <a name="get_dedicated_memory"></a>get_dedicated_memory 

 Restituisce la memoria dedicata per il `accelerator`, espressa in kilobyte.  
  
```  
size_t get_dedicated_memory() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 La memoria dedicata per il `accelerator`, espressa in kilobyte.  
  
##  <a name="get_default_cpu_access_type"></a>get_default_cpu_access_type 

 Ottiene il access_type cpu predefinito per i buffer creati in questo tasto di scelta rapida  
  
```  
access_type get_default_cpu_access_type() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Access_type di cpu predefinito per i buffer creato in questo tasto di scelta rapida.  
  
##  <a name="get_default_view"></a>get_default_view 

 Restituisce il valore predefinito `accelerator_view` oggetto a cui è associato il `accelerator`.  
  
```  
accelerator_view get_default_view() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore predefinito `accelerator_view` oggetto a cui è associato il `accelerator`.  
  
##  <a name="get_description"></a>get_Description 

 Restituisce una breve descrizione di `accelerator` dispositivo.  
  
```  
std::wstring get_description() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Una breve descrizione di `accelerator` dispositivo.  
  
##  <a name="get_device_path"></a>get_device_path 

 Restituisce il percorso dell'acceleratore. Il percorso è univoco nel sistema.  
  
```  
std::wstring get_device_path() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Il percorso dell'istanza a livello di sistema univoco del dispositivo.  
  
##  <a name="get_has_display"></a>get_has_display 

 Restituisce un valore booleano che indica se il `accelerator` eseguire l'output in una visualizzazione.  
  
```  
bool get_has_display() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il `accelerator` eseguire l'output in una visualizzazione; in caso contrario, `false`.  
  
##  <a name="get_is_debug"></a>get_is_debug 

 Determina se il `accelerator` dispone del livello DEBUG abilitato per la segnalazione errori estesa.  
  
```  
bool get_is_debug() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il `accelerator` dispone del livello DEBUG abilitato per la segnalazione errori estesa. In caso contrario, `false`.  
  
##  <a name="get_is_emulated"></a>get_is_emulated 

 Determina se il `accelerator` viene emulata.  
  
```  
bool get_is_emulated() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il `accelerator` viene emulata. In caso contrario, `false`.  
  
##  <a name="get_supports_cpu_shared_memory"></a>get_supports_cpu_shared_memory 

 Restituisce un valore booleano che indica se il tasto di scelta rapida supporta memoria accessibile sia dal tasto di scelta rapida e la CPU.  
  
```  
bool get_supports_cpu_shared_memory() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il tasto di scelta rapida supporta la memoria condivisa di CPU. in caso contrario, `false`.  
  
##  <a name="get_supports_double_precision"></a>get_supports_double_precision 

 Restituisce un valore booleano che indica se il tasto di scelta rapida supporta matematiche di precisione doppia, tra cui fused multiply aggiungere (FMA), divisione, reciproco e cast tra `int` e `double`.  
  
```  
bool get_supports_double_precision() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il tasto di scelta rapida supporta matematiche precisione di double; in caso contrario, `false`.  
  
##  <a name="get_supports_limited_double_precision"></a>get_supports_limited_double_precision 

 Restituisce un valore booleano che indica se il tasto di scelta rapida è un supporto limitato per matematiche di precisione doppia. Se il tasto di scelta rapida è solo un supporto limitato, quindi fused multiply aggiungere (FMA), divisione, reciproco e cast tra `int` e `double` non sono supportati.  
  
```  
bool get_supports_limited_double_precision() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il tasto di scelta rapida è un supporto limitato per matematiche precisione di double; in caso contrario, `false`.  
  
##  <a name="get_version"></a>get_version 

 Restituisce la versione di `accelerator`.  
  
```  
unsigned int get_version() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 La versione di `accelerator`.  
  
##  <a name="has_display"></a>has_display 

 Ottiene un valore booleano che indica se il `accelerator` eseguire l'output in una visualizzazione.  
  
```  
__declspec(property(get= get_has_display)) bool has_display;  
```  
  
##  <a name="is_debug"></a>is_debug 

 Ottiene un valore booleano che indica se il `accelerator` dispone del livello DEBUG abilitato per la segnalazione errori estesa.  
  
```  
__declspec(property(get= get_is_debug)) bool is_debug;  
```  
  
##  <a name="is_emulated"></a>is_emulated 

 Ottiene un valore booleano che indica se il `accelerator` viene emulata.  
  
```  
__declspec(property(get= get_is_emulated)) bool is_emulated;  
```  
  
##  <a name="operator_neq"></a>operatore! = 

 Confronta questo `accelerator` oggetto con un altro e restituisce `false` se sono uguali; in caso contrario, restituisce `true`.  
  
```  
bool operator!= (const accelerator& _Other) const;

 
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator` oggetto da confrontare con questo.  
  
### <a name="return-value"></a>Valore restituito  
 `false`Se i due `accelerator` oggetti sono uguali; in caso contrario, `true`.  
  
##  <a name="operator_eq"></a>operator = 

 Copia il contenuto dell'oggetto specificato `accelerator` questo oggetto.  
  
```  
accelerator& operator= (const accelerator& _Other);
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator` oggetto da copiare.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a questo `accelerator` oggetto.  
  
##  <a name="operator_eq_eq"></a>operatore = = 

 Confronta questo `accelerator` oggetto con un altro e restituisce `true` se sono uguali; in caso contrario, restituisce `false`.  
  
```  
bool operator== (const accelerator& _Other) const;

 
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator` oggetto da confrontare con questo.  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se l'altro `accelerator` è uguale a questo oggetto `accelerator` oggetto; in caso contrario, `false`.  
  
##  <a name="set_default"></a>set_default 

 Imposta il tasto di scelta rapida predefinito da utilizzare per qualsiasi operazione che utilizza in modo implicito l'acceleratore predefinito. Questo metodo ha esito positivo solo se il tasto di scelta rapida di runtime predefinito selezionato non è già stato utilizzato in un'operazione che utilizza in modo implicito l'acceleratore predefinito  
  
```  
static inline bool set_default(std::wstring _Path);
```  
  
### <a name="parameters"></a>Parametri  
 `_Path`  
 Il percorso per i tasti di scelta rapida.  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se la chiamata ha esito positivo impostazione acceleratore predefinito. In caso contrario, `false`.  
  
##  <a name="set_default_cpu_access_type"></a>set_default_cpu_access_type 

 Impostare il access_type cpu predefinito per le matrici create in questo tasto di scelta rapida o per le allocazioni di memoria implicito come parte di array_views accessibili su questo questo tasto di scelta rapida. Questo metodo ha esito positivo solo se il default_cpu_access_type per i tasti di scelta rapida non sia già stata sottoposta a override da una precedente chiamata a questo metodo e il runtime selezionato default_cpu_access_type di tasti di scelta non è ancora stato utilizzato per allocare una matrice o per un'allocazione di memoria implicita il backup di un array_view accede a questo tasto di scelta rapida.  
  
```  
bool set_default_cpu_access_type(access_type _Default_cpu_access_type);
```  
  
### <a name="parameters"></a>Parametri  
 `_Default_cpu_access_type`  
 Access_type di cpu predefinito da utilizzare per le allocazioni di memoria/array_view matrice su questo tasto di scelta rapida.  
  
### <a name="return-value"></a>Valore restituito  
 Valore booleano che indica se il access_type cpu predefinito per i tasti di scelta rapida è stato impostato correttamente.  
  
##  <a name="supports_cpu_shared_memory"></a>supports_cpu_shared_memory 

 Ottiene un valore booleano che indica se il `accelerator` supporta il protocollo shared memory.  
  
```  
__declspec(property(get= get_supports_cpu_shared_memory)) bool supports_cpu_shared_memory;  
```  
  
##  <a name="supports_double_precision"></a>supports_double_precision 

 Ottiene un valore booleano che indica se il tasto di scelta rapida supporta matematica a precisione doppia.  
  
```  
__declspec(property(get= get_supports_double_precision)) bool supports_double_precision;  
```  
  
##  <a name="supports_limited_double_precision"></a>supports_limited_double_precision 

 Ottiene un valore booleano che indica se il tasto di scelta rapida è un supporto limitato per matematiche di precisione doppia. Se il tasto di scelta rapida è solo un supporto limitato, quindi fused multiply aggiungere (FMA), divisione, reciproco e cast tra `int` e `double` non sono supportati.  
  
```  
__declspec(property(get= get_supports_limited_double_precision)) bool supports_limited_double_precision;  
```  
  
##  <a name="version"></a>Versione 

 Ottiene la versione di `accelerator`.  
  
```  
__declspec(property(get= get_version)) unsigned int version;  
```  
  
##  <a name="dtor"></a></a> ~ accelerator_view 

 Elimina definitivamente il [accelerator_view](accelerator-view-class.md) oggetto.  
  
```  
~accelerator_view();
```  
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="accelerator"></a>tasti di scelta rapida 

 Ottiene il `accelerator` dell'oggetto per il [accelerator_view](accelerator-view-class.md) oggetto.  
  
```  
__declspec(property(get= get_accelerator)) Concurrency::accelerator accelerator;  
```  
  
##  <a name="ctor"></a>accelerator_view 

 Inizializza una nuova istanza di [accelerator_view](accelerator-view-class.md) classe tramite la copia esistente `accelerator_view` oggetto.  
  
```  
accelerator_view(const accelerator_view& _Other);
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator_view` oggetto da copiare.  
  
##  <a name="create_marker"></a>create_marker 

 Restituisce un futuro per tenere traccia del completamento di tutti i comandi inviati fino a questo punto si `accelerator_view` oggetto.  
  
```  
concurrency::completion_future create_marker();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un futuro per tenere traccia del completamento di tutti i comandi inviati fino a questo punto si `accelerator_view` oggetto.  
  
##  <a name="flush"></a>Flush 

 Invia tutti i comandi in sospeso in coda per il [accelerator_view](accelerator-view-class.md) oggetto per il tasto di scelta rapida per l'esecuzione.  
  
```  
void flush();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `void`.  
  
##  <a name="get_accelerator"></a>get_accelerator 

 Restituisce il `accelerator` dell'oggetto per il [accelerator_view](accelerator-view-class.md) oggetto.  
  
```  
accelerator get_accelerator() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Il `accelerator` dell'oggetto per il `accelerator_view` oggetto.  
  
##  <a name="get_is_auto_selection"></a>get_is_auto_selection 

 Restituisce un valore booleano che indica se il runtime verrà selezionato automaticamente un acceleratore appropriato quando il accelerator_view viene passato a un [parallel_for_each](../../../parallel/concrt/reference/concurrency-namespace-functions.md#parallel_for_each).  
  
```  
bool get_is_auto_selection() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il runtime verrà selezionato automaticamente un acceleratore appropriato; in caso contrario, `false`.  
  
##  <a name="get_is_debug"></a>get_is_debug 

 Restituisce un valore booleano che indica se il [accelerator_view](accelerator-view-class.md) oggetto dispone del livello DEBUG abilitato per la segnalazione errori estesa.  
  
```  
bool get_is_debug() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Un valore booleano che indica se il `accelerator_view` oggetto dispone del livello DEBUG abilitato per la segnalazione errori estesa.  
  
##  <a name="get_queuing_mode"></a>get_queuing_mode 

 Restituisce la modalità di Accodamento messaggi per il [accelerator_view](accelerator-view-class.md) oggetto.  
  
```  
queuing_mode get_queuing_mode() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 La modalità di Accodamento per il `accelerator_view` oggetto.  
  
##  <a name="get_version"></a>get_version 

 Restituisce la versione di [accelerator_view](accelerator-view-class.md).  
  
```  
unsigned int get_version() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 La versione di `accelerator_view`.  
  
##  <a name="is_auto_selection"></a>is_auto_selection 

 Ottiene un valore booleano che indica se il runtime verrà selezionato automaticamente un acceleratore appropriato quando il accelerator_view viene passato a un [parallel_for_each](../../../parallel/concrt/reference/concurrency-namespace-functions.md#parallel_for_each).  
  
```  
__declspec(property(get= get_is_auto_selection)) bool is_auto_selection;  
```  
  
##  <a name="is_debug"></a>is_debug 

 Ottiene un valore booleano che indica se il [accelerator_view](accelerator-view-class.md) oggetto dispone del livello DEBUG abilitato per la segnalazione errori estesa.  
  
```  
__declspec(property(get= get_is_debug)) bool is_debug;  
```  
  
##  <a name="operator_neq"></a>operatore! = 

 Confronta questo [accelerator_view](accelerator-view-class.md) oggetto con un altro e restituisce `false` se sono uguali; in caso contrario, restituisce `true`.  
  
```  
bool operator!= (const accelerator_view& _Other) const;

 
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator_view` oggetto da confrontare con questo.  
  
### <a name="return-value"></a>Valore restituito  
 `false` se i due oggetti sono uguali; in caso contrario, `true`.  
  
##  <a name="operator_eq"></a>operator = 

 Copia il contenuto dell'oggetto specificato [accelerator_view](accelerator-view-class.md) specificato in questo oggetto.  
  
```  
accelerator_view& operator= (const accelerator_view& _Other);
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator_view` oggetto da copiare.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a modificato `accelerator_view` oggetto.  
  
##  <a name="operator_eq_eq"></a>operatore = = 

 Confronta questo [accelerator_view](accelerator-view-class.md) oggetto con un altro e restituisce `true` se sono uguali; in caso contrario, restituisce `false`.  
  
```  
bool operator== (const accelerator_view& _Other) const;

 
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator_view` oggetto da confrontare con questo.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se i due oggetti sono uguali; in caso contrario, `false`.  
  
##  <a name="queuing_mode"></a>queuing_mode 

 Ottiene la modalità di Accodamento messaggi per il [accelerator_view](accelerator-view-class.md) oggetto.  
  
```  
__declspec(property(get= get_queuing_mode)) Concurrency::queuing_mode queuing_mode;  
```  
  
##  <a name="version"></a>Versione 

 Ottiene la versione di [accelerator_view](accelerator-view-class.md).  
  
```  
__declspec(property(get= get_version)) unsigned int version;  
```  
  
##  <a name="wait"></a>attesa 

 Attende che tutti i comandi inviati per la [accelerator_view](accelerator-view-class.md) oggetto completamento.  
  
```  
void wait();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `void`.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)

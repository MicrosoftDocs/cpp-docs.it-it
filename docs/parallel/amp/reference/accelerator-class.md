---
title: Classe Accelerator | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- amprt/Concurrency::accelerator
dev_langs:
- C++
helpviewer_keywords:
- accelerator class
ms.assetid: 37eed593-cf87-4611-9cdc-e98df6c2377a
caps.latest.revision: 29
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: fc190feb08d9b221cd1cc21a9c91ad567c86c848
ms.openlocfilehash: b1bdd7f6979094658d1de6f9690bc44dc50ee8bb
ms.lasthandoff: 02/24/2017

---
# <a name="accelerator-class"></a>Classe accelerator
Un tasto di scelta rapida è una funzionalità hardware che è ottimizzata per l'elaborazione dati in parallelo. Un tasto di scelta rapida può essere un dispositivo collegato a un bus PCIe (ad esempio una GPU), o potrebbe essere un'istruzione estesa impostato sulla CPU principale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class accelerator;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore Accelerator](#ctor)|Inizializza una nuova istanza della classe `accelerator`.|  
|[~ accelerator distruttore](#ctor)|Elimina il `accelerator` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CREATE_VIEW (metodo)](#create_view)|Crea e restituisce un `accelerator_view` oggetto questo tasto di scelta rapida.|  
|[get_all (metodo)](#get_all)|Restituisce un vettore di `accelerator` gli oggetti che rappresentano tutti gli acceleratori disponibili.|  
|[get_auto_selection_view (metodo)](#get_auto_selection_view)|Restituisce la selezione automatica `accelerator_view`.|  
|[get_dedicated_memory (metodo)](#get_dedicated_memory)|Restituisce la quantità di memoria dedicata per il `accelerator`, espressa in kilobyte.|  
|[get_default_cpu_access_type (metodo)](#get_default_cpu_access_type)|Restituisce il valore predefinito [access_type](concurrency-namespace-enums-amp.md#access_type) per i buffer creati in questo tasto di scelta rapida.|  
|[get_default_view (metodo)](#get_default_view)|Restituisce il valore predefinito `accelerator_view` oggetto che è associato il `accelerator`.|  
|[get_Description (metodo)](#get_description)|Restituisce una breve descrizione del `accelerator` dispositivo.|  
|[get_device_path (metodo)](#get_device_path)|Restituisce il percorso del dispositivo.|  
|[get_has_display (metodo)](#get_has_display)|Determina se il `accelerator` è collegato a una visualizzazione.|  
|[get_is_debug (metodo)](#get_is_debug)|Determina se il `accelerator` dispone del livello DEBUG abilitato per la segnalazione errori estesa.|  
|[get_is_emulated (metodo)](#get_is_emulated)|Determina se il `accelerator` viene emulata.|  
|[get_supports_cpu_shared_memory (metodo)](#get_supports_cpu_shared_memory)|Determina se il `accelerator` supporta la memoria condivisa|  
|[get_supports_double_precision (metodo)](#get_supports_double_precision)|Determina se il `accelerator` è collegato a una visualizzazione.|  
|[get_supports_limited_double_precision (metodo)](#get_supports_limited_double_precision)|Determina se il `accelerator` offre supporto limitato per matematica e precisione doppia.|  
|[get_version (metodo)](#get_version)|Restituisce la versione di `accelerator`.|  
|[set_default (metodo)](#set_default)|Restituisce il percorso dell'acceleratore predefinito.|  
|[set_default_cpu_access_type (metodo)](#set_default_cpu_access_type)|Imposta l'utilizzo della CPU predefinito [access_type](concurrency-namespace-enums-amp.md#access_type)per le matrici e allocazioni di memoria implicite effettuate su questa `accelerator`.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operatore! = (operatore)](#operator_neq)|Confronta questa `accelerator` oggetto con un altro e restituisce `false` se sono uguali; in caso contrario, restituisce `true`.|  
|[operatore = (operatore)](#operator_eq)|Copia il contenuto dell'oggetto specificato `accelerator` a questo oggetto.|  
|[operatore Operator = =](#operator_eq_eq)|Confronta questa `accelerator` oggetto con un altro e restituisce `true` se sono uguali; in caso contrario, restituisce `false`.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[cpu_accelerator (membro dati)](#cpu_accelerator)|Ottiene una stringa costante per la CPU `accelerator`.|  
|[dedicated_memory (membro dati)](#dedicated_memory)|Ottiene la quantità di memoria dedicata per il `accelerator`, espressa in kilobyte.|  
|[default_accelerator (membro dati)](#default_accelerator)|Ottiene una stringa costante per il valore predefinito `accelerator`.|  
|[default_cpu_access_type (membro dati)](#default_cpu_access_type)|Ottiene o imposta l'utilizzo della CPU predefinito [access_type](concurrency-namespace-enums-amp.md#access_type)per le matrici e allocazioni di memoria implicite effettuate su questa `accelerator`.|  
|[default_view (membro dati)](#default_view)|Ottiene il valore predefinito `accelerator_view` oggetto che è associato il `accelerator`.|  
|[Description (membro dati)](#description)|Ottiene una breve descrizione del `accelerator` dispositivo.|  
|[device_path (membro dati)](#device_path)|Ottiene il percorso del dispositivo.|  
|[direct3d_ref (membro dati)](#direct3d_ref)|Ottiene una stringa costante per un riferimento di Direct3D `accelerator`.|  
|[direct3d_warp (membro dati)](#direct3d_warp)|Ottiene la stringa costante per un `accelerator` che è possibile utilizzare per l'esecuzione di codice C++ AMP nelle CPU multicore che utilizzano Streaming SIMD Extensions (SSE).|  
|[has_display (membro dati)](#has_display)|Ottiene un valore booleano che indica se il `accelerator` è collegato a una visualizzazione.|  
|[is_debug (membro dati)](#is_debug)|Indica se il `accelerator` dispone del livello DEBUG abilitato per la segnalazione errori estesa.|  
|[is_emulated (membro dati)](#is_emulated)|Indica se il `accelerator` viene emulata.|  
|[supports_cpu_shared_memory (membro dati)](#supports_cpu_shared_memory)|Indica se il `accelerator` supporta la memoria condivisa.|  
|[supports_double_precision (membro dati)](#supports_double_precision)|Indica se l'acceleratore supporta matematica e precisione doppia.|  
|[supports_limited_double_precision (membro dati)](#supports_limited_double_precision)|Indica se il tasto di scelta rapida un supporto limitato per matematica e precisione doppia.|  
|[versione (membro dati)](#version)|Ottiene la versione di `accelerator`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `accelerator`  
  
## <a name="remarks"></a>Note  
 Un tasto di scelta rapida è una funzionalità hardware che è ottimizzata per l'elaborazione dati in parallelo. Un tasto di scelta rapida è spesso una GPU, ma può anche essere un'entità sul lato host virtuale, ad esempio un dispositivo di riferimento di DirectX, una distorsione (un dispositivo CPU lato accelerated tramite istruzioni SSE) o la CPU.  
  
 È possibile costruire un `accelerator` oggetto enumerando i dispositivi disponibili, o tramite il recupero del dispositivo predefinito, il dispositivo di riferimento o il dispositivo WARP.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amprt.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="dtor"></a></a> ~ accelerator 

 Elimina il `accelerator` oggetto.  
  
```  
~accelerator();
```  
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="a-namectora-accelerator"></a><a name="ctor"></a>tasti di scelta rapida 

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
 Tasti di scelta rapida per copiare.  
  
##  <a name="a-namecpuacceleratora-cpuaccelerator"></a><a name="cpu_accelerator"></a>cpu_accelerator 

 Ottiene una stringa costante per l'acceleratore della CPU.  
  
```  
static const wchar_t cpu_accelerator[];  
```  
  
##  <a name="a-namecreateviewa-createview"></a><a name="create_view"></a>CREATE_VIEW 

 Crea e restituisce un `accelerator_view` oggetto questo acceleratore, utilizzando la modalità di Accodamento messaggi specificata. Quando la modalità di accodamento non è specificata, il nuovo `accelerator_view` utilizza il [queuing_mode::immediate](concurrency-namespace-enums-amp.md#queuing_mode) modalità di Accodamento.  
  
```  
accelerator_view create_view(queuing_mode qmode = queuing_mode_automatic);
```  
  
### <a name="parameters"></a>Parametri  
 `qmode`  
 La modalità di Accodamento.  
  
### <a name="return-value"></a>Valore restituito  
 Un nuovo `accelerator_view` oggetto questo acceleratore, utilizzando la modalità di Accodamento messaggi specificata.  
  
##  <a name="a-namededicatedmemorya-dedicatedmemory"></a><a name="dedicated_memory"></a>dedicated_memory 

 Ottiene la quantità di memoria dedicata per il `accelerator`, espressa in kilobyte.  
  
```  
__declspec(property(get= get_dedicated_memory)) size_t dedicated_memory;  
```  
  
##  <a name="a-namedefaultacceleratora-defaultaccelerator"></a><a name="default_accelerator"></a>default_accelerator 

 Ottiene una stringa costante per il valore predefinito `accelerator`.  
  
```  
static const wchar_t default_accelerator[];  
```  
  
##  <a name="a-namedefaultcpuaccesstypea-defaultcpuaccesstype"></a><a name="default_cpu_access_type"></a>default_cpu_access_type 

 Il valore predefinito della cpu [access_type](concurrency-namespace-enums-amp.md#access_type)per le matrici e allocazioni di memoria implicite effettuate su questa questo `accelerator`.  
  
```  
__declspec(property(get= get_default_cpu_access_type)) access_type default_cpu_access_type;  
```  
  
##  <a name="a-namedefaultviewa-defaultview"></a><a name="default_view"></a>default_view 

 Ottiene la visualizzazione di tasti di scelta rapida predefinito che è associata il `accelerator`.  
  
```  
__declspec(property(get= get_default_view)) accelerator_view default_view;  
```  
  
##  <a name="a-namedescriptiona-description"></a><a name="description"></a>Descrizione 

 Ottiene una breve descrizione del `accelerator` dispositivo.  
  
```  
__declspec(property(get= get_description)) std::wstring description;  
```  
  
##  <a name="a-namedevicepatha-devicepath"></a><a name="device_path"></a>device_path 

 Ottiene il percorso del tasto di scelta rapida. Il percorso è univoco nel sistema.  
  
```  
__declspec(property(get= get_device_path)) std::wstring device_path;  
```  
  
##  <a name="a-namedirect3drefa-direct3dref"></a><a name="direct3d_ref"></a>direct3d_ref 

 Ottiene una stringa costante per un tasto di scelta rapida riferimenti Direct3D.  
  
```  
static const wchar_t direct3d_ref[];  
```  
  
##  <a name="a-namedirect3dwarpa-direct3dwarp"></a><a name="direct3d_warp"></a>direct3d_warp 

 Ottiene la stringa costante per un `accelerator` che è possibile utilizzare per l'esecuzione di codice C++ AMP nelle CPU multicore mediante Streaming SIMD Extensions (SSE).  
  
```  
static const wchar_t direct3d_warp[];  
```  
  
##  <a name="a-namegetalla-getall"></a><a name="get_all"></a>get_all 

 Restituisce un vettore di `accelerator` gli oggetti che rappresentano tutti gli acceleratori disponibili.  
  
```  
static inline std::vector<accelerator> get_all();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il vettore dei tasti di scelta rapida disponibili  
  
##  <a name="a-namegetautoselectionviewa-getautoselectionview"></a><a name="get_auto_selection_view"></a>get_auto_selection_view 

 Restituisce il accelerator_view di selezione automatica, che, quando specificato come i risultati di destinazione parallel_for_each accelerator_view la destinazione per l'esecuzione il kernel parallel_for_each devono essere selezionati automaticamente dal runtime. Per altri scopi, le accelerator_view restituito da questo metodo è identico accelerator_view l'impostazione predefinita dell'acceleratore predefinito  
  
```  
static accelerator_view __cdecl get_auto_selection_view();
```  
  
### <a name="return-value"></a>Valore restituito  
 Accelerator_view la selezione automatica.  
  
##  <a name="a-namegetdedicatedmemorya-getdedicatedmemory"></a><a name="get_dedicated_memory"></a>get_dedicated_memory 

 Restituisce la quantità di memoria dedicata per il `accelerator`, espressa in kilobyte.  
  
```  
size_t get_dedicated_memory() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 La memoria dedicata per il `accelerator`, espressa in kilobyte.  
  
##  <a name="a-namegetdefaultcpuaccesstypea-getdefaultcpuaccesstype"></a><a name="get_default_cpu_access_type"></a>get_default_cpu_access_type 

 Ottiene il access_type cpu predefinito per i buffer creati in questo tasto di scelta rapida  
  
```  
access_type get_default_cpu_access_type() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Access_type di cpu predefinito per i buffer creato in questo tasto di scelta rapida.  
  
##  <a name="a-namegetdefaultviewa-getdefaultview"></a><a name="get_default_view"></a>get_default_view 

 Restituisce il valore predefinito `accelerator_view` oggetto che è associato il `accelerator`.  
  
```  
accelerator_view get_default_view() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore predefinito `accelerator_view` oggetto che è associato il `accelerator`.  
  
##  <a name="a-namegetdescriptiona-getdescription"></a><a name="get_description"></a>get_Description 

 Restituisce una breve descrizione del `accelerator` dispositivo.  
  
```  
std::wstring get_description() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Una breve descrizione del `accelerator` dispositivo.  
  
##  <a name="a-namegetdevicepatha-getdevicepath"></a><a name="get_device_path"></a>get_device_path 

 Restituisce il percorso del tasto di scelta rapida. Il percorso è univoco nel sistema.  
  
```  
std::wstring get_device_path() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Il percorso dell'istanza a livello di sistema univoco del dispositivo.  
  
##  <a name="a-namegethasdisplaya-gethasdisplay"></a><a name="get_has_display"></a>get_has_display 

 Restituisce un valore booleano che indica se il `accelerator` eseguire l'output in una visualizzazione.  
  
```  
bool get_has_display() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il `accelerator` eseguire l'output in una visualizzazione; in caso contrario, `false`.  
  
##  <a name="a-namegetisdebuga-getisdebug"></a><a name="get_is_debug"></a>get_is_debug 

 Determina se il `accelerator` dispone del livello DEBUG abilitato per la segnalazione errori estesa.  
  
```  
bool get_is_debug() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il `accelerator` dispone del livello DEBUG abilitato per la segnalazione errori estesa. In caso contrario, `false`.  
  
##  <a name="a-namegetisemulateda-getisemulated"></a><a name="get_is_emulated"></a>get_is_emulated 

 Determina se il `accelerator` viene emulata.  
  
```  
bool get_is_emulated() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il `accelerator` viene emulata. In caso contrario, `false`.  
  
##  <a name="a-namegetsupportscpusharedmemorya-getsupportscpusharedmemory"></a><a name="get_supports_cpu_shared_memory"></a>get_supports_cpu_shared_memory 

 Restituisce un valore booleano che indica se l'acceleratore supporta memoria accessibile sia dal tasto di scelta rapida e l'utilizzo della CPU.  
  
```  
bool get_supports_cpu_shared_memory() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il tasto di scelta rapida supporta la memoria condivisa della CPU. in caso contrario, `false`.  
  
##  <a name="a-namegetsupportsdoubleprecisiona-getsupportsdoubleprecision"></a><a name="get_supports_double_precision"></a>get_supports_double_precision 

 Restituisce un valore booleano che indica se l'acceleratore supporta double matematica di precisione, tra cui fused multiply aggiungere (FMA), divisione, reciproco e cast tra `int` e `double`.  
  
```  
bool get_supports_double_precision() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il tasto di scelta rapida supporta double matematiche precisione; in caso contrario, `false`.  
  
##  <a name="a-namegetsupportslimiteddoubleprecisiona-getsupportslimiteddoubleprecision"></a><a name="get_supports_limited_double_precision"></a>get_supports_limited_double_precision 

 Restituisce un valore booleano che indica se il tasto di scelta rapida un supporto limitato per double matematica di precisione. Se il tasto di scelta rapida è solo un supporto limitato, quindi fused multiply aggiungere (FMA), divisione, reciproco e cast tra `int` e `double` non sono supportati.  
  
```  
bool get_supports_limited_double_precision() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il tasto di scelta rapida un supporto limitato per double matematiche precisione; in caso contrario, `false`.  
  
##  <a name="a-namegetversiona-getversion"></a><a name="get_version"></a>get_version 

 Restituisce la versione di `accelerator`.  
  
```  
unsigned int get_version() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 La versione di `accelerator`.  
  
##  <a name="a-namehasdisplaya-hasdisplay"></a><a name="has_display"></a>has_display 

 Ottiene un valore booleano che indica se il `accelerator` eseguire l'output in una visualizzazione.  
  
```  
__declspec(property(get= get_has_display)) bool has_display;  
```  
  
##  <a name="a-nameisdebuga-isdebug"></a><a name="is_debug"></a>is_debug 

 Ottiene un valore booleano che indica se il `accelerator` dispone del livello DEBUG abilitato per la segnalazione errori estesa.  
  
```  
__declspec(property(get= get_is_debug)) bool is_debug;  
```  
  
##  <a name="a-nameisemulateda-isemulated"></a><a name="is_emulated"></a>is_emulated 

 Ottiene un valore booleano che indica se il `accelerator` viene emulata.  
  
```  
__declspec(property(get= get_is_emulated)) bool is_emulated;  
```  
  
##  <a name="a-nameoperatorneqa-operator"></a><a name="operator_neq"></a>operatore! = 

 Confronta questa `accelerator` oggetto con un altro e restituisce `false` se sono uguali; in caso contrario, restituisce `true`.  
  
```  
bool operator!= (const accelerator& _Other) const;

 
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator` oggetto da confrontare con questo.  
  
### <a name="return-value"></a>Valore restituito  
 `false`Se i due `accelerator` oggetti sono uguali; in caso contrario, `true`.  
  
##  <a name="a-nameoperatoreqa-operator"></a><a name="operator_eq"></a>operatore = 

 Copia il contenuto dell'oggetto specificato `accelerator` a questo oggetto.  
  
```  
accelerator& operator= (const accelerator& _Other);
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator` oggetto da copiare.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a questo `accelerator` oggetto.  
  
##  <a name="a-nameoperatoreqeqa-operator"></a><a name="operator_eq_eq"></a>operatore = = 

 Confronta questa `accelerator` oggetto con un altro e restituisce `true` se sono uguali; in caso contrario, restituisce `false`.  
  
```  
bool operator== (const accelerator& _Other) const;

 
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator` oggetto da confrontare con questo.  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se l'altro `accelerator` è uguale a questo oggetto `accelerator` oggetto; in caso contrario, `false`.  
  
##  <a name="a-namesetdefaulta-setdefault"></a><a name="set_default"></a>set_default 

 Imposta i tasti di scelta rapida predefinito da utilizzare per qualsiasi operazione che utilizza implicitamente l'acceleratore predefinito. Questo metodo ha esito positivo solo se il tasto di scelta rapida predefiniti selezionati runtime non è già stato utilizzato in un'operazione che utilizza implicitamente l'acceleratore predefinito  
  
```  
static inline bool set_default(std::wstring _Path);
```  
  
### <a name="parameters"></a>Parametri  
 `_Path`  
 Il percorso per i tasti di scelta rapida.  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se la chiamata ha esito positivo in impostazione acceleratore predefinito. In caso contrario, `false`.  
  
##  <a name="a-namesetdefaultcpuaccesstypea-setdefaultcpuaccesstype"></a><a name="set_default_cpu_access_type"></a>set_default_cpu_access_type 

 Impostare il access_type cpu predefinito per le matrici create in questo tasto di scelta rapida o per le allocazioni di memoria implicite come parte di array_views accedervi su questo questo tasto di scelta rapida. Questo metodo ha esito positivo solo se default_cpu_access_type per i tasti di scelta rapida non è già stato sottoposto a override da una precedente chiamata a questo metodo e il default_cpu_access_type runtime selezionato per questo tasto di scelta rapida e non ancora utilizzato per allocare una matrice o per un'allocazione di memoria implicita backup un array_view accede questo tasto di scelta rapida.  
  
```  
bool set_default_cpu_access_type(access_type _Default_cpu_access_type);
```  
  
### <a name="parameters"></a>Parametri  
 `_Default_cpu_access_type`  
 Access_type di cpu predefinito da utilizzare per le allocazioni di memoria di matrice/array_view su questo tasto di scelta rapida.  
  
### <a name="return-value"></a>Valore restituito  
 Valore booleano che indica se il access_type cpu predefinito per l'acceleratore è stato impostato correttamente.  
  
##  <a name="a-namesupportscpusharedmemorya-supportscpusharedmemory"></a><a name="supports_cpu_shared_memory"></a>supports_cpu_shared_memory 

 Ottiene un valore booleano che indica se il `accelerator` supporta la memoria condivisa.  
  
```  
__declspec(property(get= get_supports_cpu_shared_memory)) bool supports_cpu_shared_memory;  
```  
  
##  <a name="a-namesupportsdoubleprecisiona-supportsdoubleprecision"></a><a name="supports_double_precision"></a>supports_double_precision 

 Ottiene un valore booleano che indica se l'acceleratore supporta matematica a precisione doppia.  
  
```  
__declspec(property(get= get_supports_double_precision)) bool supports_double_precision;  
```  
  
##  <a name="a-namesupportslimiteddoubleprecisiona-supportslimiteddoubleprecision"></a><a name="supports_limited_double_precision"></a>supports_limited_double_precision 

 Ottiene un valore booleano che indica se il tasto di scelta rapida un supporto limitato per double matematica di precisione. Se il tasto di scelta rapida è solo un supporto limitato, quindi fused multiply aggiungere (FMA), divisione, reciproco e cast tra `int` e `double` non sono supportati.  
  
```  
__declspec(property(get= get_supports_limited_double_precision)) bool supports_limited_double_precision;  
```  
  
##  <a name="a-nameversiona-version"></a><a name="version"></a>Versione 

 Ottiene la versione di `accelerator`.  
  
```  
__declspec(property(get= get_version)) unsigned int version;  
```  
  
##  <a name="dtor"></a></a> ~ accelerator_view 

 Elimina il [accelerator_view](accelerator-view-class.md) oggetto.  
  
```  
~accelerator_view();
```  
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="a-nameacceleratora-accelerator"></a><a name="accelerator"></a>tasti di scelta rapida 

 Ottiene il `accelerator` dell'oggetto per il [accelerator_view](accelerator-view-class.md) oggetto.  
  
```  
__declspec(property(get= get_accelerator)) Concurrency::accelerator accelerator;  
```  
  
##  <a name="a-namectora-acceleratorview"></a><a name="ctor"></a>accelerator_view 

 Inizializza una nuova istanza di [accelerator_view](accelerator-view-class.md) classe copiando un oggetto esistente `accelerator_view` oggetto.  
  
```  
accelerator_view(const accelerator_view& _Other);
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator_view` oggetto da copiare.  
  
##  <a name="a-namecreatemarkera-createmarker"></a><a name="create_marker"></a>create_marker 

 Restituisce un futuro per registrare il completamento di tutti i comandi inviati finora a questo `accelerator_view` oggetto.  
  
```  
concurrency::completion_future create_marker();
```  
  
### <a name="return-value"></a>Valore restituito  
 Una future tenga traccia del completamento di tutti i comandi inviati finora a questo `accelerator_view` oggetto.  
  
##  <a name="a-nameflusha-flush"></a><a name="flush"></a>scaricamento 

 Invia tutti i comandi in sospeso in coda per il [accelerator_view](accelerator-view-class.md) oggetto per il tasto di scelta rapida per l'esecuzione.  
  
```  
void flush();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `void`.  
  
##  <a name="a-namegetacceleratora-getaccelerator"></a><a name="get_accelerator"></a>get_accelerator 

 Restituisce il `accelerator` dell'oggetto per il [accelerator_view](accelerator-view-class.md) oggetto.  
  
```  
accelerator get_accelerator() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Il `accelerator` dell'oggetto per il `accelerator_view` oggetto.  
  
##  <a name="a-namegetisautoselectiona-getisautoselection"></a><a name="get_is_auto_selection"></a>get_is_auto_selection 

 Restituisce un valore booleano che indica se il runtime verrà selezionato automaticamente un tasto di scelta rapida appropriato quando il accelerator_view viene passato a un [parallel_for_each](../../../parallel/concrt/reference/concurrency-namespace-functions.md#parallel_for_each).  
  
```  
bool get_is_auto_selection() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `true`Se il runtime verrà selezionato automaticamente un acceleratore appropriato; in caso contrario, `false`.  
  
##  <a name="a-namegetisdebuga-getisdebug"></a><a name="get_is_debug"></a>get_is_debug 

 Restituisce un valore booleano che indica se il [accelerator_view](accelerator-view-class.md) oggetto dispone del livello DEBUG abilitato per la segnalazione errori estesa.  
  
```  
bool get_is_debug() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore booleano che indica se il `accelerator_view` oggetto dispone del livello DEBUG abilitato per la segnalazione errori estesa.  
  
##  <a name="a-namegetqueuingmodea-getqueuingmode"></a><a name="get_queuing_mode"></a>get_queuing_mode 

 Restituisce la modalità di Accodamento per il [accelerator_view](accelerator-view-class.md) oggetto.  
  
```  
queuing_mode get_queuing_mode() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 La modalità di Accodamento per il `accelerator_view` oggetto.  
  
##  <a name="a-namegetversiona-getversion"></a><a name="get_version"></a>get_version 

 Restituisce la versione di [accelerator_view](accelerator-view-class.md).  
  
```  
unsigned int get_version() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 La versione di `accelerator_view`.  
  
##  <a name="a-nameisautoselectiona-isautoselection"></a><a name="is_auto_selection"></a>is_auto_selection 

 Ottiene un valore booleano che indica se il runtime verrà selezionato automaticamente un tasto di scelta rapida appropriato quando il accelerator_view viene passato a un [parallel_for_each](../../../parallel/concrt/reference/concurrency-namespace-functions.md#parallel_for_each).  
  
```  
__declspec(property(get= get_is_auto_selection)) bool is_auto_selection;  
```  
  
##  <a name="a-nameisdebuga-isdebug"></a><a name="is_debug"></a>is_debug 

 Ottiene un valore booleano che indica se il [accelerator_view](accelerator-view-class.md) oggetto dispone del livello DEBUG abilitato per la segnalazione errori estesa.  
  
```  
__declspec(property(get= get_is_debug)) bool is_debug;  
```  
  
##  <a name="a-nameoperatorneqa-operator"></a><a name="operator_neq"></a>operatore! = 

 Confronta questa [accelerator_view](accelerator-view-class.md) oggetto con un altro e restituisce `false` se sono uguali; in caso contrario, restituisce `true`.  
  
```  
bool operator!= (const accelerator_view& _Other) const;

 
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator_view` oggetto da confrontare con questo.  
  
### <a name="return-value"></a>Valore restituito  
 `false` se i due oggetti sono uguali; in caso contrario, `true`.  
  
##  <a name="a-nameoperatoreqa-operator"></a><a name="operator_eq"></a>operatore = 

 Copia il contenuto dell'oggetto specificato [accelerator_view](accelerator-view-class.md) specificato in questo oggetto.  
  
```  
accelerator_view& operator= (const accelerator_view& _Other);
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator_view` oggetto da copiare.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a modificati `accelerator_view` oggetto.  
  
##  <a name="a-nameoperatoreqeqa-operator"></a><a name="operator_eq_eq"></a>operatore = = 

 Confronta questa [accelerator_view](accelerator-view-class.md) oggetto con un altro e restituisce `true` se sono uguali; in caso contrario, restituisce `false`.  
  
```  
bool operator== (const accelerator_view& _Other) const;

 
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator_view` oggetto da confrontare con questo.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se i due oggetti sono uguali; in caso contrario, `false`.  
  
##  <a name="a-namequeuingmodea-queuingmode"></a><a name="queuing_mode"></a>queuing_mode 

 Ottiene la modalità di Accodamento per il [accelerator_view](accelerator-view-class.md) oggetto.  
  
```  
__declspec(property(get= get_queuing_mode)) Concurrency::queuing_mode queuing_mode;  
```  
  
##  <a name="a-nameversiona-version"></a><a name="version"></a>Versione 

 Ottiene la versione di [accelerator_view](accelerator-view-class.md).  
  
```  
__declspec(property(get= get_version)) unsigned int version;  
```  
  
##  <a name="a-namewaita-wait"></a><a name="wait"></a>attesa 

 Attende che tutti i comandi inviati per il [accelerator_view](accelerator-view-class.md) oggetto alla fine.  
  
```  
void wait();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `void`.  
  
## <a name="see-also"></a>Vedere anche  
 [Concorrenza Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)


---
title: "Classe accelerator | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amprt/Concurrency::accelerator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "accelerator_class"
ms.assetid: 37eed593-cf87-4611-9cdc-e98df6c2377a
caps.latest.revision: 29
caps.handback.revision: 29
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classe accelerator
[!INCLUDE[vs2017banner](../../../assembler/inline/includes/vs2017banner.md)]

Un tasto di scelta rapida è una funzionalità hardware che è ottimizzata per l'elaborazione dati in parallelo. Un tasto di scelta rapida può essere un dispositivo collegato a un bus PCIe (ad esempio una GPU), o potrebbe essere un'istruzione estesa impostato sulla CPU principale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class accelerator;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Costruttore Accelerator:: Accelerator](#accelerator__accelerator_constructor)|Inizializza una nuova istanza della classe `accelerator`.|  
|[tasti di scelta rapida:: ~ accelerator distruttore](#accelerator___dtoraccelerator_destructor)|Elimina il `accelerator` oggetto.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Metodo Accelerator:: CREATE_VIEW](#accelerator__create_view_method)|Crea e restituisce un `accelerator_view` oggetto questo tasto di scelta rapida.|  
|[Metodo Accelerator:: get_all](#accelerator__get_all_method)|Restituisce un vettore di `accelerator` gli oggetti che rappresentano tutti gli acceleratori disponibili.|  
|[Metodo Accelerator:: get_auto_selection_view](#accelerator__get_auto_selection_view_method)|Restituisce la selezione automatica `accelerator_view`.|  
|[Metodo Accelerator:: get_dedicated_memory](#accelerator__get_dedicated_memory_method)|Restituisce la quantità di memoria dedicata per il `accelerator`, espressa in kilobyte.|  
|[Metodo Accelerator:: get_default_cpu_access_type](#accelerator__get_default_cpu_access_type_method)|Restituisce il valore predefinito [access_type](../Topic/concurrency%20namespace%20enums.md#access_type) per i buffer creati in questo tasto di scelta rapida.|  
|[Metodo Accelerator:: get_default_view](#accelerator__get_default_view_method)|Restituisce il valore predefinito `accelerator_view` cui sono associato il `accelerator`.|  
|[Metodo Accelerator:: get_Description](#accelerator__get_description_method)|Restituisce una breve descrizione del `accelerator` dispositivo.|  
|[Metodo Accelerator:: get_device_path](#accelerator__get_device_path_method)|Restituisce il percorso del dispositivo.|  
|[Metodo Accelerator:: get_has_display](#accelerator__get_has_display_method)|Determina se il `accelerator` è collegato a una visualizzazione.|  
|[Metodo Accelerator:: get_is_debug](#accelerator__get_is_debug_method)|Determina se il `accelerator` dispone del livello DEBUG abilitato per la segnalazione errori estesa.|  
|[Metodo Accelerator:: get_is_emulated](#accelerator__get_is_emulated_method)|Determina se il `accelerator` viene emulata.|  
|[Metodo Accelerator:: get_supports_cpu_shared_memory](#accelerator__get_supports_cpu_shared_memory_method)|Determina se il `accelerator` supporta la memoria condivisa|  
|[Metodo Accelerator:: get_supports_double_precision](#accelerator__get_supports_double_precision_method)|Determina se il `accelerator` è collegato a una visualizzazione.|  
|[Metodo Accelerator:: get_supports_limited_double_precision](#accelerator__get_supports_limited_double_precision_method)|Determina se il `accelerator` offre supporto limitato per matematica e precisione doppia.|  
|[Metodo Accelerator:: get_version](#accelerator__get_version_method)|Restituisce la versione di `accelerator`.|  
|[Metodo Accelerator:: set_default](#accelerator__set_default_method)|Restituisce il percorso dell'acceleratore predefinito.|  
|[Metodo Accelerator:: set_default_cpu_access_type](#accelerator__set_default_cpu_access_type_method)|Imposta l'utilizzo della CPU predefinito [access_type](../Topic/concurrency%20namespace%20enums.md#access_type) per le matrici e allocazioni di memoria implicite effettuate su questa `accelerator`.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[operatore Accelerator::! = (operatore)](#accelerator__operator_neq_operator)|Confronta questo `accelerator` oggetto con un altro e restituisce `false` se sono uguali; in caso contrario, restituisce `true`.|  
|[operatore Accelerator:: Operator =](#accelerator__operator_eq_operator)|Copia il contenuto dell'oggetto specificato `accelerator` a questo oggetto.|  
|[operatore Accelerator:: Operator = =](#accelerator__operator_eq_eq_operator)|Confronta questo `accelerator` oggetto con un altro e restituisce `true` se sono uguali; in caso contrario, restituisce `false`.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Membro dati Accelerator:: cpu_accelerator](#accelerator__cpu_accelerator_data_member)|Ottiene una stringa costante per la CPU `accelerator`.|  
|[Membro dati Accelerator:: dedicated_memory](#accelerator__dedicated_memory_data_member)|Ottiene la quantità di memoria dedicata per il `accelerator`, espressa in kilobyte.|  
|[Membro dati Accelerator:: default_accelerator](#accelerator__default_accelerator_data_member)|Ottiene una stringa costante per il valore predefinito `accelerator`.|  
|[Membro dati Accelerator:: default_cpu_access_type](#accelerator__default_cpu_access_type_data_member)|Ottiene o imposta l'utilizzo della CPU predefinito [access_type](../Topic/concurrency%20namespace%20enums.md#access_type) per le matrici e allocazioni di memoria implicite effettuate su questa `accelerator`.|  
|[Membro dati Accelerator:: default_view](#accelerator__default_view_data_member)|Ottiene il valore predefinito `accelerator_view` cui sono associato il `accelerator`.|  
|[Membro dati Accelerator:: Description](#accelerator__description_data_member)|Ottiene una breve descrizione del `accelerator` dispositivo.|  
|[Membro dati Accelerator:: device_path](#accelerator__device_path_data_member)|Ottiene il percorso del dispositivo.|  
|[Membro dati Accelerator:: direct3d_ref](#accelerator__direct3d_ref_data_member)|Ottiene una stringa costante per un riferimento di Direct3D `accelerator`.|  
|[Membro dati Accelerator:: direct3d_warp](#accelerator__direct3d_warp_data_member)|Ottiene la stringa costante per un [accelerator](../../../parallel/amp/reference/accelerator-class.md) che è possibile utilizzare per l'esecuzione di codice C++ AMP nelle CPU multicore che utilizzano Streaming SIMD Extensions (SSE).|  
|[Membro dati Accelerator:: has_display](#accelerator__has_display_data_member)|Ottiene un valore booleano che indica se il `accelerator` è collegato a una visualizzazione.|  
|[Membro dati Accelerator:: is_debug](#accelerator__is_debug_data_member)|Indica se il `accelerator` dispone del livello DEBUG abilitato per la segnalazione errori estesa.|  
|[Membro dati Accelerator:: is_emulated](#accelerator__is_emulated_data_member)|Indica se il `accelerator` viene emulata.|  
|[Membro dati Accelerator:: supports_cpu_shared_memory](#accelerator__supports_cpu_shared_memory_data_member)|Indica se il `accelerator` supporta la memoria condivisa.|  
|[Membro dati Accelerator:: supports_double_precision](#accelerator__supports_double_precision_data_member)|Indica se l'acceleratore supporta matematica e precisione doppia.|  
|[Membro dati Accelerator:: supports_limited_double_precision](#accelerator__supports_limited_double_precision_data_member)|Indica se il tasto di scelta rapida un supporto limitato per matematica e precisione doppia.|  
|[Membro dati Accelerator:: Version](#accelerator__version_data_member)|Ottiene la versione di `accelerator`.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `accelerator`  
  
## <a name="remarks"></a>Note  
 Un tasto di scelta rapida è una funzionalità hardware che è ottimizzata per l'elaborazione dati in parallelo. Un tasto di scelta rapida è spesso una GPU, ma può anche essere un'entità sul lato host virtuale, ad esempio un dispositivo di RIFERIMENTO di DirectX, una DISTORSIONE (un dispositivo CPU lato accelerated tramite istruzioni SSE) o la CPU.  
  
 È possibile costruire un `accelerator` oggetto enumerando i dispositivi disponibili, o tramite il recupero del dispositivo predefinito, il dispositivo di riferimento o il dispositivo WARP.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** amprt.h  
  
 **Spazio dei nomi:** Concurrency  
  
##  <a name="a-nameacceleratordtoracceleratordestructora-acceleratoraccelerator-destructor"></a><a name="accelerator___dtoraccelerator_destructor"></a>  tasti di scelta rapida:: ~ accelerator distruttore  
 Elimina il [accelerator](../../../parallel/amp/reference/accelerator-class.md) oggetto.  
  
```  
~accelerator();
```  
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="a-nameacceleratoracceleratorconstructora-acceleratoraccelerator-constructor"></a><a name="accelerator__accelerator_constructor"></a>  Costruttore Accelerator:: Accelerator  
 Inizializza una nuova istanza di [accelerator_class](../../../parallel/amp/reference/accelerator-class.md).  
  
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
  
##  <a name="a-nameacceleratorcpuacceleratordatamembera-acceleratorcpuaccelerator-data-member"></a><a name="accelerator__cpu_accelerator_data_member"></a>  Membro dati Accelerator:: cpu_accelerator  
 Ottiene una stringa costante per l'acceleratore della CPU.  
  
```  
static const wchar_t cpu_accelerator[];  
```  
  
##  <a name="a-nameacceleratorcreateviewmethoda-acceleratorcreateview-method"></a><a name="accelerator__create_view_method"></a>  Metodo Accelerator:: CREATE_VIEW  
 Crea e restituisce un `accelerator_view` oggetto questo acceleratore, utilizzando la modalità di Accodamento messaggi specificata. Quando la modalità di accodamento non è specificata, il nuovo `accelerator_view` utilizza il [queuing_mode::immediate](../Topic/concurrency%20namespace%20enums.md#queuing_mode) modalità di Accodamento.  
  
```  
accelerator_view create_view(queuing_mode qmode = queuing_mode_automatic);
```  
  
### <a name="parameters"></a>Parametri  
 `qmode`  
 La modalità di Accodamento.  
  
### <a name="return-value"></a>Valore restituito  
 Un nuovo `accelerator_view` oggetto questo acceleratore, utilizzando la modalità di Accodamento messaggi specificata.  
  
##  <a name="a-nameacceleratordedicatedmemorydatamembera-acceleratordedicatedmemory-data-member"></a><a name="accelerator__dedicated_memory_data_member"></a>  Membro dati Accelerator:: dedicated_memory  
 Ottiene la quantità di memoria dedicata per il [accelerator](../../../parallel/amp/reference/accelerator-class.md), espressa in kilobyte.  
  
```  
__declspec(property(get= get_dedicated_memory)) size_t dedicated_memory;  
```  
  
##  <a name="a-nameacceleratordefaultacceleratordatamembera-acceleratordefaultaccelerator-data-member"></a><a name="accelerator__default_accelerator_data_member"></a>  Membro dati Accelerator:: default_accelerator  
 Ottiene una stringa costante per il valore predefinito [accelerator](../../../parallel/amp/reference/accelerator-class.md).  
  
```  
static const wchar_t default_accelerator[];  
```  
  
##  <a name="a-nameacceleratordefaultcpuaccesstypedatamembera-acceleratordefaultcpuaccesstype-data-member"></a><a name="accelerator__default_cpu_access_type_data_member"></a>  Membro dati Accelerator:: default_cpu_access_type  
 Il valore predefinito della cpu [access_type](../Topic/concurrency%20namespace%20enums.md#access_type) per le matrici e allocazioni di memoria implicite effettuate su questa questo `accelerator`.  
  
```  
__declspec(property(get= get_default_cpu_access_type)) access_type default_cpu_access_type;  
```  
  
##  <a name="a-nameacceleratordefaultviewdatamembera-acceleratordefaultview-data-member"></a><a name="accelerator__default_view_data_member"></a>  Membro dati Accelerator:: default_view  
 Ottiene la visualizzazione di tasti di scelta rapida predefinito che è associata il [accelerator](../../../parallel/amp/reference/accelerator-class.md).  
  
```  
__declspec(property(get= get_default_view)) accelerator_view default_view;  
```  
  
##  <a name="a-nameacceleratordescriptiondatamembera-acceleratordescription-data-member"></a><a name="accelerator__description_data_member"></a>  Membro dati Accelerator:: Description  
 Ottiene una breve descrizione del [accelerator](../../../parallel/amp/reference/accelerator-class.md) dispositivo.  
  
```  
__declspec(property(get= get_description)) std::wstring description;  
```  
  
##  <a name="a-nameacceleratordevicepathdatamembera-acceleratordevicepath-data-member"></a><a name="accelerator__device_path_data_member"></a>  Membro dati Accelerator:: device_path  
 Ottiene il percorso del tasto di scelta rapida. Il percorso è univoco nel sistema.  
  
```  
__declspec(property(get= get_device_path)) std::wstring device_path;  
```  
  
##  <a name="a-nameacceleratordirect3drefdatamembera-acceleratordirect3dref-data-member"></a><a name="accelerator__direct3d_ref_data_member"></a>  Membro dati Accelerator:: direct3d_ref  
 Ottiene una stringa costante per un tasto di scelta rapida riferimenti Direct3D.  
  
```  
static const wchar_t direct3d_ref[];  
```  
  
##  <a name="a-nameacceleratordirect3dwarpdatamembera-acceleratordirect3dwarp-data-member"></a><a name="accelerator__direct3d_warp_data_member"></a>  Membro dati Accelerator:: direct3d_warp  
 Ottiene la stringa costante per un [accelerator](../../../parallel/amp/reference/accelerator-class.md) che è possibile utilizzare per l'esecuzione di codice C++ AMP nelle CPU multicore mediante Streaming SIMD Extensions (SSE).  
  
```  
static const wchar_t direct3d_warp[];  
```  
  
##  <a name="a-nameacceleratorgetallmethoda-acceleratorgetall-method"></a><a name="accelerator__get_all_method"></a>  Metodo Accelerator:: get_all  
 Restituisce un vettore di `accelerator` gli oggetti che rappresentano tutti gli acceleratori disponibili.  
  
```  
static inline std::vector<accelerator> get_all();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il vettore dei tasti di scelta rapida disponibili  
  
##  <a name="a-nameacceleratorgetautoselectionviewmethoda-acceleratorgetautoselectionview-method"></a><a name="accelerator__get_auto_selection_view_method"></a>  Metodo Accelerator:: get_auto_selection_view  
 Restituisce il accelerator_view di selezione automatica, che, quando specificato come i risultati di destinazione parallel_for_each accelerator_view la destinazione per l'esecuzione il kernel parallel_for_each devono essere selezionati automaticamente dal runtime. Per altri scopi, le accelerator_view restituito da questo metodo è identico accelerator_view l'impostazione predefinita dell'acceleratore predefinito  
  
```  
static accelerator_view __cdecl get_auto_selection_view();
```  
  
### <a name="return-value"></a>Valore restituito  
 Accelerator_view la selezione automatica.  
  
##  <a name="a-nameacceleratorgetdedicatedmemorymethoda-acceleratorgetdedicatedmemory-method"></a><a name="accelerator__get_dedicated_memory_method"></a>  Metodo Accelerator:: get_dedicated_memory  
 Restituisce la quantità di memoria dedicata per il [accelerator](../../../parallel/amp/reference/accelerator-class.md), espressa in kilobyte.  
  
```  
size_t get_dedicated_memory() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 La memoria dedicata per il `accelerator`, espressa in kilobyte.  
  
##  <a name="a-nameacceleratorgetdefaultcpuaccesstypemethoda-acceleratorgetdefaultcpuaccesstype-method"></a><a name="accelerator__get_default_cpu_access_type_method"></a>  Metodo Accelerator:: get_default_cpu_access_type  
 Ottiene il access_type cpu predefinito per i buffer creati in questo tasto di scelta rapida  
  
```  
access_type get_default_cpu_access_type() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Access_type di cpu predefinito per i buffer creato in questo tasto di scelta rapida.  
  
##  <a name="a-nameacceleratorgetdefaultviewmethoda-acceleratorgetdefaultview-method"></a><a name="accelerator__get_default_view_method"></a>  Metodo Accelerator:: get_default_view  
 Restituisce il valore predefinito `accelerator_view` cui sono associato il [accelerator](../../../parallel/amp/reference/accelerator-class.md).  
  
```  
accelerator_view get_default_view() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Il valore predefinito `accelerator_view` cui sono associato il `accelerator`.  
  
##  <a name="a-nameacceleratorgetdescriptionmethoda-acceleratorgetdescription-method"></a><a name="accelerator__get_description_method"></a>  Metodo Accelerator:: get_Description  
 Restituisce una breve descrizione del [accelerator](../../../parallel/amp/reference/accelerator-class.md) dispositivo.  
  
```  
std::wstring get_description() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Una breve descrizione del `accelerator` dispositivo.  
  
##  <a name="a-nameacceleratorgetdevicepathmethoda-acceleratorgetdevicepath-method"></a><a name="accelerator__get_device_path_method"></a>  Metodo Accelerator:: get_device_path  
 Restituisce il percorso del tasto di scelta rapida. Il percorso è univoco nel sistema.  
  
```  
std::wstring get_device_path() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Il percorso dell'istanza a livello di sistema univoco del dispositivo.  
  
##  <a name="a-nameacceleratorgethasdisplaymethoda-acceleratorgethasdisplay-method"></a><a name="accelerator__get_has_display_method"></a>  Metodo Accelerator:: get_has_display  
 Restituisce un valore booleano che indica se il [accelerator](../../../parallel/amp/reference/accelerator-class.md) eseguire l'output in una visualizzazione.  
  
```  
bool get_has_display() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il `accelerator` eseguire l'output in una visualizzazione; in caso contrario, `false`.  
  
##  <a name="a-nameacceleratorgetisdebugmethoda-acceleratorgetisdebug-method"></a><a name="accelerator__get_is_debug_method"></a>  Metodo Accelerator:: get_is_debug  
 Determina se il [accelerator](../../../parallel/amp/reference/accelerator-class.md) dispone del livello DEBUG abilitato per la segnalazione errori estesa.  
  
```  
bool get_is_debug() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il `accelerator` dispone del livello DEBUG abilitato per la segnalazione errori estesa. In caso contrario, `false`.  
  
##  <a name="a-nameacceleratorgetisemulatedmethoda-acceleratorgetisemulated-method"></a><a name="accelerator__get_is_emulated_method"></a>  Metodo Accelerator:: get_is_emulated  
 Determina se il [accelerator](../../../parallel/amp/reference/accelerator-class.md) viene emulata.  
  
```  
bool get_is_emulated() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il `accelerator` viene emulata. In caso contrario, `false`.  
  
##  <a name="a-nameacceleratorgetsupportscpusharedmemorymethoda-acceleratorgetsupportscpusharedmemory-method"></a><a name="accelerator__get_supports_cpu_shared_memory_method"></a>  Metodo Accelerator:: get_supports_cpu_shared_memory  
 Restituisce un valore booleano che indica se l'acceleratore supporta memoria accessibile sia dal tasto di scelta rapida e l'utilizzo della CPU.  
  
```  
bool get_supports_cpu_shared_memory() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il tasto di scelta rapida supporta la memoria condivisa della CPU. in caso contrario, `false`.  
  
##  <a name="a-nameacceleratorgetsupportsdoubleprecisionmethoda-acceleratorgetsupportsdoubleprecision-method"></a><a name="accelerator__get_supports_double_precision_method"></a>  Metodo Accelerator:: get_supports_double_precision  
 Restituisce un valore booleano che indica se l'acceleratore supporta double matematica di precisione, tra cui fused multiply aggiungere (FMA), divisione, reciproco e cast tra `int` e `double`.  
  
```  
bool get_supports_double_precision() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il tasto di scelta rapida supporta double matematiche precisione; in caso contrario, `false`.  
  
##  <a name="a-nameacceleratorgetsupportslimiteddoubleprecisionmethoda-acceleratorgetsupportslimiteddoubleprecision-method"></a><a name="accelerator__get_supports_limited_double_precision_method"></a>  Metodo Accelerator:: get_supports_limited_double_precision  
 Restituisce un valore booleano che indica se il tasto di scelta rapida un supporto limitato per double matematica di precisione. Se il tasto di scelta rapida è solo un supporto limitato, quindi fused multiply aggiungere (FMA), divisione, reciproco e cast tra `int` e `double` non sono supportati.  
  
```  
bool get_supports_limited_double_precision() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il tasto di scelta rapida un supporto limitato per double matematiche precisione; in caso contrario, `false`.  
  
##  <a name="a-nameacceleratorgetversionmethoda-acceleratorgetversion-method"></a><a name="accelerator__get_version_method"></a>  Metodo Accelerator:: get_version  
 Restituisce la versione di [accelerator](../../../parallel/amp/reference/accelerator-class.md).  
  
```  
unsigned int get_version() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 La versione di `accelerator`.  
  
##  <a name="a-nameacceleratorhasdisplaydatamembera-acceleratorhasdisplay-data-member"></a><a name="accelerator__has_display_data_member"></a>  Membro dati Accelerator:: has_display  
 Ottiene un valore booleano che indica se il [accelerator](../../../parallel/amp/reference/accelerator-class.md) eseguire l'output in una visualizzazione.  
  
```  
__declspec(property(get= get_has_display)) bool has_display;  
```  
  
##  <a name="a-nameacceleratorisdebugdatamembera-acceleratorisdebug-data-member"></a><a name="accelerator__is_debug_data_member"></a>  Membro dati Accelerator:: is_debug  
 Ottiene un valore booleano che indica se il [accelerator](../../../parallel/amp/reference/accelerator-class.md) dispone del livello DEBUG abilitato per la segnalazione errori estesa.  
  
```  
__declspec(property(get= get_is_debug)) bool is_debug;  
```  
  
##  <a name="a-nameacceleratorisemulateddatamembera-acceleratorisemulated-data-member"></a><a name="accelerator__is_emulated_data_member"></a>  Membro dati Accelerator:: is_emulated  
 Ottiene un valore booleano che indica se il [accelerator](../../../parallel/amp/reference/accelerator-class.md) viene emulata.  
  
```  
__declspec(property(get= get_is_emulated)) bool is_emulated;  
```  
  
##  <a name="a-nameacceleratoroperatorneqoperatora-acceleratoroperator-operator"></a><a name="accelerator__operator_neq_operator"></a>  operatore Accelerator::! = (operatore)  
 Confronta questo `accelerator` oggetto con un altro e restituisce `false` se sono uguali; in caso contrario, restituisce `true`.  
  
```  
bool operator!= (const accelerator& _Other) const;

 
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator` oggetto da confrontare con questo.  
  
### <a name="return-value"></a>Valore restituito  
 `false` Se i due `accelerator` oggetti sono uguali; in caso contrario, `true`.  
  
##  <a name="a-nameacceleratoroperatoreqoperatora-acceleratoroperator-operator"></a><a name="accelerator__operator_eq_operator"></a>  operatore Accelerator:: Operator =  
 Copia il contenuto dell'oggetto specificato [accelerator](../../../parallel/amp/reference/accelerator-class.md) a questo oggetto.  
  
```  
accelerator& operator= (const accelerator& _Other);
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator` oggetto da copiare.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a questo `accelerator` oggetto.  
  
##  <a name="a-nameacceleratoroperatoreqeqoperatora-acceleratoroperator-operator"></a><a name="accelerator__operator_eq_eq_operator"></a>  operatore Accelerator:: Operator = =  
 Confronta questo [accelerator](../../../parallel/amp/reference/accelerator-class.md) oggetto con un altro e restituisce `true` se sono uguali; in caso contrario, restituisce `false`.  
  
```  
bool operator== (const accelerator& _Other) const;

 
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator` oggetto da confrontare con questo.  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se l'altro `accelerator` è uguale a questo oggetto `accelerator` dell'oggetto; in caso contrario, `false`.  
  
##  <a name="a-nameacceleratorsetdefaultmethoda-acceleratorsetdefault-method"></a><a name="accelerator__set_default_method"></a>  Metodo Accelerator:: set_default  
 Imposta i tasti di scelta rapida predefinito da utilizzare per qualsiasi operazione che utilizza implicitamente l'acceleratore predefinito. Questo metodo ha esito positivo solo se il tasto di scelta rapida predefiniti selezionati runtime non è già stato utilizzato in un'operazione che utilizza implicitamente l'acceleratore predefinito  
  
```  
static inline bool set_default(std::wstring _Path);
```  
  
### <a name="parameters"></a>Parametri  
 `_Path`  
 Il percorso per i tasti di scelta rapida.  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se la chiamata ha esito positivo in impostazione acceleratore predefinito. In caso contrario, `false`.  
  
##  <a name="a-nameacceleratorsetdefaultcpuaccesstypemethoda-acceleratorsetdefaultcpuaccesstype-method"></a><a name="accelerator__set_default_cpu_access_type_method"></a>  Metodo Accelerator:: set_default_cpu_access_type  
 Impostare il access_type cpu predefinito per le matrici create in questo tasto di scelta rapida o per le allocazioni di memoria implicita come parte di array_views accedervi su questo questo tasto di scelta rapida. Questo metodo ha esito positivo solo se default_cpu_access_type per i tasti di scelta rapida non è già stato sottoposto a override da una precedente chiamata a questo metodo e il default_cpu_access_type runtime selezionato per questo tasto di scelta rapida e non ancora utilizzato per allocare una matrice o per un'allocazione di memoria implicita backup un array_view accede questo tasto di scelta rapida.  
  
```  
bool set_default_cpu_access_type(access_type _Default_cpu_access_type);
```  
  
### <a name="parameters"></a>Parametri  
 `_Default_cpu_access_type`  
 Access_type di cpu predefinito da utilizzare per le allocazioni di memoria di matrice/array_view su questo tasto di scelta rapida.  
  
### <a name="return-value"></a>Valore restituito  
 Valore booleano che indica se il access_type cpu predefinito per l'acceleratore è stato impostato correttamente.  
  
##  <a name="a-nameacceleratorsupportscpusharedmemorydatamembera-acceleratorsupportscpusharedmemory-data-member"></a><a name="accelerator__supports_cpu_shared_memory_data_member"></a>  Membro dati Accelerator:: supports_cpu_shared_memory  
 Ottiene un valore booleano che indica se il `accelerator` supporta la memoria condivisa.  
  
```  
__declspec(property(get= get_supports_cpu_shared_memory)) bool supports_cpu_shared_memory;  
```  
  
##  <a name="a-nameacceleratorsupportsdoubleprecisiondatamembera-acceleratorsupportsdoubleprecision-data-member"></a><a name="accelerator__supports_double_precision_data_member"></a>  Membro dati Accelerator:: supports_double_precision  
 Ottiene un valore booleano che indica se l'acceleratore supporta matematica a precisione doppia.  
  
```  
__declspec(property(get= get_supports_double_precision)) bool supports_double_precision;  
```  
  
##  <a name="a-nameacceleratorsupportslimiteddoubleprecisiondatamembera-acceleratorsupportslimiteddoubleprecision-data-member"></a><a name="accelerator__supports_limited_double_precision_data_member"></a>  Membro dati Accelerator:: supports_limited_double_precision  
 Ottiene un valore booleano che indica se il tasto di scelta rapida un supporto limitato per double matematica di precisione. Se il tasto di scelta rapida è solo un supporto limitato, quindi fused multiply aggiungere (FMA), divisione, reciproco e cast tra `int` e `double` non sono supportati.  
  
```  
__declspec(property(get= get_supports_limited_double_precision)) bool supports_limited_double_precision;  
```  
  
##  <a name="a-nameacceleratorversiondatamembera-acceleratorversion-data-member"></a><a name="accelerator__version_data_member"></a>  Membro dati Accelerator:: Version  
 Ottiene la versione di [accelerator](../../../parallel/amp/reference/accelerator-class.md).  
  
```  
__declspec(property(get= get_version)) unsigned int version;  
```  
  
##  <a name="a-nameacceleratorviewdtoracceleratorviewdestructora-acceleratorviewacceleratorview-destructor"></a><a name="accelerator_view___dtoraccelerator_view_destructor"></a>  accelerator_view:: ~ accelerator_view distruttore  
 Elimina il [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) oggetto.  
  
```  
~accelerator_view();
```  
  
### <a name="return-value"></a>Valore restituito  
  
##  <a name="a-nameacceleratorviewacceleratordatamembera-acceleratorviewaccelerator-data-member"></a><a name="accelerator_view__accelerator_data_member"></a>  Membro dati accelerator_view:: Accelerator  
 Ottiene il [accelerator](../../../parallel/amp/reference/accelerator-class.md) dell'oggetto per il [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) oggetto.  
  
```  
__declspec(property(get= get_accelerator)) Concurrency::accelerator accelerator;  
```  
  
##  <a name="a-nameacceleratorviewacceleratorviewconstructora-acceleratorviewacceleratorview-constructor"></a><a name="accelerator_view__accelerator_view_constructor"></a>  Costruttore accelerator_view:: accelerator_view  
 Inizializza una nuova istanza di [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) classe copiando un oggetto esistente `accelerator_view` oggetto.  
  
```  
accelerator_view(const accelerator_view& _Other);
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator_view` oggetto da copiare.  
  
##  <a name="a-nameacceleratorviewcreatemarkermethoda-acceleratorviewcreatemarker-method"></a><a name="accelerator_view__create_marker_method"></a>  Metodo accelerator_view:: create_marker  
 Restituisce un futuro per registrare il completamento di tutti i comandi inviati finora a questo `accelerator_view` oggetto.  
  
```  
concurrency::completion_future create_marker();
```  
  
### <a name="return-value"></a>Valore restituito  
 Una future tenga traccia del completamento di tutti i comandi inviati finora a questo `accelerator_view` oggetto.  
  
##  <a name="a-nameacceleratorviewflushmethoda-acceleratorviewflush-method"></a><a name="accelerator_view__flush_method"></a>  Metodo accelerator_view:: Flush  
 Invia tutti i comandi in sospeso in coda per il [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) oggetto per il tasto di scelta rapida per l'esecuzione.  
  
```  
void flush();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `void`.  
  
##  <a name="a-nameacceleratorviewgetacceleratormethoda-acceleratorviewgetaccelerator-method"></a><a name="accelerator_view__get_accelerator_method"></a>  Metodo accelerator_view:: get_accelerator  
 Restituisce il [accelerator](../../../parallel/amp/reference/accelerator-class.md) dell'oggetto per il [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) oggetto.  
  
```  
accelerator get_accelerator() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Il `accelerator` dell'oggetto per il `accelerator_view` oggetto.  
  
##  <a name="a-nameacceleratorviewgetisautoselectionmethoda-acceleratorviewgetisautoselection-method"></a><a name="accelerator_view__get_is_auto_selection_method"></a>  Metodo accelerator_view:: get_is_auto_selection  
 Restituisce un valore booleano che indica se il runtime verrà selezionato automaticamente un tasto di scelta rapida appropriato quando il accelerator_view viene passato a un [parallel_for_each](../Topic/concurrency%20namespace%20functions.md#parallel_for_each).  
  
```  
bool get_is_auto_selection() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 `true` Se il runtime verrà selezionato automaticamente un acceleratore appropriato; in caso contrario, `false`.  
  
##  <a name="a-nameacceleratorviewgetisdebugmethoda-acceleratorviewgetisdebug-method"></a><a name="accelerator_view__get_is_debug_method"></a>  Metodo accelerator_view:: get_is_debug  
 Restituisce un valore booleano che indica se il [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) oggetto dispone del livello DEBUG abilitato per la segnalazione errori estesa.  
  
```  
bool get_is_debug() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 Valore booleano che indica se il `accelerator_view` oggetto dispone del livello DEBUG abilitato per la segnalazione errori estesa.  
  
##  <a name="a-nameacceleratorviewgetqueuingmodemethoda-acceleratorviewgetqueuingmode-method"></a><a name="accelerator_view__get_queuing_mode_method"></a>  Metodo accelerator_view:: get_queuing_mode  
 Restituisce la modalità di Accodamento per il [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) oggetto.  
  
```  
queuing_mode get_queuing_mode() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 La modalità di Accodamento per il `accelerator_view` oggetto.  
  
##  <a name="a-nameacceleratorviewgetversionmethoda-acceleratorviewgetversion-method"></a><a name="accelerator_view__get_version_method"></a>  Metodo accelerator_view:: get_version  
 Restituisce la versione di [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md).  
  
```  
unsigned int get_version() const;

 
```  
  
### <a name="return-value"></a>Valore restituito  
 La versione di `accelerator_view`.  
  
##  <a name="a-nameacceleratorviewisautoselectiondatamembera-acceleratorviewisautoselection-data-member"></a><a name="accelerator_view__is_auto_selection_data_member"></a>  Membro dati accelerator_view:: is_auto_selection  
 Ottiene un valore booleano che indica se il runtime verrà selezionato automaticamente un tasto di scelta rapida appropriato quando il accelerator_view viene passato a un [parallel_for_each](concurrency%20namespace%20functions.md#parallel_for_each).  
  
```  
__declspec(property(get= get_is_auto_selection)) bool is_auto_selection;  
```  
  
##  <a name="a-nameacceleratorviewisdebugdatamembera-acceleratorviewisdebug-data-member"></a><a name="accelerator_view__is_debug_data_member"></a>  Membro dati accelerator_view:: is_debug  
 Ottiene un valore booleano che indica se il [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) oggetto dispone del livello DEBUG abilitato per la segnalazione errori estesa.  
  
```  
__declspec(property(get= get_is_debug)) bool is_debug;  
```  
  
##  <a name="a-nameacceleratorviewoperatorneqoperatora-acceleratorviewoperator-operator"></a><a name="accelerator_view__operator_neq_operator"></a>  operatore accelerator_view::! = (operatore)  
 Confronta questa [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) oggetto con un altro e restituisce `false` se sono uguali; in caso contrario, restituisce `true`.  
  
```  
bool operator!= (const accelerator_view& _Other) const;

 
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator_view` oggetto da confrontare con questo.  
  
### <a name="return-value"></a>Valore restituito  
 `false` se i due oggetti sono uguali; in caso contrario, `true`.  
  
##  <a name="a-nameacceleratorviewoperatoreqoperatora-acceleratorviewoperator-operator"></a><a name="accelerator_view__operator_eq_operator"></a>  operatore accelerator_view:: Operator =  
 Copia il contenuto dell'oggetto specificato [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) specificato in questo oggetto.  
  
```  
accelerator_view& operator= (const accelerator_view& _Other);
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator_view` oggetto da copiare.  
  
### <a name="return-value"></a>Valore restituito  
 Un riferimento a modificati `accelerator_view` oggetto.  
  
##  <a name="a-nameacceleratorviewoperatoreqeqoperatora-acceleratorviewoperator-operator"></a><a name="accelerator_view__operator_eq_eq_operator"></a>  operatore accelerator_view:: Operator = =  
 Confronta questa [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) oggetto con un altro e restituisce `true` se sono uguali; in caso contrario, restituisce `false`.  
  
```  
bool operator== (const accelerator_view& _Other) const;

 
```  
  
### <a name="parameters"></a>Parametri  
 `_Other`  
 Il `accelerator_view` oggetto da confrontare con questo.  
  
### <a name="return-value"></a>Valore restituito  
 `true` se i due oggetti sono uguali; in caso contrario, `false`.  
  
##  <a name="a-nameacceleratorviewqueuingmodedatamembera-acceleratorviewqueuingmode-data-member"></a><a name="accelerator_view__queuing_mode_data_member"></a>  Membro dati accelerator_view:: queuing_mode  
 Ottiene la modalità di Accodamento per il [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) oggetto.  
  
```  
__declspec(property(get= get_queuing_mode)) Concurrency::queuing_mode queuing_mode;  
```  
  
##  <a name="a-nameacceleratorviewversiondatamembera-acceleratorviewversion-data-member"></a><a name="accelerator_view__version_data_member"></a>  Membro dati accelerator_view:: Version  
 Ottiene la versione di [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md).  
  
```  
__declspec(property(get= get_version)) unsigned int version;  
```  
  
##  <a name="a-nameacceleratorviewwaitmethoda-acceleratorviewwait-method"></a><a name="accelerator_view__wait_method"></a>  Metodo accelerator_view:: Wait  
 Attende che tutti i comandi inviati per il [accelerator_view](../../../parallel/amp/reference/accelerator-view-class.md) oggetto alla fine.  
  
```  
void wait();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `void`.  
  
## <a name="see-also"></a>Vedere anche  
 [Spazio dei nomi Concurrency (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)

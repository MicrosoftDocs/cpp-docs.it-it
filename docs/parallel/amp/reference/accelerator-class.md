---
title: Classe accelerator
ms.date: 11/04/2016
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
helpviewer_keywords:
- accelerator class
ms.assetid: 37eed593-cf87-4611-9cdc-e98df6c2377a
ms.openlocfilehash: 2045d2d1c6a848378ac55114b61177d386b14fab
ms.sourcegitcommit: afd6fac7c519dbc47a4befaece14a919d4e0a8a2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/10/2018
ms.locfileid: "51523923"
---
# <a name="accelerator-class"></a>Classe accelerator

Un acceleratore è una funzionalità hardware ottimizzata per l'elaborazione dati in parallelo. Un acceleratore può essere un dispositivo collegato a un bus PCIe (ad esempio la GPU) oppure potrebbe essere un'istruzione estesa impostato sulla CPU principale.

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
|[create_view](#create_view)|Crea e restituisce un `accelerator_view` oggetto questo acceleratore.|
|[get_all](#get_all)|Restituisce un vettore di `accelerator` gli oggetti che rappresentano tutti gli acceleratori disponibili.|
|[get_auto_selection_view](#get_auto_selection_view)|Restituisce la selezione automatica `accelerator_view`.|
|[get_dedicated_memory](#get_dedicated_memory)|Restituisce la memoria dedicata per il `accelerator`, espressa in kilobyte.|
|[get_default_cpu_access_type](#get_default_cpu_access_type)|Restituisce il valore predefinito [access_type](concurrency-namespace-enums-amp.md#access_type) per i buffer creati su questo tasto di scelta rapida.|
|[get_default_view](#get_default_view)|Restituisce il valore predefinito `accelerator_view` oggetto che è associato il `accelerator`.|
|[get_description](#get_description)|Restituisce una breve descrizione del `accelerator` dispositivo.|
|[get_device_path](#get_device_path)|Restituisce il percorso del dispositivo.|
|[get_has_display](#get_has_display)|Determina se il `accelerator` è collegato a un display.|
|[get_is_debug](#get_is_debug)|Determina se il `accelerator` dispone del livello DEBUG abilitato per la segnalazione estensiva degli errori.|
|[get_is_emulated](#get_is_emulated)|Determina se il `accelerator` viene emulato.|
|[get_supports_cpu_shared_memory](#get_supports_cpu_shared_memory)|Determina se il `accelerator` supporta la memoria condivisa|
|[get_supports_double_precision](#get_supports_double_precision)|Determina se il `accelerator` è collegato a un display.|
|[get_supports_limited_double_precision](#get_supports_limited_double_precision)|Determina se il `accelerator` ha supporto limitato per la matematica a precisione doppia.|
|[get_version](#get_version)|Restituisce la versione del `accelerator`.|
|[set_default](#set_default)|Restituisce il percorso dell'acceleratore predefinito.|
|[set_default_cpu_access_type](#set_default_cpu_access_type)|Imposta la CPU predefinito [access_type](concurrency-namespace-enums-amp.md#access_type)per le matrici e le allocazioni di memoria implicite create su questo `accelerator`.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator!=](#operator_neq)|Confronta questo `accelerator` oggetto con un altro e restituisce **false** se sono uguali; in caso contrario, restituisce **true**.|
|[operator=](#operator_eq)|Copia il contenuto dell'oggetto specificato `accelerator` a questo oggetto.|
|[operator==](#operator_eq_eq)|Confronta questo `accelerator` oggetto con un altro e restituisce **true** se sono uguali; in caso contrario, restituisce **false**.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[cpu_accelerator](#cpu_accelerator)|Ottiene una stringa costante per la CPU `accelerator`.|
|[dedicated_memory](#dedicated_memory)|Ottiene la memoria dedicata per il `accelerator`, espressa in kilobyte.|
|[default_accelerator](#default_accelerator)|Ottiene una stringa costante per il valore predefinito `accelerator`.|
|[default_cpu_access_type](#default_cpu_access_type)|Ottiene o imposta la CPU predefinito [access_type](concurrency-namespace-enums-amp.md#access_type)per le matrici e le allocazioni di memoria implicite create su questo `accelerator`.|
|[default_view](#default_view)|Ottiene il valore predefinito `accelerator_view` oggetto che è associato il `accelerator`.|
|[description](#description)|Ottiene una breve descrizione del `accelerator` dispositivo.|
|[device_path](#device_path)|Ottiene il percorso del dispositivo.|
|[direct3d_ref](#direct3d_ref)|Ottiene una stringa costante per un riferimento Direct3D `accelerator`.|
|[direct3d_warp](#direct3d_warp)|Ottiene la stringa costante per un `accelerator` che è possibile utilizzare per l'esecuzione di codice C++ AMP nelle CPU multicore che utilizzano Streaming SIMD Extensions (SSE).|
|[has_display](#has_display)|Ottiene un valore booleano che indica se il `accelerator` è collegato a un display.|
|[is_debug](#is_debug)|Indica se il `accelerator` dispone del livello DEBUG abilitato per la segnalazione estensiva degli errori.|
|[is_emulated](#is_emulated)|Indica se il `accelerator` viene emulato.|
|[supports_cpu_shared_memory](#supports_cpu_shared_memory)|Indica se il `accelerator` supporta la memoria condivisa.|
|[supports_double_precision](#supports_double_precision)|Indica se l'acceleratore supporta la matematica a precisione doppia.|
|[supports_limited_double_precision](#supports_limited_double_precision)|Indica se l'acceleratore ha supporto limitato per la matematica a precisione doppia.|
|[version](#version)|Ottiene la versione del `accelerator`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`accelerator`

## <a name="remarks"></a>Note

Un acceleratore è una funzionalità hardware ottimizzata per l'elaborazione dati in parallelo. Un acceleratore è spesso una GPU dedicata, ma può anche essere un'entità host-side virtuale, ad esempio un dispositivo DirectX REF, una WARP (un dispositivo CPU-side che viene accelerato con istruzioni SSE) oppure la CPU stessa.

È possibile costruire un `accelerator` oggetto enumerando i dispositivi disponibili oppure ottenendo il dispositivo predefinito, il dispositivo di riferimento o il dispositivo WARP.

## <a name="requirements"></a>Requisiti

**Intestazione:** amprt. h

**Spazio dei nomi:** Concurrency

##  <a name="dtor"></a> </a> ~ accelerator

Elimina definitivamente il `accelerator` oggetto.

```
~accelerator();
```

### <a name="return-value"></a>Valore restituito

##  <a name="ctor"></a> tasti di scelta rapida

Inizializza una nuova istanza di [accelerator_class](accelerator-class.md).

```
accelerator();

explicit accelerator(const std::wstring& _Device_path);

accelerator(const accelerator& _Other);
```

### <a name="parameters"></a>Parametri

*_Device_path*<br/>
Il percorso del dispositivo fisico.

*_Other*<br/>
L'acceleratore da copiare.

##  <a name="cpu_accelerator"></a> cpu_accelerator

Ottiene una costante string per l'acceleratore della CPU.

```
static const wchar_t cpu_accelerator[];
```

##  <a name="create_view"></a> CREATE_VIEW

Crea e restituisce un `accelerator_view` oggetto questo acceleratore, usando la modalità di Accodamento messaggi specificata. Se non è specificata la modalità di accodamento, la nuova `accelerator_view` utilizza le [queuing_mode::immediate](concurrency-namespace-enums-amp.md#queuing_mode) modalità di Accodamento.

```
accelerator_view create_view(queuing_mode qmode = queuing_mode_automatic);
```

### <a name="parameters"></a>Parametri

*qmode*<br/>
La modalità di Accodamento.

### <a name="return-value"></a>Valore restituito

Un nuovo `accelerator_view` oggetto questo acceleratore, usando la modalità di Accodamento messaggi specificata.

##  <a name="dedicated_memory"></a> dedicated_memory

Ottiene la memoria dedicata per il `accelerator`, espressa in kilobyte.

```
__declspec(property(get= get_dedicated_memory)) size_t dedicated_memory;
```

##  <a name="default_accelerator"></a> default_accelerator

Ottiene una stringa costante per il valore predefinito `accelerator`.

```
static const wchar_t default_accelerator[];
```

##  <a name="default_cpu_access_type"></a> default_cpu_access_type

Il valore predefinito della cpu [access_type](concurrency-namespace-enums-amp.md#access_type)per le matrici e le allocazioni di memoria implicite create su questo `accelerator`.

```
__declspec(property(get= get_default_cpu_access_type)) access_type default_cpu_access_type;
```

##  <a name="default_view"></a> default_view

Ottiene la visualizzazione di tasti di scelta rapida predefiniti che è associata il `accelerator`.

```
__declspec(property(get= get_default_view)) accelerator_view default_view;
```

##  <a name="description"></a> Descrizione

Ottiene una breve descrizione del `accelerator` dispositivo.

```
__declspec(property(get= get_description)) std::wstring description;
```

##  <a name="device_path"></a> device_path

Ottiene il percorso dell'acceleratore. Il percorso è univoco nel sistema.

```
__declspec(property(get= get_device_path)) std::wstring device_path;
```

##  <a name="direct3d_ref"></a> direct3d_ref

Ottiene una stringa costante per un tasto di scelta rapida riferimento Direct3D.

```
static const wchar_t direct3d_ref[];
```

##  <a name="direct3d_warp"></a> direct3d_warp

Ottiene la stringa costante per un `accelerator` che è possibile utilizzare per l'esecuzione di codice C++ AMP nelle CPU multicore tramite Streaming SIMD Extensions (SSE).

```
static const wchar_t direct3d_warp[];
```

##  <a name="get_all"></a> get_all

Restituisce un vettore di `accelerator` gli oggetti che rappresentano tutti gli acceleratori disponibili.

```
static inline std::vector<accelerator> get_all();
```

### <a name="return-value"></a>Valore restituito

Il vettore di acceleratori disponibili

##  <a name="get_auto_selection_view"></a> get_auto_selection_view

Restituisce l'oggetto accelerator_view di selezione automatica, che, quando specificato come i risultati di destinazione parallel_for_each nell'oggetto accelerator_view di destinazione per l'esecuzione dell'oggetto parallel_for_each kernel deve essere selezionato automaticamente dal runtime. Per tutti gli altri scopi, l'accelerator_view restituito da questo metodo è uguale all'accelerator_view predefinito dell'acceleratore predefinito

```
static accelerator_view __cdecl get_auto_selection_view();
```

### <a name="return-value"></a>Valore restituito

L'oggetto accelerator_view di selezione automatica.

##  <a name="get_dedicated_memory"></a> get_dedicated_memory

Restituisce la memoria dedicata per il `accelerator`, espressa in kilobyte.

```
size_t get_dedicated_memory() const;
```

### <a name="return-value"></a>Valore restituito

La memoria dedicata per il `accelerator`, espressa in kilobyte.

##  <a name="get_default_cpu_access_type"></a> get_default_cpu_access_type

Ottiene l'oggetto access_type della cpu predefinito per i buffer creati su questo tasto di scelta rapida

```
access_type get_default_cpu_access_type() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto access_type di cpu predefinito per i buffer creati su questo tasto di scelta rapida.

##  <a name="get_default_view"></a> get_default_view

Restituisce il valore predefinito `accelerator_view` oggetto che è associato il `accelerator`.

```
accelerator_view get_default_view() const;
```

### <a name="return-value"></a>Valore restituito

Il valore predefinito `accelerator_view` oggetto che è associato il `accelerator`.

##  <a name="get_description"></a> get_Description

Restituisce una breve descrizione del `accelerator` dispositivo.

```
std::wstring get_description() const;
```

### <a name="return-value"></a>Valore restituito

Una breve descrizione del `accelerator` dispositivo.

##  <a name="get_device_path"></a> get_device_path

Restituisce il percorso dell'acceleratore. Il percorso è univoco nel sistema.

```
std::wstring get_device_path() const;
```

### <a name="return-value"></a>Valore restituito

Il percorso dell'istanza a livello di sistema univoco del dispositivo.

##  <a name="get_has_display"></a> get_has_display

Restituisce un valore booleano che indica se il `accelerator` può restituire una visualizzazione.

```
bool get_has_display() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il `accelerator` possono inviare output a una visualizzazione; in caso contrario, **false**.

##  <a name="get_is_debug"></a> get_is_debug

Determina se il `accelerator` dispone del livello DEBUG abilitato per la segnalazione estensiva degli errori.

```
bool get_is_debug() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il `accelerator` dispone del livello DEBUG abilitato per la segnalazione estensiva degli errori. In caso contrario, **false**.

##  <a name="get_is_emulated"></a> get_is_emulated

Determina se il `accelerator` viene emulato.

```
bool get_is_emulated() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il `accelerator` viene emulato. In caso contrario, **false**.

##  <a name="get_supports_cpu_shared_memory"></a> get_supports_cpu_shared_memory

Restituisce un valore booleano che indica se il tasto di scelta rapida supporta memoria accessibile sia dal tasto di scelta rapida e della CPU.

```
bool get_supports_cpu_shared_memory() const;
```

### <a name="return-value"></a>Valore restituito

**true** se l'oggetto supporta acceleratore della CPU condiviso memoria; in caso contrario, **false**.

##  <a name="get_supports_double_precision"></a> get_supports_double_precision

Restituisce un valore booleano che indica se l'acceleratore supporta la matematica a precisione doppia, includendo fused multiply add (FMA), divisione, reciproco e cast tra **int** e **double**

```
bool get_supports_double_precision() const;
```

### <a name="return-value"></a>Valore restituito

**true** se l'acceleratore supporta la matematica a precisione doppia; in caso contrario, **false**.

##  <a name="get_supports_limited_double_precision"></a> get_supports_limited_double_precision

Restituisce un valore booleano che indica se l'acceleratore ha supporto limitato per la matematica a precisione doppia. Se l'acceleratore ha solo un supporto limitato, quindi fused multiply add (FMA), divisione, reciproco e cast tra **int** e **double** non sono supportati.

```
bool get_supports_limited_double_precision() const;
```

### <a name="return-value"></a>Valore restituito

**true** se l'acceleratore ha supporto limitato per la matematica a precisione doppia; in caso contrario, **false**.

##  <a name="get_version"></a> get_version

Restituisce la versione del `accelerator`.

```
unsigned int get_version() const;
```

### <a name="return-value"></a>Valore restituito

La versione del `accelerator`.

##  <a name="has_display"></a> has_display

Ottiene un valore booleano che indica se il `accelerator` può restituire una visualizzazione.

```
__declspec(property(get= get_has_display)) bool has_display;
```

##  <a name="is_debug"></a> is_debug

Ottiene un valore booleano che indica se il `accelerator` dispone del livello DEBUG abilitato per la segnalazione estensiva degli errori.

```
__declspec(property(get= get_is_debug)) bool is_debug;
```

##  <a name="is_emulated"></a> is_emulated

Ottiene un valore booleano che indica se il `accelerator` viene emulato.

```
__declspec(property(get= get_is_emulated)) bool is_emulated;
```

##  <a name="operator_neq"></a> operatore! =

Confronta questo `accelerator` oggetto con un altro e restituisce **false** se sono uguali; in caso contrario, restituisce **true**.

```
bool operator!= (const accelerator& _Other) const;
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Il `accelerator` oggetto da confrontare con questo.

### <a name="return-value"></a>Valore restituito

**false** se i due `accelerator` oggetti sono uguali; in caso contrario, **true**.

##  <a name="operator_eq"></a> operator=

Copia il contenuto dell'oggetto specificato `accelerator` a questo oggetto.

```
accelerator& operator= (const accelerator& _Other);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Il `accelerator` da copiare dall'oggetto.

### <a name="return-value"></a>Valore restituito

Un riferimento a questo `accelerator` oggetto.

##  <a name="operator_eq_eq"></a> operator==

Confronta questo `accelerator` oggetto con un altro e restituisce **true** se sono uguali; in caso contrario, restituisce **false**.

```
bool operator== (const accelerator& _Other) const;
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Il `accelerator` oggetto da confrontare con questo.

### <a name="return-value"></a>Valore restituito

**true** se l'altra `accelerator` è uguale a questo oggetto `accelerator` dell'oggetto; in caso contrario, **false**.

##  <a name="set_default"></a> set_default

Imposta l'acceleratore predefinito da usare per qualsiasi operazione che utilizza in modo implicito l'acceleratore predefinito. Questo metodo ha esito positivo solo se l'acceleratore predefinito selezionato dal runtime non è già stato usato in un'operazione che utilizza in modo implicito l'acceleratore predefinito

```
static inline bool set_default(std::wstring _Path);
```

### <a name="parameters"></a>Parametri

*Percorso*<br/>
Il percorso dell'acceleratore.

### <a name="return-value"></a>Valore restituito

**true** se la chiamata ha esito positivo all'impostazione dell'acceleratore predefinito. In caso contrario, **false**.

##  <a name="set_default_cpu_access_type"></a> set_default_cpu_access_type

Impostare l'oggetto access_type della cpu predefinito per le matrici create su questo tasto di scelta rapida o per le allocazioni di memoria implicite come parte di array_view accede questo acceleratore. Questo metodo ha esito positivo solo se il default_cpu_access_type per l'acceleratore non è già stata sottoposta a override da una precedente chiamata a questo metodo e il default_cpu_access_type selezionato dal runtime per questo acceleratore non è ancora stato utilizzato per allocare una matrice o per un'allocazione di memoria implicite supporta un oggetto array_view accede questo acceleratore.

```
bool set_default_cpu_access_type(access_type _Default_cpu_access_type);
```

### <a name="parameters"></a>Parametri

*_Default_cpu_access_type*<br/>
Oggetto access_type di cpu predefinito da usare per allocazioni di memoria array_view/matrice questo acceleratore.

### <a name="return-value"></a>Valore restituito

Valore booleano che indica se access_type della cpu predefinito per il tasto di scelta rapida è stato impostato correttamente.

##  <a name="supports_cpu_shared_memory"></a> supports_cpu_shared_memory

Ottiene un valore booleano che indica se il `accelerator` supporta la memoria condivisa.

```
__declspec(property(get= get_supports_cpu_shared_memory)) bool supports_cpu_shared_memory;
```

##  <a name="supports_double_precision"></a> supports_double_precision

Ottiene un valore booleano che indica se l'acceleratore supporta la matematica a precisione doppia.

```
__declspec(property(get= get_supports_double_precision)) bool supports_double_precision;
```

##  <a name="supports_limited_double_precision"></a> supports_limited_double_precision

Ottiene un valore booleano che indica se l'acceleratore ha supporto limitato per la matematica a precisione doppia. Se l'acceleratore ha solo un supporto limitato, quindi fused multiply add (FMA), divisione, reciproco e cast tra `int` e `double` non sono supportati.

```
__declspec(property(get= get_supports_limited_double_precision)) bool supports_limited_double_precision;
```

##  <a name="version"></a> Versione

Ottiene la versione del `accelerator`.

```
__declspec(property(get= get_version)) unsigned int version;
```

##  <a name="dtor"></a> </a> ~ accelerator_view

Elimina definitivamente il [accelerator_view](accelerator-view-class.md) oggetto.

```
~accelerator_view();
```

### <a name="return-value"></a>Valore restituito

##  <a name="accelerator"></a> tasti di scelta rapida

Ottiene il `accelerator` dell'oggetto per il [accelerator_view](accelerator-view-class.md) oggetto.

```
__declspec(property(get= get_accelerator)) Concurrency::accelerator accelerator;
```

##  <a name="ctor"></a> accelerator_view

Inizializza una nuova istanza di [accelerator_view](accelerator-view-class.md) classe tramite la copia esistente `accelerator_view` oggetto.

```
accelerator_view(const accelerator_view& _Other);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Il `accelerator_view` oggetto da copiare.

##  <a name="create_marker"></a> create_marker

Restituisce una future per tenere traccia del completamento di tutti i comandi inviati finora a questo `accelerator_view` oggetto.

```
concurrency::completion_future create_marker();
```

### <a name="return-value"></a>Valore restituito

Una future per tenere traccia del completamento di tutti i comandi inviati finora a questo `accelerator_view` oggetto.

##  <a name="flush"></a> scaricamento

Invia tutti i comandi in sospeso in coda per il [accelerator_view](accelerator-view-class.md) oggetto al tasto di scelta rapida per l'esecuzione.

```
void flush();
```

### <a name="return-value"></a>Valore restituito

Restituisce `void`.

##  <a name="get_accelerator"></a> get_accelerator

Restituisce il `accelerator` dell'oggetto per il [accelerator_view](accelerator-view-class.md) oggetto.

```
accelerator get_accelerator() const;
```

### <a name="return-value"></a>Valore restituito

Il `accelerator` dell'oggetto per il `accelerator_view` oggetto.

##  <a name="get_is_auto_selection"></a> get_is_auto_selection

Restituisce un valore booleano che indica se il runtime selezionerà automaticamente un tasto di scelta appropriato quando l'oggetto accelerator_view viene passato a un [parallel_for_each](../../../parallel/concrt/reference/concurrency-namespace-functions.md#parallel_for_each).

```
bool get_is_auto_selection() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il runtime selezionerà automaticamente un acceleratore appropriato; in caso contrario, **false**.

##  <a name="get_is_debug"></a> get_is_debug

Restituisce un valore booleano che indica se il [accelerator_view](accelerator-view-class.md) oggetto dispone del livello DEBUG abilitato per la segnalazione estensiva degli errori.

```
bool get_is_debug() const;
```

### <a name="return-value"></a>Valore restituito

Valore booleano che indica se il `accelerator_view` oggetto dispone del livello DEBUG abilitato per la segnalazione estensiva degli errori.

##  <a name="get_queuing_mode"></a> get_queuing_mode

Restituisce la modalità di Accodamento per il [accelerator_view](accelerator-view-class.md) oggetto.

```
queuing_mode get_queuing_mode() const;
```

### <a name="return-value"></a>Valore restituito

La modalità di Accodamento per il `accelerator_view` oggetto.

##  <a name="get_version"></a> get_version

Restituisce la versione del [accelerator_view](accelerator-view-class.md).

```
unsigned int get_version() const;
```

### <a name="return-value"></a>Valore restituito

La versione del `accelerator_view`.

##  <a name="is_auto_selection"></a> is_auto_selection

Ottiene un valore booleano che indica se il runtime selezionerà automaticamente un tasto di scelta appropriato quando l'oggetto accelerator_view viene passato a un [parallel_for_each](../../../parallel/concrt/reference/concurrency-namespace-functions.md#parallel_for_each).

```
__declspec(property(get= get_is_auto_selection)) bool is_auto_selection;
```

##  <a name="is_debug"></a> is_debug

Ottiene un valore booleano che indica se il [accelerator_view](accelerator-view-class.md) oggetto dispone del livello DEBUG abilitato per la segnalazione estensiva degli errori.

```
__declspec(property(get= get_is_debug)) bool is_debug;
```

##  <a name="operator_neq"></a> operatore! =

Confronta questo [accelerator_view](accelerator-view-class.md) oggetto con un altro e restituisce `false` se sono uguali; in caso contrario, restituisce `true`.

```
bool operator!= (const accelerator_view& _Other) const;
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Il `accelerator_view` oggetto da confrontare con questo.

### <a name="return-value"></a>Valore restituito

**false** se i due oggetti sono uguali; in caso contrario, **true**.

##  <a name="operator_eq"></a> operator=

Copia il contenuto dell'oggetto specificato [accelerator_view](accelerator-view-class.md) in questo oggetto.

```
accelerator_view& operator= (const accelerator_view& _Other);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Il `accelerator_view` da copiare dall'oggetto.

### <a name="return-value"></a>Valore restituito

Un riferimento a modificato `accelerator_view` oggetto.

##  <a name="operator_eq_eq"></a> operator==

Confronta questo [accelerator_view](accelerator-view-class.md) oggetto con un altro e restituisce **true** se sono uguali; in caso contrario, restituisce **false**.

```
bool operator== (const accelerator_view& _Other) const;
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Il `accelerator_view` oggetto da confrontare con questo.

### <a name="return-value"></a>Valore restituito

**true** se i due oggetti sono uguali; in caso contrario, **false**.

##  <a name="queuing_mode"></a> queuing_mode

Ottiene la modalità di Accodamento per il [accelerator_view](accelerator-view-class.md) oggetto.

```
__declspec(property(get= get_queuing_mode)) Concurrency::queuing_mode queuing_mode;
```

##  <a name="version"></a> Versione

Ottiene la versione del [accelerator_view](accelerator-view-class.md).

```
__declspec(property(get= get_version)) unsigned int version;
```

##  <a name="wait"></a> Attendere

Attende che tutti i comandi inviati per la [accelerator_view](accelerator-view-class.md) oggetto alla fine.

```
void wait();
```

### <a name="return-value"></a>Valore restituito

Restituisce `void`.

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)

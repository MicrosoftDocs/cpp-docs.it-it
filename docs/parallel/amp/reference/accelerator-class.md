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
ms.openlocfilehash: 72a570ab28696730f835c42748a6ea12b865ca55
ms.sourcegitcommit: 3e8fa01f323bc5043a48a0c18b855d38af3648d4
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/06/2020
ms.locfileid: "78855918"
---
# <a name="accelerator-class"></a>Classe accelerator

Un acceleratore è una funzionalità hardware ottimizzata per l'elaborazione parallela dei dati. Un acceleratore può essere un dispositivo collegato a un bus PCIe, ad esempio una GPU, oppure un set di istruzioni esteso sulla CPU principale.

## <a name="syntax"></a>Sintassi

```cpp
class accelerator;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[Costruttore Accelerator](#ctor)|Inizializza una nuova istanza della classe `accelerator`.|
|[distruttore ~ Accelerator](#ctor)|Elimina definitivamente l'oggetto `accelerator`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[create_view](#create_view)|Crea e restituisce un oggetto `accelerator_view` sull'acceleratore.|
|[get_all](#get_all)|Restituisce un vettore di `accelerator` oggetti che rappresentano tutti gli acceleratori disponibili.|
|[get_auto_selection_view](#get_auto_selection_view)|Restituisce la `accelerator_view`di selezione automatica.|
|[get_dedicated_memory](#get_dedicated_memory)|Restituisce la memoria dedicata per il `accelerator`, espressa in kilobyte.|
|[get_default_cpu_access_type](#get_default_cpu_access_type)|Restituisce il [access_type](concurrency-namespace-enums-amp.md#access_type) predefinito per i buffer creati in questo tasto di scelta rapida.|
|[get_default_view](#get_default_view)|Restituisce l'oggetto `accelerator_view` predefinito associato al `accelerator`.|
|[get_description](#get_description)|Restituisce una breve descrizione del dispositivo `accelerator`.|
|[get_device_path](#get_device_path)|Restituisce il percorso del dispositivo.|
|[get_has_display](#get_has_display)|Determina se la `accelerator` è associata a una visualizzazione.|
|[get_is_debug](#get_is_debug)|Determina se il `accelerator` dispone del livello di DEBUG abilitato per la segnalazione estesa degli errori.|
|[get_is_emulated](#get_is_emulated)|Determina se l'`accelerator` è emulata.|
|[get_supports_cpu_shared_memory](#get_supports_cpu_shared_memory)|Determina se il `accelerator` supporta la memoria condivisa|
|[get_supports_double_precision](#get_supports_double_precision)|Determina se la `accelerator` è associata a una visualizzazione.|
|[get_supports_limited_double_precision](#get_supports_limited_double_precision)|Determina se il `accelerator` ha un supporto limitato per la matematica a precisione doppia.|
|[get_version](#get_version)|Restituisce la versione del `accelerator`.|
|[set_default](#set_default)|Restituisce il percorso dell'acceleratore predefinito.|
|[set_default_cpu_access_type](#set_default_cpu_access_type)|Imposta la [access_type](concurrency-namespace-enums-amp.md#access_type)della CPU predefinita per le matrici e le allocazioni di memoria implicite effettuate in questa `accelerator`.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[operator!=](#operator_neq)|Confronta questo oggetto `accelerator` con un altro e restituisce **false** se sono uguali. in caso contrario, restituisce **true**.|
|[operator=](#operator_eq)|Copia il contenuto dell'oggetto `accelerator` specificato in questo oggetto.|
|[operator==](#operator_eq_eq)|Confronta questo oggetto `accelerator` con un altro e restituisce **true** se sono uguali. in caso contrario, restituisce **false**.|

### <a name="public-data-members"></a>Membri dati pubblici

|Nome|Descrizione|
|----------|-----------------|
|[cpu_accelerator](#cpu_accelerator)|Ottiene una costante di stringa per la `accelerator`della CPU.|
|[dedicated_memory](#dedicated_memory)|Ottiene la memoria dedicata per il `accelerator`, espressa in kilobyte.|
|[default_accelerator](#default_accelerator)|Ottiene una costante di stringa per la `accelerator`predefinita.|
|[default_cpu_access_type](#default_cpu_access_type)|Ottiene o imposta il [ACCESS_TYPE](concurrency-namespace-enums-amp.md#access_type)CPU predefinito per le matrici e le allocazioni di memoria implicite effettuate in questa `accelerator`.|
|[default_view](#default_view)|Ottiene l'oggetto `accelerator_view` predefinito associato al `accelerator`.|
|[description](#description)|Ottiene una breve descrizione del dispositivo `accelerator`.|
|[device_path](#device_path)|Ottiene il percorso del dispositivo.|
|[direct3d_ref](#direct3d_ref)|Ottiene una costante di stringa per un riferimento Direct3D `accelerator`.|
|[direct3d_warp](#direct3d_warp)|Ottiene la costante di stringa per un oggetto `accelerator` che è possibile usare per l' C++ esecuzione di codice amp su CPU multicore che usano Streaming SIMD Extensions (SSE).|
|[has_display](#has_display)|Ottiene un valore booleano che indica se il `accelerator` è collegato a una visualizzazione.|
|[is_debug](#is_debug)|Indica se il `accelerator` dispone del livello di DEBUG abilitato per la segnalazione estesa degli errori.|
|[is_emulated](#is_emulated)|Indica se il `accelerator` è emulato.|
|[supports_cpu_shared_memory](#supports_cpu_shared_memory)|Indica se il `accelerator` supporta la memoria condivisa.|
|[supports_double_precision](#supports_double_precision)|Indica se il tasto di scelta rapida supporta la matematica a precisione doppia.|
|[supports_limited_double_precision](#supports_limited_double_precision)|Indica se il tasto di scelta rapida ha un supporto limitato per la matematica a precisione doppia.|
|[version](#version)|Ottiene la versione della classe `accelerator`.|

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`accelerator`

## <a name="remarks"></a>Osservazioni

Un acceleratore è una funzionalità hardware ottimizzata per l'elaborazione parallela dei dati. Un acceleratore è spesso una GPU discreta, ma può anche essere un'entità lato host virtuale, ad esempio un dispositivo DirectX REF, un WARP (un dispositivo sul lato CPU accelerato per mezzo di istruzioni SSE) o la CPU stessa.

È possibile costruire un oggetto `accelerator` enumerando i dispositivi disponibili o ottenendo il dispositivo predefinito, il dispositivo di riferimento o il dispositivo WARP.

## <a name="requirements"></a>Requisiti

**Intestazione:** amprt. h

**Spazio dei nomi:** Concurrency

## <a name="dtor"></a></a> ~ Accelerator

Elimina definitivamente l'oggetto `accelerator`.

```cpp
~accelerator();
```

### <a name="return-value"></a>Valore restituito

## <a name="ctor"></a>acceleratore

Inizializza una nuova istanza della [classe Accelerator](accelerator-class.md).

```cpp
accelerator();

explicit accelerator(const std::wstring& _Device_path);

accelerator(const accelerator& _Other);
```

### <a name="parameters"></a>Parametri

*_Device_path*<br/>
Percorso del dispositivo fisico.

*_Other*<br/>
Acceleratore da copiare.

## <a name="cpu_accelerator"></a>cpu_accelerator

Ottiene una costante di stringa per l'acceleratore della CPU.

```cpp
static const wchar_t cpu_accelerator[];
```

## <a name="create_view"></a>create_view

Crea e restituisce un oggetto `accelerator_view` sull'acceleratore, usando la modalità di accodamento specificata. Quando non viene specificata la modalità di Accodamento, la nuova `accelerator_view` utilizza la modalità di Accodamento [queuing_mode:: immediate](concurrency-namespace-enums-amp.md#queuing_mode) .

```cpp
accelerator_view create_view(queuing_mode qmode = queuing_mode_automatic);
```

### <a name="parameters"></a>Parametri

*qmode*<br/>
Modalità di Accodamento.

### <a name="return-value"></a>Valore restituito

Nuovo oggetto `accelerator_view` sull'acceleratore, usando la modalità di accodamento specificata.

## <a name="dedicated_memory"></a>dedicated_memory

Ottiene la memoria dedicata per il `accelerator`, espressa in kilobyte.

```cpp
__declspec(property(get= get_dedicated_memory)) size_t dedicated_memory;
```

## <a name="default_accelerator"></a>default_accelerator

Ottiene una costante di stringa per la `accelerator`predefinita.

```cpp
static const wchar_t default_accelerator[];
```

## <a name="default_cpu_access_type"></a>default_cpu_access_type

Il [access_type](concurrency-namespace-enums-amp.md#access_type)CPU predefinito per le matrici e le allocazioni di memoria implicite effettuate in questa `accelerator`.

```cpp
__declspec(property(get= get_default_cpu_access_type)) access_type default_cpu_access_type;
```

## <a name="default_view"></a>default_view

Ottiene la visualizzazione dell'acceleratore predefinita associata all'`accelerator`.

```cpp
__declspec(property(get= get_default_view)) accelerator_view default_view;
```

## <a name="description"></a>Descrizione

Ottiene una breve descrizione del dispositivo `accelerator`.

```cpp
__declspec(property(get= get_description)) std::wstring description;
```

## <a name="device_path"></a>device_path

Ottiene il percorso dell'acceleratore. Il percorso è univoco nel sistema.

```cpp
__declspec(property(get= get_device_path)) std::wstring device_path;
```

## <a name="direct3d_ref"></a>direct3d_ref

Ottiene una costante di stringa per un acceleratore di riferimento Direct3D.

```cpp
static const wchar_t direct3d_ref[];
```

## <a name="direct3d_warp"></a>direct3d_warp

Ottiene la costante di stringa per un oggetto `accelerator` che è possibile usare per eseguire il C++ codice amp sulle CPU multicore usando Streaming SIMD Extensions (SSE).

```cpp
static const wchar_t direct3d_warp[];
```

## <a name="get_all"></a>get_all

Restituisce un vettore di `accelerator` oggetti che rappresentano tutti gli acceleratori disponibili.

```cpp
static inline std::vector<accelerator> get_all();
```

### <a name="return-value"></a>Valore restituito

Vettore di acceleratori disponibili

## <a name="get_auto_selection_view"></a>get_auto_selection_view

Restituisce il accelerator_view di selezione automatica, che, se specificato come destinazione parallel_for_each, genera il accelerator_view di destinazione per l'esecuzione del kernel parallel_for_each per essere selezionato automaticamente dal runtime. Per tutti gli altri scopi, il accelerator_view restituito da questo metodo è uguale a quello predefinito accelerator_view dell'acceleratore predefinito

```cpp
static accelerator_view __cdecl get_auto_selection_view();
```

### <a name="return-value"></a>Valore restituito

Accelerator_view di selezione automatica.

## <a name="get_dedicated_memory"></a>get_dedicated_memory

Restituisce la memoria dedicata per il `accelerator`, espressa in kilobyte.

```cpp
size_t get_dedicated_memory() const;
```

### <a name="return-value"></a>Valore restituito

Memoria dedicata per il `accelerator`, espressa in kilobyte.

## <a name="get_default_cpu_access_type"></a>get_default_cpu_access_type

Ottiene la access_type CPU predefinita per i buffer creati in questo acceleratore

```cpp
access_type get_default_cpu_access_type() const;
```

### <a name="return-value"></a>Valore restituito

Access_type CPU predefinito per i buffer creati in questo acceleratore.

## <a name="get_default_view"></a>get_default_view

Restituisce l'oggetto `accelerator_view` predefinito associato al `accelerator`.

```cpp
accelerator_view get_default_view() const;
```

### <a name="return-value"></a>Valore restituito

Oggetto `accelerator_view` predefinito associato al `accelerator`.

## <a name="get_description"></a>get_description

Restituisce una breve descrizione del dispositivo `accelerator`.

```cpp
std::wstring get_description() const;
```

### <a name="return-value"></a>Valore restituito

Breve descrizione del dispositivo `accelerator`.

## <a name="get_device_path"></a>get_device_path

Restituisce il percorso dell'acceleratore. Il percorso è univoco nel sistema.

```cpp
std::wstring get_device_path() const;
```

### <a name="return-value"></a>Valore restituito

Percorso dell'istanza univoco del dispositivo a livello di sistema.

## <a name="get_has_display"></a>get_has_display

Restituisce un valore booleano che indica se l'`accelerator` può restituire una visualizzazione.

```cpp
bool get_has_display() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il `accelerator` può restituire una visualizzazione; in caso contrario, **false**.

## <a name="get_is_debug"></a>get_is_debug

Determina se il `accelerator` dispone del livello di DEBUG abilitato per la segnalazione estesa degli errori.

```cpp
bool get_is_debug() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il `accelerator` dispone del livello di debug abilitato per la segnalazione estesa degli errori. In caso contrario, **false**.

## <a name="get_is_emulated"></a>get_is_emulated

Determina se l'`accelerator` è emulata.

```cpp
bool get_is_emulated() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il `accelerator` è emulato. In caso contrario, **false**.

## <a name="get_supports_cpu_shared_memory"></a>get_supports_cpu_shared_memory

Restituisce un valore booleano che indica se il tasto di scelta rapida supporta la memoria accessibile sia dall'acceleratore che dalla CPU.

```cpp
bool get_supports_cpu_shared_memory() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il tasto di scelta rapida supporta la memoria condivisa della CPU. in caso contrario, **false**.

## <a name="get_supports_double_precision"></a>get_supports_double_precision

Restituisce un valore booleano che indica se il tasto di scelta rapida supporta la matematica a precisione doppia, incluse le operazioni di aggiunta (FMA), divisione, reciproca e casting tra **int** e **Double** .

```cpp
bool get_supports_double_precision() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il tasto di scelta rapida supporta la matematica a precisione doppia; in caso contrario, **false**.

## <a name="get_supports_limited_double_precision"></a>get_supports_limited_double_precision

Restituisce un valore booleano che indica se il tasto di scelta rapida ha un supporto limitato per la matematica a precisione doppia. Se il tasto di scelta rapida ha un supporto limitato, non sono supportate le unità di moltiplicazione per l'aggiunta (FMA), la divisione, il reciproco e il cast tra **int** e **Double** .

```cpp
bool get_supports_limited_double_precision() const;
```

### <a name="return-value"></a>Valore restituito

**true** se il tasto di scelta rapida ha un supporto limitato per la matematica a precisione doppia; in caso contrario, **false**.

## <a name="get_version"></a>get_version

Restituisce la versione del `accelerator`.

```cpp
unsigned int get_version() const;
```

### <a name="return-value"></a>Valore restituito

Versione della classe `accelerator`.

## <a name="has_display"></a>has_display

Ottiene un valore booleano che indica se l'`accelerator` può restituire una visualizzazione.

```cpp
__declspec(property(get= get_has_display)) bool has_display;
```

## <a name="is_debug"></a>is_debug

Ottiene un valore booleano che indica se il `accelerator` dispone del livello di DEBUG abilitato per la segnalazione estesa degli errori.

```cpp
__declspec(property(get= get_is_debug)) bool is_debug;
```

## <a name="is_emulated"></a>is_emulated

Ottiene un valore booleano che indica se l'`accelerator` è emulata.

```cpp
__declspec(property(get= get_is_emulated)) bool is_emulated;
```

## <a name="operator_neq"></a>operatore! =

Confronta questo oggetto `accelerator` con un altro e restituisce **false** se sono uguali. in caso contrario, restituisce **true**.

```cpp
bool operator!= (const accelerator& _Other) const;
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Oggetto `accelerator` da confrontare con questo oggetto.

### <a name="return-value"></a>Valore restituito

**false** se i due oggetti `accelerator` sono uguali. in caso contrario, **true**.

## <a name="operator_eq"></a>operatore =

Copia il contenuto dell'oggetto `accelerator` specificato in questo oggetto.

```cpp
accelerator& operator= (const accelerator& _Other);
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Oggetto `accelerator` da cui eseguire la copia.

### <a name="return-value"></a>Valore restituito

Riferimento a questo oggetto `accelerator`.

## <a name="operator_eq_eq"></a>operatore = =

Confronta questo oggetto `accelerator` con un altro e restituisce **true** se sono uguali. in caso contrario, restituisce **false**.

```cpp
bool operator== (const accelerator& _Other) const;
```

### <a name="parameters"></a>Parametri

*_Other*<br/>
Oggetto `accelerator` da confrontare con questo oggetto.

### <a name="return-value"></a>Valore restituito

**true** se l'altro oggetto `accelerator` è uguale a questo oggetto `accelerator`; in caso contrario, **false**.

## <a name="set_default"></a>set_default

Imposta il tasto di scelta rapida predefinito da utilizzare per qualsiasi operazione che utilizza in modo implicito il tasto di scelta rapida predefinito. Questo metodo ha esito positivo solo se l'acceleratore predefinito selezionato dal runtime non è già stato utilizzato in un'operazione che utilizza in modo implicito il tasto di scelta rapida predefinito

```cpp
static inline bool set_default(std::wstring _Path);
```

### <a name="parameters"></a>Parametri

*_Path*<br/>
Percorso del tasto di scelta rapida.

### <a name="return-value"></a>Valore restituito

**true** se la chiamata ha esito positivo in impostazione del tasto di scelta rapida predefinito. In caso contrario, **false**.

## <a name="set_default_cpu_access_type"></a>set_default_cpu_access_type

Imposta la access_type CPU predefinita per le matrici create in questo acceleratore o per le allocazioni di memoria implicite come parte dell'array_views a cui si accede in questo acceleratore. Questo metodo ha esito positivo solo se la default_cpu_access_type per il tasto di scelta rapida non è già stata sottoposta a override da una chiamata precedente a questo metodo e il runtime selezionato default_cpu_access_type per questo acceleratore non è ancora stato usato per l'allocazione di una matrice o per allocazione di memoria implicita che supporta un array_view a cui si accede in questo acceleratore.

```cpp
bool set_default_cpu_access_type(access_type _Default_cpu_access_type);
```

### <a name="parameters"></a>Parametri

*_Default_cpu_access_type*<br/>
Access_type della CPU predefinita da utilizzare per le allocazioni di memoria per array/array_view in questo acceleratore.

### <a name="return-value"></a>Valore restituito

Valore booleano che indica se la CPU predefinita access_type per l'acceleratore è stata impostata correttamente.

## <a name="supports_cpu_shared_memory"></a>supports_cpu_shared_memory

Ottiene un valore booleano che indica se il `accelerator` supporta la memoria condivisa.

```cpp
__declspec(property(get= get_supports_cpu_shared_memory)) bool supports_cpu_shared_memory;
```

## <a name="supports_double_precision"></a>supports_double_precision

Ottiene un valore booleano che indica se il tasto di scelta rapida supporta la matematica a precisione doppia.

```cpp
__declspec(property(get= get_supports_double_precision)) bool supports_double_precision;
```

## <a name="supports_limited_double_precision"></a>supports_limited_double_precision

Ottiene un valore booleano che indica se il tasto di scelta rapida ha un supporto limitato per la matematica a precisione doppia. Se il tasto di scelta rapida ha solo un supporto limitato, non sono supportate le unità di moltiplicazione di aggiunta (FMA), divisione, reciproca e cast tra `int` e `double`.

```cpp
__declspec(property(get= get_supports_limited_double_precision)) bool supports_limited_double_precision;
```

## <a name="version"></a>Versione

Ottiene la versione della classe `accelerator`.

```cpp
__declspec(property(get= get_version)) unsigned int version;
```

## <a name="see-also"></a>Vedere anche

[Spazio dei nomi Concurrency (C++ AMP)](concurrency-namespace-cpp-amp.md)

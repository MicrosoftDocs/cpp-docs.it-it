---
title: Macro di debug e segnalazione degli errori | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atldef/ATL::_ATL_DEBUG_INTERFACES
- atldef/ATL::_ATL_DEBUG_QI
- atldef/ATL::ATLASSERT
- afx/ATL::ATLENSURE
- atltrace/ATL::ATLTRACENOTIMPL
- atltrace/ATL::ATLTRACE
dev_langs:
- C++
helpviewer_keywords:
- macros, error reporting
ms.assetid: 4da9b87f-ec5c-4a32-ab93-637780909b9d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: ef417232d62c664b4943a2198ae351a5c443b089
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43763747"
---
# <a name="debugging-and-error-reporting-macros"></a>Macro di debug e segnalazione errori

Queste macro forniscono utili funzionalità di debug e trace.

|||
|-|-|
|[ATL_DEBUG_INTERFACES](#_atl_debug_interfaces)|Scrive, nella finestra di output, le perdite di tutte le interfacce che vengono rilevate quando `_Module.Term` viene chiamato.|
|[AD](#_atl_debug_qi)|Scrive tutte le chiamate a `QueryInterface` nella finestra di output.|
|[ATLASSERT](#atlassert)|Esegue la stessa funzionalità come la [ASSERTE](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) macro trovato nella libreria di runtime C.|
|[ATLENSURE](#atlensure)|Esegue la convalida dei parametri. Chiamare `AtlThrow` se necessario|
|[ATLTRACENOTIMPL](#atltracenotimpl)|Invia un messaggio al dispositivo di dump che la funzione specificata non è implementata.|
|[ATLTRACE](#alttrace)|Segnala gli avvisi generati per un dispositivo di output, ad esempio la finestra del debugger, in base al flag indicato e dei livelli. Opzione inclusa per compatibilità con le versioni precedenti.|
|[ATLTRACE2](#atltrace2)|Segnala gli avvisi generati per un dispositivo di output, ad esempio la finestra del debugger, in base al flag indicato e dei livelli.|

##  <a name="_atl_debug_interfaces"></a>  ATL_DEBUG_INTERFACES

Definire questa macro prima di includere qualsiasi file di intestazione ATL per tracciare tutte `AddRef` e `Release` chiama nelle interfacce dei componenti per la finestra di output.

```
#define _ATL_DEBUG_INTERFACES
```

### <a name="remarks"></a>Note

L'output di traccia verrà visualizzato come illustrato di seguito:

`ATL: QIThunk - 2008         AddRef  :   Object = 0x00d81ba0   Refcount = 1   CBug - IBug`

La prima parte di ogni traccia sarà sempre `ATL: QIThunk`. Di seguito è un valore che identifica la particolare *interfaccia thunk* in uso. Un thunk interfaccia è un oggetto usato per mantenere un conteggio dei riferimenti e fornire la funzionalità di analisi usata in questo esempio. Viene creato un nuovo thunk di interfaccia in ogni chiamata a `QueryInterface` ad eccezione delle richieste per il `IUnknown` interfaccia (in questo caso, il thunk stesso viene restituito ogni volta essere conforme alle regole di identità COM).

Successivamente vedrà `AddRef` o `Release` che indica il metodo che è stato chiamato. In seguito, verrà visualizzato un valore che identifica l'oggetto con conteggio dei riferimenti dell'interfaccia è stata modificata. Il valore viene tracciato è il **ciò** puntatore dell'oggetto.

Il conteggio dei riferimenti che viene viene tracciato è il conteggio dei riferimenti in tale thunk dopo `AddRef` o `Release` è stato chiamato. Si noti che questo conteggio dei riferimenti potrebbe non corrispondere il conteggio dei riferimenti dell'oggetto. Ogni thunk mantiene il proprio conteggio dei riferimenti che consentono di assicurare la conformità completa con conteggio dei riferimenti le regole COM.

L'ultima parte di informazioni tracciate è il nome dell'oggetto e l'interfaccia siano interessati dal `AddRef` o `Release` chiamare.

Qualsiasi interfaccia perdite rilevate quando il server viene arrestato e `_Module.Term` viene chiamata verrà registrato come segue:

`ATL: QIThunk - 2005         LEAK    :   Object = 0x00d81ca0   Refcount = 1   MaxRefCount = 1   CBug - IBug`

Le informazioni fornite di seguito esegue il mapping direttamente alle informazioni fornite nelle istruzioni di traccia precedente, pertanto è possibile esaminare i conteggi dei riferimenti tutta la durata intera del thunk interfaccia. Inoltre, è ottenere un'indicazione del conteggio dei riferimenti massimo su thunk tale interfaccia.

> [!NOTE]
> ATL_DEBUG_INTERFACES utilizzabile nelle build di vendita al dettaglio.

##  <a name="_atl_debug_qi"></a>  AD

Scrive tutte le chiamate a `QueryInterface` nella finestra di output.

```
#define _ATL_DEBUG_QI
```

### <a name="remarks"></a>Note

Se una chiamata a `QueryInterface` non è riuscita, verrà visualizzata la finestra di output:

*nome dell'interfaccia* - `failed`

##  <a name="atlassert"></a>  ATLASSERT

La macro ATLASSERT esegue la stessa funzionalità come la [ASSERTE](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) macro trovato nella libreria di runtime C.

```
ATLASSERT(booleanExpression);
```

### <a name="parameters"></a>Parametri

*booleanExpression*  
Espressione (inclusi i puntatori) che restituisce un valore diverso da zero oppure 0.

### <a name="remarks"></a>Note

Nelle build di debug, viene valutata ATLASSERT *booleanExpression* e genera un report di debug quando il risultato è false.  

## <a name="requirements"></a>Requisiti

**Intestazione:** atldef.h

##  <a name="atlensure"></a>  ATLENSURE

Questa macro viene usata per convalidare i parametri passati a una funzione.

```
ATLENSURE(booleanExpression);
ATLENSURE_THROW(booleanExpression, hr);
```

### <a name="parameters"></a>Parametri

*booleanExpression*  
Specifica un'espressione booleana da sottoporre a test.

*risorse umane*  
Specifica un codice di errore da restituire.

### <a name="remarks"></a>Note

Queste macro forniscono un meccanismo per rilevare e notificare all'utente di utilizzo del parametro non corretto.

La macro chiama ATLASSERT e se la condizione ha esito negativo chiamate `AtlThrow`.

Nel caso ATLENSURE `AtlThrow` viene chiamato con E_FAIL.

Nel caso ATLENSURE_THROW `AtlThrow` viene chiamato con il valore HRESULT specificato.

La differenza tra ATLENSURE e ATLASSERT è che ATLENSURE genera un'eccezione nelle build di rilascio anche come le build di Debug.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#108](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_1.cpp)]  

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h  

##  <a name="atltracenotimpl"></a>  ATLTRACENOTIMPL

Nelle build di debug di ATL, invia la stringa " *funcname* non implementata" per il dispositivo di dump e restituisce E_NOTIMPL.

```
ATLTRACENOTIMPL(funcname);
```

### <a name="parameters"></a>Parametri

*Nome funzione*  
[in] Stringa contenente il nome della funzione che non è implementata.

### <a name="remarks"></a>Note

Nelle build di rilascio, è sufficiente restituisce E_NOTIMPL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#127](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_2.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** atltrace.h 

##  <a name="atltrace"></a>  ATLTRACE

Segnala gli avvisi generati per un dispositivo di output, ad esempio la finestra del debugger, in base al flag indicato e dei livelli. Opzione inclusa per compatibilità con le versioni precedenti.

```
ATLTRACE(exp);

ATLTRACE(  
    DWORD category,
    UINT  level,
    LPCSTR lpszFormat, ...);
```

### <a name="parameters"></a>Parametri

*exp*  
[in] La stringa e variabili da inviare per la finestra di output di Visual C++ o tutte le applicazioni che vengono intercettati questi messaggi.

*category*  
[in] Tipo di evento o un metodo in cui al report. Vedere la sezione Osservazioni per un elenco di categorie.

*Livello*  
[in] Il livello di traccia al report. Vedere la sezione Osservazioni per informazioni dettagliate.

*lpszFormat*  
[in] Stringa formattata da inviare al dispositivo di dump.

### <a name="remarks"></a>Note

Visualizzare [ATLTRACE2](#atltrace2) per una descrizione di ATLTRACE. ATLTRACE e ATLTRACE2 hanno lo stesso comportamento, ATLTRACE è inclusa per compatibilità con le versioni precedenti.

##  <a name="atltrace2"></a>  ATLTRACE2

Segnala gli avvisi generati per un dispositivo di output, ad esempio la finestra del debugger, in base al flag indicato e dei livelli.

```
ATLTRACE2(exp);

ATLTRACE2(
    DWORD category,
    UINT level,
    LPCSTRlpszFormat,  ...);
```

### <a name="parameters"></a>Parametri

*exp*  
[in] La stringa da inviare per la finestra di output di Visual C++ o tutte le applicazioni che vengono intercettati questi messaggi.

*category*  
[in] Tipo di evento o un metodo in cui al report. Vedere la sezione Osservazioni per un elenco di categorie.

*Livello*  
[in] Il livello di traccia al report. Vedere la sezione Osservazioni per informazioni dettagliate.

*lpszFormat*  
[in] Il `printf`-stringa di formato da usare per creare una stringa da inviare al dispositivo di dump di stile.

### <a name="remarks"></a>Note

La versione abbreviata di ATLTRACE2 scrive una stringa alla finestra di output del debugger. La seconda forma di ATLTRACE2 inoltre scrive l'output alla finestra di output del debugger, ma è soggetto alle impostazioni dello strumento di traccia ATL/MFC (vedere [ATLTraceTool esempio](../../visual-cpp-samples.md)). Ad esempio, se si imposta *livello* 4 e lo strumento di traccia ATL/MFC a livello 0, non si verrà visualizzato il messaggio. *livello* può essere 0, 1, 2, 3 o 4. Il valore predefinito, 0, segnala solo i problemi più gravi.

Il *categoria* parametro Elenca i flag di traccia da impostare. Questi flag corrispondono ai tipi di metodi per il quale si desidera eseguire report. Nella tabella seguente sono elencati i flag di traccia valido è possibile usare per la *categoria* parametro.

### <a name="atl-trace-flags"></a>Flag di traccia ATL

|Categoria ATL|Descrizione|
|------------------|-----------------|
|`atlTraceGeneral`|Report su tutte le applicazioni ATL. Valore predefinito.|
|`atlTraceCOM`|Report sui metodi COM.|
|`atlTraceQI`|Report sulle chiamate di QueryInterface.|
|`atlTraceRegistrar`|Report della registrazione di oggetti.|
|`atlTraceRefcount`|Fornisce informazioni sulla modifica di conteggio dei riferimenti.|
|`atlTraceWindowing`|Report sui metodi di windows; ad esempio, indica un ID del messaggio non valido della mappa.|
|`atlTraceControls`|Report sui controlli; ad esempio, i report quando viene eliminata un controllo o la relativa finestra.|
|`atlTraceHosting`|Report che ospita i messaggi. Restituisce, ad esempio, quando un client in un contenitore è attivato.|
|`atlTraceDBClient`|Report nel modello di Consumer OLE DB. ad esempio, quando una chiamata a GetData non riesce, l'output può contenere il valore HRESULT.|
|`atlTraceDBProvider`|Report nel modello di Provider OLE DB. ad esempio, indica se la creazione di una colonna non è riuscita.|
|`atlTraceSnapin`|Report dello snap-in MMC dell'applicazione.|
|`atlTraceNotImpl`|Segnala che la funzione indicata non è implementata.|
|`atlTraceAllocation`|Segnala i messaggi per la memoria in atldbgmem.h strumenti di debug.|

### <a name="mfc-trace-flags"></a>Flag di traccia MFC

|Categoria MFC|Descrizione|
|------------------|-----------------|
|`traceAppMsg`|Generico, i messaggi MFC. Sempre consigliabile.|
|`traceDumpContext`|I messaggi dalle [CDumpContext](../../mfc/reference/cdumpcontext-class.md).|
|`traceWinMsg`|Messaggi dal codice di gestione dei messaggi di MFC.|
|`traceMemory`|Messaggi dal codice di gestione della memoria di MFC.|
|`traceCmdRouting`|Codice di routing di comando di messaggi da Windows di MFC.|
|`traceHtml`|Messaggi dal supporto tecnico di finestra di dialogo DHTML di MFC.|
|`traceSocket`|Messaggi dal supporto di socket di MFC.|
|`traceOle`|Messaggi dal supporto OLE di MFC.|
|`traceDatabase`|Messaggi dal supporto di MFC per database.|
|`traceInternet`|Messaggi dal supporto di Internet di MFC.|

Per dichiarare una categoria di traccia personalizzato, dichiarare un'istanza globale del `CTraceCategory` classe come indicato di seguito:

[!code-cpp[NVC_ATL_Utilities#109](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_3.cpp)]

Il nome della categoria, MY_CATEGORY in questo esempio è il nome specificato per il *categoria* parametro. Il primo parametro è il nome della categoria che verrà visualizzati nello strumento di traccia ATL/MFC. Il secondo parametro è il livello di traccia predefinito. Questo parametro è facoltativo e il livello di traccia predefinito è 0.

Per usare una categoria definita dall'utente:

[!code-cpp[NVC_ATL_Utilities#110](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_4.cpp)]

Per specificare che si desidera filtrare i messaggi di traccia, inserire le definizioni per queste macro in stdafx. h prima di `#include <atlbase.h>` istruzione.

In alternativa, è possibile impostare il filtro nelle direttive del preprocessore nel **pagine delle proprietà** nella finestra di dialogo. Fare clic sui **preprocessore** scheda e quindi inserire globale nel **definizioni preprocessore** casella di modifica.

Atlbase. h contiene le definizioni default delle macro ATLTRACE2 e queste definizioni verranno usate se non si definiscono questi simboli prima dell'elaborazione atlbase. h.

Nelle build di rilascio, viene compilata ATLTRACE2 `(void) 0`.

ATLTRACE2 limita il contenuto della stringa da inviare al dispositivo di dump a non più di 1023 caratteri, dopo la formattazione.

ATLTRACE e ATLTRACE2 hanno lo stesso comportamento, ATLTRACE è inclusa per compatibilità con le versioni precedenti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#111](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_5.cpp)]

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)   
[Funzioni globali di debug e segnalazione errori](../../atl/reference/debugging-and-error-reporting-global-functions.md)

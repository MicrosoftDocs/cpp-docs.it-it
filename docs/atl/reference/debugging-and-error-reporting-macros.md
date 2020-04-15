---
title: Macro di debug e segnalazione errori
ms.date: 05/06/2019
f1_keywords:
- atldef/ATL::_ATL_DEBUG_INTERFACES
- atldef/ATL::_ATL_DEBUG_QI
- atldef/ATL::ATLASSERT
- afx/ATL::ATLENSURE
- atltrace/ATL::ATLTRACENOTIMPL
- atltrace/ATL::ATLTRACE
helpviewer_keywords:
- macros, error reporting
ms.assetid: 4da9b87f-ec5c-4a32-ab93-637780909b9d
ms.openlocfilehash: 69ab6e17bfb1ec85ddb5b8c19c18010a9b4f3df6
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81330196"
---
# <a name="debugging-and-error-reporting-macros"></a>Macro di debug e segnalazione errori

Queste macro forniscono utili funzionalità di debug e traccia.

|||
|-|-|
|[_ATL_DEBUG_INTERFACES](#_atl_debug_interfaces)|Scrive, nella finestra di output, tutte le `_Module.Term` perdite di interfaccia rilevate quando viene chiamato.|
|[_ATL_DEBUG_QI](#_atl_debug_qi)|Scrive tutte `QueryInterface` le chiamate alla finestra di output.|
|[Atlassert](#atlassert)|Esegue la stessa funzionalità della macro [_ASSERTE](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) disponibile nella libreria di runtime del linguaggio C.|
|[ATLENSURE](#atlensure)|Esegue la convalida dei parametri. Chiama `AtlThrow` se necessario|
|[ATLTRACENOTIMPL](#atltracenotimpl)|Invia un messaggio al dispositivo di dump che la funzione specificata non è implementata.|
|[ATLTRACE](#atltrace)|Segnala gli avvisi a una periferica di output, ad esempio la finestra del debugger, in base ai flag e ai livelli indicati. Incluso per compatibilità con le versioni precedenti.|
|[ATLTRACE2](#atltrace2)|Segnala gli avvisi a una periferica di output, ad esempio la finestra del debugger, in base ai flag e ai livelli indicati.|

## <a name="_atl_debug_interfaces"></a><a name="_atl_debug_interfaces"></a>_ATL_DEBUG_INTERFACES

Definire questa macro prima di includere tutti `AddRef` `Release` i file di intestazione ATL per tracciare tutto e le chiamate sulle interfacce dei componenti alla finestra di output.

```
#define _ATL_DEBUG_INTERFACES
```

### <a name="remarks"></a>Osservazioni

L'output di traccia verrà visualizzato come illustrato di seguito:The trace output will appear as shown below:

`ATL: QIThunk - 2008         AddRef  :   Object = 0x00d81ba0   Refcount = 1   CBug - IBug`

La prima parte di ogni `ATL: QIThunk`traccia sarà sempre . Next è un valore che identifica il *thunk* di interfaccia specifico in uso. Un thunk di interfaccia è un oggetto utilizzato per mantenere un conteggio dei riferimenti e fornire la funzionalità di traccia utilizzata in questo caso. Viene creato un nuovo thunk `QueryInterface` di interfaccia a `IUnknown` ogni chiamata a tranne che per le richieste per l'interfaccia (in questo caso, lo stesso thunk viene restituito ogni volta per rispettare le regole di identità di COM).

Successivamente vedrai `AddRef` o `Release` indicherai quale metodo è stato chiamato. Successivamente, verrà visualizzato un valore che identifica l'oggetto il cui conteggio dei riferimenti all'interfaccia è stato modificato. Il valore tracciato è il puntatore **this** dell'oggetto.

Il conteggio dei riferimenti tracciato è il conteggio `AddRef` dei `Release` riferimenti su tale thunk dopo o è stato chiamato. Si noti che questo conteggio dei riferimenti potrebbe non corrispondere al conteggio dei riferimenti per l'oggetto. Ogni thunk mantiene il proprio conteggio dei riferimenti per garantire la piena conformità alle regole di conteggio dei riferimenti di COM.

L'ultima informazione tracciata è il nome dell'oggetto `AddRef` `Release` e l'interfaccia interessata dalla chiamata o .

Eventuali perdite di interfaccia rilevate quando `_Module.Term` il server si arresta e viene chiamato verranno registrate in questo modo:

`ATL: QIThunk - 2005         LEAK    :   Object = 0x00d81ca0   Refcount = 1   MaxRefCount = 1   CBug - IBug`

Le informazioni fornite qui vengono mappate direttamente alle informazioni fornite nelle istruzioni di traccia precedenti, in modo da poter esaminare i conteggi dei riferimenti per tutta la durata di un thunk di interfaccia. Inoltre, si ottiene un'indicazione del numero massimo di riferimenti su tale interfaccia thunk.

> [!NOTE]
> _ATL_DEBUG_INTERFACES può essere utilizzato nelle build di vendita al dettaglio.

## <a name="_atl_debug_qi"></a><a name="_atl_debug_qi"></a>_ATL_DEBUG_QI

Scrive tutte `QueryInterface` le chiamate alla finestra di output.

```
#define _ATL_DEBUG_QI
```

### <a name="remarks"></a>Osservazioni

Se una `QueryInterface` chiamata a non riuscita, verrà visualizzata la finestra di output:If a call to failed, the output window will display:

*nome dell'interfaccia* - `failed`

## <a name="atlassert"></a><a name="atlassert"></a>Atlassert

La macro ATLASSERT esegue la stessa funzionalità della macro [_ASSERTE](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) presente nella libreria di runtime del linguaggio C.

```
ATLASSERT(booleanExpression);
```

### <a name="parameters"></a>Parametri

*Booleanexpression*<br/>
Espressione (inclusi i puntatori) che restituisce un valore diverso da zero oppure 0.

### <a name="remarks"></a>Osservazioni

Nelle build di debug, ATLASSERT valuta *booleanExpression* e genera un report di debug quando il risultato è false.

## <a name="requirements"></a>Requisiti

**Intestazione:** atldef.h

## <a name="atlensure"></a><a name="atlensure"></a>ATLENSURE

Questa macro viene utilizzata per convalidare i parametri passati a una funzione.

```
ATLENSURE(booleanExpression);
ATLENSURE_THROW(booleanExpression, hr);
```

### <a name="parameters"></a>Parametri

*Booleanexpression*<br/>
Specifica un'espressione booleana da testare.

*hr*<br/>
Specifica un codice di errore da restituire.

### <a name="remarks"></a>Osservazioni

Queste macro forniscono un meccanismo per rilevare e notificare all'utente l'utilizzo non corretto dei parametri.

La macro chiama ATLASSERT e `AtlThrow`se la condizione non riesce chiama .

Nel caso ATLENSURE, `AtlThrow` viene chiamato con E_FAIL.

Nel ATLENSURE_THROW caso, `AtlThrow` viene chiamato con l'HRESULT specificato.

La differenza tra ATLENSURE e ATLASSERT è che ATLENSURE genera un'eccezione nelle build di rilascio e nelle build di debug.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#108](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_1.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="atltracenotimpl"></a><a name="atltracenotimpl"></a>ATLTRACENOTIMPL

Nelle build di debug di ATL, invia la stringa *"funcname* is not implemented" al dispositivo di dump e restituisce E_NOTIMPL.

```
ATLTRACENOTIMPL(funcname);
```

### <a name="parameters"></a>Parametri

*Funcname*<br/>
[in] Stringa contenente il nome della funzione non implementata.

### <a name="remarks"></a>Osservazioni

Nelle build di rilascio, restituisce semplicemente E_NOTIMPL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#127](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_2.cpp)]

## <a name="requirements"></a>Requisiti

**Intestazione:** atltrace.h

## <a name="atltrace"></a><a name="atltrace"></a>ATLTRACE

Segnala gli avvisi a una periferica di output, ad esempio la finestra del debugger, in base ai flag e ai livelli indicati. Incluso per compatibilità con le versioni precedenti.

```
ATLTRACE(exp);

ATLTRACE(
    DWORD category,
    UINT  level,
    LPCSTR lpszFormat, ...);
```

### <a name="parameters"></a>Parametri

*Exp*<br/>
[in] Stringa e variabili da inviare alla finestra di output o a qualsiasi applicazione che trattra questi messaggi.

*Categoria*<br/>
[in] Tipo di evento o metodo su cui eseguire il report. Vedere le osservazioni per un elenco di categorie.

*Livello*<br/>
[in] Livello di traccia da segnalare. Vedere la nota per i dettagli.

*Formato lpsz*<br/>
[in] Stringa formattata da inviare al dispositivo di dump.

### <a name="remarks"></a>Osservazioni

Vedere [ATLTRACE2](#atltrace2) per una descrizione di ATLTRACE. ATLTRACE e ATLTRACE2 hanno lo stesso comportamento, ATLTRACE è incluso per la compatibilità con le versioni precedenti.

## <a name="atltrace2"></a><a name="atltrace2"></a>ATLTRACE2

Segnala gli avvisi a una periferica di output, ad esempio la finestra del debugger, in base ai flag e ai livelli indicati.

```
ATLTRACE2(exp);

ATLTRACE2(
    DWORD category,
    UINT level,
    LPCSTR lpszFormat,  ...);
```

### <a name="parameters"></a>Parametri

*Exp*<br/>
[in] Stringa da inviare alla finestra di output o a qualsiasi applicazione che tratce questi messaggi.

*Categoria*<br/>
[in] Tipo di evento o metodo su cui eseguire il report. Vedere le osservazioni per un elenco di categorie.

*Livello*<br/>
[in] Livello di traccia da segnalare. Vedere la nota per i dettagli.

*Formato lpsz*<br/>
[in] Stringa `printf`di formato -style da utilizzare per creare una stringa da inviare al dispositivo di dump.

### <a name="remarks"></a>Osservazioni

La forma breve di ATLTRACE2 scrive una stringa nella finestra di output del debugger. Il secondo form di ATLTRACE2 scrive anche l'output nella finestra di output del debugger, ma è soggetto alle impostazioni dello strumento di traccia ATL/MFC (vedere [Esempio ATLTraceTool](../../overview/visual-cpp-samples.md)). Ad esempio, se si imposta *il livello* su 4 e lo strumento di traccia ATL/MFC al livello 0, il messaggio non verrà visualizzato. *livello* può essere 0, 1, 2, 3 o 4. L'impostazione predefinita, 0, segnala solo i problemi più gravi.

Il parametro *category* elenca i flag di traccia da impostare. Questi flag corrispondono ai tipi di metodi per i quali si desidera eseguire il report. Nelle tabelle seguenti sono elencati i flag di traccia validi che è possibile utilizzare per il parametro *category.*

### <a name="atl-trace-flags"></a>Flag di traccia ATL

|Categoria ATL|Descrizione|
|------------------|-----------------|
|`atlTraceGeneral`|Report su tutte le applicazioni ATL. Valore predefinito.|
|`atlTraceCOM`|Report sui metodi COM.|
|`atlTraceQI`|Report sulle chiamate QueryInterface.|
|`atlTraceRegistrar`|Rapporti sulla registrazione degli oggetti.|
|`atlTraceRefcount`|Rapporti sulla modifica del conteggio dei riferimenti.|
|`atlTraceWindowing`|Rapporti sui metodi di Windows; ad esempio, segnala un ID mappa messaggi non valido.|
|`atlTraceControls`|Rapporti sui controlli; ad esempio, segnala quando un controllo o la relativa finestra viene distrutta.|
|`atlTraceHosting`|Segnala l'hosting dei messaggi; ad esempio, segnala quando un client in un contenitore è attivato.|
|`atlTraceDBClient`|Report sul modello consumer OLE DB; ad esempio, quando una chiamata a GetData ha esito negativo, l'output può contenere HRESULT.|
|`atlTraceDBProvider`|Report sul modello provider OLE DB; ad esempio, segnala se la creazione di una colonna non è riuscita.|
|`atlTraceSnapin`|Report per l'applicazione MMC SnapIn.|
|`atlTraceNotImpl`|Segnala che la funzione indicata non è implementata.|
|`atlTraceAllocation`|Segnala i messaggi stampati dagli strumenti di debug della memoria in atldbgmem.h.|

### <a name="mfc-trace-flags"></a>Flag di traccia MFC

|Categoria MFC|Descrizione|
|------------------|-----------------|
|`traceAppMsg`|Scopo generale, messaggi MFC. Sempre consigliato.|
|`traceDumpContext`|Messaggi da [CDumpContext](../../mfc/reference/cdumpcontext-class.md).|
|`traceWinMsg`|Messaggi dal codice di gestione dei messaggi di MFC.|
|`traceMemory`|Messaggi dal codice di gestione della memoria di MFC.|
|`traceCmdRouting`|Messaggi dal codice di routing dei comandi di Windows di MFC.|
|`traceHtml`|Messaggi dal supporto della finestra di dialogo DHTML di MFC.|
|`traceSocket`|Messaggi dal supporto socket di MFC.|
|`traceOle`|Messaggi dal supporto OLE di MFC.|
|`traceDatabase`|Messaggi dal supporto del database MFC.|
|`traceInternet`|Messaggi dal supporto Internet di MFC.|

Per dichiarare una categoria di traccia personalizzata, dichiarare un'istanza globale della `CTraceCategory` classe come segue:

[!code-cpp[NVC_ATL_Utilities#109](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_3.cpp)]

Il nome della categoria, MY_CATEGORY in questo esempio, è il nome specificato per il parametro *category.* Il primo parametro è il nome della categoria che verrà visualizzato nello strumento di traccia ATL/MFC. Il secondo parametro è il livello di traccia predefinito. Questo parametro è facoltativo e il livello di traccia predefinito è 0.This parameter is optional, and the default trace level is 0.

Per utilizzare una categoria definita dall'utente:

[!code-cpp[NVC_ATL_Utilities#110](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_4.cpp)]

Per specificare che si desidera filtrare i messaggi di traccia, inserire `#include <atlbase.h>` le definizioni per queste macro in Stdafx.h prima dell'istruzione.

In alternativa, è possibile impostare il filtro nelle direttive per il preprocessore nella finestra di dialogo **Pagine delle proprietà.** Fare clic sulla scheda **Preprocessore** e quindi inserire il globale nella casella di modifica **Definizioni preprocessore.**

Atlbase.h contiene le definizioni predefinite delle macro ATLTRACE2 e queste definizioni verranno utilizzate se non si definiscono questi simboli prima dell'elaborazione di atlbase.h.

Nelle build di rilascio ATLTRACE2 viene compilato in `(void) 0`.

ATLTRACE2 limita il contenuto della stringa da inviare al dispositivo di dump a non più di 1023 caratteri, dopo la formattazione.

ATLTRACE e ATLTRACE2 hanno lo stesso comportamento, ATLTRACE è incluso per la compatibilità con le versioni precedenti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#111](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_5.cpp)]

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)<br/>
[Funzioni globali di debug e segnalazione erroriDebugging and Error Reporting Global Functions](../../atl/reference/debugging-and-error-reporting-global-functions.md)

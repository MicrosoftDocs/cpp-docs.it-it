---
description: 'Altre informazioni su: debug e macro di segnalazione errori'
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
ms.openlocfilehash: 573c3f341ff9f9df58337b75e1080dde960d232c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97139945"
---
# <a name="debugging-and-error-reporting-macros"></a>Macro di debug e segnalazione errori

Queste macro forniscono funzionalità di debug e di traccia utili.

|Nome|Description|
|-|-|
|[_ATL_DEBUG_INTERFACES](#_atl_debug_interfaces)|Scrive, nella finestra di output, qualsiasi perdita di interfaccia che viene rilevata quando `_Module.Term` viene chiamato il metodo.|
|[_ATL_DEBUG_QI](#_atl_debug_qi)|Scrive tutte le chiamate a nella `QueryInterface` finestra di output.|
|[ATLASSERT](#atlassert)|Esegue la stessa funzionalità della macro [_ASSERTE](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) trovata nella libreria di runtime del linguaggio C.|
|[ATLENSURE](#atlensure)|Esegue la convalida dei parametri. Chiama `AtlThrow` se necessario|
|[ATLTRACENOTIMPL](#atltracenotimpl)|Invia un messaggio al dispositivo di dump che la funzione specificata non è implementata.|
|[ATLTRACE](#atltrace)|Segnala gli avvisi a un dispositivo di output, ad esempio la finestra del debugger, in base ai flag e ai livelli indicati. Incluso per la compatibilità con le versioni precedenti.|
|[ATLTRACE2](#atltrace2)|Segnala gli avvisi a un dispositivo di output, ad esempio la finestra del debugger, in base ai flag e ai livelli indicati.|

## <a name="_atl_debug_interfaces"></a><a name="_atl_debug_interfaces"></a> _ATL_DEBUG_INTERFACES

Definire questa macro prima di includere tutti i file di intestazione ATL per tracciare tutti gli `AddRef` `Release` elementi e le chiamate sulle interfacce dei componenti alla finestra di output.

```
#define _ATL_DEBUG_INTERFACES
```

### <a name="remarks"></a>Commenti

L'output di traccia verrà visualizzato come illustrato di seguito:

`ATL: QIThunk - 2008         AddRef  :   Object = 0x00d81ba0   Refcount = 1   CBug - IBug`

La prima parte di ogni traccia sarà sempre `ATL: QIThunk` . Next è un valore che identifica il *thunk di interfaccia* particolare usato. Un thunk di interfaccia è un oggetto usato per mantenere un conteggio dei riferimenti e fornire la funzionalità di traccia usata qui. Un nuovo thunk di interfaccia viene creato a ogni chiamata a `QueryInterface` tranne che per le richieste per l' `IUnknown` interfaccia (in questo caso, viene restituito lo stesso thunk ogni volta per conformarsi alle regole di identità di com).

Successivamente, verrà visualizzato `AddRef` o `Release` indicato il metodo chiamato. In seguito, verrà visualizzato un valore che identifica l'oggetto di cui è stato modificato il conteggio dei riferimenti dell'interfaccia. Il valore tracciato è il **`this`** puntatore dell'oggetto.

Il conteggio dei riferimenti tracciato è il conteggio dei riferimenti sul thunk dopo che è `AddRef` `Release` stato chiamato o. Si noti che questo conteggio dei riferimenti potrebbe non corrispondere al conteggio dei riferimenti per l'oggetto. Ogni thunk mantiene un conteggio dei riferimenti per consentire una conformità completa alle regole di conteggio dei riferimenti di COM.

L'ultima parte delle informazioni tracciate è il nome dell'oggetto e l'interfaccia interessata dalla `AddRef` `Release` chiamata o.

Eventuali perdite di interfaccia rilevate quando il server viene arrestato e `_Module.Term` viene chiamato verrà registrato come segue:

`ATL: QIThunk - 2005         LEAK    :   Object = 0x00d81ca0   Refcount = 1   MaxRefCount = 1   CBug - IBug`

Le informazioni fornite qui vengono mappate direttamente alle informazioni fornite nelle istruzioni di traccia precedenti, pertanto è possibile esaminare i conteggi dei riferimenti per tutta la durata di un thunk di interfaccia. Inoltre, si ottiene un'indicazione del numero massimo di riferimenti su tale thunk di interfaccia.

> [!NOTE]
> _ATL_DEBUG_INTERFACES può essere usato nelle compilazioni al dettaglio.

## <a name="_atl_debug_qi"></a><a name="_atl_debug_qi"></a> _ATL_DEBUG_QI

Scrive tutte le chiamate a nella `QueryInterface` finestra di output.

```
#define _ATL_DEBUG_QI
```

### <a name="remarks"></a>Commenti

Se una chiamata a ha `QueryInterface` esito negativo, la finestra di output visualizzerà:

*Nome interfaccia* - `failed`

## <a name="atlassert"></a><a name="atlassert"></a> ATLASSERT

La macro ATLASSERT esegue la stessa funzionalità della macro [_ASSERTE](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) trovata nella libreria di runtime del linguaggio C.

```
ATLASSERT(booleanExpression);
```

### <a name="parameters"></a>Parametri

*booleanExpression*<br/>
Espressione (inclusi i puntatori) che restituisce un valore diverso da zero oppure 0.

### <a name="remarks"></a>Commenti

Nelle build di debug, ATLASSERT valuta *BooleanExpression* e genera un report di debug quando il risultato è false.

### <a name="requirements"></a>Requisiti

**Intestazione:** atldef. h

## <a name="atlensure"></a><a name="atlensure"></a> ATLENSURE

Questa macro viene utilizzata per convalidare i parametri passati a una funzione.

```
ATLENSURE(booleanExpression);
ATLENSURE_THROW(booleanExpression, hr);
```

### <a name="parameters"></a>Parametri

*booleanExpression*<br/>
Specifica un'espressione booleana da testare.

*h*<br/>
Specifica un codice di errore da restituire.

### <a name="remarks"></a>Commenti

Queste macro forniscono un meccanismo per rilevare e notificare all'utente l'utilizzo non corretto dei parametri.

La macro chiama ATLASSERT e se la condizione ha esito negativo chiama `AtlThrow` .

Nel caso di ATLENSURE, `AtlThrow` viene chiamato con E_FAIL.

In ATLENSURE_THROW caso, `AtlThrow` viene chiamato con il valore HRESULT specificato.

La differenza tra ATLENSURE e ATLASSERT è che ATLENSURE genera un'eccezione nelle build di rilascio, nonché nelle build di debug.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#108](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_1.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="atltracenotimpl"></a><a name="atltracenotimpl"></a> ATLTRACENOTIMPL

Nelle build di debug di ATL Invia la stringa " *funcname* non è implementato" al dispositivo di dump e restituisce E_NOTIMPL.

```
ATLTRACENOTIMPL(funcname);
```

### <a name="parameters"></a>Parametri

*funcname*<br/>
in Stringa che contiene il nome della funzione non implementata.

### <a name="remarks"></a>Commenti

Nelle build di rilascio, restituisce semplicemente E_NOTIMPL.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#127](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_2.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** ATLTRACE. h

## <a name="atltrace"></a><a name="atltrace"></a> ATLTRACE

Segnala gli avvisi a un dispositivo di output, ad esempio la finestra del debugger, in base ai flag e ai livelli indicati. Incluso per la compatibilità con le versioni precedenti.

```
ATLTRACE(exp);

ATLTRACE(
    DWORD category,
    UINT  level,
    LPCSTR lpszFormat, ...);
```

### <a name="parameters"></a>Parametri

*exp*<br/>
in Stringa e variabili da inviare alla finestra di output o a qualsiasi applicazione che intrappola questi messaggi.

*category*<br/>
in Tipo di evento o metodo su cui creare un report. Per un elenco di categorie, vedere la sezione Osservazioni.

*level*<br/>
in Livello di traccia da segnalare. Per informazioni dettagliate, vedere la sezione Osservazioni.

*lpszFormat*<br/>
in Stringa formattata da inviare al dispositivo di dump.

### <a name="remarks"></a>Commenti

Per una descrizione di ATLTRACE, vedere [ATLTRACE2](#atltrace2) . ATLTRACE e ATLTRACE2 hanno lo stesso comportamento, ATLTRACE è incluso per la compatibilità con le versioni precedenti.

## <a name="atltrace2"></a><a name="atltrace2"></a> ATLTRACE2

Segnala gli avvisi a un dispositivo di output, ad esempio la finestra del debugger, in base ai flag e ai livelli indicati.

```
ATLTRACE2(exp);

ATLTRACE2(
    DWORD category,
    UINT level,
    LPCSTR lpszFormat,  ...);
```

### <a name="parameters"></a>Parametri

*exp*<br/>
in Stringa da inviare alla finestra di output o a qualsiasi applicazione che intrappola questi messaggi.

*category*<br/>
in Tipo di evento o metodo su cui creare un report. Per un elenco di categorie, vedere la sezione Osservazioni.

*level*<br/>
in Livello di traccia da segnalare. Per informazioni dettagliate, vedere la sezione Osservazioni.

*lpszFormat*<br/>
in `printf`Stringa di formato in stile da utilizzare per creare una stringa da inviare al dispositivo di dump.

### <a name="remarks"></a>Commenti

La forma abbreviata di ATLTRACE2 scrive una stringa nella finestra di output del debugger. Il secondo formato di ATLTRACE2 scrive anche l'output nella finestra di output del debugger, ma è soggetto alle impostazioni dello strumento di traccia ATL/MFC (vedere l' [esempio ATLTraceTool](../../overview/visual-cpp-samples.md)). Se, ad esempio, si imposta *Level* su 4 e lo strumento di traccia ATL/MFC sul livello 0, il messaggio non verrà visualizzato. il *livello* può essere 0, 1, 2, 3 o 4. Il valore predefinito 0 indica solo i problemi più gravi.

Il parametro *Category* elenca i flag di traccia da impostare. Questi flag corrispondono ai tipi di metodi per i quali si desidera creare un report. Nelle tabelle seguenti sono elencati i flag di traccia validi che è possibile utilizzare per il parametro *Category* .

### <a name="atl-trace-flags"></a>Flag di traccia ATL

|Categoria ATL|Description|
|------------------|-----------------|
|`atlTraceGeneral`|Report su tutte le applicazioni ATL. Valore predefinito.|
|`atlTraceCOM`|Report sui metodi COM.|
|`atlTraceQI`|Segnala le chiamate QueryInterface.|
|`atlTraceRegistrar`|Segnala la registrazione degli oggetti.|
|`atlTraceRefcount`|Segnala la modifica del conteggio dei riferimenti.|
|`atlTraceWindowing`|Report sui metodi di Windows; ad esempio, segnala un ID mappa messaggi non valido.|
|`atlTraceControls`|Report sui controlli; ad esempio, segnala quando un controllo o la relativa finestra viene distrutta.|
|`atlTraceHosting`|Report che ospitano messaggi; ad esempio, segnala quando un client in un contenitore viene attivato.|
|`atlTraceDBClient`|Report su OLE DB modello consumer; ad esempio, quando una chiamata a GetData ha esito negativo, l'output può contenere HRESULT.|
|`atlTraceDBProvider`|Report sul modello di provider OLE DB; ad esempio, segnala se la creazione di una colonna ha avuto esito negativo.|
|`atlTraceSnapin`|Report per l'applicazione snap-in MMC.|
|`atlTraceNotImpl`|Segnala che la funzione indicata non è implementata.|
|`atlTraceAllocation`|Segnala i messaggi stampati dagli strumenti di debug della memoria in atldbgmem. h.|

### <a name="mfc-trace-flags"></a>Flag di traccia MFC

|Categoria MFC|Description|
|------------------|-----------------|
|`traceAppMsg`|Messaggi MFC, utilizzo generico. Sempre consigliato.|
|`traceDumpContext`|Messaggi provenienti da [CDumpContext](../../mfc/reference/cdumpcontext-class.md).|
|`traceWinMsg`|Messaggi dal codice di gestione dei messaggi di MFC.|
|`traceMemory`|Messaggi dal codice di gestione della memoria di MFC.|
|`traceCmdRouting`|Messaggi dal codice di routing dei comandi di Windows di MFC.|
|`traceHtml`|Messaggi dal supporto della finestra di dialogo DHTML di MFC.|
|`traceSocket`|Messaggi dal supporto di socket di MFC.|
|`traceOle`|Messaggi dal supporto OLE di MFC.|
|`traceDatabase`|Messaggi dal supporto del database di MFC.|
|`traceInternet`|Messaggi dal supporto Internet di MFC.|

Per dichiarare una categoria di traccia personalizzata, dichiarare un'istanza globale della `CTraceCategory` classe come indicato di seguito:

[!code-cpp[NVC_ATL_Utilities#109](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_3.cpp)]

Il nome della categoria, MY_CATEGORY in questo esempio, è il nome specificato per il parametro *Category* . Il primo parametro è il nome della categoria che verrà visualizzato nello strumento di traccia ATL/MFC. Il secondo parametro è il livello di traccia predefinito. Questo parametro è facoltativo e il livello di traccia predefinito è 0.

Per usare una categoria definita dall'utente:

[!code-cpp[NVC_ATL_Utilities#110](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_4.cpp)]

Per specificare che si desidera filtrare i messaggi di traccia, inserire le definizioni per queste macro in stdafx. h prima dell' `#include <atlbase.h>` istruzione.

In alternativa, è possibile impostare il filtro nelle direttive per il preprocessore nella finestra di dialogo **pagine delle proprietà** . Fare clic sulla scheda **preprocessore** e quindi inserire la tabella globale nella casella di modifica **definizioni preprocessore** .

Atlbase. h contiene le definizioni predefinite delle macro ATLTRACE2 e queste definizioni verranno usate se non si definiscono questi simboli prima dell'elaborazione di atlbase. h.

Nelle build di rilascio ATLTRACE2 viene compilato in `(void) 0` .

ATLTRACE2 limita il contenuto della stringa da inviare al dispositivo di dump a non più di 1023 caratteri, dopo la formattazione.

ATLTRACE e ATLTRACE2 hanno lo stesso comportamento, ATLTRACE è incluso per la compatibilità con le versioni precedenti.

### <a name="example"></a>Esempio

[!code-cpp[NVC_ATL_Utilities#111](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_5.cpp)]

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)<br/>
[Funzioni globali di debug e segnalazione errori](../../atl/reference/debugging-and-error-reporting-global-functions.md)

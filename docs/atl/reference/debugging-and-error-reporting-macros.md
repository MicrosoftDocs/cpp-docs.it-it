---
title: Macro di debug e la segnalazione errori | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- atldef/ATL::_ATL_DEBUG_INTERFACES
- atldef/ATL::_ATL_DEBUG_QI
- atldef/ATL::ATLASSERT
- afx/ATL::ATLENSURE
- atltrace/ATL::ATLTRACENOTIMPL
- atltrace/ATL::ATLTRACE
dev_langs: C++
helpviewer_keywords: macros, error reporting
ms.assetid: 4da9b87f-ec5c-4a32-ab93-637780909b9d
caps.latest.revision: "18"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9098b944f70ab4e4448fe40aa2347b0128e6e1a7
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="debugging-and-error-reporting-macros"></a>Macro di debug e la segnalazione errori
Queste macro forniscono utili funzionalità di debug e traccia.  
  
|||  
|-|-|  
|[ATL_DEBUG_INTERFACES](#_atl_debug_interfaces)|Scrive nella finestra di output, qualsiasi interfaccia perdite che vengono rilevati quando `_Module.Term` viene chiamato.|  
|[AD](#_atl_debug_qi)|Scrive tutte le chiamate a `QueryInterface` nella finestra di output.|  
|[ATLASSERT](#atlassert)|Esegue la stessa funzionalità come il [ASSERTE](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) macro trovato nella libreria di runtime C.|  
|[ATLENSURE](#atlensure)|Esegue la convalida di parametri. Chiamare `AtlThrow` se necessario|  
|[ATLTRACENOTIMPL](#atltracenotimpl)|Invia un messaggio per il dispositivo di dump che la funzione specificata non è implementata.|  
|[ATLTRACE](#alttrace)|Segnala gli avvisi per un dispositivo di output, ad esempio la finestra del debugger, in base al flag indicato e i livelli. Incluso per compatibilità con le versioni precedenti.|  
|[ATLTRACE2](#atltrace2)|Segnala gli avvisi per un dispositivo di output, ad esempio la finestra del debugger, in base al flag indicato e i livelli.|  
  
##  <a name="_atl_debug_interfaces"></a>ATL_DEBUG_INTERFACES  
 Definire questa macro prima di includere i file di intestazione ATL per tracciare tutte `AddRef` e **versione** chiama nelle interfacce dei componenti per la finestra di output.  
  
```
#define _ATL_DEBUG_INTERFACES
```  
  
### <a name="remarks"></a>Note  
 L'output di traccia verrà visualizzato come illustrato di seguito:  
  
 `ATL: QIThunk - 2008         AddRef  :   Object = 0x00d81ba0   Refcount = 1   CBug - IBug`  
  
 La prima parte di ogni traccia sarà sempre `ATL: QIThunk`. Di seguito è riportato un valore che identifica la particolare *interfaccia thunk* in uso. Thunk un'interfaccia è un oggetto utilizzato per mantenere un conteggio dei riferimenti e fornire la funzionalità di analisi utilizzata in questo argomento. Viene creato un thunk di interfaccia di nuovo a ogni chiamata a `QueryInterface` ad eccezione delle richieste per il **IUnknown** interfaccia (in questo caso, il thunk stesso viene restituito ogni volta essere conforme alle regole di identità COM).  
  
 Successivamente si noterà `AddRef` o **versione** che indica il metodo che è stato chiamato. Successivamente, verrà visualizzato un valore che identifica l'oggetto il cui conteggio dei riferimenti dell'interfaccia è stata modificata. Il valore viene tracciato il **questo** puntatore dell'oggetto.  
  
 Il conteggio dei riferimenti è individuabile è il numero di riferimento su tale thunk dopo `AddRef` o **versione** è stato chiamato. Si noti che questo conteggio dei riferimenti potrebbe non corrispondere il conteggio dei riferimenti per l'oggetto. Ogni thunk mantiene il proprio conteggio dei riferimenti che consentono di completamente conformi alle regole di conteggio dei riferimenti COM.  
  
 Nella parte finale di informazioni di traccia è il nome dell'oggetto e l'interfaccia siano interessati dal `AddRef` o **versione** chiamare.  
  
 Qualsiasi interfaccia perdite rilevate quando il server viene arrestato e `_Module.Term` viene chiamata registrato simile al seguente:  
  
 `ATL: QIThunk - 2005         LEAK    :   Object = 0x00d81ca0   Refcount = 1   MaxRefCount = 1   CBug - IBug`  
  
 Le informazioni fornite qui esegue il mapping direttamente alle informazioni fornite nelle istruzioni di traccia precedente, pertanto è possibile esaminare i conteggi dei riferimenti per tutta la durata intera di un thunk di interfaccia. È inoltre ottenere un'indicazione del conteggio dei riferimenti massimo su thunk tale interfaccia.  
  
> [!NOTE]
> `_ATL_DEBUG_INTERFACES`utilizzabile nelle build in versione finale.  
  
##  <a name="_atl_debug_qi"></a>AD  
 Scrive tutte le chiamate a `QueryInterface` nella finestra di output.  
  
```
#define _ATL_DEBUG_QI
```  
  
### <a name="remarks"></a>Note  
 Se una chiamata a `QueryInterface` non riuscita, verrà visualizzata la finestra di output:  
  
 *nome dell'interfaccia* - `failed`  
  
##  <a name="atlassert"></a>ATLASSERT  
 Il `ATLASSERT` macro esegue la stessa funzionalità come il [ASSERTE](../../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) macro trovato nella libreria di runtime C.  
  
```
ATLASSERT(booleanExpression);
```  
  
### <a name="parameters"></a>Parametri  
 `booleanExpression`  
 Espressione (inclusi i puntatori) che restituisce un valore diverso da zero oppure 0.  
  
### <a name="remarks"></a>Note  
 Nelle build di debug `ATLASSERT` restituisce `booleanExpression` e genera un report di debug quando il risultato è false.  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldef.h  
    
##  <a name="atlensure"></a>ATLENSURE  
 Questa macro viene usata per convalidare i parametri passati a una funzione.  
  
```
ATLENSURE(booleanExpression);
ATLENSURE_THROW(booleanExpression, hr);
```  
  
### <a name="parameters"></a>Parametri  
 `booleanExpression`  
 Specifica un'espressione booleana da testare.  
  
 `hr`  
 Specifica un codice di errore da restituire.  
  
### <a name="remarks"></a>Note  
 Queste macro forniscono un meccanismo per rilevare e notifica all'utente di utilizzo del parametro non corretto.  
  
 Le chiamate della macro `ATLASSERT` e se la condizione non riesce a chiamate `AtlThrow`.  
  
 Nel **ATLENSURE** case, `AtlThrow` viene chiamato con E_FAIL.  
  
 Nel **ATLENSURE_THROW** case, `AtlThrow` viene chiamato con il valore HRESULT specificato.  
  
 La differenza tra **ATLENSURE** e `ATLASSERT` che **ATLENSURE** genera un'eccezione in versione compila anche come le compilazioni di Debug.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#108](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_1.cpp)]  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  

##  <a name="atltracenotimpl"></a>ATLTRACENOTIMPL  
 Nelle build di debug di ATL, invia la stringa " `funcname` non implementata" per il dispositivo di dump e restituisce **E_NOTIMPL**.  
  
```
ATLTRACENOTIMPL(funcname);
```  
  
### <a name="parameters"></a>Parametri  
 `funcname`  
 [in] Stringa contenente il nome della funzione che non è implementata.  
  
### <a name="remarks"></a>Note  
 Nelle build di rilascio, restituisce semplicemente **E_NOTIMPL**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#127](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_2.cpp)]  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atltrace.h 

##  <a name="atltrace"></a>ATLTRACE
 Segnala gli avvisi per un dispositivo di output, ad esempio la finestra del debugger, in base al flag indicato e i livelli. Incluso per compatibilità con le versioni precedenti.  
  
```
ATLTRACE(exp);

ATLTRACE(  
    DWORD category,
    UINT  level,
    LPCSTR lpszFormat, ...);
```  
  
### <a name="parameters"></a>Parametri  
 `exp`  
 [in] Le variabili stringa e inviare per la finestra di output di Visual C++ o in qualsiasi applicazione che vengono intercettati questi messaggi.  
  
 `category`  
 [in] Tipo di evento o un metodo in cui al report. Vedere la sezione Osservazioni per un elenco di categorie.  
  
 `level`  
 [in] Il livello di traccia al report. Vedere la sezione Osservazioni per informazioni dettagliate.  
  
 `lpszFormat`  
 [in] La stringa formattata per inviare al dispositivo di dump.  
  
### <a name="remarks"></a>Note  
 Vedere [ATLTRACE2](#atltrace2) per una descrizione di **ATLTRACE**. **ATLTRACE** e `ATLTRACE2` hanno lo stesso comportamento **ATLTRACE** è inclusa per compatibilità con le versioni precedenti.  
  
##  <a name="atltrace2"></a>ATLTRACE2  
 Segnala gli avvisi per un dispositivo di output, ad esempio la finestra del debugger, in base al flag indicato e i livelli.  
  
```
ATLTRACE2(exp);

ATLTRACE2(
    DWORD category,
    UINT level,
    LPCSTRlpszFormat,  ...);
```  
  
### <a name="parameters"></a>Parametri  
 `exp`  
 [in] La stringa da inviare per la finestra di output di Visual C++ o in qualsiasi applicazione che vengono intercettati questi messaggi.  
  
 `category`  
 [in] Tipo di evento o un metodo in cui al report. Vedere la sezione Osservazioni per un elenco di categorie.  
  
 `level`  
 [in] Il livello di traccia al report. Vedere la sezione Osservazioni per informazioni dettagliate.  
  
 `lpszFormat`  
 [in] Il `printf`-stringa di formato da utilizzare per creare una stringa da inviare al dispositivo di dump di stile.  
  
### <a name="remarks"></a>Note  
 La versione abbreviata di `ATLTRACE2` scrive una stringa per il debugger della finestra di output. La seconda forma di `ATLTRACE2` anche scrive l'output alla finestra di output del debugger, ma è soggetta alle impostazioni dello strumento di traccia ATL/MFC (vedere [esempio ATLTraceTool](../../visual-cpp-samples.md)). Ad esempio, se si imposta `level` 4 e lo strumento di traccia ATL/MFC a livello 0, non verrà visualizzato il messaggio. *livello* può essere 0, 1, 2, 3 o 4. Il valore predefinito, 0, restituisce solo i problemi più gravi.  
  
 Il `category` i flag di traccia da impostare elenchi di parametri. Questi flag corrispondono ai tipi di metodi per il quale desidera creare il report. Nella tabella seguente sono elencati i flag di traccia valido, è possibile utilizzare per il `category` parametro.  
  
### <a name="atl-trace-flags"></a>Flag di traccia ATL  
  
|Categoria ATL|Descrizione|  
|------------------|-----------------|  
|`atlTraceGeneral`|Report su tutte le applicazioni ATL. Valore predefinito.|  
|`atlTraceCOM`|Report nei metodi COM.|  
|`atlTraceQI`|Report sulle chiamate QueryInterface.|  
|`atlTraceRegistrar`|Report della registrazione di oggetti.|  
|`atlTraceRefcount`|Report sulla modifica di conteggio dei riferimenti.|  
|`atlTraceWindowing`|Report sui metodi di windows; ad esempio, restituisce un ID mappa del messaggio non valido.|  
|`atlTraceControls`|Report sui controlli; ad esempio, i report quando viene eliminata un controllo o la finestra.|  
|`atlTraceHosting`|Report che ospita i messaggi. report, ad esempio, quando un client in un contenitore è attivato.|  
|`atlTraceDBClient`|Report nel modello di Consumer OLE DB. ad esempio, quando una chiamata a ha esito negativo GetData, l'output può contenere il valore HRESULT.|  
|`atlTraceDBProvider`|Report nel modello di Provider OLE DB. indica, ad esempio, se non è riuscita la creazione di una colonna.|  
|`atlTraceSnapin`|Report per l'applicazione dello snap-in MMC.|  
|`atlTraceNotImpl`|Indica che la funzione indicata non è implementata.|  
|**atlTraceAllocation**|Segnala i messaggi di stampa per la memoria in atldbgmem.h strumenti di debug.|  
  
### <a name="mfc-trace-flags"></a>Flag di traccia MFC  
  
|Categoria MFC|Descrizione|  
|------------------|-----------------|  
|**traceAppMsg**|Interesse generale, i messaggi MFC. Sempre consigliato.|  
|**traceDumpContext**|I messaggi generati dal [CDumpContext](../../mfc/reference/cdumpcontext-class.md).|  
|**traceWinMsg**|Messaggi dal codice di gestione dei messaggi MFC.|  
|**traceMemory**|Messaggi dal codice di gestione della memoria di MFC.|  
|**traceCmdRouting**|Codice di routing di comando di messaggi da Windows di MFC.|  
|**traceHtml**|Messaggi dal supporto di finestra di dialogo DHTML MFC.|  
|**traceSocket**|Messaggi dal socket il supporto di MFC.|  
|**traceOle**|Messaggi dal supporto OLE MFC.|  
|**traceDatabase**|Messaggi dal supporto di MFC per database.|  
|**traceInternet**|Messaggi da Internet il supporto di MFC.|  
  
 Per dichiarare una categoria di traccia personalizzato, dichiarare un'istanza globale del `CTraceCategory` classe come indicato di seguito:  
  
 [!code-cpp[NVC_ATL_Utilities#109](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_3.cpp)]  
  
 Il nome della categoria, `MY_CATEGORY` in questo esempio, è il nome specificato per il `category` parametro. Il primo parametro è il nome della categoria che verrà visualizzata nello strumento di traccia ATL/MFC. Il secondo parametro è il livello di traccia predefinito. Questo parametro è facoltativo e il livello di traccia predefinito è 0.  
  
 Per utilizzare una categoria definita dall'utente:  
  
 [!code-cpp[NVC_ATL_Utilities#110](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_4.cpp)]  
  
 Per specificare che si desidera filtrare i messaggi di traccia, inserire le definizioni per queste macro in stdafx. h prima di `#include <atlbase.h>` istruzione.  
  
 In alternativa, è possibile impostare il filtro nelle direttive del preprocessore nel **pagine delle proprietà** la finestra di dialogo. Fare clic su di **preprocessore** scheda e quindi inserire globale nel **definizioni preprocessore** casella di modifica.  
  
 Atlbase. h contiene le definizioni default del `ATLTRACE2` macro e le definizioni da utilizzare se non si definiscono questi simboli prima che venga elaborato atlbase. h.  
  
 Nelle build di rilascio, `ATLTRACE2` viene compilato in `(void) 0`.  
  
 `ATLTRACE2`Limita il contenuto della stringa da inviare al dispositivo di dump a non più di 1023 caratteri, dopo la formattazione.  
  
 **ATLTRACE** e `ATLTRACE2` hanno lo stesso comportamento **ATLTRACE** è inclusa per compatibilità con le versioni precedenti.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Utilities#111](../../atl/codesnippet/cpp/debugging-and-error-reporting-macros_5.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)   
 [Funzioni globali di debug e segnalazione errori](../../atl/reference/debugging-and-error-reporting-global-functions.md)

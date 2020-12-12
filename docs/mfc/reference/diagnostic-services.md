---
description: 'Altre informazioni su: Servizi di diagnostica'
title: Servizi diagnostici
ms.date: 11/04/2016
helpviewer_keywords:
- diagnosi [MFC]s, diagnostic services
- diagnostic macros [MFC], list of general MFC
- services [MFC], diagnostic
- MFC, diagnostic services
- general diagnostic functions and variables [MFC]
- diagnostics [MFC], diagnostic functions and variables
- diagnostics [MFC], list of general MFC
- diagnosis [MFC], diagnostic functions and variables
- diagnosis [MFC], list of general MFC
- general diagnostic macros in MFC
- diagnostic macros [MFC]
- diagnostic services [MFC]
- object diagnostic functions in MFC
- diagnostics [MFC], diagnostic services
- diagnostic functions and variables [MFC]
ms.assetid: 8d78454f-9fae-49c2-88c9-d3fabd5393e8
ms.openlocfilehash: 3d2b7bd303fc062aa520497e649430f53f7667c5
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97220071"
---
# <a name="diagnostic-services"></a>Servizi diagnostici

La libreria Microsoft Foundation Class fornisce numerosi servizi di diagnostica che semplificano il debug dei programmi. I servizi di diagnostica includono macro e funzioni globali che consentono di tenere traccia delle allocazioni della memoria del programma, scaricare il contenuto degli oggetti in fase di esecuzione e stampare i messaggi di debug in fase di esecuzione. Le macro e funzioni globali per servizi di diagnostica sono raggruppate nelle categorie seguenti:

- Macro diagnostiche generali

- Funzioni e variabili di diagnostica generale

- Funzioni di diagnostica oggetti

Queste macro e funzioni sono disponibili per tutte le classi derivate da `CObject` nelle versioni di debug e rilascio di MFC. Tuttavia, all eccetto DEBUG_NEW e VERIFY non eseguono alcuna operazione nella versione di rilascio.

Nella libreria di debug, tutti i blocchi di memoria allocata sono racchiusi tra parentesi quadre con una serie di "byte guard". Se i byte vengono disturbati da un'operazione di scrittura non corretta della memoria, le routine di diagnostica possono segnalare un problema. Se si include la riga:

[!code-cpp[NVC_MFCCObjectSample#14](../../mfc/codesnippet/cpp/diagnostic-services_1.cpp)]

nel file di implementazione, tutte le chiamate a **`new`** archivieranno il nome file e il numero di riga in cui ha avuto luogo l'allocazione di memoria. La funzione [CMemoryState::D umpallobjectssince](cmemorystate-structure.md#dumpallobjectssince) visualizzerà queste informazioni aggiuntive, consentendo di identificare le perdite di memoria. Per ulteriori informazioni sull'output di diagnostica, vedere anche la classe [CDumpContext](../../mfc/reference/cdumpcontext-class.md) .

Inoltre, la libreria di runtime C supporta anche un set di funzioni di diagnostica che è possibile usare per eseguire il debug delle applicazioni. Per ulteriori informazioni, vedere [routine di debug](../../c-runtime-library/debug-routines.md) in riferimenti alla libreria Run-Time.

### <a name="mfc-general-diagnostic-macros"></a>Macro diagnostiche generali in MFC

|Nome|Description|
|-|-|
|[ASSERT](#assert)|Stampa un messaggio e quindi arresta il programma se l'espressione specificata restituisce FALSE nella versione di debug della libreria.|
|[ASSERT_KINDOF](#assert_kindof)|Verifica se un oggetto è un oggetto della classe specificata o di una classe derivata dalla classe specificata.|
|[ASSERT_VALID](#assert_valid)|Verifica la validità interna di un oggetto chiamando la relativa funzione membro `AssertValid` ; in genere sottoposta a override da `CObject`.|
|[DEBUG_NEW](#debug_new)|Fornisce un nome file e un numero di riga per tutte le allocazioni di oggetti in modalità di debug per trovare perdite di memoria.|
|[DEBUG_ONLY](#debug_only)|Simile ad ASSERT ma non verifica il valore dell'espressione; utile per il codice che deve essere eseguito solo in modalità di debug.|
|[ASSICURARSI e ENSURE_VALID](#ensure)|Usare per convalidare la correttezza dei dati.|
|[THIS_FILE](#this_file)|Si espande fino al nome del file che si sta compilando.|
|[TRACCIA](#trace)|Fornisce una funzionalità simile a `printf`-nella versione di debug della libreria.|
|[VERIFICARE](#verify)|Simile ad ASSERT ma valuta l'espressione nella versione di rilascio della libreria oltre che nella versione di debug.|

### <a name="mfc-general-diagnostic-variables-and-functions"></a>Funzioni e variabili di diagnostica generale in MFC

|Nome|Description|
|-|-|
|[afxDump](#afxdump)|Variabile globale che invia informazioni [CDumpContext](../../mfc/reference/cdumpcontext-class.md) alla finestra di output del debugger o al terminale di debug.|
|[afxMemDF](#afxmemdf)|Variabile globale che controlla il comportamento dell'allocatore di memoria di debug.|
|[AfxCheckError](#afxcheckerror)|Variabile globale usata per verificare l'oggetto SCODE passato per verificare se è un errore; in caso affermativo, genera l'errore appropriato.|
|[AfxCheckMemory](#afxcheckmemory)|Controlla l'integrità di tutta la memoria attualmente allocata.|
|[AfxDebugBreak](#afxdebugbreak)|Causa un'interruzioni nell'esecuzione.|
|[afxDump](#cdumpcontext_in_mfc)|Se viene chiamato quando nel debugger, esegue il dump dello stato di un oggetto durante il debug.|
|[afxDump](#afxdump)|Funzione interna che esegue il dump dello stato di un oggetto durante il debug.|
|[AfxDumpStack](#afxdumpstack)|Genera un'immagine dello stack corrente. Questa funzione è sempre collegata staticamente.|
|[AfxEnableMemoryLeakDump](#afxenablememoryleakdump)|Consente il dump della perdita di memoria.|
|[AfxEnableMemoryTracking](#afxenablememorytracking)|Attiva e disattiva rilevamento della memoria.|
|[AfxIsMemoryBlock](#afxismemoryblock)|Verifica che un blocco di memoria sia stato allocato in modo corretto.|
|[AfxIsValidAddress](#afxisvalidaddress)|Verifica che un intervallo di indirizzi di memoria si trovi all'interno dei limiti del programma.|
|[AfxIsValidString](#afxisvalidstring)|Determina se un puntatore a una stringa è valido.|
|[AfxSetAllocHook](#afxsetallochook)|Consente la chiamata di una funzione in ogni allocazione di memoria.|

### <a name="mfc-object-diagnostic-functions"></a>Funzioni di diagnostica oggetti in MFC

|Nome|Description|
|-|-|
|[AfxDoForAllClasses](#afxdoforallclasses)|Esegue una funzione specificata su tutte le classi derivate da `CObject`che supportano il controllo del tipo in fase di esecuzione.|
|[AfxDoForAllObjects](#afxdoforallobjects)|Esegue una funzione specificata su tutti `CObject` gli oggetti derivati da allocati con **`new`** .|

### <a name="mfc-compilation-macros"></a>Macro di compilazione MFC

|Nome|Description|
|-|-|
|[_AFX_SECURE_NO_WARNINGS](#afx_secure_no_warnings)|Evita gli avvisi del compilatore per l'utilizzo di funzioni MFC deprecate.|

## <a name="_afx_secure_no_warnings"></a><a name="afx_secure_no_warnings"></a> _AFX_SECURE_NO_WARNINGS

Evita gli avvisi del compilatore per l'utilizzo di funzioni MFC deprecate.

### <a name="syntax"></a>Sintassi

```
_AFX_SECURE_NO_WARNINGS
```

### <a name="example"></a>Esempio

Questo esempio di codice genera un avviso del compilatore se non sono state definite _AFX_SECURE_NO_WARNINGS.

```cpp
// define this before including any afx files in *pch.h* (*stdafx.h* in Visual Studio 2017 and earlier)
#define _AFX_SECURE_NO_WARNINGS
```

```cpp
CRichEditCtrl* pRichEdit = new CRichEditCtrl;
pRichEdit->Create(WS_CHILD|WS_VISIBLE|WS_BORDER|ES_MULTILINE,
   CRect(10,10,100,200), pParentWnd, 1);
char sz[256];
pRichEdit->GetSelText(sz);
```

## <a name="afxdebugbreak"></a><a name="afxdebugbreak"></a> AfxDebugBreak

Chiamare questa funzione per provocare un'operazione Break (nella posizione della chiamata a `AfxDebugBreak` ) nell'esecuzione della versione di debug dell'applicazione MFC.

### <a name="syntax"></a>Sintassi

```cpp
void AfxDebugBreak( );
```

### <a name="remarks"></a>Osservazioni

`AfxDebugBreak` non ha alcun effetto nelle versioni di rilascio di un'applicazione MFC e deve essere rimosso. Questa funzione deve essere utilizzata solo nelle applicazioni MFC. Utilizzare la versione API Win32, `DebugBreak` , per provocare un'interruzioni nelle applicazioni non MFC.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxver_. h

## <a name="assert"></a><a name="assert"></a> ASSERT

Valuta il relativo argomento.

```
ASSERT(booleanExpression)
```

### <a name="parameters"></a>Parametri

*booleanExpression*<br/>
Specifica un'espressione (inclusi i valori puntatore) che restituisce un valore diverso da zero o 0.

### <a name="remarks"></a>Commenti

Se il risultato è 0, la macro stampa un messaggio di diagnostica e interrompe il programma. Se la condizione è diversa da zero, non esegue alcuna operazione.

Il messaggio di diagnostica presenta la forma seguente:

`assertion failed in file <name> in line <num>`

dove *nome* è il nome del file di origine e *num* è il numero di riga dell'asserzione non riuscita nel file di origine.

Nella versione finale di MFC, ASSERT non valuta l'espressione e pertanto non interrompe il programma. Se l'espressione deve essere valutata indipendentemente dall'ambiente, utilizzare la macro VERIFY al posto di ASSERT.

> [!NOTE]
> Questa funzione è disponibile solo nella versione di debug di MFC.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#44](../../mfc/codesnippet/cpp/diagnostic-services_2.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="assert_kindof"></a><a name="assert_kindof"></a> ASSERT_KINDOF

Questa macro dichiara che l'oggetto a cui fa riferimento è un oggetto della classe specificata o è un oggetto di una classe derivata dalla classe specificata.

```
ASSERT_KINDOF(classname, pobject)
```

### <a name="parameters"></a>Parametri

*ClassName*<br/>
Nome di una `CObject` classe derivata da.

*pObject*<br/>
Puntatore a un oggetto classe.

### <a name="remarks"></a>Commenti

Il parametro *pObject* deve essere un puntatore a un oggetto e può essere **`const`** . Oggetto a cui fa riferimento e che la classe deve supportare le `CObject` informazioni sulle classi in fase di esecuzione. Ad esempio, per assicurarsi che `pDocument` sia un puntatore a un oggetto della `CMyDoc` classe o a uno dei relativi derivati, è possibile scrivere codice:

[!code-cpp[NVC_MFCDocView#194](../../mfc/codesnippet/cpp/diagnostic-services_3.cpp)]

L'uso della `ASSERT_KINDOF` macro è esattamente uguale alla codifica:

[!code-cpp[NVC_MFCDocView#195](../../mfc/codesnippet/cpp/diagnostic-services_4.cpp)]

Questa funzione funziona solo per le classi dichiarate con la [DECLARE_DYNAMIC] (Run-Time-Object-Model-Services. MD # declare_dynamic o [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) macro.

> [!NOTE]
> Questa funzione è disponibile solo nella versione di debug di MFC.

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="assert_valid"></a><a name="assert_valid"></a> ASSERT_VALID

Usare per testare le ipotesi sulla validità dello stato interno di un oggetto.

```
ASSERT_VALID(pObject)
```

### <a name="parameters"></a>Parametri

*pObject*<br/>
Specifica un oggetto di una classe derivata da `CObject` che dispone di una versione di override della `AssertValid` funzione membro.

### <a name="remarks"></a>Commenti

ASSERT_VALID chiama la `AssertValid` funzione membro dell'oggetto passato come argomento.

Nella versione finale di MFC ASSERT_VALID non esegue alcuna operazione. Nella versione di debug, convalida il puntatore, verifica se è NULL e chiama le `AssertValid` funzioni membro dell'oggetto. Se uno di questi test ha esito negativo, viene visualizzato un messaggio di avviso in modo analogo a [Assert](#assert).

> [!NOTE]
> Questa funzione è disponibile solo nella versione di debug di MFC.

Per ulteriori informazioni ed esempi, vedere [debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCObjectSample#19](../../mfc/codesnippet/cpp/diagnostic-services_5.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="debug_new"></a><a name="debug_new"></a> DEBUG_NEW

Aiuta a individuare le perdite di memoria.

```
#define  new DEBUG_NEW
```

### <a name="remarks"></a>Commenti

È possibile utilizzare DEBUG_NEW ovunque nel programma che in genere si utilizzerebbe l' **`new`** operatore per allocare l'archiviazione dell'heap.

In modalità di debug (quando viene definito il simbolo **_DEBUG** ), DEBUG_NEW tiene traccia del nome file e del numero di riga per ogni oggetto allocato. Quindi, quando si usa la funzione membro [CMemoryState::D umpallobjectssince](cmemorystate-structure.md#dumpallobjectssince) , ogni oggetto allocato con DEBUG_NEW viene visualizzato con il nome del file e il numero di riga in cui è stato allocato.

Per usare DEBUG_NEW, inserire la direttiva seguente nei file di origine:

[!code-cpp[NVC_MFCCObjectSample#14](../../mfc/codesnippet/cpp/diagnostic-services_1.cpp)]

Una volta inserita questa direttiva, il preprocessore inserirà DEBUG_NEW ovunque si usi **`new`** e MFC esegue le operazioni rimanenti. Quando si compila una versione di rilascio del programma, DEBUG_NEW viene risolta in un' **`new`** operazione semplice e le informazioni sul numero di riga e il nome del file non vengono generate.

> [!NOTE]
> Nelle versioni precedenti di MFC (4,1 e versioni precedenti) era necessario inserire l' `#define` istruzione dopo tutte le istruzioni che chiamavano le macro IMPLEMENT_DYNCREATE o IMPLEMENT_SERIAL. Ciò non è più necessario.

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="debug_only"></a><a name="debug_only"></a> DEBUG_ONLY

In modalità di debug (quando viene definito il simbolo **_DEBUG** ), DEBUG_ONLY valuta il relativo argomento.

```
DEBUG_ONLY(expression)
```

### <a name="remarks"></a>Commenti

In una build di rilascio, DEBUG_ONLY non valuta il relativo argomento. Questa operazione è utile quando si dispone di codice che deve essere eseguito solo nelle compilazioni di debug.

La macro DEBUG_ONLY è equivalente all' *espressione* circostante con `#ifdef _DEBUG` e `#endif` .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#32](../../mfc/codesnippet/cpp/diagnostic-services_6.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

### <a name="ensure-and-ensure_valid"></a><a name="ensure"></a> ASSICURARSI e ENSURE_VALID

Usare per convalidare la correttezza dei dati.

### <a name="syntax"></a>Sintassi

```
ENSURE(  booleanExpression )
ENSURE_VALID( booleanExpression  )
```

### <a name="parameters"></a>Parametri

*booleanExpression*<br/>
Specifica un'espressione booleana da testare.

### <a name="remarks"></a>Commenti

Lo scopo di queste macro è quello di migliorare la convalida dei parametri. Le macro impediscono l'ulteriore elaborazione di parametri non corretti nel codice. Diversamente dalle macro ASSERT, le macro assicurano la generazione di un'eccezione oltre alla generazione di un'asserzione.

Le macro si comportano in due modi, in base alla configurazione del progetto. Le macro chiamano ASSERT e generano un'eccezione se l'asserzione ha esito negativo. In questo modo, nelle configurazioni di debug, ovvero dove _DEBUG è definito, le macro generano un'asserzione e un'eccezione durante le configurazioni di rilascio, le macro generano solo l'eccezione (ASSERT non valuta l'espressione nelle configurazioni di rilascio).

La macro ENSURE_ARG funge da verifica della macro.

ENSURE_VALID chiama la macro ASSERT_VALID (che ha effetto solo nelle build di debug). Inoltre, ENSURE_VALID genera un'eccezione se il puntatore è NULL. Il test NULL viene eseguito nelle configurazioni di debug e di rilascio.

Se uno di questi test ha esito negativo, viene visualizzato un messaggio di avviso in modo analogo a ASSERT. Se necessario, la macro genera un'eccezione di argomento non valido.

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="this_file"></a><a name="this_file"></a> THIS_FILE

Si espande fino al nome del file che si sta compilando.

### <a name="syntax"></a>Sintassi

```
THIS_FILE
```

### <a name="remarks"></a>Osservazioni

Le informazioni vengono utilizzate dalle macro ASSERT e VERIFY. La creazione guidata applicazione e le creazioni guidate codice inseriscono la macro nei file di codice sorgente creati.

### <a name="example"></a>Esempio

```cpp
#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// __FILE__ is one of the six predefined ANSI C macros that the
// compiler recognizes.
```

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="trace"></a><a name="trace"></a> TRACCIA

Invia la stringa specificata al debugger dell'applicazione corrente.

```
TRACE(exp)
TRACE(DWORD  category,  UINT  level, LPCSTR lpszFormat, ...)
```

### <a name="remarks"></a>Commenti

Per una descrizione della traccia, vedere [ATLTRACE2](../../atl/reference/debugging-and-error-reporting-macros.md#atltrace2) . TRACE e ATLTRACE2 hanno lo stesso comportamento.

Nella versione di debug di MFC questa macro invia la stringa specificata al debugger dell'applicazione corrente. In una build di rilascio questa macro viene compilata in Nothing (non viene generato alcun codice).

Per ulteriori informazioni, vedere [debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="verify"></a><a name="verify"></a> VERIFICARE

Nella versione di debug di MFC valuta il relativo argomento.

```
VERIFY(booleanExpression)
```

### <a name="parameters"></a>Parametri

*booleanExpression*<br/>
Specifica un'espressione (inclusi i valori puntatore) che restituisce un valore diverso da zero o 0.

### <a name="remarks"></a>Commenti

Se il risultato è 0, la macro stampa un messaggio di diagnostica e arresta il programma. Se la condizione è diversa da zero, non esegue alcuna operazione.

Il messaggio di diagnostica presenta la forma seguente:

`assertion failed in file <name> in line <num>`

dove *nome* è il nome del file di origine e *num* è il numero di riga dell'asserzione non riuscita nel file di origine.

Nella versione finale di MFC, VERIFY valuta l'espressione, ma non stampa o interrompe il programma. Se, ad esempio, l'espressione è una chiamata di funzione, la chiamata verrà eseguita.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#198](../../mfc/codesnippet/cpp/diagnostic-services_7.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="afxdump-cdumpcontext-in-mfc"></a><a name="cdumpcontext_in_mfc"></a> afxDump (CDumpContext in MFC)

Fornisce funzionalità di base per il dump degli oggetti nell'applicazione.

```
CDumpContext  afxDump;
```

### <a name="remarks"></a>Commenti

`afxDump` è un oggetto [CDumpContext](../../mfc/reference/cdumpcontext-class.md) predefinito che consente di inviare `CDumpContext` informazioni alla finestra di output del debugger o a un terminale di debug. In genere, viene fornito `afxDump` come parametro a `CObject::Dump` .

In Windows NT e in tutte le versioni di Windows, `afxDump` l'output viene inviato alla finestra di Output-Debug di Visual C++ quando si esegue il debug dell'applicazione.

Questa variabile viene definita solo nella versione di debug di MFC. Per ulteriori informazioni su `afxDump` , vedere [debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#23](../../mfc/codesnippet/cpp/diagnostic-services_8.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="afxdump-internal"></a><a name="afxdump"></a> AfxDump (interno)

Funzione interna utilizzata da MFC per eseguire il dump dello stato di un oggetto durante il debug.

### <a name="syntax"></a>Sintassi

```cpp
void AfxDump(const CObject* pOb);
```

### <a name="parameters"></a>Parametri

*pOb*<br/>
Puntatore a un oggetto di una classe derivata da `CObject` .

### <a name="remarks"></a>Commenti

`AfxDump` chiama `Dump` la funzione membro di un oggetto e invia le informazioni al percorso specificato dalla `afxDump` variabile. `AfxDump` è disponibile solo nella versione di debug di MFC.

Il codice del programma non deve chiamare `AfxDump` , ma deve chiamare invece la `Dump` funzione membro dell'oggetto appropriato.

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="afxmemdf"></a><a name="afxmemdf"></a> afxMemDF

Questa variabile è accessibile da un debugger o dal programma e consente di ottimizzare la diagnostica di allocazione.

```
int  afxMemDF;
```

### <a name="remarks"></a>Commenti

`afxMemDF` è possibile specificare i valori seguenti come specificato dall'enumerazione `afxMemDF` :

- `allocMemDF` Attiva l'allocatore di debug (impostazione predefinita nella libreria di debug).

- `delayFreeMemDF` Ritarda la liberazione della memoria. Mentre il programma libera un blocco di memoria, l'allocatore non restituisce tale memoria al sistema operativo sottostante. Questo comporterà il sovraccarico massimo della memoria per il programma.

- `checkAlwaysMemDF` Chiama `AfxCheckMemory` ogni volta che viene allocata o liberata memoria. In questo modo, le allocazioni e le deallocazioni di memoria saranno rallentate.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#30](../../mfc/codesnippet/cpp/diagnostic-services_9.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="afxcheckerror"></a><a name="afxcheckerror"></a> AfxCheckError

Questa funzione testa l'oggetto SCODE passato per verificare se è un errore.

```cpp
void AFXAPI AfxCheckError(SCODE sc);
throw CMemoryException*
throw COleException*
```

### <a name="remarks"></a>Commenti

Se si tratta di un errore, la funzione genera un'eccezione. Se l'oggetto SCODE passato è E_OUTOFMEMORY, la funzione genera un'eccezione [CMemoryException](../../mfc/reference/cmemoryexception-class.md) chiamando [AfxThrowMemoryException](exception-processing.md#afxthrowmemoryexception). In caso contrario, la funzione genera un'eccezione [COleException](../../mfc/reference/coleexception-class.md) chiamando [AfxThrowOleException](exception-processing.md#afxthrowoleexception).

Questa funzione può essere utilizzata per controllare i valori restituiti delle chiamate alle funzioni OLE nell'applicazione. Testando il valore restituito con questa funzione nell'applicazione, è possibile reagire correttamente alle condizioni di errore con una quantità minima di codice.

> [!NOTE]
> Questa funzione ha lo stesso effetto nelle compilazioni di debug e non di debug.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#33](../../mfc/codesnippet/cpp/diagnostic-services_10.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="afxcheckmemory"></a><a name="afxcheckmemory"></a> AfxCheckMemory

Questa funzione convalida il pool di memoria libero e Visualizza i messaggi di errore in modo obbligatorio.

```
BOOL  AfxCheckMemory();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se non si verificano errori di memoria; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Se la funzione non rileva alcun danneggiamento della memoria, non stampa nulla.

Vengono controllati tutti i blocchi di memoria attualmente allocati nell'heap, inclusi quelli allocati da, **`new`** ma non quelli allocati dalle chiamate dirette agli allocatori di memoria sottostanti, ad esempio la funzione **malloc** o la `GlobalAlloc` funzione di Windows. Se viene rilevato un blocco danneggiato, viene visualizzato un messaggio nell'output del debugger.

Se si include la riga

[!code-cpp[NVC_MFCCObjectSample#14](../../mfc/codesnippet/cpp/diagnostic-services_1.cpp)]

in un modulo di programma, le chiamate successive per `AfxCheckMemory` visualizzare il nome file e il numero di riga in cui è stata allocata la memoria.

> [!NOTE]
> Se il modulo contiene una o più implementazioni di classi serializzabili, è necessario inserire la `#define` riga dopo l'ultima chiamata a IMPLEMENT_SERIAL macro.

Questa funzione funziona solo nella versione di debug di MFC.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCObjectSample#26](../../mfc/codesnippet/cpp/diagnostic-services_11.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="afxdump-mfc"></a><a name="afxdump"></a> AfxDump (MFC)

Chiamare questa funzione nel debugger per eseguire il dump dello stato di un oggetto durante il debug.

```cpp
void AfxDump(const CObject* pOb);
```

### <a name="parameters"></a>Parametri

*pOb*<br/>
Puntatore a un oggetto di una classe derivata da `CObject` .

### <a name="remarks"></a>Commenti

`AfxDump` chiama `Dump` la funzione membro di un oggetto e invia le informazioni al percorso specificato dalla `afxDump` variabile. `AfxDump` è disponibile solo nella versione di debug di MFC.

Il codice del programma non deve chiamare `AfxDump` , ma deve chiamare invece la `Dump` funzione membro dell'oggetto appropriato.

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="afxdumpstack"></a><a name="afxdumpstack"></a> AfxDumpStack

Questa funzione globale può essere usata per generare un'immagine dello stack corrente.

```cpp
void AFXAPI AfxDumpStack(DWORD dwTarget = AFX_STACK_DUMP_TARGET_DEFAULT);
```

### <a name="parameters"></a>Parametri

*dwTarget*<br/>
Indica la destinazione dell'output del dump. I valori possibili, che possono essere combinati con l'operatore OR bit per bit ( **&#124;**), sono i seguenti:

- AFX_STACK_DUMP_TARGET_TRACE invia l'output per mezzo della macro [Trace](#trace) . La macro TRACE genera l'output solo nelle compilazioni di debug; non genera alcun output nelle build di rilascio. Inoltre, è possibile reindirizzare la traccia ad altre destinazioni oltre al debugger.

- AFX_STACK_DUMP_TARGET_DEFAULT invia l'output del dump alla destinazione predefinita. Per una compilazione di debug, l'output passa alla macro TRACE. In una build di rilascio, l'output viene inserito negli Appunti.

- AFX_STACK_DUMP_TARGET_CLIPBOARD invia l'output solo agli Appunti. I dati vengono inseriti negli Appunti come testo normale utilizzando il formato degli Appunti CF_TEXT.

- AFX_STACK_DUMP_TARGET_BOTH invia l'output agli Appunti e alla macro di traccia simultaneamente.

- AFX_STACK_DUMP_TARGET_ODS invia l'output direttamente al debugger tramite la funzione Win32 `OutputDebugString()` . Questa opzione genererà l'output del debugger nelle compilazioni di debug e di rilascio quando un debugger è collegato al processo. AFX_STACK_DUMP_TARGET_ODS raggiunge sempre il debugger (se è collegato) e non può essere reindirizzato.

### <a name="remarks"></a>Commenti

Nell'esempio seguente viene illustrata una singola riga dell'output generato dalla chiamata `AfxDumpStack` da un gestore di pulsanti in un'applicazione della finestra di dialogo MFC:

```Output
=== begin AfxDumpStack output ===
00427D55: DUMP2\DEBUG\DUMP2.EXE! void AfxDumpStack(unsigned long) + 181 bytes
0040160B: DUMP2\DEBUG\DUMP2.EXE! void CDump2Dlg::OnClipboard(void) + 14 bytes
0044F884: DUMP2\DEBUG\DUMP2.EXE! int _AfxDispatchCmdMsg(class CCmdTarget *,
unsigned int,int,void ( CCmdTarget::*)(void),void *,unsigned int,struct
AFX_CMDHANDLE
0044FF7B: DUMP2\DEBUG\DUMP2.EXE! virtual int CCmdTarget::OnCmdMsg(unsigned
int,int,void *,struct AFX_CMDHANDLERINFO *) + 626 bytes
00450C71: DUMP2\DEBUG\DUMP2.EXE! virtual int CDialog::OnCmdMsg(unsigned
int,int,void *,struct AFX_CMDHANDLERINFO *) + 36 bytes
00455B27: DUMP2\DEBUG\DUMP2.EXE! virtual int CWnd::OnCommand(unsigned
int,long) + 312 bytes
00454D3D: DUMP2\DEBUG\DUMP2.EXE! virtual int CWnd::OnWndMsg(unsigned
int,unsigned int,long,long *) + 83 bytes
00454CC0: DUMP2\DEBUG\DUMP2.EXE! virtual long CWnd::WindowProc(unsigned
int,unsigned int,long) + 46 bytes
004528D9: DUMP2\DEBUG\DUMP2.EXE! long AfxCallWndProc(class CWnd *,struct
HWND__ *,unsigned int,unsigned int,long) + 237 bytes
00452D34: DUMP2\DEBUG\DUMP2.EXE! long AfxWndProc(struct HWND__ *,unsigned
int,unsigned int,long) + 129 bytes
BFF73663: WINDOWS\SYSTEM\KERNEL32.DLL! ThunkConnect32 + 2148 bytes
BFF928E0: WINDOWS\SYSTEM\KERNEL32.DLL! UTUnRegister + 2492 bytes
=== end AfxDumpStack() output ===
```

Ogni riga nell'output precedente indica l'indirizzo dell'ultima chiamata di funzione, il nome del percorso completo del modulo che contiene la chiamata di funzione e il prototipo di funzione denominato. Se la chiamata di funzione nello stack non viene eseguita all'indirizzo esatto della funzione, viene visualizzato un offset di byte.

La tabella seguente, ad esempio, descrive la prima riga dell'output precedente:

|Output|Descrizione|
|------------|-----------------|
|`00427D55:`|Indirizzo restituito dell'ultima chiamata di funzione.|
|`DUMP2\DEBUG\DUMP2.EXE!`|Nome del percorso completo del modulo che contiene la chiamata di funzione.|
|`void AfxDumpStack(unsigned long)`|Il prototipo di funzione denominato.|
|`+ 181 bytes`|Offset in byte dall'indirizzo del prototipo di funzione, in questo caso, `void AfxDumpStack(unsigned long)` all'indirizzo di restituzione (in questo caso) `00427D55` .|

`AfxDumpStack` è disponibile nelle versioni di debug e non di debug delle librerie MFC; Tuttavia, la funzione è sempre collegata in modo statico, anche quando il file eseguibile Usa MFC in una DLL condivisa. Nelle implementazioni di librerie condivise la funzione si trova in MFCS42. Libreria LIB (e relative varianti).

Per usare questa funzione correttamente:

- Il file IMAGEHLP.DLL deve trovarsi nel percorso. Se non si dispone di questa DLL, verrà visualizzato un messaggio di errore nella funzione. Per informazioni sul set di funzioni fornito da IMAGEHLP, vedere la pagina relativa alla [libreria della Guida](/windows/win32/Debug/image-help-library) .

- I moduli con frame nello stack devono includere informazioni di debug. Se non contengono informazioni di debug, la funzione genererà comunque una traccia dello stack, ma la traccia sarà meno dettagliata.

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="afxenablememoryleakdump"></a><a name="afxenablememoryleakdump"></a> AfxEnableMemoryLeakDump

Abilita e Disabilita il dump della perdita di memoria nel distruttore AFX_DEBUG_STATE.

```
BOOL AFXAPI AfxEnableMemoryLeakDump(BOOL bDump);
```

### <a name="parameters"></a>Parametri

*bDump*<br/>
in TRUE indica che il dump delle perdite di memoria è abilitato. FALSE indica che il dump delle perdite di memoria è disabilitato.

### <a name="return-value"></a>Valore restituito

Il valore precedente per questo flag.

### <a name="remarks"></a>Commenti

Quando un'applicazione scarica la libreria MFC, quest'ultima controlla se si sono verificate perdite di memoria. A questo punto, tutte le perdite di memoria vengono segnalate all'utente tramite la finestra di **debug** di Visual Studio.

Se l'applicazione carica un'altra libreria prima della libreria MFC, alcune allocazioni di memoria in tale libreria verranno segnalate erroneamente come perdite di memoria. Per effetto di queste segnalazioni errate, è possibile che l'applicazione venga chiusa lentamente a mano a mano che le perdite vengono segnalate dalla libreria MFC. In tal caso, usare `AfxEnableMemoryLeakDump` per disabilitare il dump delle perdite di memoria.

> [!NOTE]
> Se si usa questo metodo per disabilitare il dump delle perdite di memoria, nell'applicazione non si riceveranno i report delle perdite di memoria effettive. È consigliabile usare questo metodo solo se si è certi che il report contenga informazioni errate sulle perdite di memoria.

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="afxenablememorytracking"></a><a name="afxenablememorytracking"></a> AfxEnableMemoryTracking

Il rilevamento della memoria diagnostica è in genere abilitato nella versione di debug di MFC.

```
BOOL AfxEnableMemoryTracking(BOOL bTrack);
```

### <a name="parameters"></a>Parametri

*bTrack*<br/>
Impostando questo valore su TRUE viene attivato il rilevamento della memoria. FALSE lo disattiva.

### <a name="return-value"></a>Valore restituito

Impostazione precedente del flag di abilitazione del rilevamento.

### <a name="remarks"></a>Commenti

Usare questa funzione per disabilitare il rilevamento in sezioni del codice che si sa che allocano blocchi in modo corretto.

Per ulteriori informazioni su `AfxEnableMemoryTracking` , vedere [debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).

> [!NOTE]
> Questa funzione funziona solo nella versione di debug di MFC.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#24](../../mfc/codesnippet/cpp/diagnostic-services_12.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="afxismemoryblock"></a><a name="afxismemoryblock"></a> AfxIsMemoryBlock

Verifica un indirizzo di memoria per assicurarsi che rappresenti un blocco di memoria attualmente attivo allocato dalla versione di diagnostica di **`new`** .

```
BOOL AfxIsMemoryBlock(
    const void* p,
    UINT nBytes,
    LONG* plRequestNumber = NULL);
```

### <a name="parameters"></a>Parametri

*p*<br/>
Punta al blocco di memoria da testare.

*nBytes*<br/>
Contiene la lunghezza del blocco di memoria in byte.

*plRequestNumber*<br/>
Punta a un **`long`** Integer che verrà compilato con il numero di sequenza di allocazione del blocco di memoria oppure zero se non rappresenta un blocco di memoria attualmente attivo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il blocco di memoria è attualmente allocato e la lunghezza è corretta; in caso contrario, 0.

### <a name="remarks"></a>Commenti

Consente inoltre di controllare la dimensione specificata rispetto alla dimensione allocata originale. Se la funzione restituisce un valore diverso da zero, il numero di sequenza di allocazione viene restituito in *plRequestNumber*. Questo numero rappresenta l'ordine in cui il blocco è stato allocato rispetto a tutte le altre **`new`** allocazioni.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#27](../../mfc/codesnippet/cpp/diagnostic-services_13.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="afxisvalidaddress"></a><a name="afxisvalidaddress"></a> AfxIsValidAddress

Verifica qualsiasi indirizzo di memoria per assicurarsi che sia contenuto interamente nello spazio di memoria del programma.

```
BOOL AfxIsValidAddress(
    const void* lp,
    UINT nBytes,
    BOOL bReadWrite = TRUE);
```

### <a name="parameters"></a>Parametri

*LP*<br/>
Punta all'indirizzo di memoria da testare.

*nBytes*<br/>
Contiene il numero di byte di memoria da testare.

*bReadWrite*<br/>
Specifica se la memoria è sia per la lettura che per la scrittura (TRUE) o semplicemente per la lettura (FALSE).

### <a name="return-value"></a>Valore restituito

Nelle build di debug, diverso da zero se il blocco di memoria specificato è contenuto interamente nello spazio di memoria del programma; in caso contrario, 0.

Nelle compilazioni non di debug, diverso da zero se *LP* non è null; in caso contrario, 0.

### <a name="remarks"></a>Commenti

L'indirizzo non è limitato ai blocchi allocati da **`new`** .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#28](../../mfc/codesnippet/cpp/diagnostic-services_14.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="afxisvalidstring"></a><a name="afxisvalidstring"></a> AfxIsValidString

Usare questa funzione per determinare se un puntatore a una stringa è valido.

```
BOOL  AfxIsValidString(
    LPCSTR lpsz,
    int nLength = -1);
```

### <a name="parameters"></a>Parametri

*lpsz*<br/>
Puntatore da verificare.

*nLength*<br/>
Specifica la lunghezza, in byte, della stringa da testare. Il valore-1 indica che la stringa sarà con terminazione null.

### <a name="return-value"></a>Valore restituito

Nelle compilazioni di debug, diverso da zero se il puntatore specificato punta a una stringa con le dimensioni specificate; in caso contrario, 0.

Nelle compilazioni non di debug, diverso da zero se *lpsz* non è null; in caso contrario, 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#29](../../mfc/codesnippet/cpp/diagnostic-services_15.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="afxsetallochook"></a><a name="afxsetallochook"></a> AfxSetAllocHook

Imposta un hook che consente la chiamata della funzione specificata prima dell'allocazione di ogni blocco di memoria.

```
AFX_ALLOC_HOOK AfxSetAllocHook(AFX_ALLOC_HOOK pfnAllocHook);
```

### <a name="parameters"></a>Parametri

*pfnAllocHook*<br/>
Specifica il nome della funzione da chiamare. Vedere la sezione Osservazioni per il prototipo di una funzione di allocazione.

### <a name="return-value"></a>Valore restituito

Valore diverso da zero se si desidera consentire l'allocazione. in caso contrario, 0.

### <a name="remarks"></a>Commenti

Il libreria Microsoft Foundation Class allocatore di memoria di debug può chiamare una funzione hook definita dall'utente per consentire all'utente di monitorare un'allocazione di memoria e di controllare se l'allocazione è consentita. Le funzioni hook di allocazione sono con prototipo nel modo seguente:

**Bool AFXAPI AllocHook (size_t** `nSize` **, bool** `bObject` **, Long** `lRequestNumber` **);**

*nSize*<br/>
Dimensione dell'allocazione di memoria proposta.

*bObject*<br/>
TRUE se l'allocazione è per un `CObject` oggetto derivato da; in caso contrario, false.

*lRequestNumber*<br/>
Numero di sequenza dell'allocazione della memoria.

Si noti che la convenzione di chiamata AFXAPI implica che il chiamato deve rimuovere i parametri dallo stack.

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="afxdoforallclasses"></a><a name="afxdoforallclasses"></a> AfxDoForAllClasses

Chiama la funzione di iterazione specificata per tutte le `CObject` classi derivate da serializzabili nello spazio di memoria dell'applicazione.

```cpp
void
AFXAPI AfxDoForAllClasses(
    void (* pfn)(const CRuntimeClass* pClass, void* pContext),
    void* pContext);
```

### <a name="parameters"></a>Parametri

*PFN*<br/>
Punta a una funzione di iterazione da chiamare per ogni classe. Gli argomenti della funzione sono un puntatore a un `CRuntimeClass` oggetto e un puntatore void ai dati aggiuntivi forniti dal chiamante alla funzione.

*pContext*<br/>
Punta ai dati facoltativi che il chiamante può fornire alla funzione di iterazione. Questo puntatore può essere NULL.

### <a name="remarks"></a>Commenti

Le `CObject` classi derivate da Serializable sono classi derivate mediante la macro DECLARE_SERIAL. Il puntatore passato a `AfxDoForAllClasses` in *pContext* viene passato alla funzione di iterazione specificata ogni volta che viene chiamato.

> [!NOTE]
> Questa funzione funziona solo nella versione di debug di MFC.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#113](../../mfc/codesnippet/cpp/diagnostic-services_16.cpp)]

[!code-cpp[NVC_MFCCollections#114](../../mfc/codesnippet/cpp/diagnostic-services_17.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="afxdoforallobjects"></a><a name="afxdoforallobjects"></a> AfxDoForAllObjects

Esegue la funzione di iterazione specificata per tutti gli oggetti derivati da `CObject` allocati con **`new`** .

```cpp
void AfxDoForAllObjects(
    void (* pfn)(CObject* pObject, void* pContext),
    void* pContext);
```

### <a name="parameters"></a>Parametri

*PFN*<br/>
Punta a una funzione di iterazione da eseguire per ogni oggetto. Gli argomenti della funzione sono un puntatore a un oggetto `CObject` e un puntatore void ai dati aggiuntivi forniti dal chiamante alla funzione.

*pContext*<br/>
Punta ai dati facoltativi che il chiamante può fornire alla funzione di iterazione. Questo puntatore può essere NULL.

### <a name="remarks"></a>Commenti

Gli oggetti stack, globali o incorporati non vengono enumerati. Il puntatore passato a `AfxDoForAllObjects` in *pContext* viene passato alla funzione di iterazione specificata ogni volta che viene chiamato.

> [!NOTE]
> Questa funzione funziona solo nella versione di debug di MFC.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#115](../../mfc/codesnippet/cpp/diagnostic-services_18.cpp)]

[!code-cpp[NVC_MFCCollections#116](../../mfc/codesnippet/cpp/diagnostic-services_19.cpp)]

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[CObject::D UMP](cobject-class.md#dump)

---
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
ms.openlocfilehash: f952044f4320aea1a757559b3c9c51e8ffb7c3a6
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81751648"
---
# <a name="diagnostic-services"></a>Servizi diagnostici

La libreria Microsoft Foundation Class fornisce numerosi servizi di diagnostica che semplificano il debug dei programmi. I servizi di diagnostica includono macro e funzioni globali che consentono di tenere traccia delle allocazioni della memoria del programma, scaricare il contenuto degli oggetti in fase di esecuzione e stampare i messaggi di debug in fase di esecuzione. Le macro e funzioni globali per servizi di diagnostica sono raggruppate nelle categorie seguenti:

- Macro diagnostiche generali

- Funzioni e variabili di diagnostica generale

- Funzioni di diagnostica oggetti

Queste macro e funzioni sono disponibili per tutte le classi derivate da `CObject` nelle versioni di debug e rilascio di MFC. Tuttavia, tutti tranne DEBUG_NEW e VERIFY non fanno nulla nella versione finale.

Nella libreria di debug, tutti i blocchi di memoria allocata sono racchiusi tra parentesi quadre con una serie di "byte guard". Se i byte vengono disturbati da un'operazione di scrittura non corretta della memoria, le routine di diagnostica possono segnalare un problema. Se si include la riga:

[!code-cpp[NVC_MFCCObjectSample#14](../../mfc/codesnippet/cpp/diagnostic-services_1.cpp)]

nel file di implementazione, tutte le chiamate a **new** memorizzeranno il nome del file e il numero di riga in cui ha avuto luogo l'allocazione di memoria. La funzione [CMemoryState::DumpAllObjectsSince](cmemorystate-structure.md#dumpallobjectssince) visualizzerà queste informazioni aggiuntive, consentendo di identificare le perdite di memoria. Fare riferimento anche alla classe [CDumpContext](../../mfc/reference/cdumpcontext-class.md) per ulteriori informazioni sull'output di diagnostica.

Inoltre, la libreria di runtime C supporta anche un set di funzioni di diagnostica che è possibile usare per eseguire il debug delle applicazioni. Per altre informazioni, vedere Routine di [debug](../../c-runtime-library/debug-routines.md) in Riferimenti alla libreria di runtime.

### <a name="mfc-general-diagnostic-macros"></a>Macro diagnostiche generali in MFC

|||
|-|-|
|[Affermare](#assert)|Stampa un messaggio e quindi arresta il programma se l'espressione specificata restituisce FALSE nella versione di debug della libreria.|
|[ASSERT_KINDOF](#assert_kindof)|Verifica se un oggetto è un oggetto della classe specificata o di una classe derivata dalla classe specificata.|
|[ASSERT_VALID](#assert_valid)|Verifica la validità interna di un oggetto chiamando la relativa funzione membro `AssertValid` ; in genere sottoposta a override da `CObject`.|
|[DEBUG_NEW](#debug_new)|Fornisce un nome file e un numero di riga per tutte le allocazioni di oggetti in modalità di debug per trovare perdite di memoria.|
|[DEBUG_ONLY](#debug_only)|Simile ad ASSERT ma non verifica il valore dell'espressione; utile per il codice che deve essere eseguito solo in modalità di debug.|
|[ENSURE E ENSURE_VALID](#ensure)|Utilizzare per convalidare la correttezza dei dati.|
|[THIS_FILE](#this_file)|Si espande fino al nome del file che viene compilato.|
|[Traccia](#trace)|Fornisce una funzionalità simile a `printf`-nella versione di debug della libreria.|
|[Verificare](#verify)|Simile ad ASSERT ma valuta l'espressione nella versione di rilascio della libreria oltre che nella versione di debug.|

### <a name="mfc-general-diagnostic-variables-and-functions"></a>Funzioni e variabili di diagnostica generale in MFC

|||
|-|-|
|[Afxdump](#afxdump)|Variabile globale che invia informazioni [CDumpContext](../../mfc/reference/cdumpcontext-class.md) alla finestra di output del debugger o al terminale di debug.|
|[afxMemDF (afxMemDF)](#afxmemdf)|Variabile globale che controlla il comportamento dell'allocatore di memoria di debug.|
|[AfxCheckError (errore AfxCheckError)](#afxcheckerror)|Variabile globale usata per verificare l'oggetto SCODE passato per verificare se è un errore; in caso affermativo, genera l'errore appropriato.|
|[AfxCheckMemory (Memoria di controllo)](#afxcheckmemory)|Controlla l'integrità di tutta la memoria attualmente allocata.|
|[AfxDebugBreak](#afxdebugbreak)|Provoca un'interruzione dell'esecuzione.|
|[afxDump](#cdumpcontext_in_mfc)|Se viene chiamato quando nel debugger, esegue il dump dello stato di un oggetto durante il debug.|
|[afxDump](#afxdump)|Funzione interna che esegue il dump dello stato di un oggetto durante il debug.|
|[AfxDumpStack](#afxdumpstack)|Genera un'immagine dello stack corrente. Questa funzione è sempre collegata staticamente.|
|[AfxEnableMemoryLeakDump](#afxenablememoryleakdump)|Consente il dump della perdita di memoria.|
|[AfxEnableMemoryTracking](#afxenablememorytracking)|Attiva e disattiva rilevamento della memoria.|
|[AfxIsMemoryBlock](#afxismemoryblock)|Verifica che un blocco di memoria sia stato allocato in modo corretto.|
|[AfxIsValidAddress (indirizzo apvalido)](#afxisvalidaddress)|Verifica che un intervallo di indirizzi di memoria si trovi all'interno dei limiti del programma.|
|[AfxIsValidString](#afxisvalidstring)|Determina se un puntatore a una stringa è valido.|
|[AfxSetAllocHook](#afxsetallochook)|Consente la chiamata di una funzione in ogni allocazione di memoria.|

### <a name="mfc-object-diagnostic-functions"></a>Funzioni di diagnostica oggetti in MFC

|||
|-|-|
|[AfxDoForAllClasses](#afxdoforallclasses)|Esegue una funzione specificata su tutte le classi derivate da `CObject`che supportano il controllo del tipo in fase di esecuzione.|
|[Oggetti AfxDoForAllObject](#afxdoforallobjects)|Esegue una funzione specificata su tutti gli oggetti derivati da `CObject`allocati con **new**.|

### <a name="mfc-compilation-macros"></a>Macro di compilazione MFC

|||
|-|-|
|[_AFX_SECURE_NO_WARNINGS](#afx_secure_no_warnings)|Elimina gli avvisi del compilatore per l'utilizzo di funzioni MFC deprecate.|

## <a name="_afx_secure_no_warnings"></a><a name="afx_secure_no_warnings"></a>_AFX_SECURE_NO_WARNINGS

Elimina gli avvisi del compilatore per l'utilizzo di funzioni MFC deprecate.

### <a name="syntax"></a>Sintassi

```
_AFX_SECURE_NO_WARNINGS
```

### <a name="example"></a>Esempio

Questo esempio di codice causerebbe un avviso del compilatore se _AFX_SECURE_NO_WARNINGS non fosse definita.

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

## <a name="afxdebugbreak"></a><a name="afxdebugbreak"></a>AfxDebugBreak

Chiamare questa funzione per causare un'interruzione (al percorso della chiamata a `AfxDebugBreak`) nell'esecuzione della versione di debug dell'applicazione MFC.

### <a name="syntax"></a>Sintassi

```cpp
void AfxDebugBreak( );
```

### <a name="remarks"></a>Osservazioni

`AfxDebugBreak`non ha alcun effetto nelle versioni di rilascio di un'applicazione MFC e deve essere rimosso. Questa funzione deve essere utilizzata solo nelle applicazioni MFC. Utilizzare la versione dell'API Win32, `DebugBreak`, per causare un'interruzione nelle applicazioni non MFC.

### <a name="requirements"></a>Requisiti

**Intestazione:** afxver_.h

## <a name="assert"></a><a name="assert"></a>Affermare

Valuta il relativo argomento.

```
ASSERT(booleanExpression)
```

### <a name="parameters"></a>Parametri

*Booleanexpression*<br/>
Specifica un'espressione (inclusi i valori del puntatore) che restituisce un valore diverso da zero o 0.

### <a name="remarks"></a>Osservazioni

Se il risultato è 0, la macro stampa un messaggio di diagnostica e interrompe il programma. Se la condizione è diversa da zero, non esegue alcuna operazione.

Il messaggio di diagnostica presenta la forma seguente:

`assertion failed in file <name> in line <num>`

dove *nome* è il nome del file di origine e *num* è il numero di riga dell'asserzione non riuscita nel file di origine.

Nella versione finale di MFC, ASSERT non valuta l'espressione e pertanto non interromperà il programma. Se l'espressione deve essere valutata indipendentemente dall'ambiente, utilizzare la macro VERIFY al posto di ASSERT.

> [!NOTE]
> Questa funzione è disponibile solo nella versione di debug di MFC.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#44](../../mfc/codesnippet/cpp/diagnostic-services_2.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="assert_kindof"></a><a name="assert_kindof"></a>ASSERT_KINDOF

Questa macro asserisce che l'oggetto a cui punta è un oggetto della classe specificata o è un oggetto di una classe derivata dalla classe specificata.

```
ASSERT_KINDOF(classname, pobject)
```

### <a name="parameters"></a>Parametri

*Classname*<br/>
Nome di `CObject`una classe derivata.

*pobject*<br/>
Puntatore a un oggetto di classe.

### <a name="remarks"></a>Osservazioni

Il parametro *pobject* deve essere un puntatore a un oggetto e può essere **const**. L'oggetto a cui punta `CObject` e la classe deve supportare le informazioni sulla classe in fase di esecuzione. Ad esempio, per `pDocument` garantire che sia un `CMyDoc` puntatore a un oggetto della classe o una delle relative derivate, è possibile codificare:As an example, to ensure that is a pointer to an object of the class, or any of its derivatives, you could code:

[!code-cpp[NVC_MFCDocView#194](../../mfc/codesnippet/cpp/diagnostic-services_3.cpp)]

L'utilizzo della `ASSERT_KINDOF` macro è esattamente lo stesso della codifica:

[!code-cpp[NVC_MFCDocView#195](../../mfc/codesnippet/cpp/diagnostic-services_4.cpp)]

Questa funzione funziona solo per le classi dichiarate con la macro [DECLARE_DYNAMIC](run-time-object-model-services.md-declare_dynamic o [DECLARE_SERIAL.](run-time-object-model-services.md#declare_serial)

> [!NOTE]
> Questa funzione è disponibile solo nella versione di debug di MFC.

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="assert_valid"></a><a name="assert_valid"></a>ASSERT_VALID

Utilizzare per testare i presupposti sulla validità dello stato interno di un oggetto.

```
ASSERT_VALID(pObject)
```

### <a name="parameters"></a>Parametri

*pOggetto*<br/>
Specifica un oggetto di una `CObject` classe derivata da `AssertValid` che dispone di una versione di override della funzione membro.

### <a name="remarks"></a>Osservazioni

ASSERT_VALID chiama `AssertValid` la funzione membro dell'oggetto passato come argomento.

Nella versione finale di MFC, non ASSERT_VALID esegue alcuna operazione. Nella versione di debug, convalida il puntatore, controlla su NULL `AssertValid` e chiama le funzioni membro dell'oggetto. Se uno di questi test ha esito negativo, viene visualizzato un messaggio di avviso nello stesso modo di [ASSERT](#assert).

> [!NOTE]
> Questa funzione è disponibile solo nella versione di debug di MFC.

Per ulteriori informazioni ed esempi, vedere [Debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCObjectSample#19](../../mfc/codesnippet/cpp/diagnostic-services_5.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="debug_new"></a><a name="debug_new"></a>DEBUG_NEW

Aiuta a individuare le perdite di memoria.

```
#define  new DEBUG_NEW
```

### <a name="remarks"></a>Osservazioni

È possibile utilizzare DEBUG_NEW ovunque nel programma che normalmente si utilizzi l'operatore **new** per allocare spazio di archiviazione heap.

In modalità di debug (quando viene definito il simbolo **di _DEBUG),** DEBUG_NEW tiene traccia del nome file e del numero di riga per ogni oggetto allocato. Quindi, quando si utilizza la funzione membro [CMemoryState::DumpAllObjectsSince,](cmemorystate-structure.md#dumpallobjectssince) ogni oggetto allocato con DEBUG_NEW viene visualizzato con il nome del file e il numero di riga in cui è stato allocato.

Per utilizzare DEBUG_NEW, inserire la direttiva seguente nei file di origine:

[!code-cpp[NVC_MFCCObjectSample#14](../../mfc/codesnippet/cpp/diagnostic-services_1.cpp)]

Una volta inserita questa direttiva, il preprocessore inserirà DEBUG_NEW ovunque si utilizzi **noto**e MFC esetra il resto. Quando si compila una versione finale del programma, DEBUG_NEW viene risolto in una **nuova** operazione semplice e le informazioni sul nome file e sul numero di riga non vengono generate.

> [!NOTE]
> Nelle versioni precedenti di MFC (4.1 e `#define` versioni precedenti) era necessario inserire l'istruzione dopo tutte le istruzioni che chiamavano le IMPLEMENT_DYNCREATE o IMPLEMENT_SERIAL macro. Ciò non è più necessario.

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="debug_only"></a><a name="debug_only"></a>DEBUG_ONLY

In modalità di debug (quando viene definito il simbolo **di _DEBUG),** DEBUG_ONLY valuta il relativo argomento.

```
DEBUG_ONLY(expression)
```

### <a name="remarks"></a>Osservazioni

In una build di rilascio, DEBUG_ONLY non valuta il relativo argomento. Ciò è utile quando si dispone di codice che deve essere eseguito solo nelle build di debug.

La macro DEBUG_ONLY è equivalente `#ifdef _DEBUG` `#endif` *all'espressione* circostante con e .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#32](../../mfc/codesnippet/cpp/diagnostic-services_6.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

### <a name="ensure-and-ensure_valid"></a><a name="ensure"></a>ENSURE E ENSURE_VALID

Utilizzare per convalidare la correttezza dei dati.

### <a name="syntax"></a>Sintassi

```
ENSURE(  booleanExpression )
ENSURE_VALID( booleanExpression  )
```

### <a name="parameters"></a>Parametri

*Booleanexpression*<br/>
Specifica un'espressione booleana da testare.

### <a name="remarks"></a>Osservazioni

Lo scopo di queste macro è migliorare la convalida dei parametri. Le macro impediscono un'ulteriore elaborazione di parametri non corretti nel codice. A differenza delle macro ASSERT, le macro ENSURE generano un'eccezione oltre a generare un'asserzione.

Le macro si comportano in due modi, in base alla configurazione del progetto. Le macro chiamano ASSERT e quindi generano un'eccezione se l'asserzione non riesce. Pertanto, nelle configurazioni di Debug (ovvero, dove è definito _DEBUG) le macro producono un'asserzione e un'eccezione mentre nelle configurazioni di rilascio, le macro producono solo l'eccezione (ASSERT non valuta l'espressione nelle configurazioni di rilascio).

La macro ENSURE_ARG si comporta come la macro ENSURE.

ENSURE_VALID chiama la macro ASSERT_VALID (che ha effetto solo nelle build di debug). Inoltre, ENSURE_VALID genera un'eccezione se il puntatore è NULL. Il test NULL viene eseguito in entrambe le configurazioni Debug e Release.

Se uno di questi test ha esito negativo, viene visualizzato un messaggio di avviso nello stesso modo di ASSERT. La macro genera un'eccezione di argomento non valido, se necessario.

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="this_file"></a><a name="this_file"></a>THIS_FILE

Si espande fino al nome del file che viene compilato.

### <a name="syntax"></a>Sintassi

```
THIS_FILE
```

### <a name="remarks"></a>Osservazioni

Le informazioni vengono utilizzate dalle macro ASSERT e VERIFY. La Creazione guidata applicazione e le creazioni guidate codice inseriscono la macro nei file di codice sorgente che creano.

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

**Intestazione:** afx.h

## <a name="trace"></a><a name="trace"></a>Traccia

Invia la stringa specificata al debugger dell'applicazione corrente.

```
TRACE(exp)
TRACE(DWORD  category,  UINT  level, LPCSTR lpszFormat, ...)
```

### <a name="remarks"></a>Osservazioni

Vedere [ATLTRACE2](../../atl/reference/debugging-and-error-reporting-macros.md#atltrace2) per una descrizione di TRACE. TRACE e ATLTRACE2 hanno lo stesso comportamento.

Nella versione di debug di MFC, questa macro invia la stringa specificata al debugger dell'applicazione corrente. In una build di rilascio, questa macro viene compilata in nulla (nessun codice viene generato affatto).

Per ulteriori informazioni, vedere [Debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="verify"></a><a name="verify"></a>Verificare

Nella versione di debug di MFC, valuta il relativo argomento.

```
VERIFY(booleanExpression)
```

### <a name="parameters"></a>Parametri

*Booleanexpression*<br/>
Specifica un'espressione (inclusi i valori del puntatore) che restituisce un valore diverso da zero o 0.

### <a name="remarks"></a>Osservazioni

Se il risultato è 0, la macro stampa un messaggio diagnostico e interrompe il programma. Se la condizione è diversa da zero, non esegue alcuna operazione.

Il messaggio di diagnostica presenta la forma seguente:

`assertion failed in file <name> in line <num>`

dove *nome* è il nome del file di origine e *num* è il numero di riga dell'asserzione non riuscita nel file di origine.

Nella versione finale di MFC, VERIFY valuta l'espressione ma non stampa o interrompe il programma. Ad esempio, se l'espressione è una chiamata di funzione, verrà effettuata la chiamata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCDocView#198](../../mfc/codesnippet/cpp/diagnostic-services_7.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="afxdump-cdumpcontext-in-mfc"></a><a name="cdumpcontext_in_mfc"></a>afxDump (CDumpContext in MFC)

Fornisce funzionalità di base di dumping degli oggetti nell'applicazione.

```
CDumpContext  afxDump;
```

### <a name="remarks"></a>Osservazioni

`afxDump`è un oggetto [CDumpContext](../../mfc/reference/cdumpcontext-class.md) predefinito che `CDumpContext` consente di inviare informazioni alla finestra di output del debugger o a un terminale di debug. In genere, `afxDump` si fornisce `CObject::Dump`come parametro per .

In Windows NT e in `afxDump` tutte le versioni di Windows, l'output viene inviato alla finestra Output-Debug di Visual C, quando si esegue il debug dell'applicazione.

Questa variabile è definita solo nella versione di debug di MFC. Per ulteriori `afxDump`informazioni su , vedere [Debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#23](../../mfc/codesnippet/cpp/diagnostic-services_8.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="afxdump-internal"></a><a name="afxdump"></a>AfxDump (interno)

Funzione interna utilizzata da MFC per eseguire il dump dello stato di un oggetto durante il debug.

### <a name="syntax"></a>Sintassi

```cpp
void AfxDump(const CObject* pOb);
```

### <a name="parameters"></a>Parametri

*Pob*<br/>
Puntatore a un oggetto di `CObject`una classe derivata da .

### <a name="remarks"></a>Osservazioni

`AfxDump`chiama la funzione `Dump` membro di un oggetto e invia `afxDump` le informazioni alla posizione specificata dalla variabile. `AfxDump`è disponibile solo nella versione di debug di MFC.

Il codice del `AfxDump`programma non deve `Dump` chiamare , ma deve invece chiamare la funzione membro dell'oggetto appropriato.

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="afxmemdf"></a><a name="afxmemdf"></a>afxMemDF (afxMemDF)

Questa variabile è accessibile da un debugger o dal programma e consente di ottimizzare la diagnostica di allocazione.

```
int  afxMemDF;
```

### <a name="remarks"></a>Osservazioni

`afxMemDF`possono avere i seguenti valori `afxMemDF`come specificato dall'enumerazione :

- `allocMemDF`Attiva l'allocatore di debug (impostazione predefinita nella libreria di debug).

- `delayFreeMemDF`Ritarda la liberazione della memoria. Mentre il programma libera un blocco di memoria, l'allocatore non restituisce tale memoria al sistema operativo sottostante. Questo metterà il massimo stress da memoria sul programma.

- `checkAlwaysMemDF`Chiamate `AfxCheckMemory` ogni volta che la memoria viene allocata o liberata. Ciò rallenterà significativamente le allocazioni di memoria e le deallocazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#30](../../mfc/codesnippet/cpp/diagnostic-services_9.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="afxcheckerror"></a><a name="afxcheckerror"></a>AfxCheckError (errore AfxCheckError)

Questa funzione verifica lo SCODE passato per vedere se si tratta di un errore.

```cpp
void AFXAPI AfxCheckError(SCODE sc);
throw CMemoryException*
throw COleException*
```

### <a name="remarks"></a>Osservazioni

Se si tratta di un errore, la funzione genera un'eccezione. Se l'SCODE passato è E_OUTOFMEMORY, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) chiamando [AfxThrowMemoryException](exception-processing.md#afxthrowmemoryexception). In caso contrario, la funzione genera un [COleException](../../mfc/reference/coleexception-class.md) chiamando [AfxThrowOleException](exception-processing.md#afxthrowoleexception).

Questa funzione può essere utilizzata per controllare i valori restituiti delle chiamate alle funzioni OLE nell'applicazione. Testando il valore restituito con questa funzione nell'applicazione, è possibile reagire correttamente alle condizioni di errore con una quantità minima di codice.

> [!NOTE]
> Questa funzione ha lo stesso effetto nelle build di debug e non di debug.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCOleContainer#33](../../mfc/codesnippet/cpp/diagnostic-services_10.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="afxcheckmemory"></a><a name="afxcheckmemory"></a>AfxCheckMemory (Memoria di controllo)

Questa funzione convalida il pool di memoria disponibile e stampa i messaggi di errore in base alle esigenze.

```
BOOL  AfxCheckMemory();
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se non sono presenti errori di memoria; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Se la funzione non rileva alcun danneggiamento della memoria, non stampa nulla.

Vengono controllati tutti i blocchi di memoria attualmente allocati nell'heap, inclusi quelli allocati da **nuove** ma `GlobalAlloc` non da chiamate dirette agli allocatori di memoria sottostanti, ad esempio la funzione **malloc** o Windows. Se viene rilevato un blocco danneggiato, viene stampato un messaggio nell'output del debugger.

Se si include la linea

[!code-cpp[NVC_MFCCObjectSample#14](../../mfc/codesnippet/cpp/diagnostic-services_1.cpp)]

in un modulo di programma, quindi le chiamate successive per `AfxCheckMemory` mostrare il nome del file e il numero di riga in cui è stata allocata la memoria.

> [!NOTE]
> Se il modulo contiene una o più implementazioni di classi `#define` serializzabili, è necessario inserire la riga dopo l'ultima chiamata di macro IMPLEMENT_SERIAL.

Questa funzione funziona solo nella versione di debug di MFC.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCObjectSample#26](../../mfc/codesnippet/cpp/diagnostic-services_11.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="afxdump-mfc"></a><a name="afxdump"></a>AfxDump (MFC)

Chiamare questa funzione mentre nel debugger per eseguire il dump dello stato di un oggetto durante il debug.

```cpp
void AfxDump(const CObject* pOb);
```

### <a name="parameters"></a>Parametri

*Pob*<br/>
Puntatore a un oggetto di `CObject`una classe derivata da .

### <a name="remarks"></a>Osservazioni

`AfxDump`chiama la funzione `Dump` membro di un oggetto e invia `afxDump` le informazioni alla posizione specificata dalla variabile. `AfxDump`è disponibile solo nella versione di debug di MFC.

Il codice del `AfxDump`programma non deve `Dump` chiamare , ma deve invece chiamare la funzione membro dell'oggetto appropriato.

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="afxdumpstack"></a><a name="afxdumpstack"></a>AfxDumpStack

Questa funzione globale può essere utilizzata per generare un'immagine dello stack corrente.

```cpp
void AFXAPI AfxDumpStack(DWORD dwTarget = AFX_STACK_DUMP_TARGET_DEFAULT);
```

### <a name="parameters"></a>Parametri

*dwTarget (azione dwTarget)*<br/>
Indica la destinazione dell'output dump. I valori possibili, che possono essere combinati utilizzando l'operatore OR bit per bit ( **&#124;**), sono i seguenti:

- AFX_STACK_DUMP_TARGET_TRACE Invia l'output tramite la macro [TRACE.](#trace) La macro TRACE genera l'output solo nelle build di debug. non genera alcun output nelle build di rilascio. Inoltre, TRACE può essere reindirizzato ad altre destinazioni oltre al debugger.

- AFX_STACK_DUMP_TARGET_DEFAULT Invia l'output del dump alla destinazione predefinita. Per una build di debug, l'output passa alla macro TRACE. In a release build, output goes to the Clipboard.

- AFX_STACK_DUMP_TARGET_CLIPBOARD Invia l'output solo negli Appunti. I dati vengono inseriti negli Appunti come testo normale utilizzando il formato CF_TEXT Appunti.

- AFX_STACK_DUMP_TARGET_BOTH Invia contemporaneamente l'output agli Appunti e alla macro TRACE.

- AFX_STACK_DUMP_TARGET_ODS Invia l'output direttamente al debugger tramite la funzione `OutputDebugString()`Win32 . Questa opzione genererà l'output del debugger nelle build di debug e di rilascio quando un debugger è collegato al processo. AFX_STACK_DUMP_TARGET_ODS raggiunge sempre il debugger (se è connesso) e non può essere reindirizzato.

### <a name="remarks"></a>Osservazioni

L'esempio seguente riflette una singola riga `AfxDumpStack` dell'output generato dalla chiamata da un gestore di pulsanti in un'applicazione finestra di dialogo MFC:

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

Ogni riga nell'output precedente indica l'indirizzo dell'ultima chiamata di funzione, il nome del percorso completo del modulo che contiene la chiamata di funzione e il prototipo di funzione chiamato. Se la chiamata di funzione nello stack non si verifica all'indirizzo esatto della funzione, viene visualizzato un offset di byte.

Ad esempio, la tabella seguente descrive la prima riga dell'output precedente:

|Output|Descrizione|
|------------|-----------------|
|`00427D55:`|Indirizzo di ritorno dell'ultima chiamata di funzione.|
|`DUMP2\DEBUG\DUMP2.EXE!`|Nome del percorso completo del modulo che contiene la chiamata di funzione.|
|`void AfxDumpStack(unsigned long)`|Prototipo di funzione chiamato.|
|`+ 181 bytes`|Offset in byte dall'indirizzo del prototipo di `void AfxDumpStack(unsigned long)`funzione (in questo caso, `00427D55`) all'indirizzo di ritorno (in questo caso, ).|

`AfxDumpStack`è disponibile nelle versioni di debug e non di debug delle librerie MFC; tuttavia, la funzione è sempre collegata in modo statico, anche quando il file eseguibile utilizza MFC in una DLL condivisa. Nelle implementazioni della libreria condivisa, la funzione si trova in MFCS42. libreria LIB (e le sue varianti).

Per utilizzare correttamente questa funzione:

- Il file IMAGEHLP. DLL deve trovarsi nel percorso. Se non si dispone di questa DLL, la funzione visualizzerà un messaggio di errore. Per informazioni sul set di funzioni fornito da IMAGEHLP, vedere [Libreria della Guida immagini.](/windows/win32/Debug/image-help-library)

- I moduli che dispongono di frame nello stack devono includere informazioni di debug. Se non contengono informazioni di debug, la funzione genererà comunque un'analisi dello stack, ma la traccia sarà meno dettagliata.

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="afxenablememoryleakdump"></a><a name="afxenablememoryleakdump"></a>AfxEnableMemoryLeakDump

Abilita e disabilita il dump delle perdite di memoria nel AFX_DEBUG_STATE distruttore.

```
BOOL AFXAPI AfxEnableMemoryLeakDump(BOOL bDump);
```

### <a name="parameters"></a>Parametri

*bDump*<br/>
[in] TRUE indica che l'immagine della perdita di memoria è abilitata. FALSE indica che il dump delle perdite di memoria è disabilitato.

### <a name="return-value"></a>Valore restituito

Il valore precedente per questo flag.

### <a name="remarks"></a>Osservazioni

Quando un'applicazione scarica la libreria MFC, quest'ultima controlla se si sono verificate perdite di memoria. A questo punto, eventuali perdite di memoria vengono segnalate all'utente tramite la finestra **Debug** di Visual Studio.

Se l'applicazione carica un'altra libreria prima della libreria MFC, alcune allocazioni di memoria in tale libreria verranno segnalate erroneamente come perdite di memoria. Per effetto di queste segnalazioni errate, è possibile che l'applicazione venga chiusa lentamente a mano a mano che le perdite vengono segnalate dalla libreria MFC. In tal caso, usare `AfxEnableMemoryLeakDump` per disabilitare il dump delle perdite di memoria.

> [!NOTE]
> Se si usa questo metodo per disabilitare il dump delle perdite di memoria, nell'applicazione non si riceveranno i report delle perdite di memoria effettive. È consigliabile usare questo metodo solo se si è certi che il report contenga informazioni errate sulle perdite di memoria.

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="afxenablememorytracking"></a><a name="afxenablememorytracking"></a>AfxEnableMemoryTracking

Il rilevamento della memoria di diagnostica è in genere abilitato nella versione di debug di MFC.

```
BOOL AfxEnableMemoryTracking(BOOL bTrack);
```

### <a name="parameters"></a>Parametri

*bTraccia*<br/>
L'impostazione di questo valore su TRUE attiva il rilevamento della memoria; FALSE lo disattiva.

### <a name="return-value"></a>Valore restituito

L'impostazione precedente del flag di abilitazione del rilevamento.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione per disabilitare il rilevamento su sezioni del codice che si sa stanno allocando blocchi correttamente.

Per ulteriori `AfxEnableMemoryTracking`informazioni su , vedere [Debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).

> [!NOTE]
> Questa funzione funziona solo nella versione di debug di MFC.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#24](../../mfc/codesnippet/cpp/diagnostic-services_12.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="afxismemoryblock"></a><a name="afxismemoryblock"></a>AfxIsMemoryBlock

Verifica un indirizzo di memoria per assicurarsi che rappresenti un blocco di memoria attualmente attivo allocato dalla versione diagnostica di **new**.

```
BOOL AfxIsMemoryBlock(
    const void* p,
    UINT nBytes,
    LONG* plRequestNumber = NULL);
```

### <a name="parameters"></a>Parametri

*P*<br/>
Punta al blocco di memoria da testare.

*nByte*<br/>
Contiene la lunghezza del blocco di memoria in byte.

*numerodiarequest*<br/>
Punta a un numero intero **lungo** che verrà compilato con il numero di sequenza di allocazione del blocco di memoria oppure zero se non rappresenta un blocco di memoria attualmente attivo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il blocco di memoria è attualmente allocato e la lunghezza è corretta; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

Inoltre, controlla la dimensione specificata rispetto alla dimensione allocata originale. Se la funzione restituisce un valore diverso da zero, il numero di sequenza di allocazione viene restituito in *plRequestNumber*. Questo numero rappresenta l'ordine in cui il blocco è stato allocato rispetto a tutte le **altre nuove** allocazioni.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#27](../../mfc/codesnippet/cpp/diagnostic-services_13.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="afxisvalidaddress"></a><a name="afxisvalidaddress"></a>AfxIsValidAddress (indirizzo apvalido)

Verifica qualsiasi indirizzo di memoria per assicurarsi che sia contenuto interamente all'interno dello spazio di memoria del programma.

```
BOOL AfxIsValidAddress(
    const void* lp,
    UINT nBytes,
    BOOL bReadWrite = TRUE);
```

### <a name="parameters"></a>Parametri

*Lp*<br/>
Punta all'indirizzo di memoria da testare.

*nByte*<br/>
Contiene il numero di byte di memoria da testare.

*bReadWrite (informazioni in base alla scrittura in stato*<br/>
Specifica se la memoria è sia per la lettura e la scrittura (TRUE) o solo per la lettura (FALSE).

### <a name="return-value"></a>Valore restituito

Nelle build di debug, diverso da zero se il blocco di memoria specificato è contenuto interamente all'interno dello spazio di memoria del programma; in caso contrario 0.

Nelle compilazioni non di debug, diverso da zero se *lp* non è NULL; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'indirizzo non è limitato ai blocchi allocati da **new**.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#28](../../mfc/codesnippet/cpp/diagnostic-services_14.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="afxisvalidstring"></a><a name="afxisvalidstring"></a>AfxIsValidString

Utilizzare questa funzione per determinare se un puntatore a una stringa è valido.

```
BOOL  AfxIsValidString(
    LPCSTR lpsz,
    int nLength = -1);
```

### <a name="parameters"></a>Parametri

*lpsz*<br/>
Puntatore da testare.

*nLunghezza*<br/>
Specifica la lunghezza della stringa da testare, in byte. Il valore -1 indica che la stringa sarà con terminazione null.

### <a name="return-value"></a>Valore restituito

Nelle build di debug, diverso da zero se il puntatore specificato punta a una stringa della dimensione specificata; in caso contrario 0.

Nelle compilazioni non di debug, diverso da zero se *lpsz* non è NULL; in caso contrario 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_Utilities#29](../../mfc/codesnippet/cpp/diagnostic-services_15.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="afxsetallochook"></a><a name="afxsetallochook"></a>AfxSetAllocHook

Imposta un hook che consente la chiamata della funzione specificata prima dell'allocazione di ogni blocco di memoria.

```
AFX_ALLOC_HOOK AfxSetAllocHook(AFX_ALLOC_HOOK pfnAllocHook);
```

### <a name="parameters"></a>Parametri

*pfnAllocHook*<br/>
Specifica il nome della funzione da chiamare. Vedere le osservazioni per il prototipo di una funzione di allocazione.

### <a name="return-value"></a>Valore restituito

Diverso da zero se si desidera consentire l'allocazione; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

L'allocatore di memoria di debug della libreria Microsoft Foundation Class può chiamare una funzione hook definita dall'utente per consentire all'utente di monitorare un'allocazione di memoria e controllare se l'allocazione è consentita. Le funzioni hook di allocazione sono prototipo come segue:

**BOOL AFXAPI AllocHook( size_t** `nSize` **, BOOL** `bObject` **, LONG** `lRequestNumber` **);**

*nDimensioni*<br/>
Dimensione dell'allocazione di memoria proposta.

*bOggetto*<br/>
TRUESe l'allocazione `CObject`è per un oggetto derivato; in caso contrario, FALSE.

*LRequestNumber (NumeroRichiesta)*<br/>
Numero di sequenza dell'allocazione di memoria.

Si noti che la convenzione di chiamata AFXAPI implica che il chiamato deve rimuovere i parametri dallo stack.

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="afxdoforallclasses"></a><a name="afxdoforallclasses"></a>AfxDoForAllClasses

Chiama la funzione di iterazione `CObject`specificata per tutte le classi derivate serializzabili nello spazio di memoria dell'applicazione.

```cpp
void
AFXAPI AfxDoForAllClasses(
    void (* pfn)(const CRuntimeClass* pClass, void* pContext),
    void* pContext);
```

### <a name="parameters"></a>Parametri

*Pfn*<br/>
Punta a una funzione di iterazione da chiamare per ogni classe. Gli argomenti della funzione `CRuntimeClass` sono un puntatore a un oggetto e un puntatore void a dati aggiuntivi forniti dal chiamante alla funzione.

*pContext*<br/>
Punta a dati facoltativi che il chiamante può fornire alla funzione di iterazione. Questo puntatore può essere NULL.

### <a name="remarks"></a>Osservazioni

Le classi `CObject`derivate serializzabili sono classi derivate utilizzando la macro DECLARE_SERIAL. Il puntatore passato `AfxDoForAllClasses` a *pContext* viene passato alla funzione di iterazione specificata ogni volta che viene chiamato.

> [!NOTE]
> Questa funzione funziona solo nella versione di debug di MFC.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#113](../../mfc/codesnippet/cpp/diagnostic-services_16.cpp)]

[!code-cpp[NVC_MFCCollections#114](../../mfc/codesnippet/cpp/diagnostic-services_17.cpp)]

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="afxdoforallobjects"></a><a name="afxdoforallobjects"></a>Oggetti AfxDoForAllObject

Esegue la funzione di iterazione `CObject` specificata per tutti gli oggetti derivati da che sono stati allocati con **new**.

```cpp
void AfxDoForAllObjects(
    void (* pfn)(CObject* pObject, void* pContext),
    void* pContext);
```

### <a name="parameters"></a>Parametri

*Pfn*<br/>
Punta a una funzione di iterazione da eseguire per ogni oggetto. Gli argomenti della funzione `CObject` sono un puntatore a un e un puntatore void a dati aggiuntivi forniti dal chiamante alla funzione.

*pContext*<br/>
Punta a dati facoltativi che il chiamante può fornire alla funzione di iterazione. Questo puntatore può essere NULL.

### <a name="remarks"></a>Osservazioni

Gli oggetti Stack, global o embedded non vengono enumerati. Il puntatore `AfxDoForAllObjects` passato a *pContext* viene passato alla funzione di iterazione specificata ogni volta che viene chiamato.

> [!NOTE]
> Questa funzione funziona solo nella versione di debug di MFC.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCCollections#115](../../mfc/codesnippet/cpp/diagnostic-services_18.cpp)]

[!code-cpp[NVC_MFCCollections#116](../../mfc/codesnippet/cpp/diagnostic-services_19.cpp)]

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[Oggetto CObject::Dump](cobject-class.md#dump)

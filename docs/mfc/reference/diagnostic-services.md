---
title: Servizi diagnostici | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.mfc.macros
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 00aece4445f87ab13b0f3250e6e0b1a337d75633
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37122993"
---
# <a name="diagnostic-services"></a>Servizi diagnostici
La libreria Microsoft Foundation Class fornisce numerosi servizi di diagnostica che semplificano il debug dei programmi. I servizi di diagnostica includono macro e funzioni globali che consentono di tenere traccia delle allocazioni della memoria del programma, scaricare il contenuto degli oggetti in fase di esecuzione e stampare i messaggi di debug in fase di esecuzione. Le macro e funzioni globali per servizi di diagnostica sono raggruppate nelle categorie seguenti:  
  
-   Macro diagnostiche generali  
  
-   Funzioni e variabili di diagnostica generale  
  
-   Funzioni di diagnostica oggetti  
  
 Queste macro e funzioni sono disponibili per tutte le classi derivate da `CObject` nelle versioni di debug e rilascio di MFC. Tuttavia, tutte tranne DEBUG_NEW e verifica eseguire alcuna operazione nella versione di rilascio.  
  
 Nella libreria di debug, tutti i blocchi di memoria allocata sono racchiusi tra parentesi quadre con una serie di "byte guard". Se i byte vengono disturbati da un'operazione di scrittura non corretta della memoria, le routine di diagnostica possono segnalare un problema. Se si include la riga:  
  
 [!code-cpp[NVC_MFCCObjectSample#14](../../mfc/codesnippet/cpp/diagnostic-services_1.cpp)]  
  
 nel file di implementazione, tutte le chiamate a **new** archivieranno il numero di riga e il nome file laddove ha avuto luogo l'allocazione di memoria. La funzione [CMemoryState:: DumpAllObjectsSince](cmemorystate-structure.md#dumpallobjectssince) visualizzerà queste informazioni aggiuntive, che consentono di identificare le perdite di memoria. Per altre informazioni sull'output di diagnostica vedere anche la classe [CDumpContext](../../mfc/reference/cdumpcontext-class.md) .  
  
 Inoltre, la libreria di runtime C supporta anche un set di funzioni di diagnostica che è possibile usare per eseguire il debug delle applicazioni. Per altre informazioni, vedere [Routine di debug](../../c-runtime-library/debug-routines.md) in Riferimenti alla libreria di runtime.  
  
### <a name="mfc-general-diagnostic-macros"></a>Macro diagnostiche generali in MFC  
  
|||  
|-|-|  
|[ASSERT](#assert)|Stampa un messaggio e quindi arresta il programma se l'espressione specificata restituisce FALSE nella versione di Debug della libreria.|  
|[ASSERT_KINDOF](#assert_kindof)|Verifica se un oggetto è un oggetto della classe specificata o di una classe derivata dalla classe specificata.|  
|[ASSERT_VALID](#assert_valid)|Verifica la validità interna di un oggetto chiamando la relativa funzione membro `AssertValid` ; in genere sottoposta a override da `CObject`.|
|[DEBUG_NEW](#debug_new)|Fornisce un nome file e un numero di riga per tutte le allocazioni di oggetti in modalità di debug per trovare perdite di memoria.|  
|[DEBUG_ONLY](#debug_only)|Simile a ASSERT, ma non testa il valore dell'espressione. utile per il codice che deve essere eseguito solo in modalità di Debug.|  
|[VERIFICARE ed ENSURE_VALID](#ensure)|Utilizzare per convalidare la correttezza dei dati.|
|[THIS_FILE](#this_file)|Si espande per il nome del file in fase di compilazione.|
|[TRACE](#trace)|Fornisce una funzionalità simile a `printf`-nella versione di debug della libreria.|  
|[VERIFY](#verify)|Come per l'ASSERZIONE ma valuta l'espressione nella versione di rilascio della libreria anche come versione di Debug.|  
  
### <a name="mfc-general-diagnostic-variables-and-functions"></a>Funzioni e variabili di diagnostica generale in MFC  
  
|||  
|-|-|  
|[afxDump](#afxdump)|Variabile globale che invia informazioni [CDumpContext](../../mfc/reference/cdumpcontext-class.md) alla finestra di output o al terminale di debug.|  
|[afxMemDF](#afxmemdf)|Variabile globale che controlla il comportamento dell'allocatore di memoria di debug.|  
|[AfxCheckError](#afxcheckerror)|Variabile globale usata per testare il SCODE passato per verificare se è un errore e, in tal caso, genera l'errore appropriato.|  
|[AfxCheckMemory](#afxcheckmemory)|Controlla l'integrità di tutta la memoria attualmente allocata.|  
|[AfxDebugBreak](#afxdebugbreak)|Determina l'esecuzione di un'interruzione.|
|[AfxDump](#cdumpcontext_in_mfc)|Se viene chiamato quando nel debugger, esegue il dump dello stato di un oggetto durante il debug.|  
|[AfxDump](#afxdump)|Funzione interna che esegue il dump dello stato di un oggetto durante il debug.|
|[AfxDumpStack](#afxdumpstack)|Genera un'immagine dello stack corrente. Questa funzione è sempre collegata staticamente.|  
|[AfxEnableMemoryLeakDump](#afxenablememoryleakdump)|Consente il dump della perdita di memoria.|  
|[AfxEnableMemoryTracking](#afxenablememorytracking)|Attiva e disattiva rilevamento della memoria.|  
|[AfxIsMemoryBlock](#afxismemoryblock)|Verifica che un blocco di memoria sia stato allocato in modo corretto.|  
|[AfxIsValidAddress](#afxisvalidaddress)|Verifica che un intervallo di indirizzi di memoria si trovi all'interno dei limiti del programma.|  
|[AfxIsValidString](#afxisvalidstring)|Determina se un puntatore a una stringa è valido.|  
|[AfxSetAllocHook](#afxsetallochook)|Consente la chiamata di una funzione in ogni allocazione di memoria.|  
  
### <a name="mfc-object-diagnostic-functions"></a>Funzioni di diagnostica oggetti in MFC  
  
|||  
|-|-|  
|[AfxDoForAllClasses](#afxdoforallclasses)|Esegue una funzione specificata su tutte le classi derivate da `CObject`che supportano il controllo del tipo in fase di esecuzione.|  
|[AfxDoForAllObjects](#afxdoforallobjects)|Esegue una funzione specificata su tutti gli oggetti derivati da `CObject`allocati con **new**.|  

### <a name="mfc-compilation-macros"></a>Macro di compilazione di MFC
|||
|-|-|
|[_AFX_SECURE_NO_WARNINGS](#afx_secure_no_warnings)|Elimina gli avvisi del compilatore per l'utilizzo di funzioni MFC deprecate.|  


## <a name="afx_secure_no_warnings"></a> _AFX_SECURE_NO_WARNINGS
Elimina gli avvisi del compilatore per l'utilizzo di funzioni MFC deprecate.  
   
### <a name="syntax"></a>Sintassi   
```  
_AFX_SECURE_NO_WARNINGS  
```     
### <a name="example"></a>Esempio  
 Questo esempio di codice causerebbe un avviso del compilatore se _AFX_SECURE_NO_WARNINGS non sono state definite.  
  
 ```cpp
// define this before including any afx files in stdafx.h
#define _AFX_SECURE_NO_WARNINGS
```
```cpp
CRichEditCtrl* pRichEdit = new CRichEditCtrl;
pRichEdit->Create(WS_CHILD|WS_VISIBLE|WS_BORDER|ES_MULTILINE,
   CRect(10,10,100,200), pParentWnd, 1);
char sz[256];
pRichEdit->GetSelText(sz);
```

## <a name="afxdebugbreak"></a> AfxDebugBreak
Chiamare questa funzione per determinare un'interruzione (nel percorso della chiamata a `AfxDebugBreak`) nell'esecuzione della versione di debug dell'applicazione MFC.  

### <a name="syntax"></a>Sintassi    
```
void AfxDebugBreak( );    
```  
   
### <a name="remarks"></a>Note  
 `AfxDebugBreak` nelle versioni di un'applicazione MFC non ha alcun effetto e deve essere rimossa. Questa funzione deve essere utilizzata solo in applicazioni MFC. Utilizzare la versione dell'API Win32, `DebugBreak`, in modo che un'interruzione nelle applicazioni non MFC.  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afxver . h   

##  <a name="assert"></a>  ASSERT
 Restituisce il relativo argomento.  
  
```   
ASSERT(booleanExpression)   
```  
  
### <a name="parameters"></a>Parametri  
 *booleanExpression*  
 Specifica un'espressione (inclusi i valori di puntatore) che restituisce zero oppure 0.  
  
### <a name="remarks"></a>Note  
 Se il risultato è 0, la macro viene stampato un messaggio di diagnostica e arresta il programma. Se la condizione è diverso da zero, non esegue alcuna operazione.  
  
 Il messaggio di diagnostica presenta la forma seguente:  
  
 `assertion failed in file <name> in line <num>`  
  
 in cui *nome* è il nome del file di origine, e *num* è il numero di riga dell'asserzione non riuscita nel file di origine.  
  
 Nella versione di rilascio di MFC, ASSERT non valuta l'espressione e pertanto il programma non verrà interrotta. Se l'espressione deve essere valutata indipendentemente dall'ambiente, utilizzare la macro VERIFY invece di ASSERT.  
  
> [!NOTE]
>  Questa funzione è disponibile solo nella versione di Debug di MFC.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities#44](../../mfc/codesnippet/cpp/diagnostic-services_2.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="assert_kindof"></a>  ASSERT_KINDOF  
 Questa macro asserisce che l'oggetto a cui puntata è un oggetto della classe specificata o è un oggetto di una classe derivato dalla classe specificata.  
  
```   
ASSERT_KINDOF(classname, pobject)  
```  
  
### <a name="parameters"></a>Parametri  
 *nomeclasse*  
 Il nome di un `CObject`-classe derivata.  
  
 *pObject*  
 Un puntatore a un oggetto classe.  
  
### <a name="remarks"></a>Note  
 Il *pobject* parametro deve essere un puntatore a un oggetto e può essere **const**. L'oggetto a cui puntano e la classe deve supportare `CObject` informazioni sulle classi di runtime. Ad esempio, per garantire che `pDocument` è un puntatore a un oggetto del `CMyDoc` classe o uno qualsiasi dei suoi derivati, è possibile codificare:  
  
 [!code-cpp[NVC_MFCDocView#194](../../mfc/codesnippet/cpp/diagnostic-services_3.cpp)]  
  
 Utilizzando il `ASSERT_KINDOF` macro equivale esattamente come la generazione di codice:  
  
 [!code-cpp[NVC_MFCDocView#195](../../mfc/codesnippet/cpp/diagnostic-services_4.cpp)]  
  
 Questa funzione funziona solo per le classi dichiarate con la [DECLARE_DYNAMIC] (run-tempo-oggetto-modello-services.md #declare_dynamic o [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) macro.  
  
> [!NOTE]
>  Questa funzione è disponibile solo nella versione di Debug di MFC.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="assert_valid"></a>  ASSERT_VALID  
 Consente di verificare supposizioni sulla validità dello stato interno dell'oggetto.  
  
```   
ASSERT_VALID(pObject)   
```  
  
### <a name="parameters"></a>Parametri  
 *pObject*  
 Specifica un oggetto di una classe derivata da `CObject` dotato di una versione di override di `AssertValid` funzione membro.  
  
### <a name="remarks"></a>Note  
 ASSERT_VALID chiamate il `AssertValid` funzione membro dell'oggetto passato come argomento.  
  
 Nella versione di rilascio di MFC, ASSERT_VALID non esegue alcuna operazione. Nella versione di Debug, convalida l'indicatore di misura, controlla rispetto a NULL e chiama l'oggetto `AssertValid` funzioni membro. Se uno di questi test ha esito negativo, viene visualizzato un messaggio di avviso in modo analogo [ASSERT](#assert).  
  
> [!NOTE]
>  Questa funzione è disponibile solo nella versione di Debug di MFC.  
  
 Per ulteriori informazioni ed esempi, vedere [debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCObjectSample#19](../../mfc/codesnippet/cpp/diagnostic-services_5.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h

##  <a name="debug_new"></a>  DEBUG_NEW  
 Semplifica l'individuazione delle perdite di memoria.  
  
```   
#define  new DEBUG_NEW   
```  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare DEBUG_NEW ovunque nel programma che normalmente utilizzerebbe il **nuovo** operatore per allocare memoria heap.  
  
 In modalità di debug (quando il **debug** simbolo è definito), DEBUG_NEW tiene traccia del numero filename e line per ogni oggetto da esso allocato. Quindi, quando si usa il [CMemoryState:: DumpAllObjectsSince](cmemorystate-structure.md#dumpallobjectssince) funzione membro, ciascun oggetto allocato con DEBUG_NEW viene visualizzato con il nome file e numero di riga in cui è stato allocato.  
  
 Per utilizzare DEBUG_NEW, inserire la seguente direttiva nei file di origine:  
  
 [!code-cpp[NVC_MFCCObjectSample#14](../../mfc/codesnippet/cpp/diagnostic-services_1.cpp)]  
  
 Dopo avere inserito questa direttiva, ovunque si utilizzi, il preprocessore inserirà DEBUG_NEW **nuovo**, e il resto non MFC. Quando si compila una versione di rilascio del programma, DEBUG_NEW si traduce in un semplice **nuovo** operazione e informazioni sul numeri di riga e nome file non vengono generati.  
  
> [!NOTE]
>  Nelle versioni precedenti di MFC (4.1 e versioni precedenti) è necessario inserire il `#define` istruzione dopo tutte le istruzioni che ha chiamato la macro IMPLEMENT_DYNCREATE o IMPLEMENT_SERIAL. Ciò non è più necessario.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h

##  <a name="debug_only"></a>  DEBUG_ONLY  
 In modalità di debug (quando il **debug** simbolo è definito), DEBUG_ONLY valuta il relativo argomento.  
  
```   
DEBUG_ONLY(expression)   
```  
  
### <a name="remarks"></a>Note  
 In una build di rilascio, DEBUG_ONLY non valuta il relativo argomento. Ciò è utile quando si dispone di codice che deve essere eseguito solo nelle build di debug.  
  
 DEBUG_ONLY (macro) equivale a circostanti *espressione* con `#ifdef _DEBUG` e `#endif`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities#32](../../mfc/codesnippet/cpp/diagnostic-services_6.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h

 ### <a name="ensure"></a>  VERIFICARE ed ENSURE_VALID
Utilizzare per convalidare la correttezza dei dati.  
   
### <a name="syntax"></a>Sintassi    
```
ENSURE(  booleanExpression )  
ENSURE_VALID( booleanExpression  )  
```
### <a name="parameters"></a>Parametri  
 *booleanExpression*  
 Specifica un'espressione booleana da testare.  
   
### <a name="remarks"></a>Note  
 Lo scopo di queste macro è per migliorare la convalida dei parametri. Le macro impediscono l'ulteriore elaborazione di parametri non corretti nel codice. A differenza delle macro ASSERT, le macro di assicurarsi che generano un'eccezione oltre alla generazione di un'asserzione.  
  
 La macro si comportano in due modi, in base alla configurazione del progetto. Le macro chiamare ASSERT e verrà generano un'eccezione se l'asserzione ha esito negativo. Pertanto, in configurazioni di Debug (ovvero dove è definito debug) le macro producono un asserzione e un'eccezione durante il in configurazioni con versione del prodotto di macro solo tramite l'eccezione (ASSERT non valuta l'espressione nelle configurazioni di rilascio).  
  
 La macro ENSURE_ARG funziona come la macro verificare.  
  
 ENSURE_VALID richiama la macro ASSERT_VALID (che ha effetto solo nelle build di Debug). Inoltre, ENSURE_VALID genera un'eccezione se il puntatore è NULL. Il test NULL viene eseguito nelle configurazioni di Debug e di rilascio.  
  
 Se uno di questi test non riesce, viene visualizzato un messaggio di avviso in modo analogo ASSERT. Se necessario, la macro genera un'eccezione di argomento non valido.  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
   
### <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](mfc-macros-and-globals.md)   
 [VERIFICARE](#verify)   
 [ATLENSURE](#altensure)

## <a name="this_file"></a> THIS_FILE
Si espande per il nome del file in fase di compilazione.  
   
### <a name="syntax"></a>Sintassi    
```
THIS_FILE    
```  
   
### <a name="remarks"></a>Note  
 Le informazioni vengono utilizzate dalle macro ASSERT e verifica. La creazione guidata applicazione codice le procedure guidate e inserire la macro nei file di codice sorgente che creano.  
   
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
   
### <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](mfc-macros-and-globals.md)   
 [ASSERT)](#assert)   
 [VERIFY](#verify)


##  <a name="trace"></a>  TRACE  
 Invia la stringa specificata per il debug dell'applicazione corrente.  
  
```   
TRACE(exp)  
TRACE(DWORD  category,  UINT  level, LPCSTR lpszFormat, ...)   
```  
  
### <a name="remarks"></a>Note  
 Vedere [ATLTRACE2](../../atl/reference/debugging-and-error-reporting-macros.md#atltrace2) per una descrizione di traccia. TRACCIA e ATLTRACE2 hanno lo stesso comportamento.  
  
 Nella versione di debug di MFC, questa macro invia la stringa specificata per il debug dell'applicazione corrente. In una build di rilascio, questa macro viene compilato su nothing (viene generato alcun codice affatto).  
  
 Per altre informazioni, vedere [debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h

##  <a name="verify"></a>  VERIFY  
 Nella versione di Debug di MFC, valuta il relativo argomento.  
  
```   
VERIFY(booleanExpression)   
```  
  
### <a name="parameters"></a>Parametri  
 *booleanExpression*  
 Specifica un'espressione (inclusi i valori di puntatore) che restituisce zero oppure 0.  
  
### <a name="remarks"></a>Note  
 Se il risultato è 0, la macro viene stampato un messaggio di diagnostica e arresta il programma. Se la condizione è diverso da zero, non esegue alcuna operazione.  
  
 Il messaggio di diagnostica presenta la forma seguente:  
  
 `assertion failed in file <name> in line <num>`  
  
 in cui *nome* è il nome del file di origine e *num* è il numero di riga dell'asserzione non riuscita nel file di origine.  
  
 Nella versione di rilascio di MFC, verificare valuta l'espressione, ma non stampare o interrompere il programma. Ad esempio, se l'espressione è una chiamata di funzione, verrà effettuata la chiamata.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView#198](../../mfc/codesnippet/cpp/diagnostic-services_7.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h

##  <a name="cdumpcontext_in_mfc"></a>  afxDump (CDumpContext in MFC)  
 Fornisce funzionalità base il dump di oggetti nell'applicazione.  
  
```   
CDumpContext  afxDump;   
```  
  
### <a name="remarks"></a>Note  
 `afxDump` è un oggetto predefinito [CDumpContext](../../mfc/reference/cdumpcontext-class.md) oggetto che consente di inviare `CDumpContext` sulla finestra di output del debugger o in un terminale di debug. In genere, si fornisce `afxDump` come parametro a `CObject::Dump`.  
  
 In Windows NT e tutte le versioni di Windows, `afxDump` quando si esegue il debug dell'applicazione, l'output viene inviato alla finestra Output di Debug di Visual C++.  
  
 Questa variabile viene definita solo nella versione di Debug di MFC. Per ulteriori informazioni sul `afxDump`, vedere [debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities#23](../../mfc/codesnippet/cpp/diagnostic-services_8.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h


## <a name="afxdump"></a> AfxDump (interna)
Funzione interna utilizzate da MFC per eseguire il dump dello stato di un oggetto durante il debug.  

### <a name="syntax"></a>Sintassi    
```
void AfxDump(const CObject* pOb);   
```
### <a name="parameters"></a>Parametri  
 *casella postale*  
 Un puntatore a un oggetto di una classe derivata da `CObject`.  
   
### <a name="remarks"></a>Note  
 `AfxDump` chiama un oggetto `Dump` funzione membro e invia le informazioni nel percorso specificate per il `afxDump` variabile. `AfxDump` è disponibile solo nella versione di Debug di MFC.  
  
 Il codice del programma non deve chiamare `AfxDump`, ma devono chiamare invece il `Dump` funzione membro dell'oggetto appropriato.  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
   
### <a name="see-also"></a>Vedere anche  
 [CObject::Dump](cobject-class.md#dump)   



##  <a name="afxmemdf"></a>  afxMemDF  
 Questa variabile è accessibile da un debugger o il programma e consente di ottimizzare la diagnostica di allocazione.  
  
```   
int  afxMemDF;  
```  
  
### <a name="remarks"></a>Note  
 `afxMemDF` può avere i seguenti valori come specificato dall'enumerazione `afxMemDF`:  
  
- `allocMemDF` Attiva debug allocatore (impostazione predefinita nella libreria di Debug).  
  
- `delayFreeMemDF` Ritardi di liberare la memoria. Mentre il programma libera un blocco di memoria, l'allocatore non restituisce tale memoria per il sistema operativo sottostante. Stress quantità massima di memoria verrà inserito nel programma.  
  
- `checkAlwaysMemDF` Chiamate `AfxCheckMemory` ogni volta che viene allocata o liberata memoria. Ciò comporterà il rallentamento in modo significativo le deallocazioni e allocazioni di memoria.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities#30](../../mfc/codesnippet/cpp/diagnostic-services_9.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h

##  <a name="afxcheckerror"></a>  AfxCheckError  
 Questa funzione verifica SCODE passato per verificare se si tratta di un errore.  
  
```   
void AFXAPI AfxCheckError(SCODE sc);
throw CMemoryException* 
throw COleException*  
```  
  
### <a name="remarks"></a>Note  
 Se si tratta di un errore, la funzione genera un'eccezione. Se il SCODE passato è E_OUTOFMEMORY, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) chiamando [AfxThrowMemoryException](exception-processing.md#afxthrowmemoryexception). In caso contrario, la funzione genera un [COleException](../../mfc/reference/coleexception-class.md) chiamando [AfxThrowOleException](exception-processing.md#afxthrowoleexception).  
  
 Questa funzione può essere utilizzata per controllare i valori restituiti delle chiamate alle funzioni OLE nell'applicazione. Controllando il valore restituito con questa funzione nell'applicazione, in modo corretto possano rispondere nel condizioni di errore con una quantità minima di codice.  
  
> [!NOTE]
>  Questa funzione ha lo stesso effetto in modalità debug e compilazioni non di debug.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer#33](../../mfc/codesnippet/cpp/diagnostic-services_10.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h

##  <a name="afxcheckmemory"></a>  AfxCheckMemory  
 Questa funzione convalida il pool di memoria libera e stampa i messaggi di errore in base alle esigenze.  
  
```   
BOOL  AfxCheckMemory(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se senza errori di memoria; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se la funzione non rileva alcun danneggiamento della memoria, verrà visualizzato nulla.  
  
 Vengono controllati tutti i blocchi di memoria attualmente allocati nell'heap, inclusi quelli allocati dal **nuove** ma non quelli allocato da chiamate dirette per gli allocatori di memoria sottostante, ad esempio il **malloc** funzione o il `GlobalAlloc` funzione di Windows. Se viene trovato alcun blocco danneggiati, viene stampato un messaggio all'output del debugger.  
  
 Se si include la riga  
  
 [!code-cpp[NVC_MFCCObjectSample#14](../../mfc/codesnippet/cpp/diagnostic-services_1.cpp)]  
  
 in un modulo di programma, quindi le successive chiamate a `AfxCheckMemory` Mostra il nome file e numero di riga in cui è stata allocata la memoria.  
  
> [!NOTE]
>  Se il modulo contiene uno o più implementazioni delle classi serializzabili, quindi è necessario inserire il `#define` riga dopo l'ultima chiamata di macro IMPLEMENT_SERIAL.  
  
 Questa funzione funziona solo nella versione di Debug di MFC.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCObjectSample#26](../../mfc/codesnippet/cpp/diagnostic-services_11.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
 
##  <a name="afxdump"></a>  AfxDump (MFC)  
 Chiamare questa funzione quando nel debugger per eseguire il dump dello stato di un oggetto durante il debug.  
  
```   
void AfxDump(const CObject* pOb); 
```  
  
### <a name="parameters"></a>Parametri  
 *casella postale*  
 Un puntatore a un oggetto di una classe derivata da `CObject`.  
  
### <a name="remarks"></a>Note  
 `AfxDump` chiama un oggetto `Dump` funzione membro e invia le informazioni nel percorso specificate per il `afxDump` variabile. `AfxDump` è disponibile solo nella versione di Debug di MFC.  
  
 Il codice del programma non deve chiamare `AfxDump`, ma devono chiamare invece il `Dump` funzione membro dell'oggetto appropriato.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  

### <a name="see-also"></a>Vedere anche  
 [CObject::Dump](cobject-class.md#dump)   


  
##  <a name="afxdumpstack"></a>  AfxDumpStack  
 Questa funzione globale può essere utilizzata per generare un'immagine dello stack corrente.  
  
```   
void AFXAPI AfxDumpStack(DWORD dwTarget = AFX_STACK_DUMP_TARGET_DEFAULT); 
```  
  
### <a name="parameters"></a>Parametri  
 *dwTarget*  
 Indica la destinazione dell'output del dump. Valori possibili che possono essere combinati utilizzando l'OR ( **&#124;**) (operatore), sono i seguenti:  
  
- Invia AFX_STACK_DUMP_TARGET_TRACE output mediante il [traccia](#trace) macro. Utilizzo della macro TRACE genera output nelle build di debug di sola lettura. viene non generato alcun output nelle build di rilascio. Inoltre, traccia può essere reindirizzata ad altre destinazioni oltre il debugger.  
  
- Output del dump AFX_STACK_DUMP_TARGET_DEFAULT invia alla destinazione predefinita. Per una build di debug, l'output viene inviato per l'utilizzo della macro TRACE. In una build di rilascio, l'output viene inviato negli Appunti.  
  
- AFX_STACK_DUMP_TARGET_CLIPBOARD invia l'output solo negli Appunti. I dati vengono inseriti negli Appunti come testo normale utilizzando il formato degli Appunti CF_TEXT.  
  
- AFX_STACK_DUMP_TARGET_BOTH invia l'output negli Appunti e di utilizzo della macro TRACE, simultaneamente.  
  
- Output AFX_STACK_DUMP_TARGET_ODS Invia direttamente al debugger tramite la funzione Win32 `OutputDebugString()`. Questa opzione consente di generare l'output del debugger in entrambe le modalità di debug e di build di rilascio quando è collegato un debugger al processo. Il debugger raggiunge AFX_STACK_DUMP_TARGET_ODS sempre (se è collegato) e non possono essere reindirizzati.  
  
### <a name="remarks"></a>Note  
 Nell'esempio seguente riflette una singola riga di output generato dalla chiamata `AfxDumpStack` da un gestore del pulsante in un'applicazione di finestra di dialogo MFC:  
  
 `=== begin AfxDumpStack output ===`  
  
 `00427D55: DUMP2\DEBUG\DUMP2.EXE! void AfxDumpStack(unsigned long) + 181 bytes`  
  
 `0040160B: DUMP2\DEBUG\DUMP2.EXE! void CDump2Dlg::OnClipboard(void) + 14 bytes`  
  
 `0044F884: DUMP2\DEBUG\DUMP2.EXE! int _AfxDispatchCmdMsg(class CCmdTarget *,`  
  
 `unsigned int,int,void ( CCmdTarget::*)(void),void *,unsigned int,struct AFX_CMDHANDLE`  
  
 `0044FF7B: DUMP2\DEBUG\DUMP2.EXE! virtual int CCmdTarget::OnCmdMsg(unsigned`  
  
 `int,int,void *,struct AFX_CMDHANDLERINFO *) + 626 bytes`  
  
 `00450C71: DUMP2\DEBUG\DUMP2.EXE! virtual int CDialog::OnCmdMsg(unsigned`  
  
 `int,int,void *,struct AFX_CMDHANDLERINFO *) + 36 bytes`  
  
 `00455B27: DUMP2\DEBUG\DUMP2.EXE! virtual int CWnd::OnCommand(unsigned`  
  
 `int,long) + 312 bytes`  
  
 `00454D3D: DUMP2\DEBUG\DUMP2.EXE! virtual int CWnd::OnWndMsg(unsigned`  
  
 `int,unsigned int,long,long *) + 83 bytes`  
  
 `00454CC0: DUMP2\DEBUG\DUMP2.EXE! virtual long CWnd::WindowProc(unsigned`  
  
 `int,unsigned int,long) + 46 bytes`  
  
 `004528D9: DUMP2\DEBUG\DUMP2.EXE! long AfxCallWndProc(class CWnd *,struct`  
  
 `HWND__ *,unsigned int,unsigned int,long) + 237 bytes`  
  
 `00452D34: DUMP2\DEBUG\DUMP2.EXE! long AfxWndProc(struct HWND__ *,unsigned`  
  
 `int,unsigned int,long) + 129 bytes`  
  
 `BFF73663: WINDOWS\SYSTEM\KERNEL32.DLL! ThunkConnect32 + 2148 bytes`  
  
 `BFF928E0: WINDOWS\SYSTEM\KERNEL32.DLL! UTUnRegister + 2492 bytes`  
  
 `=== end AfxDumpStack() output ===`  
  
 Ogni riga nell'output precedente indica l'indirizzo dell'ultima chiamata di funzione, il nome e percorso completo del modulo che contiene la chiamata di funzione e il prototipo di funzione chiamata. Se la chiamata di funzione nello stack non si verifica in corrispondenza dell'indirizzo esatto della funzione, viene visualizzato un offset di byte.  
  
 Ad esempio, nella tabella seguente descrive la prima riga dell'output precedente:  
  
|Output|Descrizione|  
|------------|-----------------|  
|`00427D55:`|Indirizzo del mittente dell'ultima chiamata di funzione.|  
|`DUMP2\DEBUG\DUMP2.EXE!`|Il nome e percorso completo del modulo che contiene la chiamata di funzione.|  
|`void AfxDumpStack(unsigned long)`|Il prototipo di funzione chiamata.|  
|`+ 181 bytes`|L'offset in byte dall'indirizzo del prototipo di funzione (in questo caso `void AfxDumpStack(unsigned long)`) all'indirizzo del mittente (in questo caso, `00427D55`).|  
  
 `AfxDumpStack` è disponibile nelle versioni di debug e nondebug delle librerie MFC; Tuttavia, la funzione è sempre collegata staticamente, anche quando il file eseguibile Usa MFC in una DLL condivisa. In implementazioni di libreria condivisa, la funzione viene trovata il MFCS42. Libreria LIB (e relative varianti).  
  
 Per utilizzare correttamente questa funzione:  
  
-   Il file IMAGEHLP. DLL deve essere presente nel percorso. Se non si dispone di tale DLL, la funzione verrà visualizzato un messaggio di errore. Vedere [libreria di supporto di immagine](http://msdn.microsoft.com/library/windows/desktop/ms680321) per informazioni sul set di funzione fornita da IMAGEHLP.  
  
-   I moduli contenenti i frame nello stack devono includere le informazioni di debug. Se non contengono informazioni di debug, la funzione genererà comunque un'analisi dello stack, ma la traccia sarà meno dettagliata.  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="afxenablememoryleakdump"></a>  AfxEnableMemoryLeakDump  
 Abilita e disabilita il dump della perdita di memoria nel distruttore AFX_DEBUG_STATE.  
  
```  
BOOL AFXAPI AfxEnableMemoryLeakDump(BOOL bDump);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bDump*  
 TRUE indica che il dump della perdita di memoria è abilitato; FALSE indica che il dump della perdita di memoria è disabilitato.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore precedente per questo flag.  
  
### <a name="remarks"></a>Note  
 Quando un'applicazione scarica la libreria MFC, quest'ultima controlla se si sono verificate perdite di memoria. A questo punto, eventuali perdite di memoria vengono segnalate all'utente tramite il **Debug** finestra di [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)].  
  
 Se l'applicazione carica un'altra libreria prima della libreria MFC, alcune allocazioni di memoria in tale libreria verranno segnalate erroneamente come perdite di memoria. Per effetto di queste segnalazioni errate, è possibile che l'applicazione venga chiusa lentamente a mano a mano che le perdite vengono segnalate dalla libreria MFC. In tal caso, usare `AfxEnableMemoryLeakDump` per disabilitare il dump delle perdite di memoria.  
  
> [!NOTE]
>  Se si usa questo metodo per disabilitare il dump delle perdite di memoria, nell'applicazione non si riceveranno i report delle perdite di memoria effettive. È consigliabile usare questo metodo solo se si è certi che il report contenga informazioni errate sulle perdite di memoria.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="afxenablememorytracking"></a>  AfxEnableMemoryTracking  
 Rilevamento della memoria diagnostica è in genere abilitata nella versione di Debug di MFC.  
  
```   
BOOL AfxEnableMemoryTracking(BOOL bTrack); 
```  
  
### <a name="parameters"></a>Parametri  
 *bTrack*  
 Impostando questo valore su TRUE attiva nella memoria di rilevamento; FALSE la disattivazione.  
  
### <a name="return-value"></a>Valore restituito  
 L'impostazione precedente del contrassegno di abilitazione di rilevamento.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per disabilitare il rilevamento in sezioni del codice che si è certi stanno allocando blocchi correttamente.  
  
 Per ulteriori informazioni sul `AfxEnableMemoryTracking`, vedere [debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).  
  
> [!NOTE]
>  Questa funzione funziona solo nella versione di Debug di MFC.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities#24](../../mfc/codesnippet/cpp/diagnostic-services_12.cpp)]  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="afxismemoryblock"></a>  AfxIsMemoryBlock  
 Testa un indirizzo di memoria per assicurarsi che rappresenta un blocco di memoria attualmente attive che è stato allocato dalla versione di diagnostica **nuovo**.  
  
```   
BOOL AfxIsMemoryBlock(
    const void* p,  
    UINT nBytes,  
    LONG* plRequestNumber = NULL); 
```  
  
### <a name="parameters"></a>Parametri  
 *p*  
 Punta al blocco di memoria da testare.  
  
 *nBytes*  
 Contiene la lunghezza del blocco di memoria in byte.  
  
 *plRequestNumber*  
 Punta a un **lungo** numero intero che verrà compilato con numero di sequenza di allocazione del blocco di memoria oppure zero se non rappresenta un blocco di memoria attualmente attivo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il blocco di memoria attualmente allocato e la lunghezza è corretta. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Controlla inoltre le dimensioni specificate per le dimensioni allocate originale. Se la funzione restituisce diverso da zero, viene restituito il numero di sequenza di allocazione *plRequestNumber*. Questo numero rappresenta l'ordine in cui il blocco è stato allocato rispetto alla tutti gli altri **nuovo** allocazioni.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities#27](../../mfc/codesnippet/cpp/diagnostic-services_13.cpp)]  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="afxisvalidaddress"></a>  AfxIsValidAddress  
 Verifica qualsiasi indirizzo di memoria per verificare che sia contenuta interamente all'interno dello spazio di memoria del programma.  
  
```   
BOOL AfxIsValidAddress(
    const void* lp,  
    UINT nBytes,  
    BOOL bReadWrite = TRUE); 
```  
  
### <a name="parameters"></a>Parametri  
 *LP*  
 Punti all'indirizzo di memoria da testare.  
  
 *nBytes*  
 Contiene il numero di byte di memoria da testare.  
  
 *bReadWrite*  
 Specifica se la memoria sia per la lettura e scrittura (TRUE) o solo la lettura (FALSE).  
  
### <a name="return-value"></a>Valore restituito  
 Nelle build di debug, diverso da zero se la memoria specificata blocca è interamente contenuta all'interno dello spazio di memoria del programma; in caso contrario 0.  
  
 Nelle build di debug non diverso da zero se *lp* non è NULL; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 L'indirizzo non è limitato ai blocchi allocati dal **nuovo**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities#28](../../mfc/codesnippet/cpp/diagnostic-services_14.cpp)]  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="afxisvalidstring"></a>  AfxIsValidString  
 Utilizzare questa funzione per determinare se un puntatore a una stringa è valido.  
  
```   
BOOL  AfxIsValidString(
    LPCSTR lpsz,  
    int nLength = -1); 
```  
  
### <a name="parameters"></a>Parametri  
 *lpsz*  
 Puntatore a test.  
  
 *nLength*  
 Specifica la lunghezza della stringa da testare, in byte. Il valore -1 indica che la stringa sarà con terminazione null.  
  
### <a name="return-value"></a>Valore restituito  
 Nelle build di debug, diverso da zero se il puntatore punta a una stringa di dimensioni specificate. in caso contrario 0.  
  
 Nelle build di debug non diverso da zero se *lpsz* non è NULL; in caso contrario, 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities#29](../../mfc/codesnippet/cpp/diagnostic-services_15.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="afxsetallochook"></a>  AfxSetAllocHook  
 Imposta una funzione hook che consente di chiamare il metodo della funzione specificata prima che ogni blocco di memoria viene allocata.  
  
```   
AFX_ALLOC_HOOK AfxSetAllocHook(AFX_ALLOC_HOOK pfnAllocHook); 
```  
  
### <a name="parameters"></a>Parametri  
 *pfnAllocHook*  
 Specifica il nome della funzione da chiamare. Vedere la sezione Osservazioni per il prototipo di una funzione di allocazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se si desidera consentire la preallocazione. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'allocatore di memoria di debug della libreria Microsoft Foundation Class può chiamare una funzione hook definita dall'utente per consentire all'utente per monitorare un'allocazione di memoria e per controllare se è consentita l'allocazione. Funzioni hook di allocazione sono un prototipo come indicato di seguito:  
  
 **BOOL AFXAPI AllocHook (size_t** `nSize` **, BOOL** `bObject` **, LONG** `lRequestNumber` **);**  
  
 *nSize*  
 La dimensione dell'allocazione di memoria proposto.  
  
 *bPackager*  
 TRUE se l'allocazione è per un `CObject`-oggetto derivato; in caso contrario FALSE.  
  
 *lRequestNumber*  
 Numero di sequenza dell'allocazione di memoria.  
  
 Si noti che la convenzione di chiamata di AFXAPI implica che il chiamato deve rimuovere i parametri dallo stack.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="afxdoforallclasses"></a>  AfxDoForAllClasses  
 Chiama la funzione di iterazione specificato per tutti i `CObject`-classi derivate nello spazio di memoria dell'applicazione.  
  
```   
void  
AFXAPI AfxDoForAllClasses(
    void (* pfn)(const CRuntimeClass* pClass, void* pContext),  
    void* pContext); 
```  
  
### <a name="parameters"></a>Parametri  
 *pfn*  
 Punta a una funzione di iterazione verranno chiamati per ogni classe. Gli argomenti di funzione sono un puntatore a un `CRuntimeClass` oggetto e un puntatore void per dati aggiuntivi che il chiamante fornisce alla funzione.  
  
 *pContext*  
 Punta a dati facoltativi che il chiamante può fornire per la funzione di iterazione. Puntatore ' this ' può essere NULL.  
  
### <a name="remarks"></a>Note  
 Serializzabile `CObject`-classi derivate sono classi derivate tramite DECLARE_SERIAL (macro). Il puntatore passato a `AfxDoForAllClasses` in *pContext* viene passato alla funzione di iterazione specificato ogni volta che viene chiamato.  
  
> [!NOTE]
>  Questa funzione funziona solo nella versione di Debug di MFC.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#113](../../mfc/codesnippet/cpp/diagnostic-services_16.cpp)]  
  
 [!code-cpp[NVC_MFCCollections#114](../../mfc/codesnippet/cpp/diagnostic-services_17.cpp)]  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="afxdoforallobjects"></a>  AfxDoForAllObjects  
 Esegue la funzione di iterazione specificato per tutti gli oggetti derivati da `CObject` che sia stati allocati con **nuovo**.  
  
```   
void AfxDoForAllObjects(
    void (* pfn)(CObject* pObject, void* pContext),  
    void* pContext); 
```  
  
### <a name="parameters"></a>Parametri  
 *pfn*  
 Punta a una funzione di iterazione per l'esecuzione per ogni oggetto. Gli argomenti di funzione sono un puntatore a un `CObject` e un puntatore void per dati aggiuntivi che il chiamante fornisce alla funzione.  
  
 *pContext*  
 Punta a dati facoltativi che il chiamante può fornire per la funzione di iterazione. Puntatore ' this ' può essere NULL.  
  
### <a name="remarks"></a>Note  
 Oggetti incorporati o stack globale, non vengono enumerate. Il puntatore passato a `AfxDoForAllObjects` in *pContext* viene passato alla funzione di iterazione specificato ogni volta che viene chiamato.  
  
> [!NOTE]
>  Questa funzione funziona solo nella versione di Debug di MFC.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections#115](../../mfc/codesnippet/cpp/diagnostic-services_18.cpp)]  
  
 [!code-cpp[NVC_MFCCollections#116](../../mfc/codesnippet/cpp/diagnostic-services_19.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)
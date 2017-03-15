---
title: Servizi diagnostici | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- vc.mfc.macros
dev_langs:
- C++
helpviewer_keywords:
- diagnosis, diagnostic services
- diagnostic macros, list of general MFC
- services, diagnostic
- MFC, diagnostic services
- general diagnostic functions and variables
- diagnostics, diagnostic functions and variables
- diagnostics, list of general MFC
- diagnosis, diagnostic functions and variables
- diagnosis, list of general MFC
- general diagnostic macros in MFC
- diagnostic macros
- diagnostic services
- object diagnostic functions in MFC
- diagnostics, diagnostic services
- diagnostic functions and variables
ms.assetid: 8d78454f-9fae-49c2-88c9-d3fabd5393e8
caps.latest.revision: 20
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 17a158366f94d27b7a46917282425d652e6b9042
ms.openlocfilehash: 86fe366a4d7863fb9339b7b5a9f880103876de33
ms.lasthandoff: 02/24/2017

---
# <a name="diagnostic-services"></a>Servizi diagnostici
La libreria Microsoft Foundation Class fornisce numerosi servizi di diagnostica che semplificano il debug dei programmi. I servizi di diagnostica includono macro e funzioni globali che consentono di tenere traccia delle allocazioni della memoria del programma, scaricare il contenuto degli oggetti in fase di esecuzione e stampare i messaggi di debug in fase di esecuzione. Le macro e funzioni globali per servizi di diagnostica sono raggruppate nelle categorie seguenti:  
  
-   Macro diagnostiche generali  
  
-   Funzioni e variabili di diagnostica generale  
  
-   Funzioni di diagnostica oggetti  
  
 Queste macro e funzioni sono disponibili per tutte le classi derivano da `CObject` nelle versioni Debug e rilascio di MFC. Tuttavia, tutti tranne `DEBUG_NEW` e **verificare** non eseguono alcuna operazione nella versione di rilascio.  
  
 Nella libreria di debug, tutti i blocchi di memoria allocata sono racchiusi tra parentesi quadre con una serie di "byte guard". Se i byte vengono disturbati da un'operazione di scrittura non corretta della memoria, le routine di diagnostica possono segnalare un problema. Se si include la riga:  
  
 [!code-cpp[NVC_MFCCObjectSample&#14;](../../mfc/codesnippet/cpp/diagnostic-services_1.cpp)]  
  
 nel file di implementazione, tutte le chiamate a **nuova** archivierà il numero di riga e nome file in cui l'allocazione di memoria ha avuto luogo. La funzione [CMemoryState:: DumpAllObjectsSince](cmemorystate-structure.md#dumpallobjectssince) visualizzerà queste informazioni aggiuntive, che consente di individuare le perdite di memoria. Fare riferimento anche alla classe [CDumpContext](../../mfc/reference/cdumpcontext-class.md) per ulteriori informazioni sull'output di diagnostica.  
  
 Inoltre, la libreria di runtime C supporta anche un set di funzioni di diagnostica che è possibile usare per eseguire il debug delle applicazioni. Per ulteriori informazioni, vedere [routine di Debug](../../c-runtime-library/debug-routines.md) in riferimento alla libreria di Run-Time.  
  
### <a name="mfc-general-diagnostic-macros"></a>Macro diagnostiche generali in MFC  
  
|||  
|-|-|  
|[L'ASSERZIONE](#assert)|Stampa un messaggio e quindi arresta il programma se l'espressione specificata restituisce **FALSE** nella versione di Debug della libreria.|  
|[ASSERT_KINDOF](#assert_kindof)|Verifica se un oggetto è un oggetto della classe specificata o di una classe derivata dalla classe specificata.|  
|[ASSERT_VALID](#assert_valid)|Verifica la validità interna di un oggetto chiamando il relativo `AssertValid` funzione membro; in genere sottoposto a override da `CObject`.|  
|[DEBUG_NEW](#debug_new)|Fornisce un nome file e un numero di riga per tutte le allocazioni di oggetti in modalità di debug per trovare perdite di memoria.|  
|[DEBUG_ONLY](#debug_only)|Simile a **ASSERT** ma non verifica il valore dell'espressione; utile per il codice che deve essere eseguita solo in modalità Debug.|  
|[TRACE](#trace)|Fornisce `printf`-come funzionalità nella versione di Debug della libreria.|  
|[VERIFICARE](#verify)|Simile a **ASSERT** ma valuta l'espressione nella versione di rilascio della libreria anche come la versione di Debug.|  
  
### <a name="mfc-general-diagnostic-variables-and-functions"></a>Funzioni e variabili di diagnostica generale in MFC  
  
|||  
|-|-|  
|[afxDump](#afxdump)|Variabile globale che invia [CDumpContext](../../mfc/reference/cdumpcontext-class.md) informazioni alla finestra di output o al terminale di debug.|  
|[afxMemDF](#afxmemdf)|Variabile globale che controlla il comportamento dell'allocatore di memoria di debug.|  
|[AfxCheckError](#afxcheckerror)|Variabile globale utilizzato per verificare l'oggetto passato **SCODE** per verificare se è un errore e, in caso affermativo, genera l'errore appropriato.|  
|[AfxCheckMemory](#afxcheckmemory)|Controlla l'integrità di tutta la memoria attualmente allocata.|  
|[AfxDump](#cdumpcontext_in_mfc_)|Se viene chiamato quando nel debugger, esegue il dump dello stato di un oggetto durante il debug.|  
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
|[AfxDoForAllClasses](#afxdoforallclasses)|Esegue una funzione specificata su tutti `CObject`-classi derivate che supportano il controllo dei tipi in fase di esecuzione.|  
|[AfxDoForAllObjects](#afxdoforallobjects)|Esegue una funzione specificata su tutti `CObject`-derivato gli oggetti allocati con **nuova**.|  
  
##  <a name="a-nameasserta--assert"></a><a name="assert"></a>L'ASSERZIONE
 Restituisce il relativo argomento.  
  
```   
ASSERT(booleanExpression)   
```  
  
### <a name="parameters"></a>Parametri  
 `booleanExpression`  
 Specifica un'espressione (inclusi valori di puntatore) che restituisce zero oppure 0.  
  
### <a name="remarks"></a>Note  
 Se il risultato è 0, la macro viene stampato un messaggio di diagnostica e arresta il programma. Se la condizione è diverso da zero, non esegue alcuna operazione.  
  
 Il messaggio di diagnostica presenta la forma seguente:  
  
 `assertion failed in file <name> in line <num>`  
  
 dove *nome* è il nome del file di origine, e *num* è il numero di riga dell'asserzione non riuscita nel file di origine.  
  
 Nella versione di MFC, **ASSERT** non valuta l'espressione e pertanto il programma non verrà interrotto. Se l'espressione deve essere valutata indipendentemente dall'ambiente, utilizzare il **verificare** (macro) al posto di **ASSERT**.  
  
> [!NOTE]
>  Questa funzione è disponibile solo nella versione di Debug di MFC.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities&#44;](../../mfc/codesnippet/cpp/diagnostic-services_2.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="a-nameassertkindofa--assertkindof"></a><a name="assert_kindof"></a>ASSERT_KINDOF  
 Questa macro asserisce che l'oggetto a cui puntata è un oggetto della classe specificata o è un oggetto di una classe derivato dalla classe specificata.  
  
```   
ASSERT_KINDOF(classname, pobject)  
```  
  
### <a name="parameters"></a>Parametri  
 *ClassName*  
 Il nome di un `CObject`-classe derivata.  
  
 *pObject*  
 Un puntatore a un oggetto classe.  
  
### <a name="remarks"></a>Note  
 Il *pobject* parametro deve essere un puntatore a un oggetto e può essere **const**. L'oggetto a cui punta e la classe deve supportare `CObject` informazioni sulle classi in fase di esecuzione. Ad esempio, per garantire che `pDocument` è un puntatore a un oggetto della `CMyDoc` classe o uno qualsiasi dei suoi derivati, è possibile codificare:  
  
 [!code-cpp[NVC_MFCDocView&#194;](../../mfc/codesnippet/cpp/diagnostic-services_3.cpp)]  
  
 Utilizzando il `ASSERT_KINDOF` (macro) corrisponde esattamente al codice:  
  
 [!code-cpp[&#195; NVC_MFCDocView](../../mfc/codesnippet/cpp/diagnostic-services_4.cpp)]  
  
 Questa funzione funziona solo per le classi dichiarate con il [DECLARE_DYNAMIC] (run-tempo-oggetto-modello-services.md #declare_dynamic o [DECLARE_SERIAL](run-time-object-model-services.md#declare_serial) (macro).  
  
> [!NOTE]
>  Questa funzione è disponibile solo nella versione di Debug di MFC.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="a-nameassertvalida--assertvalid"></a><a name="assert_valid"></a>ASSERT_VALID  
 Utilizzare per testare i presupposti la validità di stato interno di un oggetto.  
  
```   
ASSERT_VALID(pObject)   
```  
  
### <a name="parameters"></a>Parametri  
 `pObject`  
 Specifica un oggetto di una classe derivata da `CObject` con una versione di override di `AssertValid` funzione membro.  
  
### <a name="remarks"></a>Note  
 `ASSERT_VALID`chiamate di `AssertValid` funzione membro dell'oggetto passato come argomento.  
  
 Nella versione di MFC, `ASSERT_VALID` non esegue alcuna operazione. Nella versione di Debug, convalida il puntatore, confrontato **NULL**e chiama l'oggetto `AssertValid` funzioni membro. Se uno di questi test ha esito negativo, viene visualizzato un messaggio di avviso in modo analogo ai [ASSERT](#assert).  
  
> [!NOTE]
>  Questa funzione è disponibile solo nella versione di Debug di MFC.  
  
 Per ulteriori informazioni ed esempi, vedere [debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#19; NVC_MFCCObjectSample](../../mfc/codesnippet/cpp/diagnostic-services_5.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h

##  <a name="a-namedebugnewa--debugnew"></a><a name="debug_new"></a>DEBUG_NEW  
 Semplifica l'individuazione delle perdite di memoria.  
  
```   
#define  new DEBUG_NEW   
```  
  
### <a name="remarks"></a>Note  
 È possibile utilizzare `DEBUG_NEW` ovunque nel programma che normalmente si utilizzerebbe il **nuova** operatore per allocare memoria heap.  
  
 In modalità di debug (quando il **debug** simbolo è definito), `DEBUG_NEW` tiene traccia del numero di nome file e riga per ogni oggetto da esso allocato. Quindi, quando si utilizza il [CMemoryState:: DumpAllObjectsSince](cmemorystate-structure.md#dumpallobjectssince) funzione membro, ciascun oggetto allocato con `DEBUG_NEW` viene visualizzato con il nome di file e numero di riga in cui è stato allocato.  
  
 Utilizzare `DEBUG_NEW`, inserire la seguente direttiva nel file di origine:  
  
 [!code-cpp[NVC_MFCCObjectSample&#14;](../../mfc/codesnippet/cpp/diagnostic-services_1.cpp)]  
  
 Dopo aver inserito questa direttiva, il preprocessore inserirà `DEBUG_NEW` nel punto in cui si utilizza **nuova**, e MFC fa il resto. Quando si compila una versione del programma, `DEBUG_NEW` si traduce in un semplice **nuova** operazione e informazioni sul numeri di riga e nome file non vengono generati.  
  
> [!NOTE]
>  Nelle versioni precedenti di MFC (4.1 e precedenti) è necessario inserire il `#define` istruzione dopo tutte le istruzioni che ha chiamato la `IMPLEMENT_DYNCREATE` o `IMPLEMENT_SERIAL` macro. Questo non è più necessario.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h

##  <a name="a-namedebugonlya--debugonly"></a><a name="debug_only"></a>DEBUG_ONLY  
 In modalità di debug (quando il **debug** simbolo è definito), `DEBUG_ONLY` restituisce il relativo argomento.  
  
```   
DEBUG_ONLY(expression)   
```  
  
### <a name="remarks"></a>Note  
 In una build di rilascio **DEBUG_ONLY** non valuta il relativo argomento. Ciò è utile quando si utilizza codice che deve essere eseguito solo nelle build di debug.  
  
 Il `DEBUG_ONLY` macro equivale a circostanti *espressione* con **debug #ifdef** e `#endif`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities n.&32;](../../mfc/codesnippet/cpp/diagnostic-services_6.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h

##  <a name="a-nametracea--trace"></a><a name="trace"></a>TRACCIA  
 Invia la stringa specificata per il debug dell'applicazione corrente.  
  
```   
TRACE(exp)  
TRACE(DWORD  category,  UINT  level, LPCSTR lpszFormat, ...)   
```  
  
### <a name="remarks"></a>Note  
 Vedere [ATLTRACE2](http://msdn.microsoft.com/library/467ff555-e7a5-4f94-bdd9-50ee27ab9986) per una descrizione di **traccia**. **TRACCIA** e `ATLTRACE2` hanno lo stesso comportamento.  
  
 Nella versione di debug di MFC, questa macro invia la stringa specificata per il debug dell'applicazione corrente. In una build di rilascio, questa macro viene compilato su un valore vuoto (viene generato alcun codice affatto).  
  
 Per ulteriori informazioni, vedere [debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h

##  <a name="a-nameverifya--verify"></a><a name="verify"></a>VERIFICARE  
 Nella versione di Debug di MFC, restituisce il relativo argomento.  
  
```   
VERIFY(booleanExpression)   
```  
  
### <a name="parameters"></a>Parametri  
 `booleanExpression`  
 Specifica un'espressione (inclusi valori di puntatore) che restituisce zero oppure 0.  
  
### <a name="remarks"></a>Note  
 Se il risultato è 0, la macro viene stampato un messaggio di diagnostica e arresta il programma. Se la condizione è diverso da zero, non esegue alcuna operazione.  
  
 Il messaggio di diagnostica presenta la forma seguente:  
  
 `assertion failed in file <name> in line <num>`  
  
 dove *nome* è il nome del file di origine e *num* è il numero di riga dell'asserzione non riuscita nel file di origine.  
  
 Nella versione di MFC, **verificare** valuta l'espressione, ma non stampare o interrompere il programma. Ad esempio, se l'espressione è una chiamata di funzione, verrà effettuata la chiamata.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCDocView&#198;](../../mfc/codesnippet/cpp/diagnostic-services_7.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h

##  <a name="a-namecdumpcontextinmfca--afxdump-cdumpcontext-in-mfc"></a><a name="cdumpcontext_in_mfc_"></a>afxDump (CDumpContext in MFC)  
 Fornisce la funzionalità base dump di oggetti nell'applicazione.  
  
```   
CDumpContext  afxDump;   
```  
  
### <a name="remarks"></a>Note  
 `afxDump`è un oggetto predefinito [CDumpContext](../../mfc/reference/cdumpcontext-class.md) oggetto che consente di inviare `CDumpContext` informazioni alla finestra di output o a un terminale di debug. In genere, forniscono `afxDump` come parametro a `CObject::Dump`.  
  
 In Windows NT e tutte le versioni di Windows, `afxDump` output viene inviato alla finestra di Output di Debug di Visual C++ quando si esegue il debug dell'applicazione.  
  
 Questa variabile è definita solo nella versione di Debug di MFC. Per ulteriori informazioni su `afxDump`, vedere [debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities&#23;](../../mfc/codesnippet/cpp/diagnostic-services_8.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h

##  <a name="a-nameafxmemdfa--afxmemdf"></a><a name="afxmemdf"></a>afxMemDF  
 Questa variabile è accessibile da un debugger o il programma e consente di ottimizzare la diagnostica di allocazione.  
  
```   
int  afxMemDF;  
```  
  
### <a name="remarks"></a>Note  
 `afxMemDF`può avere i seguenti valori come specificato dall'enumerazione `afxMemDF`:  
  
- **allocMemDF** Attiva debug allocatore (impostazione predefinita nella libreria di Debug).  
  
- **delayFreeMemDF** Ritarda la liberazione della memoria. Mentre il programma libera un blocco di memoria, l'allocatore non restituisce la memoria del sistema operativo sottostante. Questo utilizzo intensivo di memoria massima inserirà proprio programma.  
  
- **checkAlwaysMemDF** chiamate `AfxCheckMemory` ogni volta che viene allocata o liberata memoria. Ciò comporterà il rallentamento significativamente deallocazioni e allocazioni di memoria.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#30; NVC_MFC_Utilities](../../mfc/codesnippet/cpp/diagnostic-services_9.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h

##  <a name="a-nameafxcheckerrora--afxcheckerror"></a><a name="afxcheckerror"></a>AfxCheckError  
 Questa funzione consente di verificare l'oggetto passato **SCODE** per verificare se è un errore.  
  
```   
void AFXAPI AfxCheckError(SCODE sc);
throw CMemoryException* 
throw COleException*  
```  
  
### <a name="remarks"></a>Note  
 Se si tratta di un errore, la funzione genera un'eccezione. Se l'oggetto passato `SCODE` è **E_OUTOFMEMORY**, la funzione genera un [CMemoryException](../../mfc/reference/cmemoryexception-class.md) chiamando [AfxThrowMemoryException](exception-processing.md#afxthrowmemoryexception). In caso contrario, la funzione genera un [COleException](../../mfc/reference/coleexception-class.md) chiamando [AfxThrowOleException](exception-processing.md#afxthrowoleexception).  
  
 Questa funzione può essere utilizzata per controllare i valori restituiti delle chiamate alle funzioni OLE nell'applicazione. Verificando il valore restituito con questa funzione nell'applicazione per poter reagire correttamente a condizioni di errore con una quantità minima di codice.  
  
> [!NOTE]
>  Questa funzione ha lo stesso effetto in modalità debug e compilazioni non di debug.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCOleContainer n.&33;](../../mfc/codesnippet/cpp/diagnostic-services_10.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h

##  <a name="a-nameafxcheckmemorya--afxcheckmemory"></a><a name="afxcheckmemory"></a>AfxCheckMemory  
 Questa funzione convalida il pool di memoria libera e visualizza i messaggi di errore in base alle esigenze.  
  
```   
BOOL  AfxCheckMemory(); 
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se non gli errori di memoria. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Se la funzione non rileva alcun danneggiamento della memoria, verrà visualizzato nulla.  
  
 Vengono controllati tutti i blocchi di memoria allocati nell'heap, inclusi quelli allocati dal **nuova** ma non quelli allocati da chiamate dirette di allocatori di memoria sottostante, ad esempio il `malloc` funzione o **GlobalAlloc** funzione Windows. Se viene trovato alcun blocco danneggiato, viene visualizzato un messaggio all'output del debugger.  
  
 Se si include la riga  
  
 [!code-cpp[NVC_MFCCObjectSample&#14;](../../mfc/codesnippet/cpp/diagnostic-services_1.cpp)]  
  
 in un modulo di programma, quindi le successive chiamate a `AfxCheckMemory` Mostra il numero di riga e nome file in cui è stata allocata la memoria.  
  
> [!NOTE]
>  Se il modulo contiene uno o più implementazioni delle classi serializzabili, quindi è necessario inserire il `#define` riga dopo l'ultimo `IMPLEMENT_SERIAL` chiamata di macro.  
  
 Questa funzione funziona solo nella versione di Debug di MFC.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#26; NVC_MFCCObjectSample](../../mfc/codesnippet/cpp/diagnostic-services_11.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
 
##  <a name="a-namemfca--afxdump-mfc"></a><a name="mfc_"></a>AfxDump (MFC)  
 Chiamare questa funzione mentre nel debugger per eseguire il dump dello stato di un oggetto durante il debug.  
  
```   
void AfxDump(const CObject* pOb); 
```  
  
### <a name="parameters"></a>Parametri  
 `pOb`  
 Un puntatore a un oggetto di una classe derivata da `CObject`.  
  
### <a name="remarks"></a>Note  
 **AfxDump** chiama un oggetto `Dump` funzione membro e invia le informazioni nel percorso specificate per il `afxDump` variabile. **AfxDump** è disponibile solo nella versione di Debug di MFC.  
  
 Il codice di programma non deve chiamare **AfxDump**, ma è necessario chiamare invece il `Dump` funzione membro dell'oggetto appropriato.  
  
##  <a name="a-nameafxdumpstacka--afxdumpstack"></a><a name="afxdumpstack"></a>AfxDumpStack  
 Questa funzione globale può essere utilizzata per generare un'immagine dello stack corrente.  
  
```   
void AFXAPI AfxDumpStack(DWORD dwTarget = AFX_STACK_DUMP_TARGET_DEFAULT); 
```  
  
### <a name="parameters"></a>Parametri  
 *dwTarget*  
 Indica la destinazione dell'output del dump. Valori possibili che possono essere combinati utilizzando l'OR ( **|**) (operatore), sono i seguenti:  
  
- **AFX_STACK_DUMP_TARGET_TRACE** invia l'output tramite la [traccia](#trace) (macro). Il **traccia** macro genera output nelle build di debug solo; nelle build di rilascio non genera alcun output. Inoltre, **traccia** può essere reindirizzato a altre destinazioni oltre il debugger.  
  
- **AFX_STACK_DUMP_TARGET_DEFAULT** Invia dettagli per la destinazione predefinita. Per una build di debug, l'output viene inviato per la **traccia** (macro). In una build di rilascio output viene inserito negli Appunti.  
  
- **AFX_STACK_DUMP_TARGET_CLIPBOARD** invia l'output solo negli Appunti. I dati vengono inseriti negli Appunti come testo normale utilizzando il **CF_TEXT** formato degli Appunti.  
  
- **AFX_STACK_DUMP_TARGET_BOTH** invia l'output negli Appunti e di ottenere il **traccia** macro contemporaneamente.  
  
- **AFX_STACK_DUMP_TARGET_ODS** invia l'output direttamente al debugger tramite la funzione Win32 **OutputDebugString()**. Questa opzione genererà l'output del debugger in entrambe le modalità di debug e build di rilascio quando il debugger viene connesso al processo. **AFX_STACK_DUMP_TARGET_ODS** sempre raggiunge il debugger (se è collegato) e non può essere reindirizzato.  
  
### <a name="remarks"></a>Note  
 Nell'esempio seguente riflette una singola riga dell'output generato dalla chiamata `AfxDumpStack` da un gestore del pulsante in un'applicazione di finestra di dialogo MFC:  
  
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
  
 Ogni riga nell'output precedente indica l'indirizzo dell'ultima chiamata di funzione, nome e percorso completo del modulo che contiene la chiamata di funzione e il prototipo della funzione chiamata. Se la chiamata di funzione nello stack non si verifica in corrispondenza dell'indirizzo esatto della funzione, viene visualizzato un offset di byte.  
  
 Ad esempio, la tabella seguente descrive la prima riga dell'output riportato sopra:  
  
|Output|Descrizione|  
|------------|-----------------|  
|`00427D55:`|L'indirizzo del mittente dell'ultima chiamata di funzione.|  
|`DUMP2\DEBUG\DUMP2.EXE!`|Nome e percorso completo del modulo che contiene la chiamata di funzione.|  
|`void AfxDumpStack(unsigned long)`|Il prototipo di funzione chiamata.|  
|`+ 181 bytes`|Offset in byte dall'indirizzo di prototipo di funzione (in questo caso, `void AfxDumpStack(unsigned long)`) all'indirizzo del mittente (in questo caso, `00427D55`).|  
  
 `AfxDumpStack`è disponibile nelle versioni di debug e nondebug delle librerie MFC; Tuttavia, la funzione è sempre collegata staticamente, anche quando il file eseguibile Usa MFC in una DLL condivisa. Nelle implementazioni della libreria condivisa, la funzione è disponibile nel MFCS42. Libreria LIB (e relative varianti).  
  
 Per utilizzare correttamente questa funzione:  
  
-   Il file IMAGEHLP. DLL deve essere presente nel percorso. Se non si dispone di questa DLL, la funzione verrà visualizzato un messaggio di errore. Vedere [raccolta Guide immagine](http://msdn.microsoft.com/library/windows/desktop/ms680321) per informazioni sul set di funzione fornita da IMAGEHLP.  
  
-   I moduli contenenti i frame nello stack devono includere informazioni di debug. Se non contengono informazioni di debug, la funzione genererà comunque un'analisi dello stack, ma la traccia sarà meno dettagliata.  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="a-nameafxenablememoryleakdumpa--afxenablememoryleakdump"></a><a name="afxenablememoryleakdump"></a>AfxEnableMemoryLeakDump  
 Abilita e disabilita il dump delle perdite di memoria nel distruttore `AFX_DEBUG_STATE` .  
  
```  
BOOL AFXAPI AfxEnableMemoryLeakDump(BOOL bDump);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bDump`  
 `TRUE` indica che il dump delle perdite di memoria è abilitato. `FALSE` indica che il dump delle perdite di memoria è disabilitato.  
  
### <a name="return-value"></a>Valore restituito  
 Il valore precedente per questo flag.  
  
### <a name="remarks"></a>Note  
 Quando un'applicazione scarica la libreria MFC, quest'ultima controlla se si sono verificate perdite di memoria. A questo punto, le perdite di memoria vengono segnalate all'utente tramite il **Debug** finestra di [!INCLUDE[vsprvs](../../assembler/masm/includes/vsprvs_md.md)].  
  
 Se l'applicazione carica un'altra libreria prima della libreria MFC, alcune allocazioni di memoria in tale libreria verranno segnalate erroneamente come perdite di memoria. Per effetto di queste segnalazioni errate, è possibile che l'applicazione venga chiusa lentamente a mano a mano che le perdite vengono segnalate dalla libreria MFC. In tal caso, usare `AfxEnableMemoryLeakDump` per disabilitare il dump delle perdite di memoria.  
  
> [!NOTE]
>  Se si usa questo metodo per disabilitare il dump delle perdite di memoria, nell'applicazione non si riceveranno i report delle perdite di memoria effettive. È consigliabile usare questo metodo solo se si è certi che il report contenga informazioni errate sulle perdite di memoria.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="a-nameafxenablememorytrackinga--afxenablememorytracking"></a><a name="afxenablememorytracking"></a>AfxEnableMemoryTracking  
 Diagnostica memoria di rilevamento è in genere abilitata nella versione di Debug di MFC.  
  
```   
BOOL AfxEnableMemoryTracking(BOOL bTrack); 
```  
  
### <a name="parameters"></a>Parametri  
 *bTrack*  
 Impostando questo valore su **TRUE** attiva la memoria rilevamento; **FALSE** lo disattiva.  
  
### <a name="return-value"></a>Valore restituito  
 L'impostazione precedente del flag di rilevamento attiva.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per disabilitare il rilevamento modifiche sulle sezioni del codice che sta allocando blocchi correttamente.  
  
 Per ulteriori informazioni su `AfxEnableMemoryTracking`, vedere [debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).  
  
> [!NOTE]
>  Questa funzione funziona solo nella versione di Debug di MFC.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities&#24;](../../mfc/codesnippet/cpp/diagnostic-services_12.cpp)]  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="a-nameafxismemoryblocka--afxismemoryblock"></a><a name="afxismemoryblock"></a>AfxIsMemoryBlock  
 Test di un indirizzo di memoria per assicurarsi che rappresenta un blocco di memoria attualmente attivo che è stato allocato dalla versione di diagnostica **nuova**.  
  
```   
BOOL AfxIsMemoryBlock(
    const void* p,  
    UINT nBytes,  
    LONG* plRequestNumber = NULL); 
```  
  
### <a name="parameters"></a>Parametri  
 `p`  
 Punta al blocco di memoria da sottoporre a test.  
  
 `nBytes`  
 Contiene la lunghezza del blocco di memoria in byte.  
  
 `plRequestNumber`  
 Punta a un **lungo** numero intero che verrà compilato con numero di sequenza di allocazione del blocco di memoria, oppure zero se non rappresenta un blocco di memoria attualmente attivo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il blocco di memoria attualmente allocato e la lunghezza è corretta. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Inoltre, controlla la dimensione specificata rispetto alla dimensione allocata originale. Se la funzione restituisce zero, viene restituito il numero di sequenza di allocazione `plRequestNumber`. Questo numero rappresenta l'ordine in cui è stato allocato il blocco relativo a tutti gli altri **nuova** allocazioni.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities&#27;](../../mfc/codesnippet/cpp/diagnostic-services_13.cpp)]  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="a-nameafxisvalidaddressa--afxisvalidaddress"></a><a name="afxisvalidaddress"></a>AfxIsValidAddress  
 Verifica qualsiasi indirizzo di memoria per assicurarsi che sia contenuto interamente in uno spazio di memoria del programma.  
  
```   
BOOL AfxIsValidAddress(
    const void* lp,  
    UINT nBytes,  
    BOOL bReadWrite = TRUE); 
```  
  
### <a name="parameters"></a>Parametri  
 `lp`  
 Punta all'indirizzo di memoria da sottoporre a test.  
  
 `nBytes`  
 Contiene il numero di byte di memoria da sottoporre a test.  
  
 *bReadWrite*  
 Specifica se la memoria sia per la lettura e scrittura ( **TRUE**) o solo la lettura ( **FALSE**).  
  
### <a name="return-value"></a>Valore restituito  
 Nelle build di debug diverso da zero se il blocco di memoria specificato è contenuto interamente nello spazio di memoria del programma; in caso contrario 0.  
  
 Nelle build di debug non diverso da zero se `lp` non è NULL; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 L'indirizzo non è limitata a blocchi allocati da **nuova**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[28 NVC_MFC_Utilities](../../mfc/codesnippet/cpp/diagnostic-services_14.cpp)]  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="a-nameafxisvalidstringa--afxisvalidstring"></a><a name="afxisvalidstring"></a>AfxIsValidString  
 Utilizzare questa funzione per determinare se un puntatore a una stringa è valido.  
  
```   
BOOL  AfxIsValidString(
    LPCSTR lpsz,  
    int nLength = -1); 
```  
  
### <a name="parameters"></a>Parametri  
 `lpsz`  
 Il puntatore per eseguire il test.  
  
 `nLength`  
 Specifica la lunghezza della stringa da sottoporre a test, in byte. Un valore di â €"1 indica che la stringa sarà con terminazione null.  
  
### <a name="return-value"></a>Valore restituito  
 Nelle build di debug, diverso da zero se il puntatore specificato punta a una stringa di dimensioni specificate. in caso contrario 0.  
  
 Nelle build di debug non diverso da zero se `lpsz` non è NULL; in caso contrario, 0.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities&#29;](../../mfc/codesnippet/cpp/diagnostic-services_15.cpp)]  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="a-nameafxsetallochooka--afxsetallochook"></a><a name="afxsetallochook"></a>AfxSetAllocHook  
 Consente di impostare un hook che consente la chiamata della funzione specificata prima di ogni blocco di memoria allocata.  
  
```   
AFX_ALLOC_HOOK AfxSetAllocHook(AFX_ALLOC_HOOK pfnAllocHook); 
```  
  
### <a name="parameters"></a>Parametri  
 *pfnAllocHook*  
 Specifica il nome della funzione da chiamare. Vedere la sezione Osservazioni per il prototipo di una funzione di allocazione.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se si desidera consentire l'allocazione; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'allocatore di memoria di debug della libreria Microsoft Foundation Class può chiamare una funzione hook definita dall'utente per consentire all'utente di monitorare un'allocazione di memoria e per controllare se è consentita l'allocazione. Funzioni hook di allocazione sono prototipo nel modo seguente:  
  
 **BOOL AFXAPI AllocHook( size_t** `nSize`**, BOOL** `bObject`**, LONG** `lRequestNumber` **);**  
  
 `nSize`  
 La dimensione dell'allocazione di memoria proposta.  
  
 `bObject`  
 **TRUE** se l'allocazione è per un `CObject`-oggetto derivato; in caso contrario **FALSE**.  
  
 `lRequestNumber`  
 Numero di sequenza dell'allocazione di memoria.  
  
 Si noti che il **AFXAPI** la convenzione di chiamata implica che il chiamato deve rimuovere i parametri dallo stack.  

### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="a-nameafxdoforallclassesa--afxdoforallclasses"></a><a name="afxdoforallclasses"></a>AfxDoForAllClasses  
 Chiama la funzione di iterazione specificato per tutti `CObject`-classi derivate nello spazio di memoria dell'applicazione.  
  
```   
void  
AFXAPI AfxDoForAllClasses(
    void (* pfn)(const CRuntimeClass* pClass, void* pContext),  
    void* pContext); 
```  
  
### <a name="parameters"></a>Parametri  
 `pfn`  
 Punta a una funzione di iterazione venga chiamato per ogni classe. Gli argomenti della funzione sono un puntatore a un `CRuntimeClass` oggetto e un puntatore void per dati aggiuntivi che il chiamante fornisce alla funzione.  
  
 `pContext`  
 Punta a dati facoltativi che il chiamante può fornire alla funzione di iterazione. Questo puntatore può essere **NULL**.  
  
### <a name="remarks"></a>Note  
 Serializzabile `CObject`-classi derivate sono classi derivate tramite la `DECLARE_SERIAL` (macro). Il puntatore passato a `AfxDoForAllClasses` in `pContext` viene passato alla funzione di iterazione specificato ogni volta che viene chiamato.  
  
> [!NOTE]
>  Questa funzione funziona solo nella versione di Debug di MFC.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections&#113;](../../mfc/codesnippet/cpp/diagnostic-services_16.cpp)]  
  
 [!code-cpp[&#114; NVC_MFCCollections](../../mfc/codesnippet/cpp/diagnostic-services_17.cpp)]  
  
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h 

##  <a name="a-nameafxdoforallobjectsa--afxdoforallobjects"></a><a name="afxdoforallobjects"></a>AfxDoForAllObjects  
 Esegue la funzione di iterazione specificato per tutti gli oggetti derivati da `CObject` che sono stati assegnati con **nuova**.  
  
```   
void AfxDoForAllObjects(
    void (* pfn)(CObject* pObject, void* pContext),  
    void* pContext); 
```  
  
### <a name="parameters"></a>Parametri  
 `pfn`  
 Punta a una funzione di iterazioni da eseguire per ogni oggetto. Gli argomenti della funzione sono un puntatore a un `CObject` e un puntatore void per dati aggiuntivi che il chiamante fornisce alla funzione.  
  
 `pContext`  
 Punta a dati facoltativi che il chiamante può fornire alla funzione di iterazione. Questo puntatore può essere **NULL**.  
  
### <a name="remarks"></a>Note  
 Lo stack, globale, o oggetti incorporati non sono enumerate. Il puntatore passato a `AfxDoForAllObjects` in `pContext` viene passato alla funzione di iterazione specificato ogni volta che viene chiamato.  
  
> [!NOTE]
>  Questa funzione funziona solo nella versione di Debug di MFC.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCCollections&#115;](../../mfc/codesnippet/cpp/diagnostic-services_18.cpp)]  
  
 [!code-cpp[N.&116; NVC_MFCCollections](../../mfc/codesnippet/cpp/diagnostic-services_19.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)

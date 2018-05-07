---
title: Eccezione durante l'elaborazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- vc.mfc.macros.exceptions
dev_langs:
- C++
helpviewer_keywords:
- macros [MFC], exception handling
- DAO (Data Access Objects), exceptions [MFC]
- OLE exceptions [MFC], MFC functions
- exceptions [MFC], processing
- exception macros [MFC]
- termination functions, MFC
- MFC, exceptions
- exceptions [MFC], MFC throwing functions
ms.assetid: 26d4457c-8350-48f5-916e-78f919787c30
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5a24d78089e468a2020e0ecdb1fba34783965325
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="exception-processing"></a>Elaborazione delle eccezioni
Quando viene eseguito un programma, possono verificarsi numerosi errori chiamati "eccezioni" e le condizioni anormali. Possono essere inclusi in esaurimento di memoria, errori di allocazione delle risorse e impossibilità di trovare i file.  
  
 La libreria Microsoft Foundation Class utilizza uno schema di gestione delle eccezioni viene modellato da vicino quella proposta del comitato standard ANSI per C++. Prima di chiamare una funzione che potrebbe verificarsi una situazione anomala, è necessario configurare un gestore di eccezioni. Se la funzione rileva una condizione anomala, viene generata un'eccezione e il controllo viene passato al gestore di eccezioni.  
  
 Diverse macro incluse con la libreria Microsoft Foundation Class verranno configurati i gestori di eccezioni. Un numero di altre funzioni globali consigliabile di generare eccezioni specializzate e terminare i programmi, se necessario. Queste macro e funzioni globali rientrano nelle categorie seguenti:  
  
- Macro delle eccezioni, che il gestore di eccezioni di struttura.  
  
- Exception-Throwing funzioni), che generano eccezioni di tipi specifici.  
  
- Funzioni di terminazione, causando la chiusura del programma.  
  
 Per ulteriori informazioni ed esempi, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).  
  
### <a name="exception-macros"></a>Macro eccezioni  
  
|||  
|-|-|  
|[PROVARE A](#try)|Definisce un blocco di codice per l'elaborazione di eccezione.|  
|[CATCH](#catch)|Definisce un blocco di codice per intercettare un'eccezione generata dal precedente **PROVARE** blocco.|  
|[CATCH_ALL](#catch_all)|Definisce un blocco di codice per il rilevamento di tutte le eccezioni da precedente **PROVARE** blocco.|  
|[AND_CATCH](#and_catch)|Definisce un blocco di codice per il rilevamento di tipi di eccezione aggiuntivo da precedente **PROVARE** blocco.|  
|[AND_CATCH_ALL](#and_catch_all)|Definisce un blocco di codice per il rilevamento di tutti gli altri tipi di eccezione aggiuntivo generate nel precedente **PROVARE** blocco.|  
|[END_CATCH](#end_catch)|Termina l'ultima **CATCH** o `AND_CATCH` blocco di codice.|  
|[END_CATCH_ALL](#end_catch_all)|Termina l'ultima `CATCH_ALL` blocco di codice.|  
|[THROW](#throw)|Genera un'eccezione specificata.|  
|[THROW_LAST](#throw_last)|Genera l'eccezione attualmente gestita al gestore esterno successivo.|  
  
### <a name="exception-throwing-functions"></a>Funzioni che generano eccezioni  
  
|||  
|-|-|  
|[AfxThrowArchiveException](#afxthrowarchiveexception)|Genera un'eccezione di archiviazione.|  
|[AfxThrowFileException](#afxthrowfileexception)|Genera un'eccezione di file.|  
|[AfxThrowInvalidArgException](#afxthrowinvalidargexception)|Genera un'eccezione di argomento non valido.|
|[AfxThrowMemoryException](#afxthrowmemoryexception)|Genera un'eccezione di memoria.|  
|[AfxThrowNotSupportedException](#afxthrownotsupportedexception)|Genera un'eccezione non supportata.|  
|[AfxThrowResourceException](#afxthrowresourceexception)|Genera un'eccezione di Windows risorsa non trovata.|  
|[AfxThrowUserException](#afxthrowuserexception)|Genera un'eccezione in un'azione avviata dall'utente di programma.|  
  
 MFC fornisce due funzioni che generano eccezioni in modo specifico per le eccezioni OLE:  
  
### <a name="ole-exception-functions"></a>Funzioni di eccezione OLE  
  
|||  
|-|-|  
|[AfxThrowOleDispatchException](#afxthrowoledispatchexception)|Genera un'eccezione all'interno di una funzione di automazione OLE.|  
|[AfxThrowOleException](#afxthrowoleexception)|Genera un'eccezione OLE.|  
  
 Per supportare le eccezioni di database, le classi di database forniscono due classi di eccezione, `CDBException` e `CDaoException`e funzioni globali per supportare i tipi di eccezione:  
  
### <a name="dao-exception-functions"></a>Funzioni di eccezione DAO  
  
|||  
|-|-|  
|[AfxThrowDAOException](#afxthrowdaoexception)|Genera un [CDaoException](../../mfc/reference/cdaoexception-class.md) dal codice.|  
|[AfxThrowDBException](#afxthrowdbexception)|Genera un [CDBException](../../mfc/reference/cdbexception-class.md) dal codice.|  
  
 MFC fornisce la funzione di terminazione seguente:  
  
### <a name="termination-functions"></a>Funzioni di terminazione  
  
|||  
|-|-|  
|[AfxAbort](#afxabort)|Chiamato per terminare un'applicazione di quando un errore irreversibile si verifica.|  
  
##  <a name="try"></a>  PROVARE A  
 Consente di impostare un **PROVARE** blocco.  
  
```   
TRY   
```  
  
### <a name="remarks"></a>Note  
 Oggetto **PROVARE** blocco identifica un blocco di codice che potrebbe generare eccezioni. Queste eccezioni vengono gestite nell'esempio seguente **CATCH** e `AND_CATCH` blocchi. Recursion è consentito: le eccezioni possono essere passate a un outer **PROVARE** blocco, ignorando le o utilizzando il `THROW_LAST` (macro). Fine di **PROVARE** blocco con un `END_CATCH` o `END_CATCH_ALL` (macro).  
  
 Per ulteriori informazioni, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CATCH](#catch).  

### <a name="requirements"></a>Requisiti
Intestazione: afx.h

##  <a name="catch"></a>  CATCH  
 Definisce un blocco di codice che rileva il primo tipo di eccezione generato nel passaggio precedente **PROVARE** blocco.  
  
```   
CATCH(exception_class, exception_object_pointer_name)  
 
```  
  
### <a name="parameters"></a>Parametri  
 *classe_eccezione*  
 Specifica il tipo di eccezione per verificare la presenza. Per un elenco delle classi di eccezioni standard, vedere la classe [CException](../../mfc/reference/cexception-class.md).  
  
 *nome_puntatore_oggetto_eccezione*  
 Specifica un nome per un puntatore dell'oggetto eccezione che verrà creato dalla macro. È possibile utilizzare il nome del puntatore per accedere all'oggetto eccezione all'interno di **CATCH** blocco. Questa variabile viene dichiarata automaticamente.  
  
### <a name="remarks"></a>Note  
 Il codice di elaborazione delle eccezioni può interrogare l'oggetto eccezione, se necessario, per ottenere ulteriori informazioni sulla causa specifica dell'eccezione. Richiama la macro `THROW_LAST` per spostare l'elaborazione sul frame esterno dell'eccezione. Fine di **PROVARE** blocco con un `END_CATCH` (macro).  
  
 Se *classe_eccezione* è la classe `CException`, quindi tutti i tipi di eccezione saranno intercettati. È possibile utilizzare il [CObject:: IsKindOf](../../mfc/reference/cobject-class.md#iskindof) funzione membro per determinare che è stata generata l'eccezione specifica. Un modo migliore per rilevare i diversi tipi di eccezioni consiste nell'utilizzare sequenziale `AND_CATCH` istruzioni, ognuna con un altro tipo di eccezione.  
  
 Il puntatore all'oggetto eccezione viene creato dalla macro. Non è necessario dichiarare manualmente.  
  
> [!NOTE]
>  Il **CATCH** blocco è definito come ambito C++ definito da parentesi graffe. Se si dichiarano delle variabili in questo ambito, è possibile accedere a queste variabili solo all'interno di tale ambito. Questo vale anche per *nome_puntatore_oggetto_eccezione*.  
  
 Per ulteriori informazioni sulle eccezioni e **CATCH** (macro), vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCExceptions#26](../../mfc/codesnippet/cpp/exception-processing_1.cpp)]  
  
##  <a name="catch_all"></a>  CATCH_ALL  
 Definisce un blocco di codice che memorizza nella cache tutti i tipi di eccezione generati nel passaggio precedente **PROVARE** blocco.  
  
```   
CATCH_ALL(exception_object_pointer_name)   
```  
  
### <a name="parameters"></a>Parametri  
 *nome_puntatore_oggetto_eccezione*  
 Specifica un nome per un puntatore dell'oggetto eccezione che verrà creato dalla macro. È possibile utilizzare il nome del puntatore per accedere all'oggetto eccezione all'interno del blocco `CATCH_ALL`. Questa variabile viene dichiarata automaticamente.  
  
### <a name="remarks"></a>Note  
 Il codice di elaborazione delle eccezioni può interrogare l'oggetto eccezione, se necessario, per ottenere ulteriori informazioni sulla causa specifica dell'eccezione. Richiama la macro `THROW_LAST` per spostare l'elaborazione sul frame esterno dell'eccezione. Se si utilizza `CATCH_ALL`, fine il **PROVARE** blocco con un `END_CATCH_ALL` (macro).  
  
> [!NOTE]
>  Il blocco `CATCH_ALL` viene definito come ambito C++ definito da parentesi graffe. Se si dichiarano delle variabili in questo ambito, è possibile accedere a queste variabili solo all'interno di tale ambito.  
  
 Per ulteriori informazioni sulle eccezioni, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CFile:: Abort](../../mfc/reference/cfile-class.md#abort).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h  

##  <a name="and_catch"></a>  AND_CATCH  
 Definisce un blocco di codice per il rilevamento di tipi di eccezione aggiuntivo generati nel precedente **PROVARE** blocco.  
  
```   
AND_CATCH(exception_class, exception_object_pointer_name)   
```  
  
### <a name="parameters"></a>Parametri  
 *classe_eccezione*  
 Specifica il tipo di eccezione per verificare la presenza. Per un elenco delle classi di eccezioni standard, vedere la classe [CException](../../mfc/reference/cexception-class.md).  
  
 *nome_puntatore_oggetto_eccezione*  
 Un nome per un puntatore a oggetto eccezione che verrà creato dalla macro. È possibile utilizzare il nome del puntatore per accedere all'oggetto eccezione all'interno del blocco `AND_CATCH`. Questa variabile viene dichiarata automaticamente.  
  
### <a name="remarks"></a>Note  
 Utilizzare il **CATCH** macro per intercettare un tipo di eccezione, il `AND_CATCH` macro per intercettare ogni tipo successive. Fine di **PROVARE** blocco con un `END_CATCH` (macro).  
  
 Il codice di elaborazione delle eccezioni può interrogare l'oggetto eccezione, se necessario, per ottenere ulteriori informazioni sulla causa specifica dell'eccezione. Chiamare il `THROW_LAST` (macro) all'interno di `AND_CATCH` blocca per spostare l'elaborazione sul frame esterno dell'eccezione. `AND_CATCH` Contrassegna la fine dell'oggetto precedente **CATCH** o `AND_CATCH` blocco.  
  
> [!NOTE]
>  Il `AND_CATCH` blocco viene definito come ambito C++ (definito da parentesi graffe). Se si dichiarano variabili in questo ambito, tenere presente che sono accessibili solo all'interno di tale ambito. Questo vale anche per il *nome_puntatore_oggetto_eccezione* variabile.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CATCH](#catch).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h  
##  <a name="and_catch_all"></a>  AND_CATCH_ALL  
 Definisce un blocco di codice per il rilevamento di tipi di eccezione aggiuntivo generati nel precedente **PROVARE** blocco.  
  
```   
AND_CATCH_ALL(exception_object_pointer_name)  
```  
  
### <a name="parameters"></a>Parametri  
 *nome_puntatore_oggetto_eccezione*  
 Un nome per un puntatore a oggetto eccezione che verrà creato dalla macro. È possibile utilizzare il nome del puntatore per accedere all'oggetto eccezione all'interno del blocco `AND_CATCH_ALL`. Questa variabile viene dichiarata automaticamente.  
  
### <a name="remarks"></a>Note  
 Utilizzare il **CATCH** macro per intercettare un tipo di eccezione, il `AND_CATCH_ALL` macro per intercettare tutti gli altri tipi successivi. Se si utilizza `AND_CATCH_ALL`, fine il **PROVARE** blocco con un `END_CATCH_ALL` (macro).  
  
 Il codice di elaborazione delle eccezioni può interrogare l'oggetto eccezione, se necessario, per ottenere ulteriori informazioni sulla causa specifica dell'eccezione. Chiamare il `THROW_LAST` (macro) all'interno di `AND_CATCH_ALL` blocca per spostare l'elaborazione sul frame esterno dell'eccezione. `AND_CATCH_ALL` Contrassegna la fine dell'oggetto precedente **CATCH** o `AND_CATCH_ALL` blocco.  
  
> [!NOTE]
>  Il `AND_CATCH_ALL` blocco è definito come ambito C++ (definito da parentesi graffe). Se si dichiarano variabili in questo ambito, tenere presente che sono accessibili solo all'interno di tale ambito.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h  
  
##  <a name="end_catch"></a>  END_CATCH  
 Contrassegna la fine dell'ultimo **CATCH** o `AND_CATCH` blocco.  
  
```   
END_CATCH  
```  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni sul `END_CATCH` (macro), vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h  
  
##  <a name="end_catch_all"></a>  END_CATCH_ALL  
 Contrassegna la fine dell'ultimo `CATCH_ALL` o `AND_CATCH_ALL` blocco.  
  
```   
END_CATCH_ALL  
```  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h  
  
##  <a name="throw"></a>  THROW (MFC)  
 Genera l'eccezione specificata.  
  
```   
THROW(exception_object_pointer) 
```  
  
### <a name="parameters"></a>Parametri  
 *exception_object_pointer*  
 Punta a un oggetto eccezione derivato da `CException`.  
  
### <a name="remarks"></a>Note  
 **GENERARE** interrupt programmare l'esecuzione, passare il controllo associato **CATCH** bloccare nel programma. Se non è stato fornito il **CATCH** bloccare, quindi il controllo viene passato a un modulo di libreria Microsoft Foundation Class che visualizza un errore del messaggio e viene chiuso.  
  
 Per ulteriori informazioni, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h  
  
##  <a name="throw_last"></a>  THROW_LAST  
 Genera nuovamente l'eccezione al successivo outer **CATCH** blocco.  
  
```   
THROW_LAST()   
```  
  
### <a name="remarks"></a>Note  
 Questa macro consente di generare un'eccezione creata localmente. Se si tenta di generare un'eccezione che è consentito di intercettare solo, in genere rientrano nell'ambito e di essere eliminato. Con `THROW_LAST`, l'eccezione viene passata in modo corretto al successivo **CATCH** gestore.  
  
 Per ulteriori informazioni, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CFile:: Abort](../../mfc/reference/cfile-class.md#abort).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h  
  
##  <a name="afxthrowarchiveexception"></a>  AfxThrowArchiveException  
 Genera un'eccezione di archiviazione.  
  
```   
void  AfxThrowArchiveException(int cause, LPCTSTR lpszArchiveName); 
```  
  
### <a name="parameters"></a>Parametri  
 `cause`  
 Specifica un numero intero che indica il motivo dell'eccezione. Per un elenco dei possibili valori, vedere [CArchiveException::m_cause](../../mfc/reference/carchiveexception-class.md#m_cause).  
  
 `lpszArchiveName`  
 Punta a una stringa contenente il nome del `CArchive` oggetto che ha causato l'eccezione (se disponibile).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h  
  
##  <a name="afxthrowfileexception"></a>  AfxThrowFileException  
 Genera un'eccezione di file.  
  
```   
void AfxThrowFileException(
    int cause,  
    LONG lOsError = -1,  
    LPCTSTR lpszFileName = NULL); 
```  
  
### <a name="parameters"></a>Parametri  
 `cause`  
 Specifica un numero intero che indica il motivo dell'eccezione. Per un elenco dei possibili valori, vedere [CFileException::m_cause](../../mfc/reference/cfileexception-class.md#m_cause).  
  
 `lOsError`  
 Contiene il numero di errore di sistema (se disponibile) che indica il motivo dell'eccezione. Vedere il manuale del sistema operativo per un elenco dei codici di errore.  
  
 `lpszFileName`  
 Punta a una stringa contenente il nome del file che ha causato l'eccezione (se disponibile).  
  
### <a name="remarks"></a>Note  
 È responsabile per determinare la causa in base al codice di errore del sistema operativo.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h  

## <a name="afxthrowinvalidargexception"></a>  AfxThrowInvalidArgException
Genera un'eccezione di argomento non valido.  
   
### <a name="syntax"></a>Sintassi    
```
void AfxThrowInvalidArgException( );  
```  
   
### <a name="remarks"></a>Note  
 Questa funzione viene chiamata quando vengono utilizzati argomenti non validi.  
   
### <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
   
### <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](mfc-macros-and-globals.md)   
 [Classe CInvalidArgException](cinvalidargexception-class.md)   
 [THROW](#throw)
  
  
##  <a name="afxthrowmemoryexception"></a>  AfxThrowMemoryException  
 Genera un'eccezione di memoria.  
  
```   
void AfxThrowMemoryException(); 
```  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione se le chiamate a allocatori di memoria di sistema sottostante (ad esempio `malloc` e [GlobalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366574) funzione Windows) esito negativo. Non è necessario chiamare per **nuova** perché **nuova** verrà generata un'eccezione di memoria automaticamente se l'allocazione di memoria ha esito negativo.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h  
  
##  <a name="afxthrownotsupportedexception"></a>  AfxThrowNotSupportedException  
 Genera un'eccezione che rappresenta il risultato di una richiesta per una funzionalità non supportata.  
  
```  
void AfxThrowNotSupportedException(); 
```  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h  
  
##  <a name="afxthrowresourceexception"></a>  AfxThrowResourceException  
 Genera un'eccezione di risorse.  
  
```   
void  AfxThrowResourceException(); 
```  
  
### <a name="remarks"></a>Note  
 Questa funzione viene in genere chiamata quando non è possibile caricare una risorsa di Windows.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h  
  
##  <a name="afxthrowuserexception"></a>  AfxThrowUserException  
 Genera un'eccezione per arrestare un'operazione dell'utente finale.  
  
```   
void AfxThrowUserException(); 
```  
  
### <a name="remarks"></a>Note  
 Questa funzione viene in genere chiamata immediatamente dopo `AfxMessageBox` ha segnalato un errore all'utente.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h  
  
##  <a name="afxthrowoledispatchexception"></a>  AfxThrowOleDispatchException  
 Utilizzare questa funzione per generare un'eccezione all'interno di una funzione di automazione OLE.  
  
```   
void AFXAPI AfxThrowOleDispatchException(
    WORD wCode ,  
    LPCSTR lpszDescription,  
    UINT nHelpID = 0);

void AFXAPI AfxThrowOleDispatchException(
    WORD wCode,  
    UINT nDescriptionID,  
    UINT nHelpID = -1); 
```  
  
### <a name="parameters"></a>Parametri  
 `wCode`  
 Un codice di errore specifico dell'applicazione.  
  
 `lpszDescription`  
 Verbali descrizione dell'errore.  
  
 `nDescriptionID`  
 ID della risorsa per la descrizione dell'errore verbale.  
  
 `nHelpID`  
 Un contesto della Guida per la Guida dell'applicazione (. File HLP).  
  
### <a name="remarks"></a>Note  
 Le informazioni fornite a questa funzione possono essere visualizzate dall'applicazione determinante (Microsoft Visual Basic o un'altra applicazione client di automazione OLE).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCExceptions#25](../../mfc/codesnippet/cpp/exception-processing_2.cpp)]  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h  
  
##  <a name="afxthrowoleexception"></a>  AfxThrowOleException  
 Crea un oggetto di tipo `COleException` e genera un'eccezione.  
  
``` 
void AFXAPI AfxThrowOleException(SCODE sc);
void AFXAPI AfxThrowOleException(HRESULT hr); 
```  
  
### <a name="parameters"></a>Parametri  
 `sc`  
 Un codice di stato OLE che indica il motivo dell'eccezione.  
  
 `hr`  
 Handle per un codice di risultato che indica il motivo dell'eccezione.  
  
### <a name="remarks"></a>Note  
 La versione che accetta un `HRESULT` come un argomento consente di convertire il codice di risultato nella corrispondente `SCODE`. Per ulteriori informazioni su `HRESULT` e `SCODE`, vedere [struttura dei codici di errore COM](http://msdn.microsoft.com/library/windows/desktop/ms690088) in Windows SDK.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** afxdao. h  
  
##  <a name="afxthrowdaoexception"></a>  AfxThrowDaoException  
 Chiamare questa funzione per generare un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md) dal codice.  
  
```   
void AFXAPI AfxThrowDaoException(
    int nAfxDaoError = NO_AFX_DAO_ERROR,  
    SCODE scode = S_OK); 
```  
  
### <a name="parameters"></a>Parametri  
 `nAfxDaoError`  
 Valore intero che rappresenta un codice di errore esteso di DAO, che può essere uno dei valori elencato in [CDaoException::m_nAfxDaoError](../../mfc/reference/cdaoexception-class.md#m_nafxdaoerror).  
  
 *SCODE*  
 Un codice di errore OLE da DAO, di tipo `SCODE`. Per informazioni, vedere [CDaoException::m_scode](../../mfc/reference/cdaoexception-class.md#m_scode).  
  
### <a name="remarks"></a>Note  
 Il framework chiama anche `AfxThrowDaoException`. Nella chiamata, è possibile passare uno dei parametri o entrambi. Ad esempio, se si desidera generare uno definito gli errori **CDaoException::nAfxDaoError** ma non si desidera eseguire il *scode* parametro, passare un codice valido nel `nAfxDaoError` parametri e accettare il valore predefinito per *scode*.  
  
 Per informazioni sulle eccezioni correlate a classi DAO MFC, vedere la classe `CDaoException` in questo manuale e l'articolo [eccezioni: eccezioni di Database](../../mfc/exceptions-database-exceptions.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFXDB. h  
  
##  <a name="afxthrowdbexception"></a>  AfxThrowDBException  
 Chiamare questa funzione per generare un'eccezione di tipo `CDBException` dal codice.  
  
```  
void AfxThrowDBException(
    RETCODE nRetCode,  
    CDatabase* pdb,  
    HSTMT hstmt);  
```  
  
### <a name="parameters"></a>Parametri  
 `nRetCode`  
 Un valore di tipo **RETCODE**, che definisce il tipo di errore che ha causato l'eccezione generata.  
  
 `pdb`  
 Un puntatore al `CDatabase` oggetto che rappresenta la connessione all'origine dati a cui è associato all'eccezione.  
  
 `hstmt`  
 Un database ODBC **HSTMT** handle che specifica l'handle di istruzione a cui è associato all'eccezione.  
  
### <a name="remarks"></a>Note  
 Il framework chiama `AfxThrowDBException` quando riceve un ODBC **RETCODE** da una chiamata a un'API ODBC funzione e interpreta il **RETCODE** come una condizione eccezionale anziché un errore expectable. Ad esempio, un'operazione di accesso ai dati potrebbe non riuscire a causa di un errore di lettura del disco.  
  
 Per informazioni di **RETCODE** valori definiti da ODBC, vedere il capitolo 8 "Il recupero dello stato e informazioni sull'errore," in Windows SDK. Per informazioni sulle estensioni MFC per questi codici, vedere la classe [CDBException](../../mfc/reference/cdbexception-class.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h  
  
##  <a name="afxabort"></a>  AfxAbort  
 La funzione di terminazione predefinita fornita da MFC.  
  
```   
void  AfxAbort(); 
```  
  
### <a name="remarks"></a>Note  
 `AfxAbort` viene chiamato internamente dalle funzioni membro MFC quando è presente un errore irreversibile, ad esempio un'eccezione non rilevata che non può essere gestito. È possibile chiamare `AfxAbort` nel raro caso quando si verifica un errore irreversibile da cui è possibile ripristinare.  
  
### <a name="example"></a>Esempio  
 Per vedere l'esempio [CATCH](#catch).  

### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h   
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)   
 [Classe CException](../../mfc/reference/cexception-class.md)

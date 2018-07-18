---
title: L'elaborazione delle eccezioni | Microsoft Docs
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
ms.openlocfilehash: e77284d36a7290f5d9070bb355a8affae9ba864f
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37336861"
---
# <a name="exception-processing"></a>Elaborazione delle eccezioni
Quando viene eseguito un programma, può verificarsi una serie di condizioni anormali ed errori delle "eccezioni". Potrebbero includere esaurimento di memoria, errori di allocazione di risorse ed errori per trovare i file.  
  
 La libreria Microsoft Foundation Class usa uno schema di gestione delle eccezioni che è modellato da vicino quella proposta dal comitato degli standard ANSI per C++. Prima di chiamare una funzione che potrebbe verificarsi una situazione anomala, è necessario configurare un gestore di eccezioni. Se la funzione rileva una condizione anomala, viene generata un'eccezione e il controllo viene passato al gestore di eccezioni.  
  
 Configureranno i gestori di eccezioni diverse macro incluse con la libreria Microsoft Foundation Class. Un numero di altre funzioni globali consigliabile di generare eccezioni specializzate e terminare i programmi, se necessario. Queste macro e funzioni globali rientrano nelle categorie seguenti:  
  
- Macro di eccezioni, cui strutturare il gestore di eccezioni.  
  
- Exception-Throwing funzioni), che generano eccezioni di tipi specifici.  
  
- Funzioni di terminazione, causando la chiusura del programma.  
  
 Per altre informazioni ed esempi, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).  
  
### <a name="exception-macros"></a>Macro di eccezioni  
  
|||  
|-|-|  
|[PROVA](#try)|Definisce un blocco di codice per l'elaborazione delle eccezioni.|  
|[CATCH](#catch)|Definisce un blocco di codice per rilevare un'eccezione generata dal precedente **PROVARE** blocco.|  
|[CATCH_ALL](#catch_all)|Definisce un blocco di codice per intercettare tutte le eccezioni dal precedente **PROVARE** blocco.|  
|[AND_CATCH](#and_catch)|Definisce un blocco di codice per il rilevamento di tipi di eccezione aggiuntive dal precedente **PROVARE** blocco.|  
|[AND_CATCH_ALL](#and_catch_all)|Definisce un blocco di codice per il rilevamento di tutti gli altri tipi di ulteriore eccezione generate in un precedente **PROVARE** blocco.|  
|[END_CATCH](#end_catch)|Termina l'ultima **INTERCETTARE** oppure **AND_CATCH** blocco di codice.|  
|[END_CATCH_ALL](#end_catch_all)|Termina l'ultima **CATCH_ALL** blocco di codice.|  
|[ISTRUZIONE THROW](#throw)|Genera un'eccezione specificata.|  
|[THROW_LAST](#throw_last)|Genera l'eccezione attualmente gestita al gestore esterno successivo.|  
  
### <a name="exception-throwing-functions"></a>Funzioni che generano eccezioni  
  
|||  
|-|-|  
|[AfxThrowArchiveException](#afxthrowarchiveexception)|Genera un'eccezione di archiviazione.|  
|[AfxThrowFileException](#afxthrowfileexception)|Genera un'eccezione di file.|  
|[AfxThrowInvalidArgException](#afxthrowinvalidargexception)|Genera un'eccezione di argomento non valido.|
|[AfxThrowMemoryException](#afxthrowmemoryexception)|Genera un'eccezione di memoria.|  
|[AfxThrowNotSupportedException](#afxthrownotsupportedexception)|Genera un'eccezione non supportata.|  
|[AfxThrowResourceException](#afxthrowresourceexception)|Genera un'eccezione di Windows resource non trovato.|  
|[AfxThrowUserException](#afxthrowuserexception)|Genera un'eccezione in un'azione avviata dall'utente programma.|  
  
 MFC fornisce due funzioni che generano eccezioni in modo specifico per le eccezioni OLE:  
  
### <a name="ole-exception-functions"></a>Funzioni di eccezione OLE  
  
|||  
|-|-|  
|[AfxThrowOleDispatchException](#afxthrowoledispatchexception)|Genera un'eccezione all'interno di una funzione di automazione OLE.|  
|[AfxThrowOleException](#afxthrowoleexception)|Genera un'eccezione OLE.|  
  
 Per supportare le eccezioni di database, le classi di database offrono due classi di eccezione, `CDBException` e `CDaoException`e funzioni globali per supportare i tipi di eccezione:  
  
### <a name="dao-exception-functions"></a>Funzioni di eccezione di DAO  
  
|||  
|-|-|  
|[AfxThrowDAOException](#afxthrowdaoexception)|Genera una [CDaoException](../../mfc/reference/cdaoexception-class.md) dal codice.|  
|[AfxThrowDBException](#afxthrowdbexception)|Genera una [CDBException](../../mfc/reference/cdbexception-class.md) dal codice.|  
  
 MFC fornisce la funzione di terminazione seguente:  
  
### <a name="termination-functions"></a>Funzioni di terminazione  
  
|||  
|-|-|  
|[AfxAbort](#afxabort)|Chiamato per terminare un'applicazione quando un errore irreversibile generato.|  
  
##  <a name="try"></a>  PROVA  
 Configura un **PROVARE** blocco.  
  
```   
TRY   
```  
  
### <a name="remarks"></a>Note  
 Oggetto **PROVARE** blocco identifica un blocco di codice che potrebbe generare eccezioni. Nell'esempio seguente vengono gestite le eccezioni **INTERCETTARE** e **AND_CATCH** blocchi. Recursion è consentito: le eccezioni possono essere passate a un outer **PROVARE** blocco, li ignora oppure utilizzando il THROW_LAST (macro). Fine di **PROVARE** blocco con una macro di END_CATCH o END_CATCH_ALL.  
  
 Per altre informazioni, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [CATCH](#catch).  

### <a name="requirements"></a>Requisiti
Intestazione: afx.h

##  <a name="catch"></a>  CATCH  
 Definisce un blocco di codice che rileva il primo tipo di eccezione generato nel precedente **PROVARE** blocco.  
  
```   
CATCH(exception_class, exception_object_pointer_name)  
 
```  
  
### <a name="parameters"></a>Parametri  
 *classe_eccezione*  
 Specifica il tipo di eccezione da testare. Per un elenco di classi di eccezioni standard, vedere la classe [CException](../../mfc/reference/cexception-class.md).  
  
 *nome_puntatore_oggetto_eccezione*  
 Specifica un nome per un puntatore dell'oggetto eccezione che verrà creato dalla macro. È possibile usare il nome del puntatore per accedere all'oggetto eccezione all'interno di **CATCH** blocco. Questa variabile viene dichiarata automaticamente.  
  
### <a name="remarks"></a>Note  
 Il codice di elaborazione delle eccezioni può interrogare l'oggetto eccezione, se necessario, per ottenere ulteriori informazioni sulla causa specifica dell'eccezione. Richiamare il THROW_LAST (macro) per spostare l'elaborazione per il frame dell'eccezione esterna. Fine di **PROVARE** blocco con un END_CATCH (macro).  
  
 Se *classe_eccezione* è la classe `CException`, quindi tutti i tipi di eccezione verranno intercettati. È possibile usare la [CObject:: IsKindOf](../../mfc/reference/cobject-class.md#iskindof) funzione membro per determinare l'eccezione specifica è stata generata. Un modo migliore per rilevare diversi tipi di eccezioni è usare sequenziali **AND_CATCH** (istruzioni), ognuno con un tipo di eccezione diverso.  
  
 Il puntatore all'oggetto eccezione viene creato dalla macro. Non devi dichiarare personalmente.  
  
> [!NOTE]
>  Il **CATCH** blocco viene definito come ambito C++ da parentesi graffe. Se si dichiarano delle variabili in questo ambito, è possibile accedere a queste variabili solo all'interno di tale ambito. Questo vale anche per *nome_puntatore_oggetto_eccezione*.  
  
 Per altre informazioni sulle eccezioni e la macro CATCH, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCExceptions#26](../../mfc/codesnippet/cpp/exception-processing_1.cpp)]  
  
##  <a name="catch_all"></a>  CATCH_ALL  
 Definisce un blocco di codice che rileva tutti i tipi di eccezione generati nel precedente **PROVARE** blocco.  
  
```   
CATCH_ALL(exception_object_pointer_name)   
```  
  
### <a name="parameters"></a>Parametri  
 *nome_puntatore_oggetto_eccezione*  
 Specifica un nome per un puntatore dell'oggetto eccezione che verrà creato dalla macro. È possibile utilizzare il nome del puntatore per accedere all'oggetto eccezione all'interno del blocco `CATCH_ALL`. Questa variabile viene dichiarata automaticamente.  
  
### <a name="remarks"></a>Note  
 Il codice di elaborazione delle eccezioni può interrogare l'oggetto eccezione, se necessario, per ottenere ulteriori informazioni sulla causa specifica dell'eccezione. Richiama la macro `THROW_LAST` per spostare l'elaborazione sul frame esterno dell'eccezione. Se si usa **CATCH_ALL**, fine il **PROVARE** blocco con un end_catch_all (macro).  
  
> [!NOTE]
>  Il **CATCH_ALL** blocco viene definito come ambito C++ da parentesi graffe. Se si dichiarano delle variabili in questo ambito, è possibile accedere a queste variabili solo all'interno di tale ambito.  
  
 Per altre informazioni sulle eccezioni, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [CFile:: Abort](../../mfc/reference/cfile-class.md#abort).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h  

##  <a name="and_catch"></a>  AND_CATCH  
 Definisce un blocco di codice per intercettare i tipi di eccezione aggiuntive generati nel precedente **PROVARE** blocco.  
  
```   
AND_CATCH(exception_class, exception_object_pointer_name)   
```  
  
### <a name="parameters"></a>Parametri  
 *classe_eccezione*  
 Specifica il tipo di eccezione da testare. Per un elenco di classi di eccezioni standard, vedere la classe [CException](../../mfc/reference/cexception-class.md).  
  
 *nome_puntatore_oggetto_eccezione*  
 Un nome per un puntatore dell'oggetto eccezione che verrà creato dalla macro. È possibile usare il nome del puntatore per accedere all'oggetto eccezione all'interno di **AND_CATCH** blocco. Questa variabile viene dichiarata automaticamente.  
  
### <a name="remarks"></a>Note  
 Usare la macro CATCH per intercettare un tipo di eccezione, quindi l'AND_CATCH (macro) a intercettare ogni tipo successivi. Fine di **PROVARE** blocco con un END_CATCH (macro).  
  
 Il codice di elaborazione delle eccezioni può interrogare l'oggetto eccezione, se necessario, per ottenere ulteriori informazioni sulla causa specifica dell'eccezione. Chiamare il THROW_LAST (macro) all'interno di **AND_CATCH** bloccare per spostare l'elaborazione per il frame dell'eccezione esterna. **AND_CATCH** contrassegna la fine della precedente **CATCH** oppure **AND_CATCH** blocco.  
  
> [!NOTE]
>  Il **AND_CATCH** blocco viene definito come ambito C++ (delineato da parentesi graffe). Se si dichiarano variabili nell'ambito corrente, tenere presente che sono accessibili solo all'interno di tale ambito. Questo vale anche per il *nome_puntatore_oggetto_eccezione* variabile.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [CATCH](#catch).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h  
##  <a name="and_catch_all"></a>  AND_CATCH_ALL  
 Definisce un blocco di codice per intercettare i tipi di eccezione aggiuntive generati nel precedente **PROVARE** blocco.  
  
```   
AND_CATCH_ALL(exception_object_pointer_name)  
```  
  
### <a name="parameters"></a>Parametri  
 *nome_puntatore_oggetto_eccezione*  
 Un nome per un puntatore dell'oggetto eccezione che verrà creato dalla macro. È possibile usare il nome del puntatore per accedere all'oggetto eccezione all'interno di **AND_CATCH_ALL** blocco. Questa variabile viene dichiarata automaticamente.  
  
### <a name="remarks"></a>Note  
 Usare la **CATCH** macro per intercettare un tipo di eccezione, quindi l'and_catch_all (macro) per rilevare tutti gli altri tipi successivi. Se si usa AND_CATCH_ALL, terminare il **PROVARE** blocco con un end_catch_all (macro).  
  
 Il codice di elaborazione delle eccezioni può interrogare l'oggetto eccezione, se necessario, per ottenere ulteriori informazioni sulla causa specifica dell'eccezione. Chiamare il THROW_LAST (macro) all'interno di **AND_CATCH_ALL** bloccare per spostare l'elaborazione per il frame dell'eccezione esterna. **AND_CATCH_ALL** contrassegna la fine della precedente **CATCH** oppure **AND_CATCH_ALL** blocco.  
  
> [!NOTE]
>  Il **AND_CATCH_ALL** blocco viene definito come ambito C++ (racchiusi tra parentesi graffe). Se si dichiarano variabili nell'ambito corrente, tenere presente che sono accessibili solo all'interno di tale ambito.  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h  
  
##  <a name="end_catch"></a>  END_CATCH  
 Contrassegna la fine dell'ultima **INTERCETTARE** oppure **AND_CATCH** blocco.  
  
```   
END_CATCH  
```  
  
### <a name="remarks"></a>Note  
 Per altre informazioni su END_CATCH (macro), vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h  
  
##  <a name="end_catch_all"></a>  END_CATCH_ALL  
 Contrassegna la fine dell'ultimo * * CATCH_ALL88 oppure **AND_CATCH_ALL** blocco.  
  
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
 **GENERARE** interrupt programmare l'esecuzione, passare il controllo associato **CATCH** block nel programma. Se non è stata fornita il **CATCH** bloccare, quindi il controllo viene passato a un modulo di libreria Microsoft Foundation Class che visualizza un errore del messaggio e viene chiuso.  
  
 Per altre informazioni, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h  
  
##  <a name="throw_last"></a>  THROW_LAST  
 Genera l'eccezione nuovamente al successivo outer **CATCH** blocco.  
  
```   
THROW_LAST()   
```  
  
### <a name="remarks"></a>Note  
 Questa macro consente di generare un'eccezione creata localmente. Se si prova a generare un'eccezione che hanno appena intercettata, verranno in genere escono dall'ambito e da eliminare. Con **THROW_LAST**, l'eccezione viene passata in modo corretto al successivo **CATCH** gestore.  
  
 Per altre informazioni, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [CFile:: Abort](../../mfc/reference/cfile-class.md#abort).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h  
  
##  <a name="afxthrowarchiveexception"></a>  AfxThrowArchiveException  
 Genera un'eccezione di archiviazione.  
  
```   
void  AfxThrowArchiveException(int cause, LPCTSTR lpszArchiveName); 
```  
  
### <a name="parameters"></a>Parametri  
 *cause*  
 Specifica un numero intero che indica il motivo dell'eccezione. Per un elenco dei valori possibili, vedere [CArchiveException::m_cause](../../mfc/reference/carchiveexception-class.md#m_cause).  
  
 *lpszArchiveName*  
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
 *cause*  
 Specifica un numero intero che indica il motivo dell'eccezione. Per un elenco dei valori possibili, vedere [CFileException::m_cause](../../mfc/reference/cfileexception-class.md#m_cause).  
  
 *lOsError*  
 Contiene il numero di errore del sistema operativo, se disponibile, che indica il motivo dell'eccezione. Consultare il manuale del sistema operativo per un elenco dei codici di errore.  
  
 *lpszFileName*  
 Punta a una stringa contenente il nome del file che ha causato l'eccezione (se disponibile).  
  
### <a name="remarks"></a>Note  
 Si è responsabile di determinare la causa in base al codice di errore del sistema operativo.  
  
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
 [ISTRUZIONE THROW](#throw)
  
  
##  <a name="afxthrowmemoryexception"></a>  AfxThrowMemoryException  
 Genera un'eccezione di memoria.  
  
```   
void AfxThrowMemoryException(); 
```  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione se le chiamate a allocatori di memoria di sistema sottostante (ad esempio **malloc** e il [GlobalAlloc](http://msdn.microsoft.com/library/windows/desktop/aa366574) funzione Windows) esito negativo. Non è necessaria per chiamare **nuove** perché **nuovo** verrà generata un'eccezione di memoria automaticamente se l'allocazione di memoria ha esito negativo.  
  
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
 Questa funzione viene chiamata in genere quando non è possibile caricare una risorsa di Windows.  
  
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
 *wCode*  
 Un codice di errore specifico dell'applicazione.  
  
 *lpszDescription*  
 Descrizione dell'errore verbale.  
  
 *nDescriptionID*  
 ID risorsa per la descrizione dell'errore verbale.  
  
 *nHelpID*  
 Un contesto della Guida per la Guida dell'applicazione (. File HLP).  
  
### <a name="remarks"></a>Note  
 Le informazioni fornite a questa funzione possono essere visualizzate dall'applicazione trainante (Microsoft Visual Basic o un'altra applicazione client di automazione OLE).  
  
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
 *SC*  
 Un codice di stato OLE che indica il motivo dell'eccezione.  
  
 *risorse umane*  
 Handle per un codice di risultato che indica il motivo dell'eccezione.  
  
### <a name="remarks"></a>Note  
 La versione che accetta HRESULT come argomento converte tale codice di risultato nel SCODE corrispondente. Per altre informazioni sul valore HRESULT e SCODE, vedere [Structure of COM Error Codes](http://msdn.microsoft.com/library/windows/desktop/ms690088) nel SDK di Windows.  
  
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
 *nAfxDaoError*  
 Valore intero che rappresenta un oggetto DAO estesa di codice di errore, che è uno dei valori elencato in [CDaoException::m_nAfxDaoError](../../mfc/reference/cdaoexception-class.md#m_nafxdaoerror).  
  
 *SCODE*  
 Un codice di errore OLE da DAO, di tipo SCODE. Per informazioni, vedere [CDaoException::m_scode](../../mfc/reference/cdaoexception-class.md#m_scode).  
  
### <a name="remarks"></a>Note  
 Il framework chiama anche `AfxThrowDaoException`. La chiamata, è possibile passare uno dei parametri o entrambi. Ad esempio, se si desidera generare uno degli errori definiti nella **CDaoException::nAfxDaoError** ma non si desidera eseguire sulle *scode* parametro, passare un codice valido nel *nAfxDaoError* parametro e il valore predefinito per accettare *scode*.  
  
 Per informazioni sulle eccezioni relative a classi DAO MFC, vedere la classe `CDaoException` in questo libro e l'articolo [alle eccezioni: eccezioni di Database](../../mfc/exceptions-database-exceptions.md).  
  
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
 *nRetCode*  
 Un valore di tipo RETCODE, che definisce il tipo di errore che ha causato l'eccezione viene generata.  
  
 *PDB*  
 Un puntatore al `CDatabase` oggetto che rappresenta la connessione all'origine dati a cui è associato all'eccezione.  
  
 *HStmt*  
 Un handle HSTMT ODBC che specifica l'handle di istruzione a cui è associato all'eccezione.  
  
### <a name="remarks"></a>Note  
 Il framework chiama `AfxThrowDBException` quando riceve un RETCODE ODBC da una chiamata a una funzione API ODBC e interpreta i RETCODE come una condizione eccezionale, anziché un errore expectable. Ad esempio, un'operazione di accesso ai dati potrebbe non riuscire a causa di un errore di lettura del disco.  
  
 Per informazioni sui valori RETCODE definito da ODBC, vedere il capitolo 8 "Il recupero dello stato e informazioni sull'errore," in Windows SDK. Per informazioni sulle estensioni MFC per questi codici, vedere la classe [CDBException](../../mfc/reference/cdbexception-class.md).  
  
### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h  
  
##  <a name="afxabort"></a>  AfxAbort  
 La funzione di terminazione predefinita fornita da MFC.  
  
```   
void  AfxAbort(); 
```  
  
### <a name="remarks"></a>Note  
 `AfxAbort` viene chiamato internamente dalle funzioni membro MFC quando è presente un errore irreversibile, ad esempio un'eccezione non rilevata che non può essere gestito. È possibile chiamare `AfxAbort` nel raro caso che si verifica un errore irreversibile da cui è possibile ripristinare.  
  
### <a name="example"></a>Esempio  
 Vedere l'esempio relativo [CATCH](#catch).  

### <a name="requirements"></a>Requisiti  
  **Intestazione** AFX. h   
  
## <a name="see-also"></a>Vedere anche  
 [Macro e funzioni globali](../../mfc/reference/mfc-macros-and-globals.md)   
 [Classe CException](../../mfc/reference/cexception-class.md)

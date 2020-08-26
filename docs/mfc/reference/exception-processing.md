---
title: Elaborazione delle eccezioni
ms.date: 11/04/2016
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
ms.openlocfilehash: 9d6a1c30ca0811085124a5fb5994c5f35d412ae7
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88837188"
---
# <a name="exception-processing"></a>Elaborazione delle eccezioni

Quando si esegue un programma, è possibile che si verifichino alcune condizioni e Errori anomali, denominati "eccezioni". Questi possono includere l'esaurimento della memoria, gli errori di allocazione delle risorse e l'impossibilità di trovare i file.

Il libreria Microsoft Foundation Class utilizza uno schema di gestione delle eccezioni che viene modellato strettamente dopo quello proposto dal Comitato degli standard ANSI per C++. Prima di chiamare una funzione che potrebbe verificarsi di una situazione anomala, è necessario configurare un gestore di eccezioni. Se la funzione rileva una condizione anomala, viene generata un'eccezione e il controllo viene passato al gestore di eccezioni.

Diverse macro incluse con la libreria Microsoft Foundation Class configureranno i gestori di eccezioni. Diverse altre funzioni globali consentono di generare eccezioni specializzate e terminare programmi, se necessario. Queste macro e funzioni globali rientrano nelle categorie seguenti:

- Macro di eccezioni, che strutturano il gestore di eccezioni.

- Funzioni di generazione di eccezioni), che generano eccezioni di tipi specifici.

- Funzioni di terminazione, che provocano la terminazione del programma.

Per esempi e altre informazioni dettagliate, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).

### <a name="exception-macros"></a>Macro di eccezioni

|Nome|Descrizione|
|-|-|
|[PROVARE](#try)|Definisce un blocco di codice per l'elaborazione delle eccezioni.|
|[CATCH](#catch)|Designa un blocco di codice per intercettare un'eccezione dal blocco **try** precedente.|
|[CATCH_ALL](#catch_all)|Designa un blocco di codice per intercettare tutte le eccezioni dal blocco **try** precedente.|
|[AND_CATCH](#and_catch)|Designa un blocco di codice per intercettare ulteriori tipi di eccezione dal blocco **try** precedente.|
|[AND_CATCH_ALL](#and_catch_all)|Designa un blocco di codice per intercettare tutti gli altri tipi di eccezione aggiuntivi generati in un blocco **try** precedente.|
|[END_CATCH](#end_catch)|Termina l'ultimo blocco di codice **catch** o **AND_CATCH** .|
|[END_CATCH_ALL](#end_catch_all)|Termina l'ultimo blocco di codice **CATCH_ALL** .|
|[THROW](#throw)|Genera un'eccezione specificata.|
|[THROW_LAST](#throw_last)|Genera l'eccezione attualmente gestita al gestore esterno successivo.|

### <a name="exception-throwing-functions"></a>Funzioni di generazione di eccezioni

|Nome|Descrizione|
|-|-|
|[AfxThrowArchiveException](#afxthrowarchiveexception)|Genera un'eccezione di archiviazione.|
|[AfxThrowFileException](#afxthrowfileexception)|Genera un'eccezione di file.|
|[AfxThrowInvalidArgException](#afxthrowinvalidargexception)|Genera un'eccezione di argomento non valido.|
|[AfxThrowMemoryException](#afxthrowmemoryexception)|Genera un'eccezione di memoria.|
|[AfxThrowNotSupportedException](#afxthrownotsupportedexception)|Genera un'eccezione non supportata.|
|[AfxThrowResourceException](#afxthrowresourceexception)|Genera un'eccezione di risorsa Windows non trovata.|
|[AfxThrowUserException](#afxthrowuserexception)|Genera un'eccezione in un'azione programma avviata dall'utente.|

MFC fornisce due funzioni di generazione di eccezioni specifiche per le eccezioni OLE:

### <a name="ole-exception-functions"></a>Funzioni OLE Exception

|Nome|Descrizione|
|-|-|
|[AfxThrowOleDispatchException](#afxthrowoledispatchexception)|Genera un'eccezione all'interno di una funzione di automazione OLE.|
|[AfxThrowOleException](#afxthrowoleexception)|Genera un'eccezione OLE.|

Per supportare le eccezioni del database, le classi di database forniscono due classi di eccezione, `CDBException` e e `CDaoException` funzioni globali per supportare i tipi di eccezione:

### <a name="dao-exception-functions"></a>Funzioni di eccezione DAO

|Nome|Descrizione|
|-|-|
|[AfxThrowDAOException](#afxthrowdaoexception)|Genera un [CDaoException](../../mfc/reference/cdaoexception-class.md) dal codice personalizzato.|
|[AfxThrowDBException](#afxthrowdbexception)|Genera un [CDBException](../../mfc/reference/cdbexception-class.md) dal codice personalizzato.|

MFC fornisce la funzione di terminazione seguente:

### <a name="termination-functions"></a>Funzioni di terminazione

|Nome|Descrizione|
|-|-|
|[AfxAbort](#afxabort)|Chiamato per terminare un'applicazione quando si verifica un errore irreversibile.|

## <a name="try"></a><a name="try"></a> PROVARE

Imposta un blocco **try** .

```
TRY
```

### <a name="remarks"></a>Osservazioni

Un blocco **try** identifica un blocco di codice che potrebbe generare eccezioni. Tali eccezioni vengono gestite nei blocchi **catch** e **AND_CATCH** seguenti. Ricorsione consentita: le eccezioni possono essere passate a un blocco **try** esterno, ignorando o utilizzando la macro THROW_LAST. Terminare il blocco **try** con una macro END_CATCH o END_CATCH_ALL.

Per ulteriori informazioni, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [catch](#catch).

### <a name="requirements"></a>Requisiti

Intestazione: afx.h

## <a name="catch"></a><a name="catch"></a> CATCH

Definisce un blocco di codice che rileva il primo tipo di eccezione generato nel blocco **try** precedente.

```
CATCH(exception_class, exception_object_pointer_name)
```

### <a name="parameters"></a>Parametri

*exception_class*<br/>
Specifica il tipo di eccezione per cui eseguire il test. Per un elenco delle classi di eccezioni standard, vedere la classe [CException](../../mfc/reference/cexception-class.md).

*exception_object_pointer_name*<br/>
Specifica un nome per un puntatore dell'oggetto eccezione che verrà creato dalla macro. È possibile utilizzare il nome del puntatore per accedere all'oggetto eccezione all'interno del blocco **catch** . Questa variabile viene dichiarata automaticamente.

### <a name="remarks"></a>Osservazioni

Il codice di elaborazione delle eccezioni può interrogare l'oggetto eccezione, se necessario, per ottenere ulteriori informazioni sulla causa specifica dell'eccezione. Richiamare la macro THROW_LAST per spostare l'elaborazione al frame dell'eccezione esterna successiva. Terminare il blocco **try** con una macro END_CATCH.

Se *exception_class* è la classe `CException` , verranno rilevati tutti i tipi di eccezione. È possibile usare la funzione membro [CObject:: IsKindOf](../../mfc/reference/cobject-class.md#iskindof) per determinare quale eccezione specifica è stata generata. Un modo migliore per intercettare diversi tipi di eccezioni consiste nell'usare istruzioni **AND_CATCH** sequenziali, ognuna con un tipo di eccezione diverso.

Il puntatore all'oggetto eccezione viene creato dalla macro. Non è necessario dichiararlo manualmente.

> [!NOTE]
> Il blocco **catch** viene definito come ambito C++ delimitato da parentesi graffe. Se si dichiarano delle variabili in questo ambito, è possibile accedere a queste variabili solo all'interno di tale ambito. Questo vale anche per *exception_object_pointer_name*.

Per ulteriori informazioni sulle eccezioni e la macro CATCH, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCExceptions#26](../../mfc/codesnippet/cpp/exception-processing_1.cpp)]

## <a name="catch_all"></a><a name="catch_all"></a> CATCH_ALL

Definisce un blocco di codice che intercetta tutti i tipi di eccezione generati nel blocco **try** precedente.

```
CATCH_ALL(exception_object_pointer_name)
```

### <a name="parameters"></a>Parametri

*exception_object_pointer_name*<br/>
Specifica un nome per un puntatore dell'oggetto eccezione che verrà creato dalla macro. È possibile utilizzare il nome del puntatore per accedere all'oggetto eccezione all'interno del blocco `CATCH_ALL`. Questa variabile viene dichiarata automaticamente.

### <a name="remarks"></a>Osservazioni

Il codice di elaborazione delle eccezioni può interrogare l'oggetto eccezione, se necessario, per ottenere ulteriori informazioni sulla causa specifica dell'eccezione. Richiama la macro `THROW_LAST` per spostare l'elaborazione sul frame esterno dell'eccezione. Se si utilizza **CATCH_ALL**, terminare il blocco **try** con una macro END_CATCH_ALL.

> [!NOTE]
> Il blocco **CATCH_ALL** viene definito come ambito C++ delimitato da parentesi graffe. Se si dichiarano delle variabili in questo ambito, è possibile accedere a queste variabili solo all'interno di tale ambito.

Per ulteriori informazioni sulle eccezioni, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).

### <a name="example"></a>Esempio

Vedere l'esempio per [CFile:: Abort](../../mfc/reference/cfile-class.md#abort).

### <a name="requirements"></a>Requisiti

  **Intestazione** AFX. h

## <a name="and_catch"></a><a name="and_catch"></a> AND_CATCH

Definisce un blocco di codice per intercettare ulteriori tipi di eccezione generati in un blocco **try** precedente.

```
AND_CATCH(exception_class, exception_object_pointer_name)
```

### <a name="parameters"></a>Parametri

*exception_class*<br/>
Specifica il tipo di eccezione per cui eseguire il test. Per un elenco delle classi di eccezioni standard, vedere la classe [CException](../../mfc/reference/cexception-class.md).

*exception_object_pointer_name*<br/>
Nome di un puntatore a un oggetto eccezione che verrà creato dalla macro. È possibile utilizzare il nome del puntatore per accedere all'oggetto eccezione all'interno del blocco **AND_CATCH** . Questa variabile viene dichiarata automaticamente.

### <a name="remarks"></a>Osservazioni

Usare la macro CATCH per intercettare un tipo di eccezione, quindi la AND_CATCH macro per intercettare ogni tipo successivo. Terminare il blocco **try** con una macro END_CATCH.

Il codice di elaborazione delle eccezioni può interrogare l'oggetto eccezione, se necessario, per ottenere ulteriori informazioni sulla causa specifica dell'eccezione. Chiamare la macro THROW_LAST all'interno del blocco **AND_CATCH** per spostare l'elaborazione al frame dell'eccezione esterna successiva. **AND_CATCH** contrassegna la fine del blocco **catch** o **AND_CATCH** precedente.

> [!NOTE]
> Il blocco **AND_CATCH** viene definito come ambito C++, delimitato da parentesi graffe. Se si dichiarano variabili in questo ambito, tenere presente che sono accessibili solo all'interno di tale ambito. Questo vale anche per la variabile *exception_object_pointer_name* .

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [catch](#catch).

### <a name="requirements"></a>Requisiti

  **Intestazione** AFX. h

## <a name="and_catch_all"></a><a name="and_catch_all"></a> AND_CATCH_ALL

Definisce un blocco di codice per intercettare ulteriori tipi di eccezione generati in un blocco **try** precedente.

```
AND_CATCH_ALL(exception_object_pointer_name)
```

### <a name="parameters"></a>Parametri

*exception_object_pointer_name*<br/>
Nome di un puntatore a un oggetto eccezione che verrà creato dalla macro. È possibile utilizzare il nome del puntatore per accedere all'oggetto eccezione all'interno del blocco **AND_CATCH_ALL** . Questa variabile viene dichiarata automaticamente.

### <a name="remarks"></a>Osservazioni

Usare la macro **catch** per intercettare un tipo di eccezione, quindi la AND_CATCH_ALL macro per intercettare tutti gli altri tipi successivi. Se si utilizza AND_CATCH_ALL, terminare il blocco **try** con una macro END_CATCH_ALL.

Il codice di elaborazione delle eccezioni può interrogare l'oggetto eccezione, se necessario, per ottenere ulteriori informazioni sulla causa specifica dell'eccezione. Chiamare la macro THROW_LAST all'interno del blocco **AND_CATCH_ALL** per spostare l'elaborazione al frame dell'eccezione esterna successiva. **AND_CATCH_ALL** contrassegna la fine del blocco **catch** o **AND_CATCH_ALL** precedente.

> [!NOTE]
> Il blocco **AND_CATCH_ALL** viene definito come ambito C++, delimitato da parentesi graffe. Se si dichiarano variabili in questo ambito, tenere presente che sono accessibili solo all'interno di tale ambito.

### <a name="requirements"></a>Requisiti

  **Intestazione** AFX. h

## <a name="end_catch"></a><a name="end_catch"></a> END_CATCH

Contrassegna la fine dell'ultimo blocco **catch** o **AND_CATCH** .

```
END_CATCH
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sulla END_CATCH macro, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** AFX. h

## <a name="end_catch_all"></a><a name="end_catch_all"></a> END_CATCH_ALL

Contrassegna la fine dell'ultimo blocco **CATCH_ALL88** o **AND_CATCH_ALL** .

```
END_CATCH_ALL
```

### <a name="requirements"></a>Requisiti

  **Intestazione** AFX. h

## <a name="throw-mfc"></a><a name="throw"></a> THROW (MFC)

Genera l'eccezione specificata.

```
THROW(exception_object_pointer)
```

### <a name="parameters"></a>Parametri

*exception_object_pointer*<br/>
Punta a un oggetto eccezione derivato da `CException` .

### <a name="remarks"></a>Osservazioni

**Throw** interrompe l'esecuzione del programma, passando il controllo al blocco **catch** associato nel programma. Se non è stato fornito il blocco **catch** , il controllo viene passato a un modulo libreria Microsoft Foundation Class che stampa un messaggio di errore e viene chiuso.

Per ulteriori informazioni, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** AFX. h

## <a name="throw_last"></a><a name="throw_last"></a> THROW_LAST

Genera nuovamente l'eccezione al blocco **catch** esterno successivo.

```
THROW_LAST()
```

### <a name="remarks"></a>Osservazioni

Questa macro consente di generare un'eccezione creata localmente. Se si tenta di generare un'eccezione appena rilevata, in genere verrà esclusa dall'ambito ed essere eliminata. Con **THROW_LAST**, l'eccezione viene passata correttamente al gestore **catch** successivo.

Per ulteriori informazioni, vedere l'articolo [eccezioni](../../mfc/exception-handling-in-mfc.md).

### <a name="example"></a>Esempio

Vedere l'esempio per [CFile:: Abort](../../mfc/reference/cfile-class.md#abort).

### <a name="requirements"></a>Requisiti

  **Intestazione** AFX. h

## <a name="afxthrowarchiveexception"></a><a name="afxthrowarchiveexception"></a> AfxThrowArchiveException

Genera un'eccezione di archiviazione.

```cpp
void  AfxThrowArchiveException(int cause, LPCTSTR lpszArchiveName);
```

### <a name="parameters"></a>Parametri

*causa*<br/>
Specifica un Integer che indica il motivo dell'eccezione. Per un elenco dei valori possibili, vedere [CArchiveException:: m_cause](../../mfc/reference/carchiveexception-class.md#m_cause).

*lpszArchiveName*<br/>
Punta a una stringa contenente il nome dell' `CArchive` oggetto che ha causato l'eccezione, se disponibile.

### <a name="requirements"></a>Requisiti

  **Intestazione** AFX. h

## <a name="afxthrowfileexception"></a><a name="afxthrowfileexception"></a> AfxThrowFileException

Genera un'eccezione di file.

```cpp
void AfxThrowFileException(
    int cause,
    LONG lOsError = -1,
    LPCTSTR lpszFileName = NULL);
```

### <a name="parameters"></a>Parametri

*causa*<br/>
Specifica un Integer che indica il motivo dell'eccezione. Per un elenco dei valori possibili, vedere [CFileException:: m_cause](../../mfc/reference/cfileexception-class.md#m_cause).

*lOsError*<br/>
Contiene il numero di errore del sistema operativo, se disponibile, che indica il motivo dell'eccezione. Per un elenco di codici di errore, vedere il manuale del sistema operativo.

*lpszFileName*<br/>
Punta a una stringa contenente il nome del file che ha causato l'eccezione, se disponibile.

### <a name="remarks"></a>Osservazioni

L'utente è responsabile di determinare la causa in base al codice di errore del sistema operativo.

### <a name="requirements"></a>Requisiti

  **Intestazione** AFX. h

## <a name="afxthrowinvalidargexception"></a><a name="afxthrowinvalidargexception"></a> AfxThrowInvalidArgException

Genera un'eccezione di argomento non valido.

### <a name="syntax"></a>Sintassi

```cpp
void AfxThrowInvalidArgException( );
```

### <a name="remarks"></a>Osservazioni

Questa funzione viene chiamata quando vengono utilizzati argomenti non validi.

### <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="afxthrowmemoryexception"></a><a name="afxthrowmemoryexception"></a> AfxThrowMemoryException

Genera un'eccezione di memoria.

```cpp
void AfxThrowMemoryException();
```

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione se le chiamate agli allocatori di memoria di sistema sottostanti, ad esempio **malloc** e la funzione [GlobalAlloc](/windows/win32/api/winbase/nf-winbase-globalalloc) di Windows, hanno esito negativo. Non è necessario chiamarlo per **`new`** perché **`new`** genererà automaticamente un'eccezione di memoria se l'allocazione di memoria non riesce.

### <a name="requirements"></a>Requisiti

  **Intestazione** AFX. h

## <a name="afxthrownotsupportedexception"></a><a name="afxthrownotsupportedexception"></a> AfxThrowNotSupportedException

Genera un'eccezione che è il risultato di una richiesta di una funzionalità non supportata.

```cpp
void AfxThrowNotSupportedException();
```

### <a name="requirements"></a>Requisiti

  **Intestazione** AFX. h

## <a name="afxthrowresourceexception"></a><a name="afxthrowresourceexception"></a> AfxThrowResourceException

Genera un'eccezione di risorsa.

```cpp
void  AfxThrowResourceException();
```

### <a name="remarks"></a>Osservazioni

Questa funzione viene in genere chiamata quando non è possibile caricare una risorsa di Windows.

### <a name="requirements"></a>Requisiti

  **Intestazione** AFX. h

## <a name="afxthrowuserexception"></a><a name="afxthrowuserexception"></a> AfxThrowUserException

Genera un'eccezione per arrestare un'operazione dell'utente finale.

```cpp
void AfxThrowUserException();
```

### <a name="remarks"></a>Osservazioni

Questa funzione viene in genere chiamata immediatamente dopo che `AfxMessageBox` ha segnalato un errore all'utente.

### <a name="requirements"></a>Requisiti

  **Intestazione** AFX. h

## <a name="afxthrowoledispatchexception"></a><a name="afxthrowoledispatchexception"></a> AfxThrowOleDispatchException

Utilizzare questa funzione per generare un'eccezione all'interno di una funzione di automazione OLE.

```cpp
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

*wCode*<br/>
Codice di errore specifico dell'applicazione.

*lpszDescription*<br/>
Descrizione verbale dell'errore.

*nDescriptionID*<br/>
ID di risorsa per la descrizione dell'errore verbale.

*nHelpID*<br/>
Contesto della Guida per la guida dell'applicazione (. File HLP).

### <a name="remarks"></a>Osservazioni

Le informazioni fornite a questa funzione possono essere visualizzate dall'applicazione di guida (Microsoft Visual Basic o un'altra applicazione client di automazione OLE).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCExceptions#25](../../mfc/codesnippet/cpp/exception-processing_2.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** AFX. h

## <a name="afxthrowoleexception"></a><a name="afxthrowoleexception"></a> AfxThrowOleException

Crea un oggetto di tipo `COleException` e genera un'eccezione.

```cpp
void AFXAPI AfxThrowOleException(SCODE sc);
void AFXAPI AfxThrowOleException(HRESULT hr);
```

### <a name="parameters"></a>Parametri

*SC*<br/>
Codice di stato OLE che indica il motivo dell'eccezione.

*h*<br/>
Handle per un codice risultato che indica il motivo dell'eccezione.

### <a name="remarks"></a>Osservazioni

La versione che accetta un HRESULT come argomento converte il codice risultante nell'oggetto SCODE corrispondente. Per ulteriori informazioni su HRESULT e SCODE, vedere la pagina relativa alla [struttura dei codici di errore com](/windows/win32/com/structure-of-com-error-codes) nell'Windows SDK.

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXDAO. h

## <a name="afxthrowdaoexception"></a><a name="afxthrowdaoexception"></a> AfxThrowDaoException

Chiamare questa funzione per generare un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md) dal codice personalizzato.

```cpp
void AFXAPI AfxThrowDaoException(
    int nAfxDaoError = NO_AFX_DAO_ERROR,
    SCODE scode = S_OK);
```

### <a name="parameters"></a>Parametri

*nAfxDaoError*<br/>
Valore integer che rappresenta un codice di errore esteso DAO, che può essere uno dei valori elencati in [CDaoException:: m_nAfxDaoError](../../mfc/reference/cdaoexception-class.md#m_nafxdaoerror).

*SCODE*<br/>
Codice di errore OLE da DAO, di tipo SCODE. Per informazioni, vedere [CDaoException:: m_scode](../../mfc/reference/cdaoexception-class.md#m_scode).

### <a name="remarks"></a>Osservazioni

Il Framework chiama anche `AfxThrowDaoException` . Nella chiamata, è possibile passare uno dei parametri o entrambi. Se ad esempio si desidera generare uno degli errori definiti in **CDaoException:: nAfxDaoError** ma non si è interessati al parametro *SCODE* , passare un codice valido nel parametro *nAfxDaoError* e accettare il valore predefinito per *SCODE*.

Per informazioni sulle eccezioni correlate alle classi DAO MFC, vedere la classe `CDaoException` in questo libro e l'articolo [eccezioni: database Exceptions](../../mfc/exceptions-database-exceptions.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** AFXDB. h

## <a name="afxthrowdbexception"></a><a name="afxthrowdbexception"></a> AfxThrowDBException

Chiamare questa funzione per generare un'eccezione di tipo `CDBException` dal proprio codice.

```cpp
void AfxThrowDBException(
    RETCODE nRetCode,
    CDatabase* pdb,
    HSTMT hstmt);
```

### <a name="parameters"></a>Parametri

*nRetCode*<br/>
Valore di tipo RETCODE, che definisce il tipo di errore che ha causato la generazione dell'eccezione.

*PDB*<br/>
Puntatore all' `CDatabase` oggetto che rappresenta la connessione all'origine dati a cui è associata l'eccezione.

*hstmt*<br/>
Handle ODBC HSTMT che specifica l'handle di istruzione a cui è associata l'eccezione.

### <a name="remarks"></a>Osservazioni

Il Framework chiama `AfxThrowDBException` quando riceve un RETCODE ODBC da una chiamata a una funzione API ODBC e interpreta RETCODE come condizione eccezionale anziché come un errore previsto. Ad esempio, un'operazione di accesso ai dati potrebbe non riuscire a causa di un errore di lettura del disco.

Per informazioni sui valori RETCODE definiti da ODBC, vedere il capitolo 8 relativo al recupero dello stato e delle informazioni sugli errori nel Windows SDK. Per informazioni sulle estensioni MFC a questi codici, vedere la classe [CDBException](../../mfc/reference/cdbexception-class.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** AFX. h

## <a name="afxabort"></a><a name="afxabort"></a> AfxAbort

Funzione di terminazione predefinita fornita da MFC.

```cpp
void  AfxAbort();
```

### <a name="remarks"></a>Osservazioni

`AfxAbort` viene chiamato internamente dalle funzioni membro MFC quando si verifica un errore irreversibile, ad esempio un'eccezione non rilevata che non può essere gestita. È possibile chiamare `AfxAbort` nel caso raro quando si verifica un errore irreversibile da cui non è possibile eseguire il ripristino.

### <a name="example"></a>Esempio

Vedere l'esempio relativo a [catch](#catch).

### <a name="requirements"></a>Requisiti

  **Intestazione** AFX. h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[Classe CException](cexception-class.md)<br/>
[Classe CInvalidArgException](cinvalidargexception-class.md)

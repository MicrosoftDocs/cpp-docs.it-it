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
ms.openlocfilehash: d819c170f47ea259e776bce6db0a6971e3f54bec
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365710"
---
# <a name="exception-processing"></a>Elaborazione delle eccezioni

Quando un programma viene eseguito, possono verificarsi una serie di condizioni anomale ed errori chiamati "eccezioni". Questi possono includere l'esaurimento della memoria, gli errori di allocazione delle risorse e l'impossibilità di trovare i file.

La libreria Microsoft Foundation Class utilizza uno schema di gestione delle eccezioni che è modellato attentamente in base a quello proposto dal comitato di standard ANSI per il linguaggio C. Un gestore di eccezioni deve essere impostato prima di chiamare una funzione che potrebbe verificarsi una situazione anomala. Se la funzione rileva una condizione anomala, genera un'eccezione e il controllo viene passato al gestore di eccezioni.

Diverse macro incluse nella libreria Microsoft Foundation Class imposteranno i gestori di eccezioni. Un certo numero di altre funzioni globali aiutano a generare eccezioni specializzate e terminare i programmi, se necessario. Queste macro e funzioni globali rientrano nelle seguenti categorie:

- Macro di eccezioni, che strutturano il gestore di eccezioni.

- Funzioni di generazione di eccezioni), che generano eccezioni di tipi specifici.

- Funzioni di terminazione, che causano la chiusura del programma.

Per esempi e ulteriori dettagli, vedere l'articolo [Eccezioni](../../mfc/exception-handling-in-mfc.md).

### <a name="exception-macros"></a>Macro di eccezione

|||
|-|-|
|[TRY](#try)|Designa un blocco di codice per l'elaborazione delle eccezioni.|
|[Prendere](#catch)|Designa un blocco di codice per l'intercettazione di un'eccezione dal blocco **TRY** precedente.|
|[CATCH_ALL](#catch_all)|Designa un blocco di codice per l'intercettazione di tutte le eccezioni dal blocco **TRY** precedente.|
|[AND_CATCH](#and_catch)|Designa un blocco di codice per l'intercettazione di tipi di eccezione aggiuntivi dal blocco **TRY** precedente.|
|[AND_CATCH_ALL](#and_catch_all)|Designa un blocco di codice per l'intercettazione di tutti gli altri tipi di eccezione aggiuntivi generati in un blocco **TRY** precedente.|
|[END_CATCH](#end_catch)|Termina l'ultimo blocco di codice **CATCH** o **AND_CATCH.**|
|[END_CATCH_ALL](#end_catch_all)|Termina l'ultimo blocco di codice **CATCH_ALL.**|
|[Gettare](#throw)|Genera un'eccezione specificata.|
|[THROW_LAST](#throw_last)|Genera l'eccezione attualmente gestita al gestore esterno successivo.|

### <a name="exception-throwing-functions"></a>Funzioni di generazione di eccezioniException-Throwing Functions

|||
|-|-|
|[AfxThrowArchiveException](#afxthrowarchiveexception)|Genera un'eccezione di archivio.|
|[AfxThrowFileException](#afxthrowfileexception)|Genera un'eccezione di file.|
|[AfxThrowInvalidArgException](#afxthrowinvalidargexception)|Genera un'eccezione di argomento non valido.|
|[AfxThrowMemoryException](#afxthrowmemoryexception)|Genera un'eccezione di memoria.|
|[AfxThrowNotSupportedException](#afxthrownotsupportedexception)|Genera un'eccezione non supportata.|
|[AfxThrowResourceException](#afxthrowresourceexception)|Genera un'eccezione di risorsa di Windows non trovata.|
|[AfxThrowUserException](#afxthrowuserexception)|Genera un'eccezione in un'azione del programma avviata dall'utente.|

MFC fornisce due funzioni di generazione di eccezioni specifiche per le eccezioni OLE:

### <a name="ole-exception-functions"></a>Funzioni di eccezione OLE

|||
|-|-|
|[AfxThrowOleDispatchException](#afxthrowoledispatchexception)|Genera un'eccezione all'interno di una funzione di automazione OLE.|
|[AfxThrowOleException](#afxthrowoleexception)|Genera un'eccezione OLE.|

Per supportare le eccezioni di database, `CDBException` `CDaoException`le classi di database forniscono due classi di eccezione e , e le funzioni globali per supportare i tipi di eccezione:

### <a name="dao-exception-functions"></a>Funzioni di eccezione DAODAO Exception Functions

|||
|-|-|
|[AfxThrowDAOException](#afxthrowdaoexception)|Genera un [CDaoException](../../mfc/reference/cdaoexception-class.md) dal proprio codice.|
|[AfxThrowDBException](#afxthrowdbexception)|Genera un [CDBException](../../mfc/reference/cdbexception-class.md) dal proprio codice.|

MFC fornisce la seguente funzione di terminazione:

### <a name="termination-functions"></a>Funzioni di terminazione

|||
|-|-|
|[AfxAbort](#afxabort)|Chiamato per terminare un'applicazione quando si verifica un errore irreversibile.|

## <a name="try"></a><a name="try"></a>Provare

Imposta un blocco **TRY.**

```
TRY
```

### <a name="remarks"></a>Osservazioni

Un blocco **TRY** identifica un blocco di codice che potrebbe generare eccezioni. Tali eccezioni vengono gestite nei blocchi **CATCH** e **AND_CATCH** seguenti. La ricorsione è consentita: le eccezioni possono essere passate a un blocco **TRY** esterno, ignorandole o utilizzando la macro THROW_LAST. Terminare il blocco **TRY** con una macro END_CATCH o END_CATCH_ALL.

Per ulteriori informazioni, vedere l'articolo [Eccezioni](../../mfc/exception-handling-in-mfc.md).

### <a name="example"></a>Esempio

Vedere l'esempio per [CATCH](#catch).

### <a name="requirements"></a>Requisiti

Intestazione: afx.h

## <a name="catch"></a><a name="catch"></a>Prendere

Definisce un blocco di codice che rileva il primo tipo di eccezione generato nel blocco **TRY** precedente.

```
CATCH(exception_class, exception_object_pointer_name)
```

### <a name="parameters"></a>Parametri

*exception_class*<br/>
Specifica il tipo di eccezione da testare. Per un elenco delle classi di eccezioni standard, vedere la classe [CException](../../mfc/reference/cexception-class.md).

*exception_object_pointer_name*<br/>
Specifica un nome per un puntatore dell'oggetto eccezione che verrà creato dalla macro. È possibile utilizzare il nome del puntatore per accedere all'oggetto eccezione all'interno del blocco **CATCH.** Questa variabile viene dichiarata automaticamente.

### <a name="remarks"></a>Osservazioni

Il codice di elaborazione delle eccezioni può interrogare l'oggetto eccezione, se necessario, per ottenere ulteriori informazioni sulla causa specifica dell'eccezione. Richiamare la macro THROW_LAST per spostare l'elaborazione al frame di eccezione esterno successivo. Terminare il blocco **TRY** con una macro END_CATCH.

Se *exception_class* è `CException`la classe , verranno rilevati tutti i tipi di eccezione. È possibile utilizzare la funzione membro [CObject::IsKindOf](../../mfc/reference/cobject-class.md#iskindof) per determinare quale eccezione specifica è stata generata. Un modo migliore per intercettare diversi tipi di eccezioni consiste nell'utilizzare istruzioni **AND_CATCH** sequenziali, ognuna con un tipo di eccezione diverso.

Il puntatore all'oggetto eccezione viene creato dalla macro. Non è necessario dichiararlo da soli.

> [!NOTE]
> Il blocco **CATCH** è definito come un ambito di C, delineato da parentesi graffe. Se si dichiarano delle variabili in questo ambito, è possibile accedere a queste variabili solo all'interno di tale ambito. Ciò vale anche per *exception_object_pointer_name*.

Per ulteriori informazioni sulle eccezioni e sulla macro CATCH, vedere l'articolo [Eccezioni](../../mfc/exception-handling-in-mfc.md).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCExceptions#26](../../mfc/codesnippet/cpp/exception-processing_1.cpp)]

## <a name="catch_all"></a><a name="catch_all"></a>CATCH_ALL

Definisce un blocco di codice che rileva tutti i tipi di eccezione generati nel blocco **TRY** precedente.

```
CATCH_ALL(exception_object_pointer_name)
```

### <a name="parameters"></a>Parametri

*exception_object_pointer_name*<br/>
Specifica un nome per un puntatore dell'oggetto eccezione che verrà creato dalla macro. È possibile utilizzare il nome del puntatore per accedere all'oggetto eccezione all'interno del blocco `CATCH_ALL`. Questa variabile viene dichiarata automaticamente.

### <a name="remarks"></a>Osservazioni

Il codice di elaborazione delle eccezioni può interrogare l'oggetto eccezione, se necessario, per ottenere ulteriori informazioni sulla causa specifica dell'eccezione. Richiama la macro `THROW_LAST` per spostare l'elaborazione sul frame esterno dell'eccezione. Se si utilizza **CATCH_ALL**, terminare il blocco **TRY** con una macro END_CATCH_ALL.

> [!NOTE]
> Il **CATCH_ALL** blocco è definito come un ambito di C, delineato da parentesi graffe. Se si dichiarano delle variabili in questo ambito, è possibile accedere a queste variabili solo all'interno di tale ambito.

Per ulteriori informazioni sulle eccezioni, vedere l'articolo [Eccezioni](../../mfc/exception-handling-in-mfc.md).

### <a name="example"></a>Esempio

Vedere l'esempio per [CFile::Abort](../../mfc/reference/cfile-class.md#abort).

### <a name="requirements"></a>Requisiti

  **Intestazione** afx.h

## <a name="and_catch"></a><a name="and_catch"></a>AND_CATCH

Definisce un blocco di codice per l'intercettazione di tipi di eccezione aggiuntivi generati in un blocco **TRY** precedente.

```
AND_CATCH(exception_class, exception_object_pointer_name)
```

### <a name="parameters"></a>Parametri

*exception_class*<br/>
Specifica il tipo di eccezione da testare. Per un elenco delle classi di eccezioni standard, vedere la classe [CException](../../mfc/reference/cexception-class.md).

*exception_object_pointer_name*<br/>
Nome per un puntatore a un oggetto eccezione che verrà creato dalla macro. È possibile utilizzare il nome del puntatore per accedere all'oggetto eccezione all'interno del blocco **AND_CATCH.** Questa variabile viene dichiarata automaticamente.

### <a name="remarks"></a>Osservazioni

Utilizzare la macro CATCH per intercettare un tipo di eccezione, quindi la AND_CATCH macro per intercettare ogni tipo successivo. Terminare il blocco **TRY** con una macro END_CATCH.

Il codice di elaborazione delle eccezioni può interrogare l'oggetto eccezione, se necessario, per ottenere ulteriori informazioni sulla causa specifica dell'eccezione. Chiamare la THROW_LAST macro all'interno del blocco **AND_CATCH** per spostare l'elaborazione al frame di eccezione esterno successivo. **AND_CATCH** segna la fine del blocco **CATCH** o **AND_CATCH** precedente.

> [!NOTE]
> Il **AND_CATCH** blocco è definito come un ambito di C , delineato da parentesi graffe. Se si dichiarano variabili in questo ambito, tenere presente che sono accessibili solo all'interno di tale ambito. Questo vale anche per la variabile *exception_object_pointer_name.*

### <a name="example"></a>Esempio

Vedere l'esempio per [CATCH](#catch).

### <a name="requirements"></a>Requisiti

  **Intestazione** afx.h

## <a name="and_catch_all"></a><a name="and_catch_all"></a>AND_CATCH_ALL

Definisce un blocco di codice per l'intercettazione di tipi di eccezione aggiuntivi generati in un blocco **TRY** precedente.

```
AND_CATCH_ALL(exception_object_pointer_name)
```

### <a name="parameters"></a>Parametri

*exception_object_pointer_name*<br/>
Nome per un puntatore a un oggetto eccezione che verrà creato dalla macro. È possibile utilizzare il nome del puntatore per accedere all'oggetto eccezione all'interno del blocco **AND_CATCH_ALL.** Questa variabile viene dichiarata automaticamente.

### <a name="remarks"></a>Osservazioni

Utilizzare la macro **CATCH** per intercettare un tipo di eccezione, quindi la AND_CATCH_ALL macro per intercettare tutti gli altri tipi successivi. Se si utilizza AND_CATCH_ALL, terminare il blocco **TRY** con una macro END_CATCH_ALL.

Il codice di elaborazione delle eccezioni può interrogare l'oggetto eccezione, se necessario, per ottenere ulteriori informazioni sulla causa specifica dell'eccezione. Chiamare la macro THROW_LAST all'interno del blocco **AND_CATCH_ALL** per spostare l'elaborazione al frame di eccezione esterno successivo. **AND_CATCH_ALL** segna la fine del blocco **CATCH** o **AND_CATCH_ALL** precedente.

> [!NOTE]
> Il **AND_CATCH_ALL** blocco è definito come un ambito di C , delineato da parentesi graffe. Se si dichiarano variabili in questo ambito, tenere presente che sono accessibili solo all'interno di tale ambito.

### <a name="requirements"></a>Requisiti

  **Intestazione** afx.h

## <a name="end_catch"></a><a name="end_catch"></a>END_CATCH

Contrassegna la fine dell'ultimo blocco **CATCH** o **AND_CATCH.**

```
END_CATCH
```

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sulla macro END_CATCH, vedere l'articolo [Eccezioni](../../mfc/exception-handling-in-mfc.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afx.h

## <a name="end_catch_all"></a><a name="end_catch_all"></a>END_CATCH_ALL

Contrassegna la fine dell'ultimo **blocco CATCH_ALL88** o **AND_CATCH_ALL.**

```
END_CATCH_ALL
```

### <a name="requirements"></a>Requisiti

  **Intestazione** afx.h

## <a name="throw-mfc"></a><a name="throw"></a>GETTA (MFC)

Genera l'eccezione specificata.

```
THROW(exception_object_pointer)
```

### <a name="parameters"></a>Parametri

*exception_object_pointer*<br/>
Punta a un oggetto `CException`eccezione derivato da .

### <a name="remarks"></a>Osservazioni

**THROW** interrompe l'esecuzione del programma, passando il controllo al blocco **CATCH** associato nel programma. Se non è stato fornito il blocco **CATCH,** il controllo viene passato a un modulo della libreria Microsoft Foundation Class che stampa un messaggio di errore e termina.

Per ulteriori informazioni, vedere l'articolo [Eccezioni](../../mfc/exception-handling-in-mfc.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afx.h

## <a name="throw_last"></a><a name="throw_last"></a>THROW_LAST

Genera l'eccezione al blocco **CATCH** esterno successivo.

```
THROW_LAST()
```

### <a name="remarks"></a>Osservazioni

Questa macro consente di generare un'eccezione creata localmente. Se si tenta di generare un'eccezione appena intercettata, in genere esce dall'ambito ed è stata eliminata. Con **THROW_LAST**, l'eccezione viene passata correttamente al gestore **CATCH** successivo.

Per ulteriori informazioni, vedere l'articolo [Eccezioni](../../mfc/exception-handling-in-mfc.md).

### <a name="example"></a>Esempio

Vedere l'esempio per [CFile::Abort](../../mfc/reference/cfile-class.md#abort).

### <a name="requirements"></a>Requisiti

  **Intestazione** afx.h

## <a name="afxthrowarchiveexception"></a><a name="afxthrowarchiveexception"></a>AfxThrowArchiveException

Genera un'eccezione di archivio.

```
void  AfxThrowArchiveException(int cause, LPCTSTR lpszArchiveName);
```

### <a name="parameters"></a>Parametri

*Causa*<br/>
Specifica un numero intero che indica il motivo dell'eccezione. Per un elenco dei valori possibili, vedere [CArchiveException::m_cause](../../mfc/reference/carchiveexception-class.md#m_cause).

*lpszArchiveName (nome d'archivio)*<br/>
Punta a una stringa contenente `CArchive` il nome dell'oggetto che ha causato l'eccezione (se disponibile).

### <a name="requirements"></a>Requisiti

  **Intestazione** afx.h

## <a name="afxthrowfileexception"></a><a name="afxthrowfileexception"></a>AfxThrowFileException

Genera un'eccezione di file.

```
void AfxThrowFileException(
    int cause,
    LONG lOsError = -1,
    LPCTSTR lpszFileName = NULL);
```

### <a name="parameters"></a>Parametri

*Causa*<br/>
Specifica un numero intero che indica il motivo dell'eccezione. Per un elenco dei valori possibili, vedere [CFileException::m_cause](../../mfc/reference/cfileexception-class.md#m_cause).

*LOsErrore*<br/>
Contiene il numero di errore del sistema operativo (se disponibile) che indica il motivo dell'eccezione. Consultare il manuale del sistema operativo per un elenco dei codici di errore.

*lpszNomefileName (nome file)*<br/>
Punta a una stringa contenente il nome del file che ha causato l'eccezione (se disponibile).

### <a name="remarks"></a>Osservazioni

L'utente è responsabile della determinazione della causa in base al codice di errore del sistema operativo.

### <a name="requirements"></a>Requisiti

  **Intestazione** afx.h

## <a name="afxthrowinvalidargexception"></a><a name="afxthrowinvalidargexception"></a>AfxThrowInvalidArgException

Genera un'eccezione di argomento non valido.

### <a name="syntax"></a>Sintassi

```
void AfxThrowInvalidArgException( );
```

### <a name="remarks"></a>Osservazioni

Questa funzione viene chiamata quando vengono utilizzati argomenti non validi.

### <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="afxthrowmemoryexception"></a><a name="afxthrowmemoryexception"></a>AfxThrowMemoryException

Genera un'eccezione di memoria.

```
void AfxThrowMemoryException();
```

### <a name="remarks"></a>Osservazioni

Chiamare questa funzione se le chiamate agli allocatori di memoria di sistema sottostanti (ad esempio **malloc** e la funzione di Windows [GlobalAlloc)](/windows/win32/api/winbase/nf-winbase-globalalloc) hanno esito negativo. Non è necessario chiamarlo per **new** perché **new** genererà automaticamente un'eccezione di memoria se l'allocazione di memoria non riesce.

### <a name="requirements"></a>Requisiti

  **Intestazione** afx.h

## <a name="afxthrownotsupportedexception"></a><a name="afxthrownotsupportedexception"></a>AfxThrowNotSupportedException

Genera un'eccezione che è il risultato di una richiesta di una funzionalità non supportata.

```
void AfxThrowNotSupportedException();
```

### <a name="requirements"></a>Requisiti

  **Intestazione** afx.h

## <a name="afxthrowresourceexception"></a><a name="afxthrowresourceexception"></a>AfxThrowResourceException

Genera un'eccezione di risorsa.

```
void  AfxThrowResourceException();
```

### <a name="remarks"></a>Osservazioni

Questa funzione viene in genere chiamata quando non è possibile caricare una risorsa di Windows.This function is normally called when a Windows resource cannot be loaded.

### <a name="requirements"></a>Requisiti

  **Intestazione** afx.h

## <a name="afxthrowuserexception"></a><a name="afxthrowuserexception"></a>AfxThrowUserException

Genera un'eccezione per arrestare un'operazione dell'utente finale.

```
void AfxThrowUserException();
```

### <a name="remarks"></a>Osservazioni

Questa funzione viene normalmente chiamata immediatamente dopo `AfxMessageBox` aver segnalato un errore all'utente.

### <a name="requirements"></a>Requisiti

  **Intestazione** afx.h

## <a name="afxthrowoledispatchexception"></a><a name="afxthrowoledispatchexception"></a>AfxThrowOleDispatchException

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

*wCodice*<br/>
Un codice di errore specifico per l'applicazione.

*lpszDescrizione*<br/>
Descrizione verbale dell'errore.

*nIddescrizioneID*<br/>
ID risorsa per la descrizione dell'errore verbale.

*nId Aiuto*<br/>
Un contesto di aiuto per la Guida dell'applicazione (. HLP).

### <a name="remarks"></a>Osservazioni

Le informazioni fornite a questa funzione possono essere visualizzate dall'applicazione di guida (Microsoft Visual Basic o un'altra applicazione client di automazione OLE).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFCExceptions#25](../../mfc/codesnippet/cpp/exception-processing_2.cpp)]

### <a name="requirements"></a>Requisiti

  **Intestazione** afx.h

## <a name="afxthrowoleexception"></a><a name="afxthrowoleexception"></a>AfxThrowOleException

Crea un oggetto `COleException` di tipo e genera un'eccezione.

```
void AFXAPI AfxThrowOleException(SCODE sc);
void AFXAPI AfxThrowOleException(HRESULT hr);
```

### <a name="parameters"></a>Parametri

*M.b*<br/>
Codice di stato OLE che indica il motivo dell'eccezione.

*hr*<br/>
Handle a un codice risultato che indica il motivo dell'eccezione.

### <a name="remarks"></a>Osservazioni

La versione che accetta un HRESULT come argomento converte il codice del risultato nel corrispondente SCODE. Per ulteriori informazioni su HRESULT e SCODE, vedere [Struttura dei codici](/windows/win32/com/structure-of-com-error-codes) di errore COM in Windows SDK.

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdao.h

## <a name="afxthrowdaoexception"></a><a name="afxthrowdaoexception"></a>AfxThrowDaoException

Chiamare questa funzione per generare un'eccezione di tipo [CDaoException](../../mfc/reference/cdaoexception-class.md) dal proprio codice.

```
void AFXAPI AfxThrowDaoException(
    int nAfxDaoError = NO_AFX_DAO_ERROR,
    SCODE scode = S_OK);
```

### <a name="parameters"></a>Parametri

*errore nAfxDaoError*<br/>
Valore integer che rappresenta un codice di errore esteso DAO, che può essere uno dei valori elencati in [CDaoException::m_nAfxDaoError](../../mfc/reference/cdaoexception-class.md#m_nafxdaoerror).

*scode*<br/>
Un codice di errore OLE da DAO, di tipo SCODE. Per informazioni, vedere [CDaoException::m_scode](../../mfc/reference/cdaoexception-class.md#m_scode).

### <a name="remarks"></a>Osservazioni

Il framework `AfxThrowDaoException`chiama anche . Nella chiamata, è possibile passare uno dei parametri o entrambi. Ad esempio, se si desidera generare uno degli errori definiti in **CDaoException::nAfxDaoError** ma non si desidera il parametro *scode,* passare un codice valido nel parametro *nAfxDaoError* e accettare il valore predefinito per *scode*.

Per informazioni sulle eccezioni relative alle classi `CDaoException` DAO MFC, vedere la classe in questo libro e l'articolo [Eccezioni: eccezioni di database](../../mfc/exceptions-database-exceptions.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afxdb.h

## <a name="afxthrowdbexception"></a><a name="afxthrowdbexception"></a>AfxThrowDBException (eccezione)

Chiamare questa funzione per generare un'eccezione di tipo `CDBException` dal proprio codice.

```
void AfxThrowDBException(
    RETCODE nRetCode,
    CDatabase* pdb,
    HSTMT hstmt);
```

### <a name="parameters"></a>Parametri

*nRetCode (codice)*<br/>
Valore di tipo RETCODE, che definisce il tipo di errore che ha causato la generazione dell'eccezione.

*Pdb*<br/>
Puntatore all'oggetto `CDatabase` che rappresenta la connessione all'origine dati a cui è associata l'eccezione.

*hstmt*<br/>
Un handle HSTMT ODBC che specifica l'handle di istruzione a cui è associata l'eccezione.

### <a name="remarks"></a>Osservazioni

Il framework `AfxThrowDBException` chiama quando riceve un ODBC RETCODE da una chiamata a una funzione API ODBC e interpreta il RETCODE come una condizione eccezionale anziché un errore previsto. Ad esempio, un'operazione di accesso ai dati potrebbe non riuscire a causa di un errore di lettura del disco.

Per informazioni sui valori RETCODE definiti da ODBC, vedere il capitolo 8 "Recupero di informazioni sullo stato e sull'errore" in Windows SDK. Per informazioni sulle estensioni MFC di questi codici, vedere la classe [CDBException](../../mfc/reference/cdbexception-class.md).

### <a name="requirements"></a>Requisiti

  **Intestazione** afx.h

## <a name="afxabort"></a><a name="afxabort"></a>AfxAbort

Funzione di terminazione predefinita fornita da MFC.

```
void  AfxAbort();
```

### <a name="remarks"></a>Osservazioni

`AfxAbort`viene chiamato internamente dalle funzioni membro MFC quando si verifica un errore irreversibile, ad esempio un'eccezione non rilevata che non può essere gestita. È possibile `AfxAbort` chiamare nel raro caso in cui si verifica un errore catastrofico da cui non è possibile recuperare.

### <a name="example"></a>Esempio

Vedere l'esempio per [CATCH](#catch).

### <a name="requirements"></a>Requisiti

  **Intestazione** afx.h

## <a name="see-also"></a>Vedere anche

[Macro e funzioni globali](mfc-macros-and-globals.md)<br/>
[Classe CException](cexception-class.md)<br/>
[Classe CInvalidArgException](cinvalidargexception-class.md)

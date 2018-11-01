---
title: CException (classe)
ms.date: 11/04/2016
f1_keywords:
- CException
- AFX/CException
- AFX/CException::CException
- AFX/CException::Delete
- AFX/CException::ReportError
helpviewer_keywords:
- CException [MFC], CException
- CException [MFC], Delete
- CException [MFC], ReportError
ms.assetid: cfacf14d-bfe4-4666-a5c7-38b800512920
ms.openlocfilehash: 53dac18b2ee0176eba0a869a0af254ff2978cffd
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50562227"
---
# <a name="cexception-class"></a>CException (classe)

Classe di base per tutte le eccezioni nella libreria Microsoft Foundation Class.

## <a name="syntax"></a>Sintassi

```
class AFX_NOVTABLE CException : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CException::CException](#cexception)|Costruisce un oggetto `CException`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CException::Delete](#delete)|Elimina un `CException` oggetto.|
|[CException::ReportError](#reporterror)|Segnala all'utente un messaggio di errore in una finestra di messaggio.|

## <a name="remarks"></a>Note

In quanto `CException` è una classe base astratta non è possibile creare `CException` oggetti direttamente; è necessario creare gli oggetti delle classi derivate. Se è necessario creare il proprio `CException`-classe di stile, utilizzare una delle classi derivate elencate in precedenza come modello. Assicurarsi che la classe derivata Usa anche `IMPLEMENT_DYNAMIC`.

Le classi derivate e le relative descrizioni sono elencate di seguito:

|||
|-|-|
|[CSimpleException](../../mfc/reference/csimpleexception-class.md)|Classe di base per le eccezioni MFC critiche risorsa|
|[CInvalidArgException](../../mfc/reference/cinvalidargexception-class.md)|Condizione di eccezione di argomento non valido|
|[CMemoryException](../../mfc/reference/cmemoryexception-class.md)|Eccezione di memoria insufficiente|
|[CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md)|Richiesta per un'operazione non supportata|
|[CArchiveException](../../mfc/reference/carchiveexception-class.md)|Eccezione di archiviazione specifico|
|[CFileException](../../mfc/reference/cfileexception-class.md)|Eccezione di file specifiche|
|[CResourceException](../../mfc/reference/cresourceexception-class.md)|Risorse di Windows non è stata trovata o non creabile|
|[COleException](../../mfc/reference/coleexception-class.md)|Eccezione OLE|
|[CDBException](../../mfc/reference/cdbexception-class.md)|Eccezione del database (vale a dire, condizioni di eccezione derivati per classi di database MFC basate su Open Database Connectivity)|
|[COleDispatchException](../../mfc/reference/coledispatchexception-class.md)|Eccezione OLE dispatch (automazione)|
|[CUserException](../../mfc/reference/cuserexception-class.md)|Eccezione che indica che una risorsa non è stata trovata|
|[CDaoException](../../mfc/reference/cdaoexception-class.md)|Eccezione relativa all'oggetto (vale a dire, condizioni di eccezione derivati per classi DAO) di accesso ai dati|
|[Classe CInternetException](../../mfc/reference/cinternetexception-class.md)|Eccezione di Internet (vale a dire, condizioni di eccezione derivati per classi Internet).|

Queste eccezioni devono essere utilizzati con il [THROW](exception-processing.md#throw), [THROW_LAST](exception-processing.md#throw_last), [provare](exception-processing.md#try), [catch](exception-processing.md#catch), [and_catch](exception-processing.md#and_catch), e [end_catch](exception-processing.md#end_catch) macro. Per altre informazioni sulle eccezioni, vedere [elaborazione delle eccezioni](exception-processing.md), oppure vedere l'articolo [gestione delle eccezioni (MFC)](../exception-handling-in-mfc.md).

Per intercettare un'eccezione specifica, usare la classe derivata appropriata. Per tutti i tipi di eccezioni, usare `CException`e quindi usare [CObject:: IsKindOf](cobject-class.md#iskindof) distinguere tra più `CException`-le classi derivate. Si noti che `CObject::IsKindOf` funziona solo per le classi dichiarate con il [IMPLEMENT_DYNAMIC](run-time-object-model-services.md#implement_dynamic) (macro), per sfruttare i vantaggi del controllo del tipo dinamico. Eventuali `CException`-classe derivata che si crea deve utilizzare il `IMPLEMENT_DYNAMIC` macro, troppo.

È possibile segnalare i dettagli sulle eccezioni all'utente chiamando [GetErrorMessage](cfileexception-class.md#geterrormessage) oppure [ReportError](#reporterror), due funzioni membro che funzionano con uno qualsiasi dei `CException`di classi derivate.

Se viene rilevata un'eccezione da una delle macro, il `CException` oggetto viene eliminato automaticamente; non viene eliminato autonomamente. Se viene rilevata un'eccezione con un **catch** (parola chiave), non viene eliminato automaticamente. Vedere l'articolo [gestione delle eccezioni (MFC)](../exception-handling-in-mfc.md) per altre informazioni sulle situazioni in cui eliminare un oggetto eccezione.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](cobject-class.md)

`CException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

##  <a name="cexception"></a>  CException::CException

Questa funzione membro restituisce un `CException` oggetto.

```
explicit CException(BOOL bAutoDelete);
```

### <a name="parameters"></a>Parametri

*b_AutoDelete*<br/>
Specificare TRUE se la memoria per il `CException` oggetto è stato allocato nell'heap. Ciò causerà il `CException` oggetto da eliminare quando il `Delete` funzione membro viene chiamata per eliminare l'eccezione. Specificare FALSE se il `CException` oggetto nello stack o è un oggetto globale. In questo caso, il `CException` oggetto non sarà eliminato quando il `Delete` viene chiamata la funzione membro.

### <a name="remarks"></a>Note

In genere non è necessario chiamare direttamente questo costruttore. Una funzione che genera un'eccezione deve creare un'istanza di un `CException`-classe derivata e chiamare il relativo costruttore, oppure deve usare uno dei MFC generare, ad esempio le funzioni [AfxThrowFileException](exception-processing.md#afxthrowfileexception), per generare un tipo predefinito. Questa documentazione è disponibile solo per motivi di completezza.

##  <a name="delete"></a>  CException::Delete

Questa funzione controlla se il `CException` oggetto è stato creato nell'heap e in caso affermativo, chiama il **eliminare** operatore sull'oggetto.

```
void Delete();
```

### <a name="remarks"></a>Note

Quando si elimina una `CException` dell'oggetto, usare il `Delete` funzione membro per eliminare l'eccezione. Non usare la **eliminare** operatore direttamente, poiché il `CException` oggetto può essere un oggetto globale o sono stati creati nello stack.

È possibile specificare se l'oggetto deve essere eliminato quando l'oggetto viene costruito. Per altre informazioni, vedere [CException::CException](#cexception).

È sufficiente chiamare `Delete` se si usa C++ **provare**- **catch** meccanismo. Se si usa le macro MFC **PROVARE** e **CATCH**, quindi queste macro chiamerà automaticamente questa funzione.

### <a name="example"></a>Esempio

```cpp
CFile* pFile = NULL;
// Constructing a CFile object with this override may throw
// a CFile exception, and won't throw any other exceptions.
// Calling CString::Format() may throw a CMemoryException,
// so we have a catch block for such exceptions, too. Any
// other exception types this function throws will be
// routed to the calling function.
// Note that this example performs the same actions as the
// example for CATCH, but uses C++ try/catch syntax instead
// of using the MFC TRY/CATCH macros. This sample must use
// CException::Delete() to delete the exception objects
// before closing the catch block, while the CATCH example
// implicitly performs the deletion via the macros.
try
{
   pFile = new CFile(_T("C:\\WINDOWS\\SYSTEM.INI"),
      CFile::modeRead | CFile::shareDenyNone);
   ULONGLONG ullLength = pFile->GetLength();
   CString str;
   str.Format(_T("Your SYSTEM.INI file is %u bytes long."), ullLength);
   AfxMessageBox(str);
}
catch(CFileException* pEx)
{
   // Simply show an error message to the user.
   pEx->ReportError();
   pEx->Delete();
}
catch(CMemoryException* pEx)
{
   // We can't recover from this memory exception, so we'll
   // just terminate the app without any cleanup. Normally, an
   // an application should do everything it possibly can to
   // clean up properly and _not_ call AfxAbort().
   pEx->Delete();
   AfxAbort();
}
// If an exception occurrs in the CFile constructor,
// the language will free the memory allocated by new
// and will not complete the assignment to pFile.
// Thus, our clean-up code needs to test for NULL.
if (pFile != NULL)
{
   pFile->Close();
   delete pFile;
}
```

##  <a name="reporterror"></a>  CException::ReportError

Chiamare questa funzione membro al testo dell'errore del report in una finestra di messaggio all'utente.

```
virtual int ReportError(
    UINT nType = MB_OK,
    UINT nMessageID = 0);
```

### <a name="parameters"></a>Parametri

*NLE*<br/>
Specifica lo stile della finestra di messaggio. Applicare qualsiasi combinazione dei [stili message-box](styles-used-by-mfc.md#message-box-styles) alla casella. Se non si specifica questo parametro, il valore predefinito è MB_OK.

*nMessageID*<br/>
Specifica l'ID di risorsa (voce di tabella di stringhe) di un messaggio da visualizzare se l'oggetto eccezione non dispone di un messaggio di errore. Viene visualizzata se è 0, il messaggio "Nessun messaggio di errore è disponibile".

### <a name="return-value"></a>Valore restituito

Un `AfxMessageBox` valore; in caso contrario, 0 se non vi è memoria sufficiente per visualizzare la finestra di messaggio. Visualizzare [AfxMessageBox](cstring-formatting-and-message-box-display.md#afxmessagebox) per i valori restituiti possibili.

### <a name="example"></a>Esempio

Ecco un esempio dell'uso di `CException::ReportError`. Per un altro esempio, vedere l'esempio relativo [CATCH](exception-processing.md#catch).

```cpp
CFile fileInput;
CFileException ex;

// try to open a file for reading.
// The file will certainly not
// exist because there are too many explicit
// directories in the name.

// if the call to Open() fails, ex will be
// initialized with exception
// information.  the call to ex.ReportError() will
// display an appropriate
// error message to the user, such as
// "\Too\Many\Bad\Dirs.DAT contains an
// invalid path."  The error message text will be
// appropriate for the
// file name and error condition.

if (!fileInput.Open(_T("\\Too\\Many\\Bad\\Dirs.DAT"), CFile::modeRead, &ex))
{
  ex.ReportError();
}
else
{
  // the file was opened, so do whatever work
  // with fileInput we were planning...

  fileInput.Close();
}
```

## <a name="see-also"></a>Vedere anche

[Classe CObject](cobject-class.md)<br/>
[Grafico della gerarchia](../hierarchy-chart.md)<br/>
[Elaborazione delle eccezioni](exception-processing.md)<br/>
[Procedura: creazione di una classi di eccezioni personalizzate](http://go.microsoft.com/fwlink/p/?linkid=128045)


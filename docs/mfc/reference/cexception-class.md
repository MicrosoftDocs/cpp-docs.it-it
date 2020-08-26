---
title: Classe CException
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
ms.openlocfilehash: e27802e05c832d28d848d9eb1235d6ef5980b306
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88841558"
---
# <a name="cexception-class"></a>Classe CException

Classe di base per tutte le eccezioni nella libreria Microsoft Foundation Class.

## <a name="syntax"></a>Sintassi

```
class AFX_NOVTABLE CException : public CObject
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CException:: CException](#cexception)|Costruisce un oggetto `CException`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CException::D Elimina](#delete)|Elimina un `CException` oggetto.|
|[CException:: ReportError](#reporterror)|Segnala all'utente un messaggio di errore in una finestra di messaggio.|

## <a name="remarks"></a>Osservazioni

Poiché `CException` è una classe di base astratta, non è possibile creare `CException` direttamente oggetti. è necessario creare oggetti di classi derivate. Se è necessario creare una classe personalizzata `CException` , utilizzare una delle classi derivate sopra elencate come modello. Verificare che anche la classe derivata usi `IMPLEMENT_DYNAMIC` .

Di seguito sono elencate le classi derivate e le relative descrizioni:

|Nome|Descrizione|
|-|-|
|[CSimpleException](../../mfc/reference/csimpleexception-class.md)|Classe base per le eccezioni MFC critiche per le risorse|
|[CInvalidArgException](../../mfc/reference/cinvalidargexception-class.md)|Condizione di eccezione argomento non valido|
|[CMemoryException](../../mfc/reference/cmemoryexception-class.md)|Eccezione di memoria insufficiente|
|[CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md)|Richiesta di un'operazione non supportata|
|[CArchiveException](../../mfc/reference/carchiveexception-class.md)|Eccezione specifica dell'archivio|
|[CFileException](../../mfc/reference/cfileexception-class.md)|Eccezione specifica del file|
|[CResourceException](../../mfc/reference/cresourceexception-class.md)|Risorsa Windows non trovata o non creabile|
|[COleException](../../mfc/reference/coleexception-class.md)|Eccezione OLE|
|[CDBException](../../mfc/reference/cdbexception-class.md)|Eccezione di database (ovvero le condizioni di eccezione derivanti da classi di database MFC basate su Open Database Connectivity)|
|[COleDispatchException](../../mfc/reference/coledispatchexception-class.md)|Eccezione di invio OLE (automazione)|
|[CUserException](../../mfc/reference/cuserexception-class.md)|Eccezione che indica che non è stato possibile trovare una risorsa|
|[CDaoException](../../mfc/reference/cdaoexception-class.md)|Eccezione oggetto di accesso ai dati (ovvero, condizioni di eccezione derivanti da classi DAO)|
|[CInternetException](../../mfc/reference/cinternetexception-class.md)|Eccezione Internet (ovvero le condizioni di eccezione derivanti dalle classi Internet).|

Queste eccezioni sono progettate per essere usate con le macro [throw](exception-processing.md#throw), [THROW_LAST](exception-processing.md#throw_last), [try](exception-processing.md#try), [catch](exception-processing.md#catch), [AND_CATCH](exception-processing.md#and_catch)e [END_CATCH](exception-processing.md#end_catch) . Per ulteriori informazioni sulle eccezioni, vedere [elaborazione](exception-processing.md)delle eccezioni oppure vedere l'articolo [gestione delle eccezioni (MFC)](../exception-handling-in-mfc.md).

Per intercettare un'eccezione specifica, usare la classe derivata appropriata. Per intercettare tutti i tipi di eccezioni, usare `CException` , quindi usare [CObject:: IsKindOf](cobject-class.md#iskindof) per distinguere tra `CException` le classi derivate da. Si noti che `CObject::IsKindOf` funziona solo per le classi dichiarate con la macro [IMPLEMENT_DYNAMIC](run-time-object-model-services.md#implement_dynamic) , in modo da sfruttare i vantaggi del controllo dei tipi dinamici. Tutte `CException` le classi derivate da create devono usare `IMPLEMENT_DYNAMIC` anche la macro.

È possibile segnalare informazioni dettagliate sulle eccezioni all'utente chiamando [GetErrorMessage](cfileexception-class.md#geterrormessage) o [ReportError](#reporterror), due funzioni membro che funzionano con le `CException` classi derivate di.

Se un'eccezione viene rilevata da una delle macro, l' `CException` oggetto viene eliminato automaticamente. non eliminarlo manualmente. Se un'eccezione viene rilevata utilizzando una **`catch`** parola chiave, non viene eliminata automaticamente. Per ulteriori informazioni sull'eliminazione di un oggetto eccezione, vedere l'articolo [gestione delle eccezioni (MFC)](../exception-handling-in-mfc.md) .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](cobject-class.md)

`CException`

## <a name="requirements"></a>Requisiti

**Intestazione:** AFX. h

## <a name="cexceptioncexception"></a><a name="cexception"></a> CException:: CException

Questa funzione membro costruisce un `CException` oggetto.

```
explicit CException(BOOL bAutoDelete);
```

### <a name="parameters"></a>Parametri

*b_AutoDelete*<br/>
Specificare TRUE se la memoria per l' `CException` oggetto è stata allocata nell'heap. In questo modo l' `CException` oggetto verrà eliminato quando `Delete` viene chiamata la funzione membro per eliminare l'eccezione. Specificare FALSE se l' `CException` oggetto si trova nello stack o è un oggetto globale. In questo caso, l' `CException` oggetto non verrà eliminato quando `Delete` viene chiamata la funzione membro.

### <a name="remarks"></a>Osservazioni

Normalmente non è necessario chiamare direttamente questo costruttore. Una funzione che genera un'eccezione deve creare un'istanza di una `CException` classe derivata da e chiamare il relativo costruttore oppure utilizzare una delle funzioni throw MFC, ad esempio [AfxThrowFileException](exception-processing.md#afxthrowfileexception), per generare un tipo predefinito. Questa documentazione viene fornita solo per completezza.

## <a name="cexceptiondelete"></a><a name="delete"></a> CException::D Elimina

Questa funzione verifica se l' `CException` oggetto è stato creato nell'heap e, in tal caso, chiama l' **`delete`** operatore sull'oggetto.

```cpp
void Delete();
```

### <a name="remarks"></a>Osservazioni

Quando si elimina un `CException` oggetto, utilizzare la `Delete` funzione membro per eliminare l'eccezione. Non usare direttamente l' **`delete`** operatore, perché l' `CException` oggetto può essere un oggetto globale o essere stato creato nello stack.

È possibile specificare se l'oggetto deve essere eliminato quando viene costruito l'oggetto. Per ulteriori informazioni, vedere [CException:: CException](#cexception).

È necessario chiamare solo `Delete` se si usa il **`try`** -  **`catch`** meccanismo C++. Se si usano le macro MFC **try** e **catch**, queste macro chiameranno automaticamente questa funzione.

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

## <a name="cexceptionreporterror"></a><a name="reporterror"></a> CException:: ReportError

Chiamare questa funzione membro per segnalare all'utente il testo dell'errore in una finestra di messaggio.

```
virtual int ReportError(
    UINT nType = MB_OK,
    UINT nMessageID = 0);
```

### <a name="parameters"></a>Parametri

*nType*<br/>
Specifica lo stile della finestra di messaggio. Applicare qualsiasi combinazione degli [stili della finestra di messaggio](styles-used-by-mfc.md#message-box-styles) alla casella. Se non si specifica questo parametro, il valore predefinito è MB_OK.

*nMessageID*<br/>
Specifica l'ID risorsa (voce della tabella di stringhe) di un messaggio da visualizzare se all'oggetto eccezione non è associato un messaggio di errore. Se è 0, viene visualizzato il messaggio "nessun messaggio di errore disponibile".

### <a name="return-value"></a>Valore restituito

Un `AfxMessageBox` valore; in caso contrario, 0 se la memoria disponibile non è sufficiente per visualizzare la finestra di messaggio. Per i possibili valori restituiti, vedere [AfxMessageBox](cstring-formatting-and-message-box-display.md#afxmessagebox) .

### <a name="example"></a>Esempio

Di seguito è riportato un esempio di utilizzo di `CException::ReportError` . Per un altro esempio, vedere l'esempio per [catch](exception-processing.md#catch).

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
[Grafico delle gerarchie](../hierarchy-chart.md)<br/>
[Elaborazione delle eccezioni](exception-processing.md)<br/>
[Ricerca per categorie: creazione di classi di eccezioni personalizzate](https://go.microsoft.com/fwlink/p/?linkid=128045)

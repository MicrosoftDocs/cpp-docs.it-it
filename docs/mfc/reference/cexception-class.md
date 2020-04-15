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
ms.openlocfilehash: c3742db7475e626b18e9c073a0b7417a8034863f
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81373945"
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
|[CException::CException](#cexception)|Costruisce un oggetto `CException`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CException::Delete](#delete)|Elimina un `CException` oggetto.|
|[CException::ReportError](#reporterror)|Segnala all'utente un messaggio di errore in una finestra di messaggio.|

## <a name="remarks"></a>Osservazioni

Poiché `CException` è una classe `CException` base astratta, non è possibile creare direttamente oggetti. è necessario creare oggetti di classi derivate. Se è necessario creare `CException`una classe di stile personalizzata, utilizzare una delle classi derivate elencate in precedenza come modello. Assicurarsi che anche la `IMPLEMENT_DYNAMIC`classe derivata utilizzi .

Le classi derivate e le relative descrizioni sono elencate di seguito:

|||
|-|-|
|[CSimpleException](../../mfc/reference/csimpleexception-class.md)|Una classe base per le eccezioni MFC critiche per le risorse|
|[CInvalidArgException](../../mfc/reference/cinvalidargexception-class.md)|Condizione di eccezione argomento non valido|
|[CMemoryException](../../mfc/reference/cmemoryexception-class.md)|Eccezione di memoria insufficiente|
|[CNotSupportedException (eccezione)](../../mfc/reference/cnotsupportedexception-class.md)|Richiesta di un'operazione non supportata|
|[CArchiveException](../../mfc/reference/carchiveexception-class.md)|Eccezione specifica dell'archivio|
|[CFileException](../../mfc/reference/cfileexception-class.md)|Eccezione specifica del file|
|[CResourceException](../../mfc/reference/cresourceexception-class.md)|Risorsa di Windows non trovata o non creabile|
|[COleException](../../mfc/reference/coleexception-class.md)|Eccezione OLE|
|[CDBException](../../mfc/reference/cdbexception-class.md)|Eccezione del database, ovvero condizioni di eccezione per le classi di database MFC basate su Open Database Connectivity|
|[COleDispatchException (eccezione)](../../mfc/reference/coledispatchexception-class.md)|Eccezione di invio OLE (automazione)|
|[CUserException](../../mfc/reference/cuserexception-class.md)|Eccezione che indica che non è stato possibile trovare una risorsa|
|[CDaoException](../../mfc/reference/cdaoexception-class.md)|Eccezione dell'oggetto di accesso ai dati (ovvero condizioni di eccezione per le classi DAO)Data access object exception (that is, exception conditions that as rising for DAO classes)|
|[CInternetException](../../mfc/reference/cinternetexception-class.md)|Eccezione Internet (ovvero condizioni di eccezione per le classi Internet).|

Queste eccezioni sono destinate a essere utilizzate con le macro [THROW](exception-processing.md#throw), [THROW_LAST](exception-processing.md#throw_last), [try](exception-processing.md#try), [catch](exception-processing.md#catch), [and_catch](exception-processing.md#and_catch)e [end_catch](exception-processing.md#end_catch) . Per ulteriori informazioni sulle eccezioni, vedere [Elaborazione delle eccezioni](exception-processing.md)o vedere l'articolo [Gestione delle eccezioni (MFC)](../exception-handling-in-mfc.md).

Per intercettare un'eccezione specifica, utilizzare la classe derivata appropriata. Per intercettare tutti i `CException`tipi di eccezioni, utilizzare , quindi `CException`utilizzare [CObject::IsKindOf](cobject-class.md#iskindof) per distinguere tra le classi derivate. Si `CObject::IsKindOf` noti che funziona solo per le classi dichiarate con la macro [IMPLEMENT_DYNAMIC,](run-time-object-model-services.md#implement_dynamic) al fine di sfruttare il controllo dinamico del tipo. Qualsiasi `CException`classe derivata da quella `IMPLEMENT_DYNAMIC` creata deve utilizzare anche la macro.

È possibile segnalare i dettagli sulle eccezioni all'utente chiamando [GetErrorMessage](cfileexception-class.md#geterrormessage) o `CException` [ReportError](#reporterror), due funzioni membro che funzionano con una qualsiasi delle classi derivate.

Se un'eccezione viene rilevata da `CException` una delle macro, l'oggetto viene eliminato automaticamente; non eliminarlo da soli. Se un'eccezione viene rilevata utilizzando una parola chiave **catch,** non viene eliminata automaticamente. Vedere l'articolo [gestione delle eccezioni (MFC)](../exception-handling-in-mfc.md) per ulteriori informazioni su quando eliminare un oggetto exeption.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

[CObject](cobject-class.md)

`CException`

## <a name="requirements"></a>Requisiti

**Intestazione:** afx.h

## <a name="cexceptioncexception"></a><a name="cexception"></a>CException::CException

Questa funzione membro `CException` costruisce un oggetto.

```
explicit CException(BOOL bAutoDelete);
```

### <a name="parameters"></a>Parametri

*b_AutoDelete*<br/>
Specificare TRUE se `CException` la memoria per l'oggetto è stata allocata nell'heap. In questo `CException` modo l'oggetto `Delete` da eliminare quando viene chiamata la funzione membro per eliminare l'eccezione. Specificare FALSE `CException` se l'oggetto si trova nello stack o è un oggetto globale. In questo caso, l'oggetto `CException` non `Delete` verrà eliminato quando viene chiamata la funzione membro.

### <a name="remarks"></a>Osservazioni

In genere non è mai necessario chiamare direttamente questo costruttore. Una funzione che genera un'eccezione `CException`deve creare un'istanza di una classe derivata e chiamare il relativo costruttore oppure utilizzare una delle funzioni throw MFC, ad esempio [AfxThrowFileException](exception-processing.md#afxthrowfileexception), per generare un tipo predefinito. Questa documentazione viene fornita solo per completezza.

## <a name="cexceptiondelete"></a><a name="delete"></a>CException::Delete

Questa funzione verifica se `CException` l'oggetto è stato creato nell'heap e, in tal caso, chiama l'operatore **delete** sull'oggetto.

```
void Delete();
```

### <a name="remarks"></a>Osservazioni

Quando si `CException` elimina un `Delete` oggetto, utilizzare la funzione membro per eliminare l'eccezione. Non utilizzare direttamente l'operatore `CException` **delete,** perché l'oggetto può essere un oggetto globale o essere stato creato nello stack.

È possibile specificare se l'oggetto deve essere eliminato quando l'oggetto viene costruito. Per ulteriori informazioni, vedere [CException::CException](#cexception).

È necessario chiamare `Delete` solo se si utilizza il meccanismo **try**- **catch** di C. Se si utilizzano le macro MFC **TRY** e **CATCH**, queste macro chiameranno automaticamente questa funzione.

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

## <a name="cexceptionreporterror"></a><a name="reporterror"></a>CException::ReportError

Chiamare questa funzione membro per segnalare all'utente il testo dell'errore in una finestra di messaggio.

```
virtual int ReportError(
    UINT nType = MB_OK,
    UINT nMessageID = 0);
```

### <a name="parameters"></a>Parametri

*nType*<br/>
Specifica lo stile della finestra di messaggio. Applicare qualsiasi combinazione di stili della finestra di [messaggio](styles-used-by-mfc.md#message-box-styles) alla casella. Se non si specifica questo parametro, il valore predefinito è MB_OK.

*nMessageID (ID messaggio)*<br/>
Specifica l'ID risorsa (voce della tabella di stringhe) di un messaggio da visualizzare se l'oggetto eccezione non dispone di un messaggio di errore. Se 0, viene visualizzato il messaggio "Nessun messaggio di errore è disponibile".

### <a name="return-value"></a>Valore restituito

Un `AfxMessageBox` valore; in caso contrario 0 se non è disponibile memoria sufficiente per visualizzare la finestra di messaggio. Vedere [AfxMessageBox](cstring-formatting-and-message-box-display.md#afxmessagebox) per i possibili valori restituiti.

### <a name="example"></a>Esempio

Ecco un esempio dell'uso di `CException::ReportError`. Per un altro esempio, vedere l'esempio per [CATCH](exception-processing.md#catch).

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
[Procedura: creare classi di eccezioni personalizzateHow Do I: Create my Own Custom Exception Classes](https://go.microsoft.com/fwlink/p/?linkid=128045)

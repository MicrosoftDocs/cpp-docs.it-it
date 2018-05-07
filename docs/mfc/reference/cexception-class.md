---
title: CException (classe) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CException
- AFX/CException
- AFX/CException::CException
- AFX/CException::Delete
- AFX/CException::ReportError
dev_langs:
- C++
helpviewer_keywords:
- CException [MFC], CException
- CException [MFC], Delete
- CException [MFC], ReportError
ms.assetid: cfacf14d-bfe4-4666-a5c7-38b800512920
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a152c55944fca5fa858c148c009ef6301ff0f762
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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
 Poiché `CException` è una classe base astratta, non è possibile creare `CException` oggetti direttamente; è necessario creare gli oggetti di classi derivate. Se è necessario crearne di proprie `CException`-classe di stile, utilizzare una delle classi derivate sopra elencate come modello. Assicurarsi che la classe derivata utilizza inoltre `IMPLEMENT_DYNAMIC`.  
  
 Le classi derivate e le relative descrizioni sono elencate di seguito:  
  
|||  
|-|-|  
|[CSimpleException](../../mfc/reference/csimpleexception-class.md)|Classe di base per le eccezioni MFC critiche con risorse|  
|[CInvalidArgException](../../mfc/reference/cinvalidargexception-class.md)|Condizione di eccezione di argomento non valido|  
|[CMemoryException](../../mfc/reference/cmemoryexception-class.md)|Eccezione di memoria insufficiente|  
|[Eccezione CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md)|Richiesta per un'operazione non supportata|  
|[Eccezione CArchiveException](../../mfc/reference/carchiveexception-class.md)|Eccezione specifiche dell'archivio|  
|[CFileException](../../mfc/reference/cfileexception-class.md)|Eccezione di file specifico|  
|[CResourceException](../../mfc/reference/cresourceexception-class.md)|Risorse di Windows non trovata o non creabile|  
|[COleException](../../mfc/reference/coleexception-class.md)|Eccezione OLE|  
|[CDBException](../../mfc/reference/cdbexception-class.md)|Eccezione del database (vale a dire le condizioni di eccezione generata per classi di database MFC basate su Open Database Connectivity)|  
|[COleDispatchException](../../mfc/reference/coledispatchexception-class.md)|Eccezione di OLE dispatch (automazione)|  
|[CUserException](../../mfc/reference/cuserexception-class.md)|Eccezione che indica che non è stato possibile trovare una risorsa|  
|[CDaoException](../../mfc/reference/cdaoexception-class.md)|Eccezione oggetto di accesso ai dati (ovvero, le condizioni di eccezione generata per le classi DAO)|  
|[CInternetException](../../mfc/reference/cinternetexception-class.md)|Eccezione Internet (vale a dire le condizioni di eccezione generata per le classi Internet).|  
  
 Queste eccezioni devono essere utilizzati con il [generare](exception-processing.md#throw), [THROW_LAST](exception-processing.md#throw_last), [provare](exception-processing.md#try), [catch](exception-processing.md#catch), [and_catch](exception-processing.md#and_catch), e [end_catch](exception-processing.md#end_catch) macro. Per ulteriori informazioni sulle eccezioni, vedere [eccezione elaborazione](exception-processing.md), o vedere l'articolo [gestione delle eccezioni (MFC)](../exception-handling-in-mfc.md).  
  
 Per intercettare un'eccezione specifica, utilizzare la classe derivata appropriata. Catch tutti i tipi di eccezioni, usare `CException`e quindi usare [CObject:: IsKindOf](cobject-class.md#iskindof) per distinguere i `CException`-classi derivate. Si noti che `CObject::IsKindOf` funziona solo per le classi dichiarate con la [IMPLEMENT_DYNAMIC](run-time-object-model-services.md#implement_dynamic) (macro), per sfruttare il controllo di tipo dinamico. Qualsiasi `CException`-classe derivata che crei deve utilizzare il `IMPLEMENT_DYNAMIC` (macro), troppo.  
  
 È possibile segnalare i dettagli sulle eccezioni all'utente chiamando [GetErrorMessage](cfileexception-class.md#geterrormessage) o [ReportError](#reporterror), due funzioni membro che funzionano con uno qualsiasi dei `CException`di classi derivate.  
  
 Se viene intercettata un'eccezione da una delle macro, il `CException` oggetto viene eliminato automaticamente; non viene eliminato manualmente. Se viene intercettata un'eccezione utilizzando un **catch** (parola chiave), non viene eliminato automaticamente. Vedere l'articolo [gestione delle eccezioni (MFC)](../exception-handling-in-mfc.md) per ulteriori informazioni sull'eliminazione di un oggetto eccezione.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](cobject-class.md)  
  
 `CException`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
##  <a name="cexception"></a>  CException::CException  
 Questa funzione membro costruisce una `CException` oggetto.  
  
```  
explicit CException(BOOL bAutoDelete);
```  
  
### <a name="parameters"></a>Parametri  
 *b_AutoDelete*  
 Specificare **TRUE** se la memoria per il `CException` oggetto è stato allocato nell'heap. In questo modo il `CException` oggetto da eliminare quando il **eliminare** funzione membro viene chiamata per eliminare l'eccezione. Specificare **FALSE** se il `CException` oggetto di nello stack o è un oggetto globale. In questo caso, il `CException` oggetto non saranno eliminate quando si sceglie il **eliminare** viene chiamata la funzione membro.  
  
### <a name="remarks"></a>Note  
 In genere non è necessario chiamare questo costruttore direttamente. Una funzione che genera un'eccezione deve creare un'istanza di un `CException`-classe derivata e chiamare il relativo costruttore, oppure deve utilizzare uno dei MFC generare, ad esempio funzioni, [AfxThrowFileException](exception-processing.md#afxthrowfileexception), per generare un tipo predefinito. Questa documentazione viene fornita solo per completezza.  
  
##  <a name="delete"></a>  CException::Delete  
 Questa funzione controlla se il **CException** è stato creato l'oggetto sull'heap, e in caso affermativo, chiama il **eliminare** operatore per l'oggetto.  
  
```  
void Delete();
```  
  
### <a name="remarks"></a>Note  
 Quando si elimina un **CException** oggetto, usare il **eliminare** funzione membro per eliminare l'eccezione. Non utilizzare il **eliminare** operatore direttamente, poiché il `CException` oggetto può essere un oggetto globale o sono stati creati nello stack.  
  
 È possibile specificare se l'oggetto deve essere eliminato quando l'oggetto viene costruito. Per ulteriori informazioni, vedere [CException::CException](#cexception).  
  
 È necessario chiamare **eliminare** se si utilizza C++ **provare**- **catch** meccanismo. Se si utilizza le macro MFC **PROVARE** e **CATCH**, quindi queste macro chiama automaticamente questa funzione.  
  
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
 Chiamare questa funzione membro per il testo di errore di report in una finestra di messaggio all'utente.  
  
```  
virtual int ReportError(
    UINT nType = MB_OK,  
    UINT nMessageID = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `nType`  
 Specifica lo stile della finestra di messaggio. Applicare qualsiasi combinazione del [stili message-box](styles-used-by-mfc.md#message-box-styles) nella casella. Se non si specifica questo parametro, il valore predefinito è **MB_OK**.  
  
 *nMessageID*  
 Specifica l'ID di risorsa (voce di stringa) di un messaggio da visualizzare se l'oggetto eccezione non dispone di un messaggio di errore. Viene visualizzato se è 0, il messaggio "Nessun messaggio di errore è disponibile".  
  
### <a name="return-value"></a>Valore restituito  
 Un `AfxMessageBox` valore; in caso contrario 0 se non vi è memoria sufficiente per visualizzare la finestra di messaggio. Vedere [AfxMessageBox](cstring-formatting-and-message-box-display.md#afxmessagebox) per i valori restituiti possibili.  
  
### <a name="example"></a>Esempio  
 Di seguito è riportato un esempio di utilizzo di `CException::ReportError`. Per un altro esempio, vedere l'esempio per [CATCH](exception-processing.md#catch).  
  
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
 [CObject (classe)](cobject-class.md)   
 [Grafico delle gerarchie](../hierarchy-chart.md)   
 [Eccezione durante l'elaborazione](exception-processing.md)   
 [Procedura: creazione di classi di eccezione personalizzate personale](http://go.microsoft.com/fwlink/p/?linkid=128045)



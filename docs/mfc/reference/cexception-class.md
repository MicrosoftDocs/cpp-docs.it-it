---
title: CException (classe) | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
- COleDispatchException class, base class
- CException class
- exceptions, classes for
- CInternetException class, base class
- macros, exception handling
- CNotSupportedException class, base class
- CFileException class, base class
- CDBException class, base class
- CArchiveException class, base class
- CUserException class
- CDaoException class, base class
- CMemoryException class, base class
- COleException class, base class
- CResourceException class, base class
ms.assetid: cfacf14d-bfe4-4666-a5c7-38b800512920
caps.latest.revision: 22
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: a937c9d083a7e4331af63323a19fb207142604a0
ms.openlocfilehash: 4cbb69ff79a1b201260d83b1bd568b63519a33b5
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

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
 Poiché `CException` è una classe base astratta, non è possibile creare `CException` oggetti direttamente, è necessario creare gli oggetti di classi derivate. Se è necessario creare il proprio `CException`-classe di stile, utilizzare una delle classi derivate elencate in precedenza come modello. Assicurarsi che la classe derivata utilizza anche `IMPLEMENT_DYNAMIC`.  
  
 Le classi derivate e le relative descrizioni sono elencate di seguito:  
  
|||  
|-|-|  
|[CSimpleException](../../mfc/reference/csimpleexception-class.md)|Una classe di base per le eccezioni MFC risorse critiche|  
|[CInvalidArgException](../../mfc/reference/cinvalidargexception-class.md)|Condizione di eccezione di argomento non valido|  
|[CMemoryException](../../mfc/reference/cmemoryexception-class.md)|Eccezione di memoria esaurita|  
|[Eccezione CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md)|Richiesta per un'operazione non supportata|  
|[Eccezione CArchiveException](../../mfc/reference/carchiveexception-class.md)|Eccezioni specifici dell'archiviazione|  
|[CFileException](../../mfc/reference/cfileexception-class.md)|Eccezione specifica del file|  
|[CResourceException](../../mfc/reference/cresourceexception-class.md)|Risorse di Windows non è stata trovata o non creabile|  
|[COleException](../../mfc/reference/coleexception-class.md)|Eccezione OLE|  
|[CDBException](../../mfc/reference/cdbexception-class.md)|Eccezione del database (vale a dire le condizioni di eccezione generata per classi di database MFC basate su Open Database Connectivity)|  
|[COleDispatchException](../../mfc/reference/coledispatchexception-class.md)|Eccezione OLE dispatch (automazione)|  
|[CUserException](../../mfc/reference/cuserexception-class.md)|Eccezione che indica che non è stato possibile trovare una risorsa|  
|[CDaoException](../../mfc/reference/cdaoexception-class.md)|Eccezione oggetto di accesso dati (ovvero, le condizioni di eccezione generata per le classi DAO)|  
|[CInternetException](../../mfc/reference/cinternetexception-class.md)|Eccezione Internet (vale a dire le condizioni di eccezione generata per le classi Internet).|  
  
 Queste eccezioni devono essere utilizzati con il [generare](exception-processing.md#throw), [THROW_LAST](exception-processing.md#throw_last), [provare](exception-processing.md#try), [catch](exception-processing.md#catch), [and_catch](exception-processing.md#and_catch), e [end_catch](exception-processing.md#end_catch) macro. Per ulteriori informazioni sulle eccezioni, vedere [eccezione elaborazione](exception-processing.md), oppure vedere l'articolo [gestione delle eccezioni (MFC)](../exception-handling-in-mfc.md).  
  
 Per rilevare un'eccezione specifica, utilizzare la classe derivata appropriata. Catch tutti i tipi di eccezioni, utilizzare `CException`, quindi utilizzare [CObject:: IsKindOf](cobject-class.md#iskindof) per distinguere i vari `CException`-classi derivate. Si noti che `CObject::IsKindOf` funziona solo per le classi dichiarate con la [IMPLEMENT_DYNAMIC](run-time-object-model-services.md#implement_dynamic) (macro), per poter sfruttare il controllo del tipo dinamico. Qualsiasi `CException`-classe derivata creati dall'utente deve utilizzare il `IMPLEMENT_DYNAMIC` (macro), troppo.  
  
 È possibile segnalare i dettagli sulle eccezioni per l'utente chiamando [GetErrorMessage](cfileexception-class.md#geterrormessage) o [ReportError](#reporterror), due funzioni membro che funzionano con qualsiasi `CException`di classi derivate.  
  
 Se viene rilevata un'eccezione da una delle macro, il `CException` oggetto viene eliminato automaticamente; non viene eliminato manualmente. Se viene intercettata un'eccezione utilizzando un **catch** (parola chiave), non viene eliminato automaticamente. Vedere l'articolo [gestione delle eccezioni (MFC)](../exception-handling-in-mfc.md) per ulteriori informazioni sull'eliminazione di un oggetto eccezione.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](cobject-class.md)  
  
 `CException`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
##  <a name="cexception"></a>CException::CException  
 Questa funzione membro costruisce un `CException` oggetto.  
  
```  
explicit CException(BOOL bAutoDelete);
```  
  
### <a name="parameters"></a>Parametri  
 *b_AutoDelete*  
 Specificare **TRUE** se la memoria per il `CException` oggetto è stato allocato sull'heap. In questo modo il `CException` oggetto deve essere eliminato quando il **eliminare** funzione membro viene chiamata per eliminare l'eccezione. Specificare **FALSE** se il `CException` oggetto nello stack o è un oggetto globale. In questo caso, il `CException` oggetto non potrà essere eliminato quando il **eliminare** viene chiamata la funzione membro.  
  
### <a name="remarks"></a>Note  
 In genere non sarà necessario chiamare questo costruttore direttamente. Una funzione che genera un'eccezione deve creare un'istanza di un `CException`-classe derivata e chiamare il relativo costruttore, oppure deve utilizzare uno dei MFC generare, ad esempio funzioni, [AfxThrowFileException](exception-processing.md#afxthrowfileexception), per generare un tipo predefinito. Questa documentazione viene fornita solo per motivi di completezza.  
  
##  <a name="delete"></a>CException::Delete  
 Questa funzione controlla se il **CException** è stato creato l'oggetto nell'heap e in caso affermativo, chiama il **eliminare** operatore sull'oggetto.  
  
```  
void Delete();
```  
  
### <a name="remarks"></a>Note  
 Quando si elimina un **CException** , utilizzare il **eliminare** funzione membro per eliminare l'eccezione. Non utilizzare il **eliminare** operatore direttamente, poiché il `CException` oggetto può essere un oggetto globale o sono stati creati nello stack.  
  
 È possibile specificare se l'oggetto deve essere eliminato quando viene costruito l'oggetto. Per ulteriori informazioni, vedere [CException::CException](#cexception).  
  
 È necessario chiamare **eliminare** se si utilizza C++ **provare**- **catch** meccanismo. Se si utilizza le macro MFC **PROVARE** e **CATCH**, queste macro verranno automaticamente chiamare questa funzione.  
  
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
  
##  <a name="reporterror"></a>CException::ReportError  
 Chiamare questa funzione membro per il testo di errore di report in una finestra di messaggio all'utente.  
  
```  
virtual int ReportError(
    UINT nType = MB_OK,  
    UINT nMessageID = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `nType`  
 Specifica lo stile della finestra di messaggio. Applicare qualsiasi combinazione di [gli stili di finestra di messaggio](message-box-styles.md) alla casella. Se non si specifica questo parametro, il valore predefinito è **MB_OK**.  
  
 *nMessageID*  
 Specifica l'ID di risorsa (voce stringa) di un messaggio da visualizzare se l'oggetto eccezione non dispone di un messaggio di errore. Viene visualizzato se è 0, il messaggio "Nessun messaggio di errore è disponibile".  
  
### <a name="return-value"></a>Valore restituito  
 Un `AfxMessageBox` valore; in caso contrario 0 se non vi è memoria sufficiente per visualizzare la finestra di messaggio. Vedere [AfxMessageBox](cstring-formatting-and-message-box-display.md#afxmessagebox) per i valori restituiti possibili.  
  
### <a name="example"></a>Esempio  
 Di seguito è riportato un esempio dell'utilizzo di `CException::ReportError`. Per un altro esempio, vedere l'esempio per [CATCH](exception-processing.md#catch).  
  
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
 [Elaborazione delle eccezioni](exception-processing.md)   
 [Procedura: creazione personalizzate classi di eccezioni personalizzate](http://go.microsoft.com/fwlink/linkid=128045)




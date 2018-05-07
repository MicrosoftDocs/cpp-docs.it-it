---
title: Classe CFileException | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CFileException
- AFX/CFileException
- AFX/CFileException::CFileException
- AFX/CFileException::ErrnoToException
- AFX/CFileException::GetErrorMessage
- AFX/CFileException::OsErrorToException
- AFX/CFileException::ThrowErrno
- AFX/CFileException::ThrowOsError
- AFX/CFileException::m_cause
- AFX/CFileException::m_lOsError
- AFX/CFileException::m_strFileName
dev_langs:
- C++
helpviewer_keywords:
- CFileException [MFC], CFileException
- CFileException [MFC], ErrnoToException
- CFileException [MFC], GetErrorMessage
- CFileException [MFC], OsErrorToException
- CFileException [MFC], ThrowErrno
- CFileException [MFC], ThrowOsError
- CFileException [MFC], m_cause
- CFileException [MFC], m_lOsError
- CFileException [MFC], m_strFileName
ms.assetid: f6491bb9-bfbc-42fd-a952-b33f9b62323f
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f94d6fc19879da1dd1dcaa94ab7a177fb86d5186
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="cfileexception-class"></a>Classe CFileException
Rappresenta una condizione di eccezione correlata al file.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CFileException : public CException  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileException::CFileException](#cfileexception)|Costruisce un oggetto `CFileException`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileException::ErrnoToException](#errnotoexception)|Restituisce che il codice corrispondente a un numero di errore di run-time.|  
|[CFileException::GetErrorMessage](#geterrormessage)|Recupera il messaggio che descrive un'eccezione.|  
|[CFileException::OsErrorToException](#oserrortoexception)|Restituisce un codice causa corrispondente a un codice di errore del sistema operativo.|  
|[CFileException::ThrowErrno](#throwerrno)|Genera un'eccezione di file in base a un numero di errore di runtime.|  
|[CFileException::ThrowOsError](#throwoserror)|Genera un'eccezione di file in base a un numero di errore del sistema operativo.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileException::m_cause](#m_cause)|Contiene il codice portabile corrispondente alla causa dell'eccezione.|  
|[CFileException::m_lOsError](#m_loserror)|Contiene il numero di errore di sistema correlati.|  
|[CFileException::m_strFileName](#m_strfilename)|Contiene il nome del file per questa eccezione.|  
  
## <a name="remarks"></a>Note  
 La `CFileException` classe include i membri dati pubblici che contengono il codice portabile causa e il numero di errore specifici del sistema operativo. La classe fornisce inoltre funzioni membro statiche per la generazione di eccezioni di file e per la restituzione di codici a causa di errori del sistema operativo sia errori di run-time C.  
  
 `CFileException` gli oggetti vengono costruiti e generati `CFile` funzioni membro e nelle funzioni membro delle classi derivate. È possibile accedere a questi oggetti all'interno dell'ambito di un **CATCH** espressione. Per garantire la portabilità, utilizzare solo il codice causa per ottenere il motivo per un'eccezione. Per ulteriori informazioni sulle eccezioni, vedere l'articolo [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `CFileException`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
##  <a name="cfileexception"></a>  CFileException::CFileException  
 Costruisce un `CFileException` oggetto che archivia il codice causa e il codice di sistema nell'oggetto.  
  
```  
CFileException(
    int cause = CFileException::none,  
    LONG lOsError = -1,  
    LPCTSTR lpszArchiveName = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `cause`  
 Una variabile di tipo enumerato che indica il motivo dell'eccezione. Vedere [CFileException::m_cause](#m_cause) per un elenco dei possibili valori.  
  
 `lOsError`  
 Un motivo specifico del sistema operativo per l'eccezione, se disponibile. Il `lOsError` parametro fornisce più informazioni rispetto `cause` does.  
  
 `lpszArchiveName`  
 Punta a una stringa contenente il nome del `CFile` oggetto che ha causato l'eccezione.  
  
### <a name="remarks"></a>Note  
 Non utilizzare questo costruttore direttamente, ma piuttosto chiamare la funzione globale [AfxThrowFileException](exception-processing.md#afxthrowfileexception).  
  
> [!NOTE]
>  La variabile `lOsError` si applica solo a `CFile` e `CStdioFile` oggetti. La `CMemFile` classe non gestisce questo codice di errore.  
  
##  <a name="errnotoexception"></a>  CFileException::ErrnoToException  
 Converte un valore di errore della libreria di runtime specificato in un `CFileException` errore valore enumerato.  
  
```  
static int PASCAL ErrnoToException(int nErrno);
```  
  
### <a name="parameters"></a>Parametri  
 `nErrno`  
 Codice di errore integer come definito nel file di inclusione in fase di esecuzione ERRNO. H.  
  
### <a name="return-value"></a>Valore restituito  
 Valore enumerato che corrisponde a un valore di errore della libreria run-time specificato.  
  
### <a name="remarks"></a>Note  
 Vedere [CFileException::m_cause](#m_cause) per un elenco dei possibili valori enumerati.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCFiles#26](../../atl-mfc-shared/reference/codesnippet/cpp/cfileexception-class_1.cpp)]  
  
##  <a name="geterrormessage"></a>  CFileException::GetErrorMessage  
 Recupera il testo che descrive un'eccezione.  
  
```  
virtual BOOL GetErrorMessage(
    LPTSTR lpszError,  
    UINT nMaxError,  
    PUINT pnHelpContext = NULL) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in, out] `lpszError`  
 Puntatore a un buffer che riceve un messaggio di errore.  
  
 [in] `nMaxError`  
 Il numero massimo di caratteri che può contenere il buffer specificato. Ciò include il carattere di terminazione null.  
  
 [in, out] `pnHelpContext`  
 Puntatore a un intero senza segno che riceve l'ID del contesto della Guida. Se `NULL`, non viene restituito alcun ID.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se il metodo ha esito positivo. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Se il buffer specificato è troppo piccolo, il messaggio di errore viene troncato.  
  
### <a name="example"></a>Esempio  
 L'esempio seguente usa `CFileException::GetErrorMessage`.  
  
 [!code-cpp[NVC_MFCExceptions#22](../../mfc/codesnippet/cpp/cfileexception-class_2.cpp)]  
  
##  <a name="m_cause"></a>  CFileException::m_cause  
 Contiene valori definiti da un tipo enumerato `CFileException`.  
  
```  
int m_cause;  
```  
  
### <a name="remarks"></a>Note  
 Questo membro dati è una variabile pubblica di tipo `int`. Di seguito sono elencati gli enumeratori e i relativi significati:  
  
- `CFileException::none` 0: si è verificato alcun errore.  
  
- `CFileException::genericException` 1: si è verificato un errore non specificato.  
  
- `CFileException::fileNotFound` 2: non è stato possibile trovare il file.  
  
- `CFileException::badPath` 3: tutto o parte del percorso non valida.  
  
- `CFileException::tooManyOpenFiles` 4: è stato superato il numero consentito di file aperti.  
  
- `CFileException::accessDenied` 5: il file non è accessibile.  
  
- `CFileException::invalidFile` 6: si è verificato un tentativo di utilizzare un handle di file non valido.  
  
- `CFileException::removeCurrentDir` 7: Impossibile rimuovere la directory di lavoro corrente.  
  
- `CFileException::directoryFull` 8: non sono presenti più voci di directory.  
  
- `CFileException::badSeek` 9: si è verificato un errore durante il tentativo di impostare il puntatore del file.  
  
- `CFileException::hardIO` 10: si è verificato un errore hardware.  
  
- `CFileException::sharingViolation` 11: SHARE. File EXE non era caricato o un'area condivisa era bloccata.  
  
- `CFileException::lockViolation` 12: si è verificato un tentativo di bloccare un'area già bloccata.  
  
- `CFileException::diskFull` 14: il disco è pieno.  
  
- `CFileException::endOfFile` 15: è stata raggiunta la fine del file.  
  
    > [!NOTE]
    >  Questi enumeratori di causa `CFileException` sono diversi dagli enumeratori di causa `CArchiveException`.  
  
    > [!NOTE]
    > `CArchiveException::generic` è stato deprecato. In alternativa, usare `genericException`. Se `generic` viene usato in un'applicazione e compilato con /clr, gli errori di sintassi risultanti non sono semplici da decifrare.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCFiles#30](../../atl-mfc-shared/reference/codesnippet/cpp/cfileexception-class_3.cpp)]  
  
##  <a name="m_loserror"></a>  CFileException::m_lOsError  
 Contiene il codice di errore del sistema operativo per questa eccezione.  
  
```  
LONG m_lOsError;  
```  
  
### <a name="remarks"></a>Note  
 Vedere il manuale di tecnico del sistema operativo per un elenco dei codici di errore. Questo membro dati è una variabile pubblica di tipo **lungo**.  
  
##  <a name="m_strfilename"></a>  CFileException::m_strFileName  
 Contiene il nome del file per la condizione di eccezione.  
  
```  
CString m_strFileName;  
```  
  
##  <a name="oserrortoexception"></a>  CFileException::OsErrorToException  
 Restituisce un enumeratore che corrisponde a un determinato `lOsError` valore. Se il codice di errore è sconosciuto, allora la funzione restituisce **CFileException::generic**.  
  
```  
static int PASCAL OsErrorToException(LONG lOsError);
```  
  
### <a name="parameters"></a>Parametri  
 `lOsError`  
 Un codice di errore specifici del sistema operativo.  
  
### <a name="return-value"></a>Valore restituito  
 Valore enumerato che corrisponde a un valore di errore del sistema operativo specificato.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCFiles#27](../../atl-mfc-shared/reference/codesnippet/cpp/cfileexception-class_4.cpp)]  
  
##  <a name="throwerrno"></a>  CFileException::ThrowErrno  
 Costruisce un `CFileException` oggetto corrispondente a un determinato `nErrno` valore, quindi genera l'eccezione.  
  
```  
static void PASCAL ThrowErrno(int nErrno, LPCTSTR lpszFileName = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `nErrno`  
 Codice di errore integer come definito nel file di inclusione in fase di esecuzione ERRNO. H.  
  
 `lpszFileName`  
 Un puntatore alla stringa contenente il nome del file che ha causato l'eccezione, se disponibile.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCFiles#28](../../atl-mfc-shared/reference/codesnippet/cpp/cfileexception-class_5.cpp)]  
  
##  <a name="throwoserror"></a>  CFileException::ThrowOsError  
 Genera un `CFileException` corrispondente a un determinato `lOsError` valore. Se il codice di errore è sconosciuto, allora la funzione genera un'eccezione codificata come **CFileException::generic**.  
  
```  
static void PASCAL ThrowOsError(LONG lOsError, LPCTSTR lpszFileName = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lOsError`  
 Un codice di errore specifici del sistema operativo.  
  
 `lpszFileName`  
 Un puntatore alla stringa contenente il nome del file che ha causato l'eccezione, se disponibile.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCFiles#29](../../atl-mfc-shared/reference/codesnippet/cpp/cfileexception-class_6.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [CException (classe)](../../mfc/reference/cexception-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Elaborazione delle eccezioni](../../mfc/reference/exception-processing.md)




---
title: Classe CStdioFile | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CStdioFile
dev_langs:
- C++
helpviewer_keywords:
- CStdioFile class
- I/O [MFC], stream
- stream I/O
ms.assetid: 88c2274c-4f0e-4327-882a-557ba4b3ae15
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
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: f3f036b409067676fdf12db9751cac1ea8025140
ms.lasthandoff: 02/24/2017

---
# <a name="cstdiofile-class"></a>Classe CStdioFile
Rappresenta un file di flusso di runtime C come viene aperto dalla funzione di runtime [fopen](../../c-runtime-library/reference/fopen-wfopen.md).  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CStdioFile : public CFile  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStdioFile::CStdioFile](#cstdiofile)|Costruisce un `CStdioFile` oggetto da un puntatore a file o il percorso.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStdioFile::Open](#open)|Di overload. Apri sono progettato per l'utilizzo con il valore predefinito `CStdioFile` costruttore (esegue l'override di [CFile::Open](../../mfc/reference/cfile-class.md#open)).|  
|[CStdioFile::ReadString](#readstring)|Legge una singola riga di testo.|  
|[CStdioFile::Seek](#seek)|Posiziona il puntatore del file corrente.|  
|[CStdioFile::WriteString](#writestring)|Scrive una singola riga di testo.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStdioFile::m_pStream](#m_pstream)|Contiene un puntatore a un file aperto.|  
  
## <a name="remarks"></a>Note  
 Il flusso di file viene memorizzati nel buffer e può essere aperti in modalità testo (impostazione predefinita) o in modalità binaria.  
  
 La modalità testo fornisce un'elaborazione speciale per le coppie di ritorno a capo-avanzamento riga. Quando si scrive una nuova riga (0x0A) di caratteri in una modalità testo `CStdioFile` oggetto, la coppia di byte (0x0D, 0x0A) viene inviato al file. Quando si legge, la coppia di byte (0x0D, 0x0A) viene convertita in un singolo byte 0x0A.  
  
 Il [CFile](../../mfc/reference/cfile-class.md) funzioni [duplicato](../../mfc/reference/cfile-class.md#duplicate), [LockRange](../../mfc/reference/cfile-class.md#lockrange), e [UnlockRange](../../mfc/reference/cfile-class.md#unlockrange) non sono supportati per `CStdioFile`.  
  
 Se queste funzioni vengono chiamate su un `CStdioFile`, si otterrà un [eccezione CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).  
  
 Per ulteriori informazioni sull'utilizzo di `CStdioFile`, vedere gli articoli [file in MFC](../../mfc/files-in-mfc.md) e [gestione File](../../c-runtime-library/file-handling.md) nel *riferimenti alla libreria di runtime*.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CFile](../../mfc/reference/cfile-class.md)  
  
 `CStdioFile`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
##  <a name="a-namecstdiofilea--cstdiofilecstdiofile"></a><a name="cstdiofile"></a>CStdioFile::CStdioFile  
 Costruisce e inizializza un oggetto `CStdioFile`.  
  
```  
CStdioFile();  
CStdioFile(CAtlTransactionManager* pTM);  
  CStdioFile(FILE* pOpenStream);

 
CStdioFile(
    LPCTSTR lpszFileName,  
    UINT nOpenFlags);

 
CStdioFile(
    LPCTSTR lpszFileName,
    UINT nOpenFlags,
    CAtlTransactionManager* pTM);
```  
  
### <a name="parameters"></a>Parametri  
 `pOpenStream`  
 Specifica il puntatore del file restituito da una chiamata alla funzione runtime C [fopen](../../c-runtime-library/reference/fopen-wfopen.md).  
  
 `lpszFileName`  
 Specifica una stringa che rappresenta il percorso del file desiderato. Il percorso può essere relativo o assoluto.  
  
 `nOpenFlags`  
 Specifica le opzioni per la creazione di file, la condivisione di file e le modalità di accesso ai file. È possibile specificare più opzioni utilizzando l'operatore OR bit per bit ( `|`) (operatore).  
  
 Un'opzione di modalità di accesso file è obbligatoria. altre modalità è facoltativa. Vedere [CFile::CFile](../../mfc/reference/cfile-class.md#cfile) per un elenco di opzioni della modalità e altri flag. In MFC 3.0 e versioni successive, sono consentiti i flag di condivisione.  
  
 `pTM`  
 Puntatore all'oggetto CAtlTransactionManager.  
  
### <a name="remarks"></a>Note  
 Il costruttore predefinito non viene associato un file per il `CStdioFile` oggetto. Quando si utilizza questo costruttore, è necessario utilizzare il `CStdioFile::Open` per aprire un file e associarlo al `CStdioFile` oggetto.  
  
 Il singolo parametro costruttore associa un flusso di file aperti di `CStdioFile` oggetto. I valori di puntatore includono i puntatori a file di input/output predefinito è consentito `stdin`, `stdout`, o `stderr`.  
  
 Il costruttore due parametro crea un `CStdioFile` dell'oggetto e apre il file corrispondente con il percorso specificato.  
  
 Se si passa `NULL` entrambi `pOpenStream` o `lpszFileName`, il costruttore genera un `CInvalidArgException*`.  
  
 Se il file non può essere aperto o creato, il costruttore genera un `CFileException*`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCFiles&#37;](../../atl-mfc-shared/reference/codesnippet/cpp/cstdiofile-class_1.cpp)]  
  
##  <a name="a-namempstreama--cstdiofilempstream"></a><a name="m_pstream"></a>CStdioFile::m_pStream  
 Il `m_pStream` membro dati è il puntatore a un file aperto come restituito dalla funzione di runtime C `fopen`.  
  
```  
FILE* m_pStream;  
```  
  
### <a name="remarks"></a>Note  
 È **NULL** se il file non è mai stato aperto o chiuso.  
  
##  <a name="a-nameopena--cstdiofileopen"></a><a name="open"></a>CStdioFile::Open  
 Di overload. Apri sono progettato per l'utilizzo con il valore predefinito `CStdioFile` costruttore.  
  
```  
virtual BOOL Open(
    LPCTSTR lpszFileName,  
    UINT nOpenFlags,  
    CFileException* pError = NULL);

 
virtual BOOL Open(
    LPCTSTR lpszFileName,  
    UINT nOpenFlags,  
    CAtlTransactionManager* pTM,  
    CFileException* pError = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszFileName`  
 Stringa che rappresenta il percorso del file desiderato. Il percorso può essere relativo o assoluto.  
  
 `nOpenFlags`  
 Modalità di accesso e condivisione. Specifica l'azione da intraprendere quando si apre il file. È possibile combinare le opzioni tramite l'operatore OR bit per bit (|). Autorizzazione di un accesso e una condivisione di opzione sono necessarie; le modalità modeCreate e modeNoInherit sono facoltative.  
  
 `pError`  
 Un puntatore a un oggetto eccezione di file esistente che verrà visualizzato lo stato di un'operazione non riuscita.  
  
 `pTM`  
 Puntatore a un oggetto `CAtlTransactionManager`.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` se l'esito è positivo; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namereadstringa--cstdiofilereadstring"></a><a name="readstring"></a>CStdioFile::ReadString  
 Legge i dati di testo in un buffer, fino a un limite di `nMax`caratteri –&1;, dal file di cui è associato il `CStdioFile` oggetto.  
  
```  
virtual LPTSTR ReadString(
    LPTSTR lpsz,  
    UINT nMax);  
  
virtual BOOL ReadString(CString& rString);
```  
  
### <a name="parameters"></a>Parametri  
 `lpsz`  
 Specifica un puntatore a un buffer fornito dall'utente che riceverà una stringa di testo con terminazione null.  
  
 `nMax`  
 Specifica il numero massimo di caratteri da leggere, senza contare il carattere di terminazione null.  
  
 `rString`  
 Un riferimento a un `CString` che conterrà la stringa quando la funzione restituisce.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al buffer contenente i dati di testo. **NULL** se è stata raggiunta fine del file senza dover leggere tutti i dati; o booleano, **FALSE** se è stata raggiunta fine del file senza dover leggere tutti i dati.  
  
### <a name="remarks"></a>Note  
 La lettura è stata arrestata dal primo carattere di nuova riga. Se, in tal caso, a meno di `nMax`–&1; caratteri sono stati letti, un carattere di nuova riga viene memorizzato nel buffer. In entrambi i casi, viene aggiunto un carattere null ('\0').  
  
 [CFile:: Read](../../mfc/reference/cfile-class.md#read) è disponibile anche per l'input in modalità testo, ma non termina con una coppia di ritorno a capo-avanzamento riga.  
  
> [!NOTE]
>  Il `CString` versione di questa funzione rimuove il `'\n'` se presente, il `LPTSTR` versione non.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCFiles&#38;](../../atl-mfc-shared/reference/codesnippet/cpp/cstdiofile-class_2.cpp)]  
  
##  <a name="a-nameseeka--cstdiofileseek"></a><a name="seek"></a>CStdioFile::Seek  
 Riposiziona il puntatore in un file aperto in precedenza.  
  
```  
virtual ULONGLONG Seek(
    LONGLONG lOff,  
    UINT nFrom);
```  
  
### <a name="parameters"></a>Parametri  
 `lOff`  
 Numero di byte per spostare il puntatore.  
  
 `nFrom`  
 Modalità di spostamento di puntatore. Deve essere uno dei valori seguenti:  
  
- `CFile::begin`: Spostare il puntatore del file `lOff` inoltrare byte dall'inizio del file.  
  
- `CFile::current`: Spostare il puntatore del file `lOff` byte dalla posizione corrente nel file.  
  
- `CFile::end`: Spostare il puntatore del file `lOff` byte dalla fine del file. Si noti che `lOff` deve essere negativo da cercare nel file; positivo valori cercherà oltre la fine del file.  
  
### <a name="return-value"></a>Valore restituito  
 Se la posizione richiesta è valida, `Seek` restituisce il nuovo offset di byte dall'inizio del file. In caso contrario, non è definito il valore restituito e un `CFileException` oggetto viene generata un'eccezione.  
  
### <a name="remarks"></a>Note  
 Il `Seek` funzione consente ad accesso casuale al contenuto di un file spostando il puntatore una determinata quantità, in modo assoluto o relativo. Durante la ricerca viene effettivamente letto alcun dato. Se la posizione richiesta è maggiore della dimensione del file, la lunghezza del file verrà esteso a tale posizione, e non verrà generata alcuna eccezione.  
  
 Quando viene aperto un file, all'offset 0, l'inizio del file è posizionato il puntatore del file.  
  
 Questa implementazione di `Seek` è basato sulla funzione di libreria di runtime (CRT) `fseek`. Esistono diversi limiti per l'utilizzo di `Seek` su flussi aperti in modalità testo. Per ulteriori informazioni, vedere [fseek, fseeki64](../../c-runtime-library/reference/fseek-fseeki64.md).  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare `Seek` per spostare il puntatore 1000 byte dall'inizio di `cfile` file. Si noti che `Seek` leggere i dati, è necessario chiamare successivamente [CStdioFile::ReadString](#readstring) per leggere i dati.  
  
 [!code-cpp[NVC_MFCFiles&#39;](../../atl-mfc-shared/reference/codesnippet/cpp/cstdiofile-class_3.cpp)]  
  
##  <a name="a-namewritestringa--cstdiofilewritestring"></a><a name="writestring"></a>CStdioFile::WriteString  
 Scrive nel file associato a dati da un buffer di `CStdioFile` oggetto.  
  
```  
virtual void WriteString(LPCTSTR lpsz);
```  
  
### <a name="parameters"></a>Parametri  
 `lpsz`  
 Specifica un puntatore a un buffer che contiene una stringa con terminazione null.  
  
### <a name="remarks"></a>Note  
 Il carattere di terminazione null ( `\0`) non viene scritto nel file. Questo metodo scrive caratteri di nuova riga `lpsz` al file come una coppia di ritorno/avanzamento riga, ritorno a capo.  
  
 Se si desidera scrivere i dati che non sono con terminazione null a un file, utilizzare `CStdioFile::Write` o [CFile::Write](../../mfc/reference/cfile-class.md#write).  
  
 Questo metodo genera un `CInvalidArgException*` se si specifica `NULL` per il `lpsz` parametro.  
  
 Questo metodo genera un `CFileException*` in risposta a errori nel file system.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[&#40; NVC_MFCFiles](../../atl-mfc-shared/reference/codesnippet/cpp/cstdiofile-class_4.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [CFile (classe)](../../mfc/reference/cfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CFile (classe)](../../mfc/reference/cfile-class.md)   
 [CFile::Duplicate](../../mfc/reference/cfile-class.md#duplicate)   
 [CFile::LockRange](../../mfc/reference/cfile-class.md#lockrange)   
 [CFile::UnlockRange](../../mfc/reference/cfile-class.md#unlockrange)   
 [Classe di eccezione CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md)


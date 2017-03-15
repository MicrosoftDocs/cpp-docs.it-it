---
title: Classe CDaoException | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CDaoException
dev_langs:
- C++
helpviewer_keywords:
- errors [C++], DAO
- CDaoException class
- DAO (Data Access Objects), exceptions
- exceptions, in MFC DAO classes
- Errors collection, DAO
- collections, DAO errors
ms.assetid: b2b01fa9-7ce2-42a1-842e-40f13dc50da4
caps.latest.revision: 24
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
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: d1cb1c6dbe50d383981af03cc97d1977be12a5f6
ms.lasthandoff: 02/24/2017

---
# <a name="cdaoexception-class"></a>Classe CDaoException
Rappresenta una condizione di eccezione generata da classi di database MFC basate su oggetti DAO (Data Access Object).  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CDaoException : public CException  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoException::CDaoException](#cdaoexception)|Costruisce un oggetto `CDaoException`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoException:: GetErrorCount](#geterrorcount)|Restituisce il numero di errori nella raccolta di errori del motore di database.|  
|[CDaoException:: GetErrorInfo](#geterrorinfo)|Restituisce informazioni di errore su un oggetto di errore specifico nella raccolta di errori.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDaoException::m_nAfxDaoError](#m_nafxdaoerror)|Contiene un codice di errore estese di qualsiasi errore nelle classi DAO MFC.|  
|[CDaoException::m_pErrorInfo](#m_perrorinfo)|Un puntatore a un [CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) oggetto che contiene informazioni su un oggetto error DAO.|  
|[CDaoException::m_scode](#m_scode)|Il [SCODE](#m_scode) valore associato all'errore.|  
  
## <a name="remarks"></a>Note  
 La classe include i membri dati pubblici, che è possibile utilizzare per determinare la causa dell'eccezione. `CDaoException`gli oggetti vengono costruiti e generati dalle funzioni membro delle classi di database DAO.  
  
> [!NOTE]
>  Le classi di database DAO sono distinte dalle classi di database MFC basate su ODBC Open Database Connectivity (). Tutti i nomi delle classi di database DAO hanno il prefisso "CDao". È comunque possibile accedere alle origini dati ODBC con le classi DAO. In generale, le classi MFC basate su DAO sono più in grado di supportare più classi MFC basate su ODBC; le classi basate su DAO possono accedere ai dati, ad esempio tramite driver ODBC, tramite i propri motore di database. Le classi basate su DAO supportano anche operazioni linguaggio DDL (Data Definition), ad esempio l'aggiunta di tabelle tramite le classi, senza dover chiamare direttamente DAO. Per informazioni sulle eccezioni generate dalle classi ODBC, vedere [CDBException](../../mfc/reference/cdbexception-class.md).  
  
 È possibile accedere agli oggetti eccezione all'interno dell'ambito di un [CATCH](../../mfc/reference/exception-processing.md#catch) espressione. È anche possibile generare `CDaoException` oggetti dal codice con il [AfxThrowDaoException](../../mfc/reference/exception-processing.md#afxthrowdaoexception) funzione globale.  
  
 In MFC, tutti gli errori DAO sono espressi come eccezioni, di tipo `CDaoException`. Quando si intercetta un'eccezione di questo tipo, è possibile utilizzare `CDaoException` funzioni membro per recuperare informazioni da tutti gli oggetti error DAO archiviati nella raccolta di errori del motore di database. Come si verifica un errore, uno o più oggetti di errore vengono inseriti nella raccolta di errori. (In genere la raccolta contiene un solo oggetto di errore, se si utilizza un'origine dati ODBC, non è più probabile ottenere più oggetti di errore). Quando un'altra operazione DAO genera un errore, viene cancellata la raccolta di errori e il nuovo oggetto errore viene inserito nella raccolta di errori. Le operazioni DAO che non generano un errore non hanno effetto sulla raccolta di errori.  
  
 I codici di errore DAO, vedere il file DAOERR. H. Per informazioni correlate, vedere l'argomento "Dati accesso errori intercettabili" nella Guida di DAO.  
  
 Per ulteriori informazioni sulla gestione delle eccezioni in generale o sta `CDaoException` oggetti, vedere gli articoli [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md) e [eccezioni: eccezioni di Database](../../mfc/exceptions-database-exceptions.md). Il secondo articolo contiene codice di esempio che illustra la gestione delle eccezioni in DAO.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `CDaoException`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
##  <a name="a-namecdaoexceptiona--cdaoexceptioncdaoexception"></a><a name="cdaoexception"></a>CDaoException::CDaoException  
 Costruisce un oggetto `CDaoException`.  
  
```  
CDaoException();
```  
  
### <a name="remarks"></a>Note  
 In genere, il framework crea gli oggetti eccezione quando il codice genera un'eccezione. Raramente è necessario costruire in modo esplicito un oggetto eccezione. Se si desidera generare un `CDaoException` dal proprio codice, chiamare la funzione globale [AfxThrowDaoException](../../mfc/reference/exception-processing.md#afxthrowdaoexception).  
  
 Potrebbero, tuttavia, si desidera creare in modo esplicito un oggetto eccezione qualora si stiano eseguendo chiamate dirette a DAO tramite i puntatori a interfaccia DAO che incapsulano le classi MFC. In tal caso, si potrebbe essere necessario recuperare le informazioni di errore da DAO. Si supponga che si verifica un errore in DAO quando si chiama un metodo DAO tramite l'interfaccia DAODatabases all'insieme di database dell'area di lavoro.  
  
##### <a name="to-retrieve-the-dao-error-information"></a>Per recuperare le informazioni sull'errore DAO  
  
1.  Costruire un `CDaoException` oggetto.  
  
2.  Chiamare l'oggetto eccezione [GetErrorCount](#geterrorcount) funzione membro per determinare il numero di oggetti errore presenti nella raccolta di errori del motore di database. (In genere solo uno, a meno che non si utilizza un'origine dati ODBC.)  
  
3.  Chiamare l'oggetto eccezione [GetErrorInfo](#geterrorinfo) funzione membro per recuperare un oggetto di errore specifico in un momento, in base all'indice nella raccolta, tramite l'oggetto eccezione. L'oggetto eccezione può essere considerato come un proxy per un oggetto error DAO.  
  
4.  Esaminare corrente [CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) struttura `GetErrorInfo` restituisce il [m_pErrorInfo](#m_perrorinfo) (membro dati). I suoi membri forniscono informazioni sull'errore DAO.  
  
5.  Nel caso di un'origine dati ODBC, ripetere i passaggi 3 e 4 in base alle esigenze, per più oggetti di errore.  
  
6.  Se è costruito l'oggetto eccezione sull'heap, eliminarlo con il **eliminare** operatore al termine.  
  
 Per ulteriori informazioni sulla gestione degli errori nelle classi DAO MFC, vedere l'articolo [eccezioni: eccezioni di Database](../../mfc/exceptions-database-exceptions.md).  
  
##  <a name="a-namegeterrorcounta--cdaoexceptiongeterrorcount"></a><a name="geterrorcount"></a>CDaoException:: GetErrorCount  
 Chiamare questa funzione membro per recuperare il numero di oggetti errore DAO nella raccolta di errori del motore di database.  
  
```  
short GetErrorCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di oggetti errore DAO nella raccolta di errori del motore di database.  
  
### <a name="remarks"></a>Note  
 Queste informazioni sono utili per la raccolta di errori per recuperare tutti gli oggetti di uno o più DAO errore nella raccolta in ciclo. Per recuperare un oggetto error all'indice o al numero di errore DAO, chiamare il [GetErrorInfo](#geterrorinfo) funzione membro.  
  
> [!NOTE]
>  In genere è presente un solo oggetto errore nella raccolta di errori. Se si lavora con un'origine dati ODBC, tuttavia, potrebbero esserci più.  
  
##  <a name="a-namegeterrorinfoa--cdaoexceptiongeterrorinfo"></a><a name="geterrorinfo"></a>CDaoException:: GetErrorInfo  
 Restituisce informazioni di errore su un oggetto di errore specifico nella raccolta di errori.  
  
```  
void GetErrorInfo(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 L'indice delle informazioni sull'errore nella raccolta di errori del motore di database, per la ricerca in base all'indice.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione membro per ottenere i seguenti tipi di informazioni sull'eccezione:  
  
-   Codice di errore  
  
-   Origine  
  
-   Descrizione  
  
-   File della Guida  
  
-   Contesto della Guida  
  
 `GetErrorInfo`Archivia le informazioni dell'oggetto eccezione `m_pErrorInfo` (membro dati). Per una breve descrizione delle informazioni restituite, vedere [m_pErrorInfo](#m_perrorinfo). Se si intercetta un'eccezione di tipo `CDaoException` generata da MFC, la `m_pErrorInfo` membro sarà già inserito. Se si sceglie di chiamare direttamente DAO, è necessario chiamare l'oggetto eccezione `GetErrorInfo` funzione membro per riempire `m_pErrorInfo`. Per una descrizione più dettagliata, vedere il [CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) struttura.  
  
 Per informazioni sulle eccezioni DAO e codice di esempio, vedere l'articolo [eccezioni: eccezioni di Database](../../mfc/exceptions-database-exceptions.md).  
  
##  <a name="a-namemnafxdaoerrora--cdaoexceptionmnafxdaoerror"></a><a name="m_nafxdaoerror"></a>CDaoException::m_nAfxDaoError  
 Contiene un codice di errore esteso di MFC.  
  
### <a name="remarks"></a>Note  
 Questo codice viene fornito nei casi in cui è previsti un componente specifico delle classi DAO MFC.  
  
 I possibili valori sono:  
  
- **NO_AFX_DAO_ERROR** l'operazione più recente non ha restituito un errore esteso di MFC. Tuttavia, l'operazione potrebbe produrre altri errori di DAO o OLE, è consigliabile controllare [m_pErrorInfo](#m_perrorinfo) ed eventualmente [m_scode](#m_scode).  
  
- **AFX_DAO_ERROR_ENGINE_INITIALIZATION** MFC non è riuscito a inizializzare il motore di database Microsoft Jet. OLE potrebbe non essere riuscito a inizializzare o fosse Impossibile creare un'istanza dell'oggetto di motore di database DAO. In genere, questi problemi suggeriscono un'installazione non corretta di DAO o OLE.  
  
- **AFX_DAO_ERROR_DFX_BIND** un indirizzo utilizzato in una chiamata di funzione DAO campi di record (DFX) di exchange non esiste o non è valido (l'indirizzo non è stato utilizzato per associare i dati). È stato passato un indirizzo non valido in una chiamata DFX o l'indirizzo potrebbe essere non valido tra operazioni DFX.  
  
- **AFX_DAO_ERROR_OBJECT_NOT_OPEN** si è tentato di aprire un recordset in base a un oggetto querydef o un oggetto tabledef che non è stato aperto.  
  
##  <a name="a-namemperrorinfoa--cdaoexceptionmperrorinfo"></a><a name="m_perrorinfo"></a>CDaoException::m_pErrorInfo  
 Contiene un puntatore a un `CDaoErrorInfo` struttura che fornisce informazioni sull'oggetto errore DAO ultima recuperati chiamando [GetErrorInfo](#geterrorinfo).  
  
### <a name="remarks"></a>Note  
 Questo oggetto contiene le informazioni seguenti:  
  
|CDaoErrorInfo membro|Informazioni|Significato|  
|--------------------------|-----------------|-------------|  
|**m_lErrorCode**|Codice di errore|Il codice di errore DAO|  
|`m_strSource`|Origine|Il nome dell'oggetto o dell'applicazione che ha generato l'errore|  
|`m_strDescription`|Descrizione|Una stringa descrittiva associata all'errore|  
|`m_strHelpFile`|File della Guida|Un percorso di un file della Guida di Windows in cui l'utente può ottenere informazioni sul problema|  
|**m_lHelpContext**|Contesto della Guida|L'ID del contesto per un argomento nel file della Guida in linea di DAO|  
  
 Per informazioni dettagliate sulle informazioni contenute nel `CDaoErrorInfo` di oggetti, vedere il [CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) struttura.  
  
##  <a name="a-namemscodea--cdaoexceptionmscode"></a><a name="m_scode"></a>CDaoException::m_scode  
 Contiene un valore di tipo `SCODE` che descrive l'errore.  
  
### <a name="remarks"></a>Note  
 Questo è un codice OLE. Raramente è necessario utilizzare questo valore poiché, in quasi tutti i casi, sono disponibile anche in altro informazioni più specifiche MFC o DAO errore `CDaoException` membri dati.  
  
 Per informazioni su `SCODE`, vedere l'argomento [struttura di OLE codici di errore](http://msdn.microsoft.com/library/windows/desktop/ms690088) nel [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Il `SCODE` esegue il mapping al tipo di dati di `HRESULT` tipo di dati.  
  
## <a name="see-also"></a>Vedere anche  
 [CException (classe)](../../mfc/reference/cexception-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CException (classe)](../../mfc/reference/cexception-class.md)


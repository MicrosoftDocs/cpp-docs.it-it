---
title: Classe CDaoException | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDaoException
- AFXDAO/CDaoException
- AFXDAO/CDaoException::CDaoException
- AFXDAO/CDaoException::GetErrorCount
- AFXDAO/CDaoException::GetErrorInfo
- AFXDAO/CDaoException::m_nAfxDaoError
- AFXDAO/CDaoException::m_pErrorInfo
- AFXDAO/CDaoException::m_scode
dev_langs:
- C++
helpviewer_keywords:
- CDaoException [MFC], CDaoException
- CDaoException [MFC], GetErrorCount
- CDaoException [MFC], GetErrorInfo
- CDaoException [MFC], m_nAfxDaoError
- CDaoException [MFC], m_pErrorInfo
- CDaoException [MFC], m_scode
ms.assetid: b2b01fa9-7ce2-42a1-842e-40f13dc50da4
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 4531d63ff7047881f20368cbeaf8e5de4136bb9f
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33369216"
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
 La classe include i membri dati pubblici, che è possibile utilizzare per determinare la causa dell'eccezione. `CDaoException` gli oggetti vengono costruiti e generati dalle funzioni membro delle classi database DAO.  
  
> [!NOTE]
>  Classi di database DAO sono distinte dalle classi di database MFC basate su ODBC Open Database Connectivity (). Tutti i nomi delle classi database DAO hanno il prefisso "CDao". È comunque possibile accedere alle origini dati ODBC con le classi DAO. In generale, le classi MFC basate su DAO sono più in grado di classi MFC basate su ODBC; le classi basate su DAO possono accedere a dati, ad esempio tramite il driver ODBC, tramite i propri motore di database. Le classi basate su DAO supportano anche le operazioni di Data Definition Language (DDL), ad esempio l'aggiunta di tabelle tramite le classi, senza dover chiamare direttamente DAO. Per informazioni sulle eccezioni generate dalle classi ODBC, vedere [CDBException](../../mfc/reference/cdbexception-class.md).  
  
 È possibile accedere agli oggetti di eccezione nell'ambito di un [CATCH](../../mfc/reference/exception-processing.md#catch) espressione. È anche possibile generare `CDaoException` oggetti dal codice con il [AfxThrowDaoException](../../mfc/reference/exception-processing.md#afxthrowdaoexception) funzione globale.  
  
 In MFC, tutti gli errori DAO sono espressi come eccezioni, di tipo `CDaoException`. Quando si intercetta un'eccezione di questo tipo, è possibile utilizzare `CDaoException` funzioni membro per recuperare informazioni da tutti gli oggetti error DAO archiviati nella raccolta di errori del motore di database. Si verifica ogni errore, uno o più oggetti di errore vengono inseriti nella raccolta di errori. (In genere la raccolta contiene un solo oggetto errore; se si utilizza un'origine dati ODBC, è più probabile ottenere più oggetti di errore) Quando un'altra operazione DAO genera un errore, viene cancellata la raccolta di errori e il nuovo oggetto errore viene inserito nella raccolta di errori. Le operazioni di DAO che non generano un errore non hanno effetto su una raccolta di errori.  
  
 I codici di errore DAO, vedere il file DAOERR. H. Per informazioni correlate, vedere l'argomento "Dati accesso errori intercettabili" nella Guida di DAO.  
  
 Per ulteriori informazioni sulla gestione delle eccezioni in generale o sulle `CDaoException` degli oggetti, vedere gli articoli [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md) e [eccezioni: eccezioni di Database](../../mfc/exceptions-database-exceptions.md). Il secondo articolo contiene codice di esempio che illustra la gestione delle eccezioni in DAO.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `CDaoException`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
##  <a name="cdaoexception"></a>  CDaoException::CDaoException  
 Costruisce un oggetto `CDaoException`.  
  
```  
CDaoException();
```  
  
### <a name="remarks"></a>Note  
 In genere, il framework crea oggetti eccezione quando il codice genera un'eccezione. Raramente è necessario costruire in modo esplicito un oggetto eccezione. Se si desidera generare un `CDaoException` dal codice, chiamare la funzione globale [AfxThrowDaoException](../../mfc/reference/exception-processing.md#afxthrowdaoexception).  
  
 Potrebbe tuttavia si desidera creare in modo esplicito un oggetto eccezione, se si effettuano chiamate dirette a DAO tramite i puntatori di interfaccia DAO che incapsulano le classi MFC. In tal caso, si potrebbe essere necessario recuperare le informazioni di errore da DAO. Si supponga che si verifica un errore in DAO quando si chiama un metodo DAO tramite l'interfaccia DAODatabases alla raccolta di database dell'area di lavoro.  
  
##### <a name="to-retrieve-the-dao-error-information"></a>Per recuperare le informazioni sull'errore DAO  
  
1.  Costruire un `CDaoException` oggetto.  
  
2.  Chiamare l'oggetto di eccezione [GetErrorCount](#geterrorcount) funzione membro per determinare il numero di oggetti di errore nella raccolta di errori del motore di database. (In genere solo uno, a meno che non si utilizza un'origine dati ODBC.)  
  
3.  Chiamare l'oggetto di eccezione [GetErrorInfo](#geterrorinfo) funzione membro per recuperare un oggetto di errore specifico in un momento, in base all'indice nella raccolta, tramite l'oggetto eccezione. L'oggetto eccezione può essere paragonato a un proxy per un oggetto error DAO.  
  
4.  Esaminare corrente [CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) struttura `GetErrorInfo` restituisce il [m_pErrorInfo](#m_perrorinfo) (membro dati). I suoi membri forniscono informazioni sull'errore DAO.  
  
5.  Nel caso di un'origine dati ODBC, ripetere i passaggi 3 e 4 in base alle esigenze, per più oggetti di errore.  
  
6.  Se è stato costruito l'oggetto eccezione sull'heap, eliminarlo con il **eliminare** operatore al termine.  
  
 Per ulteriori informazioni sulla gestione degli errori nelle classi DAO MFC, vedere l'articolo [eccezioni: eccezioni di Database](../../mfc/exceptions-database-exceptions.md).  
  
##  <a name="geterrorcount"></a>  CDaoException:: GetErrorCount  
 Chiamare questa funzione membro per recuperare il numero di oggetti errore DAO nella raccolta di errori del motore di database.  
  
```  
short GetErrorCount();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di oggetti di errore DAO nella raccolta di errori del motore di database.  
  
### <a name="remarks"></a>Note  
 Queste informazioni sono utili per scorrere la raccolta di errori per recuperare tutti gli oggetti uno o più DAO errore nella raccolta in ciclo. Per recuperare un oggetto di errore in base all'indice o al numero di errore DAO, chiamare il [GetErrorInfo](#geterrorinfo) funzione membro.  
  
> [!NOTE]
>  In genere è presente un solo oggetto di errore nella raccolta di errori. Se si lavora con un'origine dati ODBC, tuttavia, potrebbe esserci più di uno.  
  
##  <a name="geterrorinfo"></a>  CDaoException:: GetErrorInfo  
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
  
 `GetErrorInfo` Archivia le informazioni dell'oggetto eccezione `m_pErrorInfo` (membro dati). Per una breve descrizione delle informazioni restituite, vedere [m_pErrorInfo](#m_perrorinfo). Se si intercetta un'eccezione di tipo `CDaoException` generata da MFC, la `m_pErrorInfo` membro già essere compilato. Se si sceglie di chiamare direttamente DAO, è necessario chiamare l'oggetto di eccezione `GetErrorInfo` funzione membro per riempire `m_pErrorInfo`. Per una descrizione più dettagliata, vedere il [CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) struttura.  
  
 Per informazioni sulle eccezioni DAO ed esempio di codice, vedere l'articolo [eccezioni: eccezioni di Database](../../mfc/exceptions-database-exceptions.md).  
  
##  <a name="m_nafxdaoerror"></a>  CDaoException::m_nAfxDaoError  
 Contiene un codice di errore esteso di MFC.  
  
### <a name="remarks"></a>Note  
 Questo codice viene fornito in casi in cui è di cui un componente specifico delle classi DAO MFC.  
  
 I possibili valori sono:  
  
- **NO_AFX_DAO_ERROR** dell'ultima operazione non ha restituito un errore esteso di MFC. Tuttavia, l'operazione potrebbe hanno altri errori di DAO o OLE, è consigliabile controllare [m_pErrorInfo](#m_perrorinfo) ed eventualmente [m_scode](#m_scode).  
  
- **AFX_DAO_ERROR_ENGINE_INITIALIZATION** MFC non è riuscito a inizializzare il motore di database Microsoft Jet. Potrebbe essere Impossibile inizializzare OLE o sarebbe stato possibile creare un'istanza dell'oggetto di motore di database DAO. Questi problemi è consigliabile in genere un'installazione di DAO o OLE non valida.  
  
- **AFX_DAO_ERROR_DFX_BIND** un indirizzo utilizzato in una chiamata di funzione DAO campi di record (DFX) di exchange non esiste o non è valido (l'indirizzo non è stato utilizzato per associare i dati). Sono stati passati un indirizzo non valido in una chiamata DFX o l'indirizzo potrebbe diventare non valido tra le operazioni di DFX.  
  
- **AFX_DAO_ERROR_OBJECT_NOT_OPEN** si è tentato di aprire un recordset in base a un oggetto querydef o un oggetto tabledef che non si trovava nello stato aperto.  
  
##  <a name="m_perrorinfo"></a>  CDaoException::m_pErrorInfo  
 Contiene un puntatore a un `CDaoErrorInfo` struttura che fornisce informazioni sull'oggetto errore DAO l'ultimo recupero chiamando [GetErrorInfo](#geterrorinfo).  
  
### <a name="remarks"></a>Note  
 Questo oggetto contiene le informazioni seguenti:  
  
|Membro CDaoErrorInfo|Informazioni|Significato|  
|--------------------------|-----------------|-------------|  
|**m_lErrorCode**|Codice di errore|Il codice di errore DAO|  
|`m_strSource`|Origine|Il nome dell'oggetto o dell'applicazione che ha generato l'errore|  
|`m_strDescription`|Descrizione|Una stringa descrittiva associata con l'errore|  
|`m_strHelpFile`|File della Guida|Un percorso di un file della Guida di Windows in cui l'utente può ottenere informazioni sul problema|  
|**m_lHelpContext**|Contesto della Guida|L'ID del contesto per un argomento nel file della Guida in linea di DAO|  
  
 Per informazioni dettagliate sulle informazioni contenute nel `CDaoErrorInfo` , vedere il [CDaoErrorInfo](../../mfc/reference/cdaoerrorinfo-structure.md) struttura.  
  
##  <a name="m_scode"></a>  CDaoException::m_scode  
 Contiene un valore di tipo `SCODE` che descrive l'errore.  
  
### <a name="remarks"></a>Note  
 Questo è un codice OLE. Raramente è necessario utilizzare questo valore perché, in quasi tutti i casi, è disponibile in altro più specifiche informazioni sull'errore MFC o DAO `CDaoException` membri dati.  
  
 Per informazioni su `SCODE`, vedere l'argomento [struttura di OLE codici di errore](http://msdn.microsoft.com/library/windows/desktop/ms690088) in Windows SDK. Il `SCODE` esegue il mapping al tipo di dati di `HRESULT` tipo di dati.  
  
## <a name="see-also"></a>Vedere anche  
 [CException (classe)](../../mfc/reference/cexception-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CException](../../mfc/reference/cexception-class.md)

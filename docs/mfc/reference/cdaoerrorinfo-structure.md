---
title: Struttura CDaoErrorInfo
ms.date: 09/17/2019
f1_keywords:
- CDaoErrorInfo
helpviewer_keywords:
- CDaoErrorInfo structure [MFC]
- DAO (Data Access Objects), Errors collection
ms.assetid: cd37ef71-b0b3-401d-bc2b-540c9147f532
ms.openlocfilehash: a7b273bd2aa6b428bf795c1842455b8bfe187cc8
ms.sourcegitcommit: 2f96e2fda591d7b1b28842b2ea24e6297bcc3622
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2019
ms.locfileid: "71096143"
---
# <a name="cdaoerrorinfo-structure"></a>Struttura CDaoErrorInfo

La `CDaoErrorInfo` struttura contiene informazioni su un oggetto Error definito per DAO (Data Access Objects).
DAO 3,6 è la versione finale ed è considerata obsoleta.


## <a name="syntax"></a>Sintassi

```
struct CDaoErrorInfo
{
    long m_lErrorCode;
    CString m_strSource;
    CString m_strDescription;
    CString m_strHelpFile;
    long m_lHelpContext;
};
```

#### <a name="parameters"></a>Parametri

*m_lErrorCode*<br/>
Codice di errore numerico DAO. Vedere l'argomento "errori di accesso ai dati intercettabili" nella Guida di DAO.

*m_strSource*<br/>
Nome dell'oggetto o dell'applicazione che ha generato in origine l'errore. La proprietà Source specifica un'espressione stringa che rappresenta l'oggetto che ha generato in origine l'errore. l'espressione è in genere il nome della classe dell'oggetto. Per informazioni dettagliate, vedere l'argomento "proprietà di origine" nella Guida di DAO.

*m_strDescription*<br/>
Stringa descrittiva associata a un errore. Per informazioni dettagliate, vedere l'argomento relativo alla proprietà Description nella Guida di DAO.

*m_strHelpFile*<br/>
Percorso completo di un file della Guida di Microsoft Windows. Per informazioni dettagliate, vedere l'argomento "HelpContext, fileguided Properties" nella Guida di DAO.

*m_lHelpContext*<br/>
ID del contesto per un argomento in un file della Guida di Microsoft Windows. Per informazioni dettagliate, vedere l'argomento "HelpContext, fileguided Properties" nella Guida di DAO.

## <a name="remarks"></a>Note

MFC non incapsula gli oggetti di errore DAO in una classe. Al contrario, la classe [CDaoException](../../mfc/reference/cdaoexception-class.md) fornisce un'interfaccia per l'accesso alla raccolta di errori contenuti nell' `DBEngine` oggetto DAO, l'oggetto che contiene anche tutte le aree di lavoro. Quando un'operazione DAO MFC genera un `CDaoException` oggetto che viene intercettato, MFC compila una `CDaoErrorInfo` struttura e la archivia nel membro [m_pErrorInfo](../../mfc/reference/cdaoexception-class.md#m_perrorinfo) dell'oggetto Exception. Se si sceglie di chiamare direttamente DAO, è necessario chiamare manualmente `m_pErrorInfo`la funzione membro [GetErrorInfo](../../mfc/reference/cdaoexception-class.md#geterrorinfo) dell'oggetto Exception.

Per ulteriori informazioni sulla gestione degli errori DAO, vedere l' [articolo eccezioni: Eccezioni](../../mfc/exceptions-database-exceptions.md)del database. Per informazioni correlate, vedere l'argomento relativo all'oggetto Error nella Guida di DAO.

Le informazioni recuperate dalla funzione membro [CDaoException:: GetErrorInfo](../../mfc/reference/cdaoexception-class.md#geterrorinfo) vengono archiviate `CDaoErrorInfo` in una struttura. Esaminare il membro dati [m_pErrorInfo](../../mfc/reference/cdaoexception-class.md#m_perrorinfo) da un `CDaoException` oggetto che si rileva in un gestore di eccezioni oppure chiamare `GetErrorInfo` da un `CDaoException` oggetto creato in modo esplicito per controllare gli errori che potrebbero essersi verificati durante una chiamata diretta alle interfacce DAO. `CDaoErrorInfo`definisce inoltre una `Dump` funzione membro nelle compilazioni di debug. È possibile utilizzare `Dump` per eseguire il dump del contenuto `CDaoErrorInfo` di un oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Classe CDaoException](../../mfc/reference/cdaoexception-class.md)

---
description: 'Altre informazioni su: struttura CDaoErrorInfo'
title: Struttura CDaoErrorInfo
ms.date: 09/17/2019
f1_keywords:
- CDaoErrorInfo
helpviewer_keywords:
- CDaoErrorInfo structure [MFC]
- DAO (Data Access Objects), Errors collection
ms.assetid: cd37ef71-b0b3-401d-bc2b-540c9147f532
ms.openlocfilehash: 3d8ae4bd133c96ef1853c8d087904c7c6eba810d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97250959"
---
# <a name="cdaoerrorinfo-structure"></a>Struttura CDaoErrorInfo

La `CDaoErrorInfo` struttura contiene informazioni su un oggetto Error definito per DAO (Data Access Objects). DAO 3,6 è la versione finale ed è considerata obsoleta.

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

## <a name="remarks"></a>Commenti

MFC non incapsula gli oggetti di errore DAO in una classe. Al contrario, la classe [CDaoException](../../mfc/reference/cdaoexception-class.md) fornisce un'interfaccia per l'accesso alla raccolta di errori contenuti nell' `DBEngine` oggetto DAO, l'oggetto che contiene anche tutte le aree di lavoro. Quando un'operazione DAO MFC genera un `CDaoException` oggetto che viene intercettato, MFC compila una `CDaoErrorInfo` struttura e la archivia nel membro [m_pErrorInfo](../../mfc/reference/cdaoexception-class.md#m_perrorinfo) dell'oggetto Exception. Se si sceglie di chiamare direttamente DAO, è necessario chiamare manualmente la funzione membro [GetErrorInfo](../../mfc/reference/cdaoexception-class.md#geterrorinfo) dell'oggetto Exception `m_pErrorInfo` .

Per ulteriori informazioni sulla gestione degli errori DAO, vedere l'articolo [eccezioni: eccezioni di database](../../mfc/exceptions-database-exceptions.md). Per informazioni correlate, vedere l'argomento relativo all'oggetto Error nella Guida di DAO.

Le informazioni recuperate dalla funzione membro [CDaoException:: GetErrorInfo](../../mfc/reference/cdaoexception-class.md#geterrorinfo) vengono archiviate in una `CDaoErrorInfo` struttura. Esaminare il membro dati [m_pErrorInfo](../../mfc/reference/cdaoexception-class.md#m_perrorinfo) da un `CDaoException` oggetto intercettato in un gestore di eccezioni oppure chiamare `GetErrorInfo` da un `CDaoException` oggetto creato in modo esplicito per controllare gli errori che potrebbero essersi verificati durante una chiamata diretta alle interfacce DAO. `CDaoErrorInfo` definisce inoltre una `Dump` funzione membro nelle compilazioni di debug. È possibile utilizzare `Dump` per eseguire il dump del contenuto di un `CDaoErrorInfo` oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** AFXDAO. h

## <a name="see-also"></a>Vedi anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Classe CDaoException](../../mfc/reference/cdaoexception-class.md)

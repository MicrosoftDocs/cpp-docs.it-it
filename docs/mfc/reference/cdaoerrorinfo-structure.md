---
title: Struttura CDaoErrorInfo | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDaoErrorInfo
dev_langs:
- C++
helpviewer_keywords:
- CDaoErrorInfo structure [MFC]
- DAO (Data Access Objects), Errors collection
ms.assetid: cd37ef71-b0b3-401d-bc2b-540c9147f532
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 787e9d5ac860e283d6eacc0f22b790a6196485f4
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37335568"
---
# <a name="cdaoerrorinfo-structure"></a>Struttura CDaoErrorInfo
Il `CDaoErrorInfo` struttura contiene informazioni su un oggetto di errore definito per data access Object (DAO).  
  
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
 *m_lErrorCode*  
 Un codice di errore numerico DAO. Vedere l'argomento "Dati accesso errori intercettabili" nella Guida di DAO.  
  
 *m_strSource*  
 Il nome dell'oggetto o applicazione che ha generato l'errore. La proprietà di origine specifica un'espressione stringa che rappresenta l'oggetto che ha generato l'errore. l'espressione è in genere il nome dell'oggetto classe. Per informazioni dettagliate, vedere l'argomento "Proprietà di origine" nella Guida di DAO.  
  
 *m_strDescription*  
 Una stringa descrittiva associata a un errore. Per informazioni dettagliate, vedere l'argomento "Proprietà Description" nella Guida di DAO.  
  
 *m_strHelpFile*  
 Il percorso completo in un file della Guida di Microsoft Windows. Per informazioni dettagliate, vedere l'argomento "Proprietà HelpContext, HelpFile" nella Guida di DAO.  
  
 *m_lHelpContext*  
 Un ID di contesto per un argomento in un file della Guida di Microsoft Windows. Per informazioni dettagliate, vedere l'argomento "Proprietà HelpContext, HelpFile" nella Guida di DAO.  
  
## <a name="remarks"></a>Note  
 MFC non incapsula oggetti errore DAO in una classe. Al contrario, il [CDaoException](../../mfc/reference/cdaoexception-class.md) classe fornisce un'interfaccia per accedere alla raccolta di errori contenuta nell'oggetto DAO `DBEngine` object, oggetto che contiene anche tutte le aree di lavoro. Quando un'operazione di DAO MFC genera una `CDaoException` dell'oggetto che viene intercettata, MFC riempie una `CDaoErrorInfo` struttura e lo archivia nell'oggetto eccezione [m_pErrorInfo](../../mfc/reference/cdaoexception-class.md#m_perrorinfo) membro. (Se si sceglie di chiamare direttamente DAO, è necessario chiamare l'oggetto dell'eccezione [GetErrorInfo](../../mfc/reference/cdaoexception-class.md#geterrorinfo) funzione membro personale per riempire `m_pErrorInfo`.)  
  
 Per altre informazioni sulla gestione degli errori DAO, vedere l'articolo [eccezioni: eccezioni di Database](../../mfc/exceptions-database-exceptions.md). Per informazioni correlate, vedere l'argomento "Errore Object" nella Guida di DAO.  
  
 Le informazioni recuperate dal [CDaoException:: GetErrorInfo](../../mfc/reference/cdaoexception-class.md#geterrorinfo) le funzioni membro vengono archiviate un `CDaoErrorInfo` struttura. Esaminare i [m_pErrorInfo](../../mfc/reference/cdaoexception-class.md#m_perrorinfo) membro dati da un `CDaoException` oggetto rilevate in un gestore di eccezioni o chiamare `GetErrorInfo` da un `CDaoException` oggetto creato in modo esplicito per controllare gli errori che potrebbero avere si è verificato durante una chiamata diretta alle interfacce di DAO. `CDaoErrorInfo` definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile usare `Dump` per scaricare il contenuto di un `CDaoErrorInfo` oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [Classe CDaoException](../../mfc/reference/cdaoexception-class.md)

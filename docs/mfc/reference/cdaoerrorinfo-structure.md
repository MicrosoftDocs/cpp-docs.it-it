---
title: Struttura CDaoErrorInfo | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- CDaoErrorInfo
dev_langs:
- C++
helpviewer_keywords:
- CDaoErrorInfo structure
- DAO (Data Access Objects), Errors collection
ms.assetid: cd37ef71-b0b3-401d-bc2b-540c9147f532
caps.latest.revision: 13
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
ms.openlocfilehash: 3a3b33f6a7b95edcb2476b03356d32e74d1b8954
ms.lasthandoff: 02/24/2017

---
# <a name="cdaoerrorinfo-structure"></a>Struttura CDaoErrorInfo
Il `CDaoErrorInfo` struttura contiene informazioni su un oggetto di errore definito per l'accesso oggetti DAO (data).  
  
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
 Il nome dell'oggetto o dell'applicazione che ha generato l'errore. La proprietà Source specifica un'espressione stringa che rappresenta l'oggetto che ha generato l'errore. l'espressione è in genere il nome dell'oggetto classe. Per informazioni dettagliate, vedere l'argomento "Proprietà Source" nella Guida di DAO.  
  
 *m_strDescription*  
 Una stringa descrittiva associata a un errore. Per informazioni dettagliate, vedere l'argomento "Proprietà Description" nella Guida di DAO.  
  
 *m_strHelpFile*  
 Il percorso completo di un file della Guida di Microsoft Windows. Per informazioni dettagliate, vedere l'argomento "Proprietà HelpContext, HelpFile" nella Guida di DAO.  
  
 *m_lHelpContext*  
 Un ID di contesto per un argomento in un file della Guida di Microsoft Windows. Per informazioni dettagliate, vedere l'argomento "Proprietà HelpContext, HelpFile" nella Guida di DAO.  
  
## <a name="remarks"></a>Note  
 MFC non include oggetti errore DAO in una classe. Al contrario, il [CDaoException](../../mfc/reference/cdaoexception-class.md) classe fornisce un'interfaccia per accedere alla raccolta di errori contenuta nell'oggetto DAO **DBEngine** object, oggetto contenente tutte le aree di lavoro. Quando un'operazione DAO MFC genera una `CDaoException` oggetto che viene intercettata, MFC riempie un `CDaoErrorInfo` struttura e la archivia in dell'oggetto eccezione [m_pErrorInfo](../../mfc/reference/cdaoexception-class.md#m_perrorinfo) membro. (Se si sceglie di chiamare direttamente DAO, è necessario chiamare l'oggetto eccezione [GetErrorInfo](../../mfc/reference/cdaoexception-class.md#geterrorinfo) funzione membro per riempire `m_pErrorInfo`.)  
  
 Per ulteriori informazioni sulla gestione degli errori DAO, vedere l'articolo [eccezioni: eccezioni di Database](../../mfc/exceptions-database-exceptions.md). Per informazioni correlate, vedere l'argomento "Errore oggetto" nella Guida di DAO.  
  
 Le informazioni recuperate dal [CDaoException:: GetErrorInfo](../../mfc/reference/cdaoexception-class.md#geterrorinfo) funzione membro viene archiviata in una `CDaoErrorInfo` struttura. Esaminare il [m_pErrorInfo](../../mfc/reference/cdaoexception-class.md#m_perrorinfo) membro dati da un `CDaoException` oggetto che viene intercettata in un gestore eccezioni o chiamata `GetErrorInfo` da un `CDaoException` che l'oggetto creato in modo esplicito per controllare gli errori che potrebbero essersi verificati durante una chiamata diretta alle interfacce DAO. `CDaoErrorInfo`definisce inoltre un `Dump` si basa la funzione membro in modalità debug. È possibile utilizzare `Dump` per scaricare il contenuto di un `CDaoErrorInfo` oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [Classe CDaoException](../../mfc/reference/cdaoexception-class.md)


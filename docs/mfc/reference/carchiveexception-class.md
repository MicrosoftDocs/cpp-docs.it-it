---
title: Classe di eccezione CArchiveException | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CArchiveException
- AFX/CArchiveException
- AFX/CArchiveException::CArchiveException
- AFX/CArchiveException::m_cause
- AFX/CArchiveException::m_strFileName
dev_langs:
- C++
helpviewer_keywords:
- exceptions [C++], serialization
- serialization [C++], exceptions
- CArchiveException class
- exceptions [C++], archive
- archive exceptions [C++]
ms.assetid: da31a127-e86c-41d1-b0b6-bed0865b1b49
caps.latest.revision: 21
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
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: e927bea5b8d9e6dbaafb191f6c3bdcf0f0d076cc
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="carchiveexception-class"></a>Classe di eccezione CArchiveException
Rappresenta una condizione di eccezione di serializzazione  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CArchiveException : public CException  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CArchiveException::CArchiveException](#carchiveexception)|Costruisce un oggetto `CArchiveException`.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CArchiveException::m_cause](#m_cause)|Indica la causa dell'eccezione.|  
|[CArchiveException::m_strFileName](#m_strfilename)|Specifica il nome del file per la condizione di eccezione.|  
  
## <a name="remarks"></a>Note  
 La `CArchiveException` classe include un membro dati pubblico che indica la causa dell'eccezione.  
  
 `CArchiveException`gli oggetti vengono costruiti e generati all'interno di [CArchive](../../mfc/reference/carchive-class.md) funzioni membro. È possibile accedere a questi oggetti nell'ambito di un **CATCH** espressione. Il codice causa è indipendente del sistema operativo. Per ulteriori informazioni sull'elaborazione delle eccezioni, vedere [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `CArchiveException`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
##  <a name="carchiveexception"></a>CArchiveException::CArchiveException  
 Costruisce un `CArchiveException` oggetto, l'archiviazione del valore di `cause` nell'oggetto.  
  
```  
CArchiveException(
    int cause = CArchiveException::none,  
    LPCTSTR lpszArchiveName = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `cause`  
 Una variabile di tipo enumerato che indica il motivo dell'eccezione. Per un elenco degli enumeratori, vedere il [m_cause](#m_cause) (membro dati).  
  
 `lpszArchiveName`  
 Punta a una stringa contenente il nome di `CArchive` oggetto che ha causato l'eccezione.  
  
### <a name="remarks"></a>Note  
 È possibile creare un `CArchiveException` oggetto nell'heap e generare manualmente o consentire la funzione globale [AfxThrowArchiveException](../../mfc/reference/exception-processing.md#afxthrowarchiveexception) gestirla automaticamente.  
  
 Non utilizzare questo costruttore direttamente. al contrario, chiamare la funzione globale `AfxThrowArchiveException`.  
  
##  <a name="m_cause"></a>CArchiveException::m_cause  
 Specifica la causa dell'eccezione.  
  
```  
int m_cause;  
```  
  
### <a name="remarks"></a>Note  
 Questo membro dati è una variabile pubblica di tipo `int`. I valori sono definiti da un `CArchiveException` tipo enumerato. Di seguito sono elencati gli enumeratori e i relativi significati:  
  
- **CArchiveException::none** si è verificato alcun errore.  
  
- **CArchiveException::genericException** errore non specificato.  
  
- **CArchiveException::readOnly** ha tentato di scrivere in un archivio aperto per il caricamento.  
  
- **CArchiveException::endOfFile** raggiunta fine del file durante la lettura di un oggetto.  
  
- **CArchiveException::writeOnly** ha tentato di leggere da un archivio aperto per l'archiviazione.  
  
- **CArchiveException::badIndex** formato file non valido.  
  
- **CArchiveException::badClass** ha tentato di leggere un oggetto in un oggetto di tipo errato.  
  
- **CArchiveException::badSchema** ha tentato di leggere un oggetto con una versione diversa della classe.  
  
    > [!NOTE]
    >  Questi enumeratori di causa `CArchiveException` sono diversi dagli enumeratori di causa `CFileException`.  
  
    > [!NOTE]
    > **CArchiveException::generic** è deprecata. Utilizzare **genericException** invece. Se **generici** viene usato in un'applicazione e compilato con /clr, vi saranno errori di sintassi che non sono semplici da decifrare.  
  
##  <a name="m_strfilename"></a>CArchiveException::m_strFileName  
 Specifica il nome del file per la condizione di eccezione.  
  
```  
CString m_strFileName;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [CException (classe)](../../mfc/reference/cexception-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CArchive (classe)](../../mfc/reference/carchive-class.md)   
 [AfxThrowArchiveException](../../mfc/reference/exception-processing.md#afxthrowarchiveexception)   
 [Elaborazione delle eccezioni](../../mfc/reference/exception-processing.md)



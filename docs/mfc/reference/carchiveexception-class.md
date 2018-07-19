---
title: Classe CArchiveException | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
- CArchiveException [MFC], CArchiveException
- CArchiveException [MFC], m_cause
- CArchiveException [MFC], m_strFileName
ms.assetid: da31a127-e86c-41d1-b0b6-bed0865b1b49
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 53e82838ba952656d7067ce2294d9abdde11479c
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37335744"
---
# <a name="carchiveexception-class"></a>Classe CArchiveException
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
|[CArchiveException::m_strFileName](#m_strfilename)|Specifica il nome del file per questa condizione di eccezione.|  
  
## <a name="remarks"></a>Note  
 Il `CArchiveException` classe include un membro dati pubblico che indica la causa dell'eccezione.  
  
 `CArchiveException` gli oggetti vengono costruiti e generati all'interno [CArchive](../../mfc/reference/carchive-class.md) funzioni membro. È possibile accedere a questi oggetti nell'ambito di una **CATCH** espressione. Il codice causa è indipendente dal sistema operativo. Per altre informazioni sull'elaborazione delle eccezioni, vedere [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `CArchiveException`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
##  <a name="carchiveexception"></a>  CArchiveException::CArchiveException  
 Costruisce un `CArchiveException` archiviazione di oggetti, il valore di *causare* nell'oggetto.  
  
```  
CArchiveException(
    int cause = CArchiveException::none,  
    LPCTSTR lpszArchiveName = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 *cause*  
 Una variabile di tipo enumerato che indica il motivo dell'eccezione. Per un elenco di enumeratori, vedere la [m_cause](#m_cause) (membro dati).  
  
 *lpszArchiveName*  
 Punta a una stringa contenente il nome del `CArchive` oggetto che ha causato l'eccezione.  
  
### <a name="remarks"></a>Note  
 È possibile creare un `CArchiveException` dell'oggetto nell'heap e praticità del forno manualmente o consentire la funzione globale [AfxThrowArchiveException](../../mfc/reference/exception-processing.md#afxthrowarchiveexception) gestirla automaticamente.  
  
 Non utilizzare questo costruttore direttamente. In alternativa, chiamare la funzione globale `AfxThrowArchiveException`.  
  
##  <a name="m_cause"></a>  CArchiveException::m_cause  
 Specifica la causa dell'eccezione.  
  
```  
int m_cause;  
```  
  
### <a name="remarks"></a>Note  
 Questo membro dati è una variabile pubblica di tipo **int**. I relativi valori sono definiti da un `CArchiveException` tipo enumerato. Di seguito sono elencati gli enumeratori e i relativi significati:  
  
- `CArchiveException::none` Si è verificato alcun errore.  
  
- `CArchiveException::genericException` Errore non specificato.  
  
- `CArchiveException::readOnly` Ha tentato di scrivere in un archivio aperto per il caricamento.  
  
- `CArchiveException::endOfFile` È stata raggiunta la fine del file durante la lettura di un oggetto.  
  
- `CArchiveException::writeOnly` Ha tentato di leggere da un archivio aperto per l'archiviazione.  
  
- `CArchiveException::badIndex` Formato di file non valido.  
  
- `CArchiveException::badClass` Ha tentato di leggere un oggetto in un oggetto di tipo errato.  
  
- `CArchiveException::badSchema` Ha tentato di leggere un oggetto con una versione diversa della classe.  
  
    > [!NOTE]
    >  Questi enumeratori di causa `CArchiveException` sono diversi dagli enumeratori di causa `CFileException`.  
  
    > [!NOTE]
    > `CArchiveException::generic` è stato deprecato. In alternativa, usare `genericException`. Se **generico** viene usato in un'applicazione e compilato con /clr, vi saranno errori di sintassi che non sono facili da decifrare.  
  
##  <a name="m_strfilename"></a>  CArchiveException::m_strFileName  
 Specifica il nome del file per questa condizione di eccezione.  
  
```  
CString m_strFileName;  
```  
  
## <a name="see-also"></a>Vedere anche  
 [CException (classe)](../../mfc/reference/cexception-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CArchive](../../mfc/reference/carchive-class.md)   
 [AfxThrowArchiveException](../../mfc/reference/exception-processing.md#afxthrowarchiveexception)   
 [Elaborazione delle eccezioni](../../mfc/reference/exception-processing.md)


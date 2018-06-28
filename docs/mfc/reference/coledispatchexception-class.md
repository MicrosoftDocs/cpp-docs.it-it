---
title: Classe COleDispatchException | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- COleDispatchException
- AFXDISP/COleDispatchException
- AFXDISP/COleDispatchException::m_dwHelpContext
- AFXDISP/COleDispatchException::m_strDescription
- AFXDISP/COleDispatchException::m_strHelpFile
- AFXDISP/COleDispatchException::m_strSource
- AFXDISP/COleDispatchException::m_wCode
dev_langs:
- C++
helpviewer_keywords:
- COleDispatchException [MFC], m_dwHelpContext
- COleDispatchException [MFC], m_strDescription
- COleDispatchException [MFC], m_strHelpFile
- COleDispatchException [MFC], m_strSource
- COleDispatchException [MFC], m_wCode
ms.assetid: 0e95c8be-e21a-490c-99ec-181c6a9a26d0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 65e7c613f5c4a4273208e30cd0fc6284ef4e420c
ms.sourcegitcommit: f1b051abb1de3fe96350be0563aaf4e960da13c3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/27/2018
ms.locfileid: "37037870"
---
# <a name="coledispatchexception-class"></a>COleDispatchException (classe)
Gestisce le eccezioni specifiche all'interfaccia OLE `IDispatch` che rappresentano una parte importante dell'automazione OLE.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COleDispatchException : public CException  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COleDispatchException::m_dwHelpContext](#m_dwhelpcontext)|Contesto della Guida per errore.|  
|[COleDispatchException::m_strDescription](#m_strdescription)|Descrizione dell'errore verbale.|  
|[COleDispatchException::m_strHelpFile](#m_strhelpfile)|File per l'utilizzo della Guida `m_dwHelpContext`.|  
|[COleDispatchException::m_strSource](#m_strsource)|Applicazione che ha generato l'eccezione.|  
|[COleDispatchException::m_wCode](#m_wcode)|`IDispatch`-codice di errore specifico.|  
  
## <a name="remarks"></a>Note  
 Come le altre classi di eccezione derivano dal `CException` classe base, `COleDispatchException` può essere utilizzato con le macro THROW THROW_LAST, TRY, CATCH, AND_CATCH ed END_CATCH.  
  
 In generale, è necessario chiamare [AfxThrowOleDispatchException](exception-processing.md#afxthrowoledispatchexception) per creare e generare un `COleDispatchException` oggetto.  
  
 Per ulteriori informazioni sulle eccezioni, vedere gli articoli [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md) e [eccezioni: eccezioni OLE](../../mfc/exceptions-ole-exceptions.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `COleDispatchException`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h  
  
##  <a name="m_dwhelpcontext"></a>  COleDispatchException::m_dwHelpContext  
 Identifica un contesto della Guida nella Guida dell'applicazione (. File HLP).  
  
```  
DWORD m_dwHelpContext;  
```  
  
### <a name="remarks"></a>Note  
 Questo membro è impostato dalla funzione [AfxThrowOleDispatchException](exception-processing.md#afxthrowoledispatchexception) quando viene generata un'eccezione.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [COleDispatchDriver:: CreateDispatch](../../mfc/reference/coledispatchdriver-class.md#createdispatch).  
  
##  <a name="m_strdescription"></a>  COleDispatchException::m_strDescription  
 Contiene una descrizione dell'errore verbale, ad esempio "Disco pieno".  
  
```  
CString m_strDescription;  
```  
  
### <a name="remarks"></a>Note  
 Questo membro è impostato dalla funzione [AfxThrowOleDispatchException](exception-processing.md#afxthrowoledispatchexception) quando viene generata un'eccezione.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [COleDispatchDriver:: CreateDispatch](../../mfc/reference/coledispatchdriver-class.md#createdispatch).  
  
##  <a name="m_strhelpfile"></a>  COleDispatchException::m_strHelpFile  
 Il framework inserisce in questa stringa con il nome del file della Guida dell'applicazione.  
  
```  
CString m_strHelpFile;  
```  
  
##  <a name="m_strsource"></a>  COleDispatchException::m_strSource  
 Il framework inserisce in questa stringa con il nome dell'applicazione che ha generato l'eccezione.  
  
```  
CString m_strSource;  
```  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio relativo [COleDispatchDriver:: CreateDispatch](../../mfc/reference/coledispatchdriver-class.md#createdispatch).  
  
##  <a name="m_wcode"></a>  COleDispatchException::m_wCode  
 Contiene un codice di errore specifico dell'applicazione.  
  
```  
WORD m_wCode;  
```  
  
### <a name="remarks"></a>Note  
 Questo membro è impostato dalla funzione [AfxThrowOleDispatchException](exception-processing.md#afxthrowoledispatchexception) quando viene generata un'eccezione.  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio MFC CALCDRIV](../../visual-cpp-samples.md)   
 [CException (classe)](../../mfc/reference/cexception-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleDispatchDriver](../../mfc/reference/coledispatchdriver-class.md)   
 [Classe COleException](../../mfc/reference/coleexception-class.md)

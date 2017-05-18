---
title: Classe COleDispatchException | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
- COleDispatchException class
- Automation, exceptions
- exceptions, OLE
- OLE exceptions, to IDispatch interface
ms.assetid: 0e95c8be-e21a-490c-99ec-181c6a9a26d0
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 0071e57b6c8f6bec73712186e8ff8baa9bfcc165
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

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
|[COleDispatchException::m_dwHelpContext](#m_dwhelpcontext)|Contesto della Guida per correggere l'errore.|  
|[COleDispatchException::m_strDescription](#m_strdescription)|Descrizione dell'errore verbale.|  
|[COleDispatchException::m_strHelpFile](#m_strhelpfile)|File per l'utilizzo della Guida `m_dwHelpContext`.|  
|[COleDispatchException::m_strSource](#m_strsource)|Applicazione che ha generato l'eccezione.|  
|[COleDispatchException::m_wCode](#m_wcode)|`IDispatch`-codice di errore specifico.|  
  
## <a name="remarks"></a>Note  
 Come le altre classi di eccezione derivano il `CException` classe base, `COleDispatchException` può essere utilizzato con il **generare**, `THROW_LAST`, **PROVARE**, **CATCH**, `AND_CATCH`, e `END_CATCH` macro.  
  
 In generale, è necessario chiamare [AfxThrowOleDispatchException](exception-processing.md#afxthrowoledispatchexception) per creare e generare un `COleDispatchException` oggetto.  
  
 Per ulteriori informazioni sulle eccezioni, vedere gli articoli [gestione delle eccezioni (MFC)](../../mfc/exception-handling-in-mfc.md) e [eccezioni: eccezioni OLE](../../mfc/exceptions-ole-exceptions.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `COleDispatchException`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdisp.h  
  
##  <a name="m_dwhelpcontext"></a>COleDispatchException::m_dwHelpContext  
 Identifica un contesto della Guida nella Guida in linea dell'applicazione (. File HLP).  
  
```  
DWORD m_dwHelpContext;  
```  
  
### <a name="remarks"></a>Note  
 Questo membro è impostato dalla funzione [AfxThrowOleDispatchException](exception-processing.md#afxthrowoledispatchexception) quando viene generata un'eccezione.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [COleDispatchDriver::CreateDispatch](../../mfc/reference/coledispatchdriver-class.md#createdispatch).  
  
##  <a name="m_strdescription"></a>COleDispatchException::m_strDescription  
 Contiene una descrizione dell'errore verbale, ad esempio "Disco pieno".  
  
```  
CString m_strDescription;  
```  
  
### <a name="remarks"></a>Note  
 Questo membro è impostato dalla funzione [AfxThrowOleDispatchException](exception-processing.md#afxthrowoledispatchexception) quando viene generata un'eccezione.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [COleDispatchDriver::CreateDispatch](../../mfc/reference/coledispatchdriver-class.md#createdispatch).  
  
##  <a name="m_strhelpfile"></a>COleDispatchException::m_strHelpFile  
 Il framework inserisce in questa stringa con il nome del file della Guida dell'applicazione.  
  
```  
CString m_strHelpFile;  
```  
  
##  <a name="m_strsource"></a>COleDispatchException::m_strSource  
 Il framework inserisce in questa stringa con il nome dell'applicazione che ha generato l'eccezione.  
  
```  
CString m_strSource;  
```  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [COleDispatchDriver::CreateDispatch](../../mfc/reference/coledispatchdriver-class.md#createdispatch).  
  
##  <a name="m_wcode"></a>COleDispatchException::m_wCode  
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
 [COleException (classe)](../../mfc/reference/coleexception-class.md)


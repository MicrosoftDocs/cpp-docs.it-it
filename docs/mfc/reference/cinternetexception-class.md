---
title: Classe CInternetException | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CInternetException
- AFXINET/CInternetException
- AFXINET/CInternetException::CInternetException
- AFXINET/CInternetException::m_dwContext
- AFXINET/CInternetException::m_dwError
dev_langs: C++
helpviewer_keywords:
- CInternetException [MFC], CInternetException
- CInternetException [MFC], m_dwContext
- CInternetException [MFC], m_dwError
ms.assetid: 44fb3cbe-523e-4754-8843-a77909990b14
caps.latest.revision: "22"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8caa275af4469d45672125677d960b71212fe3de
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cinternetexception-class"></a>Classe CInternetException
Rappresenta una condizione di eccezione correlata a un'operazione su Internet.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CInternetException : public CException  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInternetException::CInternetException](#cinternetexception)|Costruisce un oggetto `CInternetException`.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CInternetException::m_dwContext](#m_dwcontext)|Il valore di contesto associato all'operazione che ha causato l'eccezione.|  
|[CInternetException::m_dwError](#m_dwerror)|Errore che ha causato l'eccezione.|  
  
## <a name="remarks"></a>Note  
 La `CInternetException` classe include due membri dati pubblici: una contiene il codice di errore associato all'eccezione e l'altro contiene l'identificatore di contesto dell'applicazione Internet associato all'errore.  
  
 Per ulteriori informazioni sugli identificatori di contesto per le applicazioni Internet, vedere l'articolo [Internet programmazione con WinInet](../../mfc/win32-internet-extensions-wininet.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `CInternetException`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxinet. h  
  
##  <a name="cinternetexception"></a>CInternetException::CInternetException  
 Questa funzione membro viene chiamata quando un `CInternetException` viene creato l'oggetto.  
  
```  
CInternetException(DWORD dwError);
```  
  
### <a name="parameters"></a>Parametri  
 `dwError`  
 Errore che ha causato l'eccezione.  
  
### <a name="remarks"></a>Note  
 Per generare un CInternetException, chiamare la funzione globale MFC [AfxThrowInternetException](internet-url-parsing-globals.md#afxthrowinternetexception).  
  
##  <a name="m_dwcontext"></a>CInternetException::m_dwContext  
 Il valore di contesto associato all'operazione Internet correlato.  
  
```  
DWORD_PTR m_dwContext;  
```  
  
### <a name="remarks"></a>Note  
 L'identificatore di contesto è specificata in origine [CInternetSession](../../mfc/reference/cinternetsession-class.md) e passato da MFC per [CInternetConnection](../../mfc/reference/cinternetconnection-class.md)- e [CInternetFile](../../mfc/reference/cinternetfile-class.md)-classi derivate. È possibile sostituire questa impostazione predefinita e assegnare a qualsiasi `dwContext` parametro un valore di propria scelta. `dwContext`è associata a qualsiasi operazione dell'oggetto specificato. `dwContext`Identifica le informazioni sullo stato dell'operazione restituite da [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback).  
  
##  <a name="m_dwerror"></a>CInternetException::m_dwError  
 Errore che ha causato l'eccezione.  
  
```  
DWORD m_dwError;  
```  
  
### <a name="remarks"></a>Note  
 Questo valore di errore può essere un sistema di codice di errore, vedere WINERROR. H o un valore di errore di WININET. H.  
  
 Per un elenco di codici di errore Win32, vedere [codici di errore](http://msdn.microsoft.com/library/windows/desktop/ms681381). Per un elenco di messaggi di errore specifiche, vedere. In entrambi gli argomenti sono in Windows SDK.  
  
## <a name="see-also"></a>Vedere anche  
 [CException (classe)](../../mfc/reference/cexception-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CException](../../mfc/reference/cexception-class.md)

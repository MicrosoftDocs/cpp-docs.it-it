---
title: Classe CInternetException | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CInternetException
- AFXINET/CInternetException
- AFXINET/CInternetException::CInternetException
- AFXINET/CInternetException::m_dwContext
- AFXINET/CInternetException::m_dwError
dev_langs:
- C++
helpviewer_keywords:
- CInternetException [MFC], CInternetException
- CInternetException [MFC], m_dwContext
- CInternetException [MFC], m_dwError
ms.assetid: 44fb3cbe-523e-4754-8843-a77909990b14
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6908b72f30b3a2561f7091b912e8144f2b763cc4
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33366896"
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
  
##  <a name="cinternetexception"></a>  CInternetException::CInternetException  
 Questa funzione membro viene chiamata quando un `CInternetException` viene creato l'oggetto.  
  
```  
CInternetException(DWORD dwError);
```  
  
### <a name="parameters"></a>Parametri  
 `dwError`  
 Errore che ha causato l'eccezione.  
  
### <a name="remarks"></a>Note  
 Per generare un CInternetException, chiamare la funzione globale MFC [AfxThrowInternetException](internet-url-parsing-globals.md#afxthrowinternetexception).  
  
##  <a name="m_dwcontext"></a>  CInternetException::m_dwContext  
 Il valore di contesto associato all'operazione Internet correlato.  
  
```  
DWORD_PTR m_dwContext;  
```  
  
### <a name="remarks"></a>Note  
 L'identificatore di contesto è specificata in origine [CInternetSession](../../mfc/reference/cinternetsession-class.md) e passato da MFC per [CInternetConnection](../../mfc/reference/cinternetconnection-class.md)- e [CInternetFile](../../mfc/reference/cinternetfile-class.md)-classi derivate. È possibile sostituire questa impostazione predefinita e assegnare a qualsiasi `dwContext` parametro un valore di propria scelta. `dwContext` viene associato a qualsiasi operazione dell'oggetto specificato. `dwContext` Identifica le informazioni sullo stato dell'operazione restituite da [CInternetSession:: OnStatusCallback](../../mfc/reference/cinternetsession-class.md#onstatuscallback).  
  
##  <a name="m_dwerror"></a>  CInternetException::m_dwError  
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

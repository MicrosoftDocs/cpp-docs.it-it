---
title: Classe CHtmlEditCtrl | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CHtmlEditCtrl
- AFXHTML/CHtmlEditCtrl
- AFXHTML/CHtmlEditCtrl::CHtmlEditCtrl
- AFXHTML/CHtmlEditCtrl::Create
- AFXHTML/CHtmlEditCtrl::GetDHtmlDocument
- AFXHTML/CHtmlEditCtrl::GetStartDocument
dev_langs:
- C++
helpviewer_keywords:
- CHtmlEditCtrl [MFC], CHtmlEditCtrl
- CHtmlEditCtrl [MFC], Create
- CHtmlEditCtrl [MFC], GetDHtmlDocument
- CHtmlEditCtrl [MFC], GetStartDocument
ms.assetid: 0fc4a238-b05f-4874-9edc-6a6701f064d9
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f3ea794bfcb3d7e62a53ed8423918e5448990dae
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="chtmleditctrl-class"></a>Classe CHtmlEditCtrl
Fornisce la funzionalità del controllo ActiveX WebBrowser in una finestra MFC.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CHtmlEditCtrl: public CWnd,   
    public CHtmlEditCtrlBase<CHtmlEditCtrl>  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHtmlEditCtrl::CHtmlEditCtrl](#chtmleditctrl)|Costruisce un oggetto `CHtmlEditCtrl`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHtmlEditCtrl::Create](#create)|Crea un controllo WebBrowser ActiveX e lo collega al `CHtmlEditCtrl` oggetto. Questa funzione inserisce automaticamente il controllo WebBrowser ActiveX in modalità di modifica.|  
|[CHtmlEditCtrl::GetDHtmlDocument](#getdhtmldocument)|Recupera il [IHTMLDocument2](https://msdn.microsoft.com/library/aa752574.aspx) interfaccia nel documento attualmente caricato nel controllo WebBrowser indipendente.|  
|[CHtmlEditCtrl::GetStartDocument](#getstartdocument)|Recupera l'URL di un documento predefinito da caricare nel controllo WebBrowser indipendente.|  
  
## <a name="remarks"></a>Note  
 Il controllo WebBrowser ospitato controllo viene automaticamente inserito in modalità di modifica dopo averlo creato.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CHtmlEditCtrlBase](../../mfc/reference/chtmleditctrlbase-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CHtmlEditCtrl`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxhtml.h  
  
##  <a name="chtmleditctrl"></a>CHtmlEditCtrl::CHtmlEditCtrl  
 Costruisce un oggetto `CHtmlEditCtrl`.  
  
```  
CHtmlEditCtrl();
```  
  
##  <a name="create"></a>CHtmlEditCtrl::Create  
 Crea un controllo WebBrowser ActiveX e lo collega al `CHtmlEditCtrl` oggetto. WebBrowser ActiveX controllo passa automaticamente a un documento predefinito e quindi viene inserito nella modalità di modifica da questa funzione.  
  
```  
virtual BOOL Create(
    LPCTSTR lpszWindowName,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    int nID,  
    CCreateContext* pContext = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszWindowName`  
 Questo parametro è inutilizzato.  
  
 `dwStyle`  
 Questo parametro è inutilizzato.  
  
 `rect`  
 Specifica dimensioni e la posizione del controllo.  
  
 `pParentWnd`  
 Specifica la finestra del controllo padre. Non deve essere **NULL**.  
  
 `nID`  
 Specifica l'ID. del controllo  
  
 `pContext`  
 Questo parametro è inutilizzato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** in caso di esito positivo **FALSE** in caso di errore.  
  
##  <a name="getdhtmldocument"></a>CHtmlEditCtrl::GetDHtmlDocument  
 Recupera il [IHTMLDocument2](https://msdn.microsoft.com/library/aa752574.aspx) interfaccia nel documento attualmente caricato nel controllo WebBrowser indipendente  
  
```  
BOOL GetDHtmlDocument(IHTMLDocument2** ppDocument) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `ppDocument`  
 L'interfaccia a documenti.  
  
##  <a name="getstartdocument"></a>CHtmlEditCtrl::GetStartDocument  
 Recupera l'URL di un documento predefinito da caricare nel controllo WebBrowser indipendente.  
  
```  
virtual LPCTSTR GetStartDocument();
```  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)


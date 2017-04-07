---
title: Classe CHtmlEditCtrl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
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
- CHtmlEditCtrl class
ms.assetid: 0fc4a238-b05f-4874-9edc-6a6701f064d9
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
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 4aca52508663e94ee9a1b55843ad05613aa40b0b
ms.lasthandoff: 02/24/2017

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
|[CHtmlEditCtrl::Create](#create)|Crea un controllo WebBrowser ActiveX e lo collega a di `CHtmlEditCtrl` oggetto. Questa funzione inserisce automaticamente il controllo WebBrowser ActiveX in modalità di modifica.|  
|[CHtmlEditCtrl::GetDHtmlDocument](#getdhtmldocument)|Recupera il [IHTMLDocument2](https://msdn.microsoft.com/library/aa752574.aspx) interfaccia per il documento attualmente caricato nel controllo WebBrowser indipendente.|  
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
 Crea un controllo WebBrowser ActiveX e lo collega a di `CHtmlEditCtrl` oggetto. WebBrowser ActiveX controllo si sposta automaticamente su un documento predefinito e quindi viene posizionato modalità di modifica da questa funzione.  
  
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
 Specifica le dimensioni e posizione del controllo.  
  
 `pParentWnd`  
 Specifica la finestra del controllo padre. Non deve essere **NULL**.  
  
 `nID`  
 Specifica l'ID. del controllo  
  
 `pContext`  
 Questo parametro è inutilizzato.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce **TRUE** esito positivo, **FALSE** in caso di errore.  
  
##  <a name="getdhtmldocument"></a>CHtmlEditCtrl::GetDHtmlDocument  
 Recupera il [IHTMLDocument2](https://msdn.microsoft.com/library/aa752574.aspx) interfaccia per il documento attualmente caricato nel controllo WebBrowser indipendente  
  
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
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)



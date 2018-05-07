---
title: Classe CHtmlEditView | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CHtmlEditView
- AFXHTML/CHtmlEditView
- AFXHTML/CHtmlEditView::CHtmlEditView
- AFXHTML/CHtmlEditView::Create
- AFXHTML/CHtmlEditView::GetDHtmlDocument
- AFXHTML/CHtmlEditView::GetStartDocument
dev_langs:
- C++
helpviewer_keywords:
- CHtmlEditView [MFC], CHtmlEditView
- CHtmlEditView [MFC], Create
- CHtmlEditView [MFC], GetDHtmlDocument
- CHtmlEditView [MFC], GetStartDocument
ms.assetid: 166c8ba8-3fb5-4dd7-a9ea-5bca662d00f6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 10f474ce860bf5d9071a93f17654123f4777efa7
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="chtmleditview-class"></a>Classe CHtmlEditView
Fornisce la funzionalità della piattaforma di modifica WebBrowser nel contesto dell'architettura documento/visualizzazione di MFC.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CHtmlEditView : public CHtmlView, public CHtmlEditCtrlBase<CHtmlEditView>  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHtmlEditView::CHtmlEditView](#chtmleditview)|Costruisce un oggetto `CHtmlEditView`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CHtmlEditView::Create](#create)|Crea un nuovo oggetto finestra.|  
|[CHtmlEditView::GetDHtmlDocument](#getdhtmldocument)|Restituisce il **IHTMLDocument2** interfaccia nel documento corrente.|  
|[CHtmlEditView::GetStartDocument](#getstartdocument)|Recupera il nome del documento predefinito per questa vista.|  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 [CScrollView](../../mfc/reference/cscrollview-class.md)  
  
 [CFormView](../../mfc/reference/cformview-class.md)  
  
 [CHtmlEditCtrlBase](../../mfc/reference/chtmleditctrlbase-class.md)  
  
 [CHtmlView](../../mfc/reference/chtmlview-class.md)  
  
 `CHtmlEditView`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxhtml.h  
  
##  <a name="chtmleditview"></a>  CHtmlEditView::CHtmlEditView  
 Costruisce un oggetto `CHtmlEditView`.  
  
```  
CHtmlEditView();
```  
  
##  <a name="create"></a>  CHtmlEditView::Create  
 Crea un nuovo oggetto finestra.  
  
```  
virtual BOOL Create(
    LPCTSTR lpszClassName,  
    LPCTSTR lpszWindowName,  
    DWORD dwStyle,  
    const RECT& rect,  
    CWnd* pParentWnd,  
    UINT nID,  
    CCreateContext* pContext = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszClassName`  
 Punta a una stringa di caratteri con terminazione null che denomina la classe Windows. Il nome della classe può essere qualsiasi nome registrato con il [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) funzione globale o **RegisterClass** funzione di Windows. Se **NULL**, utilizza il valore predefinito [CFrameWnd](../../mfc/reference/cframewnd-class.md) attributi.  
  
 `lpszWindowName`  
 Punta a una stringa di caratteri con terminazione null che rappresenta il nome della finestra.  
  
 `dwStyle`  
 Specifica gli attributi di stile della finestra. Per impostazione predefinita, il **WS_VISIBLE** e **WS_CHILD** vengono impostati gli stili di Windows.  
  
 `rect`  
 Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che specifica le dimensioni e la posizione della finestra. Il `rectDefault` valore consente di specificare le dimensioni e posizione della nuova finestra.  
  
 `pParentWnd`  
 Puntatore alla finestra padre del controllo.  
  
 `nID`  
 Il numero ID della vista. Per impostazione predefinita, **AFX_IDW_PANE_FIRST**.  
  
 `pContext`  
 Un puntatore a un [CCreateContext](../../mfc/reference/ccreatecontext-structure.md). **NULL** per impostazione predefinita.  
  
### <a name="remarks"></a>Note  
 Questo metodo chiama anche il controllo WebBrowser indipendente **Naviga** per caricare un documento predefinito (vedere [CHtmlEditView::GetStartDocument](#getstartdocument)).  
  
##  <a name="getdhtmldocument"></a>  CHtmlEditView::GetDHtmlDocument  
 Restituisce il **IHTMLDocument2** interfaccia nel documento corrente.  
  
```  
BOOL GetDHtmlDocument(IHTMLDocument2** ppDocument) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `ppDocument`  
 Il [IHTMLDocument2](https://msdn.microsoft.com/library/aa752574.aspx) interfaccia.  
  
##  <a name="getstartdocument"></a>  CHtmlEditView::GetStartDocument  
 Recupera il nome del documento predefinito per questa vista.  
  
```  
virtual LPCTSTR GetStartDocument();
```  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio HTMLEdit](../../visual-cpp-samples.md)   
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



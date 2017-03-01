---
title: Classe CHtmlEditView | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CHtmlEditView
dev_langs:
- C++
helpviewer_keywords:
- CHtmlEditView class
ms.assetid: 166c8ba8-3fb5-4dd7-a9ea-5bca662d00f6
caps.latest.revision: 24
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
ms.openlocfilehash: d0194d48fe214d7c90b24ff8ce4ef10116cd536a
ms.lasthandoff: 02/24/2017

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
|[CHtmlEditView::GetDHtmlDocument](#getdhtmldocument)|Restituisce il **IHTMLDocument2** interfaccia sul documento corrente.|  
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
  
##  <a name="a-namechtmleditviewa--chtmleditviewchtmleditview"></a><a name="chtmleditview"></a>CHtmlEditView::CHtmlEditView  
 Costruisce un oggetto `CHtmlEditView`.  
  
```  
CHtmlEditView();
```  
  
##  <a name="a-namecreatea--chtmleditviewcreate"></a><a name="create"></a>CHtmlEditView::Create  
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
 Punta a una stringa di caratteri con terminazione null che denomina la classe di Windows. Il nome della classe può essere qualsiasi nome registrato con il [AfxRegisterWndClass](application-information-and-management.md#afxregisterwndclass) funzione globale o **RegisterClass** funzione di Windows. Se **NULL**, utilizza il valore predefinito predefinito [CFrameWnd](../../mfc/reference/cframewnd-class.md) attributi.  
  
 `lpszWindowName`  
 Punta a una stringa di caratteri con terminazione null che rappresenta il nome della finestra.  
  
 `dwStyle`  
 Specifica gli attributi di stile di finestra. Per impostazione predefinita, il **WS_VISIBLE** e **WS_CHILD** gli stili di Windows vengono impostati.  
  
 `rect`  
 Un riferimento a un [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) struttura che specifica le dimensioni e posizione della finestra. Il `rectDefault` valore consente di specificare le dimensioni e posizione della nuova finestra.  
  
 `pParentWnd`  
 Puntatore alla finestra padre del controllo.  
  
 `nID`  
 Il numero ID della vista. Per impostazione predefinita, **AFX_IDW_PANE_FIRST**.  
  
 `pContext`  
 Un puntatore a un [CCreateContext](../../mfc/reference/ccreatecontext-structure.md). **NULL** per impostazione predefinita.  
  
### <a name="remarks"></a>Note  
 Questo metodo verrà chiamato anche il controllo WebBrowser contenuti **Navigate** per caricare un documento predefinito (vedere [CHtmlEditView::GetStartDocument](#getstartdocument)).  
  
##  <a name="a-namegetdhtmldocumenta--chtmleditviewgetdhtmldocument"></a><a name="getdhtmldocument"></a>CHtmlEditView::GetDHtmlDocument  
 Restituisce il **IHTMLDocument2** interfaccia sul documento corrente.  
  
```  
BOOL GetDHtmlDocument(IHTMLDocument2** ppDocument) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `ppDocument`  
 Il [IHTMLDocument2](https://msdn.microsoft.com/library/aa752574.aspx) interfaccia.  
  
##  <a name="a-namegetstartdocumenta--chtmleditviewgetstartdocument"></a><a name="getstartdocument"></a>CHtmlEditView::GetStartDocument  
 Recupera il nome del documento predefinito per questa vista.  
  
```  
virtual LPCTSTR GetStartDocument();
```  
  
## <a name="see-also"></a>Vedere anche  
 [Esempio HTMLEdit](../../visual-cpp-samples.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)




---
title: Classe CCtrlView | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CCtrlView
- AFXWIN/CCtrlView
- AFXWIN/CCtrlView::CCtrlView
- AFXWIN/CCtrlView::OnDraw
- AFXWIN/CCtrlView::PreCreateWindow
- AFXWIN/CCtrlView::m_dwDefaultStyle
- AFXWIN/CCtrlView::m_strClass
dev_langs:
- C++
helpviewer_keywords:
- views, and common controls
- controls [MFC], common
- CCtrlView class
ms.assetid: ff488596-1e71-451f-8fec-b0831a7b44e0
caps.latest.revision: 20
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
ms.openlocfilehash: 569044de59dc3ccd73157abc86855beef57cb558
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="cctrlview-class"></a>Classe CCtrlView
Adatta l'architettura documento/visualizzazione ai controlli comuni supportati da Windows 98 e Windows NT versione 3.51 e successive.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CCtrlView : public CView  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCtrlView::CCtrlView](#cctrlview)|Costruisce un oggetto `CCtrlView`.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCtrlView::OnDraw](#ondraw)|Chiamato dal framework di disegnare utilizzando il contesto di dispositivo specificato.|  
|[CCtrlView::PreCreateWindow](#precreatewindow)|Chiamata eseguita prima della creazione della finestra di Windows collegata a questo oggetto `CCtrlView`.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CCtrlView::m_dwDefaultStyle](#m_dwdefaultstyle)|Contiene lo stile predefinito per la classe di visualizzazione.|  
|[CCtrlView::m_strClass](#m_strclass)|Contiene il nome di classe di Windows per la classe di visualizzazione.|  
  
## <a name="remarks"></a>Note  
 La classe `CCtrlView` i relativi derivati [CEditView](../../mfc/reference/ceditview-class.md), [CListView](../../mfc/reference/clistview-class.md), [CTreeView](../../mfc/reference/ctreeview-class.md), e [CRichEditView](../../mfc/reference/cricheditview-class.md), adattare l'architettura documento / visualizzazione per i nuovi controlli comuni supportati da Windows 95/98 e Windows NT versione 3.51 e successive. Per ulteriori informazioni sull'architettura documento / visualizzazione, vedere [architettura documento/visualizzazione](../../mfc/document-view-architecture.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 `CCtrlView`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cctrlview"></a>CCtrlView::CCtrlView  
 Costruisce un oggetto `CCtrlView`.  
  
```  
CCtrlView(
    LPCTSTR lpszClass,  
    DWORD dwStyle);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszClass`  
 Nome della classe Windows della classe di visualizzazione.  
  
 `dwStyle`  
 Stile della classe di visualizzazione.  
  
### <a name="remarks"></a>Note  
 Il framework chiama il costruttore quando si crea una nuova finestra cornice o una finestra divisa. Eseguire l'override [CView:: OnInitialUpdate](../../mfc/reference/cview-class.md#oninitialupdate) per inizializzare la visualizzazione dopo il documento è associato. Chiamare [CWnd:: Create](../../mfc/reference/cwnd-class.md#create) o [CWnd::CreateEx](../../mfc/reference/cwnd-class.md#createex) per creare l'oggetto di Windows.  
  
##  <a name="m_strclass"></a>CCtrlView::m_strClass  
 Contiene il nome di classe di Windows per la classe di visualizzazione.  
  
```  
CString m_strClass;  
```  
  
##  <a name="m_dwdefaultstyle"></a>CCtrlView::m_dwDefaultStyle  
 Contiene lo stile predefinito per la classe di visualizzazione.  
  
```  
DWORD m_dwDefaultStyle;  
```  
  
### <a name="remarks"></a>Note  
 Questo stile viene applicato quando viene creata una finestra.  
  
##  <a name="ondraw"></a>CCtrlView::OnDraw  
 Chiamato dal framework per disegnare il contenuto di `CCtrlView` oggetto utilizzando il contesto di dispositivo specificato.  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 `pDC`  
 Puntatore al contesto di dispositivo in cui si verifica il disegno.  
  
### <a name="remarks"></a>Note  
 `OnDraw`in genere viene chiamato per la visualizzazione su schermo, passando un contesto di dispositivo dello schermo specificato da `pDC`.  
  
##  <a name="precreatewindow"></a>CCtrlView::PreCreateWindow  
 Chiamata eseguita prima della creazione della finestra di Windows collegata a questo oggetto `CWnd`.  
  
```  
virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
```  
  
### <a name="parameters"></a>Parametri  
 *cs*  
 Oggetto [CREATESTRUCT](http://msdn.microsoft.com/library/windows/desktop/ms632603) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la creazione della finestra deve continuare; 0 per indicare un errore di creazione.  
  
### <a name="remarks"></a>Note  
 Mai chiamare direttamente questa funzione.  
  
 L'implementazione predefinita di questa funzione controlla un **NULL** nome classe della finestra e sostituisce un valore predefinito appropriato. Eseguire l'override di questa funzione membro per modificare il `CREATESTRUCT` struttura prima della creazione.  
  
 Ogni classe derivata da `CCtrlView` aggiunge funzionalità specifiche per la sostituzione di `PreCreateWindow`. Per impostazione predefinita, tali derivazioni di `PreCreateWindow` non sono documentate. Per determinare gli stili appropriati per ogni classe e le interdipendenze tra gli stili, è possibile esaminare il codice sorgente MFC per classe di base dell'applicazione. Se si sceglie di eseguire l'override `PreCreateWindow`, è possibile determinare se gli stili utilizzati nella classe di base dell'applicazione forniscono le funzionalità necessarie tramite le informazioni raccolte dal codice sorgente MFC.  
  
 Per ulteriori informazioni sulla modifica degli stili finestra, vedere il [modifica degli stili di una finestra creata da MFC](../../mfc/changing-the-styles-of-a-window-created-by-mfc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [CView (classe)](../../mfc/reference/cview-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CTreeView (classe)](../../mfc/reference/ctreeview-class.md)   
 [CListView (classe)](../../mfc/reference/clistview-class.md)   
 [CRichEditView (classe)](../../mfc/reference/cricheditview-class.md)


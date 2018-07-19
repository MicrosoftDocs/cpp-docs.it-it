---
title: Classe CCtrlView | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
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
- CCtrlView [MFC], CCtrlView
- CCtrlView [MFC], OnDraw
- CCtrlView [MFC], PreCreateWindow
- CCtrlView [MFC], m_dwDefaultStyle
- CCtrlView [MFC], m_strClass
ms.assetid: ff488596-1e71-451f-8fec-b0831a7b44e0
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 80e89573e67113900db7b35ffe3f1189de1c524a
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37336332"
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
|[CCtrlView::OnDraw](#ondraw)|Chiamata eseguita dal framework per disegnare usando il contesto di dispositivo specificato.|  
|[CCtrlView::PreCreateWindow](#precreatewindow)|Chiamata eseguita prima della creazione della finestra di Windows collegata a questo oggetto `CCtrlView`.|  
  
### <a name="protected-data-members"></a>Membri dati protetti  
  
|nome|Descrizione|  
|----------|-----------------|  
|[CCtrlView::m_dwDefaultStyle](#m_dwdefaultstyle)|Contiene lo stile predefinito per la classe di visualizzazione.|  
|[CCtrlView::m_strClass](#m_strclass)|Contiene il nome della classe di Windows per la classe di visualizzazione.|  
  
## <a name="remarks"></a>Note  
 La classe `CCtrlView` e i suoi derivati [CEditView](../../mfc/reference/ceditview-class.md), [CListView](../../mfc/reference/clistview-class.md), [CTreeView](../../mfc/reference/ctreeview-class.md), e [CRichEditView](../../mfc/reference/cricheditview-class.md), adattare il architettura documento / visualizzazione per i nuovi controlli comuni supportati da Windows 95 o 98 e Windows NT versione 3.51 e successive. Per altre informazioni sull'architettura documento / visualizzazione, vedere [architettura documento/visualizzazione](../../mfc/document-view-architecture.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CView](../../mfc/reference/cview-class.md)  
  
 `CCtrlView`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
##  <a name="cctrlview"></a>  CCtrlView::CCtrlView  
 Costruisce un oggetto `CCtrlView`.  
  
```  
CCtrlView(
    LPCTSTR lpszClass,  
    DWORD dwStyle);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszClass*  
 Nome della classe Windows della classe di visualizzazione.  
  
 *dwStyle*  
 Stile della classe di visualizzazione.  
  
### <a name="remarks"></a>Note  
 Il framework chiama il costruttore quando si crea una nuova finestra del frame o una finestra divisa. Eseguire l'override [CView:: OnInitialUpdate](../../mfc/reference/cview-class.md#oninitialupdate) per inizializzare la visualizzazione dopo il documento è associato. Chiamare [CWnd:: Create](../../mfc/reference/cwnd-class.md#create) oppure [CWnd::CreateEx](../../mfc/reference/cwnd-class.md#createex) per creare l'oggetto di Windows.  
  
##  <a name="m_strclass"></a>  CCtrlView::m_strClass  
 Contiene il nome della classe di Windows per la classe di visualizzazione.  
  
```  
CString m_strClass;  
```  
  
##  <a name="m_dwdefaultstyle"></a>  CCtrlView::m_dwDefaultStyle  
 Contiene lo stile predefinito per la classe di visualizzazione.  
  
```  
DWORD m_dwDefaultStyle;  
```  
  
### <a name="remarks"></a>Note  
 Questo stile viene applicato quando viene creata una finestra.  
  
##  <a name="ondraw"></a>  CCtrlView::OnDraw  
 Chiamato dal framework per disegnare il contenuto del `CCtrlView` oggetto utilizzando il contesto di dispositivo specificato.  
  
```  
virtual void OnDraw(CDC* pDC);
```  
  
### <a name="parameters"></a>Parametri  
 *pDC*  
 Puntatore al contesto di dispositivo in cui si verifica il disegno.  
  
### <a name="remarks"></a>Note  
 `OnDraw` in genere viene chiamato per la visualizzazione su schermo, passando un contesto di dispositivo dello schermo specificato da *pDC*.  
  
##  <a name="precreatewindow"></a>  CCtrlView::PreCreateWindow  
 Chiamata eseguita prima della creazione della finestra di Windows collegata a questo oggetto `CWnd`.  
  
```  
virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
```  
  
### <a name="parameters"></a>Parametri  
 *cs*  
 Oggetto [CREATESTRUCT](http://msdn.microsoft.com/library/windows/desktop/ms632603) struttura.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la creazione di finestre deve continuare; 0 per indicare un errore di creazione.  
  
### <a name="remarks"></a>Note  
 Mai chiamare direttamente questa funzione.  
  
 L'implementazione predefinita di questa funzione verifica la presenza di un nome di classe di finestra NULL e sostituisce un valore appropriato predefinito. Eseguire l'override di questa funzione membro per modificare il `CREATESTRUCT` struttura prima che venga creata la finestra.  
  
 Ogni classe derivata da `CCtrlView` aggiunge la propria funzionalità per la sostituzione di `PreCreateWindow`. Per impostazione predefinita, tali derivazioni di `PreCreateWindow` non sono documentate. Per determinare gli stili appropriati a ogni classe e le interdipendenze tra gli stili, è possibile esaminare il codice sorgente MFC per la classe di base dell'applicazione. Se si sceglie di eseguire l'override `PreCreateWindow`, è possibile determinare se gli stili usati nella classe di base dell'applicazione forniscono le funzionalità necessarie mediante le informazioni raccolte dal codice sorgente MFC.  
  
 Per altre informazioni sulla modifica degli stili finestra, vedere la [modifica degli stili di una finestra creata da MFC](../../mfc/changing-the-styles-of-a-window-created-by-mfc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CView](../../mfc/reference/cview-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CTreeView](../../mfc/reference/ctreeview-class.md)   
 [CListView (classe)](../../mfc/reference/clistview-class.md)   
 [Classe CRichEditView](../../mfc/reference/cricheditview-class.md)

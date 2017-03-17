---
title: Classe CMFCToolBarEditBoxButton | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCToolBarEditBoxButton
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::CMFCToolBarEditBoxButton
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::CanBeStretched
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::CopyFrom
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::GetByCmd
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::GetContentsAll
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::GetContextMenuID
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::GetEditBorder
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::GetHwnd
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::GetInvalidateRect
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::HaveHotBorder
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::IsFlatMode
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::NotifyCommand
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnAddToCustomizePage
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnChangeParentWnd
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnClick
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnCtlColor
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnGlobalFontsChanged
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnMove
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnShow
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnSize
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::OnUpdateToolTip
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::SetContextMenuID
- AFXTOOLBAREDITBOXBUTTON/CMFCToolBarEditBoxButton::SetFlatMode
dev_langs:
- C++
helpviewer_keywords:
- CMFCToolBarEditBoxButton class
- SetACCData method
- OnCalculateSize method
- OnDraw method
- OnDrawOnCustomizeList method
- Serialize method
ms.assetid: b21d9b67-6bf7-4ca9-bd62-b237756e0ab3
caps.latest.revision: 28
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
ms.openlocfilehash: 7f79c69c9f370f2d79752ed141affac3f97ce716
ms.lasthandoff: 02/24/2017

---
# <a name="cmfctoolbareditboxbutton-class"></a>Classe CMFCToolBarEditBoxButton
Un pulsante della barra degli strumenti contenente un controllo di modifica ( [CEdit Class](../../mfc/reference/cedit-class.md)).  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCToolBarEditBoxButton : public CMFCToolBarButton  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarEditBoxButton::CMFCToolBarEditBoxButton](#cmfctoolbareditboxbutton)|Costruisce un oggetto `CMFCToolBarEditBoxButton`.|  
|`CMFCToolBarEditBoxButton::~CMFCToolBarEditBoxButton`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarEditBoxButton::CanBeStretched](#canbestretched)|Specifica se un utente è possibile estendere il pulsante durante la personalizzazione. (Esegue l'override di [CMFCToolBarButton::CanBeStretched](../../mfc/reference/cmfctoolbarbutton-class.md#canbestretched).)|  
|[CMFCToolBarEditBoxButton::CopyFrom](#copyfrom)|Copia le proprietà di un altro pulsante della barra degli strumenti al pulsante corrente. (Esegue l'override di [CMFCToolBarButton::CopyFrom](../../mfc/reference/cmfctoolbarbutton-class.md#copyfrom).)|  
|`CMFCToolBarEditBoxButton::`[CMFCToolBarEditBoxButton::CreateEdit](#createedit)|Crea un nuovo controllo di modifica nel pulsante.|  
|`CMFCToolBarEditBoxButton::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|[CMFCToolBarEditBoxButton::GetByCmd](#getbycmd)|Recupera il primo `CMFCToolBarEditBoxButton` oggetto nell'applicazione con l'ID di comando specificato.|  
|[CMFCToolBarEditBoxButton::GetContentsAll](#getcontentsall)|Recupera il testo del primo controllo di modifica casella degli strumenti con l'ID di comando specificato.|  
|[CMFCToolBarEditBoxButton::GetContextMenuID](#getcontextmenuid)|Recupera l'ID risorsa del menu di scelta rapida che viene associato al pulsante.|  
|[CMFCToolBarEditBoxButton::GetEditBorder](#geteditborder)|Recupera il rettangolo di delimitazione della parte di modifica del pulsante casella di modifica.|  
|`CMFCToolBarEditBoxButton::`[CMFCToolBarEditBoxButton::GetEditBox](#geteditbox)|Restituisce un puntatore al controllo di modifica che viene incorporato nel pulsante.|  
|[CMFCToolBarEditBoxButton::GetHwnd](#gethwnd)|Recupera l'handle della finestra associata con il pulsante della barra degli strumenti. (Esegue l'override di [CMFCToolBarButton::GetHwnd](../../mfc/reference/cmfctoolbarbutton-class.md#gethwnd).)|  
|[CMFCToolBarEditBoxButton::GetInvalidateRect](#getinvalidaterect)|Recupera l'area dell'area client del pulsante che deve essere ridisegnato. (Esegue l'override di [CMFCToolBarButton::GetInvalidateRect](../../mfc/reference/cmfctoolbarbutton-class.md#getinvalidaterect).)|  
|`CMFCToolBarEditBoxButton::GetThisClass`|Utilizzato dal framework per ottenere un puntatore al [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|[CMFCToolBarEditBoxButton::HaveHotBorder](#havehotborder)|Determina se un bordo del pulsante viene visualizzato quando un utente fa clic sul pulsante. (Esegue l'override di [CMFCToolBarButton::HaveHotBorder](../../mfc/reference/cmfctoolbarbutton-class.md#havehotborder).)|  
|[CMFCToolBarEditBoxButton::IsFlatMode](#isflatmode)|Determina se i pulsanti della casella modifica hanno uno stile flat.|  
|[CMFCToolBarEditBoxButton::NotifyCommand](#notifycommand)|Specifica se il pulsante elabora il [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) messaggio. (Esegue l'override di [CMFCToolBarButton::NotifyCommand](../../mfc/reference/cmfctoolbarbutton-class.md#notifycommand).)|  
|[CMFCToolBarEditBoxButton::OnAddToCustomizePage](#onaddtocustomizepage)|Chiamato dal framework quando il pulsante viene aggiunto a un **Personalizza** la finestra di dialogo. (Esegue l'override di [CMFCToolBarButton::OnAddToCustomizePage](../../mfc/reference/cmfctoolbarbutton-class.md#onaddtocustomizepage).)|  
|`CMFCToolBarEditBoxButton::OnCalculateSize`|Chiamato dal framework per calcolare le dimensioni del pulsante per il contesto di dispositivo specificato e lo stato di ancoraggio. (Esegue l'override di [CMFCToolBarButton::OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#oncalculatesize).)|  
|[CMFCToolBarEditBoxButton::OnChangeParentWnd](#onchangeparentwnd)|Chiamato dal framework quando il pulsante viene inserito in una nuova barra degli strumenti. (Esegue l'override di [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd).)|  
|[CMFCToolBarEditBoxButton::OnClick](#onclick)|Chiamato dal framework quando l'utente fa clic sul pulsante del mouse. (Esegue l'override di [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick).)|  
|[CMFCToolBarEditBoxButton::OnCtlColor](#onctlcolor)|Chiamato dal framework quando la barra degli strumenti padre gestisce un `WM_CTLCOLOR` messaggio. (Esegue l'override di [CMFCToolBarButton::OnCtlColor](../../mfc/reference/cmfctoolbarbutton-class.md#onctlcolor).)|  
|`CMFCToolBarEditBoxButton::OnDraw`|Chiamato dal framework per disegnare il pulsante utilizzando gli stili specificati e le opzioni. (Esegue l'override di [CMFCToolBarButton::OnDraw](../../mfc/reference/cmfctoolbarbutton-class.md#ondraw).)|  
|`CMFCToolBarEditBoxButton::OnDrawOnCustomizeList`|Chiamato dal framework in cui disegnare il pulsante di **comandi** riquadro del **Personalizza** la finestra di dialogo. (Esegue l'override di [CMFCToolBarButton::OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#ondrawoncustomizelist).)|  
|[CMFCToolBarEditBoxButton::OnGlobalFontsChanged](#onglobalfontschanged)|Chiamato dal framework quando è stato modificato il tipo di carattere globale. (Esegue l'override di [CMFCToolBarButton::OnGlobalFontsChanged](../../mfc/reference/cmfctoolbarbutton-class.md#onglobalfontschanged).)|  
|[CMFCToolBarEditBoxButton::OnMove](#onmove)|Chiamato dal framework quando si sposta la barra degli strumenti padre. (Esegue l'override di [CMFCToolBarButton::OnMove](../../mfc/reference/cmfctoolbarbutton-class.md#onmove).)|  
|[CMFCToolBarEditBoxButton::OnShow](#onshow)|Chiamato dal framework quando il pulsante diventa visibile o invisibile. (Esegue l'override di [CMFCToolBarButton::OnShow](../../mfc/reference/cmfctoolbarbutton-class.md#onshow).)|  
|[CMFCToolBarEditBoxButton::OnSize](#onsize)|Chiamato dal framework quando la barra degli strumenti padre modifica la dimensione o posizione e la modifica, il pulsante modificare le dimensioni. (Esegue l'override di [CMFCToolBarButton::OnSize](../../mfc/reference/cmfctoolbarbutton-class.md#onsize).)|  
|[CMFCToolBarEditBoxButton::OnUpdateToolTip](#onupdatetooltip)|Chiamato dal framework quando la barra degli strumenti padre aggiorna il testo della descrizione comando. (Esegue l'override di [CMFCToolBarButton::OnUpdateToolTip](../../mfc/reference/cmfctoolbarbutton-class.md#onupdatetooltip).)|  
|`CMFCToolBarEditBoxButton::Serialize`|Legge l'oggetto da un archivio o scrive in un archivio. (Esegue l'override di [CMFCToolBarButton::Serialize](../../mfc/reference/cmfctoolbarbutton-class.md#serialize).)|  
|`CMFCToolBarEditBoxButton::SetACCData`|Popola l'oggetto specificato `CAccessibilityData` oggetto con i dati di accesso facilitato dal pulsante della barra degli strumenti. (Esegue l'override di [CMFCToolBarButton::SetACCData](../../mfc/reference/cmfctoolbarbutton-class.md#setaccdata).)|  
|`CMFCToolBarEditBoxButton::`[CMFCToolBarEditBoxButton::SetContents](#setcontents)|Imposta il testo nel controllo di modifica del pulsante.|  
|`CMFCToolBarEditBoxButton::`[CMFCToolBarEditBoxButton::SetContentsAll](#setcontentsall)|Consente di trovare il pulsante di controllo di modifica che ha un ID di comando specificato e imposta il testo nel controllo di modifica del pulsante.|  
|[CMFCToolBarEditBoxButton::SetContextMenuID](#setcontextmenuid)|Specifica l'ID di risorsa del menu di scelta rapida che viene associato al pulsante.|  
|[CMFCToolBarEditBoxButton::SetFlatMode](#setflatmode)|Specifica l'aspetto bidimensionale dei pulsanti della casella di modifica nell'applicazione.|  
|`CMFCToolBarEditBoxButton::`[CMFCToolBarEditBoxButton::SetStyle](#setstyle)|Specifica lo stile del pulsante. (Esegue l'override di [CMFCToolBarButton::SetStyle](../../mfc/reference/cmfctoolbarbutton-class.md#setstyle).)|  
  
## <a name="remarks"></a>Note  
 Per aggiungere un pulsante casella di modifica a una barra degli strumenti, attenersi alla procedura seguente:  
  
 1. Riservare un ID di risorsa fittizio per il pulsante nella risorsa della barra degli strumenti padre.  
  
 2. Costruire un `CMFCToolBarEditBoxButton` oggetto.  
  
 3. Nel gestore di messaggi che elabora il `AFX_WM_RESETTOOLBAR` del messaggio, sostituire il pulsante fittizio con il nuovo pulsante della casella combinata utilizzando [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton).  
  
 Per ulteriori informazioni, vedere [procedura dettagliata: inserimento di controlli in barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare metodi diversi di `CMFCToolBarEditBoxButton` (classe). Nell'esempio viene illustrato come specificare che un utente può estendere il pulsante durante la personalizzazione, specificare che un bordo del pulsante viene visualizzato quando un utente fa clic sul pulsante, impostare il testo nella casella di testo, specificare l'aspetto bidimensionale dei pulsanti della casella di modifica nell'applicazione e specificare lo stile di un controllo casella di modifica sulla barra degli strumenti.  
  
 [!code-cpp[&#40; NVC_MFC_RibbonApp](../../mfc/reference/codesnippet/cpp/cmfctoolbareditboxbutton-class_1.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
 `CMFCToolBarEditBoxButton` 
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxtoolbareditboxbutton.h  
  
##  <a name="canbestretched"></a>CMFCToolBarEditBoxButton::CanBeStretched  
 Specifica se un utente è possibile estendere il pulsante durante la personalizzazione.  
  
```  
virtual BOOL CanBeStretched() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Questo metodo restituisce `TRUE`.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, il framework non consente all'utente di estendere un pulsante della barra degli strumenti durante la personalizzazione. Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::CanBeStretched](../../mfc/reference/cmfctoolbarbutton-class.md#canbestretched)) consentendo all'utente per l'estensione di un pulsante della barra degli strumenti casella di modifica durante la personalizzazione.  
  
##  <a name="cmfctoolbareditboxbutton"></a>CMFCToolBarEditBoxButton::CMFCToolBarEditBoxButton  
 Costruisce un [CMFCToolBarEditBoxButton](../../mfc/reference/cmfctoolbareditboxbutton-class.md) oggetto.  
  
```  
CMFCToolBarEditBoxButton(
    UINT uiID,  
    int iImage,  
    DWORD dwStyle=ES_AUTOHSCROLL,  
    int iWidth=0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiID`  
 Specifica l'ID di controllo.  
  
 [in] `iImage`  
 Specifica l'indice in base zero di un'immagine della barra degli strumenti. L'immagine si trova nel [CMFCToolBarImages classe](../../mfc/reference/cmfctoolbarimages-class.md) oggetto [CMFCToolBar classe](../../mfc/reference/cmfctoolbar-class.md) classe gestisce.  
  
 [in] `dwStyle`  
 Specifica lo stile del controllo di modifica.  
  
 [in] `iWidth`  
 Specifica la larghezza in pixel del controllo di modifica.  
  
### <a name="remarks"></a>Note  
 Il costruttore predefinito imposta lo stile del controllo di modifica per la combinazione seguente:  
  
 `WS_CHILD | WS_VISIBLE | ES_AUTOHSCROLL`  
  
 La larghezza predefinita del controllo è 150 pixel.  
  
##  <a name="copyfrom"></a>CMFCToolBarEditBoxButton::CopyFrom  
 Copia le proprietà di un altro pulsante della barra degli strumenti al pulsante corrente.  
  
```  
virtual void CopyFrom(const CMFCToolBarButton& src);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `src`  
 Un riferimento al pulsante origine da cui copiare.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per copiare un altro pulsante della barra degli strumenti di questo pulsante della barra degli strumenti. `src`deve essere di tipo `CMFCToolBarEditBoxButton`.  
  
##  <a name="createedit"></a>CMFCToolBarEditBoxButton::CreateEdit  
 Crea un nuovo controllo di modifica nel pulsante.  
  
```  
virtual CEdit* CreateEdit(
    CWnd* pWndParent,  
    const CRect& rect);
```  
  
### <a name="parameters"></a>Parametri  
 `[in] pWndParent`  
 Specifica la finestra padre del controllo di modifica. Non deve essere NULL.  
  
 `[in] rect`  
 Specifica le dimensioni e posizione del controllo di modifica.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al controllo di modifica appena creato. è `NULL` se allegato e la creazione del controllo ha esito negativo.  
  
### <a name="remarks"></a>Note  
 Costruire un `CMFCToolBarEditBoxButton`oggetto in due passaggi. Prima di chiamare il costruttore e quindi chiamare `CreateEdit,` che crea il controllo di modifica di Windows e lo collega a di `CMFCToolBarEditBoxButton` oggetto.  
  
##  <a name="getbycmd"></a>CMFCToolBarEditBoxButton::GetByCmd  
 Recupera il primo `CMFCToolBarEditBoxButton` oggetto nell'applicazione con l'ID di comando specificato.  
  
```  
static CMFCToolBarEditBoxButton* __stdcall GetByCmd(UINT uiCmd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmd`  
 L'ID di comando del pulsante da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 Il primo `CMFCToolBarEditBoxButton` oggetto nell'applicazione con l'ID di comando specificato, o `NULL` se non esiste alcun oggetto di questo tipo.  
  
### <a name="remarks"></a>Note  
 Questo metodo di utilità condivise utilizzato dai metodi, ad esempio [CMFCToolBarEditBoxButton::SetContentsAll](#setcontentsall) e [CMFCToolBarEditBoxButton::GetContentsAll](#getcontentsall) per impostare o ottenere il testo del primo controllo di modifica casella degli strumenti con l'ID di comando specificato.  
  
##  <a name="getcontentsall"></a>CMFCToolBarEditBoxButton::GetContentsAll  
 Recupera il testo del primo controllo di modifica casella degli strumenti con l'ID di comando specificato.  
  
```  
static CString __stdcall GetContentsAll(UINT uiCmd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmd`  
 L'ID di comando del pulsante da cui recuperare contenuto.  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CString` oggetto che contiene il testo del primo controllo di modifica casella degli strumenti con l'ID di comando specificato.  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce una stringa vuota se nessun `CMFCToolBarEditBoxButton` oggetti dispongono dell'ID di comando specificato.  
  
##  <a name="getcontextmenuid"></a>CMFCToolBarEditBoxButton::GetContextMenuID  
 Recupera l'ID risorsa del menu di scelta rapida che viene associato al pulsante.  
  
```  
UINT GetContextMenuID();
```  
  
### <a name="return-value"></a>Valore restituito  
 L'ID di risorsa di menu di scelta rapida che è associato con il pulsante o 0 se il pulsante non presenta alcun menu di scelta rapida associato.  
  
### <a name="remarks"></a>Note  
 Il framework utilizza l'ID di risorsa per creare menu di scelta rapida quando l'utente fa clic sul pulsante.  
  
##  <a name="geteditborder"></a>CMFCToolBarEditBoxButton::GetEditBorder  
 Recupera il rettangolo di delimitazione della parte di modifica del pulsante casella di modifica.  
  
```  
virtual void GetEditBorder(CRect& rectBorder);
```  
  
### <a name="parameters"></a>Parametri  
 [out] `rectBorder`  
 Un riferimento di `CRect` oggetto che riceve il rettangolo di delimitazione.  
  
### <a name="remarks"></a>Note  
 Questo metodo recupera il rettangolo di delimitazione del controllo di modifica nelle coordinate client. Espande le dimensioni del rettangolo in ciascuna direzione di un pixel.  
  
 Il [CMFCVisualManager::OnDrawEditBorder](../../mfc/reference/cmfcvisualmanager-class.md#ondraweditborder) metodo chiama questo metodo quando disegna il bordo di un `CMFCToolBarEditBoxButton` oggetto.  
  
##  <a name="geteditbox"></a>CMFCToolBarEditBoxButton::GetEditBox  
 Restituisce un puntatore per il [CEdit Class](../../mfc/reference/cedit-class.md) controllo incorporato nel pulsante.  
  
```  
CEdit* GetEditBox() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il [CEdit Class](../../mfc/reference/cedit-class.md) controllo che contiene il pulsante. È `NULL` se il `CEdit` controllo non è ancora stato creato.  
  
### <a name="remarks"></a>Note  
 Si crea il `CEdit` controllo chiamando [CMFCToolBarEditBoxButton::CreateEdit](#createedit).  
  
##  <a name="gethwnd"></a>CMFCToolBarEditBoxButton::GetHwnd  
 Recupera l'handle della finestra associata con il pulsante della barra degli strumenti.  
  
```  
virtual HWND GetHwnd();
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle di finestra associata con il pulsante.  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue l'override di [CMFCToolBarButton::GetHwnd](../../mfc/reference/cmfctoolbarbutton-class.md#gethwnd) metodo restituendo l'handle della finestra della parte del controllo di modifica del pulsante casella di modifica.  
  
##  <a name="getinvalidaterect"></a>CMFCToolBarEditBoxButton::GetInvalidateRect  
 Recupera l'area dell'area client del pulsante che deve essere ridisegnato.  
  
```  
virtual const CRect GetInvalidateRect() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CRect` oggetto che specifica l'area che deve essere ridisegnata.  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe base, [CMFCToolBarButton::GetInvalidateRect](../../mfc/reference/cmfctoolbarbutton-class.md#getinvalidaterect), includendo nell'area con l'area dell'etichetta di testo.  
  
##  <a name="havehotborder"></a>CMFCToolBarEditBoxButton::HaveHotBorder  
 Determina se un bordo del pulsante viene visualizzato quando un utente fa clic sul pulsante.  
  
```  
virtual BOOL HaveHotBorder() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se un pulsante viene visualizzato un bordo quando è selezionato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe base, [CMFCToolBarButton::HaveHotBorder](../../mfc/reference/cmfctoolbarbutton-class.md#havehotborder), restituendo un valore diverso da zero se il controllo è visibile.  
  
##  <a name="isflatmode"></a>CMFCToolBarEditBoxButton::IsFlatMode  
 Determina se i pulsanti della casella modifica hanno uno stile flat.  
  
```  
static BOOL __stdcall IsFlatMode();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se i pulsanti hanno uno stile flat; in caso contrario, 0.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, i pulsanti della casella modifica hanno uno stile flat. Utilizzare il [CMFCToolBarEditBoxButton::SetFlatMode](#setflatmode) per modificare l'aspetto bidimensionale per l'applicazione.  
  
##  <a name="notifycommand"></a>CMFCToolBarEditBoxButton::NotifyCommand  
 Specifica se il pulsante elabora il [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) messaggio.  
  
```  
virtual BOOL NotifyCommand(int iNotifyCode);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iNotifyCode`  
 Il messaggio di notifica che viene associato al comando.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il pulsante elabora il `WM_COMMAND` messaggio, o `FALSE` per indicare che il messaggio deve essere gestito dalla barra degli strumenti padre.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo quando sta per inviare un [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) messaggio della finestra padre.  
  
 Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::NotifyCommand](../../mfc/reference/cmfctoolbarbutton-class.md#notifycommand)) dall'elaborazione di [EN_UPDATE](http://msdn.microsoft.com/library/windows/desktop/bb761687) notifica. Per ogni casella di modifica con lo stesso ID di comando di questo oggetto, imposta la relativa etichetta di testo all'etichetta di testo di questo oggetto.  
  
##  <a name="onaddtocustomizepage"></a>CMFCToolBarEditBoxButton::OnAddToCustomizePage  
 Chiamato dal framework quando il pulsante viene aggiunto a un **Personalizza** la finestra di dialogo.  
  
```  
virtual void OnAddToCustomizePage();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::OnAddToCustomizePage](../../mfc/reference/cmfctoolbarbutton-class.md#onaddtocustomizepage)) copiando le proprietà dal controllo della casella di modifica in una barra degli strumenti con lo stesso ID di comando di questo oggetto. Questo metodo non esegue alcuna operazione se nessuna barra degli strumenti dispone di un controllo casella di modifica che ha lo stesso ID di comando di questo oggetto.  
  
 Per ulteriori informazioni sui **Personalizza** la finestra di dialogo, vedere [CMFCToolBarsCustomizeDialog classe](../../mfc/reference/cmfctoolbarscustomizedialog-class.md).  
  
##  <a name="onchangeparentwnd"></a>CMFCToolBarEditBoxButton::OnChangeParentWnd  
 Chiamato dal framework quando il pulsante viene inserito in una nuova barra degli strumenti.  
  
```  
virtual void OnChangeParentWnd(CWnd* pWndParent);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndParent`  
 Un puntatore a una nuova finestra padre.  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue l'override dell'implementazione della classe base ( [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd)) ricreando interno `CEdit` oggetto.  
  
##  <a name="onclick"></a>CMFCToolBarEditBoxButton::OnClick  
 Chiamato dal framework quando l'utente fa clic sul pulsante del mouse.  
  
```  
virtual BOOL OnClick(
    CWnd* pWnd,  
    BOOL bDelay = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWnd`  
 Non usato.  
  
 [in] `bDelay`  
 Non usato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il pulsante elabora il messaggio e fare clic su in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue l'override dell'implementazione della classe base ( [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick)) restituendo un valore diverso da zero se l'oggetto interno `CEdit` oggetto è visibile.  
  
##  <a name="onctlcolor"></a>CMFCToolBarEditBoxButton::OnCtlColor  
 Chiamato dal framework quando la barra degli strumenti padre gestisce un `WM_CTLCOLOR` messaggio.  
  
```  
virtual HBRUSH OnCtlColor(
    CDC* pDC,  
    UINT nCtlColor);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pDC`  
 Il contesto di dispositivo che viene visualizzato il pulsante.  
  
 [in] `nCtlColor`  
 Non usato.  
  
### <a name="return-value"></a>Valore restituito  
 Handle per il pennello finestra globale.  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue l'override dell'implementazione della classe base ( [CMFCToolBarButton::OnCtlColor](../../mfc/reference/cmfctoolbarbutton-class.md#onctlcolor)) impostando i colori di testo e dello sfondo del contesto di dispositivo specificato per il testo globale e i colori di sfondo, rispettivamente.  
  
 Per ulteriori informazioni sulle opzioni globali che sono disponibili per l'applicazione, vedere [struttura AFX_GLOBAL_DATA](../../mfc/reference/afx-global-data-structure.md).  
  
##  <a name="onglobalfontschanged"></a>CMFCToolBarEditBoxButton::OnGlobalFontsChanged  
 Chiamato dal framework quando è stato modificato il tipo di carattere globale.  
  
```  
virtual void OnGlobalFontsChanged();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::OnGlobalFontsChanged](../../mfc/reference/cmfctoolbarbutton-class.md#onglobalfontschanged)) modificando il tipo di carattere del controllo a quello del tipo di carattere globale.  
  
 Per ulteriori informazioni sulle opzioni globali che sono disponibili per l'applicazione, vedere [struttura AFX_GLOBAL_DATA](../../mfc/reference/afx-global-data-structure.md).  
  
##  <a name="onmove"></a>CMFCToolBarEditBoxButton::OnMove  
 Chiamato dal framework quando si sposta la barra degli strumenti padre.  
  
```  
virtual void OnMove();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue l'override l'implementazione predefinita della classe ( [CMFCToolBarButton::OnMove](../../mfc/reference/cmfctoolbarbutton-class.md#onmove)), aggiornare la posizione dell'oggetto interno `CEdit` oggetto  
  
##  <a name="onshow"></a>CMFCToolBarEditBoxButton::OnShow  
 Chiamato dal framework quando il pulsante diventa visibile o invisibile.  
  
```  
virtual void OnShow(BOOL bShow);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bShow`  
 Specifica se il pulsante è visibile. Se questo parametro è `TRUE`, il pulsante è visibile. In caso contrario, il pulsante non è visibile.  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::OnShow](../../mfc/reference/cmfctoolbarbutton-class.md#onshow)) visualizzando il pulsante se `bShow` è `TRUE`. In caso contrario, questo metodo nasconde il pulsante.  
  
##  <a name="onsize"></a>CMFCToolBarEditBoxButton::OnSize  
 Chiamato dal framework quando la barra degli strumenti padre modifica la dimensione o posizione e la modifica, il pulsante modificare le dimensioni.  
  
```  
virtual void OnSize(int iSize);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iSize`  
 La nuova larghezza del pulsante, in pixel.  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue l'override l'implementazione predefinita della classe, [CMFCToolBarButton::OnSize](../../mfc/reference/cmfctoolbarbutton-class.md#onsize), aggiornando le dimensioni e la posizione dell'oggetto interno `CEdit` oggetto.  
  
##  <a name="onupdatetooltip"></a>CMFCToolBarEditBoxButton::OnUpdateToolTip  
 Chiamato dal framework quando la barra degli strumenti padre aggiorna il testo della descrizione comando.  
  
```  
virtual BOOL OnUpdateToolTip(
    CWnd* pWndParent,  
    int iButtonIndex,  
    CToolTipCtrl& wndToolTip,  
    CString& str);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndParent`  
 Non usato.  
  
 [in] `iButtonIndex`  
 Non usato.  
  
 [in] `wndToolTip`  
 Il controllo che visualizza il testo della descrizione comando.  
  
 [out] `str`  
 Oggetto `CString` oggetto che riceve il testo della descrizione comando aggiornato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo aggiorna il testo della descrizione comando. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::OnUpdateToolTip](../../mfc/reference/cmfctoolbarbutton-class.md#onupdatetooltip)) visualizzando il testo della descrizione comandi associato alla parte di modifica del pulsante. Se interna `CEdit` oggetto `NULL` l'handle della finestra o il `CEdit` oggetto non identifica una finestra esistente, questo metodo non esegue alcuna operazione e restituisce `FALSE`.  
  
##  <a name="setcontents"></a>CMFCToolBarEditBoxButton::SetContents  
 Imposta il testo nella casella di testo.  
  
```  
virtual void SetContents(const CString& sContents);
```  
  
### <a name="parameters"></a>Parametri  
 `[in] sContents`  
 Specifica il nuovo testo da impostare.  
  
##  <a name="setcontentsall"></a>CMFCToolBarEditBoxButton::SetContentsAll  
 Trova un [CMFCToolBarEditBoxButton](../../mfc/reference/cmfctoolbareditboxbutton-class.md) oggetto che ha un ID di comando specificato e imposta il testo specificato nella relativa casella di testo.  
  
```  
static BOOL SetContentsAll(
    UINT uiCmd,  
    const CString& strContents);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmd`  
 Specifica l'ID di comando del controllo per il quale verrà modificato il testo.  
  
 [in] `strContents`  
 Specifica il nuovo testo da impostare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è stato impostato il testo. 0 se il `CMFCToolBarEditBoxButton` controllo con l'ID di comando specificato non esiste.  
  
##  <a name="setcontextmenuid"></a>CMFCToolBarEditBoxButton::SetContextMenuID  
 Specifica l'ID di risorsa del menu di scelta rapida che viene associato al pulsante.  
  
```  
void SetContextMenuID(UINT uiResID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmd`  
 L'ID di risorsa di menu di scelta rapida.  
  
### <a name="remarks"></a>Note  
 Il framework utilizza l'ID di risorsa per creare menu di scelta rapida quando l'utente fa clic sul pulsante della barra degli strumenti.  
  
##  <a name="setflatmode"></a>CMFCToolBarEditBoxButton::SetFlatMode  
 Specifica l'aspetto bidimensionale dei pulsanti della casella di modifica nell'applicazione.  
  
```  
static void __stdcall SetFlatMode(BOOL bFlat = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bFlat`  
 Stile flat pulsanti della casella di modifica. Se questo parametro è `TRUE`, l'aspetto bidimensionale è abilitato; in caso contrario l'aspetto bidimensionale è disabilitato.  
  
### <a name="remarks"></a>Note  
 Lo stile flat predefinito per i pulsanti della casella modifica è `TRUE`. Utilizzare il [CMFCToolBarEditBoxButton::IsFlatMode](#isflatmode) per recuperare l'aspetto bidimensionale per l'applicazione.  
  
##  <a name="setstyle"></a>CMFCToolBarEditBoxButton::SetStyle  
 Specifica lo stile di una barra degli strumenti di controllo casella di testo.  
  
```  
virtual void SetStyle(UINT nStyle);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nStyle`  
 Un nuovo stile da impostare.  
  
### <a name="remarks"></a>Note  
 Questo metodo imposta [CMFCToolBarButton::m_nStyle](../../mfc/reference/cmfctoolbarbutton-class.md#m_nstyle) a `nStyle` viene disattivata anche la casella di testo quando l'applicazione è in modalità di personalizzare e Abilita quando l'applicazione non è in modalità Personalizza (vedere [CMFCToolBar::SetCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#setcustomizemode) e [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode)). Vedere [degli stili del controllo barra degli strumenti](../../mfc/reference/toolbar-control-styles.md) per un elenco di flag di stile valido.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)   
 [Classe CEdit](../../mfc/reference/cedit-class.md)   
 [CMFCToolBar::ReplaceButton](../../mfc/reference/cmfctoolbar-class.md#replacebutton)   
 [Procedura dettagliata: Inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)





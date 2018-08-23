---
title: Classe CMFCOutlookBarPane | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CMFCOutlookBarPane
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::AddButton
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::CanBeAttached
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::ClearAll
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::Create
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::EnablePageScrollMode
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::GetRegularColor
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::IsBackgroundTexture
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::IsDrawShadedHighlight
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::RemoveButton
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::SetBackColor
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::SetBackImage
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::SetDefaultState
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::SetExtraSpace
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::SetTextColor
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::SetTransparentColor
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::EnableContextMenuItems
- AFXOUTLOOKBARPANE/CMFCOutlookBarPane::RemoveAllButtons
dev_langs:
- C++
helpviewer_keywords:
- CMFCOutlookBarPane [MFC], AddButton
- CMFCOutlookBarPane [MFC], CanBeAttached
- CMFCOutlookBarPane [MFC], ClearAll
- CMFCOutlookBarPane [MFC], Create
- CMFCOutlookBarPane [MFC], EnablePageScrollMode
- CMFCOutlookBarPane [MFC], GetRegularColor
- CMFCOutlookBarPane [MFC], IsBackgroundTexture
- CMFCOutlookBarPane [MFC], IsDrawShadedHighlight
- CMFCOutlookBarPane [MFC], RemoveButton
- CMFCOutlookBarPane [MFC], SetBackColor
- CMFCOutlookBarPane [MFC], SetBackImage
- CMFCOutlookBarPane [MFC], SetDefaultState
- CMFCOutlookBarPane [MFC], SetExtraSpace
- CMFCOutlookBarPane [MFC], SetTextColor
- CMFCOutlookBarPane [MFC], SetTransparentColor
- CMFCOutlookBarPane [MFC], EnableContextMenuItems
- CMFCOutlookBarPane [MFC], RemoveAllButtons
ms.assetid: 094e2ef3-a118-487e-a4cc-27626108fe08
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 394cd0da74171e517086886a5c0c915fc77ba49c
ms.sourcegitcommit: a41c4d096afca1e9b619bbbce045b77135d32ae2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/14/2018
ms.locfileid: "42539461"
---
# <a name="cmfcoutlookbarpane-class"></a>Classe CMFCOutlookBarPane
Per altre informazioni, vedere il codice sorgente disponibile nel **VC\\atlmfc\\src\\mfc** cartella di installazione di Visual Studio.  
  
 Controllo derivato da [classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md) che può essere inserito in una barra di Outlook ( [CMFCOutlookBar (classe)](../../mfc/reference/cmfcoutlookbar-class.md)). Il riquadro della barra di Outlook contiene una colonna di pulsanti di grandi dimensioni. L'utente può scorrere verso l'alto e verso il basso l'elenco dei pulsanti, se questo è più grande del riquadro. Quando l'utente scollega un riquadro della barra di Outlook dalla barra stessa, questo può rimanere mobile o essere ancorato nella finestra cornice principale.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCOutlookBarPane : public CMFCToolBar  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCOutlookBarPane::CMFCOutlookBarPane`|Costruttore predefinito.|  
|`CMFCOutlookBarPane::~CMFCOutlookBarPane`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCOutlookBarPane::AddButton](#addbutton)|Aggiunge un pulsante al riquadro della barra di Outlook.|  
|[CMFCOutlookBarPane::CanBeAttached](#canbeattached)|Determina se il riquadro può essere ancorato a un'altra finestra del riquadro o il frame. (Esegue l'override [CBasePane::CanBeAttached](../../mfc/reference/cbasepane-class.md#canbeattached).)|  
|`CMFCOutlookBarPane::CanBeRestored`|Determina se il ripristino del sistema è una barra degli strumenti per lo stato originale dopo la personalizzazione. (Esegue l'override [CMFCToolBar::CanBeRestored](../../mfc/reference/cmfctoolbar-class.md#canberestored).)|  
|[CMFCOutlookBarPane::ClearAll](#clearall)|Libera le risorse usate per le immagini nel riquadro della barra di Outlook.|  
|[CMFCOutlookBarPane::Create](#create)|Crea il riquadro della barra di Outlook.|  
|`CMFCOutlookBarPane::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|`CMFCOutlookBarPane::Dock`|Chiamato dal framework per ancorare il riquadro barra di Outlook. Esegue l'override`CPane::Dock`.|  
|[CMFCOutlookBarPane::EnablePageScrollMode](#enablepagescrollmode)|Specifica se le frecce di scorrimento nel riquadro della barra di Outlook passare l'elenco dei pulsanti dalla pagina o dal pulsante.|  
|[CMFCOutlookBarPane::GetRegularColor](#getregularcolor)|Restituisce il colore di testo normale (non selezionato) del riquadro della barra di Outlook.|  
|`CMFCOutlookBarPane::GetThisClass`|Utilizzato dal framework per ottenere un puntatore per il [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|[CMFCOutlookBarPane::IsBackgroundTexture](#isbackgroundtexture)|Determina se è presente un'immagine di sfondo caricata per il riquadro della barra di Outlook.|  
|`CMFCOutlookBarPane::IsChangeState`|Determina se un riquadro mobile può essere ancorato. Esegue l'override`CPane::IsChangeState`.|  
|[CMFCOutlookBarPane::IsDrawShadedHighlight](#isdrawshadedhighlight)|Determina se il bordo del pulsante è ombreggiata quando un pulsante è evidenziato e viene visualizzata un'immagine di sfondo.|  
|`CMFCOutlookBarPane::OnBeforeFloat`|Chiamato dal framework quando è su un riquadro in float. (Esegue l'override [CPane::OnBeforeFloat](../../mfc/reference/cpane-class.md#onbeforefloat).)|  
|[CMFCOutlookBarPane::RemoveButton](#removebutton)|Rimuove il pulsante con un ID di comando.|  
|`CMFCOutlookBarPane::RestoreOriginalstate`|Ripristina lo stato originale di una barra degli strumenti. (Esegue l'override [CMFCToolBar::RestoreOriginalState](../../mfc/reference/cmfctoolbar-class.md#restoreoriginalstate).)|  
|[CMFCOutlookBarPane::SetBackColor](#setbackcolor)|Imposta il colore di sfondo.|  
|[CMFCOutlookBarPane::SetBackImage](#setbackimage)|Imposta l'immagine di sfondo.|  
|[CMFCOutlookBarPane::SetDefaultState](#setdefaultstate)|Reimposta il riquadro della barra di Outlook per il set originale di pulsanti.|  
|[CMFCOutlookBarPane::SetExtraSpace](#setextraspace)|Imposta il numero di pixel di spaziatura interna usato intorno a pulsanti nel riquadro della barra di Outlook.|  
|[CMFCOutlookBarPane::SetTextColor](#settextcolor)|Imposta i colori del testo normale ed evidenziato nel riquadro della barra di Outlook.|  
|[CMFCOutlookBarPane::SetTransparentColor](#settransparentcolor)|Imposta il colore trasparente per il riquadro della barra di Outlook.|  
|`CMFCOutlookBarPane::SmartUpdate`|Utilizzato internamente per aggiornare la barra di Outlook. Esegue l'override`CMFCToolBar::SmartUpdate`.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCOutlookBarPane::EnableContextMenuItems](#enablecontextmenuitems)|Specifica le voci di menu di scelta rapida vengono visualizzati in modalità di personalizzazione.|  
|[CMFCOutlookBarPane::RemoveAllButtons](#removeallbuttons)|Rimuove tutti i pulsanti dal riquadro della barra di Outlook. (Esegue l'override [CMFCToolBar::RemoveAllButtons](../../mfc/reference/cmfctoolbar-class.md#removeallbuttons).)|  
  
## <a name="remarks"></a>Note  
 Per informazioni su come implementare una barra di Outlook, vedere [CMFCOutlookBar (classe)](../../mfc/reference/cmfcoutlookbar-class.md).  
  
 Per un esempio di una barra di Outlook, vedere il progetto di esempio OutlookDemo.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come usare i vari metodi del `CMFCOutlookBarPane` classe. Nell'esempio viene illustrato come creare un riquadro barra di Outlook, abilitare la modalità di scorrimento di pagina, attivare l'ancoraggio e impostare il colore di sfondo della barra di Outlook. Questo frammento di codice fa parte il [esempio di Outlook con più visualizzazioni](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_OutlookMultiViews#3](../../mfc/reference/codesnippet/cpp/cmfcoutlookbarpane-class_1.h)]  
[!code-cpp[NVC_MFC_OutlookMultiViews#4](../../mfc/reference/codesnippet/cpp/cmfcoutlookbarpane-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CMFCBaseToolBar](../../mfc/reference/cmfcbasetoolbar-class.md)  
  
 [CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)  
  
 [CMFCOutlookBarPane](../../mfc/reference/cmfcoutlookbarpane-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxoutlookbarpane.h  
  
##  <a name="addbutton"></a>  CMFCOutlookBarPane::AddButton  
 Aggiunge un pulsante al riquadro della barra di Outlook.  
  
```  
BOOL AddButton(
    UINT uiImage,  
    LPCTSTR lpszLabel,  
    UINT iIdCommand,  
    int iInsertAt=-1);

 
BOOL AddButton(
    UINT uiImage,  
    UINT uiLabel,  
    UINT iIdCommand,  
    int iInsertAt=-1);

 
BOOL AddButton(
    LPCTSTR szBmpFileName,  
    LPCTSTR szLabel,  
    UINT iIdCommand,  
    int iInsertAt=-1);

 
BOOL AddButton(
    HBITMAP hBmp,  
    LPCTSTR lpszLabel,  
    UINT iIdCommand,  
    int iInsertAt=-1);

 
BOOL AddButton(
    HICON hIcon,  
    LPCTSTR lpszLabel,  
    UINT iIdCommand,  
    int iInsertAt=-1,  
    BOOL bAlphaBlend=FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *uiImage*  
 Specifica l'identificatore di risorsa della bitmap.  
  
 [in] *lpszLabel*  
 Specifica il testo del pulsante.  
  
 [in] *iIdCommand*  
 Specifica l'ID. del controllo pulsante  
  
 [in] *iInsertAt*  
 Specifica l'indice in base zero nella pagina della barra di outlook in corrispondenza del quale inserire il pulsante.  
  
 [in] *uiLabel*  
 Un ID di risorsa di stringa.  
  
 [in] *szBmpFileName*  
 Specifica il nome del file di immagine disco da caricare.  
  
 [in] *szLabel*  
 Specifica il testo del pulsante.  
  
 [in] *hBmp*  
 Un handle per bitmap un pulsante.  
  
 [in] *hIcon*  
 Handle icona dei pulsanti.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se un pulsante è stato aggiunto correttamente. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Utilizzare questo metodo per inserire un nuovo pulsante nella pagina di una barra di Outlook. Immagine del pulsante può essere caricati dalle risorse dell'applicazione o da un file su disco.  
  
 Se l'ID di pagina specificato da *uiPageID* è -1, il pulsante viene inserito nella prima pagina.  
  
 Se l'indice specificato dalla *iInsertAt* è -1, il pulsante viene aggiunto alla fine della pagina.  
  
##  <a name="canbeattached"></a>  CMFCOutlookBarPane::CanBeAttached  
 Per altre informazioni, vedere il codice sorgente disponibile nel **VC\\atlmfc\\src\\mfc** cartella di installazione di Visual Studio.  
  
```  
virtual BOOL CanBeAttached() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="clearall"></a>  CMFCOutlookBarPane::ClearAll  
 Libera le risorse usate per le immagini nel riquadro della barra di Outlook.  
  
```  
void ClearAll();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo chiama direttamente [CMFCToolBarImages::Clear](../../mfc/reference/cmfctoolbarimages-class.md#clear), che viene chiamata in immagini utilizzati dal riquadro della barra di Outlook.  
  
##  <a name="create"></a>  CMFCOutlookBarPane::Create  
 Crea il riquadro della barra di Outlook.  
  
```  
virtual BOOL Create(
    CWnd* pParentWnd,  
    DWORD dwStyle=AFX_DEFAULT_TOOLBAR_STYLE,  
    UINT uiID=(UINT)-1,  
    DWORD dwControlBarStyle=0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pParentWnd*  
 Specifica la finestra padre del controllo del riquadro barra di Outlook. Non deve essere NULL.  
  
 [in] *dwStyle*  
 Stile della finestra.  Per un elenco degli stili di finestra, vedere [stili di finestra](../../mfc/reference/styles-used-by-mfc.md#window-styles).  
  
 [in] *uiID*  
 ID del controllo. Deve essere univoco per abilitare il salvataggio dello stato del controllo.  
  
 [in] *dwControlBarStyle*  
 Specifica gli stili speciali che definiscono il comportamento del controllo del riquadro barra di Outlook quando viene scollegato dalla barra di Outlook.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il metodo ha avuto esito positivo. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Per costruire una `CMFCOutlookBarPane` dell'oggetto, chiamare prima il costruttore e quindi chiamare `Create`, che crea l'Outlook della barra di controllo del riquadro e lo collega al `CMFCOutlookBarPane` oggetto.  
  
 Per altre informazioni sulle `dwControlBarStyle` visualizzare [cbasepane:: CreateEx](../../mfc/reference/cbasepane-class.md#createex).  
  
##  <a name="enablecontextmenuitems"></a>  CMFCOutlookBarPane::EnableContextMenuItems  
 Specifica le voci di menu di scelta rapida vengono visualizzati in modalità di personalizzazione.  
  
```  
virtual BOOL EnableContextMenuItems(
    CMFCToolBarButton* pButton,  
    CMenu* pPopup);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pButton*  
 Puntatore a un pulsante della barra degli strumenti che un utente ha fatto clic.  
  
 [in] *pPopup*  
 Puntatore al menu di scelta rapida.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce TRUE se deve essere visualizzato il menu di scelta rapida, in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questo metodo per modificare il menu di scelta rapida standard di framework che consente di visualizzare il framework della modalità di personalizzazione.  
  
 L'implementazione predefinita controlla la modalità di personalizzazione ( [CMFCToolBar::IsCustomizeMode](../../mfc/reference/cmfctoolbar-class.md#iscustomizemode)) e se è impostata su TRUE, questa collegamento tutte le voci di menu tranne **eliminare**. Quindi, passa semplicemente i parametri di input `CMFCToolBar::EnableContextMenuItems`.  
  
> [!NOTE]
> *Menu di scelta rapida* è un sinonimo per il menu di scelta rapida.  
  
##  <a name="enablepagescrollmode"></a>  CMFCOutlookBarPane::EnablePageScrollMode  
 Specifica se le frecce di scorrimento nel riquadro della barra di Outlook passare l'elenco dei pulsanti pagina per pagina o dal pulsante.  
  
```  
void EnablePageScrollMode(BOOL bPageScroll=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bPageScroll*  
 Se TRUE, abilita la modalità di scorrimento di pagina. Se FALSE, disabilitare la modalità di scorrimento di pagina.  
  
##  <a name="getregularcolor"></a>  CMFCOutlookBarPane::GetRegularColor  
 Restituisce la normale (vale a dire non selezionata) colore del testo del riquadro barra di Outlook.  
  
```  
DECLARE_MESSAGE_MAPCOLORREF GetRegularColor() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Colore del testo corrente come valore di colore RGB.  
  
### <a name="remarks"></a>Note  
 Uso [CMFCOutlookBarPane::SetTextColor](#settextcolor) per impostare il colore del testo (normali e selezionato) corrente della barra di Outlook. È possibile ottenere il colore del testo predefinito chiamando il [GetSysColor](http://msdn.microsoft.com/library/windows/desktop/ms724371) canonica con l'indice COLOR_WINDOW.  
  
##  <a name="isbackgroundtexture"></a>  CMFCOutlookBarPane::IsBackgroundTexture  
 Determina se è presente un'immagine di sfondo caricata per il riquadro della barra di Outlook.  
  
```  
BOOL IsBackgroundTexture() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se è presente l'immagine di sfondo da visualizzare. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 È possibile aggiungere un'immagine di sfondo chiamando [CMFCOutlookBarPane::SetBackImage](#setbackimage) (funzione).  
  
 Se è presente alcuna immagine di sfondo, lo sfondo viene disegnato con un colore specificato tramite [CMFCOutlookBarPane::SetBackColor](#setbackcolor).  
  
##  <a name="isdrawshadedhighlight"></a>  CMFCOutlookBarPane::IsDrawShadedHighlight  
 Determina se il bordo del pulsante è ombreggiata quando un pulsante è evidenziato e viene visualizzata un'immagine di sfondo.  
  
```  
BOOL IsDrawShadedHighlight() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se i bordi del pulsante hanno un'ombreggiati; in caso contrario, FALSE.  
  
##  <a name="removeallbuttons"></a>  CMFCOutlookBarPane::RemoveAllButtons  
 Rimuove tutti i pulsanti dal riquadro della barra di Outlook.  
  
```  
virtual void RemoveAllButtons();
```  
  
##  <a name="removebutton"></a>  CMFCOutlookBarPane::RemoveButton  
 Rimuove il pulsante con un ID di comando.  
  
```  
BOOL RemoveButton(UINT iIdCommand);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *iIdCommand*  
 Specifica l'ID di comando di un pulsante da rimuovere.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il pulsante è stato rimosso correttamente. FALSO se l'ID di comando specificato non è valido.  
  
##  <a name="setbackcolor"></a>  CMFCOutlookBarPane::SetBackColor  
 Imposta il colore di sfondo della barra di Outlook.  
  
```  
void SetBackColor(COLORREF color);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *colore*  
 Specifica il nuovo colore di sfondo.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per impostare il colore di sfondo corrente per la barra di Outlook. Il colore di sfondo viene usato solo se è presente alcuna immagine di sfondo.  
  
##  <a name="setbackimage"></a>  CMFCOutlookBarPane::SetBackImage  
 Imposta l'immagine di sfondo.  
  
```  
void SetBackImage(UINT uiImageID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *uiImageID*  
 Specifica l'ID di risorsa immagine.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per impostare l'Outlook immagine di sfondo della barra. L'elenco di immagini di sfondo è gestito da incorporato [classe CMFCToolBarImages](../../mfc/reference/cmfctoolbarimages-class.md) oggetto.  
  
##  <a name="setdefaultstate"></a>  CMFCOutlookBarPane::SetDefaultState  
 Reimposta il riquadro della barra di Outlook per il set originale di pulsanti.  
  
```  
void SetDefaultState();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo consente di ripristinare i pulsanti della barra di Outlook per il set originale. Questo metodo è simile a `CMFCOutlookBarPane::RestoreOriginalstate`, ad eccezione del fatto che non attiva un aggiornamento del riquadro barra di Outlook.  
  
##  <a name="setextraspace"></a>  CMFCOutlookBarPane::SetExtraSpace  
 Imposta il numero di pixel di spaziatura interna usato intorno a pulsanti nel riquadro della barra di Outlook.  
  
```  
void SetExtraSpace()  
```  
  
##  <a name="settextcolor"></a>  CMFCOutlookBarPane::SetTextColor  
 Imposta i colori del testo normale ed evidenziato nel riquadro della barra di Outlook.  
  
```  
void SetTextColor(
    COLORREF clrRegText,  
    COLORREF clrSelText=0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *clrRegText*  
 Specifica il nuovo colore per il testo non selezionata.  
  
 [in] *clrSelText*  
 Specifica il nuovo colore per il testo selezionato.  
  
##  <a name="settransparentcolor"></a>  CMFCOutlookBarPane::SetTransparentColor  
 Imposta il colore trasparente per il riquadro della barra di Outlook.  
  
```  
void SetTransparentColor(COLORREF color);
```  
  
### <a name="parameters"></a>Parametri  
 *Colore*  
 Specifica il nuovo colore trasparente.  
  
### <a name="remarks"></a>Note  
 Colore trasparente è necessario per visualizzare le immagini trasparenti. Tutte le occorrenze di questo oggetto color in un'immagine viene disegnata invece con il colore di sfondo.  Non è disponibile alcuna combinazione di immagini di sfondo e primo piano.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCToolBar](../../mfc/reference/cmfctoolbar-class.md)   
 [CMFCOutlookBar (classe)](../../mfc/reference/cmfcoutlookbar-class.md)   
 [Classe CMFCOutlookBarTabCtrl](../../mfc/reference/cmfcoutlookbartabctrl-class.md)

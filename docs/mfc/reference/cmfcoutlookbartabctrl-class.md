---
title: Classe CMFCOutlookBarTabCtrl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCOutlookBarTabCtrl
dev_langs:
- C++
helpviewer_keywords:
- CMFCOutlookBarTabCtrl class
ms.assetid: b1f2b3f7-cc59-49a3-99d8-7ff9b37c044b
caps.latest.revision: 26
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
ms.openlocfilehash: 16de4287a2b3a6352fb4fc560b9c8eec2ba766d1
ms.lasthandoff: 02/24/2017

---
# <a name="cmfcoutlookbartabctrl-class"></a>CMFCOutlookBarTabCtrl Class
Controllo Struttura a schede che presenta l'aspetto visivo del **Riquadro di navigazione** in Microsoft Outlook.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCOutlookBarTabCtrl : public CMFCBaseTabCtrl  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CMFCOutlookBarTabCtrl::CMFCOutlookBarTabCtrl`|Costruttore predefinito.|  
|`CMFCOutlookBarTabCtrl::~CMFCOutlookBarTabCtrl`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCOutlookBarTabCtrl::AddControl](#addcontrol)|Aggiunge un controllo di Windows come una nuova scheda nella barra di Outlook.|  
|`CMFCOutlookBarTabCtrl::CalcRectEdit`|Chiamato dal framework per determinare le dimensioni della casella di modifica che viene visualizzato quando si rinomina una scheda. Esegue l'override di `CMFCBaseTabCtrl::CalcRectEdit`.|  
|[CMFCOutlookBarTabCtrl::CanShowFewerPageButtons](#canshowfewerpagebuttons)|Chiamato dal framework durante le operazioni di ridimensionamento per determinare se è possono visualizzare i pulsanti pagina scheda barra Outlook meno maggiore di quello attualmente visibile.|  
|[CMFCOutlookBarTabCtrl::CanShowMorePageButtons](#canshowmorepagebuttons)|Chiamato dal framework durante le operazioni di ridimensionamento per determinare se è possono visualizzare più pulsanti pagina scheda della barra Outlook maggiore di quello attualmente visibile.|  
|[CMFCOutlookBarTabCtrl::Create](#create)|Crea il controllo scheda della barra di Outlook.|  
|`CMFCOutlookBarTabCtrl::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|[CMFCOutlookBarTabCtrl::EnableAnimation](#enableanimation)|Specifica se è abilitata l'animazione che si verifica durante il passaggio tra le schede attive.|  
|[CMFCOutlookBarTabCtrl::EnableInPlaceEdit](#enableinplaceedit)|Specifica se un utente può modificare le etichette di testo sui pulsanti della scheda della barra di Outlook. (Esegue l'override di [CMFCBaseTabCtrl::EnableInPlaceEdit](../../mfc/reference/cmfcbasetabctrl-class.md#enableinplaceedit).)|  
|[CMFCOutlookBarTabCtrl::EnableScrollButtons](#enablescrollbuttons)|Chiamato dal framework per abilitare i pulsanti che consentono all'utente di scorrere i pulsanti nel riquadro della barra di Outlook.|  
|`CMFCOutlookBarTabCtrl::FindTargetWnd`|Identifica il riquadro contenente un punto specificato. (Esegue l'override di [CMFCBaseTabCtrl::FindTargetWnd](../../mfc/reference/cmfcbasetabctrl-class.md#findtargetwnd).)|  
|[CMFCOutlookBarTabCtrl::GetBorderSize](#getbordersize)|Restituisce la dimensione del bordo del controllo scheda Outlook.|  
|`CMFCOutlookBarTabCtrl::GetTabArea`|Recupera le dimensioni e la posizione dell'area della scheda del controllo scheda. (Esegue l'override di [CMFCBaseTabCtrl::GetTabArea](../../mfc/reference/cmfcbasetabctrl-class.md#gettabarea).)|  
|`CMFCOutlookBarTabCtrl::GetThisClass`|Utilizzato dal framework per ottenere un puntatore al [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|[CMFCOutlookBarTabCtrl::GetVisiblePageButtons](#getvisiblepagebuttons)||  
|[CMFCOutlookBarTabCtrl::IsAnimation](#isanimation)|Determina se è abilitata l'animazione che si verifica durante il passaggio tra le schede attive.|  
|[CMFCOutlookBarTabCtrl::IsMode2003](#ismode2003)|Determina se il controllo scheda della barra di Outlook è in una modalità che emula Microsoft Outlook 2003.|  
|`CMFCOutlookBarTabCtrl::IsPtInTabArea`|Determina se un punto all'interno dell'area della scheda. (Esegue l'override di [CMFCBaseTabCtrl::IsPtInTabArea](../../mfc/reference/cmfcbasetabctrl-class.md#isptintabarea).)|  
|`CMFCOutlookBarTabCtrl::IsTabDetachable`|Determina se una scheda è scollegabile. (Esegue l'override di [CMFCBaseTabCtrl::IsTabDetachable](../../mfc/reference/cmfcbasetabctrl-class.md#istabdetachable).)|  
|`CMFCOutlookBarTabCtrl::OnChangeTabs`|Chiamato dal framework quando una scheda viene inserita o rimosso. Esegue l'override di `CMFCBaseTabCtrl::OnChangeTabs`.|  
|[CMFCOutlookBarTabCtrl::OnShowFewerPageButtons](#onshowfewerpagebuttons)|Chiamato dal framework per ridurre il numero di pulsanti alla pagina scheda visibili.|  
|[CMFCOutlookBarTabCtrl::OnShowMorePageButtons](#onshowmorepagebuttons)|Chiamato dal framework per aumentare il numero di pulsanti alla pagina scheda visibili.|  
|[CMFCOutlookBarTabCtrl::OnShowOptions](#onshowoptions)|Consente di visualizzare il **Opzioni riquadro di spostamento** finestra di dialogo.|  
|`CMFCOutlookBarTabCtrl::RecalcLayout`|Ricalcola il layout del controllo scheda interno. (Esegue l'override di [CMFCBaseTabCtrl::RecalcLayout](../../mfc/reference/cmfcbasetabctrl-class.md#recalclayout).)|  
|[CMFCOutlookBarTabCtrl::SetActiveTab](#setactivetab)|Imposta la scheda attiva. (Esegue l'override di [CMFCBaseTabCtrl::SetActiveTab](../../mfc/reference/cmfcbasetabctrl-class.md#setactivetab).)|  
|[CMFCOutlookBarTabCtrl::SetBorderSize](#setbordersize)|Imposta le dimensioni del bordo del controllo scheda Outlook.|  
|[CMFCOutlookBarTabCtrl::SetPageButtonTextAlign](#setpagebuttontextalign)|Imposta l'allineamento delle etichette di testo sui pulsanti della scheda della barra di Outlook.|  
|[CMFCOutlookBarTabCtrl::SetToolbarImageList](#settoolbarimagelist)|Imposta l'immagine bitmap che contiene le icone visualizzate nella parte inferiore della barra di Outlook in modalità di Outlook 2003 (vedere [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md)).|  
|[CMFCOutlookBarTabCtrl::SetVisiblePageButtons](#setvisiblepagebuttons)||  
  
## <a name="remarks"></a>Note  
 Per creare una barra di Outlook con supporto di ancoraggio, utilizzare un `CMFCOutlookBar` oggetto per ospitare il controllo scheda della barra di Outlook. Per ulteriori informazioni, vedere [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md).  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come inizializzare un `CMFCOutlookBarTabCtrl` e utilizzare diversi metodi di `CMFCOutlookBarTabCtrl` (classe). Nell'esempio viene illustrato come abilitare la modifica sul posto dell'etichetta di testo sui pulsanti di pagina della scheda della barra di Outlook, abilitare l'animazione, abilitare l'handle di scorrimento che consentono all'utente di scorrere i pulsanti nel riquadro della barra di Outlook, impostare le dimensioni del bordo del controllo scheda Outlook e impostare l'allineamento delle etichette di testo sui pulsanti della scheda della barra di Outlook. Questo frammento di codice fa parte di [esempio dimostrativo Outlook](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_OutlookDemo n.&1;](../../mfc/reference/codesnippet/cpp/cmfcoutlookbartabctrl-class_1.cpp)]  
[!code-cpp[NVC_MFC_OutlookDemo n.&2;](../../mfc/reference/codesnippet/cpp/cmfcoutlookbartabctrl-class_2.cpp)]  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md)  
  
 [CMFCOutlookBarTabCtrl](../../mfc/reference/cmfcoutlookbartabctrl-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxoutlookbartabctrl.h  
  
##  <a name="a-nameaddcontrola--cmfcoutlookbartabctrladdcontrol"></a><a name="addcontrol"></a>CMFCOutlookBarTabCtrl::AddControl  
 Aggiunge un controllo di Windows come una nuova scheda nella barra di Outlook.  
  
```  
void AddControl(
    CWnd* pWndCtrl,  
    LPCTSTR lpszName,  
    int nImageID=-1,  
    BOOL bDetachable=TRUE,  
    DWORD dwControlBarStyle=AFX_CBRS_FLOAT |  AFX_CBRS_CLOSE | AFX_CBRS_RESIZE |  CBRS_AFX_AUTOHIDE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndCtrl`  
 Un puntatore a un controllo da aggiungere.  
  
 [in] `lpszName`  
 Specifica il nome della scheda.  
  
 [in] `bDetachable`  
 Se `TRUE`, la pagina verrà creata come rimovibile.  
  
 [in] `nImageID`  
 Indice dell'immagine nell'elenco di immagini interna per l'immagine da visualizzare nella nuova scheda.  
  
 [in] `dwControlBarStyle`  
 Specifica l'AFX _ `CBRS_`* stile per i riquadri ancorati sottoposta a wrapping.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per aggiungere un controllo come una nuova pagina di una barra di outlook.  
  
 Questa funzione chiama internamente in [CMFCBaseTabCtrl::AddTab](../../mfc/reference/cmfcbasetabctrl-class.md#addtab).  
  
 Se si imposta `bDetachable` a `TRUE`, `AddControl` crea internamente un `CDockablePaneAdapter` dell'oggetto ed esegue il wrapping del controllo aggiunto. Imposta automaticamente la classe di runtime della finestra a schede per la classe di runtime di `CMFCOutlookBar` e la classe di runtime del frame mobile di `CMultiPaneFrameWnd`.  
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrato come utilizzare il `AddControl` metodo la `CMFCOutlookBarTabCtrl` classe. Questo frammento di codice fa parte di [esempio dimostrativo Outlook](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_OutlookDemo n.&3;](../../mfc/reference/codesnippet/cpp/cmfcoutlookbartabctrl-class_3.cpp)]  
  
##  <a name="a-namecanshowfewerpagebuttonsa--cmfcoutlookbartabctrlcanshowfewerpagebuttons"></a><a name="canshowfewerpagebuttons"></a>CMFCOutlookBarTabCtrl::CanShowFewerPageButtons  
 Chiamato dal framework durante il ridimensionamento di operazioni per determinare se è possono visualizzare i pulsanti pagina scheda barra Outlook meno maggiore di quello attualmente visibile.  
  
```  
virtual BOOL CanShowFewerPageButtons() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se è presente più di un pulsante. in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il controllo scheda della barra di Outlook in modo dinamico aggiunge o rimuove le schede dalla visualizzazione a seconda di quanto spazio è disponibile. Questo metodo viene utilizzato dal framework per semplificare tale processo.  
  
##  <a name="a-namecanshowmorepagebuttonsa--cmfcoutlookbartabctrlcanshowmorepagebuttons"></a><a name="canshowmorepagebuttons"></a>CMFCOutlookBarTabCtrl::CanShowMorePageButtons  
 Chiamato dal framework durante il ridimensionamento di operazioni per determinare se è possono visualizzare più pulsanti pagina scheda della barra Outlook maggiore di quello attualmente visibile.  
  
```  
virtual BOOL CanShowMorePageButtons() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se sono presenti pulsanti che non sono visibili; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il controllo scheda della barra di Outlook in modo dinamico aggiunge o rimuove le schede dalla visualizzazione, a seconda di quanto spazio è disponibile. Questo metodo viene utilizzato dal framework per semplificare tale processo.  
  
##  <a name="a-namecreatea--cmfcoutlookbartabctrlcreate"></a><a name="create"></a>CMFCOutlookBarTabCtrl::Create  
 Crea il controllo scheda della barra di Outlook.  
  
```  
virtual BOOL Create(
    const CRect& rect,  
    CWnd* pParentWnd,  
    UINT nID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `rect`  
 Specifica la dimensione e posizione, espressa in pixel.  
  
 [in] `pParentWnd`  
 Punta alla finestra padre. Non deve essere `NULL`.  
  
 [in] `nID`  
 ID del controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il controllo è stato creato correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 In genere, quando vengono creati controlli scheda della barra di outlook [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md) controlli il `WM_CREATE` messaggio del processo.  
  
##  <a name="a-nameenableanimationa--cmfcoutlookbartabctrlenableanimation"></a><a name="enableanimation"></a>CMFCOutlookBarTabCtrl::EnableAnimation  
 Specifica se è abilitata l'animazione che si verifica durante il passaggio tra le schede attive.  
  
```  
static void EnableAnimation(BOOL bEnable=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 Specifica se l'animazione deve essere abilitato o disabilitato.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per attivare e disattivare l'animazione. Quando l'utente apre una pagina della scheda, la didascalia della pagina scorre verso l'alto o verso il basso se è attivata l'animazione. Se l'animazione è disabilitato, la pagina diventa attiva immediatamente.  
  
 Per impostazione predefinita, l'animazione è abilitata.  
  
##  <a name="a-nameenableinplaceedita--cmfcoutlookbartabctrlenableinplaceedit"></a><a name="enableinplaceedit"></a>CMFCOutlookBarTabCtrl::EnableInPlaceEdit  
 Specifica se un utente può modificare le etichette di testo sui pulsanti di pagina della scheda della barra di Outlook.  
  
```  
virtual void EnableInPlaceEdit(BOOL bEnable);
```  
  
### <a name="parameters"></a>Parametri  
 `bEnable`  
 Se `TRUE`, abilitare la modifica sul posto dell'etichetta di testo. Se `FALSE`, disabilitare il processo di modifica sul posto.  
  
### <a name="remarks"></a>Note  
 Chiamare questa funzione per abilitare o disabilitare la modifica sul posto delle etichette di testo dei pulsanti di pagina della scheda. Per impostazione predefinita è disabilitata la modifica sul posto.  
  
##  <a name="a-nameenablescrollbuttonsa--cmfcoutlookbartabctrlenablescrollbuttons"></a><a name="enablescrollbuttons"></a>CMFCOutlookBarTabCtrl::EnableScrollButtons  
 Chiamato dal framework per abilitare gli handle di scorrimento che consentono all'utente di scorrere i pulsanti nel riquadro della barra di Outlook.  
  
```  
void EnableScrollButtons(
    BOOL bEnable = TRUE,  
    BOOL bIsUp = TRUE,  
    BOOL bIsDown = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 Determina se vengono visualizzati i pulsanti di scorrimento.  
  
 [in] `bIsUp`  
 Determina se viene visualizzata la barra di scorrimento principale.  
  
 [in] `bIsDown`  
 Determina se viene visualizzata la barra di scorrimento nella parte inferiore.  
  
### <a name="remarks"></a>Note  
 Consente di visualizzare i pulsanti di scorrimento. Questo metodo viene chiamato dal framework quando la scheda attiva modifiche per ripristinare i pulsanti di scorrimento.  
  
##  <a name="a-namegetbordersizea--cmfcoutlookbartabctrlgetbordersize"></a><a name="getbordersize"></a>CMFCOutlookBarTabCtrl::GetBorderSize  
 Restituisce la dimensione del bordo del controllo scheda Outlook.  
  
```  
int GetBorderSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Le dimensioni del bordo, in pixel.  
  
##  <a name="a-namegetvisiblepagebuttonsa--cmfcoutlookbartabctrlgetvisiblepagebuttons"></a><a name="getvisiblepagebuttons"></a>CMFCOutlookBarTabCtrl::GetVisiblePageButtons  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
int GetVisiblePageButtons() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameisanimationa--cmfcoutlookbartabctrlisanimation"></a><a name="isanimation"></a>CMFCOutlookBarTabCtrl::IsAnimation  
 Specifica se è abilitata l'animazione che si verifica durante il passaggio tra le schede attive.  
  
```  
static BOOL IsAnimation();
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è abilitata l'animazione. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Chiamare il [CMFCOutlookBarTabCtrl::EnableAnimation](#enableanimation) funzione per attivare o disattivare l'animazione.  
  
##  <a name="a-nameismode2003a--cmfcoutlookbartabctrlismode2003"></a><a name="ismode2003"></a>CMFCOutlookBarTabCtrl::IsMode2003  
 Determina se il controllo scheda della barra di Outlook è in una modalità che emula Microsoft Outlook 2003.  
  
```  
BOOL IsMode2003() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se il controllo scheda della barra di Outlook è in modalità di Outlook 2003. in caso contrario `FALSE`;  
  
### <a name="remarks"></a>Note  
 Questo valore viene impostato da [CMFCOutlookBar::SetMode2003](../../mfc/reference/cmfcoutlookbar-class.md#setmode2003).  
  
##  <a name="a-nameonshowfewerpagebuttonsa--cmfcoutlookbartabctrlonshowfewerpagebuttons"></a><a name="onshowfewerpagebuttons"></a>CMFCOutlookBarTabCtrl::OnShowFewerPageButtons  
 Chiamato dal framework per ridurre il numero di pulsanti alla pagina scheda visibili.  
  
```  
virtual void OnShowFewerPageButtons();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo consente di regolare il numero di pulsanti della scheda pagina visibile quando il controllo viene ridimensionato.  
  
##  <a name="a-nameonshowmorepagebuttonsa--cmfcoutlookbartabctrlonshowmorepagebuttons"></a><a name="onshowmorepagebuttons"></a>CMFCOutlookBarTabCtrl::OnShowMorePageButtons  
 Chiamato dal framework per aumentare il numero di pulsanti alla pagina scheda visibili.  
  
```  
virtual void OnShowMorePageButtons();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo regolare il numero di pulsanti alla pagina scheda che sono visibili quando il controllo viene ridimensionato.  
  
##  <a name="a-nameonshowoptionsa--cmfcoutlookbartabctrlonshowoptions"></a><a name="onshowoptions"></a>CMFCOutlookBarTabCtrl::OnShowOptions  
 Consente di visualizzare il **Opzioni riquadro di spostamento** la finestra di dialogo.  
  
```  
virtual void OnShowOptions();
```  
  
### <a name="remarks"></a>Note  
 Il **Opzioni riquadro di spostamento** la finestra di dialogo consente all'utente di selezionare quale devono essere visualizzati i pulsanti pagina scheda e l'ordine in cui vengono visualizzati.  
  
 Questo metodo viene chiamato dal framework quando l'utente seleziona il **Opzioni riquadro di spostamento** voce di menu dal menu di personalizzazione del controllo.  
  
##  <a name="a-namesetactivetaba--cmfcoutlookbartabctrlsetactivetab"></a><a name="setactivetab"></a>CMFCOutlookBarTabCtrl::SetActiveTab  
 Imposta la scheda attiva. La scheda attiva è quella che è aperto, con il relativo contenuto visibile.  
  
```  
virtual BOOL SetActiveTab(int iTab);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iTab`  
 Indice in base zero di una scheda da aprire.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se la scheda specificata è stata aperta correttamente. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 L'effetto visivo di impostazione nella scheda attiva dipende se è stata attivata l'animazione. Per ulteriori informazioni, vedere [CMFCOutlookBarTabCtrl::EnableAnimation](#enableanimation).  
  
##  <a name="a-namesetbordersizea--cmfcoutlookbartabctrlsetbordersize"></a><a name="setbordersize"></a>CMFCOutlookBarTabCtrl::SetBorderSize  
 Imposta le dimensioni del bordo del controllo scheda Outlook.  
  
```  
void SetBorderSize(int nBorderSize);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nBorderSize`  
 Specifica la nuova dimensione del bordo in pixel.  
  
### <a name="remarks"></a>Note  
 Imposta la nuova dimensione del bordo e ricalcola il layout di finestra di outlook.  
  
##  <a name="a-namesetpagebuttontextaligna--cmfcoutlookbartabctrlsetpagebuttontextalign"></a><a name="setpagebuttontextalign"></a>CMFCOutlookBarTabCtrl::SetPageButtonTextAlign  
 Imposta l'allineamento delle etichette di testo sui pulsanti della scheda della barra di Outlook.  
  
```  
void SetPageButtonTextAlign(
    UINT uiAlign,  
    BOOL bRedraw=TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiAlign`  
 Specifica l'allineamento del testo.  
  
 [in] `bRedraw`  
 Se `TRUE`, la finestra di outlook verrà ridisegnata.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per modificare l'allineamento del testo per i pulsanti di pagina.  
  
 `uiAlign`può essere uno dei valori seguenti:  
  
|Costante|Significato|  
|--------------|-------------|  
|TA_LEFT|Allineamento a sinistra|  
|TA_CENTER|Allinea al centro|  
|TA_RIGHT|Allineamento a destra|  
  
 Il valore predefinito è TA_CENTER.  
  
##  <a name="a-namesettoolbarimagelista--cmfcoutlookbartabctrlsettoolbarimagelist"></a><a name="settoolbarimagelist"></a>CMFCOutlookBarTabCtrl::SetToolbarImageList  
 Imposta l'immagine bitmap che contiene le icone visualizzate nella parte inferiore della barra di Outlook in modalità di Outlook 2003.  
  
```  
BOOL SetToolbarImageList(
    UINT uiID,  
    int cx,  
    COLORREF clrTransp=RGB(255, 0, 255));
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiID`  
 Specifica l'ID di risorsa dell'immagine da caricare.  
  
 [in] `cx`  
 Specifica la larghezza di un'immagine nell'elenco delle immagini, in pixel.  
  
 [in] `clrTransp`  
 Un valore RGB che specifica il colore trasparente.  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce `TRUE` se ha esito positivo; in caso contrario restituisce `FALSE`.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione per associare un elenco di immagini con immagini verranno visualizzate sui pulsanti della barra degli strumenti in modalità di Microsoft Office 2003. Gli indici di immagine devono corrispondere agli indici di pagina.  
  
 Questo metodo non deve essere chiamato se non è in modalità di Microsoft Office 2003. Per ulteriori informazioni, vedere [CMFCOutlookBar Class](../../mfc/reference/cmfcoutlookbar-class.md).  
  
##  <a name="a-namesetvisiblepagebuttonsa--cmfcoutlookbartabctrlsetvisiblepagebuttons"></a><a name="setvisiblepagebuttons"></a>CMFCOutlookBarTabCtrl::SetVisiblePageButtons  
 [!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
```  
void SetVisiblePageButtons(int nVisiblePageButtons);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nVisiblePageButtons`  
  
### <a name="remarks"></a>Note  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md)   
 [Classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md)   
 [Classe CMFCOutlookBarPane](../../mfc/reference/cmfcoutlookbarpane-class.md)


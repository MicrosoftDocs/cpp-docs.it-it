---
title: CBaseTabbedPane (classe) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CBaseTabbedPane
- AFXBASETABBEDPANE/CBaseTabbedPane
- AFXBASETABBEDPANE/CBaseTabbedPane::AddTab
- AFXBASETABBEDPANE/CBaseTabbedPane::AllowDestroyEmptyTabbedPane
- AFXBASETABBEDPANE/CBaseTabbedPane::ApplyRestoredTabInfo
- AFXBASETABBEDPANE/CBaseTabbedPane::CanFloat
- AFXBASETABBEDPANE/CBaseTabbedPane::CanSetCaptionTextToTabName
- AFXBASETABBEDPANE/CBaseTabbedPane::ConvertToTabbedDocument
- AFXBASETABBEDPANE/CBaseTabbedPane::DetachPane
- AFXBASETABBEDPANE/CBaseTabbedPane::EnableSetCaptionTextToTabName
- AFXBASETABBEDPANE/CBaseTabbedPane::FillDefaultTabsOrderArray
- AFXBASETABBEDPANE/CBaseTabbedPane::FindBarByTabNumber
- AFXBASETABBEDPANE/CBaseTabbedPane::FindPaneByID
- AFXBASETABBEDPANE/CBaseTabbedPane::FloatTab
- AFXBASETABBEDPANE/CBaseTabbedPane::GetDefaultTabsOrder
- AFXBASETABBEDPANE/CBaseTabbedPane::GetFirstVisibleTab
- AFXBASETABBEDPANE/CBaseTabbedPane::GetMinSize
- AFXBASETABBEDPANE/CBaseTabbedPane::GetPaneIcon
- AFXBASETABBEDPANE/CBaseTabbedPane::GetPaneList
- AFXBASETABBEDPANE/CBaseTabbedPane::GetTabArea
- AFXBASETABBEDPANE/CBaseTabbedPane::GetTabsNum
- AFXBASETABBEDPANE/CBaseTabbedPane::GetUnderlyingWindow
- AFXBASETABBEDPANE/CBaseTabbedPane::GetVisibleTabsNum
- AFXBASETABBEDPANE/CBaseTabbedPane::HasAutoHideMode
- AFXBASETABBEDPANE/CBaseTabbedPane::IsHideSingleTab
- AFXBASETABBEDPANE/CBaseTabbedPane::RecalcLayout
- AFXBASETABBEDPANE/CBaseTabbedPane::RemovePane
- AFXBASETABBEDPANE/CBaseTabbedPane::SetAutoDestroy
- AFXBASETABBEDPANE/CBaseTabbedPane::SetAutoHideMode
- AFXBASETABBEDPANE/CBaseTabbedPane::ShowTab
dev_langs:
- C++
helpviewer_keywords:
- CBaseTabbedPane [MFC], AddTab
- CBaseTabbedPane [MFC], AllowDestroyEmptyTabbedPane
- CBaseTabbedPane [MFC], ApplyRestoredTabInfo
- CBaseTabbedPane [MFC], CanFloat
- CBaseTabbedPane [MFC], CanSetCaptionTextToTabName
- CBaseTabbedPane [MFC], ConvertToTabbedDocument
- CBaseTabbedPane [MFC], DetachPane
- CBaseTabbedPane [MFC], EnableSetCaptionTextToTabName
- CBaseTabbedPane [MFC], FillDefaultTabsOrderArray
- CBaseTabbedPane [MFC], FindBarByTabNumber
- CBaseTabbedPane [MFC], FindPaneByID
- CBaseTabbedPane [MFC], FloatTab
- CBaseTabbedPane [MFC], GetDefaultTabsOrder
- CBaseTabbedPane [MFC], GetFirstVisibleTab
- CBaseTabbedPane [MFC], GetMinSize
- CBaseTabbedPane [MFC], GetPaneIcon
- CBaseTabbedPane [MFC], GetPaneList
- CBaseTabbedPane [MFC], GetTabArea
- CBaseTabbedPane [MFC], GetTabsNum
- CBaseTabbedPane [MFC], GetUnderlyingWindow
- CBaseTabbedPane [MFC], GetVisibleTabsNum
- CBaseTabbedPane [MFC], HasAutoHideMode
- CBaseTabbedPane [MFC], IsHideSingleTab
- CBaseTabbedPane [MFC], RecalcLayout
- CBaseTabbedPane [MFC], RemovePane
- CBaseTabbedPane [MFC], SetAutoDestroy
- CBaseTabbedPane [MFC], SetAutoHideMode
- CBaseTabbedPane [MFC], ShowTab
ms.assetid: f22c0080-5b29-4a0a-8f74-8f0a4cd2dbcf
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: df130c2d5eee3e661f7ead2db156d2ac33349f68
ms.sourcegitcommit: 76fd30ff3e0352e2206460503b61f45897e60e4f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/13/2018
ms.locfileid: "39027758"
---
# <a name="cbasetabbedpane-class"></a>CBaseTabbedPane (classe)
Estende la funzionalità della [CDockablePane Class](../../mfc/reference/cdockablepane-class.md) per supportare la creazione di finestre a schede.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CBaseTabbedPane : public CDockablePane  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|`CBaseTabbedPane::CBaseTabbedPane`|Costruttore predefinito.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Cbasetabbedpane:: addTab](#addtab)|Aggiunge una nuova scheda a un riquadro a schede.|  
|[CBaseTabbedPane::AllowDestroyEmptyTabbedPane](#allowdestroyemptytabbedpane)|Specifica se un riquadro a schede vuoto può essere eliminato definitivamente.|  
|[CBaseTabbedPane::ApplyRestoredTabInfo](#applyrestoredtabinfo)|Applica le impostazioni della scheda, che vengono caricate dal Registro di sistema, di un riquadro a schede.|  
|[CBaseTabbedPane::CanFloat](#canfloat)|Determina se il riquadro può spostarsi. (Esegue l'override [CBasePane::CanFloat](../../mfc/reference/cbasepane-class.md#canfloat).)|  
|[CBaseTabbedPane::CanSetCaptionTextToTabName](#cansetcaptiontexttotabname)|Determina se la didascalia per il riquadro a schede deve visualizzare lo stesso testo come scheda attiva.|  
|[CBaseTabbedPane::ConvertToTabbedDocument](#converttotabbeddocument)|(Esegue l'override [CDockablePane::ConvertToTabbedDocument](../../mfc/reference/cdockablepane-class.md#converttotabbeddocument).)|  
|[Cbasetabbedpane:: Detachpane](#detachpane)|Converte uno o più riquadri ancorabili in documenti MDI a schede.|  
|[CBaseTabbedPane::EnableSetCaptionTextToTabName](#enablesetcaptiontexttotabname)|Abilita o disabilita la funzionalità del riquadro a schede per la sincronizzazione di testo del titolo con il testo dell'etichetta nella scheda attiva.|  
|[CBaseTabbedPane::FillDefaultTabsOrderArray](#filldefaulttabsorderarray)|Consente di ripristinare l'ordine di tabulazione interni in uno stato predefinito.|  
|[CBaseTabbedPane::FindBarByTabNumber](#findbarbytabnumber)|Restituisce un riquadro che si trova in una scheda quando la scheda è identificata da un indice in base zero della scheda.|  
|||  
|[CBaseTabbedPane::FindPaneByID](#findpanebyid)|Restituisce un riquadro in cui viene identificato tramite l'ID di riquadro.|  
|[Cbasetabbedpane:: Floattab](#floattab)|Separa un riquadro, ma solo se il riquadro si trova in una scheda rimovibile.|  
|[CBaseTabbedPane::GetDefaultTabsOrder](#getdefaulttabsorder)|Restituisce l'ordine predefinito delle schede nel riquadro.|  
|[CBaseTabbedPane::GetFirstVisibleTab](#getfirstvisibletab)|Recupera un puntatore alla prima scheda visualizzata.|  
|[CBaseTabbedPane::GetMinSize](#getminsize)|Recupera il valore minimo consentito dimensioni per il riquadro. (Esegue l'override [CPane::GetMinSize](../../mfc/reference/cpane-class.md#getminsize).)|  
|[CBaseTabbedPane::GetPaneIcon](#getpaneicon)|Restituisce un handle per l'icona del riquadro. (Esegue l'override [CBasePane::GetPaneIcon](../../mfc/reference/cbasepane-class.md#getpaneicon).)|  
|[CBaseTabbedPane::GetPaneList](#getpanelist)|Restituisce un elenco di riquadri contenuti nel riquadro a schede.|  
|[CBaseTabbedPane::GetTabArea](#gettabarea)|Restituisce i rettangoli di delimitazione per le aree di scheda superiore e inferiore.|  
|[CBaseTabbedPane::GetTabsNum](#gettabsnum)|Restituisce il numero di schede in una finestra scheda.|  
|[CBaseTabbedPane::GetUnderlyingWindow](#getunderlyingwindow)|Ottiene la finestra Scheda (sottoposta a wrapping) sottostante.|  
|[CBaseTabbedPane::GetVisibleTabsNum](#getvisibletabsnum)|Restituisce il numero delle schede visualizzate.|  
|[Cbasetabbedpane:: Hasautohidemode](#hasautohidemode)|Determina se il riquadro a schede che può essere usato in modalità Nascondi automaticamente.|  
|[CBaseTabbedPane::IsHideSingleTab](#ishidesingletab)|Determina se il riquadro a schede viene nascosto se solo uno scheda viene visualizzata.|  
|`CBaseTabbedPane::LoadSiblingPaneIDs`|Utilizzato internamente durante la serializzazione.|  
|[CBaseTabbedPane::RecalcLayout](#recalclayout)|Ricalcola le informazioni sul layout per il riquadro. (Esegue l'override [cpane:: RecalcLayout](../../mfc/reference/cpane-class.md#recalclayout).)|  
|[CBaseTabbedPane::RemovePane](#removepane)|Rimuove un riquadro dal riquadro a schede.|  
|`CBaseTabbedPane::SaveSiblingBarIDs`|Utilizzato internamente durante la serializzazione.|  
|`CBaseTabbedPane::Serialize`|(Esegue l'override [CDockablePane:: Serialize](http://msdn.microsoft.com/09787e59-e446-4e76-894b-206d303dcfd6).)|  
|`CBaseTabbedPane::SerializeTabWindow`|Utilizzato internamente durante la serializzazione.|  
|[CBaseTabbedPane::SetAutoDestroy](#setautodestroy)|Determina se la barra di controllo a schede verrà eliminata automaticamente.|  
|[CBaseTabbedPane::SetAutoHideMode](#setautohidemode)|Gli elementi Toggle visualizzato tra il riquadro ancorato e modalità Nascondi automaticamente. (Esegue l'override [CDockablePane::SetAutoHideMode](../../mfc/reference/cdockablepane-class.md#setautohidemode).)|  
|[CBaseTabbedPane::ShowTab](#showtab)|Mostra o nasconde una scheda.|  
  
## <a name="remarks"></a>Note  
 Questa classe è una classe astratta e non è possibile creare un'istanza. Implementa i servizi che sono comuni a tutti i tipi di riquadri a schede.  
  
 Attualmente, la libreria include due classi derivate riquadro a schede: [classe CTabbedPane](../../mfc/reference/ctabbedpane-class.md) e [CMFCOutlookBar (classe)](../../mfc/reference/cmfcoutlookbar-class.md).  
  
 Oggetto `CBaseTabbedPane` esegue il wrapping di un puntatore a un [classe CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md) oggetto. [Classe CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md) diventa quindi una finestra figlio del riquadro a schede.  
  
 Per altre informazioni su come creare riquadri a schede, vedere [CDockablePane Class](../../mfc/reference/cdockablepane-class.md), [classe CTabbedPane](../../mfc/reference/ctabbedpane-class.md), e [CMFCOutlookBar (classe)](../../mfc/reference/cmfcoutlookbar-class.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CBasePane](../../mfc/reference/cbasepane-class.md)  
  
 [CPane](../../mfc/reference/cpane-class.md)  
  
 [CDockablePane](../../mfc/reference/cdockablepane-class.md)  
  
 `CBaseTabbedPane`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxBaseTabbedPane.h  
  
##  <a name="addtab"></a>  Cbasetabbedpane:: addTab  
 Aggiunge una nuova scheda a un riquadro a schede.  
  
```  
virtual BOOL AddTab(
    CWnd* pNewBar,  
    BOOL bVisible = TRUE,  
    BOOL bSetActive = TRUE,  
    BOOL bDetachable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] [out] *pNewBar*  
 Puntatore al riquadro da aggiungere. Puntatore ' this ' potrebbero diventare non valide dopo aver chiamato questo metodo. Per altre informazioni, vedere la sezione Osservazioni.  
  
 [in] *bVisible*  
 TRUE per visualizzare la scheda; in caso contrario, FALSE.  
  
 [in] *bSetActive*  
 TRUE per rendere la scheda nella scheda attiva; in caso contrario, FALSE.  
  
 [in] *bDetachable*  
 True per rendere la scheda rimovibile; in caso contrario, FALSE.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il riquadro è stato aggiunto correttamente come una scheda e non è stato eliminato durante il processo. FALSE se il riquadro da aggiungere è un oggetto di tipo `CBaseTabbedPane`. Per altre informazioni, vedere la sezione Osservazioni.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per aggiungere un riquadro come una nuova scheda nel riquadro a schede. Se *pNewBar* punta a un oggetto di tipo `CBaseTabbedPane`, tutte le sue schede vengono copiate nel riquadro a schede e quindi *pNewBar* viene distrutto. Pertanto *pNewBar* diventa un puntatore non valido e non deve essere utilizzato.  
  
##  <a name="allowdestroyemptytabbedpane"></a>  CBaseTabbedPane::AllowDestroyEmptyTabbedPane  
 Specifica se un riquadro a schede vuoto può essere eliminato definitivamente.  
  
```  
virtual BOOL AllowDestroyEmptyTabbedPane() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se un riquadro a schede vuoto può essere eliminato; in caso contrario, FALSE. L'implementazione predefinita restituisce sempre TRUE.  
  
### <a name="remarks"></a>Note  
 Se un riquadro a schede vuoto non è consentito da distruggere, il framework nasconde il riquadro invece.  
  
##  <a name="applyrestoredtabinfo"></a>  CBaseTabbedPane::ApplyRestoredTabInfo  
 Carica le impostazioni di tabulazione nel Registro di sistema e li applica a un riquadro a schede.  
  
```  
virtual void ApplyRestoredTabInfo(BOOL bUseTabIndexes = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bUseTabIndexes*  
 Questo parametro viene utilizzato internamente dal framework.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework quando Ricarica ancoraggio le informazioni sullo stato dal Registro di sistema. Il metodo ottiene informazioni sull'ordine di tabulazione e i nomi delle schede per un riquadro a schede.  
  
##  <a name="canfloat"></a>  CBaseTabbedPane::CanFloat  
 Specifica se il riquadro a schede può spostarsi.  
  
```  
virtual BOOL CanFloat() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il riquadro può spostarsi; in caso contrario, FALSE.  
  
##  <a name="cansetcaptiontexttotabname"></a>  CBaseTabbedPane::CanSetCaptionTextToTabName  
 Determina se la didascalia per il riquadro a schede deve visualizzare lo stesso testo come scheda attiva.  
  
```  
virtual BOOL CanSetCaptionTextToTabName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il testo della didascalia del riquadro a schede è impostato per il testo della scheda attiva; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Il metodo viene utilizzato per determinare se il testo visualizzato nei duplicati di didascalia del riquadro a schede che l'etichetta della scheda attiva. È possibile abilitare o disabilitare questa funzionalità chiamando [CBaseTabbedPane::EnableSetCaptionTextToTabName](#enablesetcaptiontexttotabname).  
  
##  <a name="converttotabbeddocument"></a>  CBaseTabbedPane::ConvertToTabbedDocument  
 Converte uno o più riquadri ancorabili in documenti MDI a schede.  
  
```  
virtual void ConvertToTabbedDocument(BOOL bActiveTabOnly = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bActiveTabOnly*  
 Quando si converte un riquadro a schede, specificare TRUE per convertire solo la scheda attiva. Specificare FALSE per convertire tutte le schede nel riquadro.  
  
##  <a name="detachpane"></a>  Cbasetabbedpane:: Detachpane  
 Scollega un riquadro dal riquadro a schede.  
  
```  
virtual BOOL DetachPane(
    CWnd* pBar,  
    BOOL bHide = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pBar*  
 Puntatore al riquadro e quindi scollegare.  
  
 [in] *bHide*  
 Parametro booleano che specifica se il framework nasconde il riquadro dopo viene scollegato.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il framework correttamente scollega il riquadro attività. FALSE se *pBar* è NULL o fa riferimento a un riquadro in cui non si trova nel riquadro a schede.  
  
### <a name="remarks"></a>Note  
 Il framework viene spostata nel disconnesso riquadro se possibile. Per altre informazioni, vedere [CBasePane::CanFloat](../../mfc/reference/cbasepane-class.md#canfloat).  
  
##  <a name="enablesetcaptiontexttotabname"></a>  CBaseTabbedPane::EnableSetCaptionTextToTabName  
 Abilita o disabilita la funzionalità del riquadro a schede per la sincronizzazione di testo del titolo con il testo dell'etichetta nella scheda attiva.  
  
```  
virtual void EnableSetCaptionTextToTabName(BOOL bEnable);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bAttivare il*  
 TRUE per sincronizzare la didascalia del riquadro a schede con una didascalia per la scheda attiva in caso contrario, FALSE.  
  
##  <a name="filldefaulttabsorderarray"></a>  CBaseTabbedPane::FillDefaultTabsOrderArray  
 Consente di ripristinare l'ordine di tabulazione interni in uno stato predefinito.  
  
```  
void FillDefaultTabsOrderArray();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato quando il framework Ripristina una barra di Outlook in uno stato iniziale.  
  
##  <a name="findpanebyid"></a>  CBaseTabbedPane::FindPaneByID  
 Restituisce un riquadro identificato dall'ID riquadro.  
  
```  
virtual CWnd* FindPaneByID(UINT uBarID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *uBarID*  
 Specifica l'ID del riquadro da trovare.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al riquadro se è stato trovato; in caso contrario, NULL.  
  
### <a name="remarks"></a>Note  
 Questo metodo confronta tutte le schede nel riquadro e restituisce quello con l'ID specificato per il *uBarID* parametro.  
  
##  <a name="findbarbytabnumber"></a>  CBaseTabbedPane::FindBarByTabNumber  
 Restituisce un riquadro che si trova in una scheda.  
  
```  
virtual CWnd* FindBarByTabNumber(
    int nTabNum,  
    BOOL bGetWrappedBar = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *nTabNum*  
 Specifica l'indice in base zero della scheda da recuperare.  
  
 [in] *bGetWrappedBar*  
 TRUE per restituire la finestra sottostante (sottoposta a wrapping) del riquadro invece il riquadro stesso. in caso contrario, FALSE. Ciò vale solo per i riquadri derivati da [CDockablePaneAdapter](../../mfc/reference/cdockablepaneadapter-class.md).  
  
### <a name="return-value"></a>Valore restituito  
 Se viene trovato nel riquadro, viene restituito un puntatore valido per il riquadro viene eseguita la ricerca; in caso contrario, NULL.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per recuperare il riquadro che si trovano nella scheda specificata dal *nTabNum* parametro.  
  
##  <a name="floattab"></a>  Cbasetabbedpane:: Floattab  
 Separa un riquadro, ma solo se il riquadro si trova in una scheda rimovibile.  
  
```  
virtual BOOL FloatTab(
    CWnd* pBar,  
    int nTabID,  
    AFX_DOCK_METHOD dockMethod,  
    BOOL bHide = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] [out] *pBar*  
 Puntatore al riquadro e float.  
  
 [in] *nTabID*  
 Specifica l'indice in base zero della scheda a float.  
  
 [in] *dockMethod*  
 Specifica il metodo da usare per spostare il riquadro. Per altre informazioni, vedere la sezione Osservazioni.  
  
 [in] *bHide*  
 TRUE per nascondere il riquadro prima mobile. in caso contrario, FALSE.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il riquadro resa; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per float un riquadro che attualmente si trova in una scheda rimovibile.  
  
 Se si desidera scollegare un riquadro a livello di programmazione, specificare DM_SHOW per il *dockMethod* parametro. Se si desidera rendere mobile il riquadro nella stessa posizione in cui resa in precedenza, specificare DM_DBL_CLICK come le *dockMethod* parametro.  
  
##  <a name="getdefaulttabsorder"></a>  CBaseTabbedPane::GetDefaultTabsOrder  
 Restituisce l'ordine predefinito delle schede nel riquadro.  
  
```  
const CArray<int,int>& GetDefaultTabsOrder();
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto `CArray` oggetto che specifica l'ordine predefinito delle schede nel riquadro.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo quando una barra di Outlook viene reimpostata su uno stato iniziale.  
  
##  <a name="getfirstvisibletab"></a>  CBaseTabbedPane::GetFirstVisibleTab  
 Recupera un puntatore alla prima scheda visualizzata.  
  
```  
virtual CWnd* GetFirstVisibleTab(int& iTabNum);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *iTabNum*  
 Un riferimento a un numero intero. Questo metodo scrive l'indice in base zero della prima scheda visualizzata da questo parametro, oppure -1 se non è visualizzata alcuna scheda viene trovata.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un puntatore alla prima scheda visualizzato; in caso contrario, NULL.  
  
##  <a name="getminsize"></a>  CBaseTabbedPane::GetMinSize  
 Recupera il valore minimo consentito dimensioni per il riquadro.  
  
```  
virtual void GetMinSize(CSize& size) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] *dimensioni*  
 Oggetto `CSize` oggetto che viene riempito con il valore minimo le dimensioni massime consentito.  
  
### <a name="remarks"></a>Note  
 Se una gestione coerente delle dimensioni riquadro minimo è attiva ( [CPane::m_bHandleMinSize](../../mfc/reference/cpane-class.md#m_bhandleminsize)), *dimensioni* viene riempita con il valore minimo consentito di dimensioni per la scheda attiva. In caso contrario, *dimensioni* viene riempita con il valore restituito [CPane::GetMinSize](../../mfc/reference/cpane-class.md#getminsize).  
  
##  <a name="getpaneicon"></a>  CBaseTabbedPane::GetPaneIcon  
 Recupera il valore minimo consentito dimensioni per il riquadro.  
  
```  
virtual void GetMinSize(CSize& size) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] *dimensioni*  
 Oggetto `CSize` oggetto che viene riempito con il valore minimo le dimensioni massime consentito.  
  
### <a name="remarks"></a>Note  
 Se una gestione coerente delle dimensioni riquadro minimo è attiva ( [CPane::m_bHandleMinSize](../../mfc/reference/cpane-class.md#m_bhandleminsize)), *dimensioni* viene riempita con il valore minimo consentito di dimensioni per la scheda attiva. In caso contrario, *dimensioni* viene riempita con il valore restituito [CPane::GetMinSize](../../mfc/reference/cpane-class.md#getminsize).  
  
##  <a name="getpanelist"></a>  CBaseTabbedPane::GetPaneList  
 Restituisce un elenco di riquadri contenuti nel riquadro a schede.  
  
```  
virtual void GetPaneList(
    CObList& lst,  
    CRuntimeClass* pRTCFilter = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [out] *lst*  
 Oggetto `CObList` compilato con i riquadri contenuti nel riquadro a schede.  
  
 [in] *pRTCFilter*  
 Se non è NULL, l'elenco restituito contiene solo i riquadri che appartengono alla classe di runtime specificato.  
  
##  <a name="gettabarea"></a>  CBaseTabbedPane::GetTabArea  
 Restituisce i rettangoli di delimitazione per le aree di scheda superiore e inferiore.  
  
```  
virtual void GetTabArea(
    CRect& rectTabAreaTop,  
    CRect& rectTabAreaBottom) const = 0;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] *rectTabAreaTop*  
 Riceve le coordinate dello schermo dell'area della scheda superiore.  
  
 [out] *rectTabAreaBottom*  
 Riceve le coordinate dello schermo dell'area della scheda inferiore.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per determinare i rettangoli di delimitazione, nelle coordinate dello schermo, per le aree della scheda superiore e inferiore.  
  
##  <a name="gettabsnum"></a>  CBaseTabbedPane::GetTabsNum  
 Restituisce il numero di schede in una finestra scheda.  
  
```  
virtual int GetTabsNum() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di schede nel riquadro a schede.  
  
##  <a name="getunderlyingwindow"></a>  CBaseTabbedPane::GetUnderlyingWindow  
 Ottiene la finestra Scheda (sottoposta a wrapping) sottostante.  
  
```  
virtual CMFCBaseTabCtrl* GetUnderlyingWindow();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla finestra Scheda sottostante.  
  
##  <a name="getvisibletabsnum"></a>  CBaseTabbedPane::GetVisibleTabsNum  
 Restituisce il numero di schede visibili.  
  
```  
virtual int GetVisibleTabsNum() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di schede visibili, che sarà maggiore o uguale a zero.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per determinare il numero di schede visibili nel riquadro a schede.  
  
##  <a name="hasautohidemode"></a>  Cbasetabbedpane:: Hasautohidemode  
 Determina se il riquadro a schede può passare alla modalità Nascondi automaticamente.  
  
```  
virtual BOOL HasAutoHideMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il riquadro è possibile passare alla modalità Nascondi automaticamente. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Se la modalità Nascondi automaticamente è disabilitata, nessun pulsante pin viene visualizzato sulla barra del titolo riquadro a schede.  
  
##  <a name="ishidesingletab"></a>  CBaseTabbedPane::IsHideSingleTab  
 Determina se il riquadro a schede viene nascosto se solo uno scheda viene visualizzata.  
  
```  
virtual BOOL IsHideSingleTab() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la finestra di scheda non viene visualizzata quando è presente una sola scheda visibile. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Se il riquadro non viene visualizzato perché solo una scheda è aperta, è possibile chiamare questo metodo per determinare se il riquadro a schede che funzioni correttamente.  
  
##  <a name="removepane"></a>  CBaseTabbedPane::RemovePane  
 Rimuove un riquadro dal riquadro a schede.  
  
```  
virtual BOOL RemovePane(CWnd* pBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] [out] *pBar*  
 Puntatore al riquadro per rimuovere dal riquadro a schede.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se il riquadro è stato rimosso dal riquadro a schede e se il riquadro a schede è ancora valido. FALSO se l'ultimo riquadro è stato rimosso dal riquadro a schede e il riquadro a schede che sta per essere eliminata. Se il valore restituito è FALSE, non usare più il riquadro a schede.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per rimuovere il riquadro specificato per il *pBar* parametro dal riquadro a schede.  
  
##  <a name="setautodestroy"></a>  CBaseTabbedPane::SetAutoDestroy  
 Determina se la barra di controllo a schede verrà eliminata automaticamente.  
  
```  
void SetAutoDestroy(BOOL bAutoDestroy = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *il flag bAutoDestroy*  
 TRUE se il riquadro a schede che è stato creato in modo dinamico e non si controlla la sua durata; in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Impostare l'auto-eliminare definitivamente la modalità su TRUE se si crea un riquadro a schede in modo dinamico e se non si controlla la durata. Se Elimina automaticamente la modalità è TRUE, il riquadro a schede viene distrutto automaticamente dal framework.  
  
##  <a name="showtab"></a>  CBaseTabbedPane::ShowTab  
 Mostra o nasconde una scheda.  
  
```  
virtual BOOL ShowTab(
    CWnd* pBar,  
    BOOL bShow,  
    BOOL bDelay,  
    BOOL bActivate);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *pBar*  
 Puntatore al riquadro per mostrare o nascondere.  
  
 [in] *bMostra*  
 TRUE per mostrare il riquadro attività. FALSE per nascondere il riquadro.  
  
 [in] *bDelay*  
 TRUE per ritardare la regolazione del layout della scheda; in caso contrario, FALSE.  
  
 [in] *bActivate*  
 TRUE per rendere la scheda nella scheda attiva; in caso contrario, FALSE.  
  
### <a name="return-value"></a>Valore restituito  
 TRUE se la scheda è stata sia visualizzata o nascosta correttamente. in caso contrario, FALSE.  
  
### <a name="remarks"></a>Note  
 Quando si chiama questo metodo, un riquadro viene visualizzato o nascosto, in base al valore di *bMostra* parametro. Se si nasconde una scheda ed è l'ultima scheda visibile nella finestra a schede sottostante, il riquadro a schede è nascosto. Se si visualizza una scheda quando non esistevano in precedenza schede visibili, viene visualizzato il riquadro a schede.  
  
##  <a name="recalclayout"></a>  CBaseTabbedPane::RecalcLayout  
 Ricalcola le informazioni sul layout per il riquadro.  
  
```  
virtual void RecalcLayout();
```  
  
### <a name="remarks"></a>Note  
 Se il riquadro è mobile, questo metodo notifica al framework di ridimensionare il riquadro per le dimensioni correnti della mini-cornice.  
  
 Se il riquadro viene ancorato, questo metodo non esegue alcuna operazione.  
  
##  <a name="setautohidemode"></a>  CBaseTabbedPane::SetAutoHideMode  
 Imposta la modalità Nascondi automaticamente per i riquadri delle schede nel riquadro a schede.  
  
```  
virtual CMFCAutoHideToolBar* SetAutoHideMode(
    BOOL bMode,  
    DWORD dwAlignment,  
    CMFCAutoHideToolBar* pCurrAutoHideBar = NULL,  
    BOOL bUseTimer = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] *bMode*  
 TRUE per abilitare la modalità Nascondi automaticamente. FALSE per abilitare la modalità di ancoraggio standard.  
  
 [in] *dwAlignment*  
 Specifica l'allineamento del riquadro Nascondi automaticamente che deve essere creato. Per un elenco di valori possibili, vedere [CPane::MoveByAlignment](../../mfc/reference/cpane-class.md#movebyalignment).  
  
 [in] [out] *pCurrAutoHideBar*  
 Puntatore a barra Nascondi automaticamente corrente. Può essere NULL.  
  
 [in] *bUseTimer*  
 Specifica se utilizzare l'effetto di Nascondi automaticamente quando l'utente attiva il riquadro di modalità Nascondi automaticamente o per nascondere il riquadro immediatamente.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a barra Nascondi automaticamente che viene creato quando si passa alla modalità Nascondi automaticamente, oppure NULL se nessuna barra degli strumenti viene creata.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo quando un utente sceglie il pulsante del blocco per passare al riquadro a schede alla modalità Nascondi automaticamente o alla modalità di ancoraggio normale.  
  
 Modalità Nascondi automaticamente è impostata per ogni riquadro schede nel riquadro a schede. I riquadri che sono non rimovibili vengono ignorati. Per altre informazioni, vedere [cmfcbasetabctrl:: Enabletabdetach](../../mfc/reference/cmfcbasetabctrl-class.md#enabletabdetach).  
  
 Chiamare questo metodo per un riquadro a schede alla modalità Nascondi automaticamente a livello di codice. Il riquadro deve essere ancorato nella finestra cornice principale ( [CDockablePane::GetDefaultPaneDivider](../../mfc/reference/cdockablepane-class.md#getdefaultpanedivider) devono restituire un puntatore valido per il [CPaneDivider](../../mfc/reference/cpanedivider-class.md)).  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CDockablePane](../../mfc/reference/cdockablepane-class.md)

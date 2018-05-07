---
title: Classe CBaseTabbedPane | Documenti Microsoft
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
ms.openlocfilehash: d628758f19c36112bf896e11c97df3e1f92cbc47
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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
|[Cbasetabbedpane::](#addtab)|Aggiunge una nuova scheda in un riquadro a schede.|  
|[CBaseTabbedPane::AllowDestroyEmptyTabbedPane](#allowdestroyemptytabbedpane)|Specifica se un riquadro a schede vuoto possa essere eliminato.|  
|[CBaseTabbedPane::ApplyRestoredTabInfo](#applyrestoredtabinfo)|Applica le impostazioni di tabulazione, che vengono caricate dal Registro di sistema, a un riquadro a schede.|  
|[CBaseTabbedPane::CanFloat](#canfloat)|Determina se il riquadro è mobile. (Esegue l'override [CBasePane::CanFloat](../../mfc/reference/cbasepane-class.md#canfloat).)|  
|[CBaseTabbedPane::CanSetCaptionTextToTabName](#cansetcaptiontexttotabname)|Determina se la didascalia per il riquadro a schede deve essere visualizzato lo stesso testo come scheda attiva.|  
|[CBaseTabbedPane::ConvertToTabbedDocument](#converttotabbeddocument)|(Esegue l'override [CDockablePane::ConvertToTabbedDocument](../../mfc/reference/cdockablepane-class.md#converttotabbeddocument).)|  
|[Cbasetabbedpane:: Detachpane](#detachpane)|Converte uno o più riquadri ancorabili in documenti a schede MDI.|  
|[CBaseTabbedPane::EnableSetCaptionTextToTabName](#enablesetcaptiontexttotabname)|Abilita o disabilita la funzionalità del riquadro a schede per la sincronizzazione di testo del titolo con il testo dell'etichetta nella scheda attiva.|  
|[CBaseTabbedPane::FillDefaultTabsOrderArray](#filldefaulttabsorderarray)|Ripristina l'ordine di tabulazione interno a uno stato predefinito.|  
|[CBaseTabbedPane::FindBarByTabNumber](#findbarbytabnumber)|Restituisce un riquadro che si trova in una scheda quando la scheda è identificata da un indice di tabulazione in base zero.|  
|||  
|[CBaseTabbedPane::FindPaneByID](#findpanebyid)|Restituisce un riquadro che è identificato dall'ID di riquadro.|  
|[Cbasetabbedpane:: Floattab](#floattab)|Separa un riquadro, ma solo se il riquadro si trova in una scheda rimovibile.|  
|[CBaseTabbedPane::GetDefaultTabsOrder](#getdefaulttabsorder)|Restituisce l'ordine predefinito delle schede nel riquadro.|  
|[CBaseTabbedPane::GetFirstVisibleTab](#getfirstvisibletab)|Recupera un puntatore alla prima scheda visualizzata.|  
|[CBaseTabbedPane::GetMinSize](#getminsize)|Recupera il valore minimo consentito per il riquadro. (Esegue l'override [CPane::GetMinSize](../../mfc/reference/cpane-class.md#getminsize).)|  
|[CBaseTabbedPane::GetPaneIcon](#getpaneicon)|Restituisce un handle per l'icona del riquadro. (Esegue l'override [CBasePane::GetPaneIcon](../../mfc/reference/cbasepane-class.md#getpaneicon).)|  
|[CBaseTabbedPane::GetPaneList](#getpanelist)|Restituisce un elenco di riquadri contenuti nel riquadro a schede.|  
|[CBaseTabbedPane::GetTabArea](#gettabarea)|Restituisce i rettangoli di delimitazione per le aree di scheda superiore e inferiore.|  
|[CBaseTabbedPane::GetTabsNum](#gettabsnum)|Restituisce il numero di schede in una finestra a schede.|  
|[CBaseTabbedPane::GetUnderlyingWindow](#getunderlyingwindow)|Ottiene la finestra Scheda (incluso) sottostante.|  
|[CBaseTabbedPane::GetVisibleTabsNum](#getvisibletabsnum)|Restituisce il numero di schede visualizzate.|  
|[Cbasetabbedpane:: Hasautohidemode](#hasautohidemode)|Determina se il riquadro a schede è possibile passare a modalità Nascondi automaticamente.|  
|[CBaseTabbedPane::IsHideSingleTab](#ishidesingletab)|Determina se il riquadro a schede viene nascosto se solo una scheda viene visualizzata.|  
|`CBaseTabbedPane::LoadSiblingPaneIDs`|Utilizzato internamente durante la serializzazione.|  
|[CBaseTabbedPane::RecalcLayout](#recalclayout)|Ricalcola le informazioni di layout per il riquadro. (Esegue l'override [cpane:: RecalcLayout](../../mfc/reference/cpane-class.md#recalclayout).)|  
|[CBaseTabbedPane::RemovePane](#removepane)|Rimuove un riquadro nel riquadro a schede.|  
|`CBaseTabbedPane::SaveSiblingBarIDs`|Utilizzato internamente durante la serializzazione.|  
|`CBaseTabbedPane::Serialize`|(Esegue l'override [CDockablePane:: Serialize](http://msdn.microsoft.com/en-us/09787e59-e446-4e76-894b-206d303dcfd6).)|  
|`CBaseTabbedPane::SerializeTabWindow`|Utilizzato internamente durante la serializzazione.|  
|[CBaseTabbedPane::SetAutoDestroy](#setautodestroy)|Determina se la barra di controllo a schede verrà eliminata automaticamente.|  
|[CBaseTabbedPane::SetAutoHideMode](#setautohidemode)|Attiva o disattiva il riquadro ancorato tra visualizzato e la modalità Nascondi automaticamente. (Esegue l'override [CDockablePane::SetAutoHideMode](../../mfc/reference/cdockablepane-class.md#setautohidemode).)|  
|[CBaseTabbedPane::ShowTab](#showtab)|Mostra o nasconde una scheda.|  
  
## <a name="remarks"></a>Note  
 Questa classe è una classe astratta e non può essere creata un'istanza. Implementa i servizi che sono comuni a tutti i tipi di riquadri a schede.  
  
 Attualmente, la libreria include due classi derivate riquadro a schede: [CTabbedPane classe](../../mfc/reference/ctabbedpane-class.md) e [classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md).  
  
 Oggetto `CBaseTabbedPane` esegue il wrapping di un puntatore a un [classe CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md) oggetto. [Classe CMFCBaseTabCtrl](../../mfc/reference/cmfcbasetabctrl-class.md) diventa quindi una finestra figlio del riquadro a schede.  
  
 Per ulteriori informazioni su come creare i riquadri a schede, vedere [classe CDockablePane](../../mfc/reference/cdockablepane-class.md), [CTabbedPane classe](../../mfc/reference/ctabbedpane-class.md), e [classe CMFCOutlookBar](../../mfc/reference/cmfcoutlookbar-class.md).  
  
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
  
##  <a name="addtab"></a>  Cbasetabbedpane::  
 Aggiunge una nuova scheda in un riquadro a schede.  
  
```  
virtual BOOL AddTab(
    CWnd* pNewBar,  
    BOOL bVisible = TRUE,  
    BOOL bSetActive = TRUE,  
    BOOL bDetachable = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] [out] `pNewBar`  
 Puntatore al riquadro da aggiungere. Dopo aver chiamato questo metodo, l'indicatore di misura potrebbero diventare non valide. Per altre informazioni, vedere la sezione Osservazioni.  
  
 [in] `bVisible`  
 `TRUE` Per visualizzare la scheda; in caso contrario, `FALSE`.  
  
 [in] `bSetActive`  
 `TRUE` Per rendere la scheda la scheda attiva. in caso contrario, `FALSE`.  
  
 [in] `bDetachable`  
 `TRUE` Per rendere la scheda rimovibile; in caso contrario, `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se il riquadro è stato aggiunto correttamente come una scheda e non è stato eliminato durante il processo. `FALSE` Se il riquadro da aggiungere è un oggetto di tipo `CBaseTabbedPane`. Per altre informazioni, vedere la sezione Osservazioni.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per aggiungere un riquadro come una nuova scheda in un riquadro a schede. Se `pNewBar` punta a un oggetto di tipo `CBaseTabbedPane`, tutte le schede vengono copiate nel riquadro a schede e quindi `pNewBar` viene eliminato definitivamente. Di conseguenza, `pNewBar` diventa un puntatore non valido e non deve essere utilizzato.  
  
##  <a name="allowdestroyemptytabbedpane"></a>  CBaseTabbedPane::AllowDestroyEmptyTabbedPane  
 Specifica se un riquadro a schede vuoto possa essere eliminato.  
  
```  
virtual BOOL AllowDestroyEmptyTabbedPane() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se un riquadro a schede vuoto può essere eliminato; in caso contrario, `FALSE`. L'implementazione predefinita restituisce sempre `TRUE`.  
  
### <a name="remarks"></a>Note  
 Se un riquadro a schede vuoto non è consentito per l'eliminazione, il framework nasconde il riquadro invece.  
  
##  <a name="applyrestoredtabinfo"></a>  CBaseTabbedPane::ApplyRestoredTabInfo  
 Carica le impostazioni di tabulazione dal Registro di sistema e li applica a un riquadro a schede.  
  
```  
virtual void ApplyRestoredTabInfo(BOOL bUseTabIndexes = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bUseTabIndexes`  
 Questo parametro viene utilizzato internamente dal framework.  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato dal framework una volta caricato nuovamente le informazioni sullo stato di ancoraggio dal Registro di sistema. Il metodo ottiene informazioni sull'ordine di tabulazione e i nomi delle schede per un riquadro a schede.  
  
##  <a name="canfloat"></a>  CBaseTabbedPane::CanFloat  
 Specifica se il riquadro a schede è mobile.  
  
```  
virtual BOOL CanFloat() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se il riquadro può spostarsi; in caso contrario, `FALSE`.  
  
##  <a name="cansetcaptiontexttotabname"></a>  CBaseTabbedPane::CanSetCaptionTextToTabName  
 Determina se la didascalia per il riquadro a schede deve essere visualizzato lo stesso testo come scheda attiva.  
  
```  
virtual BOOL CanSetCaptionTextToTabName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se il testo della didascalia del riquadro a schede è impostato per il testo della scheda attiva; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Il metodo viene utilizzato per determinare se il testo visualizzato sui duplicati di didascalia del riquadro a schede l'etichetta della scheda attiva. È possibile abilitare o disabilitare questa funzionalità chiamando [CBaseTabbedPane::EnableSetCaptionTextToTabName](#enablesetcaptiontexttotabname).  
  
##  <a name="converttotabbeddocument"></a>  CBaseTabbedPane::ConvertToTabbedDocument  
 Converte uno o più riquadri ancorabili in documenti a schede MDI.  
  
```  
virtual void ConvertToTabbedDocument(BOOL bActiveTabOnly = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bActiveTabOnly`  
 Quando si converte un riquadro a schede, specificare `TRUE` per convertire solo la scheda attiva. Specificare `FALSE` per convertire tutte le schede nel riquadro.  
  
##  <a name="detachpane"></a>  Cbasetabbedpane:: Detachpane  
 Scollega un riquadro nel riquadro a schede.  
  
```  
virtual BOOL DetachPane(
    CWnd* pBar,  
    BOOL bHide = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pBar`  
 Puntatore al riquadro da scollegare.  
  
 [in] `bHide`  
 Parametro booleano che specifica se il framework nasconde il riquadro dopo viene scollegato.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se il framework Scollega correttamente il riquadro attività. `FALSE` se `pBar` è `NULL` o si riferisce a un riquadro che non si trova nel riquadro a schede.  
  
### <a name="remarks"></a>Note  
 Il framework viene spostata nel riquadro scollegato se possibile. Per ulteriori informazioni, vedere [CBasePane::CanFloat](../../mfc/reference/cbasepane-class.md#canfloat).  
  
##  <a name="enablesetcaptiontexttotabname"></a>  CBaseTabbedPane::EnableSetCaptionTextToTabName  
 Abilita o disabilita la funzionalità del riquadro a schede per la sincronizzazione di testo del titolo con il testo dell'etichetta nella scheda attiva.  
  
```  
virtual void EnableSetCaptionTextToTabName(BOOL bEnable);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bEnable`  
 `TRUE` per sincronizzare la didascalia del riquadro a schede con la didascalia della scheda attiva; in caso contrario, `FALSE`.  
  
##  <a name="filldefaulttabsorderarray"></a>  CBaseTabbedPane::FillDefaultTabsOrderArray  
 Ripristina l'ordine di tabulazione interno a uno stato predefinito.  
  
```  
void FillDefaultTabsOrderArray();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo viene chiamato quando il framework Ripristina uno stato iniziale di una barra di Outlook.  
  
##  <a name="findpanebyid"></a>  CBaseTabbedPane::FindPaneByID  
 Restituisce un riquadro identificato dall'ID di riquadro.  
  
```  
virtual CWnd* FindPaneByID(UINT uBarID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uBarID`  
 Specifica l'ID del riquadro da trovare.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al riquadro, se è stato trovato; in caso contrario, `NULL`.  
  
### <a name="remarks"></a>Note  
 Questo metodo confronta tutte le schede nel riquadro e restituisce l'uno con l'ID specificato dal `uBarID` parametro.  
  
##  <a name="findbarbytabnumber"></a>  CBaseTabbedPane::FindBarByTabNumber  
 Restituisce un riquadro che si trova in una scheda.  
  
```  
virtual CWnd* FindBarByTabNumber(
    int nTabNum,  
    BOOL bGetWrappedBar = FALSE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nTabNum`  
 Specifica l'indice in base zero della scheda da recuperare.  
  
 [in] `bGetWrappedBar`  
 `TRUE` tornare alla finestra sottostante (sottoposta a wrapping) del riquadro anziché il riquadro stesso. in caso contrario `FALSE`. Si applica solo ai riquadri derivati da [CDockablePaneAdapter](../../mfc/reference/cdockablepaneadapter-class.md).  
  
### <a name="return-value"></a>Valore restituito  
 Se il riquadro viene trovato, verrà restituito un puntatore valido a riquadro cercato; in caso contrario, `NULL`.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per recuperare il riquadro che si trovano nella scheda specificata dal `nTabNum` parametro.  
  
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
 [in] [out] `pBar`  
 Puntatore al riquadro e float.  
  
 [in] `nTabID`  
 Specifica l'indice in base zero della scheda in float.  
  
 [in] `dockMethod`  
 Specifica il metodo da utilizzare per spostare il riquadro. Per altre informazioni, vedere la sezione Osservazioni.  
  
 [in] `bHide`  
 `TRUE` Per nascondere il riquadro prima mobile. in caso contrario, `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se il riquadro è resa mobile; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per rendere mobile un riquadro che si trova in una scheda rimovibile.  
  
 Se si desidera scollegare un riquadro a livello di codice, specificare `DM_SHOW` per il `dockMethod` parametro. Se si desidera rendere mobile riquadro nella stessa posizione in cui mobile in precedenza, specificare `DM_DBL_CLICK` come il `dockMethod` parametro.  
  
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
 [in] `iTabNum`  
 Un riferimento a un numero intero. Questo metodo scrive l'indice in base zero della prima scheda visualizzata da questo parametro, oppure -1 se non è visualizzata alcuna scheda viene trovata.  
  
### <a name="return-value"></a>Valore restituito  
 Se ha esito positivo, un puntatore alla prima scheda visualizzata; in caso contrario, `NULL`.  
  
##  <a name="getminsize"></a>  CBaseTabbedPane::GetMinSize  
 Recupera il valore minimo consentito per il riquadro.  
  
```  
virtual void GetMinSize(CSize& size) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `size`  
 Oggetto `CSize` oggetto che viene riempito con il valore minimo consentito.  
  
### <a name="remarks"></a>Note  
 Se una gestione coerente della dimensione minima del riquadro è attiva ( [CPane::m_bHandleMinSize](../../mfc/reference/cpane-class.md#m_bhandleminsize)), `size` viene riempita con il valore minimo consentito per la scheda attiva. In caso contrario, `size` viene riempita con il valore restituito di [CPane::GetMinSize](../../mfc/reference/cpane-class.md#getminsize).  
  
##  <a name="getpaneicon"></a>  CBaseTabbedPane::GetPaneIcon  
 Recupera il valore minimo consentito per il riquadro.  
  
```  
virtual void GetMinSize(CSize& size) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `size`  
 Oggetto `CSize` oggetto che viene riempito con il valore minimo consentito.  
  
### <a name="remarks"></a>Note  
 Se una gestione coerente della dimensione minima del riquadro è attiva ( [CPane::m_bHandleMinSize](../../mfc/reference/cpane-class.md#m_bhandleminsize)), `size` viene riempita con il valore minimo consentito per la scheda attiva. In caso contrario, `size` viene riempita con il valore restituito di [CPane::GetMinSize](../../mfc/reference/cpane-class.md#getminsize).  
  
##  <a name="getpanelist"></a>  CBaseTabbedPane::GetPaneList  
 Restituisce un elenco di riquadri contenuti nel riquadro a schede.  
  
```  
virtual void GetPaneList(
    CObList& lst,  
    CRuntimeClass* pRTCFilter = NULL);
```  
  
### <a name="parameters"></a>Parametri  
 [out] `lst`  
 Oggetto `CObList` che viene riempita con i riquadri contenuti nel riquadro a schede.  
  
 [in] `pRTCFilter`  
 Se non è `NULL`, l'elenco restituito contiene solo i riquadri che appartengono alla classe di runtime specificato.  
  
##  <a name="gettabarea"></a>  CBaseTabbedPane::GetTabArea  
 Restituisce i rettangoli di delimitazione per le aree di scheda superiore e inferiore.  
  
```  
virtual void GetTabArea(
    CRect& rectTabAreaTop,  
    CRect& rectTabAreaBottom) const = 0;  
```  
  
### <a name="parameters"></a>Parametri  
 [out] `rectTabAreaTop`  
 Riceve le coordinate dello schermo dell'area della scheda superiore.  
  
 [out] `rectTabAreaBottom`  
 Riceve le coordinate dello schermo dell'area della scheda inferiore.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per determinare i rettangoli di delimitazione, nelle coordinate dello schermo, per le aree di scheda superiore e inferiore.  
  
##  <a name="gettabsnum"></a>  CBaseTabbedPane::GetTabsNum  
 Restituisce il numero di schede in una finestra a schede.  
  
```  
virtual int GetTabsNum() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di schede nel riquadro a schede.  
  
##  <a name="getunderlyingwindow"></a>  CBaseTabbedPane::GetUnderlyingWindow  
 Ottiene la finestra Scheda (incluso) sottostante.  
  
```  
virtual CMFCBaseTabCtrl* GetUnderlyingWindow();
```  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore alla finestra della scheda sottostante.  
  
##  <a name="getvisibletabsnum"></a>  CBaseTabbedPane::GetVisibleTabsNum  
 Restituisce il numero di schede visibili.  
  
```  
virtual int GetVisibleTabsNum() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di schede visibili, che sarà maggiore di o uguale a zero.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per determinare il numero di schede visibili nel riquadro a schede.  
  
##  <a name="hasautohidemode"></a>  Cbasetabbedpane:: Hasautohidemode  
 Determina se il riquadro a schede può passare alla modalità Nascondi automaticamente.  
  
```  
virtual BOOL HasAutoHideMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se il riquadro può essere disattivato alla modalità Nascondi automaticamente. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Se la modalità Nascondi automaticamente è disattivata, non viene visualizzato alcun pulsante pin con la didascalia del riquadro a schede.  
  
##  <a name="ishidesingletab"></a>  CBaseTabbedPane::IsHideSingleTab  
 Determina se il riquadro a schede viene nascosto se solo una scheda viene visualizzata.  
  
```  
virtual BOOL IsHideSingleTab() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se la finestra di scheda non viene visualizzata quando è presente una sola scheda visibile. in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Se il riquadro non viene visualizzato perché è aperta solo una scheda, è possibile chiamare questo metodo per determinare se il riquadro a schede funziona correttamente.  
  
##  <a name="removepane"></a>  CBaseTabbedPane::RemovePane  
 Rimuove un riquadro nel riquadro a schede.  
  
```  
virtual BOOL RemovePane(CWnd* pBar);
```  
  
### <a name="parameters"></a>Parametri  
 [in] [out] `pBar`  
 Puntatore al riquadro per rimuovere dal riquadro a schede.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se il riquadro è stato rimosso dal riquadro a schede e se il riquadro a schede è ancora valido. `FALSE` Se quest'ultimo è stato rimosso dal riquadro a schede e dal riquadro a schede sta per essere distrutti. Se il valore restituito è `FALSE`, non utilizzare più il riquadro a schede.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per rimuovere il riquadro specificato per il `pBar` parametro dal riquadro a schede.  
  
##  <a name="setautodestroy"></a>  CBaseTabbedPane::SetAutoDestroy  
 Determina se la barra di controllo a schede verrà eliminata automaticamente.  
  
```  
void SetAutoDestroy(BOOL bAutoDestroy = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bAutoDestroy`  
 `TRUE` Se il riquadro a schede è stato creato in modo dinamico e non si controlla la durata; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Impostare la modalità auto-destroy `TRUE` se si crea un riquadro a schede in modo dinamico e se non si controlla la sua durata. Se eliminare automaticamente la modalità è `TRUE`, il riquadro a schede verrà eliminato automaticamente dal framework.  
  
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
 [in] `pBar`  
 Puntatore al riquadro per visualizzare o nascondere.  
  
 [in] `bShow`  
 `TRUE` Per visualizzare il riquadro attività. `FALSE` per nascondere il riquadro.  
  
 [in] `bDelay`  
 `TRUE` Per ritardare la regolazione del layout della scheda; in caso contrario, `FALSE`.  
  
 [in] `bActivate`  
 `TRUE` Per rendere la scheda la scheda attiva. in caso contrario, `FALSE`.  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE` Se la scheda è stata visualizzata o nascosta correttamente; in caso contrario, `FALSE`.  
  
### <a name="remarks"></a>Note  
 Quando si chiama questo metodo, un riquadro viene visualizzato o nascosto, in base al valore di `bShow` parametro. Se si nasconde una scheda ed è l'ultima scheda visibile nella finestra a schede sottostante, il riquadro a schede è nascosto. Se si visualizza una scheda quando in precedenza non erano alcuna scheda visibile, viene visualizzato il riquadro a schede.  
  
##  <a name="recalclayout"></a>  CBaseTabbedPane::RecalcLayout  
 Ricalcola le informazioni di layout per il riquadro.  
  
```  
virtual void RecalcLayout();
```  
  
### <a name="remarks"></a>Note  
 Se il riquadro è mobile, questo metodo notifica il framework per ridimensionare il riquadro per le dimensioni correnti della mini-cornice.  
  
 Se il riquadro è ancorato, questo metodo non esegue alcuna operazione.  
  
##  <a name="setautohidemode"></a>  CBaseTabbedPane::SetAutoHideMode  
 Imposta la modalità Nascondi automaticamente per i riquadri rimovibili nel riquadro a schede.  
  
```  
virtual CMFCAutoHideToolBar* SetAutoHideMode(
    BOOL bMode,  
    DWORD dwAlignment,  
    CMFCAutoHideToolBar* pCurrAutoHideBar = NULL,  
    BOOL bUseTimer = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bMode`  
 `TRUE` Per abilitare la modalità Nascondi automaticamente; `FALSE` per abilitare la modalità di ancoraggio regolare.  
  
 [in] `dwAlignment`  
 Specifica l'allineamento del riquadro Nascondi automaticamente che deve essere creato. Per un elenco di valori possibili, vedere [CPane::MoveByAlignment](../../mfc/reference/cpane-class.md#movebyalignment).  
  
 [in] [out] `pCurrAutoHideBar`  
 Puntatore alla barra degli strumenti Nascondi automaticamente corrente. Può essere `NULL`.  
  
 [in] `bUseTimer`  
 Specifica se utilizzare l'effetto di Nascondi automaticamente quando l'utente attiva il riquadro di modalità Nascondi automaticamente o per nascondere il riquadro immediatamente.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a barra Nascondi automaticamente che viene creato quando si passa alla modalità Nascondi automaticamente, o `NULL` se non viene creata nessuna barra degli strumenti.  
  
### <a name="remarks"></a>Note  
 Il framework chiama questo metodo quando un utente sceglie il pulsante pin per il riquadro a schede di passare alla modalità Nascondi automaticamente o alla modalità di ancoraggio normale.  
  
 Modalità Nascondi automaticamente è impostata per ogni riquadro rimovibile nel riquadro a schede. I riquadri non rimovibili vengono ignorati. Per ulteriori informazioni, vedere [cmfcbasetabctrl:: Enabletabdetach](../../mfc/reference/cmfcbasetabctrl-class.md#enabletabdetach).  
  
 Chiamare questo metodo per passare un riquadro a schede alla modalità Nascondi automaticamente a livello di codice. Il riquadro deve essere ancorato nella finestra cornice principale ( [CDockablePane::GetDefaultPaneDivider](../../mfc/reference/cdockablepane-class.md#getdefaultpanedivider) deve restituire un puntatore valido al [CPaneDivider](../../mfc/reference/cpanedivider-class.md)).  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CDockablePane](../../mfc/reference/cdockablepane-class.md)

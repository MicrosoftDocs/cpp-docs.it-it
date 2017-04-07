---
title: Classe CMFCToolBarDateTimeCtrl | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMFCToolBarDateTimeCtrl
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::CMFCToolBarDateTimeCtrl
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::CanBeStretched
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::CopyFrom
- AFXTOOLBARDATETIMECTRL/CMFCToolBarButton::ExportToMenuButton
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::GetByCmd
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::GetDateTimeCtrl
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::GetHwnd
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::GetTime
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::GetTimeAll
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::HaveHotBorder
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::NotifyCommand
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnAddToCustomizePage
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnChangeParentWnd
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnClick
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnCtlColor
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnGlobalFontsChanged
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnMove
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnShow
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::OnUpdateToolTip
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::SetTime
- AFXTOOLBARDATETIMECTRL/CMFCToolBarDateTimeCtrl::SetTimeAll
dev_langs:
- C++
helpviewer_keywords:
- SetStyle method
- OnCalculateSize method
- OnDraw method
- OnDrawOnCustomizeList method
- CMFCToolBarDateTimeCtrl class
- Serialize method
- OnSize method
ms.assetid: a3853cb9-8ebc-444f-a1e4-9cf905e24c18
caps.latest.revision: 30
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
ms.openlocfilehash: 9558d62710c7be571d6aefab2c44fe504ca56d60
ms.lasthandoff: 02/24/2017

---
# <a name="cmfctoolbardatetimectrl-class"></a>Classe CMFCToolBarDateTimeCtrl
Un pulsante della barra degli strumenti contenente un controllo selezione data e ora.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CMFCToolBarDateTimeCtrl : public CMFCToolBarButton  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarDateTimeCtrl::CMFCToolBarDateTimeCtrl](#cmfctoolbardatetimectrl)|Costruisce un oggetto `CMFCToolBarDateTimeCtrl`.|  
|`CMFCToolBarDateTimeCtrl::~CMFCToolBarDateTimeCtrl`|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMFCToolBarDateTimeCtrl::CanBeStretched](#canbestretched)|Specifica se un utente è possibile estendere il pulsante durante la personalizzazione. (Esegue l'override di [CMFCToolBarButton::CanBeStretched](../../mfc/reference/cmfctoolbarbutton-class.md#canbestretched).)|  
|[CMFCToolBarDateTimeCtrl::CopyFrom](#copyfrom)|Copia le proprietà di un altro pulsante della barra degli strumenti al pulsante corrente. (Esegue l'override di [CMFCToolBarButton::CopyFrom](../../mfc/reference/cmfctoolbarbutton-class.md#copyfrom).)|  
|`CMFCToolBarDateTimeCtrl::DuplicateData`|Riservato per utilizzi futuri.|  
|[CMFCToolBarButton::ExportToMenuButton](../../mfc/reference/cmfctoolbarbutton-class.md#exporttomenubutton)|Copia il testo dal pulsante della barra degli strumenti a un menu.|  
|`CMFCToolBarDateTimeCtrl::CreateObject`|Usato dal framework per creare un'istanza dinamica di questo tipo di classe.|  
|[CMFCToolBarDateTimeCtrl::GetByCmd](#getbycmd)|Recupera il primo `CMFCToolBarDateTimeCtrl` oggetto nell'applicazione con l'ID di comando specificato.|  
|[CMFCToolBarDateTimeCtrl::GetDateTimeCtrl](#getdatetimectrl)|Restituisce un puntatore al controllo selezione data e ora.|  
|[CMFCToolBarDateTimeCtrl::GetHwnd](#gethwnd)|Recupera l'handle della finestra associata con il pulsante della barra degli strumenti. (Esegue l'override di [CMFCToolBarButton::GetHwnd](../../mfc/reference/cmfctoolbarbutton-class.md#gethwnd).)|  
|`CMFCToolBarDateTimeCtrl::GetThisClass`|Utilizzato dal framework per ottenere un puntatore al [CRuntimeClass](../../mfc/reference/cruntimeclass-structure.md) oggetto associato a questo tipo di classe.|  
|[CMFCToolBarDateTimeCtrl::GetTime](#gettime)|Ottiene l'ora selezionata da un controllo selezione data e ora e lo inserisce in un determinato [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) struttura.|  
|[CMFCToolBarDateTimeCtrl::GetTimeAll](#gettimeall)|Restituisce l'ora selezionata mediante il pulsante di controllo selezione tempo con un ID di comando specificato.|  
|[CMFCToolBarDateTimeCtrl::HaveHotBorder](#havehotborder)|Determina se un bordo del pulsante viene visualizzato quando un utente seleziona il pulsante. (Esegue l'override di [CMFCToolBarButton::HaveHotBorder](../../mfc/reference/cmfctoolbarbutton-class.md#havehotborder).)|  
|[CMFCToolBarDateTimeCtrl::NotifyCommand](#notifycommand)|Specifica se il pulsante elabora il [WM_COMMAND](http://msdn.microsoft.com/library/windows/desktop/ms647591) messaggio. (Esegue l'override di [CMFCToolBarButton::NotifyCommand](../../mfc/reference/cmfctoolbarbutton-class.md#notifycommand).)|  
|[CMFCToolBarDateTimeCtrl::OnAddToCustomizePage](#onaddtocustomizepage)|Chiamato dal framework quando il pulsante viene aggiunto a un **Personalizza** la finestra di dialogo. (Esegue l'override di [CMFCToolBarButton::OnAddToCustomizePage](../../mfc/reference/cmfctoolbarbutton-class.md#onaddtocustomizepage).)|  
|`CMFCToolBarDateTimeCtrl::OnCalculateSize`|Chiamato dal framework per calcolare le dimensioni del pulsante per il contesto di dispositivo specificato e lo stato di ancoraggio. (Esegue l'override di [CMFCToolBarButton::OnCalculateSize](../../mfc/reference/cmfctoolbarbutton-class.md#oncalculatesize).)|  
|[CMFCToolBarDateTimeCtrl::OnChangeParentWnd](#onchangeparentwnd)|Chiamato dal framework quando il pulsante viene inserito in una nuova barra degli strumenti. (Esegue l'override di [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd).)|  
|[CMFCToolBarDateTimeCtrl::OnClick](#onclick)|Chiamato dal framework quando l'utente fa clic sul controllo. (Esegue l'override di [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick).)|  
|[CMFCToolBarDateTimeCtrl::OnCtlColor](#onctlcolor)|Chiamato dal framework quando la barra degli strumenti padre gestisce un `WM_CTLCOLOR` messaggio. (Esegue l'override di [CMFCToolBarButton::OnCtlColor](../../mfc/reference/cmfctoolbarbutton-class.md#onctlcolor).)|  
|`CMFCToolBarDateTimeCtrl::OnDraw`|Chiamato dal framework per disegnare il pulsante utilizzando gli stili specificati e le opzioni. (Esegue l'override di [CMFCToolBarButton::OnDraw](../../mfc/reference/cmfctoolbarbutton-class.md#ondraw).)|  
|`CMFCToolBarDateTimeCtrl::OnDrawOnCustomizeList`|Chiamato dal framework in cui disegnare il pulsante di **comandi** riquadro del **Personalizza** la finestra di dialogo. (Esegue l'override di [CMFCToolBarButton::OnDrawOnCustomizeList](../../mfc/reference/cmfctoolbarbutton-class.md#ondrawoncustomizelist).)|  
|[CMFCToolBarDateTimeCtrl::OnGlobalFontsChanged](#onglobalfontschanged)|Chiamato dal framework quando è stato modificato il tipo di carattere globale. (Esegue l'override di [CMFCToolBarButton::OnGlobalFontsChanged](../../mfc/reference/cmfctoolbarbutton-class.md#onglobalfontschanged).)|  
|[CMFCToolBarDateTimeCtrl::OnMove](#onmove)|Chiamato dal framework quando si sposta la barra degli strumenti padre. (Esegue l'override di [CMFCToolBarButton::OnMove](../../mfc/reference/cmfctoolbarbutton-class.md#onmove).)|  
|[CMFCToolBarDateTimeCtrl::OnShow](#onshow)|Chiamato dal framework quando il pulsante diventa visibile o invisibile. (Esegue l'override di [CMFCToolBarButton::OnShow](../../mfc/reference/cmfctoolbarbutton-class.md#onshow).)|  
|`CMFCToolBarDateTimeCtrl::OnSize`|Chiamato dal framework quando la barra degli strumenti padre modifica la dimensione o posizione e la modifica, il pulsante modificare le dimensioni. (Esegue l'override di [CMFCToolBarButton::OnSize](../../mfc/reference/cmfctoolbarbutton-class.md#onsize).)|  
|[CMFCToolBarDateTimeCtrl::OnUpdateToolTip](#onupdatetooltip)|Chiamato dal framework quando la barra degli strumenti padre aggiorna il testo della descrizione comando. (Esegue l'override di [CMFCToolBarButton::OnUpdateToolTip](../../mfc/reference/cmfctoolbarbutton-class.md#onupdatetooltip).)|  
|`CMFCToolBarDateTimeCtrl::Serialize`|Legge l'oggetto da un archivio o scrive in un archivio (esegue l'override di [CMFCToolBarButton::Serialize](../../mfc/reference/cmfctoolbarbutton-class.md#serialize).)|  
|`CMFCToolBarDateTimeCtrl::SetStyle`|Imposta lo stile del pulsante della barra degli strumenti. (Esegue l'override di [CMFCToolBarButton::SetStyle](../../mfc/reference/cmfctoolbarbutton-class.md#setstyle).)|  
|[CMFCToolBarDateTimeCtrl::SetTime](#settime)|Imposta la data e ora nel controllo di selezione di tempo.|  
|[CMFCToolBarDateTimeCtrl::SetTimeAll](#settimeall)|Imposta la data e ora in tutte le istanze del controllo di selezione ora hanno un ID di comando specificato.|  
  
## <a name="remarks"></a>Note  
 Per un esempio di come utilizzare un controllo selezione data e ora, vedere il progetto di esempio ToolbarDateTimePicker. Per informazioni su come aggiungere pulsanti di barre degli strumenti, vedere [procedura dettagliata: inserimento di controlli in barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)  
  
 [CMFCToolBarDateTimeCtrl](../../mfc/reference/cmfctoolbardatetimectrl-class.md)  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxtoolbardatetimectrl.h  
  
##  <a name="canbestretched"></a>CMFCToolBarDateTimeCtrl::CanBeStretched  
 Specifica se un utente è possibile estendere il pulsante durante la personalizzazione.  
  
```  
virtual BOOL CanBeStretched() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Questo metodo restituisce `TRUE`.  
  
### <a name="remarks"></a>Note  
 Per impostazione predefinita, il framework non consente all'utente di estendere un pulsante della barra degli strumenti durante la personalizzazione. Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::CanBeStretched](../../mfc/reference/cmfctoolbarbutton-class.md#canbestretched)) consentendo all'utente per l'estensione di un pulsante della barra degli strumenti di data e ora durante la personalizzazione.  
  
##  <a name="cmfctoolbardatetimectrl"></a>CMFCToolBarDateTimeCtrl::CMFCToolBarDateTimeCtrl  
 Crea e Inizializza un [CMFCToolBarDateTimeCtrl](../../mfc/reference/cmfctoolbardatetimectrl-class.md) oggetto.  
  
```  
CMFCToolBarDateTimeCtrl(
    UINT uiID,  
    int iImage,  
    DWORD dwStyle=0,  
    int iWidth=0);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiID`  
 ID del controllo.  
  
 [in] `iImage`  
 L'indice dell'immagine sulla barra degli strumenti `CMFCToolBarImages` oggetto.  
  
 [in] `dwStyle`  
 Lo stile del `CMFCToolBarDateTimeCtrlImpl` finestra che viene creato quando un utente fa clic sul pulsante.  
  
 [in] `iWidth`  
 Larghezza del controllo in pixel.  
  
### <a name="remarks"></a>Note  
 Questo oggetto viene inizializzato per la data di sistema. Lo stile della finestra dell'oggetto interno `CMFCToolBarDateTimeCtrlImpl` oggetto include il `dwStyle` parametro e il `WS_CHILD` e `WS_VISIBLE` stili. Non è possibile modificare gli stili utilizzando `CMFCToolBarDateTimeCtrl::SetStyle`. Utilizzare `SetStyle` di modifica dello stile del `CMFCToolBarDateTimeCtrl` controllo.  
  
### <a name="example"></a>Esempio  
 Nell'esempio riportato di seguito viene illustrato come creare un oggetto della `CMFCToolBarDateTimeCtrl` classe. Questo frammento di codice fa parte di [esempio sulla barra degli strumenti di selezione data e ora](../../visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_ToolbarDateTimePicker n.&1;](../../mfc/reference/codesnippet/cpp/cmfctoolbardatetimectrl-class_1.cpp)]  
  
##  <a name="copyfrom"></a>CMFCToolBarDateTimeCtrl::CopyFrom  
 Copia le proprietà di un altro pulsante della barra degli strumenti al pulsante corrente.  
  
```  
virtual void CopyFrom(const CMFCToolBarButton& src);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `src`  
 Un riferimento al pulsante origine da cui copiare.  
  
### <a name="remarks"></a>Note  
 Chiamare questo metodo per copiare un altro pulsante della barra degli strumenti di questo pulsante della barra degli strumenti. `src`deve essere di tipo `CMFCToolBarDateTimeCtrl`.  
  
##  <a name="exporttomenubutton"></a>CMFCToolBarDateTimeCtrl::ExportToMenuButton  
 Copia il testo dal pulsante della barra degli strumenti a un menu.  
  
```  
virtual BOOL ExportToMenuButton(CMFCToolBarMenuButton& menuButton) const;  
```  
  
### <a name="parameters"></a>Parametri  
 [in] `menuButton`  
 Un riferimento al pulsante di menu di destinazione.  
  
### <a name="return-value"></a>Valore restituito  
 Questo metodo restituisce `TRUE`.  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue l'override dell'implementazione della classe base ( [CMFCToolBarButton::ExportToMenuButton](../../mfc/reference/cmfctoolbarbutton-class.md#exporttomenubutton)) per il caricamento della risorsa di stringa che viene associata all'ID di comando del controllo. Per ulteriori informazioni sulle risorse di tipo stringa, vedere [CStringT::LoadString](../../atl-mfc-shared/reference/cstringt-class.md#loadstring).  
  
##  <a name="getbycmd"></a>CMFCToolBarDateTimeCtrl::GetByCmd  
 Recupera il primo `CMFCToolBarDateTimeCtrl` oggetto nell'applicazione con l'ID di comando specificato.  
  
```  
static CMFCToolBarDateTimeCtrl* __stdcall GetByCmd(UINT uiCmd);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `uiCmd`  
 L'ID di comando del pulsante da recuperare.  
  
### <a name="return-value"></a>Valore restituito  
 Il primo `CMFCToolBarDateTimeCtrl` oggetto nell'applicazione con l'ID di comando specificato, o `NULL` se nessun `CMFCToolBarDateTimeCtrl` oggetti dispongono dell'ID di comando specificato.  
  
### <a name="remarks"></a>Note  
 Questo metodo di utilità condivise utilizzato dai metodi, ad esempio [CMFCToolBarDateTimeCtrl::SetTimeAll](#settimeall) e [CMFCToolBarDateTimeCtrl::GetTimeAll](#gettimeall) di impostare oppure ottenere l'ora e data di tutte le istanze del controllo selezione tempo con un ID di comando specificato.  
  
##  <a name="getdatetimectrl"></a>CMFCToolBarDateTimeCtrl::GetDateTimeCtrl  
 Restituisce un puntatore al controllo selezione data e ora.  
  
```  
CDateTimeCtrl* GetDateTimeCtrl() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore al controllo selezione data e ora. o `NULL` se il controllo non esiste.  
  
### <a name="remarks"></a>Note  
 Il `CMFCToolBarDateTimeCtrl` classe inizializza il `m_pWndDateTime` (membro dati) quando si inserisce un `CMFCToolBarDateTimeCtrl` oggetto in una barra degli strumenti.  
  
##  <a name="gethwnd"></a>CMFCToolBarDateTimeCtrl::GetHwnd  
 Recupera l'handle della finestra associata con il pulsante della barra degli strumenti.  
  
```  
virtual HWND GetHwnd();
```  
  
### <a name="return-value"></a>Valore restituito  
 Handle di finestra associata con il pulsante della barra degli strumenti di data e ora.  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue l'override di [CMFCToolBarButton::GetHwnd](../../mfc/reference/cmfctoolbarbutton-class.md#gethwnd) metodo.  
  
##  <a name="gettime"></a>CMFCToolBarDateTimeCtrl::GetTime  
 Ottiene l'ora selezionata dal controllo della fase di selezione e associati a una data e lo inserisce in un determinato [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) struttura  
  
```  
BOOL GetTime(COleDateTime& timeDest) const;
DWORD GetTime(CTime& timeDest) const;
DWORD GetTime(LPSYSTEMTIME pTimeDest) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `[out] timeDest`  
 Nel primo overload, una [classe COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto che riceverà le informazioni sull'ora di sistema. Nel secondo overload, una [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto che riceverà le informazioni sull'ora di sistema.  
  
 `[out] pTimeDest`  
 Un puntatore per il [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) struttura per ricevere le informazioni sull'ora di sistema. Non deve essere `NULL`.  
  
### <a name="return-value"></a>Valore restituito  
 Nel primo overload, diverso da zero se il tempo è stata scritta correttamente la [classe COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto; in caso contrario 0. Nel secondo e terzo overload, il valore restituito è un `DWORD` che corrisponde al membro dwFlag che è stato impostato nel [NMDATETIMECHANGE](http://msdn.microsoft.com/library/windows/desktop/bb761730) struttura.  
  
### <a name="remarks"></a>Note  
 Il metodo imposta la [NMDATETIMECHANGE](http://msdn.microsoft.com/library/windows/desktop/bb761730) struttura membro dwFlags per indicare se il controllo selezione data e ora è impostata su una data e ora. Se il valore è uguale a GDT_NONE, il controllo è impostato su `no date` , stato e viene utilizzato lo stile DTS_SHOWNONE. Se il valore restituito è uguale a GDT_VALID, l'ora di sistema viene archiviata correttamente nel percorso di destinazione.  
  
##  <a name="gettimeall"></a>CMFCToolBarDateTimeCtrl::GetTimeAll  
 Restituisce l'ora selezionata dall'utente sul pulsante di controllo di selezione ora con un ID di comando specificato.  
  
```  
static BOOL GetTimeAll(
    UINT uiCmd,  
    COleDateTime& timeDest);

static DWORD GetTimeAll(
    UINT uiCmd,  
    CTime& timeDest);

static DWORD GetTimeAll(
    UINT uiCmd,  
    LPSYSTEMTIME pTimeDest);
```  
  
### <a name="parameters"></a>Parametri  
 `[in] uiCmd`  
 Specifica l'ID di comando di. di un pulsante barra degli strumenti  
  
 `[out] timeDest`  
 Nel primo overload, una [classe COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto che riceverà le informazioni sull'ora di sistema. Nel secondo overload, una [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto che riceverà le informazioni sull'ora di sistema.  
  
 `[out] pTimeDest`  
 Un puntatore per il [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) struttura per ricevere le informazioni sull'ora di sistema. Non deve essere `NULL`.  
  
### <a name="return-value"></a>Valore restituito  
 Se il framework non si trova un pulsante della barra degli strumenti che corrisponde all'ID di comando `uiCmd`, il valore restituito è zero nel primo overload e GDT_NONE in altri overload. Se il pulsante della barra degli strumenti viene trovato, il valore restituito è identico al valore restituito da una chiamata a [CMFCToolBarDateTimeCtrl::GetTime](#gettime) su tale pulsante. Restituisce un valore pari a zero o GDT_NONE può verificarsi quando il pulsante è disponibile, che indica che la chiamata a `GetTime` non ha restituito una data valida per altri motivi.  
  
### <a name="remarks"></a>Note  
 Questo metodo cerca un pulsante della barra degli strumenti con l'ID di comando specificato e chiama [CMFCToolBarDateTimeCtrl::GetTime](#gettime) metodo su tale pulsante.  
  
##  <a name="havehotborder"></a>CMFCToolBarDateTimeCtrl::HaveHotBorder  
 Determina se un bordo del pulsante viene visualizzato quando un utente seleziona il pulsante.  
  
```  
virtual BOOL HaveHotBorder() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se un pulsante viene visualizzato un bordo quando è selezionato; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo restituisce un valore diverso da zero se il controllo è visibile.  
  
##  <a name="notifycommand"></a>CMFCToolBarDateTimeCtrl::NotifyCommand  
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
  
 Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::NotifyCommand](../../mfc/reference/cmfctoolbarbutton-class.md#notifycommand)) dall'elaborazione di [DTN_DATETIMECHANGE](http://msdn.microsoft.com/library/windows/desktop/bb761737) notifica. Aggiorna lo stato ora interne e aggiorna la proprietà tempo di tutti `CMFCToolBarDateTimeCtrl` oggetti con lo stesso ID di comando  
  
##  <a name="onaddtocustomizepage"></a>CMFCToolBarDateTimeCtrl::OnAddToCustomizePage  
 Chiamato dal framework quando il pulsante viene aggiunto a un **Personalizza** la finestra di dialogo.  
  
```  
virtual void OnAddToCustomizePage();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe base, [CMFCToolBarButton::OnAddToCustomizePage](../../mfc/reference/cmfctoolbarbutton-class.md#onaddtocustomizepage), per la copia delle proprietà dalla prima data e ora controllo in una barra degli strumenti con lo stesso ID di comando di questo oggetto. Questo metodo non esegue alcuna operazione se nessuna barra degli strumenti dispone di un controllo data e ora con lo stesso ID di comando di questo oggetto.  
  
 Per ulteriori informazioni sui **Personalizza** la finestra di dialogo, vedere [CMFCToolBarsCustomizeDialog classe](../../mfc/reference/cmfctoolbarscustomizedialog-class.md).  
  
##  <a name="onchangeparentwnd"></a>CMFCToolBarDateTimeCtrl::OnChangeParentWnd  
 Chiamato dal framework quando il pulsante viene inserito in una nuova barra degli strumenti.  
  
```  
virtual void OnChangeParentWnd(CWnd* pWndParent);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `pWndParent`  
 La nuova finestra padre.  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue l'override dell'implementazione della classe base ( [CMFCToolBarButton::OnChangeParentWnd](../../mfc/reference/cmfctoolbarbutton-class.md#onchangeparentwnd)) ricreando interno `CMFCToolBarDateTimeCtrlImpl` oggetto.  
  
##  <a name="onclick"></a>CMFCToolBarDateTimeCtrl::OnClick  
 Chiamato dal framework quando l'utente fa clic sul controllo.  
  
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
 Questo metodo esegue l'override dell'implementazione della classe base, [CMFCToolBarButton::OnClick](../../mfc/reference/cmfctoolbarbutton-class.md#onclick), restituendo un valore diverso da zero se l'oggetto interno `CMFCToolBarDateTimeCtrlImpl` oggetto è visibile.  
  
##  <a name="onctlcolor"></a>CMFCToolBarDateTimeCtrl::OnCtlColor  
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
 Handle per il pennello globale che il framework utilizza per disegnare lo sfondo del pulsante.  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue l'override dell'implementazione della classe base, [CMFCToolBarButton::OnCtlColor](../../mfc/reference/cmfctoolbarbutton-class.md#onctlcolor), impostando il testo e colori del contesto di periferica forniti al testo globale e i colori di sfondo, sfondo rispettivamente.  
  
 Per ulteriori informazioni sulle opzioni globali che sono disponibili per l'applicazione, vedere [struttura AFX_GLOBAL_DATA](../../mfc/reference/afx-global-data-structure.md).  
  
##  <a name="onglobalfontschanged"></a>CMFCToolBarDateTimeCtrl::OnGlobalFontsChanged  
 Chiamato dal framework quando è stato modificato il tipo di carattere globale.  
  
```  
virtual void OnGlobalFontsChanged();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::OnGlobalFontsChanged](../../mfc/reference/cmfctoolbarbutton-class.md#onglobalfontschanged)) modificando il tipo di carattere del controllo a quello del tipo di carattere globale.  
  
 Per ulteriori informazioni sulle opzioni globali che sono disponibili per l'applicazione, vedere [struttura AFX_GLOBAL_DATA](../../mfc/reference/afx-global-data-structure.md).  
  
##  <a name="onmove"></a>CMFCToolBarDateTimeCtrl::OnMove  
 Chiamato dal framework quando si sposta la barra degli strumenti padre.  
  
```  
virtual void OnMove();
```  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue l'override l'implementazione predefinita della classe ( [CMFCToolBarButton::OnMove](../../mfc/reference/cmfctoolbarbutton-class.md#onmove)), aggiornare la posizione dell'oggetto interno `CMFCToolBarDateTimeCtrlImpl` oggetto.  
  
##  <a name="onshow"></a>CMFCToolBarDateTimeCtrl::OnShow  
 Chiamato dal framework quando il pulsante diventa visibile o invisibile.  
  
```  
virtual void OnShow(BOOL bShow);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bShow`  
 Specifica se il pulsante è visibile. Se questo parametro è `TRUE`, il pulsante è visibile. In caso contrario, il pulsante non è visibile.  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::OnShow](../../mfc/reference/cmfctoolbarbutton-class.md#onshow)) visualizzando il pulsante se `bShow` è `TRUE`. In caso contrario, questo metodo nasconde il pulsante.  
  
##  <a name="onsize"></a>CMFCToolBarDateTimeCtrl::OnSize  
 Chiamato dal framework quando la barra degli strumenti padre modifica la dimensione o posizione e la modifica, il pulsante modificare le dimensioni.  
  
```  
virtual void OnSize(int iSize);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `iSize`  
 La nuova larghezza del pulsante, in pixel.  
  
### <a name="remarks"></a>Note  
 Questo metodo esegue l'override l'implementazione predefinita della classe ( [CMFCToolBarButton::OnSize](../../mfc/reference/cmfctoolbarbutton-class.md#onsize)) mediante l'aggiornamento delle dimensioni e posizione dell'oggetto interno `CMFCToolBarDateTimeCtrlImpl` oggetto.  
  
##  <a name="onupdatetooltip"></a>CMFCToolBarDateTimeCtrl::OnUpdateToolTip  
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
 La finestra padre.  
  
 [in] `iButtonIndex`  
 Indice in base zero del pulsante nella raccolta di pulsante padre.  
  
 [in] `wndToolTip`  
 Il controllo che visualizza il testo della descrizione comando.  
  
 [out] `str`  
 Oggetto `CString` oggetto che riceve il testo della descrizione comando aggiornato.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il metodo aggiorna il testo della descrizione comando. in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questo metodo estende l'implementazione della classe base ( [CMFCToolBarButton::OnUpdateToolTip](../../mfc/reference/cmfctoolbarbutton-class.md#onupdatetooltip)) visualizzando il testo della descrizione comandi associato al pulsante. Se il pulsante non è ancorato in senso orizzontale, questo metodo non esegue alcuna operazione e restituisce `FALSE`.  
  
##  <a name="settime"></a>CMFCToolBarDateTimeCtrl::SetTime  
 Imposta la data e ora nel controllo di selezione di tempo.  
  
```  
BOOL SetTime(const COleDateTime& timeNew);
BOOL SetTime(const CTime* timeNew);
BOOL SetTime(LPSYSTEMTIME pTimeNew=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `[in] timeNew`  
 Nella prima versione, un riferimento a un [classe COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto che contiene l'ora in cui verrà impostato il controllo. Nella seconda versione, un puntatore a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto che contiene l'ora in cui verrà impostato il controllo.  
  
 `[in] pTimeNew`  
 Un puntatore per il [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) struttura che contiene l'ora in cui verrà impostato il controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Imposta l'ora in un controllo selezione data e ora chiamando [CDateTimeCtrl::SetTime](../../mfc/reference/cdatetimectrl-class.md#settime).  
  
##  <a name="settimeall"></a>CMFCToolBarDateTimeCtrl::SetTimeAll  
 Imposta la data e ora in tutte le istanze del controllo di selezione ora hanno un ID di comando specificato.  
  
```  
static BOOL SetTimeAll(
    UINT uiCmd,  
    const COleDateTime& timeNew);

static BOOL SetTimeAll(
    UINT uiCmd,  
    const CTime* pTimeNew);

static BOOL SetTimeAll(
    UINT uiCmd,  
    LPSYSTEMTIME pTimeNew=NULL);
```  
  
### <a name="parameters"></a>Parametri  
 `[in] uiCmd`  
 Specifica l'ID di comando di. di un pulsante barra degli strumenti  
  
 `[in] timeNew`  
 Nella prima versione, un [classe COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) oggetto che contiene l'ora in cui verrà impostato il controllo. Nella seconda versione, un puntatore a un [CTime](../../atl-mfc-shared/reference/ctime-class.md) oggetto che contiene l'ora in cui verrà impostato il controllo.  
  
 `[in] pTimeNew`  
 Un puntatore per il [SYSTEMTIME](http://msdn.microsoft.com/library/windows/desktop/ms724950) struttura che contiene l'ora in cui verrà impostato il controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Cerca un pulsante della barra degli strumenti con l'ID di comando specificato e imposta l'ora in un controllo selezione data e ora chiamando [CMFCToolBarDateTimeCtrl::SetTime](#settime).  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CMFCToolBarButton](../../mfc/reference/cmfctoolbarbutton-class.md)   
 [Procedura dettagliata: Inserimento di controlli nelle barre degli strumenti](../../mfc/walkthrough-putting-controls-on-toolbars.md)





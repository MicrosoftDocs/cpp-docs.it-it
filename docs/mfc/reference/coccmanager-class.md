---
title: Classe COccManager | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- COccManager
- AFXOCC/COccManager
- AFXOCC/COccManager::CreateContainer
- AFXOCC/COccManager::CreateDlgControls
- AFXOCC/COccManager::CreateSite
- AFXOCC/COccManager::GetDefBtnCode
- AFXOCC/COccManager::IsDialogMessage
- AFXOCC/COccManager::IsLabelControl
- AFXOCC/COccManager::IsMatchingMnemonic
- AFXOCC/COccManager::OnEvent
- AFXOCC/COccManager::PostCreateDialog
- AFXOCC/COccManager::PreCreateDialog
- AFXOCC/COccManager::SetDefaultButton
- AFXOCC/COccManager::SplitDialogTemplate
dev_langs:
- C++
helpviewer_keywords:
- COccManager [MFC], CreateContainer
- COccManager [MFC], CreateDlgControls
- COccManager [MFC], CreateSite
- COccManager [MFC], GetDefBtnCode
- COccManager [MFC], IsDialogMessage
- COccManager [MFC], IsLabelControl
- COccManager [MFC], IsMatchingMnemonic
- COccManager [MFC], OnEvent
- COccManager [MFC], PostCreateDialog
- COccManager [MFC], PreCreateDialog
- COccManager [MFC], SetDefaultButton
- COccManager [MFC], SplitDialogTemplate
ms.assetid: 7d47aeed-d1ab-48e3-b4cf-d429718e370a
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: ffa16b7a210bc53f178e3ec437aefb6cede766a6
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="coccmanager-class"></a>Classe COccManager
Gestisce vari siti di controllo personalizzato, implementati dagli oggetti `COleControlContainer` e `COleControlSite` .  
  
## <a name="syntax"></a>Sintassi  
  
```  
class COccManager : public CNoTrackObject  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[COccManager::CreateContainer](#createcontainer)|Crea un **COleContainer** oggetto.|  
|[COccManager::CreateDlgControls](#createdlgcontrols)|Consente di creare controlli ActiveX, ospitati da associato `COleContainer` oggetto.|  
|[COccManager::CreateSite](#createsite)|Crea un oggetto `COleClientSite`.|  
|[COccManager::GetDefBtnCode](#getdefbtncode)|Recupera il codice del pulsante predefinito.|  
|[COccManager::IsDialogMessage](#isdialogmessage)|Determina la destinazione di un messaggio della finestra di dialogo.|  
|[COccManager::IsLabelControl](#islabelcontrol)|Determina se il controllo specificato è un controllo etichetta.|  
|[COccManager::IsMatchingMnemonic](#ismatchingmnemonic)|Determina se il tasto di scelta rapida corrente corrisponde il tasto di scelta rapida del controllo specificato.|  
|[COccManager::OnEvent](#onevent)|Tenta di gestire l'evento specificato.|  
|[COccManager::PostCreateDialog](#postcreatedialog)|Libera le risorse allocate durante la creazione della finestra di dialogo.|  
|[COccManager::PreCreateDialog](#precreatedialog)|Elabora un modello di finestra di dialogo per i controlli ActiveX.|  
|[COccManager::SetDefaultButton](#setdefaultbutton)|Alterna lo stato predefinito del controllo specificato.|  
|[COccManager::SplitDialogTemplate](#splitdialogtemplate)|Separa i controlli ActiveX esistenti da controlli comuni nel modello di finestra di dialogo specificata.|  
  
## <a name="remarks"></a>Note  
 Classe di base, **CNoTrackObject**, è una classe di base non documentata (che si trova in AFXTLS. H). Progettato per l'uso nel framework MFC, le classi derivate dal **CNoTrackObject** classe sono esenti dal rilevamento di perdite di memoria. Non è consigliabile derivare direttamente da **CNoTrackObject**.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CNoTrackObject`  
  
 `COccManager`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxocc.h  
  
##  <a name="createcontainer"></a>COccManager::CreateContainer  
 Chiamato dal framework per creare un contenitore del controllo.  
  
```  
virtual COleControlContainer* CreateContainer(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Un puntatore all'oggetto finestra associato al contenitore del sito personalizzato.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore per il contenitore appena creato. in caso contrario **NULL**.  
  
### <a name="remarks"></a>Note  
 Per ulteriori informazioni sulla creazione di siti personalizzati, vedere [COleControlContainer::AttachControlSite](../../mfc/reference/colecontrolcontainer-class.md#attachcontrolsite).  
  
##  <a name="createdlgcontrols"></a>COccManager::CreateDlgControls  
 Chiamare questa funzione per creare controlli ActiveX specificati per il `pOccDialogInfo` parametro.  
  
```  
virtual BOOL CreateDlgControls(
    CWnd* pWndParent,  
    LPCTSTR lpszResourceName,  
    _AFX_OCC_DIALOG_INFO* pOccDialogInfo);

 
virtual BOOL CreateDlgControls(
    CWnd* pWndParent,  
    void* lpResource,  
    _AFX_OCC_DIALOG_INFO* pOccDialogInfo);
```  
  
### <a name="parameters"></a>Parametri  
 *pWndParent*  
 Un puntatore all'elemento padre dell'oggetto finestra di dialogo.  
  
 `lpszResourceName`  
 Il nome della risorsa da creare.  
  
 `pOccDialogInfo`  
 Puntatore al modello di finestra di dialogo utilizzato per creare l'oggetto finestra di dialogo.  
  
 `lpResource`  
 Un puntatore a una risorsa.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il controllo è stato creato correttamente. in caso contrario, zero.  
  
##  <a name="createsite"></a>COccManager::CreateSite  
 Chiamato dal framework per creare un sito di controllo, ospitato dal contenitore a cui puntato `pCtrlCont`.  
  
```  
virtual COleControlSite* CreateSite(COleControlContainer* pCtrlCont);
```  
  
### <a name="parameters"></a>Parametri  
 `pCtrlCont`  
 Puntatore al contenitore del controllo che ospita il nuovo sito di controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore al sito del controllo appena creato.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per creare un controllo personalizzato di un sito, utilizzando il [COleControlSite](../../mfc/reference/colecontrolsite-class.md)-classe derivata.  
  
 Ogni contenitore di controllo può ospitare più siti. Creare altri siti con più chiamate a `CreateSite`.  
  
##  <a name="getdefbtncode"></a>COccManager::GetDefBtnCode  
 Chiamare questa funzione per determinare se il controllo è un pulsante di comando predefinito.  
  
```  
static DWORD AFX_CDECL GetDefBtnCode(CWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 L'oggetto finestra che contiene il controllo pulsante.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori seguenti:  
  
- **DLGC_DEFPUSHBUTTON** controllo è il pulsante predefinito nella finestra di dialogo.  
  
- **DLGC_UNDEFPUSHBUTTON** controllo non è il pulsante predefinito nella finestra di dialogo.  
  
- **0** controllo non è un pulsante.  
  
##  <a name="isdialogmessage"></a>COccManager::IsDialogMessage  
 Chiamato dal framework per determinare se un messaggio è destinato la finestra di dialogo specificata e, se si tratta, elabora il messaggio.  
  
```  
virtual BOOL IsDialogMessage(
    CWnd* pWndDlg,  
    LPMSG lpMsg);
```  
  
### <a name="parameters"></a>Parametri  
 *pWndDlg*  
 Puntatore alla finestra di dialogo di destinazione del messaggio.  
  
 `lpMsg`  
 Un puntatore a un `MSG` struttura che contiene il messaggio da verificare.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'elaborazione del messaggio; in caso contrario, zero.  
  
### <a name="remarks"></a>Note  
 Il comportamento predefinito di `IsDialogMessage` consiste nel verificare la presenza di messaggi della tastiera e convertirli in selezioni per la finestra di dialogo corrispondente. Ad esempio, il tasto TAB, quando premuti, seleziona il successivo controllo o gruppo di controlli.  
  
 Eseguire l'override di questa funzione per ottenere un comportamento personalizzato per i messaggi inviati alla finestra di dialogo specificata.  
  
##  <a name="islabelcontrol"></a>COccManager::IsLabelControl  
 Chiamare questa funzione per determinare se il controllo specificato è un controllo etichetta.  
  
```  
static BOOL AFX_CDECL IsLabelControl(CWnd* pWnd);  
static BOOL AFX_CDECL IsLabelControl(COleControlSiteOrWnd* pWnd);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Puntatore alla finestra che contiene il controllo.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il controllo è un'etichetta; zero in caso contrario  
  
### <a name="remarks"></a>Note  
 Un controllo etichetta è uno che funziona come un'etichetta per il controllo è successivo nell'ordinamento.  
  
##  <a name="ismatchingmnemonic"></a>COccManager::IsMatchingMnemonic  
 Chiamare questa funzione per determinare se il tasto di scelta rapida corrente corrisponde a quello rappresentato dal controllo.  
  
```  
static BOOL AFX_CDECL IsMatchingMnemonic(
    CWnd* pWnd,  
    LPMSG lpMsg);

 
static BOOL AFX_CDECL IsMatchingMnemonic(
    COleControlSiteOrWnd* pWnd,  
    LPMSG lpMsg);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Puntatore alla finestra che contiene il controllo.  
  
 `lpMsg`  
 Puntatore al messaggio che contiene il tasto di scelta rapida per la corrispondenza.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se il tasto di scelta corrispondente al controllo. zero in caso contrario  
  
### <a name="remarks"></a>Note  
  
##  <a name="onevent"></a>COccManager::OnEvent  
 Chiamato dal framework per gestire l'evento specificato.  
  
```  
virtual BOOL OnEvent(
    CCmdTarget* pCmdTarget,  
    UINT idCtrl,  
    AFX_EVENT* pEvent,  
    AFX_CMDHANDLERINFO* pHandlerInfo);
```  
  
### <a name="parameters"></a>Parametri  
 *pCmdTarget*  
 Un puntatore al `CCmdTarget` oggetto sta tentando di gestire l'evento  
  
 `idCtrl`  
 L'ID di risorsa del controllo.  
  
 `pEvent`  
 L'evento da gestire.  
  
 `pHandlerInfo`  
 In caso contrario **NULL**, `OnEvent` viene compilato il **pTarget** e **pmf** i membri del **AFX_CMDHANDLERINFO** struttura invece di il comando di invio. In genere, questo parametro deve essere **NULL**.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se l'evento è stato gestito, zero in caso contrario.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per personalizzare il processo di gestione degli eventi predefiniti.  
  
##  <a name="precreatedialog"></a>COccManager::PreCreateDialog  
 Chiamato dal framework per elaborare un modello di finestra di dialogo per i controlli ActiveX prima di creare la finestra di dialogo effettivo.  
  
```  
virtual const DLGTEMPLATE* PreCreateDialog(
    _AFX_OCC_DIALOG_INFO* pOccDialogInfo,  
    const DLGTEMPLATE* pOrigTemplate);
```  
  
### <a name="parameters"></a>Parametri  
 `pOccDialogInfo`  
 Un **_AFX_OCC_DIALOG_INFO** struttura contenente informazioni sul modello di finestra di dialogo e i controlli ActiveX ospitati dalla finestra di dialogo.  
  
 *pOrigTemplate*  
 Puntatore al modello di finestra di dialogo per essere utilizzata per creare la finestra di dialogo.  
  
### <a name="return-value"></a>Valore restituito  
 Puntatore a una struttura di modello di finestra di dialogo utilizzata per creare la finestra di dialogo.  
  
### <a name="remarks"></a>Note  
 Il comportamento predefinito effettua una chiamata a `SplitDialogTemplate`, determinare se sono presenti eventuali ActiveX controlli presenti e quindi restituisce il modello di finestra di dialogo risultante.  
  
 Eseguire l'override di questa funzione per personalizzare il processo di creazione di una finestra di dialogo di hosting di controlli ActiveX.  
  
##  <a name="postcreatedialog"></a>COccManager::PostCreateDialog  
 Chiamato dal framework per liberare la memoria allocata per il modello di finestra di dialogo.  
  
```  
virtual void PostCreateDialog(_AFX_OCC_DIALOG_INFO* pOccDialogInfo);
```  
  
### <a name="parameters"></a>Parametri  
 `pOccDialogInfo`  
 Un **_AFX_OCC_DIALOG_INFO** struttura contenente informazioni sul modello di finestra di dialogo e i controlli ActiveX ospitati dalla finestra di dialogo.  
  
### <a name="remarks"></a>Note  
 Questa memoria è stata allocata da una chiamata a `SplitDialogTemplate`ed è stato usato per tutti i controlli ActiveX ospitati nella finestra di dialogo.  
  
 Eseguire l'override di questa funzione per personalizzare il processo di pulitura di tutte le risorse usate dall'oggetto finestra di dialogo.  
  
##  <a name="setdefaultbutton"></a>COccManager::SetDefaultButton  
 Chiamare questa funzione per impostare il controllo come pulsante predefinito.  
  
```  
static void AFX_CDECL SetDefaultButton(
    CWnd* pWnd,  
    BOOL bDefault);
```  
  
### <a name="parameters"></a>Parametri  
 `pWnd`  
 Puntatore alla finestra che contiene il controllo.  
  
 `bDefault`  
 Diverso da zero se il controllo dovrebbe diventare pulsante predefinito. in caso contrario, zero.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se ha esito positivo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
  
> [!NOTE]
>  Il controllo deve avere il **OLEMISC_ACTSLIKEBUTTON** impostato un bit di stato. Per ulteriori informazioni su **OLEMISC** flag, vedere il [OLEMISC](http://msdn.microsoft.com/library/windows/desktop/ms678497) argomento in Windows SDK.  
  
##  <a name="splitdialogtemplate"></a>COccManager::SplitDialogTemplate  
 Chiamato dal framework per suddividere i controlli ActiveX dei controlli di finestra di dialogo comuni.  
  
```  
virtual DLGTEMPLATE* SplitDialogTemplate(
    const DLGTEMPLATE* pTemplate,  
    DLGITEMTEMPLATE** ppOleDlgItems);
```  
  
### <a name="parameters"></a>Parametri  
 `pTemplate`  
 Puntatore al modello di finestra di dialogo da esaminare.  
  
 `ppOleDlgItems`  
 Un elenco dei puntatori agli elementi caselle di dialogo che sono controlli ActiveX.  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a una struttura di modello di finestra di dialogo contenente solo i controlli ActiveX non. Se non è presente, nessun controllo ActiveX **NULL** viene restituito.  
  
### <a name="remarks"></a>Note  
 Se vengono trovati tutti i controlli ActiveX, il modello viene analizzato e viene creato un nuovo modello, contenente solo i controlli di non ActiveX. I controlli ActiveX trovati durante questo processo vengono aggiunti alla `ppOleDlgItems`.  
  
 Se non sono presenti controlli ActiveX nel modello, **NULL** restituito *.*  
  
> [!NOTE]
>  Memoria allocata per il nuovo modello viene liberato nel `PostCreateDialog` (funzione).  
  
 Eseguire l'override di questa funzione per personalizzare questo processo.  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe COleControlSite](../../mfc/reference/colecontrolsite-class.md)   
 [Classe COleControlContainer](../../mfc/reference/colecontrolcontainer-class.md)

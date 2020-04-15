---
title: Classe COccManager
ms.date: 11/04/2016
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
ms.openlocfilehash: 5637a4709e90bb14caff3fe4e396487e62e213e1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81360359"
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
|[COccManager::CreateContainer](#createcontainer)|Crea un oggetto `COleContainer`.|
|[COccManager::CreateDlgControls](#createdlgcontrols)|Crea controlli ActiveX, ospitati `COleContainer` dall'oggetto associato.|
|[COccManager::CreateSite](#createsite)|Crea un oggetto `COleClientSite`.|
|[COccManager::GetDefBtnCode](#getdefbtncode)|Recupera il codice del pulsante predefinito.|
|[COccManager::IsDialogMessage](#isdialogmessage)|Determina la destinazione di un messaggio di finestra di dialogo.|
|[COccManager::IsLabelControl](#islabelcontrol)|Determina se il controllo specificato è un controllo etichetta.|
|[COccManager::IsMatchingMnemonic](#ismatchingmnemonic)|Determina se il tasto di scelta corrente corrisponde al tasto di scelta del controllo specificato.|
|[COccManager::Evento](#onevent)|Tenta di gestire l'evento specificato.|
|[COccManager::PostCreateDialog](#postcreatedialog)|Libera le risorse allocate durante la creazione della finestra di dialogo.|
|[COccManager::PreCreateDialog](#precreatedialog)|Elabora un modello di finestra di dialogo per i controlli ActiveX.|
|[COccManager::SetDefaultButton](#setdefaultbutton)|Attiva/disattiva lo stato predefinito del controllo specificato.|
|[COccManager::SplitDialogTemplate](#splitdialogtemplate)|Separa tutti i controlli ActiveX esistenti dai controlli comuni nel modello di finestra di dialogo specificato.|

## <a name="remarks"></a>Osservazioni

La classe `CNoTrackObject`base, , è una classe base non documentata (situata in AFXTLS. H). Progettate per l'utilizzo da parte `CNoTrackObject` del framework MFC, le classi derivate dalla classe sono esenti dal rilevamento delle perdite di memoria. Non è consigliabile derivare `CNoTrackObject`direttamente da .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CNoTrackObject`

`COccManager`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxocc.h

## <a name="coccmanagercreatecontainer"></a><a name="createcontainer"></a>COccManager::CreateContainer

Chiamato dal framework per creare un contenitore di controlli.

```
virtual COleControlContainer* CreateContainer(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Puntatore all'oggetto finestra associato al contenitore del sito personalizzato.

### <a name="return-value"></a>Valore restituito

Un puntatore al contenitore appena creato; in caso contrario NULL.

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sulla creazione di siti personalizzati, vedere [COleControlContainer::AttachControlSite](../../mfc/reference/colecontrolcontainer-class.md#attachcontrolsite).

## <a name="coccmanagercreatedlgcontrols"></a><a name="createdlgcontrols"></a>COccManager::CreateDlgControls

Chiamare questa funzione per creare controlli ActiveX specificati dal *pOccDialogInfo* parametro.

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

*pWndParent (padre di pWndParent)*<br/>
Puntatore all'elemento padre dell'oggetto finestra di dialogo.

*LpszResourceName (nome della risorsa)*<br/>
Nome della risorsa da creare.

*pOccDialogInfo (informazioni in lingua inlingua in lingua inlingua del dialog*<br/>
Puntatore al modello di finestra di dialogo utilizzato per creare l'oggetto finestra di dialogo.

*lpRisorsa*<br/>
Puntatore a una risorsa.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il controllo è stato creato correttamente; in caso contrario zero.

## <a name="coccmanagercreatesite"></a><a name="createsite"></a>COccManager::CreateSite

Chiamato dal framework per creare un sito di controllo, ospitato dal contenitore a cui punta *pCtrlCont*.

```
virtual COleControlSite* CreateSite(COleControlContainer* pCtrlCont);
```

### <a name="parameters"></a>Parametri

*pCtrlCont (in questo pCtrlCont)*<br/>
Puntatore al contenitore di controlli che ospita il nuovo sito di controllo.

### <a name="return-value"></a>Valore restituito

Puntatore al sito del controllo appena creato.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per creare un sito di controllo personalizzato, utilizzando la classe derivata da [COleControlSite.](../../mfc/reference/colecontrolsite-class.md)

Ogni contenitore di controlli può ospitare più siti. Creare siti aggiuntivi con `CreateSite`più chiamate a .

## <a name="coccmanagergetdefbtncode"></a><a name="getdefbtncode"></a>COccManager::GetDefBtnCode

Chiamare questa funzione per determinare se il controllo è un pulsante di comando predefinito.

```
static DWORD AFX_CDECL GetDefBtnCode(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Oggetto window contenente il controllo pulsante.

### <a name="return-value"></a>Valore restituito

Uno dei valori seguenti:

- DLGC_DEFPUSHBUTTON Controllo è il pulsante predefinito nella finestra di dialogo.

- DLGC_UNDEFPUSHBUTTON Controllo non è il pulsante predefinito nella finestra di dialogo.

- **0** Il controllo non è un pulsante.

## <a name="coccmanagerisdialogmessage"></a><a name="isdialogmessage"></a>COccManager::IsDialogMessage

Chiamato dal framework per determinare se un messaggio è destinato alla finestra di dialogo specificata e, in caso affermativo, elabora il messaggio.

```
virtual BOOL IsDialogMessage(
    CWnd* pWndDlg,
    LPMSG lpMsg);
```

### <a name="parameters"></a>Parametri

*pWndDlg (in stato di*<br/>
Puntatore alla finestra di dialogo di destinazione del messaggio.

*lpMsg*<br/>
Puntatore a `MSG` una struttura che contiene il messaggio da controllare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il messaggio viene elaborato; in caso contrario zero.

### <a name="remarks"></a>Osservazioni

Il comportamento `IsDialogMessage` predefinito di consiste nel controllare i messaggi della tastiera e convertirli in selezioni per la finestra di dialogo corrispondente. Ad esempio, il tasto TAB, quando viene premuto, seleziona il controllo o il gruppo di controlli successivo.

Eseguire l'override di questa funzione per fornire un comportamento personalizzato per i messaggi inviati alla finestra di dialogo specificata.

## <a name="coccmanagerislabelcontrol"></a><a name="islabelcontrol"></a>COccManager::IsLabelControl

Chiamare questa funzione per determinare se il controllo specificato è un controllo etichetta.

```
static BOOL AFX_CDECL IsLabelControl(CWnd* pWnd);
static BOOL AFX_CDECL IsLabelControl(COleControlSiteOrWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Puntatore alla finestra contenente il controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il controllo è un'etichetta; altrimenti zero

### <a name="remarks"></a>Osservazioni

Un controllo etichetta è un controllo che agisce come un'etichetta per qualsiasi controllo è successivo nell'ordinamento.

## <a name="coccmanagerismatchingmnemonic"></a><a name="ismatchingmnemonic"></a>COccManager::IsMatchingMnemonic

Chiamare questa funzione per determinare se il tasto di scelta corrente corrisponde a quello rappresentato dal controllo.

```
static BOOL AFX_CDECL IsMatchingMnemonic(
    CWnd* pWnd,
    LPMSG lpMsg);

static BOOL AFX_CDECL IsMatchingMnemonic(
    COleControlSiteOrWnd* pWnd,
    LPMSG lpMsg);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Puntatore alla finestra contenente il controllo.

*lpMsg*<br/>
Puntatore al messaggio contenente il messaggio di testo di corrispondenza.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il tasto di scelta corrisponde al controllo; altrimenti zero

### <a name="remarks"></a>Osservazioni

## <a name="coccmanageronevent"></a><a name="onevent"></a>COccManager::Evento

Chiamato dal framework per gestire l'evento specificato.

```
virtual BOOL OnEvent(
    CCmdTarget* pCmdTarget,
    UINT idCtrl,
    AFX_EVENT* pEvent,
    AFX_CMDHANDLERINFO* pHandlerInfo);
```

### <a name="parameters"></a>Parametri

*pCmdTarget*<br/>
Puntatore all'oggetto `CCmdTarget` che tenta di gestire l'evento

*idCtrl (Informazioni in base a Windows*<br/>
ID risorsa del controllo.

*Pevent*<br/>
Evento gestito.

*pHandlerInfo (informazioni in stato in questo stato in*<br/>
Se non `OnEvent` NULL, compila `pTarget` `pmf` i membri `AFX_CMDHANDLERINFO` e della struttura anziché inviare il comando. In genere, questo parametro deve essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'evento è stato gestito, in caso contrario zero.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questa funzione per personalizzare il processo di gestione degli eventi predefinito.

## <a name="coccmanagerprecreatedialog"></a><a name="precreatedialog"></a>COccManager::PreCreateDialog

Chiamato dal framework per elaborare un modello di finestra di dialogo per i controlli ActiveX prima di creare la finestra di dialogo effettiva.

```
virtual const DLGTEMPLATE* PreCreateDialog(
    _AFX_OCC_DIALOG_INFO* pOccDialogInfo,
    const DLGTEMPLATE* pOrigTemplate);
```

### <a name="parameters"></a>Parametri

*pOccDialogInfo (informazioni in lingua inlingua in lingua inlingua del dialog*<br/>
Struttura `_AFX_OCC_DIALOG_INFO` contenente informazioni sul modello di finestra di dialogo e su tutti i controlli ActiveX ospitati dalla finestra di dialogo.

*modello pOrig*<br/>
Puntatore al modello di finestra di dialogo da utilizzare nella creazione della finestra di dialogo.

### <a name="return-value"></a>Valore restituito

Puntatore a una struttura modello di finestra di dialogo utilizzata per creare la finestra di dialogo.

### <a name="remarks"></a>Osservazioni

Il comportamento predefinito effettua `SplitDialogTemplate`una chiamata a , determinando se sono presenti controlli ActiveX e quindi restituisce il modello di finestra di dialogo risultante.

Eseguire l'override di questa funzione per personalizzare il processo di creazione di una finestra di dialogo che ospita i controlli ActiveX.

## <a name="coccmanagerpostcreatedialog"></a><a name="postcreatedialog"></a>COccManager::PostCreateDialog

Chiamato dal framework per liberare memoria allocata per il modello di finestra di dialogo.

```
virtual void PostCreateDialog(_AFX_OCC_DIALOG_INFO* pOccDialogInfo);
```

### <a name="parameters"></a>Parametri

*pOccDialogInfo (informazioni in lingua inlingua in lingua inlingua del dialog*<br/>
Struttura `_AFX_OCC_DIALOG_INFO` contenente informazioni sul modello di finestra di dialogo e su tutti i controlli ActiveX ospitati dalla finestra di dialogo.

### <a name="remarks"></a>Osservazioni

Questa memoria è stata `SplitDialogTemplate`allocata da una chiamata a , ed è stata utilizzata per tutti i controlli ActiveX ospitati nella finestra di dialogo.

Eseguire l'override di questa funzione per personalizzare il processo di pulizia di tutte le risorse utilizzate dall'oggetto finestra di dialogo.

## <a name="coccmanagersetdefaultbutton"></a><a name="setdefaultbutton"></a>COccManager::SetDefaultButton

Chiamare questa funzione per impostare il controllo come pulsante predefinito.

```
static void AFX_CDECL SetDefaultButton(
    CWnd* pWnd,
    BOOL bDefault);
```

### <a name="parameters"></a>Parametri

*pWnd (in questo stato di windows*<br/>
Puntatore alla finestra contenente il controllo.

*bPredefinito*<br/>
Diverso da zero se il controllo deve diventare il pulsante predefinito; in caso contrario zero.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Osservazioni

> [!NOTE]
> Il controllo deve avere il OLEMISC_ACTSLIKEBUTTON bit di stato impostato. Per ulteriori informazioni sui flag OLEMISC, vedere l'argomento [OLEMISC](/windows/win32/api/oleidl/ne-oleidl-olemisc) in Windows SDK.

## <a name="coccmanagersplitdialogtemplate"></a><a name="splitdialogtemplate"></a>COccManager::SplitDialogTemplate

Chiamato dal framework per dividere i controlli ActiveX dai controlli comuni della finestra di dialogo.

```
virtual DLGTEMPLATE* SplitDialogTemplate(
    const DLGTEMPLATE* pTemplate,
    DLGITEMTEMPLATE** ppOleDlgItems);
```

### <a name="parameters"></a>Parametri

*pModello*<br/>
Puntatore al modello di finestra di dialogo da esaminare.

*ppOleDlgItems (prodotti ppOleDlgItems)*<br/>
Elenco di puntatori a elementi della finestra di dialogo che sono controlli ActiveX.

### <a name="return-value"></a>Valore restituito

Puntatore a una struttura del modello di finestra di dialogo contenente solo controlli non ActiveX. Se non sono presenti controlli ActiveX, viene restituito NULL.

### <a name="remarks"></a>Osservazioni

Se vengono trovati controlli ActiveX, il modello viene analizzato e viene creato un nuovo modello, contenente solo controlli non ActiveX. Tutti i controlli ActiveX trovati durante questo processo vengono aggiunti a *ppOleDlgItems*.

Se non sono presenti controlli ActiveX nel modello, viene restituito *NULL.*

> [!NOTE]
> La memoria allocata per il `PostCreateDialog` nuovo modello viene liberata nella funzione.

Eseguire l'override di questa funzione per personalizzare questo processo.

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[COleControlSite (classe)](../../mfc/reference/colecontrolsite-class.md)<br/>
[COleControlContainer (classe)](../../mfc/reference/colecontrolcontainer-class.md)

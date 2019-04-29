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
ms.openlocfilehash: a83f58b8de2411577d9fc025f7a8f8dc535ea8b3
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62388267"
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
|[COccManager::CreateDlgControls](#createdlgcontrols)|Crea i controlli ActiveX, ospitati da associato `COleContainer` oggetto.|
|[COccManager::CreateSite](#createsite)|Crea un oggetto `COleClientSite`.|
|[COccManager::GetDefBtnCode](#getdefbtncode)|Recupera il codice del pulsante predefinito.|
|[COccManager::IsDialogMessage](#isdialogmessage)|Determina la destinazione di un messaggio di dialogo.|
|[COccManager::IsLabelControl](#islabelcontrol)|Determina se il controllo specificato è un controllo etichetta.|
|[COccManager::IsMatchingMnemonic](#ismatchingmnemonic)|Determina se il carattere mnemonico corrente corrisponde al carattere mnemonico del controllo specificato.|
|[COccManager::OnEvent](#onevent)|È stato effettuato un tentativo di gestire l'evento specificato.|
|[COccManager::PostCreateDialog](#postcreatedialog)|Libera le risorse allocate durante la creazione della finestra di dialogo.|
|[COccManager::PreCreateDialog](#precreatedialog)|Elabora un modello di finestra di dialogo per i controlli ActiveX.|
|[COccManager::SetDefaultButton](#setdefaultbutton)|Alterna lo stato predefinito del controllo specificato.|
|[COccManager::SplitDialogTemplate](#splitdialogtemplate)|Separa tutti i controlli ActiveX esistenti da controlli comuni nel modello di finestra di dialogo specificata.|

## <a name="remarks"></a>Note

La classe di base `CNoTrackObject`, è una classe di base non documentata (che si trova in AFXTLS. H). Progettato per l'uso nel framework MFC, le classi derivate dal `CNoTrackObject` classe non sono interessati dal rilevamento di perdite di memoria. Non è consigliabile derivare direttamente da `CNoTrackObject`.

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CNoTrackObject`

`COccManager`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxocc.h

##  <a name="createcontainer"></a>  COccManager::CreateContainer

Chiamata eseguita dal framework per creare un contenitore di controlli.

```
virtual COleControlContainer* CreateContainer(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Un puntatore all'oggetto finestra associato al contenitore del sito personalizzata.

### <a name="return-value"></a>Valore restituito

Un puntatore per il contenitore appena creato. in caso contrario NULL.

### <a name="remarks"></a>Note

Per altre informazioni sulla creazione di siti personalizzati, vedere [COleControlContainer::AttachControlSite](../../mfc/reference/colecontrolcontainer-class.md#attachcontrolsite).

##  <a name="createdlgcontrols"></a>  COccManager::CreateDlgControls

Chiamare questa funzione per creare controlli ActiveX specificati per il *pOccDialogInfo* parametro.

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

*pWndParent*<br/>
Un puntatore all'elemento padre dell'oggetto finestra di dialogo.

*lpszResourceName*<br/>
Il nome della risorsa da creare.

*pOccDialogInfo*<br/>
Un puntatore al modello della finestra di dialogo considerato di creare l'oggetto finestra di dialogo.

*lpResource*<br/>
Un puntatore a una risorsa.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il controllo è stato creato correttamente. in caso contrario, zero.

##  <a name="createsite"></a>  COccManager::CreateSite

Chiamato dal framework per creare un sito del controllo ospitato dal contenitore a cui punta *pCtrlCont*.

```
virtual COleControlSite* CreateSite(COleControlContainer* pCtrlCont);
```

### <a name="parameters"></a>Parametri

*pCtrlCont*<br/>
Puntatore al contenitore del controllo che ospita il nuovo sito di controllo.

### <a name="return-value"></a>Valore restituito

Puntatore al sito del controllo appena creato.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione per creare un controllo personalizzato di un sito, usando il [COleControlSite](../../mfc/reference/colecontrolsite-class.md)-classe derivata.

Ogni contenitore del controllo può ospitare più siti. Creare altri siti con più chiamate a `CreateSite`.

##  <a name="getdefbtncode"></a>  COccManager::GetDefBtnCode

Chiamare questa funzione per determinare se il controllo è un pulsante di comando predefinito.

```
static DWORD AFX_CDECL GetDefBtnCode(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
L'oggetto finestra che contiene il controllo pulsante.

### <a name="return-value"></a>Valore restituito

Uno dei valori seguenti:

- Controllo DLGC_DEFPUSHBUTTON è il pulsante predefinito nella finestra di dialogo.

- Controllo DLGC_UNDEFPUSHBUTTON non è il pulsante predefinito nella finestra di dialogo.

- **0** controllo non è un pulsante.

##  <a name="isdialogmessage"></a>  COccManager::IsDialogMessage

Chiamato dal framework per determinare se un messaggio è destinato la finestra di dialogo specificata e, in caso affermativo elabora il messaggio.

```
virtual BOOL IsDialogMessage(
    CWnd* pWndDlg,
    LPMSG lpMsg);
```

### <a name="parameters"></a>Parametri

*pWndDlg*<br/>
Puntatore alla finestra di dialogo destinazione prevista del messaggio.

*lpMsg*<br/>
Un puntatore a un `MSG` struttura che contiene il messaggio da controllare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il messaggio viene elaborato; in caso contrario, zero.

### <a name="remarks"></a>Note

Il comportamento predefinito di `IsDialogMessage` consiste nel verificare la presenza di messaggi della tastiera e convertirli nelle selezioni per la finestra di dialogo corrispondente. Ad esempio, il tasto TAB, una volta premuto, seleziona il successivo controllo o gruppo di controlli.

Eseguire l'override di questa funzione per fornire un comportamento personalizzato per i messaggi inviati alla finestra di dialogo specificata.

##  <a name="islabelcontrol"></a>  COccManager::IsLabelControl

Chiamare questa funzione per determinare se il controllo specificato è un controllo etichetta.

```
static BOOL AFX_CDECL IsLabelControl(CWnd* pWnd);
static BOOL AFX_CDECL IsLabelControl(COleControlSiteOrWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Puntatore alla finestra che contiene il controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il controllo è un'etichetta; in caso contrario, zero

### <a name="remarks"></a>Note

Un controllo label è uno che agisce come un'etichetta per il controllo è successivo nell'ordinamento.

##  <a name="ismatchingmnemonic"></a>  COccManager::IsMatchingMnemonic

Chiamare questa funzione per determinare se il carattere mnemonico corrente corrisponde a quello rappresentato dal controllo.

```
static BOOL AFX_CDECL IsMatchingMnemonic(
    CWnd* pWnd,
    LPMSG lpMsg);

static BOOL AFX_CDECL IsMatchingMnemonic(
    COleControlSiteOrWnd* pWnd,
    LPMSG lpMsg);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Puntatore alla finestra che contiene il controllo.

*lpMsg*<br/>
Puntatore al messaggio che contiene il carattere mnemonico in modo che corrispondano.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il carattere mnemonico corrisponde al controllo. in caso contrario, zero

### <a name="remarks"></a>Note

##  <a name="onevent"></a>  COccManager::OnEvent

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
Un puntatore al `CCmdTarget` tentare di gestire l'evento oggetto

*idCtrl*<br/>
L'ID risorsa del controllo.

*pEvent*<br/>
L'evento gestito.

*pHandlerInfo*<br/>
Se non è NULL, `OnEvent` viene compilato il `pTarget` e `pmf` membri del `AFX_CMDHANDLERINFO` struttura invece di inviare il comando. In genere, questo parametro deve essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'evento è stato gestito; in caso contrario, zero.

### <a name="remarks"></a>Note

Eseguire l'override di questa funzione per personalizzare il processo di gestione degli eventi predefinito.

##  <a name="precreatedialog"></a>  COccManager::PreCreateDialog

Chiamato dal framework per elaborare un modello di finestra di dialogo per i controlli ActiveX prima di creare la finestra di dialogo effettivo.

```
virtual const DLGTEMPLATE* PreCreateDialog(
    _AFX_OCC_DIALOG_INFO* pOccDialogInfo,
    const DLGTEMPLATE* pOrigTemplate);
```

### <a name="parameters"></a>Parametri

*pOccDialogInfo*<br/>
Un `_AFX_OCC_DIALOG_INFO` struttura che contiene informazioni su tutti i controlli ActiveX ospitati dalla finestra di dialogo e il modello di finestra di dialogo.

*pOrigTemplate*<br/>
Un puntatore al modello della finestra di dialogo da utilizzare nella finestra di dialogo di creazione.

### <a name="return-value"></a>Valore restituito

Un puntatore a una struttura modello di finestra di dialogo considerata di creare la finestra di dialogo.

### <a name="remarks"></a>Note

Il comportamento predefinito effettua una chiamata a `SplitDialogTemplate`, determinare se sono presenti eventuali ActiveX controlla presente e restituisce quindi il modello di finestra di dialogo risultante.

Eseguire l'override di questa funzione per personalizzare il processo di creazione di una finestra di dialogo che ospita i controlli ActiveX.

##  <a name="postcreatedialog"></a>  COccManager::PostCreateDialog

Chiamato dal framework per liberare la memoria allocata per il modello di finestra di dialogo.

```
virtual void PostCreateDialog(_AFX_OCC_DIALOG_INFO* pOccDialogInfo);
```

### <a name="parameters"></a>Parametri

*pOccDialogInfo*<br/>
Un `_AFX_OCC_DIALOG_INFO` struttura che contiene informazioni su tutti i controlli ActiveX ospitati dalla finestra di dialogo e il modello di finestra di dialogo.

### <a name="remarks"></a>Note

Questa memoria è stata allocata da una chiamata a `SplitDialogTemplate`ed è stato usato per tutti i controlli ActiveX ospitati nella finestra di dialogo.

Eseguire l'override di questa funzione per personalizzare il processo di pulizia di tutte le risorse usate dall'oggetto finestra di dialogo.

##  <a name="setdefaultbutton"></a>  COccManager::SetDefaultButton

Chiamare questa funzione per impostare il controllo come pulsante predefinito.

```
static void AFX_CDECL SetDefaultButton(
    CWnd* pWnd,
    BOOL bDefault);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Puntatore alla finestra che contiene il controllo.

*bDefault*<br/>
Diverso da zero se il controllo deve diventare il pulsante predefinito; in caso contrario, zero.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Note

> [!NOTE]
>  Il controllo deve avere il OLEMISC_ACTSLIKEBUTTON status bit impostato. Per altre informazioni sui flag OLEMISC, vedere la [OLEMISC](/windows/desktop/api/oleidl/ne-oleidl-tagolemisc) argomento nel SDK di Windows.

##  <a name="splitdialogtemplate"></a>  COccManager::SplitDialogTemplate

Chiamato dal framework per suddividere i controlli ActiveX da controlli di finestra di dialogo comuni.

```
virtual DLGTEMPLATE* SplitDialogTemplate(
    const DLGTEMPLATE* pTemplate,
    DLGITEMTEMPLATE** ppOleDlgItems);
```

### <a name="parameters"></a>Parametri

*pTemplate*<br/>
Un puntatore al modello della finestra di dialogo da esaminare.

*ppOleDlgItems*<br/>
Elenco di puntatori agli elementi di finestra di dialogo che sono controlli ActiveX.

### <a name="return-value"></a>Valore restituito

Un puntatore a una struttura di modello di finestra di dialogo che contiene solo controlli non ActiveX. Se i controlli ActiveX non sono presenti, viene restituito NULL.

### <a name="remarks"></a>Note

Se vengono trovati tutti i controlli ActiveX, il modello viene analizzato e viene creato un nuovo modello, che contiene solo controlli non ActiveX. Tutti i controlli ActiveX rilevati durante questo processo vengono aggiunte alla *ppOleDlgItems*.

Se non sono presenti controlli ActiveX nel modello, viene restituito NULL *.*

> [!NOTE]
>  Memoria allocata per il nuovo modello viene liberato nel `PostCreateDialog` (funzione).

Eseguire l'override di questa funzione per personalizzare questo processo.

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe COleControlSite](../../mfc/reference/colecontrolsite-class.md)<br/>
[Classe COleControlContainer](../../mfc/reference/colecontrolcontainer-class.md)

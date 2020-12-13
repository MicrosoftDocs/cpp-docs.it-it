---
description: 'Altre informazioni su: classe COccManager'
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
ms.openlocfilehash: 8acd39825f7f842a266a4b1dbf187ba4f7f9b5ca
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97331430"
---
# <a name="coccmanager-class"></a>Classe COccManager

Gestisce vari siti di controllo personalizzato, implementati dagli oggetti `COleControlContainer` e `COleControlSite` .

## <a name="syntax"></a>Sintassi

```
class COccManager : public CNoTrackObject
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[COccManager:: CreateContainer](#createcontainer)|Crea un oggetto `COleContainer`.|
|[COccManager:: CreateDlgControls](#createdlgcontrols)|Crea controlli ActiveX, ospitati dall' `COleContainer` oggetto associato.|
|[COccManager:: CreateSite](#createsite)|Crea un oggetto `COleClientSite`.|
|[COccManager:: GetDefBtnCode](#getdefbtncode)|Recupera il codice del pulsante predefinito.|
|[COccManager:: IsDialogMessage](#isdialogmessage)|Determina la destinazione di un messaggio di dialogo.|
|[COccManager:: IsLabelControl](#islabelcontrol)|Determina se il controllo specificato è un controllo Label.|
|[COccManager:: IsMatchingMnemonic](#ismatchingmnemonic)|Determina se il tasto di scelta corrente corrisponde al tasto di scelta del controllo specificato.|
|[COccManager:: OnEvent](#onevent)|Tenta di gestire l'evento specificato.|
|[COccManager::P ostCreateDialog](#postcreatedialog)|Libera le risorse allocate durante la creazione della finestra di dialogo.|
|[COccManager::P reCreateDialog](#precreatedialog)|Elabora un modello di finestra di dialogo per i controlli ActiveX.|
|[COccManager:: SetDefaultButton](#setdefaultbutton)|Consente di impostare lo stato predefinito del controllo specificato.|
|[COccManager:: SplitDialogTemplate](#splitdialogtemplate)|Separa tutti i controlli ActiveX esistenti da controlli comuni nel modello di finestra di dialogo specificato.|

## <a name="remarks"></a>Commenti

La classe base, `CNoTrackObject` , è una classe di base non documentata (che si trova in AFXTLS. H). Progettato per l'utilizzo da parte del framework MFC, le classi derivate dalla `CNoTrackObject` classe sono esenti dal rilevamento delle perdite di memoria. Non è consigliabile derivare direttamente da `CNoTrackObject` .

## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà

`CNoTrackObject`

`COccManager`

## <a name="requirements"></a>Requisiti

**Intestazione:** afxocc. h

## <a name="coccmanagercreatecontainer"></a><a name="createcontainer"></a> COccManager:: CreateContainer

Chiamato dal Framework per creare un contenitore di controlli.

```
virtual COleControlContainer* CreateContainer(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Puntatore all'oggetto finestra associato al contenitore del sito personalizzato.

### <a name="return-value"></a>Valore restituito

Puntatore al contenitore appena creato; in caso contrario, NULL.

### <a name="remarks"></a>Commenti

Per ulteriori informazioni sulla creazione di siti personalizzati, vedere [COleControlContainer:: AttachControlSite](../../mfc/reference/colecontrolcontainer-class.md#attachcontrolsite).

## <a name="coccmanagercreatedlgcontrols"></a><a name="createdlgcontrols"></a> COccManager:: CreateDlgControls

Chiamare questa funzione per creare controlli ActiveX specificati dal parametro *pOccDialogInfo* .

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
Puntatore all'elemento padre dell'oggetto finestra di dialogo.

*lpszResourceName*<br/>
Nome della risorsa da creare.

*pOccDialogInfo*<br/>
Puntatore al modello di finestra di dialogo utilizzato per creare l'oggetto finestra di dialogo.

*lpResource*<br/>
Puntatore a una risorsa.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il controllo è stato creato correttamente; in caso contrario, zero.

## <a name="coccmanagercreatesite"></a><a name="createsite"></a> COccManager:: CreateSite

Chiamata eseguita dal Framework per creare un sito di controllo, ospitato dal contenitore a cui punta *pCtrlCont*.

```
virtual COleControlSite* CreateSite(COleControlContainer* pCtrlCont);
```

### <a name="parameters"></a>Parametri

*pCtrlCont*<br/>
Puntatore al contenitore del controllo che ospita il nuovo sito del controllo.

### <a name="return-value"></a>Valore restituito

Puntatore al sito del controllo appena creato.

### <a name="remarks"></a>Commenti

Eseguire l'override di questa funzione per creare un sito di controllo personalizzato, usando la classe derivata da [COleControlSite](../../mfc/reference/colecontrolsite-class.md).

Ogni contenitore di controlli può ospitare più siti. Creare altri siti con più chiamate a `CreateSite` .

## <a name="coccmanagergetdefbtncode"></a><a name="getdefbtncode"></a> COccManager:: GetDefBtnCode

Chiamare questa funzione per determinare se il controllo è un pulsante di push predefinito.

```
static DWORD AFX_CDECL GetDefBtnCode(CWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Oggetto finestra contenente il controllo Button.

### <a name="return-value"></a>Valore restituito

Uno dei valori seguenti:

- DLGC_DEFPUSHBUTTON controllo è il pulsante predefinito nella finestra di dialogo.

- DLGC_UNDEFPUSHBUTTON controllo non è il pulsante predefinito nella finestra di dialogo.

- **0** il controllo non è un pulsante.

## <a name="coccmanagerisdialogmessage"></a><a name="isdialogmessage"></a> COccManager:: IsDialogMessage

Viene chiamato dal Framework per determinare se un messaggio è destinato alla finestra di dialogo specificata e, in tal caso, elabora il messaggio.

```
virtual BOOL IsDialogMessage(
    CWnd* pWndDlg,
    LPMSG lpMsg);
```

### <a name="parameters"></a>Parametri

*pWndDlg*<br/>
Puntatore alla finestra di dialogo di destinazione desiderata del messaggio.

*lpMsg*<br/>
Puntatore a una `MSG` struttura che contiene il messaggio da verificare.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il messaggio viene elaborato; in caso contrario, zero.

### <a name="remarks"></a>Commenti

Il comportamento predefinito di `IsDialogMessage` consiste nel cercare i messaggi della tastiera e convertirli in selezioni per la finestra di dialogo corrispondente. Se, ad esempio, si preme il tasto TAB, viene selezionato il controllo o il gruppo di controlli successivo.

Eseguire l'override di questa funzione per fornire un comportamento personalizzato per i messaggi inviati alla finestra di dialogo specificata.

## <a name="coccmanagerislabelcontrol"></a><a name="islabelcontrol"></a> COccManager:: IsLabelControl

Chiamare questa funzione per determinare se il controllo specificato è un controllo Label.

```
static BOOL AFX_CDECL IsLabelControl(CWnd* pWnd);
static BOOL AFX_CDECL IsLabelControl(COleControlSiteOrWnd* pWnd);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Puntatore alla finestra che contiene il controllo.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il controllo è un'etichetta; in caso contrario, zero

### <a name="remarks"></a>Commenti

Un controllo etichetta è uno che funge da etichetta per qualsiasi controllo successivo nell'ordinamento.

## <a name="coccmanagerismatchingmnemonic"></a><a name="ismatchingmnemonic"></a> COccManager:: IsMatchingMnemonic

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

*pWnd*<br/>
Puntatore alla finestra che contiene il controllo.

*lpMsg*<br/>
Puntatore al messaggio contenente il tasto di scelta per il quale trovare una corrispondenza.

### <a name="return-value"></a>Valore restituito

Diverso da zero se il tasto di scelta corrisponde al controllo; in caso contrario, zero

### <a name="remarks"></a>Commenti

## <a name="coccmanageronevent"></a><a name="onevent"></a> COccManager:: OnEvent

Chiamato dal Framework per gestire l'evento specificato.

```
virtual BOOL OnEvent(
    CCmdTarget* pCmdTarget,
    UINT idCtrl,
    AFX_EVENT* pEvent,
    AFX_CMDHANDLERINFO* pHandlerInfo);
```

### <a name="parameters"></a>Parametri

*pCmdTarget*<br/>
Puntatore all'oggetto che `CCmdTarget` tenta di gestire l'evento

*idCtrl*<br/>
ID risorsa del controllo.

*pEvent*<br/>
Evento da gestire.

*pHandlerInfo*<br/>
Se non è NULL, `OnEvent` Compila i `pTarget` membri e `pmf` della `AFX_CMDHANDLERINFO` struttura anziché inviare il comando. In genere, questo parametro deve essere NULL.

### <a name="return-value"></a>Valore restituito

Diverso da zero se l'evento è stato gestito; in caso contrario, zero.

### <a name="remarks"></a>Commenti

Eseguire l'override di questa funzione per personalizzare il processo di gestione degli eventi predefinito.

## <a name="coccmanagerprecreatedialog"></a><a name="precreatedialog"></a> COccManager::P reCreateDialog

Chiamata eseguita dal Framework per elaborare un modello di finestra di dialogo per i controlli ActiveX prima di creare la finestra di dialogo effettiva.

```
virtual const DLGTEMPLATE* PreCreateDialog(
    _AFX_OCC_DIALOG_INFO* pOccDialogInfo,
    const DLGTEMPLATE* pOrigTemplate);
```

### <a name="parameters"></a>Parametri

*pOccDialogInfo*<br/>
`_AFX_OCC_DIALOG_INFO`Struttura contenente informazioni sul modello di finestra di dialogo e tutti i controlli ActiveX ospitati dalla finestra di dialogo.

*pOrigTemplate*<br/>
Puntatore al modello di finestra di dialogo da utilizzare per la creazione della finestra di dialogo.

### <a name="return-value"></a>Valore restituito

Puntatore a una struttura del modello di finestra di dialogo utilizzata per creare la finestra di dialogo.

### <a name="remarks"></a>Commenti

Il comportamento predefinito effettua una chiamata a `SplitDialogTemplate` , determinando se sono presenti controlli ActiveX e quindi restituisce il modello di finestra di dialogo risultante.

Eseguire l'override di questa funzione per personalizzare il processo di creazione di una finestra di dialogo che ospita i controlli ActiveX.

## <a name="coccmanagerpostcreatedialog"></a><a name="postcreatedialog"></a> COccManager::P ostCreateDialog

Chiamato dal Framework per liberare la memoria allocata per il modello di finestra di dialogo.

```
virtual void PostCreateDialog(_AFX_OCC_DIALOG_INFO* pOccDialogInfo);
```

### <a name="parameters"></a>Parametri

*pOccDialogInfo*<br/>
`_AFX_OCC_DIALOG_INFO`Struttura contenente informazioni sul modello di finestra di dialogo e tutti i controlli ActiveX ospitati dalla finestra di dialogo.

### <a name="remarks"></a>Commenti

Questa memoria è stata allocata da una chiamata a `SplitDialogTemplate` ed è stata usata per tutti i controlli ActiveX ospitati nella finestra di dialogo.

Eseguire l'override di questa funzione per personalizzare il processo di pulizia delle risorse utilizzate dall'oggetto finestra di dialogo.

## <a name="coccmanagersetdefaultbutton"></a><a name="setdefaultbutton"></a> COccManager:: SetDefaultButton

Chiamare questa funzione per impostare il controllo come pulsante predefinito.

```
static void AFX_CDECL SetDefaultButton(
    CWnd* pWnd,
    BOOL bDefault);
```

### <a name="parameters"></a>Parametri

*pWnd*<br/>
Puntatore alla finestra che contiene il controllo.

*bLivello predefinito*<br/>
Diverso da zero se il controllo deve diventare il pulsante predefinito. in caso contrario, zero.

### <a name="return-value"></a>Valore restituito

Diverso da zero se ha esito positivo; in caso contrario 0.

### <a name="remarks"></a>Commenti

> [!NOTE]
> Per il controllo è necessario impostare il bit di stato OLEMISC_ACTSLIKEBUTTON. Per ulteriori informazioni sui flag OLEMISC, vedere l'argomento [OLEMISC](/windows/win32/api/oleidl/ne-oleidl-olemisc) nel Windows SDK.

## <a name="coccmanagersplitdialogtemplate"></a><a name="splitdialogtemplate"></a> COccManager:: SplitDialogTemplate

Chiamata eseguita dal Framework per suddividere i controlli ActiveX dai controlli della finestra di dialogo comuni.

```
virtual DLGTEMPLATE* SplitDialogTemplate(
    const DLGTEMPLATE* pTemplate,
    DLGITEMTEMPLATE** ppOleDlgItems);
```

### <a name="parameters"></a>Parametri

*pTemplate*<br/>
Puntatore al modello di finestra di dialogo da esaminare.

*ppOleDlgItems*<br/>
Elenco di puntatori a elementi della finestra di dialogo che sono controlli ActiveX.

### <a name="return-value"></a>Valore restituito

Puntatore a una struttura del modello di finestra di dialogo che contiene solo controlli non ActiveX. Se non è presente alcun controllo ActiveX, viene restituito NULL.

### <a name="remarks"></a>Commenti

Se vengono trovati controlli ActiveX, il modello viene analizzato e viene creato un nuovo modello contenente solo controlli non ActiveX. Tutti i controlli ActiveX trovati durante questo processo vengono aggiunti a *ppOleDlgItems*.

Se nel modello non è presente alcun controllo ActiveX, viene restituito NULL *.*

> [!NOTE]
> La memoria allocata per il nuovo modello viene liberata nella `PostCreateDialog` funzione.

Eseguire l'override di questa funzione per personalizzare questo processo.

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe COleControlSite](../../mfc/reference/colecontrolsite-class.md)<br/>
[Classe COleControlContainer](../../mfc/reference/colecontrolcontainer-class.md)

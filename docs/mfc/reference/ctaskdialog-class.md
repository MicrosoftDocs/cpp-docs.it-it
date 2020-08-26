---
title: CTaskDialog Class
ms.date: 11/19/2018
f1_keywords:
- CTaskDialog
- AFXTASKDIALOG/CTaskDialog
- AFXTASKDIALOG/CTaskDialog::CTaskDialog
- AFXTASKDIALOG/CTaskDialog::AddCommandControl
- AFXTASKDIALOG/CTaskDialog::AddRadioButton
- AFXTASKDIALOG/CTaskDialog::ClickCommandControl
- AFXTASKDIALOG/CTaskDialog::ClickRadioButton
- AFXTASKDIALOG/CTaskDialog::DoModal
- AFXTASKDIALOG/CTaskDialog::GetCommonButtonCount
- AFXTASKDIALOG/CTaskDialog::GetCommonButtonFlag
- AFXTASKDIALOG/CTaskDialog::GetCommonButtonId
- AFXTASKDIALOG/CTaskDialog::GetOptions
- AFXTASKDIALOG/CTaskDialog::GetSelectedCommandControlID
- AFXTASKDIALOG/CTaskDialog::GetSelectedRadioButtonID
- AFXTASKDIALOG/CTaskDialog::GetVerificationCheckboxState
- AFXTASKDIALOG/CTaskDialog::IsCommandControlEnabled
- AFXTASKDIALOG/CTaskDialog::IsRadioButtonEnabled
- AFXTASKDIALOG/CTaskDialog::IsSupported
- AFXTASKDIALOG/CTaskDialog::LoadCommandControls
- AFXTASKDIALOG/CTaskDialog::LoadRadioButtons
- AFXTASKDIALOG/CTaskDialog::NavigateTo
- AFXTASKDIALOG/CTaskDialog::OnCommandControlClick
- AFXTASKDIALOG/CTaskDialog::OnCreate
- AFXTASKDIALOG/CTaskDialog::OnDestroy
- AFXTASKDIALOG/CTaskDialog::OnExpandButtonClick
- AFXTASKDIALOG/CTaskDialog::OnHelp
- AFXTASKDIALOG/CTaskDialog::OnHyperlinkClick
- AFXTASKDIALOG/CTaskDialog::OnInit
- AFXTASKDIALOG/CTaskDialog::OnNavigatePage
- AFXTASKDIALOG/CTaskDialog::OnRadioButtonClick
- AFXTASKDIALOG/CTaskDialog::OnTimer
- AFXTASKDIALOG/CTaskDialog::OnVerificationCheckboxClick
- AFXTASKDIALOG/CTaskDialog::RemoveAllCommandControls
- AFXTASKDIALOG/CTaskDialog::RemoveAllRadioButtons
- AFXTASKDIALOG/CTaskDialog::SetCommandControlOptions
- AFXTASKDIALOG/CTaskDialog::SetCommonButtonOptions
- AFXTASKDIALOG/CTaskDialog::SetCommonButtons
- AFXTASKDIALOG/CTaskDialog::SetContent
- AFXTASKDIALOG/CTaskDialog::SetDefaultCommandControl
- AFXTASKDIALOG/CTaskDialog::SetDefaultRadioButton
- AFXTASKDIALOG/CTaskDialog::SetDialogWidth
- AFXTASKDIALOG/CTaskDialog::SetExpansionArea
- AFXTASKDIALOG/CTaskDialog::SetFooterIcon
- AFXTASKDIALOG/CTaskDialog::SetFooterText
- AFXTASKDIALOG/CTaskDialog::SetMainIcon
- AFXTASKDIALOG/CTaskDialog::SetMainInstruction
- AFXTASKDIALOG/CTaskDialog::SetOptions
- AFXTASKDIALOG/CTaskDialog::SetProgressBarMarquee
- AFXTASKDIALOG/CTaskDialog::SetProgressBarPosition
- AFXTASKDIALOG/CTaskDialog::SetProgressBarRange
- AFXTASKDIALOG/CTaskDialog::SetProgressBarState
- AFXTASKDIALOG/CTaskDialog::SetRadioButtonOptions
- AFXTASKDIALOG/CTaskDialog::SetVerificationCheckbox
- AFXTASKDIALOG/CTaskDialog::SetVerificationCheckboxText
- AFXTASKDIALOG/CTaskDialog::SetWindowTitle
- AFXTASKDIALOG/CTaskDialog::ShowDialog
- AFXTASKDIALOG/CTaskDialog::TaskDialogCallback
helpviewer_keywords:
- CTaskDialog [MFC], CTaskDialog
- CTaskDialog [MFC], AddCommandControl
- CTaskDialog [MFC], AddRadioButton
- CTaskDialog [MFC], ClickCommandControl
- CTaskDialog [MFC], ClickRadioButton
- CTaskDialog [MFC], DoModal
- CTaskDialog [MFC], GetCommonButtonCount
- CTaskDialog [MFC], GetCommonButtonFlag
- CTaskDialog [MFC], GetCommonButtonId
- CTaskDialog [MFC], GetOptions
- CTaskDialog [MFC], GetSelectedCommandControlID
- CTaskDialog [MFC], GetSelectedRadioButtonID
- CTaskDialog [MFC], GetVerificationCheckboxState
- CTaskDialog [MFC], IsCommandControlEnabled
- CTaskDialog [MFC], IsRadioButtonEnabled
- CTaskDialog [MFC], IsSupported
- CTaskDialog [MFC], LoadCommandControls
- CTaskDialog [MFC], LoadRadioButtons
- CTaskDialog [MFC], NavigateTo
- CTaskDialog [MFC], OnCommandControlClick
- CTaskDialog [MFC], OnCreate
- CTaskDialog [MFC], OnDestroy
- CTaskDialog [MFC], OnExpandButtonClick
- CTaskDialog [MFC], OnHelp
- CTaskDialog [MFC], OnHyperlinkClick
- CTaskDialog [MFC], OnInit
- CTaskDialog [MFC], OnNavigatePage
- CTaskDialog [MFC], OnRadioButtonClick
- CTaskDialog [MFC], OnTimer
- CTaskDialog [MFC], OnVerificationCheckboxClick
- CTaskDialog [MFC], RemoveAllCommandControls
- CTaskDialog [MFC], RemoveAllRadioButtons
- CTaskDialog [MFC], SetCommandControlOptions
- CTaskDialog [MFC], SetCommonButtonOptions
- CTaskDialog [MFC], SetCommonButtons
- CTaskDialog [MFC], SetContent
- CTaskDialog [MFC], SetDefaultCommandControl
- CTaskDialog [MFC], SetDefaultRadioButton
- CTaskDialog [MFC], SetDialogWidth
- CTaskDialog [MFC], SetExpansionArea
- CTaskDialog [MFC], SetFooterIcon
- CTaskDialog [MFC], SetFooterText
- CTaskDialog [MFC], SetMainIcon
- CTaskDialog [MFC], SetMainInstruction
- CTaskDialog [MFC], SetOptions
- CTaskDialog [MFC], SetProgressBarMarquee
- CTaskDialog [MFC], SetProgressBarPosition
- CTaskDialog [MFC], SetProgressBarRange
- CTaskDialog [MFC], SetProgressBarState
- CTaskDialog [MFC], SetRadioButtonOptions
- CTaskDialog [MFC], SetVerificationCheckbox
- CTaskDialog [MFC], SetVerificationCheckboxText
- CTaskDialog [MFC], SetWindowTitle
- CTaskDialog [MFC], ShowDialog
- CTaskDialog [MFC], TaskDialogCallback
ms.assetid: 1991ec98-ae56-4483-958b-233809c8c559
ms.openlocfilehash: 3fd67eed7e80a2e594710df8ae8bc6fd13f0e96c
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88837671"
---
# <a name="ctaskdialog-class"></a>CTaskDialog Class

Finestra di dialogo popup che funziona come finestra di messaggio, ma che può visualizzare informazioni aggiuntive all'utente. L'oggetto `CTaskDialog` include inoltre la funzionalità per raccogliere informazioni dall'utente.

## <a name="syntax"></a>Sintassi

```
class CTaskDialog : public CObject
```

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

|Nome|Descrizione|
|-|-|
|[CTaskDialog:: CTaskDialog](#ctaskdialog)|Costruisce un oggetto `CTaskDialog`.|

### <a name="methods"></a>Metodi

|Nome|Descrizione|
|-|-|
|[CTaskDialog:: AddCommandControl](#addcommandcontrol)|Aggiunge un controllo pulsante di comando a `CTaskDialog` .|
|[CTaskDialog:: AddRadioButton](#addradiobutton)|Aggiunge un pulsante di opzione a `CTaskDialog` .|
|[CTaskDialog:: ClickCommandControl](#clickcommandcontrol)|Fa clic su un controllo del pulsante di comando o sul pulsante comune a livello di codice.|
|[CTaskDialog:: ClickRadioButton](#clickradiobutton)|Fa clic su un pulsante di opzione a livello di codice.|
|[CTaskDialog::D oModal](#domodal)|Visualizza la `CTaskDialog`.|
|[CTaskDialog:: GetCommonButtonCount](#getcommonbuttoncount)|Recupera il numero di pulsanti comuni disponibili.|
|[CTaskDialog:: GetCommonButtonFlag](#getcommonbuttonflag)|Converte un pulsante di Windows standard nel tipo di pulsante comune associato alla `CTaskDialog` classe.|
|[CTaskDialog:: GetCommonButtonId](#getcommonbuttonid)|Converte uno dei tipi di pulsante comuni associati alla `CTaskDialog` classe in un pulsante di Windows standard.|
|[CTaskDialog:: GetOptions](#getoptions)|Restituisce i flag di opzione per questo oggetto `CTaskDialog` .|
|[CTaskDialog:: GetSelectedCommandControlID](#getselectedcommandcontrolid)|Restituisce il controllo del pulsante di comando selezionato.|
|[CTaskDialog:: GetSelectedRadioButtonID](#getselectedradiobuttonid)|Restituisce il pulsante di opzione selezionato.|
|[CTaskDialog:: GetVerificationCheckboxState](#getverificationcheckboxstate)|Recupera lo stato della casella di controllo verifica.|
|[CTaskDialog:: IsCommandControlEnabled](#iscommandcontrolenabled)|Determina se un controllo pulsante di comando o un pulsante comune è abilitato.|
|[CTaskDialog:: IsRadioButtonEnabled](#isradiobuttonenabled)|Determina se un pulsante di opzione è abilitato.|
|[CTaskDialog:: è supportato](#issupported)|Determina se il computer che esegue l'applicazione supporta `CTaskDialog` .|
|[CTaskDialog:: LoadCommandControls](#loadcommandcontrols)|Aggiunge i controlli dei pulsanti di comando utilizzando i dati della tabella di stringhe.|
|[CTaskDialog:: LoadRadioButtons](#loadradiobuttons)|Aggiunge pulsanti di opzione usando i dati della tabella di stringhe.|
|[CTaskDialog:: NavigateTo](#navigateto)|Trasferisce lo stato attivo a un altro `CTaskDialog` .|
|[CTaskDialog:: OnCommandControlClick](#oncommandcontrolclick)|Il Framework chiama questo metodo quando l'utente fa clic sul controllo di un pulsante di comando.|
|[CTaskDialog:: OnCreate](#oncreate)|Il Framework chiama questo metodo dopo la creazione di `CTaskDialog` .|
|[CTaskDialog:: OnDestroy](#ondestroy)|Il Framework chiama questo metodo immediatamente prima di eliminare l'oggetto `CTaskDialog` .|
|[CTaskDialog:: OnExpandButtonClick](#onexpandbuttonclick)|Il Framework chiama questo metodo quando l'utente fa clic sul pulsante di espansione.|
|[CTaskDialog:: OnHelp](#onhelp)|Il Framework chiama questo metodo quando l'utente richiede la guida.|
|[CTaskDialog:: OnHyperlinkClick](#onhyperlinkclick)|Il Framework chiama questo metodo quando l'utente fa clic su un collegamento ipertestuale.|
|[CTaskDialog:: OnInit](#oninit)|Il Framework chiama questo metodo quando l'oggetto `CTaskDialog` viene inizializzato.|
|[CTaskDialog:: OnNavigatePage](#onnavigatepage)|Il Framework chiama questo metodo quando l'utente sposta lo stato attivo per quanto riguarda i controlli in `CTaskDialog` .|
|[CTaskDialog:: OnRadioButtonClick](#onradiobuttonclick)|Il Framework chiama questo metodo quando l'utente seleziona un controllo pulsante di opzione.|
|[CTaskDialog:: OnTimer](#ontimer)|Il Framework chiama questo metodo quando il timer scade.|
|[CTaskDialog:: OnVerificationCheckboxClick](#onverificationcheckboxclick)|Il Framework chiama questo metodo quando l'utente fa clic sulla casella di controllo verifica.|
|[CTaskDialog:: RemoveAllCommandControls](#removeallcommandcontrols)|Rimuove tutti i controlli Command da `CTaskDialog` .|
|[CTaskDialog:: RemoveAllRadioButtons](#removeallradiobuttons)|Rimuove tutti i pulsanti di opzione da `CTaskDialog` .|
|[CTaskDialog:: SetCommandControlOptions](#setcommandcontroloptions)|Aggiorna un controllo del pulsante di comando in `CTaskDialog` .|
|[CTaskDialog:: SetCommonButtonOptions](#setcommonbuttonoptions)|Aggiorna un subset di pulsanti comuni da abilitare e richiedere l'elevazione del controllo dell'account utente.|
|[CTaskDialog:: SetCommonButtons](#setcommonbuttons)|Aggiunge pulsanti comuni a `CTaskDialog` .|
|[CTaskDialog:: secontece](#setcontent)|Aggiorna il contenuto di `CTaskDialog` .|
|[CTaskDialog:: SetDefaultCommandControl](#setdefaultcommandcontrol)|Specifica il controllo pulsante di comando predefinito.|
|[CTaskDialog:: SetDefaultRadioButton](#setdefaultradiobutton)|Specifica il pulsante di opzione predefinito.|
|[CTaskDialog:: SetDialogWidth](#setdialogwidth)|Regola la larghezza di `CTaskDialog` .|
|[CTaskDialog:: SetExpansionArea](#setexpansionarea)|Aggiorna l'area di espansione dell'oggetto `CTaskDialog` .|
|[CTaskDialog:: SetFooterIcon](#setfootericon)|Aggiorna l'icona del piè di pagina per l'oggetto `CTaskDialog` .|
|[CTaskDialog:: SetFooterText](#setfootertext)|Aggiorna il testo nel piè di pagina di `CTaskDialog` .|
|[CTaskDialog:: SetMainIcon](#setmainicon)|Aggiorna l'icona principale dell'oggetto `CTaskDialog` .|
|[CTaskDialog:: SetMainInstruction](#setmaininstruction)|Aggiorna l'istruzione principale di `CTaskDialog` .|
|[CTaskDialog:: SetOption](#setoptions)|Configura le opzioni per `CTaskDialog` .|
|[CTaskDialog:: SetProgressBarMarquee](#setprogressbarmarquee)|Configura una barra di selezione per `CTaskDialog` e la aggiunge alla finestra di dialogo.|
|[CTaskDialog:: SetProgressBarPosition](#setprogressbarposition)|Regola la posizione dell'indicatore di stato.|
|[CTaskDialog:: SetProgressBarRange](#setprogressbarrange)|Regola l'intervallo dell'indicatore di stato.|
|[CTaskDialog:: SetProgressBarState](#setprogressbarstate)|Imposta lo stato dell'indicatore di stato e lo Visualizza in `CTaskDialog` .|
|[CTaskDialog:: SetRadioButtonOptions](#setradiobuttonoptions)|Abilita o Disabilita un pulsante di opzione.|
|[CTaskDialog:: SetVerificationCheckbox](#setverificationcheckbox)|Imposta lo stato di selezione della casella di controllo verifica.|
|[CTaskDialog:: SetVerificationCheckboxText](#setverificationcheckboxtext)|Imposta il testo sul lato destro della casella di controllo della verifica.|
|[CTaskDialog:: SetWindowTitle](#setwindowtitle)|Imposta il titolo dell'oggetto `CTaskDialog` .|
|[CTaskDialog:: ShowDialog](#showdialog)|Crea e visualizza un oggetto `CTaskDialog` .|
|[CTaskDialog:: TaskDialogCallback](#taskdialogcallback)|Il Framework chiama questo oggetto in risposta a vari messaggi di Windows.|

### <a name="data-members"></a>Membri dei dati

|Nome|Descrizione|
|-|-|
|`m_aButtons`|Matrice di controlli dei pulsanti di comando per l'oggetto `CTaskDialog` .|
|`m_aRadioButtons`|Matrice di controlli pulsante di opzione per l'oggetto `CTaskDialog` .|
|`m_bVerified`|`TRUE` indica che la casella di controllo verifica è selezionata. `FALSE` indica che non lo è.|
|`m_footerIcon`|Icona nel piè di pagina dell'oggetto `CTaskDialog` .|
|`m_hWnd`|Handle per la finestra per l'oggetto `CTaskDialog` .|
|`m_mainIcon`|Icona principale dell'oggetto `CTaskDialog` .|
|`m_nButtonDisabled`|Maschera che indica quali pulsanti comuni sono disabilitati.|
|`m_nButtonElevation`|Maschera che indica i pulsanti comuni che richiedono l'elevazione del controllo dell'account utente.|
|`m_nButtonId`|ID del controllo pulsante di comando selezionato.|
|`m_nCommonButton`|Maschera che indica i pulsanti comuni che vengono visualizzati nell'oggetto `CTaskDialog` .|
|`m_nDefaultCommandControl`|ID del controllo del pulsante di comando selezionato quando `CTaskDialog` viene visualizzato.|
|`m_nDefaultRadioButton`|ID del controllo pulsante di opzione selezionato quando `CTaskDialog` viene visualizzato.|
|`m_nFlags`|Maschera che indica le opzioni per l'oggetto `CTaskDialog` .|
|`m_nProgressPos`|Posizione corrente per l'indicatore di stato.  Il valore deve essere compreso tra `m_nProgressRangeMin` e `m_nProgressRangeMax`.|
|`m_nProgressRangeMax`|Valore massimo per l'indicatore di stato.|
|`m_nProgressRangeMin`|Valore minimo per l'indicatore di stato.|
|`m_nProgressState`|Stato dell'indicatore di stato. Per ulteriori informazioni, vedere [CTaskDialog:: SetProgressBarState](#setprogressbarstate).|
|`m_nRadioId`|ID del controllo pulsante di opzione selezionato.|
|`m_nWidth`|Larghezza di `CTaskDialog` in pixel.|
|`m_strCollapse`|La stringa `CTaskDialog` visualizzata a destra della casella di espansione quando le informazioni espanse sono nascoste.|
|`m_strContent`|Stringa di contenuto dell'oggetto `CTaskDialog` .|
|`m_strExpand`|La stringa `CTaskDialog` visualizzata a destra della casella di espansione quando vengono visualizzate le informazioni espanse.|
|`m_strFooter`|Piè di pagina dell'oggetto `CTaskDialog` .|
|`m_strInformation`|Informazioni estese per l'oggetto `CTaskDialog` .|
|`m_strMainInstruction`|Istruzione principale dell'oggetto `CTaskDialog` .|
|`m_strTitle`|Titolo della classe `CTaskDialog`.|
|`m_strVerification`|Stringa `CTaskDialog` visualizzata a destra della casella di controllo della verifica.|

## <a name="remarks"></a>Osservazioni

La `CTaskDialog` classe sostituisce la finestra di messaggio standard di Windows e include funzionalità aggiuntive, ad esempio nuovi controlli, per raccogliere informazioni dall'utente. Questa classe si trova nella libreria MFC in Visual Studio 2010 e versioni successive. `CTaskDialog`È disponibile a partire da Windows Vista. Nelle versioni precedenti di Windows non è possibile visualizzare l' `CTaskDialog` oggetto. Usare `CTaskDialog::IsSupported` per determinare in fase di esecuzione se l'utente corrente può visualizzare la finestra di dialogo attività. La finestra di messaggio standard di Windows è ancora supportata.

`CTaskDialog`È disponibile solo quando si compila l'applicazione tramite la libreria Unicode.

`CTaskDialog`Ha due costruttori diversi. Un costruttore consente di specificare due pulsanti di comando e un massimo di sei controlli pulsante normali. Dopo aver creato la, è possibile aggiungere altri pulsanti di comando `CTaskDialog` . Il secondo costruttore non supporta alcun pulsante di comando, ma è possibile aggiungere un numero illimitato di controlli pulsante normali. Per ulteriori informazioni sui costruttori, vedere [CTaskDialog:: CTaskDialog](#ctaskdialog).

Nell'immagine seguente viene illustrato un esempio `CTaskDialog` per illustrare la posizione di alcuni controlli.

![Esempio di CTaskDialog](../../mfc/reference/media/ctaskdialogsample.png "Esempio di CTaskDialog") <br/>
Esempio CTaskDialog

## <a name="requirements"></a>Requisiti

**Sistema operativo minimo necessario:** Windows Vista

**Intestazione:** afxtaskdialog. h

## <a name="ctaskdialogaddcommandcontrol"></a><a name="addcommandcontrol"></a> CTaskDialog:: AddCommandControl

Aggiunge un nuovo controllo pulsante di comando a `CTaskDialog` .

```cpp
void AddCommandControl(
    int nCommandControlID,
    const CString& strCaption,
    BOOL bEnabled = TRUE,
    BOOL bRequiresElevation = FALSE);
```

### <a name="parameters"></a>Parametri

*nCommandControlID*<br/>
in Numero di identificazione del controllo comando.

*strCaption*<br/>
in Stringa `CTaskDialog` visualizzata dall'utente. Usare questa stringa per spiegare lo scopo del comando.

*bEnabled*<br/>
in Parametro booleano che indica se il pulsante nuovo è abilitato o disabilitato.

*bRequiresElevation*<br/>
in Parametro booleano che indica se un comando richiede l'elevazione dei privilegi.

### <a name="remarks"></a>Osservazioni

`CTaskDialog Class`Può visualizzare un numero illimitato di controlli del pulsante di comando. Tuttavia, se in un oggetto `CTaskDialog` vengono visualizzati i controlli dei pulsanti di comando, è possibile visualizzare un massimo di sei pulsanti. Se un oggetto `CTaskDialog` non dispone di alcun controllo del pulsante di comando, può visualizzare un numero illimitato di pulsanti.

Quando l'utente seleziona un controllo del pulsante di comando, viene `CTaskDialog` chiuso. Se l'applicazione Visualizza la finestra di dialogo con [CTaskDialog::D omodal](#domodal), `DoModal` restituisce il *nCommandControlID* del controllo del pulsante di comando selezionato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

## <a name="ctaskdialogaddradiobutton"></a><a name="addradiobutton"></a> CTaskDialog:: AddRadioButton

Aggiunge un pulsante di opzione a `CTaskDialog` .

```cpp
void CTaskDialog::AddRadioButton(
    int nRadioButtonID,
    const CString& strCaption,
    BOOL bEnabled = TRUE);
```

### <a name="parameters"></a>Parametri

*nRadioButtonID*<br/>
in Numero di identificazione del pulsante di opzione.

*strCaption*<br/>
in Stringa `CTaskDialog` visualizzata accanto al pulsante di opzione.

*bEnabled*<br/>
in Parametro booleano che indica se il pulsante di opzione è abilitato.

### <a name="remarks"></a>Osservazioni

I pulsanti di opzione per la [classe CTaskDialog](../../mfc/reference/ctaskdialog-class.md) consentono di raccogliere informazioni dall'utente. Usare la funzione [CTaskDialog:: GetSelectedRadioButtonID](#getselectedradiobuttonid) per determinare il pulsante di opzione selezionato.

`CTaskDialog`Non richiede che i parametri *nRadioButtonID* siano univoci per ogni pulsante di opzione. Tuttavia, è possibile che si verifichi un comportamento imprevisto se non si utilizza un identificatore distinto per ogni pulsante di opzione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

## <a name="ctaskdialogclickcommandcontrol"></a><a name="clickcommandcontrol"></a> CTaskDialog:: ClickCommandControl

Fa clic su un controllo del pulsante di comando o sul pulsante comune a livello di codice.

```
protected:
void ClickCommandControl(int nCommandControlID) const;
```

### <a name="parameters"></a>Parametri

*nCommandControlID*<br/>
in ID di comando del controllo su cui fare clic.

### <a name="remarks"></a>Osservazioni

Questo metodo genera il messaggio di Windows TDM_CLICK_BUTTON.

## <a name="ctaskdialogclickradiobutton"></a><a name="clickradiobutton"></a> CTaskDialog:: ClickRadioButton

Fa clic su un pulsante di opzione a livello di codice.

```
protected:
void ClickRadioButton(int nRadioButtonID) const;
```

### <a name="parameters"></a>Parametri

*nRadioButtonID*<br/>
in ID del pulsante di opzione da fare clic.

### <a name="remarks"></a>Osservazioni

Questo metodo genera il messaggio di Windows TDM_CLICK_RADIO_BUTTON.

## <a name="ctaskdialogctaskdialog"></a><a name="ctaskdialog"></a> CTaskDialog:: CTaskDialog

Crea un'istanza della [classe CTaskDialog](../../mfc/reference/ctaskdialog-class.md).

```
CTaskDialog(
    const CString& strContent,
    const CString& strMainInstruction,
    const CString& strTitle,
    int nCommonButtons = TDCBF_OK_BUTTON | TDCBF_CANCEL_BUTTON,
    int nTaskDialogOptions = TDF_ENABLE_HYPERLINKS | TDF_USE_COMMAND_LINKS,
    const CString& strFooter = _T(""));

CTaskDialog(
    const CString& strContent,
    const CString& strMainInstruction,
    const CString& strTitle,
    int nIDCommandControlsFirst,
    int nIDCommandControlsLast,
    int nCommonButtons,
    int nTaskDialogOptions = TDF_ENABLE_HYPERLINKS | TDF_USE_COMMAND_LINKS,
    const CString& strFooter = _T(""));
```

### <a name="parameters"></a>Parametri

*strContent*<br/>
in Stringa da utilizzare per il contenuto di `CTaskDialog` .

*strMainInstruction*<br/>
in Istruzione principale dell'oggetto `CTaskDialog` .

*strTitle*<br/>
in Titolo dell'oggetto `CTaskDialog` .

*nCommonButtons*<br/>
in Maschera dei pulsanti comuni da aggiungere all'oggetto `CTaskDialog` .

*nTaskDialogOptions*<br/>
in Set di opzioni da utilizzare per l'oggetto `CTaskDialog` .

*strFooter*<br/>
in Stringa da utilizzare come piè di pagina.

*nIDCommandControlsFirst*<br/>
in ID stringa del primo comando.

*nIDCommandControlsLast*<br/>
in ID di stringa dell'ultimo comando.

### <a name="remarks"></a>Osservazioni

È possibile aggiungere un oggetto `CTaskDialog` all'applicazione in due modi. Il primo modo consiste nell'usare uno dei costruttori per creare un oggetto `CTaskDialog` e visualizzarlo usando [CTaskDialog::D omodal](#domodal). Il secondo modo consiste nell'usare la funzione statica [CTaskDialog:: ShowDialog](#showdialog), che consente di visualizzare un `CTaskDialog` oggetto senza creare in modo esplicito un `CTaskDialog` oggetto.

Il secondo costruttore crea i controlli dei pulsanti di comando usando i dati del file di risorse dell'applicazione. La tabella delle stringhe nel file di risorse contiene diverse stringhe con ID di stringa associati. Questo metodo aggiunge un controllo pulsante di comando per ogni voce valida nella tabella di stringhe tra *nIDCommandControlsFirst* e *nCommandControlsLast*, inclusi. Per questi controlli pulsante di comando, la stringa nella tabella di stringhe è la didascalia del controllo e l'ID della stringa è l'ID del controllo.

Per un elenco di opzioni valide, vedere [CTaskDialog:: SetOptions](#setoptions) .

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialogdomodal"></a><a name="domodal"></a> CTaskDialog::D oModal

Mostra l'oggetto `CTaskDialog` e lo rende modale.

```
INT_PTR DoModal (HWND hParent = ::GetActiveWindow());
```

### <a name="parameters"></a>Parametri

*hParent*<br/>
in Finestra padre per l'oggetto `CTaskDialog` .

### <a name="return-value"></a>Valore restituito

Intero che corrisponde alla selezione effettuata dall'utente.

### <a name="remarks"></a>Osservazioni

Visualizza questa istanza di [CTaskDialog](../../mfc/reference/ctaskdialog-class.md). L'applicazione attende quindi che l'utente chiuda la finestra di dialogo.

Il viene `CTaskDialog` chiuso quando l'utente seleziona un pulsante comune, un controllo del collegamento del comando o chiude `CTaskDialog` . Il valore restituito è l'identificatore che indica il modo in cui l'utente ha chiuso la finestra di dialogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialoggetcommonbuttoncount"></a><a name="getcommonbuttoncount"></a> CTaskDialog:: GetCommonButtonCount

Recupera il numero di pulsanti comuni.

```
int GetCommonButtonCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di pulsanti comuni disponibili.

### <a name="remarks"></a>Osservazioni

I pulsanti comuni sono i pulsanti predefiniti che vengono forniti a [CTaskDialog:: CTaskDialog](#ctaskdialog). La [classe CTaskDialog](../../mfc/reference/ctaskdialog-class.md) Visualizza i pulsanti nella parte inferiore della finestra di dialogo.

L'elenco enumerato dei pulsanti viene fornito in CommCtrl. h.

## <a name="ctaskdialoggetcommonbuttonflag"></a><a name="getcommonbuttonflag"></a> CTaskDialog:: GetCommonButtonFlag

Converte un pulsante di Windows standard nel tipo di pulsante comune associato alla [classe CTaskDialog](../../mfc/reference/ctaskdialog-class.md).

```
int GetCommonButtonFlag(int nButtonId) const;
```

### <a name="parameters"></a>Parametri

*nButtonId*<br/>
in Valore del pulsante standard di Windows.

### <a name="return-value"></a>Valore restituito

Valore del `CTaskDialog` pulsante comune corrispondente. Se non è presente un pulsante comune corrispondente, questo metodo restituisce 0.

## <a name="ctaskdialoggetcommonbuttonid"></a><a name="getcommonbuttonid"></a> CTaskDialog:: GetCommonButtonId

Converte uno dei tipi di pulsante comuni associati alla [classe CTaskDialog](../../mfc/reference/ctaskdialog-class.md) in un pulsante di Windows standard.

```
int GetCommonButtonId(int nFlag);
```

### <a name="parameters"></a>Parametri

*nFlag*<br/>
in Tipo di pulsante comune associato alla `CTaskDialog` classe.

### <a name="return-value"></a>Valore restituito

Valore del pulsante Windows standard corrispondente. Se non è presente un pulsante Windows corrispondente, il metodo restituisce 0.

## <a name="ctaskdialoggetoptions"></a><a name="getoptions"></a> CTaskDialog:: GetOptions

Restituisce i flag di opzione per questo oggetto `CTaskDialog` .

```
int GetOptions() const;
```

### <a name="return-value"></a>Valore restituito

Flag per l'oggetto `CTaskDialog` .

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sulle opzioni disponibili per la [classe CTaskDialog](../../mfc/reference/ctaskdialog-class.md), vedere [CTaskDialog:: SetOptions](#setoptions).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialoggetselectedcommandcontrolid"></a><a name="getselectedcommandcontrolid"></a> CTaskDialog:: GetSelectedCommandControlID

Restituisce il controllo del pulsante di comando selezionato.

```
int GetSelectedCommandControlID() const;
```

### <a name="return-value"></a>Valore restituito

ID del controllo del pulsante di comando attualmente selezionato.

### <a name="remarks"></a>Osservazioni

Non è necessario usare questo metodo per recuperare l'ID del pulsante di comando selezionato dall'utente. Tale ID viene restituito da [CTaskDialog::D omodal](#domodal) o [CTaskDialog:: ShowDialog](#showdialog).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

## <a name="ctaskdialoggetselectedradiobuttonid"></a><a name="getselectedradiobuttonid"></a> CTaskDialog:: GetSelectedRadioButtonID

Restituisce il pulsante di opzione selezionato.

```
int GetSelectedRadioButtonID() const;
```

### <a name="return-value"></a>Valore restituito

ID del pulsante di opzione selezionato.

### <a name="remarks"></a>Osservazioni

È possibile utilizzare questo metodo dopo che l'utente chiude la finestra di dialogo per recuperare il pulsante di opzione selezionato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

## <a name="ctaskdialoggetverificationcheckboxstate"></a><a name="getverificationcheckboxstate"></a> CTaskDialog:: GetVerificationCheckboxState

Recupera lo stato della casella di controllo verifica.

```
BOOL GetVerificationCheckboxState() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la casella di controllo è selezionata, FALSE in caso contrario.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#5](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_4.cpp)]

## <a name="ctaskdialogiscommandcontrolenabled"></a><a name="iscommandcontrolenabled"></a> CTaskDialog:: IsCommandControlEnabled

Determina se un controllo o un pulsante di comando è abilitato.

```
BOOL IsCommandControlEnabled(int nCommandControlID) const;
```

### <a name="parameters"></a>Parametri

*nCommandControlID*<br/>
in ID del controllo o del pulsante del pulsante di comando da verificare.

### <a name="return-value"></a>Valore restituito

TRUE se il controllo è abilitato; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

È possibile utilizzare questo metodo per determinare la disponibilità di entrambi i controlli pulsante di comando e i pulsanti comuni della `CTaskDialog` classe *.

Se *nCommandControlID* non è un identificatore valido per un pulsante comune `CTaskDialog` o un controllo pulsante di comando, questo metodo genera un'eccezione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

## <a name="ctaskdialogisradiobuttonenabled"></a><a name="isradiobuttonenabled"></a> CTaskDialog:: IsRadioButtonEnabled

Determina se un pulsante di opzione è abilitato.

```
BOOL IsRadioButtonEnabled(int nRadioButtonID) const;
```

### <a name="parameters"></a>Parametri

*nRadioButtonID*<br/>
in ID del pulsante di opzione da testare.

### <a name="return-value"></a>Valore restituito

TRUE se il pulsante di opzione è abilitato; in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se *nRadioButtonID* non è un identificatore valido per un pulsante di opzione, questo metodo genera un'eccezione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

## <a name="ctaskdialogissupported"></a><a name="issupported"></a> CTaskDialog:: è supportato

Determina se il computer che esegue l'applicazione supporta `CTaskDialog` .

```
static BOOL IsSupported();
```

### <a name="return-value"></a>Valore restituito

TRUE se il computer supporta `CTaskDialog` ; In caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Usare questa funzione per determinare in fase di esecuzione se il computer che esegue l'applicazione supporta la `CTaskDialog` classe. Se il computer non supporta `CTaskDialog` , è necessario fornire un altro metodo per comunicare le informazioni all'utente. L'applicazione verrà arrestata in modo anomalo se tenta di utilizzare un `CTaskDialog` in un computer che non supporta la `CTaskDialog` classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#1](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_5.cpp)]

## <a name="ctaskdialogloadcommandcontrols"></a><a name="loadcommandcontrols"></a> CTaskDialog:: LoadCommandControls

Aggiunge i controlli dei pulsanti di comando utilizzando i dati della tabella di stringhe.

```cpp
void LoadCommandControls(
    int nIDCommandControlsFirst,
    int nIDCommandControlsLast);
```

### <a name="parameters"></a>Parametri

*nIDCommandControlsFirst*<br/>
in ID stringa del primo comando.

*nIDCommandControlsLast*<br/>
in ID di stringa dell'ultimo comando.

### <a name="remarks"></a>Osservazioni

Questo metodo crea i controlli dei pulsanti di comando usando i dati del file di risorse dell'applicazione. La tabella delle stringhe nel file di risorse contiene diverse stringhe con ID di stringa associati. I nuovi controlli dei pulsanti di comando aggiunti utilizzando questo metodo utilizzano la stringa per la didascalia del controllo e l'ID di stringa per l'ID del controllo. L'intervallo di stringhe selezionato viene fornito da *nIDCommandControlsFirst* e *nCommandControlsLast*, inclusi. Se è presente una voce vuota nell'intervallo, il metodo non aggiunge un controllo pulsante di comando per tale voce.

Per impostazione predefinita, i nuovi controlli pulsante di comando sono abilitati e non richiedono l'elevazione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

## <a name="ctaskdialogloadradiobuttons"></a><a name="loadradiobuttons"></a> CTaskDialog:: LoadRadioButtons

Aggiunge i controlli pulsante di opzione usando i dati della tabella di stringhe.

```cpp
void LoadRadioButtons(
    int nIDRadioButtonsFirst,
    int nIDRadioButtonsLast);
```

### <a name="parameters"></a>Parametri

*nIDRadioButtonsFirst*<br/>
in ID stringa del primo pulsante di opzione.

*nIDRadioButtonsLast*<br/>
in ID di stringa dell'ultimo pulsante di opzione.

### <a name="remarks"></a>Osservazioni

Questo metodo crea pulsanti di opzione usando i dati del file di risorse dell'applicazione. La tabella delle stringhe nel file di risorse contiene diverse stringhe con ID di stringa associati. I nuovi pulsanti di opzione aggiunti utilizzando questo metodo utilizzano la stringa per la didascalia del pulsante di opzione e l'ID di stringa per l'ID del pulsante di opzione. L'intervallo di stringhe selezionato viene fornito da *nIDRadioButtonsFirst* e *nRadioButtonsLast*, inclusi. Se è presente una voce vuota nell'intervallo, il metodo non aggiunge un pulsante di opzione per tale voce.

Per impostazione predefinita, i nuovi pulsanti di opzione sono abilitati.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

## <a name="ctaskdialognavigateto"></a><a name="navigateto"></a> CTaskDialog:: NavigateTo

Trasferisce lo stato attivo a un altro `CTaskDialog` .

```
protected:
void NavigateTo(CTaskDialog& oTaskDialog) const;
```

### <a name="parameters"></a>Parametri

*oTaskDialog*<br/>
in Oggetto `CTaskDialog` che riceve lo stato attivo.

### <a name="remarks"></a>Osservazioni

Questo metodo nasconde l'oggetto corrente `CTaskDialog` quando Visualizza *oTaskDialog*. *OTaskDialog* viene visualizzato nella stessa posizione dell'oggetto corrente `CTaskDialog` .

## <a name="ctaskdialogoncommandcontrolclick"></a><a name="oncommandcontrolclick"></a> CTaskDialog:: OnCommandControlClick

Il Framework chiama questo metodo quando l'utente fa clic sul controllo di un pulsante di comando.

```
virtual HRESULT OnCommandControlClick(int nCommandControlID);
```

### <a name="parameters"></a>Parametri

*nCommandControlID*<br/>
in ID del controllo del pulsante di comando selezionato dall'utente.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per implementare il comportamento personalizzato.

## <a name="ctaskdialogoncreate"></a><a name="oncreate"></a> CTaskDialog:: OnCreate

Il Framework chiama questo metodo dopo la creazione di `CTaskDialog` .

```
virtual HRESULT OnCreate();
```

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per implementare il comportamento personalizzato.

## <a name="ctaskdialogondestroy"></a><a name="ondestroy"></a> CTaskDialog:: OnDestroy

Il Framework chiama questo metodo immediatamente prima di eliminare l'oggetto `CTaskDialog` .

```
virtual HRESULT OnDestroy();
```

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per implementare il comportamento personalizzato.

## <a name="ctaskdialogonexpandbuttonclick"></a><a name="onexpandbuttonclick"></a> CTaskDialog:: OnExpandButtonClick

Il Framework chiama questo metodo quando l'utente fa clic sul pulsante di espansione.

```
virtual HRESULT OnExpandButtonClicked(BOOL bExpanded);
```

### <a name="parameters"></a>Parametri

*bExpanded*<br/>
in Un valore diverso da zero indica che vengono visualizzate le informazioni aggiuntive. 0 indica che le informazioni aggiuntive sono nascoste.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per implementare il comportamento personalizzato.

## <a name="ctaskdialogonhelp"></a><a name="onhelp"></a> CTaskDialog:: OnHelp

Il Framework chiama questo metodo quando l'utente richiede la guida.

```
virtual HRESULT OnHelp();
```

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per implementare il comportamento personalizzato.

## <a name="ctaskdialogonhyperlinkclick"></a><a name="onhyperlinkclick"></a> CTaskDialog:: OnHyperlinkClick

Il Framework chiama questo metodo quando l'utente fa clic su un collegamento ipertestuale.

```
virtual HRESULT OnHyperlinkClick(const CString& strHref);
```

### <a name="parameters"></a>Parametri

*strHref*<br/>
in Stringa che rappresenta il collegamento ipertestuale.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Questo metodo chiama [ShellExecute](/windows/win32/api/shellapi/nf-shellapi-shellexecutew) prima che venga restituito S_OK.

Eseguire l'override di questo metodo in una classe derivata per implementare il comportamento personalizzato.

## <a name="ctaskdialogoninit"></a><a name="oninit"></a> CTaskDialog:: OnInit

Il Framework chiama questo metodo quando l'oggetto `CTaskDialog` viene inizializzato.

```
virtual HRESULT OnInit();
```

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per implementare il comportamento personalizzato.

## <a name="ctaskdialogonnavigatepage"></a><a name="onnavigatepage"></a> CTaskDialog:: OnNavigatePage

Il Framework chiama questo metodo in risposta al metodo [CTaskDialog:: NavigateTo](#navigateto) .

```
virtual HRESULT OnNavigatePage();
```

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per implementare il comportamento personalizzato.

## <a name="ctaskdialogonradiobuttonclick"></a><a name="onradiobuttonclick"></a> CTaskDialog:: OnRadioButtonClick

Il Framework chiama questo metodo quando l'utente seleziona un controllo pulsante di opzione.

```
virtual HRESULT OnRadioButtonClick(int nRadioButtonID);
```

### <a name="parameters"></a>Parametri

*nRadioButtonID*<br/>
in ID del controllo pulsante di opzione su cui l'utente ha fatto clic.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per implementare il comportamento personalizzato.

## <a name="ctaskdialogontimer"></a><a name="ontimer"></a> CTaskDialog:: OnTimer

Il Framework chiama questo metodo quando il timer scade.

```
virtual HRESULT OnTimer(long lTime);
```

### <a name="parameters"></a>Parametri

*lTime*<br/>
in Tempo in millisecondi da quando `CTaskDialog` è stato creato o è stato reimpostato il timer.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per implementare il comportamento personalizzato.

## <a name="ctaskdialogonverificationcheckboxclick"></a><a name="onverificationcheckboxclick"></a> CTaskDialog:: OnVerificationCheckboxClick

Il Framework chiama questo metodo quando l'utente fa clic sulla casella di controllo verifica.

```
virtual HRESULT OnVerificationCheckboxClick(BOOL bChecked);
```

### <a name="parameters"></a>Parametri

*bChecked*<br/>
in TRUE indica che la casella di controllo verifica è selezionata. FALSE indica che non lo è.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per implementare il comportamento personalizzato.

## <a name="ctaskdialogremoveallcommandcontrols"></a><a name="removeallcommandcontrols"></a> CTaskDialog:: RemoveAllCommandControls

Rimuove tutti i controlli pulsante di comando da `CTaskDialog` .

```cpp
void RemoveAllCommandControls();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

## <a name="ctaskdialogremoveallradiobuttons"></a><a name="removeallradiobuttons"></a> CTaskDialog:: RemoveAllRadioButtons

Rimuove tutti i pulsanti di opzione da `CTaskDialog` .

```cpp
void RemoveAllRadioButtons();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

## <a name="ctaskdialogsetcommandcontroloptions"></a><a name="setcommandcontroloptions"></a> CTaskDialog:: SetCommandControlOptions

Aggiorna un controllo del pulsante di comando in `CTaskDialog` .

```cpp
void SetCommandControlOptions(
    int nCommandControlID,
    BOOL bEnabled,
    BOOL bRequiresElevation = FALSE);
```

### <a name="parameters"></a>Parametri

*nCommandControlID*<br/>
in ID del controllo comando da aggiornare.

*bEnabled*<br/>
in Parametro booleano che indica se il controllo del pulsante di comando specificato è abilitato o disabilitato.

*bRequiresElevation*<br/>
in Parametro booleano che indica se il controllo del pulsante di comando specificato richiede l'elevazione dei privilegi.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per modificare se un controllo pulsante di comando è abilitato o richiede l'elevazione dopo che è stato aggiunto alla `CTaskDialog` classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

## <a name="ctaskdialogsetcommonbuttonoptions"></a><a name="setcommonbuttonoptions"></a> CTaskDialog:: SetCommonButtonOptions

Aggiorna un subset di pulsanti comuni da abilitare e per richiedere l'elevazione del controllo dell'account utente.

```cpp
void SetCommonButtonOptions(
    int nDisabledButtonMask,
    int nElevationButtonMask = 0);
```

### <a name="parameters"></a>Parametri

*nDisabledButtonMask*<br/>
in Maschera per i pulsanti comuni da disabilitare.

*nElevationButtonMask*<br/>
in Maschera per i pulsanti comuni che richiedono l'elevazione dei privilegi.

### <a name="remarks"></a>Osservazioni

È possibile impostare i pulsanti comuni disponibili per un'istanza della [classe CTaskDialog](../../mfc/reference/ctaskdialog-class.md) usando il costruttore [CTaskDialog:: CTaskDialog](#ctaskdialog) e il metodo [CTaskDialog:: SetCommonButtons](#setcommonbuttons). `CTaskDialog::SetCommonButtonOptions` non supporta l'aggiunta di nuovi pulsanti comuni.

Se si usa questo metodo per disabilitare o elevare un pulsante comune non disponibile per `CTaskDialog` , questo metodo genera un'eccezione usando la macro di [Verifica](diagnostic-services.md#ensure) .

Questo metodo Abilita tutti i pulsanti disponibili per l'oggetto `CTaskDialog` ma che non si trova in *nDisabledButtonMask*, anche se in precedenza è stato disabilitato. Questo metodo considera l'elevazione in modo simile: registra i pulsanti comuni perché non richiedono l'elevazione dei privilegi se il pulsante comune è disponibile ma non incluso in *nElevationButtonMask*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#6](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_6.cpp)]

## <a name="ctaskdialogsetcommonbuttons"></a><a name="setcommonbuttons"></a> CTaskDialog:: SetCommonButtons

Aggiunge pulsanti comuni a `CTaskDialog` .

```cpp
void SetCommonButtons(
    int nButtonMask,
    int nDisabledButtonMask = 0,
    int nElevationButtonMask = 0);
```

### <a name="parameters"></a>Parametri

*nButtonMask*<br/>
in Maschera dei pulsanti da aggiungere all'oggetto `CTaskDialog` .

*nDisabledButtonMask*<br/>
in Maschera dei pulsanti da disabilitare.

*nElevationButtonMask*<br/>
in Maschera dei pulsanti che richiedono l'elevazione dei privilegi.

### <a name="remarks"></a>Osservazioni

Non è possibile chiamare questo metodo dopo la creazione della finestra di visualizzazione per questa istanza della `CTaskDialog` classe. In tal caso, questo metodo genera un'eccezione.

I pulsanti indicati da *nButtonMask* eseguono l'override di tutti i pulsanti comuni aggiunti in precedenza a `CTaskDialog` . Sono disponibili solo i pulsanti indicati in *nButtonMask* .

Se *nDisabledButtonMask* o *nElevationButtonMask* contengono un pulsante che non si trova in *nButtonMask*, questo metodo genera un'eccezione usando la macro di [Verifica](diagnostic-services.md#ensure) .

Per impostazione predefinita, tutti i pulsanti comuni sono abilitati e non richiedono l'elevazione dei privilegi.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#6](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_6.cpp)]

## <a name="ctaskdialogsetcontent"></a><a name="setcontent"></a> CTaskDialog:: secontece

Aggiorna il contenuto di `CTaskDialog` .

```cpp
void SetContent(const CString& strContent);
```

### <a name="parameters"></a>Parametri

*strContent*<br/>
in Stringa da visualizzare all'utente.

### <a name="remarks"></a>Osservazioni

Il contenuto della `CTaskDialog` classe è il testo visualizzato all'utente nella sezione principale della finestra di dialogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialogsetdefaultcommandcontrol"></a><a name="setdefaultcommandcontrol"></a> CTaskDialog:: SetDefaultCommandControl

Specifica il controllo pulsante di comando predefinito.

```cpp
void SetDefaultCommandControl(int nCommandControlID);
```

### <a name="parameters"></a>Parametri

*nCommandControlID*<br/>
in ID del controllo del pulsante di comando come valore predefinito.

### <a name="remarks"></a>Osservazioni

Il controllo pulsante di comando predefinito è il controllo selezionato quando l'oggetto `CTaskDialog` viene visualizzato per la prima volta all'utente.

Questo metodo genera un'eccezione se non riesce a trovare il controllo del pulsante di comando specificato da *nCommandControlID*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

## <a name="ctaskdialogsetdefaultradiobutton"></a><a name="setdefaultradiobutton"></a> CTaskDialog:: SetDefaultRadioButton

Specifica il pulsante di opzione predefinito.

```cpp
void SetDefaultRadioButton(int nRadioButtonID);
```

### <a name="parameters"></a>Parametri

*nRadioButtonID*<br/>
in ID del pulsante di opzione come valore predefinito.

### <a name="remarks"></a>Osservazioni

Il pulsante di opzione predefinito è il pulsante selezionato quando l'oggetto `CTaskDialog` viene visualizzato per la prima volta all'utente.

Questo metodo genera un'eccezione se il pulsante di opzione specificato da *nRadioButtonID*non è stato trovato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

## <a name="ctaskdialogsetdialogwidth"></a><a name="setdialogwidth"></a> CTaskDialog:: SetDialogWidth

Regola la larghezza di `CTaskDialog` .

```cpp
void SetDialogWidth(int nWidth = 0);
```

### <a name="parameters"></a>Parametri

*nWidth*<br/>
in Larghezza, in pixel, della finestra di dialogo.

### <a name="remarks"></a>Osservazioni

Il parametro *nWidth* deve essere maggiore o uguale a 0. In caso contrario, questo metodo genera un'eccezione.

Se *nWidth* è impostato su 0, questo metodo imposta la finestra di dialogo sulle dimensioni predefinite.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialogsetexpansionarea"></a><a name="setexpansionarea"></a> CTaskDialog:: SetExpansionArea

Aggiorna l'area di espansione dell'oggetto `CTaskDialog` .

```cpp
void SetExpansionArea(
    const CString& strExpandedInformation,
    const CString& strCollapsedLabel = _T(""),
    const CString& strExpandedLabel = _T(""));
```

### <a name="parameters"></a>Parametri

*strExpandedInformation*<br/>
in Stringa `CTaskDialog` visualizzata nel corpo principale della finestra di dialogo quando l'utente fa clic sul pulsante di espansione.

*strCollapsedLabel*<br/>
in Stringa `CTaskDialog` visualizzata accanto al pulsante di espansione quando l'area espansa è compressa.

*strExpandedLabel*<br/>
in Stringa `CTaskDialog` visualizzata accanto al pulsante di espansione quando viene visualizzata l'area espansa.

### <a name="remarks"></a>Osservazioni

L'area di espansione della `CTaskDialog` classe consente di fornire informazioni aggiuntive all'utente. L'area di espansione si trova nella parte principale di `CTaskDialog` , che si trova immediatamente sotto il titolo e la stringa di contenuto.

Quando l'oggetto `CTaskDialog` viene visualizzato per la prima volta, non Visualizza le informazioni espanse e viene inserito `strCollapsedLabel` accanto al pulsante di espansione. Quando l'utente fa clic sul pulsante di espansione, `CTaskDialog` Visualizza *strExpandedInformation* e modifica l'etichetta in *strExpandedLabel*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialogsetfootericon"></a><a name="setfootericon"></a> CTaskDialog:: SetFooterIcon

Aggiorna l'icona del piè di pagina di `CTaskDialog` .

```cpp
void SetFooterIcon(HICON hFooterIcon);
void SetFooterIcon(LPCWSTR lpszFooterIcon);
```

### <a name="parameters"></a>Parametri

*hFooterIcon*<br/>
in Nuova icona per l'oggetto `CTaskDialog` .

*lpszFooterIcon*<br/>
in Nuova icona per l'oggetto `CTaskDialog` .

### <a name="remarks"></a>Osservazioni

L'icona del piè di pagina viene visualizzata nella parte inferiore della [classe CTaskDialog](../../mfc/reference/ctaskdialog-class.md). Il testo del piè di pagina può essere associato. È possibile modificare il testo del piè di pagina con [CTaskDialog:: SetFooterText](#setfootertext).

Questo metodo genera un'eccezione con la macro [verificare](diagnostic-services.md#ensure) se `CTaskDialog` è visualizzato o se il parametro di input è null.

Un oggetto `CTaskDialog` può accettare solo un oggetto `HICON` o `LPCWSTR` come icona del piè di pagina. Questa configurazione viene configurata impostando l'opzione TDF_USE_HICON_FOOTER nel costruttore o [CTaskDialog:: SetOption](#setoptions). Per impostazione predefinita, `CTaskDialog` è configurato per l'utilizzo `LPCWSTR` come tipo di input per l'icona del piè di pagina. Questo metodo genera un'eccezione se si tenta di impostare l'icona utilizzando il tipo inappropriato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialogsetfootertext"></a><a name="setfootertext"></a> CTaskDialog:: SetFooterText

Aggiorna il testo nel piè di pagina di `CTaskDialog` .

```cpp
void SetFooterText(const CString& strFooterText);
```

### <a name="parameters"></a>Parametri

*strFooterText*<br/>
in Nuovo testo per il piè di pagina.

### <a name="remarks"></a>Osservazioni

L'icona piè di pagina viene visualizzata accanto al testo del piè di pagina nella parte inferiore di `CTaskDialog` . È possibile modificare l'icona del piè di pagina con [CTaskDialog:: SetFooterIcon](#setfootericon).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialogsetmainicon"></a><a name="setmainicon"></a> CTaskDialog:: SetMainIcon

Aggiorna l'icona principale dell'oggetto `CTaskDialog` .

```cpp
void SetMainIcon(HICON hMainIcon);
void SetMainIcon(LPCWSTR lpszMainIcon);
```

### <a name="parameters"></a>Parametri

*hMainIcon*<br/>
in Nuova icona.

*lpszMainIcon*<br/>
in Nuova icona.

### <a name="remarks"></a>Osservazioni

Questo metodo genera un'eccezione con la macro [verificare](diagnostic-services.md#ensure) se `CTaskDialog` è visualizzato o se il parametro di input è null.

Un oggetto `CTaskDialog` può accettare solo un oggetto `HICON` o `LPCWSTR` come icona principale. È possibile configurare questo valore impostando l'opzione TDF_USE_HICON_MAIN nel costruttore o nel metodo [CTaskDialog:: SetOption](#setoptions) . Per impostazione predefinita, `CTaskDialog` è configurato per l'utilizzo `LPCWSTR` come tipo di input per l'icona principale. Questo metodo genera un'eccezione se si tenta di impostare l'icona utilizzando il tipo inappropriato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialogsetmaininstruction"></a><a name="setmaininstruction"></a> CTaskDialog:: SetMainInstruction

Aggiorna l'istruzione principale di `CTaskDialog` .

```cpp
void SetMainInstruction(const CString& strInstructions);
```

### <a name="parameters"></a>Parametri

*strInstructions*<br/>
in Nuova istruzione principale.

### <a name="remarks"></a>Osservazioni

L'istruzione principale della `CTaskDialog` classe è il testo visualizzato all'utente in un tipo di carattere in grassetto. Si trova nella finestra di dialogo sotto la barra del titolo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialogsetoptions"></a><a name="setoptions"></a> CTaskDialog:: SetOption

Configura le opzioni per `CTaskDialog` .

```cpp
void SetOptions(int nOptionFlag);
```

### <a name="parameters"></a>Parametri

*nOptionFlag*<br/>
in Set di flag da utilizzare per l'oggetto `CTaskDialog` .

### <a name="remarks"></a>Osservazioni

Questo metodo cancella tutte le opzioni correnti per l'oggetto `CTaskDialog` . Per mantenere le opzioni correnti, è necessario recuperarle prima con [CTaskDialog:: GetOptions](#getoptions) e combinarle con le opzioni che si desidera impostare.

Nella tabella seguente sono elencate tutte le opzioni valide.

|Nome|Descrizione|
|-|-|
|TDF_ENABLE_HYPERLINKS|Abilita i collegamenti ipertestuali nell'oggetto `CTaskDialog` .|
|TDF_USE_HICON_MAIN|Configura l'oggetto `CTaskDialog` per l'utilizzo di un oggetto `HICON` per l'icona principale. L'alternativa consiste nell'usare un oggetto `LPCWSTR` .|
|TDF_USE_HICON_FOOTER|Configura l'oggetto `CTaskDialog` per l'utilizzo di un oggetto `HICON` per l'icona del piè di pagina. L'alternativa consiste nell'usare un oggetto `LPCWSTR` .|
|TDF_ALLOW_DIALOG_CANCELLATION|Consente all'utente di chiudere utilizzando `CTaskDialog` la tastiera o utilizzando l'icona nell'angolo superiore destro della finestra di dialogo, anche se il pulsante **Annulla** non è abilitato. Se questo flag non è impostato e il pulsante **Annulla** non è abilitato, l'utente non può chiudere la finestra di dialogo con ALT + F4, il tasto ESC o il pulsante Chiudi della barra del titolo.|
|TDF_USE_COMMAND_LINKS|Configura per l' `CTaskDialog` utilizzo dei controlli del pulsante di comando.|
|TDF_USE_COMMAND_LINKS_NO_ICON|Configura l'oggetto `CTaskDialog` per l'utilizzo dei controlli pulsante di comando senza visualizzare un'icona accanto al controllo. TDF_USE_COMMAND_LINKS esegue l'override di TDF_USE_COMMAND_LINKS_NO_ICON.|
|TDF_EXPAND_FOOTER_AREA|Indica che l'area di espansione è attualmente espansa.|
|TDF_EXPANDED_BY_DEFAULT|Determina se l'area di espansione è espansa per impostazione predefinita.|
|TDF_VERIFICATION_FLAG_CHECKED|Indica che la casella di controllo verifica è attualmente selezionata.|
|TDF_SHOW_PROGRESS_BAR|Configura `CTaskDialog` per visualizzare un indicatore di stato.|
|TDF_SHOW_MARQUEE_PROGRESS_BAR|Configura l'indicatore di stato come indicatore di stato Marquee. Se si abilita questa opzione, è necessario impostare TDF_SHOW_PROGRESS_BAR per avere il comportamento previsto.|
|TDF_CALLBACK_TIMER|Indica che l' `CTaskDialog` intervallo di callback è impostato su circa 200 millisecondi.|
|TDF_POSITION_RELATIVE_TO_WINDOW|Configura l'oggetto `CTaskDialog` da centrare rispetto alla finestra padre. Se questo flag non è abilitato, `CTaskDialog` viene centrato rispetto al monitoraggio.|
|TDF_RTL_LAYOUT|Configura `CTaskDialog` per un layout di lettura da destra a sinistra.|
|TDF_NO_DEFAULT_RADIO_BUTTON|Indica che non viene selezionato alcun pulsante di opzione quando `CTaskDialog` viene visualizzato.|
|TDF_CAN_BE_MINIMIZED|Consente all'utente di ridurre a icona `CTaskDialog` . Per supportare questa opzione, `CTaskDialog` non può essere modale. MFC non supporta questa opzione perché MFC non supporta alcun tipo non modale `CTaskDialog` .|

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialogsetprogressbarmarquee"></a><a name="setprogressbarmarquee"></a> CTaskDialog:: SetProgressBarMarquee

Configura una barra di selezione per `CTaskDialog` e la aggiunge alla finestra di dialogo.

```cpp
void SetProgressBarMarquee(
    BOOL bEnabled = TRUE,
    int nMarqueeSpeed = 0);
```

### <a name="parameters"></a>Parametri

*bEnabled*<br/>
in TRUE per abilitare la barra di selezione; FALSE per disabilitare la barra di selezione e rimuoverla da `CTaskDialog` .

*nMarqueeSpeed*<br/>
in Intero che indica la velocità della barra di selezione.

### <a name="remarks"></a>Osservazioni

La barra di selezione viene visualizzata sotto il testo principale della `CTaskDialog` classe.

Usare *nMarqueeSpeed* per impostare la velocità della barra di selezione; i valori più grandi indicano una velocità più lenta. Il valore 0 per *nMarqueeSpeed* fa sì che la barra Marquee si sposti alla velocità predefinita per Windows.

Questo metodo genera un'eccezione con la macro di [Verifica](diagnostic-services.md#ensure) se *nMarqueeSpeed* è minore di 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#4](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_7.cpp)]

## <a name="ctaskdialogsetprogressbarposition"></a><a name="setprogressbarposition"></a> CTaskDialog:: SetProgressBarPosition

Regola la posizione dell'indicatore di stato.

```cpp
void SetProgressBarPosition(int nProgressPos);
```

### <a name="parameters"></a>Parametri

*nProgressPos*<br/>
in Posizione per l'indicatore di stato.

### <a name="remarks"></a>Osservazioni

Questo metodo genera un'eccezione con la macro di [Verifica](diagnostic-services.md#ensure) se *nProgressPos* non è presente nell'intervallo della barra di stato. È possibile modificare l'intervallo dell'indicatore di stato con [CTaskDialog:: SetProgressBarRange](#setprogressbarrange).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#4](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_7.cpp)]

## <a name="ctaskdialogsetprogressbarrange"></a><a name="setprogressbarrange"></a> CTaskDialog:: SetProgressBarRange

Regola l'intervallo dell'indicatore di stato.

```cpp
void SetProgressBarRange(
    int nRangeMin,
    int nRangeMax);
```

### <a name="parameters"></a>Parametri

*nRangeMin*<br/>
in Limite inferiore dell'indicatore di stato.

*nRangeMax*<br/>
in Limite superiore dell'indicatore di stato.

### <a name="remarks"></a>Osservazioni

La posizione dell'indicatore di stato è relativa a *nRangeMin* e *nRangeMax*. Ad esempio, se *nRangeMin* è 50 e *nRangeMax* è 100, la posizione 75 si trova a metà nell'indicatore di stato. Usare [CTaskDialog:: SetProgressBarPosition](#setprogressbarposition) per impostare la posizione dell'indicatore di stato.

Per visualizzare l'indicatore di stato, è necessario abilitare l'opzione TDF_SHOW_PROGRESS_BAR e TDF_SHOW_MARQUEE_PROGRESS_BAR non deve essere abilitata. Questo metodo imposta automaticamente TDF_SHOW_PROGRESS_BAR e cancella TDF_SHOW_MARQUEE_PROGRESS_BAR. Usare [CTaskDialog:: SetOption](#setoptions) per modificare manualmente le opzioni per questa istanza della [classe CTaskDialog](../../mfc/reference/ctaskdialog-class.md).

Questo metodo genera un'eccezione con la macro di [Verifica](diagnostic-services.md#ensure) se *nRangeMin* non è minore di *nRangeMax*. Questo metodo genera anche un'eccezione se `CTaskDialog` è già visualizzato e dispone di un indicatore di stato Marquee.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#4](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_7.cpp)]

## <a name="ctaskdialogsetprogressbarstate"></a><a name="setprogressbarstate"></a> CTaskDialog:: SetProgressBarState

Imposta lo stato dell'indicatore di stato e lo Visualizza in `CTaskDialog` .

```cpp
void SetProgressBarState(int nState = PBST_NORMAL);
```

### <a name="parameters"></a>Parametri

*nState*<br/>
in Stato dell'indicatore di stato. Per i valori possibili, vedere la sezione Osservazioni.

### <a name="remarks"></a>Osservazioni

Questo metodo genera un'eccezione con la macro di [Verifica](diagnostic-services.md#ensure) se `CTaskDialog` è già visualizzato e dispone di un indicatore di stato Marquee.

Nella tabella seguente sono elencati i valori possibili per *nState*. In tutti questi casi, l'indicatore di stato verrà riempito con il colore normale fino a raggiungere la posizione di arresto designata. A questo punto, cambierà il colore in base allo stato.

|Nome|Descrizione|
|-|-|
|PBST_NORMAL|Quando l'indicatore di stato si riempie, non `CTaskDialog` modifica il colore della barra. Per impostazione predefinita, il colore normale è verde.|
|PBST_ERROR|Al termine del riempimento dell'indicatore di stato, il `CTaskDialog` colore della barra viene modificato in un colore di errore. Per impostazione predefinita, si tratta di un rosso.|
|PBST_PAUSED|Al termine del riempimento dell'indicatore di stato, il `CTaskDialog` colore della barra viene modificato in corrispondenza del colore sospeso. Per impostazione predefinita, si tratta di un colore giallo.|

È possibile impostare il punto in cui l'indicatore di stato si interrompe con [CTaskDialog:: SetProgressBarPosition](#setprogressbarposition).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#4](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_7.cpp)]

## <a name="ctaskdialogsetradiobuttonoptions"></a><a name="setradiobuttonoptions"></a> CTaskDialog:: SetRadioButtonOptions

Abilita o Disabilita un pulsante di opzione.

```cpp
void SetRadioButtonOptions(
    int nRadioButtonID,
    BOOL bEnabled);
```

### <a name="parameters"></a>Parametri

*nRadioButtonID*<br/>
in ID del controllo pulsante di opzione.

*bEnabled*<br/>
in TRUE per abilitare il pulsante di opzione; FALSE per disabilitare il pulsante di opzione.

### <a name="remarks"></a>Osservazioni

Questo metodo genera un'eccezione con la macro di [Verifica](diagnostic-services.md#ensure) se *nRadioButtonID* non è un ID valido per un pulsante di opzione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

## <a name="ctaskdialogsetverificationcheckbox"></a><a name="setverificationcheckbox"></a> CTaskDialog:: SetVerificationCheckbox

Imposta lo stato di selezione della casella di controllo verifica.

```cpp
void SetVerificationCheckbox(BOOL bChecked);
```

### <a name="parameters"></a>Parametri

*bChecked*<br/>
in TRUE per fare in modo che la casella di controllo verifica venga selezionata quando `CTaskDialog` è visualizzato; FALSE per fare in modo che la casella di controllo verifica venga deselezionata quando `CTaskDialog` viene visualizzato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#5](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_4.cpp)]

## <a name="ctaskdialogsetverificationcheckboxtext"></a><a name="setverificationcheckboxtext"></a> CTaskDialog:: SetVerificationCheckboxText

Imposta il testo visualizzato a destra della casella di controllo verifica.

```cpp
void SetVerificationCheckboxText(CString& strVerificationText);
```

### <a name="parameters"></a>Parametri

*strVerificationText*<br/>
in Testo visualizzato da questo metodo accanto alla casella di controllo verifica.

### <a name="remarks"></a>Osservazioni

Questo metodo genera un'eccezione con la macro [assicurarsi](diagnostic-services.md#ensure) se questa istanza della `CTaskDialog` classe è già visualizzata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#5](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_4.cpp)]

## <a name="ctaskdialogsetwindowtitle"></a><a name="setwindowtitle"></a> CTaskDialog:: SetWindowTitle

Imposta il titolo dell'oggetto `CTaskDialog` .

```cpp
void SetWindowTitle(CString& strWindowTitle);
```

### <a name="parameters"></a>Parametri

*strWindowTitle*<br/>
in Nuovo titolo per l'oggetto `CTaskDialog` .

### <a name="remarks"></a>Osservazioni

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialogshowdialog"></a><a name="showdialog"></a> CTaskDialog:: ShowDialog

Crea e visualizza un oggetto `CTaskDialog` .

```
static INT_PTR ShowDialog(
    const CString& strContent,
    const CString& strMainInstruction,
    const CString& strTitle,
    int nIDCommandControlsFirst,
    int nIDCommandControlsLast,
    int nCommonButtons = TDCBF_YES_BUTTON | TDCBF_NO_BUTTON,
    int nTaskDialogOptions = TDF_ENABLE_HYPERLINKS | TDF_USE_COMMAND_LINKS,
    const CString& strFooter = _T(""));
```

### <a name="parameters"></a>Parametri

*strContent*<br/>
in Stringa da utilizzare per il contenuto di `CTaskDialog` .

*strMainInstruction*<br/>
in Istruzione principale dell'oggetto `CTaskDialog` .

*strTitle*<br/>
in Titolo dell'oggetto `CTaskDialog` .

*nIDCommandControlsFirst*<br/>
in ID stringa del primo comando.

*nIDCommandControlsLast*<br/>
in ID di stringa dell'ultimo comando.

*nCommonButtons*<br/>
in Maschera dei pulsanti da aggiungere all'oggetto `CTaskDialog` .

*nTaskDialogOptions*<br/>
in Set di opzioni da utilizzare per l'oggetto `CTaskDialog` .

*strFooter*<br/>
in Stringa da utilizzare come piè di pagina.

### <a name="return-value"></a>Valore restituito

Intero che corrisponde alla selezione effettuata dall'utente.

### <a name="remarks"></a>Osservazioni

Questo metodo statico consente di creare un'istanza della `CTaskDialog` classe senza creare in modo esplicito un `CTaskDialog` oggetto nel codice. Poiché non esiste alcun `CTaskDialog` oggetto, non è possibile chiamare altri metodi di `CTaskDialog` se si utilizza questo metodo per visualizzare un oggetto `CTaskDialog` all'utente.

Questo metodo crea i controlli dei pulsanti di comando usando i dati del file di risorse dell'applicazione. La tabella delle stringhe nel file di risorse contiene diverse stringhe con ID di stringa associati. Questo metodo aggiunge un controllo pulsante di comando per ogni voce valida nella tabella di stringhe tra *nIDCommandControlsFirst* e *nCommandControlsLast*, inclusi. Per questi controlli pulsante di comando, la stringa nella tabella di stringhe è la didascalia del controllo e l'ID della stringa è l'ID del controllo.

Per un elenco di opzioni valide, vedere [CTaskDialog:: SetOptions](#setoptions) .

Il viene `CTaskDialog` chiuso quando l'utente seleziona un pulsante comune, un controllo del collegamento del comando o chiude `CTaskDialog` . Il valore restituito è l'identificatore che indica il modo in cui l'utente ha chiuso la finestra di dialogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#1](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_5.cpp)]

## <a name="ctaskdialogtaskdialogcallback"></a><a name="taskdialogcallback"></a> CTaskDialog:: TaskDialogCallback

Il Framework chiama questo metodo in risposta a vari messaggi di Windows.

```
friend:
HRESULT TaskDialogCallback(
    HWND hWnd,
    UINT uNotification,
    WPARAM wParam,
    LPARAM lParam,
    LONG_PTR dwRefData);
```

### <a name="parameters"></a>Parametri

*HWND*<br/>
in Handle per la `m_hWnd` struttura per l'oggetto `CTaskDialog` .

*uNotification*<br/>
in Codice di notifica che specifica il messaggio generato.

*wParam*<br/>
in Ulteriori informazioni sul messaggio.

*lParam*<br/>
in Ulteriori informazioni sul messaggio.

*dwRefData*<br/>
in Puntatore all' `CTaskDialog` oggetto a cui si applica il messaggio di callback.

### <a name="return-value"></a>Valore restituito

Dipende dal codice di notifica specifico. Per altre informazioni, vedere la sezione Osservazioni.

### <a name="remarks"></a>Osservazioni

L'implementazione predefinita di `TaskDialogCallback` gestisce il messaggio specifico e quindi chiama il metodo appropriato per la [classe CTaskDialog](../../mfc/reference/ctaskdialog-class.md). Ad esempio, in risposta al messaggio di TDN_BUTTON_CLICKED, `TaskDialogCallback` chiama [CTaskDialog:: OnCommandControlClick](#oncommandcontrolclick).

I valori per *wParam* e *lParam* dipendono dal messaggio generato specifico. È possibile che uno o entrambi i valori siano vuoti. Nella tabella seguente sono elencate le notifiche predefinite supportate e i valori rappresentati da *wParam* e *lParam* . Se si esegue l'override di questo metodo in una classe derivata, è necessario implementare il codice di callback per ogni messaggio nella tabella seguente.

|Messaggio di notifica|*wParam* Valore|*lParam* Valore|
|--------------------------|--------------------|--------------------|
|TDN_CREATED|Non usato.|Non usato.|
|TDN_NAVIGATED|Non usato.|Non usato.|
|TDN_BUTTON_CLICKED|ID del controllo del pulsante di comando.|Non usato.|
|TDN_HYPERLINK_CLICKED|Non usato.|Struttura [LPCWSTR](/windows/win32/WinProg/windows-data-types) che contiene il collegamento.|
|TDN_TIMER|Tempo in millisecondi da quando `CTaskDialog` è stato creato o è stato reimpostato il timer.|Non usato.|
|TDN_DESTROYED|Non usato.|Non usato.|
|TDN_RADIO_BUTTON_CLICKED|ID del pulsante di opzione.|Non usato.|
|TDN_DIALOG_CONSTRUCTED|Non usato.|Non usato.|
|TDN_VERIFICATION_CLICKED|1 se la casella di controllo è selezionata, 0 in caso contrario.|Non usato.|
|TDN_HELP|Non usato.|Non usato.|
|TDN_EXPANDO_BUTTON_CLICKED|0 se l'area di espansione è compressa; diverso da zero se viene visualizzato il testo di espansione.|Non usato.|

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Procedura dettagliata: aggiunta di un CTaskDialog a un'applicazione](../../mfc/walkthrough-adding-a-ctaskdialog-to-an-application.md)

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
ms.openlocfilehash: 79f52d275d360cf8447b8977b8196ea5f95eacd8
ms.sourcegitcommit: 7a6116e48c3c11b97371b8ae4ecc23adce1f092d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/22/2020
ms.locfileid: "81752290"
---
# <a name="ctaskdialog-class"></a>CTaskDialog Class

Finestra di dialogo popup che funziona come finestra di messaggio, ma che può visualizzare informazioni aggiuntive all'utente. L'oggetto `CTaskDialog` include inoltre la funzionalità per raccogliere informazioni dall'utente.

## <a name="syntax"></a>Sintassi

```
class CTaskDialog : public CObject
```

## <a name="members"></a>Membri

### <a name="constructors"></a>Costruttori

|||
|-|-|
|[CTaskDialog::CTaskDialog](#ctaskdialog)|Costruisce un oggetto `CTaskDialog`.|

### <a name="methods"></a>Metodi

|||
|-|-|
|[CTaskDialog::AddCommandControl](#addcommandcontrol)|Aggiunge un controllo pulsante di comando all'oggetto `CTaskDialog`.|
|[CTaskDialog::AddRadioButton](#addradiobutton)|Aggiunge un pulsante `CTaskDialog`di opzione al file .|
|[CTaskDialog::ClickCommandControl](#clickcommandcontrol)|Consente di fare clic su un controllo pulsante di comando o su un pulsante comune a livello di codice.|
|[CTaskDialog::ClickRadioButton](#clickradiobutton)|Consente di fare clic su un pulsante di opzione a livello di codice.|
|[CTaskDialog::DoModal](#domodal)|Visualizza la `CTaskDialog`.|
|[CTaskDialog::GetCommonButtonCount](#getcommonbuttoncount)|Recupera il numero di pulsanti comuni disponibili.|
|[CTaskDialog::GetCommonButtonFlag](#getcommonbuttonflag)|Converte un pulsante standard di Windows `CTaskDialog` nel tipo di pulsante comune associato alla classe.|
|[CTaskDialog::GetCommonButtonId](#getcommonbuttonid)|Converte uno dei tipi di `CTaskDialog` pulsante comuni associati alla classe in un pulsante standard di Windows.|
|[CTaskDialog::GetOptions](#getoptions)|Restituisce i flag `CTaskDialog`di opzione per questo oggetto .|
|[CTaskDialog::GetSelectedCommandControlID](#getselectedcommandcontrolid)|Restituisce il controllo pulsante di comando selezionato.|
|[CTaskDialog::GetSelectedRadioButtonID](#getselectedradiobuttonid)|Restituisce il pulsante di opzione selezionato.|
|[CTaskDialog::GetVerificationCheckboxState](#getverificationcheckboxstate)|Recupera lo stato della casella di controllo di verifica.|
|[CTaskDialog::IsCommandControlEnabled](#iscommandcontrolenabled)|Determina se un controllo pulsante di comando o un pulsante comune è abilitato.|
|[CTaskDialog::IsRadioButtonEnabled](#isradiobuttonenabled)|Determina se un pulsante di opzione è abilitato.|
|[CTaskDialog::IsSupported](#issupported)|Determina se il computer che esegue `CTaskDialog`l'applicazione supporta l'oggetto .|
|[CTaskDialog::LoadCommandControls](#loadcommandcontrols)|Aggiunge controlli pulsante di comando utilizzando i dati della tabella di stringhe.|
|[CTaskDialog::LoadRadioButtons](#loadradiobuttons)|Aggiunge pulsanti di opzione utilizzando i dati della tabella di stringhe.|
|[CTaskDialog::NavigateTo](#navigateto)|Trasferisce lo `CTaskDialog`stato attivo su un altro file .|
|[CTaskDialog::OnCommandControlClick](#oncommandcontrolclick)|Il framework chiama questo metodo quando l'utente fa clic su un controllo pulsante di comando.|
|[CTaskDialog::OnCreate](#oncreate)|Il framework chiama questo metodo `CTaskDialog`dopo aver creato l'oggetto .|
|[CTaskDialog::OnDestroy](#ondestroy)|Il framework chiama questo metodo immediatamente `CTaskDialog`prima di eliminare l'oggetto .|
|[CTaskDialog::OnExpandButtonClick](#onexpandbuttonclick)|Il framework chiama questo metodo quando l'utente fa clic sul pulsante di espansione.|
|[CTaskDialog::OnHelp](#onhelp)|Il framework chiama questo metodo quando l'utente richiede la Guida.|
|[CTaskDialog::OnHyperlinkClick](#onhyperlinkclick)|Il framework chiama questo metodo quando l'utente fa clic su un collegamento ipertestuale.|
|[CTaskDialog::OnInit](#oninit)|Il framework chiama questo `CTaskDialog` metodo quando viene inizializzato l'oggetto .|
|[CTaskDialog::OnNavigatePage](#onnavigatepage)|Il framework chiama questo metodo quando l'utente sposta `CTaskDialog`lo stato attivo per quanto riguarda i controlli nel file .|
|[CTaskDialog::OnRadioButtonClick](#onradiobuttonclick)|Il framework chiama questo metodo quando l'utente seleziona un controllo pulsante di opzione.|
|[CTaskDialog::OnTimer](#ontimer)|Il framework chiama questo metodo alla scadenza del timer.|
|[CTaskDialog::OnVerificationCheckboxClick](#onverificationcheckboxclick)|Il framework chiama questo metodo quando l'utente fa clic sulla casella di controllo di verifica.|
|[CTaskDialog::RemoveAllCommandControls](#removeallcommandcontrols)|Rimuove tutti i controlli `CTaskDialog`di comando dall'oggetto .|
|[CTaskDialog::RemoveAllRadioButtons](#removeallradiobuttons)|Rimuove tutti i pulsanti di opzione dall'oggetto `CTaskDialog`.|
|[CTaskDialog::SetCommandControlOptions](#setcommandcontroloptions)|Aggiorna un controllo pulsante di comando nel `CTaskDialog`file .|
|[CTaskDialog::SetCommonButtonOptions](#setcommonbuttonoptions)|Aggiorna un sottoinsieme di pulsanti comuni da abilitare e richiede l'elevazione del controllo dell'account utente.|
|[CTaskDialog::SetCommonButtons](#setcommonbuttons)|Aggiunge pulsanti `CTaskDialog`comuni al file .|
|[CTaskDialog::SetContent](#setcontent)|Aggiorna il contenuto `CTaskDialog`del file .|
|[CTaskDialog::SetDefaultCommandControl](#setdefaultcommandcontrol)|Specifica il controllo pulsante di comando predefinito.|
|[CTaskDialog::SetDefaultRadioButton](#setdefaultradiobutton)|Specifica il pulsante di opzione predefinito.|
|[CTaskDialog::SetDialogWidth](#setdialogwidth)|Regola la larghezza `CTaskDialog`del file .|
|[CTaskDialog::SetExpansionArea](#setexpansionarea)|Aggiorna l'area `CTaskDialog`di espansione del file .|
|[CTaskDialog::SetFooterIcon](#setfootericon)|Aggiorna l'icona del `CTaskDialog`piè di pagina per il file .|
|[CTaskDialog::SetFooterText](#setfootertext)|Aggiorna il testo nel `CTaskDialog`piè di pagina del file .|
|[CTaskDialog::SetMainIcon](#setmainicon)|Aggiorna l'icona principale `CTaskDialog`del file .|
|[CTaskDialog::SetMainInstruction](#setmaininstruction)|Aggiorna l'istruzione `CTaskDialog`principale del file .|
|[CTaskDialog::SetOptions](#setoptions)|Configura le opzioni `CTaskDialog`per il file .|
|[CTaskDialog::SetProgressBarMarquee](#setprogressbarmarquee)|Configura una barra di selezione `CTaskDialog` per e la aggiunge alla finestra di dialogo.|
|[CTaskDialog::SetProgressBarPosition](#setprogressbarposition)|Regola la posizione dell'indicatore di stato.|
|[CTaskDialog::SetProgressBarRange](#setprogressbarrange)|Regola l'intervallo dell'indicatore di stato.|
|[CTaskDialog::SetProgressBarState](#setprogressbarstate)|Imposta lo stato della barra di `CTaskDialog`avanzamento e lo visualizza sul file .|
|[CTaskDialog::SetRadioButtonOptions](#setradiobuttonoptions)|Abilita o disabilita un pulsante di opzione.|
|[CTaskDialog::SetVerificationCheckbox](#setverificationcheckbox)|Imposta lo stato selezionato della casella di controllo di verifica.|
|[CTaskDialog::SetVerificationCheckboxText](#setverificationcheckboxtext)|Imposta il testo sul lato destro della casella di controllo di verifica.|
|[CTaskDialog::SetWindowTitle](#setwindowtitle)|Imposta il titolo `CTaskDialog`del file .|
|[CTaskDialog::ShowDialog](#showdialog)|Crea e `CTaskDialog`visualizza un file .|
|[CTaskDialog::TaskDialogCallback](#taskdialogcallback)|Il framework chiama questo in risposta a vari messaggi di Windows.|

### <a name="data-members"></a>Membri dei dati

|||
|-|-|
|`m_aButtons`|Matrice di controlli pulsante `CTaskDialog`di comando per l'oggetto .|
|`m_aRadioButtons`|Matrice di controlli pulsante `CTaskDialog`di opzione per l'oggetto .|
|`m_bVerified`|`TRUE`indica che la casella di controllo di verifica è selezionata; `FALSE` indica che non lo è.|
|`m_footerIcon`|L'icona nel piè `CTaskDialog`di pagina del file .|
|`m_hWnd`|Un handle per la `CTaskDialog`finestra per il file .|
|`m_mainIcon`|L'icona principale `CTaskDialog`del file .|
|`m_nButtonDisabled`|Maschera che indica quali pulsanti comuni sono disabilitati.|
|`m_nButtonElevation`|Maschera che indica quale dei pulsanti comuni richiede l'elevazione del controllo dell'account utente.|
|`m_nButtonId`|ID del controllo pulsante di comando selezionato.|
|`m_nCommonButton`|Maschera che indica quali pulsanti comuni `CTaskDialog`vengono visualizzati nel file .|
|`m_nDefaultCommandControl`|ID del controllo pulsante di comando `CTaskDialog` selezionato quando viene visualizzato l'oggetto .|
|`m_nDefaultRadioButton`|ID del controllo pulsante di opzione `CTaskDialog` selezionato quando viene visualizzato l'oggetto .|
|`m_nFlags`|Maschera che indica le opzioni `CTaskDialog`per il file .|
|`m_nProgressPos`|Posizione corrente per l'indicatore di stato.  Il valore deve essere compreso tra `m_nProgressRangeMin` e `m_nProgressRangeMax`.|
|`m_nProgressRangeMax`|Valore massimo per l'indicatore di stato.|
|`m_nProgressRangeMin`|Valore minimo per l'indicatore di stato.|
|`m_nProgressState`|Stato della barra di avanzamento. Per ulteriori informazioni, vedere [CTaskDialog::SetProgressBarState](#setprogressbarstate).|
|`m_nRadioId`|ID del controllo pulsante di opzione selezionato.|
|`m_nWidth`|Larghezza di `CTaskDialog` in pixel.|
|`m_strCollapse`|Stringa `CTaskDialog` visualizzata a destra della casella di espansione quando le informazioni espanse vengono nascoste.|
|`m_strContent`|Stringa di contenuto `CTaskDialog`del file .|
|`m_strExpand`|Stringa `CTaskDialog` visualizzata a destra della casella di espansione quando vengono visualizzate le informazioni espanse.|
|`m_strFooter`|Piè di `CTaskDialog`pagina del file .|
|`m_strInformation`|Le informazioni estese `CTaskDialog`per il file .|
|`m_strMainInstruction`|L'istruzione principale `CTaskDialog`del file .|
|`m_strTitle`|Titolo della classe `CTaskDialog`.|
|`m_strVerification`|Stringa `CTaskDialog` visualizzata a destra della casella di controllo di verifica.|

## <a name="remarks"></a>Osservazioni

La `CTaskDialog` classe sostituisce la finestra di messaggio standard di Windows e dispone di funzionalità aggiuntive, ad esempio nuovi controlli per raccogliere informazioni dall'utente. Questa classe si trova nella libreria MFC in Visual Studio 2010 e versioni successive. È `CTaskDialog` disponibile a partire da Windows Vista. Le versioni precedenti di `CTaskDialog` Windows non possono visualizzare l'oggetto. Utilizzare `CTaskDialog::IsSupported` per determinare in fase di esecuzione se l'utente corrente può visualizzare la finestra di dialogo dell'attività. La finestra di messaggio standard di Windows è ancora supportata.

È `CTaskDialog` disponibile solo quando si compila l'applicazione utilizzando la libreria Unicode.

Il `CTaskDialog` ha due costruttori diversi. Un costruttore consente di specificare due pulsanti di comando e un massimo di sei controlli pulsante regolari. È possibile aggiungere altri pulsanti `CTaskDialog`di comando dopo aver creato il file . Il secondo costruttore non supporta i pulsanti di comando, ma è possibile aggiungere un numero illimitato di controlli pulsante regolari. Per ulteriori informazioni sui costruttori, vedere [CTaskDialog::CTaskDialog](#ctaskdialog).

L'immagine seguente `CTaskDialog` mostra un esempio per illustrare la posizione di alcuni controlli.

![Esempio di CTaskDialog](../../mfc/reference/media/ctaskdialogsample.png "Esempio di CTaskDialog") <br/>
Esempio CTaskDialog

## <a name="requirements"></a>Requisiti

**Sistema operativo minimo richiesto:** Windows Vista

**Intestazione:** afxtaskdialog.h

## <a name="ctaskdialogaddcommandcontrol"></a><a name="addcommandcontrol"></a>CTaskDialog::AddCommandControl

Aggiunge un nuovo controllo `CTaskDialog`pulsante di comando all'oggetto .

```cpp
void AddCommandControl(
    int nCommandControlID,
    const CString& strCaption,
    BOOL bEnabled = TRUE,
    BOOL bRequiresElevation = FALSE);
```

### <a name="parameters"></a>Parametri

*nCommandControlID*<br/>
[in] Numero di identificazione del controllo comandi.

*strCaption*<br/>
[in] Stringa visualizzata `CTaskDialog` dall'utente. Utilizzare questa stringa per spiegare lo scopo del comando.

*bAbilitato*<br/>
[in] Parametro booleano che indica se il nuovo pulsante è abilitato o disabilitato.

*bRequiresElevation*<br/>
[in] Parametro booleano che indica se un comando richiede l'elevazione dei privilegi.

### <a name="remarks"></a>Osservazioni

Il `CTaskDialog Class` può visualizzare un numero illimitato di controlli pulsante di comando. Tuttavia, `CTaskDialog` se un oggetto visualizza i controlli dei pulsanti di comando, può visualizzare un massimo di sei pulsanti. Se `CTaskDialog` un oggetto non dispone di controlli pulsante di comando, può visualizzare un numero illimitato di pulsanti.

Quando l'utente seleziona un controllo `CTaskDialog` pulsante di comando, il closes. Se l'applicazione visualizza la finestra di dialogo `DoModal` utilizzando [CTaskDialog::DoModal](#domodal), restituisce il *nCommandControlID* del controllo pulsante di comando selezionato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

## <a name="ctaskdialogaddradiobutton"></a><a name="addradiobutton"></a>CTaskDialog::AddRadioButton

Aggiunge un pulsante `CTaskDialog`di opzione al file .

```cpp
void CTaskDialog::AddRadioButton(
    int nRadioButtonID,
    const CString& strCaption,
    BOOL bEnabled = TRUE);
```

### <a name="parameters"></a>Parametri

*nRadioButtonID (informazioni in inglese)*<br/>
[in] Numero di identificazione del pulsante di opzione.

*strCaption*<br/>
[in] Stringa `CTaskDialog` visualizzata accanto al pulsante di opzione.

*bAbilitato*<br/>
[in] Parametro booleano che indica se il pulsante di opzione è abilitato.

### <a name="remarks"></a>Osservazioni

I pulsanti di opzione per il [CTaskDialog classe](../../mfc/reference/ctaskdialog-class.md) consentono di raccogliere informazioni dall'utente. Utilizzare la funzione [CTaskDialog::GetSelectedRadioButtonID](#getselectedradiobuttonid) per determinare quale pulsante di opzione è selezionato.

Il `CTaskDialog` non richiede che i parametri *nRadioButtonID* siano univoci per ogni pulsante di opzione. Tuttavia, è possibile che si verifichi un comportamento imprevisto se non si utilizza un identificatore distinto per ogni pulsante di opzione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

## <a name="ctaskdialogclickcommandcontrol"></a><a name="clickcommandcontrol"></a>CTaskDialog::ClickCommandControl

Consente di fare clic su un controllo pulsante di comando o su un pulsante comune a livello di codice.

```
protected:
void ClickCommandControl(int nCommandControlID) const;
```

### <a name="parameters"></a>Parametri

*nCommandControlID*<br/>
[in] ID di comando del controllo su cui fare clic.

### <a name="remarks"></a>Osservazioni

Questo metodo genera il messaggio di Windows TDM_CLICK_BUTTON.

## <a name="ctaskdialogclickradiobutton"></a><a name="clickradiobutton"></a>CTaskDialog::ClickRadioButton

Consente di fare clic su un pulsante di opzione a livello di codice.

```
protected:
void ClickRadioButton(int nRadioButtonID) const;
```

### <a name="parameters"></a>Parametri

*nRadioButtonID (informazioni in inglese)*<br/>
[in] ID del pulsante di opzione su cui fare clic.

### <a name="remarks"></a>Osservazioni

Questo metodo genera il messaggio di windows TDM_CLICK_RADIO_BUTTON.

## <a name="ctaskdialogctaskdialog"></a><a name="ctaskdialog"></a>CTaskDialog::CTaskDialog

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

*strContent (strContent)*<br/>
[in] Stringa da utilizzare per il `CTaskDialog`contenuto del file .

*strMainIstruzioni*<br/>
[in] L'istruzione principale `CTaskDialog`del file .

*strTitle (conflitto)*<br/>
[in] Titolo del `CTaskDialog`file .

*nCommonButtons (pulsantiinia)*<br/>
[in] Maschera dei pulsanti comuni da `CTaskDialog`aggiungere al file .

*nTaskDialogOptions*<br/>
[in] Set di opzioni da `CTaskDialog`utilizzare per il file .

*strPiè di pagina*<br/>
[in] Stringa da utilizzare come piè di pagina.

*nIDCommandControlsFirst*<br/>
[in] ID stringa del primo comando.

*nIDCommandControlsUltimo*<br/>
[in] ID stringa dell'ultimo comando.

### <a name="remarks"></a>Osservazioni

Esistono due modi per aggiungere `CTaskDialog` un all'applicazione. Il primo modo consiste nell'utilizzare uno `CTaskDialog` dei costruttori per creare un e visualizzarlo utilizzando [CTaskDialog::DoModal](#domodal). Il secondo modo consiste nell'utilizzare la funzione statica [CTaskDialog::ShowDialog](#showdialog), che consente di visualizzare un `CTaskDialog` oggetto senza creare in modo esplicito un `CTaskDialog` oggetto .

Il secondo costruttore crea i controlli del pulsante di comando utilizzando i dati del file di risorse dell'applicazione. La tabella di stringhe nel file di risorse include diverse stringhe con ID stringa associati. Questo metodo aggiunge un controllo pulsante di comando per ogni voce valida nella tabella di stringhe tra *nIDCommandControlsFirst* e *nCommandControlsLast*, inclusivo. Per questi controlli pulsante di comando, la stringa nella tabella di stringhe è la didascalia del controllo e l'ID stringa è l'ID del controllo.

Vedere [CTaskDialog::SetOptions](#setoptions) per un elenco di opzioni valide.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialogdomodal"></a><a name="domodal"></a>CTaskDialog::DoModal

Mostra `CTaskDialog` e lo rende modale.

```
INT_PTR DoModal (HWND hParent = ::GetActiveWindow());
```

### <a name="parameters"></a>Parametri

*hGenitore*<br/>
[in] Finestra padre per `CTaskDialog`il file .

### <a name="return-value"></a>Valore restituito

Un numero intero che corrisponde alla selezione effettuata dall'utente.

### <a name="remarks"></a>Osservazioni

Visualizza questa istanza di [CTaskDialog](../../mfc/reference/ctaskdialog-class.md). L'applicazione attende quindi che l'utente chiuda la finestra di dialogo.

Si `CTaskDialog` chiude quando l'utente seleziona un pulsante comune, un `CTaskDialog`controllo collegamento di comando o chiude il file . Il valore restituito è l'identificatore che indica come l'utente ha chiuso la finestra di dialogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialoggetcommonbuttoncount"></a><a name="getcommonbuttoncount"></a>CTaskDialog::GetCommonButtonCount

Recupera il numero di pulsanti comuni.

```
int GetCommonButtonCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di pulsanti comuni disponibili.

### <a name="remarks"></a>Osservazioni

I pulsanti comuni sono i pulsanti predefiniti forniti a [CTaskDialog::CTaskDialog](#ctaskdialog). La [classe CTaskDialog](../../mfc/reference/ctaskdialog-class.md) visualizza i pulsanti nella parte inferiore della finestra di dialogo.

L'elenco enumerato di pulsanti è disponibile in CommCtrl.h.

## <a name="ctaskdialoggetcommonbuttonflag"></a><a name="getcommonbuttonflag"></a>CTaskDialog::GetCommonButtonFlag

Converte un pulsante standard di Windows nel tipo di pulsante comune associato alla [classe CTaskDialog](../../mfc/reference/ctaskdialog-class.md).

```
int GetCommonButtonFlag(int nButtonId) const;
```

### <a name="parameters"></a>Parametri

*nButtonId*<br/>
[in] Valore standard del pulsante Windows.

### <a name="return-value"></a>Valore restituito

Valore del pulsante comune corrispondente. `CTaskDialog` Se non è presente alcun pulsante comune corrispondente, questo metodo restituisce 0.If there is no corresponding common button, this method returns 0.

## <a name="ctaskdialoggetcommonbuttonid"></a><a name="getcommonbuttonid"></a>CTaskDialog::GetCommonButtonId

Converte uno dei tipi di pulsante comuni associati al [CTaskDialog classe](../../mfc/reference/ctaskdialog-class.md) in un pulsante standard di Windows.

```
int GetCommonButtonId(int nFlag);
```

### <a name="parameters"></a>Parametri

*nFlag (flag)*<br/>
[in] Tipo di pulsante `CTaskDialog` comune associato alla classe.

### <a name="return-value"></a>Valore restituito

Valore del pulsante standard di Windows corrispondente. Se non è presente alcun pulsante di Windows corrispondente, il metodo restituisce 0.

## <a name="ctaskdialoggetoptions"></a><a name="getoptions"></a>CTaskDialog::GetOptions

Restituisce i flag `CTaskDialog`di opzione per questo oggetto .

```
int GetOptions() const;
```

### <a name="return-value"></a>Valore restituito

I flag `CTaskDialog`per il file .

### <a name="remarks"></a>Osservazioni

Per ulteriori informazioni sulle opzioni disponibili per la [classe CTaskDialog](../../mfc/reference/ctaskdialog-class.md), vedere [CTaskDialog::SetOptions](#setoptions).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialoggetselectedcommandcontrolid"></a><a name="getselectedcommandcontrolid"></a>CTaskDialog::GetSelectedCommandControlID

Restituisce il controllo pulsante di comando selezionato.

```
int GetSelectedCommandControlID() const;
```

### <a name="return-value"></a>Valore restituito

ID del controllo pulsante di comando attualmente selezionato.

### <a name="remarks"></a>Osservazioni

Non è necessario utilizzare questo metodo per recuperare l'ID del pulsante di comando selezionato dall'utente. Tale ID viene restituito da [CTaskDialog::DoModal](#domodal) o [CTaskDialog::ShowDialog](#showdialog).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

## <a name="ctaskdialoggetselectedradiobuttonid"></a><a name="getselectedradiobuttonid"></a>CTaskDialog::GetSelectedRadioButtonID

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

## <a name="ctaskdialoggetverificationcheckboxstate"></a><a name="getverificationcheckboxstate"></a>CTaskDialog::GetVerificationCheckboxState

Recupera lo stato della casella di controllo di verifica.

```
BOOL GetVerificationCheckboxState() const;
```

### <a name="return-value"></a>Valore restituito

TRUESe la casella di controllo è selezionata, FALSE se non lo è.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#5](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_4.cpp)]

## <a name="ctaskdialogiscommandcontrolenabled"></a><a name="iscommandcontrolenabled"></a>CTaskDialog::IsCommandControlEnabled

Determina se un controllo pulsante di comando o un pulsante è abilitato.

```
BOOL IsCommandControlEnabled(int nCommandControlID) const;
```

### <a name="parameters"></a>Parametri

*nCommandControlID*<br/>
[in] ID del controllo pulsante di comando o del pulsante da testare.

### <a name="return-value"></a>Valore restituito

TRUESe il controllo è abilitato, FALSE se non lo è.

### <a name="remarks"></a>Osservazioni

È possibile utilizzare questo metodo per determinare la disponibilità sia `CTaskDialog` dei controlli pulsante di comando che dei pulsanti comuni della classe.

Se *nCommandControlID* non è un identificatore valido per un pulsante comune `CTaskDialog` o un controllo pulsante di comando, questo metodo genera un'eccezione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

## <a name="ctaskdialogisradiobuttonenabled"></a><a name="isradiobuttonenabled"></a>CTaskDialog::IsRadioButtonEnabled

Determina se un pulsante di opzione è abilitato.

```
BOOL IsRadioButtonEnabled(int nRadioButtonID) const;
```

### <a name="parameters"></a>Parametri

*nRadioButtonID (informazioni in inglese)*<br/>
[in] ID del pulsante di opzione da testare.

### <a name="return-value"></a>Valore restituito

TRUESe il pulsante di opzione è abilitato, FALSE se non lo è.

### <a name="remarks"></a>Osservazioni

Se *nRadioButtonID* non è un identificatore valido per un pulsante di opzione, questo metodo genera un'eccezione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

## <a name="ctaskdialogissupported"></a><a name="issupported"></a>CTaskDialog::IsSupported

Determina se il computer che esegue `CTaskDialog`l'applicazione supporta l'oggetto .

```
static BOOL IsSupported();
```

### <a name="return-value"></a>Valore restituito

TRUESe il computer `CTaskDialog`supporta il ; FALSE in caso contrario.

### <a name="remarks"></a>Osservazioni

Utilizzare questa funzione per determinare in fase di esecuzione `CTaskDialog` se il computer che esegue l'applicazione supporta la classe . Se il computer non `CTaskDialog`supporta , è necessario fornire un altro metodo per comunicare informazioni all'utente. L'applicazione si arresterà in `CTaskDialog` modo anomalo se tenta `CTaskDialog` di utilizzare un in un computer che non supporta la classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#1](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_5.cpp)]

## <a name="ctaskdialogloadcommandcontrols"></a><a name="loadcommandcontrols"></a>CTaskDialog::LoadCommandControls

Aggiunge controlli pulsante di comando utilizzando i dati della tabella di stringhe.

```cpp
void LoadCommandControls(
    int nIDCommandControlsFirst,
    int nIDCommandControlsLast);
```

### <a name="parameters"></a>Parametri

*nIDCommandControlsFirst*<br/>
[in] ID stringa del primo comando.

*nIDCommandControlsUltimo*<br/>
[in] ID stringa dell'ultimo comando.

### <a name="remarks"></a>Osservazioni

Questo metodo crea controlli pulsante di comando utilizzando i dati dal file di risorse dell'applicazione. La tabella di stringhe nel file di risorse include diverse stringhe con ID stringa associati. I nuovi controlli pulsante di comando aggiunti utilizzando questo metodo utilizzano la stringa per la didascalia del controllo e l'ID stringa per l'ID del controllo. L'intervallo di stringhe selezionate viene fornito da *nIDCommandControlsFirst* e *nCommandControlsLast*, inclusi. Se è presente una voce vuota nell'intervallo, il metodo non aggiunge un controllo pulsante di comando per tale voce.

Per impostazione predefinita, i nuovi controlli dei pulsanti di comando sono abilitati e non richiedono l'elevazione dei privilegi.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

## <a name="ctaskdialogloadradiobuttons"></a><a name="loadradiobuttons"></a>CTaskDialog::LoadRadioButtons

Aggiunge controlli pulsante di opzione utilizzando i dati della tabella di stringhe.

```cpp
void LoadRadioButtons(
    int nIDRadioButtonsFirst,
    int nIDRadioButtonsLast);
```

### <a name="parameters"></a>Parametri

*nIDRadioButtonsPrimo*<br/>
[in] ID stringa del primo pulsante di opzione.

*NIDRadioButtonsLast (ultimo pulsante)*<br/>
[in] ID stringa dell'ultimo pulsante di opzione.

### <a name="remarks"></a>Osservazioni

Questo metodo crea pulsanti di opzione utilizzando i dati dal file di risorse dell'applicazione. La tabella di stringhe nel file di risorse include diverse stringhe con ID stringa associati. I nuovi pulsanti di opzione aggiunti utilizzando questo metodo utilizzano la stringa per la didascalia del pulsante di opzione e l'ID stringa per l'ID del pulsante di opzione. L'intervallo di stringhe selezionate viene fornito da *nIDRadioButtonsFirst* e *nRadioButtonsLast*, inclusi. Se è presente una voce vuota nell'intervallo, il metodo non aggiunge un pulsante di opzione per tale voce.

Per impostazione predefinita, i nuovi pulsanti di opzione sono abilitati.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

## <a name="ctaskdialognavigateto"></a><a name="navigateto"></a>CTaskDialog::NavigateTo

Trasferisce lo `CTaskDialog`stato attivo su un altro file .

```
protected:
void NavigateTo(CTaskDialog& oTaskDialog) const;
```

### <a name="parameters"></a>Parametri

*oTaskDialog*<br/>
[in] Il `CTaskDialog` che riceve il fuoco.

### <a name="remarks"></a>Osservazioni

Questo metodo nasconde `CTaskDialog` l'oggetto corrente quando visualizza *oTaskDialog*. *L'oggetto oTaskDialog* viene visualizzato nella `CTaskDialog`stessa posizione dell'oggetto corrente.

## <a name="ctaskdialogoncommandcontrolclick"></a><a name="oncommandcontrolclick"></a>CTaskDialog::OnCommandControlClick

Il framework chiama questo metodo quando l'utente fa clic su un controllo pulsante di comando.

```
virtual HRESULT OnCommandControlClick(int nCommandControlID);
```

### <a name="parameters"></a>Parametri

*nCommandControlID*<br/>
[in] ID del controllo pulsante di comando selezionato dall'utente.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per implementare il comportamento personalizzato.

## <a name="ctaskdialogoncreate"></a><a name="oncreate"></a>CTaskDialog::OnCreate

Il framework chiama questo metodo `CTaskDialog`dopo aver creato l'oggetto .

```
virtual HRESULT OnCreate();
```

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per implementare il comportamento personalizzato.

## <a name="ctaskdialogondestroy"></a><a name="ondestroy"></a>CTaskDialog::OnDestroy

Il framework chiama questo metodo immediatamente `CTaskDialog`prima di eliminare l'oggetto .

```
virtual HRESULT OnDestroy();
```

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per implementare il comportamento personalizzato.

## <a name="ctaskdialogonexpandbuttonclick"></a><a name="onexpandbuttonclick"></a>CTaskDialog::OnExpandButtonClick

Il framework chiama questo metodo quando l'utente fa clic sul pulsante di espansione.

```
virtual HRESULT OnExpandButtonClicked(BOOL bExpanded);
```

### <a name="parameters"></a>Parametri

*bEspansa*<br/>
[in] Un valore diverso da zero indica che vengono visualizzate le informazioni aggiuntive; 0 indica che le informazioni aggiuntive sono nascoste.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per implementare il comportamento personalizzato.

## <a name="ctaskdialogonhelp"></a><a name="onhelp"></a>CTaskDialog::OnHelp

Il framework chiama questo metodo quando l'utente richiede la Guida.

```
virtual HRESULT OnHelp();
```

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per implementare il comportamento personalizzato.

## <a name="ctaskdialogonhyperlinkclick"></a><a name="onhyperlinkclick"></a>CTaskDialog::OnHyperlinkClick

Il framework chiama questo metodo quando l'utente fa clic su un collegamento ipertestuale.

```
virtual HRESULT OnHyperlinkClick(const CString& strHref);
```

### <a name="parameters"></a>Parametri

*strHref*<br/>
[in] Stringa che rappresenta il collegamento ipertestuale.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Questo metodo chiama [ShellExecute](/windows/win32/api/shellapi/nf-shellapi-shellexecutew) prima di restituire S_OK.

Eseguire l'override di questo metodo in una classe derivata per implementare il comportamento personalizzato.

## <a name="ctaskdialogoninit"></a><a name="oninit"></a>CTaskDialog::OnInit

Il framework chiama questo `CTaskDialog` metodo quando viene inizializzato l'oggetto .

```
virtual HRESULT OnInit();
```

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per implementare il comportamento personalizzato.

## <a name="ctaskdialogonnavigatepage"></a><a name="onnavigatepage"></a>CTaskDialog::OnNavigatePage

Il framework chiama questo metodo in risposta al [CTaskDialog::NavigateTo](#navigateto) metodo.

```
virtual HRESULT OnNavigatePage();
```

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per implementare il comportamento personalizzato.

## <a name="ctaskdialogonradiobuttonclick"></a><a name="onradiobuttonclick"></a>CTaskDialog::OnRadioButtonClick

Il framework chiama questo metodo quando l'utente seleziona un controllo pulsante di opzione.

```
virtual HRESULT OnRadioButtonClick(int nRadioButtonID);
```

### <a name="parameters"></a>Parametri

*nRadioButtonID (informazioni in inglese)*<br/>
[in] ID del controllo pulsante di opzione su cui l'utente ha fatto clic.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per implementare il comportamento personalizzato.

## <a name="ctaskdialogontimer"></a><a name="ontimer"></a>CTaskDialog::OnTimer

Il framework chiama questo metodo alla scadenza del timer.

```
virtual HRESULT OnTimer(long lTime);
```

### <a name="parameters"></a>Parametri

*lOra*<br/>
[in] Tempo in millisecondi `CTaskDialog` dalla creazione del timer o dalla reimpostazione del timer.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per implementare il comportamento personalizzato.

## <a name="ctaskdialogonverificationcheckboxclick"></a><a name="onverificationcheckboxclick"></a>CTaskDialog::OnVerificationCheckboxClick

Il framework chiama questo metodo quando l'utente fa clic sulla casella di controllo di verifica.

```
virtual HRESULT OnVerificationCheckboxClick(BOOL bChecked);
```

### <a name="parameters"></a>Parametri

*bControllato*<br/>
[in] TRUE indica che la casella di controllo di verifica è selezionata. FALSE indica che non lo è.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Osservazioni

Eseguire l'override di questo metodo in una classe derivata per implementare il comportamento personalizzato.

## <a name="ctaskdialogremoveallcommandcontrols"></a><a name="removeallcommandcontrols"></a>CTaskDialog::RemoveAllCommandControls

Rimuove tutti i controlli `CTaskDialog`del pulsante di comando dall'oggetto .

```cpp
void RemoveAllCommandControls();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

## <a name="ctaskdialogremoveallradiobuttons"></a><a name="removeallradiobuttons"></a>CTaskDialog::RemoveAllRadioButtons

Rimuove tutti i pulsanti di opzione dall'oggetto `CTaskDialog`.

```cpp
void RemoveAllRadioButtons();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

## <a name="ctaskdialogsetcommandcontroloptions"></a><a name="setcommandcontroloptions"></a>CTaskDialog::SetCommandControlOptions

Aggiorna un controllo pulsante di comando nel `CTaskDialog`file .

```cpp
void SetCommandControlOptions(
    int nCommandControlID,
    BOOL bEnabled,
    BOOL bRequiresElevation = FALSE);
```

### <a name="parameters"></a>Parametri

*nCommandControlID*<br/>
[in] ID del controllo comandi da aggiornare.

*bAbilitato*<br/>
[in] Parametro booleano che indica se il controllo del pulsante di comando specificato è abilitato o disabilitato.

*bRequiresElevation*<br/>
[in] Parametro booleano che indica se il controllo pulsante di comando specificato richiede l'elevazione dei privilegi.

### <a name="remarks"></a>Osservazioni

Utilizzare questo metodo per modificare se un controllo pulsante di comando `CTaskDialog` è abilitato o richiede l'elevazione dei privilegi dopo che è stato aggiunto alla classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

## <a name="ctaskdialogsetcommonbuttonoptions"></a><a name="setcommonbuttonoptions"></a>CTaskDialog::SetCommonButtonOptions

Aggiorna un sottoinsieme di pulsanti comuni per essere abilitato e per richiedere l'elevazione del controllo dell'account utente.

```cpp
void SetCommonButtonOptions(
    int nDisabledButtonMask,
    int nElevationButtonMask = 0);
```

### <a name="parameters"></a>Parametri

*nDisabledButtonMask (Maschera di pulsante)*<br/>
[in] Maschera per la disabilitazione dei pulsanti comuni.

*nMascheraPulsanteElevazionon*<br/>
[in] Maschera per i pulsanti comuni che richiedono la quota altimetrica.

### <a name="remarks"></a>Osservazioni

È possibile impostare i pulsanti comuni disponibili per un'istanza della [classe CTaskDialog](../../mfc/reference/ctaskdialog-class.md) utilizzando il costruttore [CTaskDialog::CTaskDialog](#ctaskdialog) e il metodo [CTaskDialog::SetCommonButtons](#setcommonbuttons). `CTaskDialog::SetCommonButtonOptions`non supporta l'aggiunta di nuovi pulsanti comuni.

Se si utilizza questo metodo per disabilitare o elevare un pulsante comune non disponibile per questo `CTaskDialog`, questo metodo genera un'eccezione utilizzando la macro [ENSURE.](diagnostic-services.md#ensure)

Questo metodo abilita qualsiasi pulsante `CTaskDialog` disponibile per il ma non è in *nDisabledButtonMask*, anche se è stato disabilitato in precedenza. Questo metodo considera l'elevazione in modo simile: registra i pulsanti comuni come non richiede l'elevazione dei privilegi se il pulsante comune è disponibile ma non è incluso in *nElevationButtonMask*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#6](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_6.cpp)]

## <a name="ctaskdialogsetcommonbuttons"></a><a name="setcommonbuttons"></a>CTaskDialog::SetCommonButtons

Aggiunge pulsanti `CTaskDialog`comuni al file .

```cpp
void SetCommonButtons(
    int nButtonMask,
    int nDisabledButtonMask = 0,
    int nElevationButtonMask = 0);
```

### <a name="parameters"></a>Parametri

*nButtonMask (Maschera di comando)*<br/>
[in] Maschera dei pulsanti da `CTaskDialog`aggiungere al file .

*nDisabledButtonMask (Maschera di pulsante)*<br/>
[in] Maschera dei pulsanti da disabilitare.

*nMascheraPulsanteElevazionon*<br/>
[in] Maschera dei pulsanti che richiedono la quota altimetrica.

### <a name="remarks"></a>Osservazioni

Non è possibile chiamare questo metodo dopo `CTaskDialog` la finestra di visualizzazione per questa istanza della classe viene creata. In caso contrario, questo metodo genera un'eccezione.

I pulsanti indicati da *nButtonMask* sostituiscono `CTaskDialog`tutti i pulsanti comuni aggiunti in precedenza all'oggetto . Sono disponibili solo i pulsanti indicati in *nButtonMask.*

Se *nDisabledButtonMask* o *nElevationButtonMask* contengono un pulsante che non si trova in *nButtonMask*, questo metodo genera un'eccezione utilizzando la macro [ENSURE.](diagnostic-services.md#ensure)

Per impostazione predefinita, tutti i pulsanti comuni sono abilitati e non richiedono quota altimetrica.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#6](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_6.cpp)]

## <a name="ctaskdialogsetcontent"></a><a name="setcontent"></a>CTaskDialog::SetContent

Aggiorna il contenuto `CTaskDialog`del file .

```cpp
void SetContent(const CString& strContent);
```

### <a name="parameters"></a>Parametri

*strContent (strContent)*<br/>
[in] Stringa da visualizzare all'utente.

### <a name="remarks"></a>Osservazioni

Il contenuto `CTaskDialog` della classe è il testo visualizzato all'utente nella sezione principale della finestra di dialogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialogsetdefaultcommandcontrol"></a><a name="setdefaultcommandcontrol"></a>CTaskDialog::SetDefaultCommandControl

Specifica il controllo pulsante di comando predefinito.

```cpp
void SetDefaultCommandControl(int nCommandControlID);
```

### <a name="parameters"></a>Parametri

*nCommandControlID*<br/>
[in] ID del controllo pulsante di comando per essere il valore predefinito.

### <a name="remarks"></a>Osservazioni

Il controllo pulsante di comando predefinito `CTaskDialog` è il controllo selezionato quando l'oggetto viene visualizzato per la prima volta all'utente.

Questo metodo genera un'eccezione se non riesce a trovare il controllo pulsante di comando specificato da *nCommandControlID*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

## <a name="ctaskdialogsetdefaultradiobutton"></a><a name="setdefaultradiobutton"></a>CTaskDialog::SetDefaultRadioButton

Specifica il pulsante di opzione predefinito.

```cpp
void SetDefaultRadioButton(int nRadioButtonID);
```

### <a name="parameters"></a>Parametri

*nRadioButtonID (informazioni in inglese)*<br/>
[in] L'ID del pulsante di opzione è quello predefinito.

### <a name="remarks"></a>Osservazioni

Il pulsante di opzione predefinito è `CTaskDialog` il pulsante selezionato quando l'oggetto viene visualizzato per la prima volta all'utente.

Questo metodo genera un'eccezione se non riesce a trovare il pulsante di opzione specificato da *nRadioButtonID*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

## <a name="ctaskdialogsetdialogwidth"></a><a name="setdialogwidth"></a>CTaskDialog::SetDialogWidth

Regola la larghezza `CTaskDialog`del file .

```cpp
void SetDialogWidth(int nWidth = 0);
```

### <a name="parameters"></a>Parametri

*nLarghezza*<br/>
[in] Larghezza della finestra di dialogo, in pixel.

### <a name="remarks"></a>Osservazioni

Il parametro *nWidth* deve essere maggiore o uguale a 0. In caso contrario, questo metodo genera un'eccezione.

Se *nWidth* è impostato su 0, questo metodo imposta la finestra di dialogo sulle dimensioni predefinite.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialogsetexpansionarea"></a><a name="setexpansionarea"></a>CTaskDialog::SetExpansionArea

Aggiorna l'area `CTaskDialog`di espansione del file .

```cpp
void SetExpansionArea(
    const CString& strExpandedInformation,
    const CString& strCollapsedLabel = _T(""),
    const CString& strExpandedLabel = _T(""));
```

### <a name="parameters"></a>Parametri

*strExpandedInformation*<br/>
[in] Stringa `CTaskDialog` visualizzata nel corpo principale della finestra di dialogo quando l'utente fa clic sul pulsante di espansione.

*strCollapsedLabel*<br/>
[in] Stringa `CTaskDialog` visualizzata accanto al pulsante di espansione quando l'area espansa viene compressa.

*strExpandedLabel*<br/>
[in] Stringa `CTaskDialog` visualizzata accanto al pulsante di espansione quando viene visualizzata l'area espansa.

### <a name="remarks"></a>Osservazioni

L'area di `CTaskDialog` espansione della classe consente di fornire informazioni aggiuntive all'utente. L'area di espansione si `CTaskDialog`trova nella parte principale della , situata immediatamente sotto il titolo e la stringa di contenuto.

Quando `CTaskDialog` viene visualizzato per la prima volta, non `strCollapsedLabel` vengono visualizzate le informazioni espanse e accanto al pulsante di espansione. Quando l'utente fa clic `CTaskDialog` sul pulsante di espansione, visualizza *strExpandedInformation* e modifica l'etichetta in *strExpandedLabel*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialogsetfootericon"></a><a name="setfootericon"></a>CTaskDialog::SetFooterIcon

Aggiorna l'icona del `CTaskDialog`piè di pagina del file .

```cpp
void SetFooterIcon(HICON hFooterIcon);
void SetFooterIcon(LPCWSTR lpszFooterIcon);
```

### <a name="parameters"></a>Parametri

*hFooterIcona*<br/>
[in] La nuova icona `CTaskDialog`per il file .

*lpszFooterIcone*<br/>
[in] La nuova icona `CTaskDialog`per il file .

### <a name="remarks"></a>Osservazioni

L'icona del piè di pagina viene visualizzata nella parte inferiore della [classe CTaskDialog](../../mfc/reference/ctaskdialog-class.md). Può avere testo piè di pagina associato. È possibile modificare il testo del piè di pagina con [CTaskDialog::SetFooterText](#setfootertext).

Questo metodo genera un'eccezione con `CTaskDialog` la macro [ENSURE](diagnostic-services.md#ensure) se l'oggetto è visualizzato o il parametro di input è NULL.

Un `CTaskDialog` può accettare `HICON` `LPCWSTR` solo un'icona o come piè di pagina. Questa operazione viene configurata impostando l'opzione TDF_USE_HICON_FOOTER nel costruttore o [CTaskDialog::SetOptions](#setoptions). Per impostazione `CTaskDialog` predefinita, `LPCWSTR` l'oggetto è configurato per l'utilizzo come tipo di input per l'icona del piè di pagina. Questo metodo genera un'eccezione se si tenta di impostare l'icona utilizzando il tipo non appropriato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialogsetfootertext"></a><a name="setfootertext"></a>CTaskDialog::SetFooterText

Aggiorna il testo nel `CTaskDialog`piè di pagina del file .

```cpp
void SetFooterText(const CString& strFooterText);
```

### <a name="parameters"></a>Parametri

*strFooterText (testo strFooter)*<br/>
[in] Nuovo testo per il piè di pagina.

### <a name="remarks"></a>Osservazioni

L'icona del piè di pagina viene visualizzata accanto al testo del piè di pagina nella parte inferiore del `CTaskDialog`file . È possibile modificare l'icona del piè di pagina con [CTaskDialog::SetFooterIcon](#setfootericon).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialogsetmainicon"></a><a name="setmainicon"></a>CTaskDialog::SetMainIcon

Aggiorna l'icona principale `CTaskDialog`del file .

```cpp
void SetMainIcon(HICON hMainIcon);
void SetMainIcon(LPCWSTR lpszMainIcon);
```

### <a name="parameters"></a>Parametri

*hIcona principale*<br/>
[in] Nuova icona.

*lpszMainIcon*<br/>
[in] Nuova icona.

### <a name="remarks"></a>Osservazioni

Questo metodo genera un'eccezione con `CTaskDialog` la macro [ENSURE](diagnostic-services.md#ensure) se l'oggetto è visualizzato o il parametro di input è NULL.

Un `CTaskDialog` può accettare `HICON` `LPCWSTR` solo un o come icona principale. È possibile configurare questo impostando il TDF_USE_HICON_MAIN opzione nel costruttore o nel [CTaskDialog::SetOptions](#setoptions) metodo. Per impostazione `CTaskDialog` predefinita, `LPCWSTR` l'oggetto è configurato per l'utilizzo come tipo di input per l'icona principale. Questo metodo genera un'eccezione se si tenta di impostare l'icona utilizzando il tipo non appropriato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialogsetmaininstruction"></a><a name="setmaininstruction"></a>CTaskDialog::SetMainInstruction

Aggiorna l'istruzione `CTaskDialog`principale del file .

```cpp
void SetMainInstruction(const CString& strInstructions);
```

### <a name="parameters"></a>Parametri

*strIstruzioni*<br/>
[in] La nuova istruzione principale.

### <a name="remarks"></a>Osservazioni

L'istruzione principale `CTaskDialog` della classe è il testo visualizzato all'utente in un grande carattere grassetto. Si trova nella finestra di dialogo sotto la barra del titolo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialogsetoptions"></a><a name="setoptions"></a>CTaskDialog::SetOptions

Configura le opzioni `CTaskDialog`per il file .

```cpp
void SetOptions(int nOptionFlag);
```

### <a name="parameters"></a>Parametri

*nOptionFlag (flag)*<br/>
[in] Set di flag da `CTaskDialog`utilizzare per l'oggetto .

### <a name="remarks"></a>Osservazioni

Questo metodo cancella tutte le `CTaskDialog`opzioni correnti per l'oggetto . Per mantenere le opzioni correnti, è necessario recuperarle prima con [CTaskDialog::GetOptions](#getoptions) e combinarle con le opzioni che si desidera impostare.

Nella tabella seguente sono elencate tutte le opzioni valide.

|||
|-|-|
|TDF_ENABLE_HYPERLINKS|Abilita i collegamenti `CTaskDialog`ipertestuali nel file .|
|TDF_USE_HICON_MAIN|Configura l'oggetto per l'utilizzo `CTaskDialog` di a `HICON` per l'icona principale. L'alternativa consiste `LPCWSTR`nell'utilizzare un file .|
|TDF_USE_HICON_FOOTER|Configura l'oggetto per l'utilizzo `CTaskDialog` di un `HICON` per l'icona del piè di pagina. L'alternativa consiste `LPCWSTR`nell'utilizzare un file .|
|TDF_ALLOW_DIALOG_CANCELLATION|Consente all'utente `CTaskDialog` di chiudere il utilizzando la tastiera o utilizzando l'icona nell'angolo superiore destro della finestra di dialogo, anche se il pulsante **Annulla** non è abilitato. Se questo flag non è impostato e il pulsante **Annulla** non è abilitato, l'utente non può chiudere la finestra di dialogo utilizzando Alt , F4 , il tasto Esc o il pulsante di chiusura della barra del titolo.|
|TDF_USE_COMMAND_LINKS|Configura l'oggetto per l'utilizzo `CTaskDialog` dei controlli pulsante di comando.|
|TDF_USE_COMMAND_LINKS_NO_ICON|Configura l'oggetto per l'utilizzo `CTaskDialog` dei controlli dei pulsanti di comando senza visualizzare un'icona accanto al controllo. TDF_USE_COMMAND_LINKS esegue l'override di TDF_USE_COMMAND_LINKS_NO_ICON.|
|TDF_EXPAND_FOOTER_AREA|Indica che l'area di espansione è attualmente espansa.|
|TDF_EXPANDED_BY_DEFAULT|Determina se l'area di espansione è espansa per impostazione predefinita.|
|TDF_VERIFICATION_FLAG_CHECKED|Indica che la casella di controllo di verifica è attualmente selezionata.|
|TDF_SHOW_PROGRESS_BAR|Configura l'oggetto `CTaskDialog` per visualizzare una barra di avanzamento.|
|TDF_SHOW_MARQUEE_PROGRESS_BAR|Configura la barra di avanzamento in modo che sia una barra di avanzamento del perimetro di selezione. Se si abilita questa opzione, è necessario impostare TDF_SHOW_PROGRESS_BAR il comportamento previsto.|
|TDF_CALLBACK_TIMER|Indica che `CTaskDialog` l'intervallo di callback è impostato su circa 200 millisecondi.|
|TDF_POSITION_RELATIVE_TO_WINDOW|Configura l'oggetto `CTaskDialog` da centrare rispetto alla finestra padre. Se questo flag non `CTaskDialog` è abilitato, l'oggetto è centrato rispetto al monitor.|
|TDF_RTL_LAYOUT|Configura l'oggetto `CTaskDialog` per un layout di lettura da destra a sinistra.|
|TDF_NO_DEFAULT_RADIO_BUTTON|Indica che non è selezionato `CTaskDialog` alcun pulsante di opzione quando viene visualizzato .|
|TDF_CAN_BE_MINIMIZED|Consente all'utente `CTaskDialog`di ridurre a icona il file . Per supportare questa `CTaskDialog` opzione, il non può essere modale. MFC non supporta questa opzione perché MFC `CTaskDialog`non supporta un oggetto non modale.|

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialogsetprogressbarmarquee"></a><a name="setprogressbarmarquee"></a>CTaskDialog::SetProgressBarMarquee

Configura una barra di selezione `CTaskDialog` per e la aggiunge alla finestra di dialogo.

```cpp
void SetProgressBarMarquee(
    BOOL bEnabled = TRUE,
    int nMarqueeSpeed = 0);
```

### <a name="parameters"></a>Parametri

*bAbilitato*<br/>
[in] TRUE per abilitare la barra di selezione; FALSE per disattivare la barra di `CTaskDialog`selezione e rimuoverla dal file .

*nMarqueeVelocità*<br/>
[in] Intero che indica la velocità della barra di selezione.

### <a name="remarks"></a>Osservazioni

La barra di selezione viene visualizzata `CTaskDialog` sotto il testo principale della classe.

Utilizzare *nMarqueeSpeed* per impostare la velocità della barra di selezione; valori più grandi indicano una velocità più lenta. Un valore pari a 0 per *nMarqueeSpeed* fa muovere la barra di selezione alla velocità predefinita per Windows.

Questo metodo genera un'eccezione con la macro [ENSURE](diagnostic-services.md#ensure) se *nMarqueeSpeed* è minore di 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#4](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_7.cpp)]

## <a name="ctaskdialogsetprogressbarposition"></a><a name="setprogressbarposition"></a>CTaskDialog::SetProgressBarPosition

Regola la posizione dell'indicatore di stato.

```cpp
void SetProgressBarPosition(int nProgressPos);
```

### <a name="parameters"></a>Parametri

*nProgressPos (informazioni in stato di eperi*<br/>
[in] Posizione per la barra di avanzamento.

### <a name="remarks"></a>Osservazioni

Questo metodo genera un'eccezione con la macro [ENSURE](diagnostic-services.md#ensure) se *nProgressPos* non è compreso nell'intervallo dell'indicatore di stato. È possibile modificare l'intervallo della barra di avanzamento con [CTaskDialog::SetProgressBarRange](#setprogressbarrange).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#4](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_7.cpp)]

## <a name="ctaskdialogsetprogressbarrange"></a><a name="setprogressbarrange"></a>CTaskDialog::SetProgressBarRange

Regola l'intervallo dell'indicatore di stato.

```cpp
void SetProgressBarRange(
    int nRangeMin,
    int nRangeMax);
```

### <a name="parameters"></a>Parametri

*nRangeMin*<br/>
[in] Limite inferiore dell'indicatore di stato.

*nRangeMax*<br/>
[in] Limite superiore dell'indicatore di stato.

### <a name="remarks"></a>Osservazioni

La posizione dell'indicatore di stato è relativa a *nRangeMin* e *nRangeMax*. Ad esempio, se *nRangeMin* è 50 e *nRangeMax* è 100, una posizione di 75 è a metà dell'indicatore di stato. Usare [CTaskDialog::SetProgressBarPosition](#setprogressbarposition) per impostare la posizione dell'indicatore di stato.

Per visualizzare la barra di avanzamento, l'opzione TDF_SHOW_PROGRESS_BAR deve essere abilitata e TDF_SHOW_MARQUEE_PROGRESS_BAR non deve essere abilitata. Questo metodo imposta automaticamente TDF_SHOW_PROGRESS_BAR e cancella TDF_SHOW_MARQUEE_PROGRESS_BAR. Utilizzare [CTaskDialog::SetOptions](#setoptions) per modificare manualmente le opzioni per questa istanza della [classe CTaskDialog](../../mfc/reference/ctaskdialog-class.md).

Questo metodo genera un'eccezione con la macro [ENSURE](diagnostic-services.md#ensure) se *nRangeMin* non è minore di *nRangeMax*. Questo metodo genera anche un'eccezione se l'oggetto `CTaskDialog` è già visualizzato e dispone di un indicatore di stato di selezione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#4](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_7.cpp)]

## <a name="ctaskdialogsetprogressbarstate"></a><a name="setprogressbarstate"></a>CTaskDialog::SetProgressBarState

Imposta lo stato della barra di `CTaskDialog`avanzamento e lo visualizza sul file .

```cpp
void SetProgressBarState(int nState = PBST_NORMAL);
```

### <a name="parameters"></a>Parametri

*nStato*<br/>
[in] Stato della barra di avanzamento. Vedere la sezione Osservazioni per i valori possibili.

### <a name="remarks"></a>Osservazioni

Questo metodo genera un'eccezione con `CTaskDialog` la macro [ENSURE](diagnostic-services.md#ensure) se l'oggetto è già visualizzato e dispone di un indicatore di stato di selezione.

Nella tabella seguente sono elencati i valori possibili per *nState*. In tutti questi casi, la barra di avanzamento si riempirà con il colore normale fino a raggiungere la posizione di arresto designata. A quel punto cambierà colore in base allo stato.

|||
|-|-|
|PBST_NORMAL|Dopo il riempimento della `CTaskDialog` barra di avanzamento, il non cambia il colore della barra. Per impostazione predefinita, il colore normale è verde.|
|PBST_ERROR|Dopo il riempimento della `CTaskDialog` barra di avanzamento, cambia il colore della barra nel colore dell'errore. Per impostazione predefinita, questo è rosso.|
|PBST_PAUSED|Dopo il riempimento della `CTaskDialog` barra di avanzamento, il colore della barra viene modificato in base al colore in pausa. Per impostazione predefinita, questo è giallo.|

È possibile impostare il punto in cui la barra di stato si interrompe con [CTaskDialog::SetProgressBarPosition](#setprogressbarposition).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#4](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_7.cpp)]

## <a name="ctaskdialogsetradiobuttonoptions"></a><a name="setradiobuttonoptions"></a>CTaskDialog::SetRadioButtonOptions

Abilita o disabilita un pulsante di opzione.

```cpp
void SetRadioButtonOptions(
    int nRadioButtonID,
    BOOL bEnabled);
```

### <a name="parameters"></a>Parametri

*nRadioButtonID (informazioni in inglese)*<br/>
[in] ID del controllo pulsante di opzione.

*bAbilitato*<br/>
[in] TRUE per abilitare il pulsante di opzione; FALSE per disattivare il pulsante di opzione.

### <a name="remarks"></a>Osservazioni

Questo metodo genera un'eccezione con la macro [ENSURE](diagnostic-services.md#ensure) se *nRadioButtonID* non è un ID valido per un pulsante di opzione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

## <a name="ctaskdialogsetverificationcheckbox"></a><a name="setverificationcheckbox"></a>CTaskDialog::SetVerificationCheckbox

Imposta lo stato selezionato della casella di controllo di verifica.

```cpp
void SetVerificationCheckbox(BOOL bChecked);
```

### <a name="parameters"></a>Parametri

*bControllato*<br/>
[in] TRUE per avere la casella `CTaskDialog` di controllo di verifica selezionata quando viene visualizzato il; FALSE per avere la casella di `CTaskDialog` controllo di verifica deselezionata quando viene visualizzato il.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#5](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_4.cpp)]

## <a name="ctaskdialogsetverificationcheckboxtext"></a><a name="setverificationcheckboxtext"></a>CTaskDialog::SetVerificationCheckboxText

Imposta il testo visualizzato a destra della casella di controllo di verifica.

```cpp
void SetVerificationCheckboxText(CString& strVerificationText);
```

### <a name="parameters"></a>Parametri

*strVerificationText (testo strVerification)*<br/>
[in] Testo visualizzato da questo metodo accanto alla casella di controllo di verifica.

### <a name="remarks"></a>Osservazioni

Questo metodo genera un'eccezione con la `CTaskDialog` macro [ENSURE](diagnostic-services.md#ensure) se questa istanza della classe è già visualizzata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#5](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_4.cpp)]

## <a name="ctaskdialogsetwindowtitle"></a><a name="setwindowtitle"></a>CTaskDialog::SetWindowTitle

Imposta il titolo `CTaskDialog`del file .

```cpp
void SetWindowTitle(CString& strWindowTitle);
```

### <a name="parameters"></a>Parametri

*strWindowTitle (conflitto)*<br/>
[in] Nuovo titolo per `CTaskDialog`il file .

### <a name="remarks"></a>Osservazioni

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

## <a name="ctaskdialogshowdialog"></a><a name="showdialog"></a>CTaskDialog::ShowDialog

Crea e `CTaskDialog`visualizza un file .

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

*strContent (strContent)*<br/>
[in] Stringa da utilizzare per il `CTaskDialog`contenuto del file .

*strMainIstruzioni*<br/>
[in] L'istruzione principale `CTaskDialog`del file .

*strTitle (conflitto)*<br/>
[in] Titolo del `CTaskDialog`file .

*nIDCommandControlsFirst*<br/>
[in] ID stringa del primo comando.

*nIDCommandControlsUltimo*<br/>
[in] ID stringa dell'ultimo comando.

*nCommonButtons (pulsantiinia)*<br/>
[in] Maschera dei pulsanti da `CTaskDialog`aggiungere al file .

*nTaskDialogOptions*<br/>
[in] Set di opzioni da `CTaskDialog`utilizzare per il file .

*strPiè di pagina*<br/>
[in] Stringa da utilizzare come piè di pagina.

### <a name="return-value"></a>Valore restituito

Un numero intero che corrisponde alla selezione effettuata dall'utente.

### <a name="remarks"></a>Osservazioni

Questo metodo statico consente di creare `CTaskDialog` un'istanza `CTaskDialog` della classe senza creare in modo esplicito un oggetto nel codice. Poiché non `CTaskDialog` è presente alcun oggetto, `CTaskDialog` non è possibile chiamare `CTaskDialog` altri metodi dell'oggetto se si utilizza questo metodo per visualizzare un oggetto all'utente.

Questo metodo crea controlli pulsante di comando utilizzando i dati dal file di risorse dell'applicazione. La tabella di stringhe nel file di risorse include diverse stringhe con ID stringa associati. Questo metodo aggiunge un controllo pulsante di comando per ogni voce valida nella tabella di stringhe tra *nIDCommandControlsFirst* e *nCommandControlsLast*, inclusivo. Per questi controlli pulsante di comando, la stringa nella tabella di stringhe è la didascalia del controllo e l'ID stringa è l'ID del controllo.

Vedere [CTaskDialog::SetOptions](#setoptions) per un elenco di opzioni valide.

Si `CTaskDialog` chiude quando l'utente seleziona un pulsante comune, un `CTaskDialog`controllo collegamento di comando o chiude il file . Il valore restituito è l'identificatore che indica come l'utente ha chiuso la finestra di dialogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#1](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_5.cpp)]

## <a name="ctaskdialogtaskdialogcallback"></a><a name="taskdialogcallback"></a>CTaskDialog::TaskDialogCallback

Il framework chiama questo metodo in risposta a vari messaggi di Windows.The framework calls this method in response to various Windows messages.

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

*Hwnd*<br/>
[in] Handle per `m_hWnd` la struttura `CTaskDialog`per l'oggetto .

*uNotifica*<br/>
[in] Codice di notifica che specifica il messaggio generato.

*wParam*<br/>
[in] Ulteriori informazioni sul messaggio.

*lParam*<br/>
[in] Ulteriori informazioni sul messaggio.

*dwRefData*<br/>
[in] Puntatore all'oggetto `CTaskDialog` a cui si applica il messaggio di callback.

### <a name="return-value"></a>Valore restituito

Dipende dal codice di notifica specifico. Per ulteriori informazioni, vedere le sezione Note.

### <a name="remarks"></a>Osservazioni

L'implementazione `TaskDialogCallback` predefinita di gestisce il messaggio specifico e quindi chiama il metodo On appropriato della [classe CTaskDialog](../../mfc/reference/ctaskdialog-class.md). Ad esempio, in risposta al `TaskDialogCallback` messaggio TDN_BUTTON_CLICKED, chiama [CTaskDialog::OnCommandControlClick](#oncommandcontrolclick).

I valori per *wParam* e *lParam* dipendono dal messaggio generato specifico. È possibile che uno o entrambi questi valori siano vuoti. Nella tabella seguente sono elencate le notifiche predefinite supportate e i valori di *wParam* e *lParam* rappresentano. Se si esegue l'override di questo metodo in una classe derivata, è necessario implementare il codice di callback per ogni messaggio nella tabella seguente.

|Messaggio di notifica|*wParam (mcParam)* Valore|*lParam* Valore|
|--------------------------|--------------------|--------------------|
|TDN_CREATED|Non usato.|Non usato.|
|TDN_NAVIGATED|Non usato.|Non usato.|
|TDN_BUTTON_CLICKED|ID del controllo del pulsante di comando.|Non usato.|
|TDN_HYPERLINK_CLICKED|Non usato.|Struttura [LPCWSTR](/windows/win32/WinProg/windows-data-types) che contiene il collegamento.|
|TDN_TIMER|Tempo in millisecondi `CTaskDialog` dalla creazione del timer o dalla reimpostazione del timer.|Non usato.|
|TDN_DESTROYED|Non usato.|Non usato.|
|TDN_RADIO_BUTTON_CLICKED|ID del pulsante di opzione.|Non usato.|
|TDN_DIALOG_CONSTRUCTED|Non usato.|Non usato.|
|TDN_VERIFICATION_CLICKED|1 se la casella di controllo è selezionata, 0 se non lo è.|Non usato.|
|TDN_HELP|Non usato.|Non usato.|
|TDN_EXPANDO_BUTTON_CLICKED|0 se l'area di espansione è compressa; diverso da zero se viene visualizzato il testo di espansione.|Non usato.|

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)<br/>
[Classe CObject](../../mfc/reference/cobject-class.md)<br/>
[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Procedura dettagliata: Aggiunta di CTaskDialog a un'applicazione](../../mfc/walkthrough-adding-a-ctaskdialog-to-an-application.md)

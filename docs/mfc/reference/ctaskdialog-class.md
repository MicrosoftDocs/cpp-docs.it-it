---
title: Classe CTaskDialog | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
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
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6a1c3e55f6045b0096ef614e1d3b4b054db60265
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43202395"
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
|[CTaskDialog::AddCommandControl](#addcommandcontrol)|Aggiunge un controllo pulsante di comando per il `CTaskDialog`.|
|[CTaskDialog::AddRadioButton](#addradiobutton)|Aggiunge un pulsante di opzione di `CTaskDialog`.|
|[CTaskDialog::ClickCommandControl](#clickcommandcontrol)|Fa clic su un controllo pulsante di comando o un pulsante comune a livello di codice.|
|[CTaskDialog::ClickRadioButton](#clickradiobutton)|Fa clic su un pulsante di opzione a livello di codice.|
|[CTaskDialog::DoModal](#domodal)|Visualizza la `CTaskDialog`.|
|[CTaskDialog::GetCommonButtonCount](#getcommonbuttoncount)|Recupera il numero di pulsanti comuni disponibili.|
|[CTaskDialog::GetCommonButtonFlag](#getcommonbuttonflag)|Converte uno standard di pulsante di Windows per il tipo di pulsante comune associato il `CTaskDialog` classe.|
|[CTaskDialog::GetCommonButtonId](#getcommonbuttonid)|Converte uno dei comuni tipi di pulsante associati il `CTaskDialog` classe a un pulsante standard di Windows.|
|[CTaskDialog::GetOptions](#getoptions)|Restituisce i flag di opzione per l'oggetto `CTaskDialog`.|
|[CTaskDialog::GetSelectedCommandControlID](#getselectedcommandcontrolid)|Restituisce il controllo pulsante di comando selezionato.|
|[CTaskDialog::GetSelectedRadioButtonID](#getselectedradiobuttonid)|Restituisce il pulsante di opzione selezionato.|
|[CTaskDialog::GetVerificationCheckboxState](#getverificationcheckboxstate)|Recupera lo stato della casella di controllo di verifica.|
|[CTaskDialog::IsCommandControlEnabled](#iscommandcontrolenabled)|Determina se un controllo pulsante di comando o un pulsante comune è abilitato.|
|[CTaskDialog::IsRadioButtonEnabled](#isradiobuttonenabled)|Determina se un pulsante di opzione è abilitato.|
|[CTaskDialog:: IsSupported](#issupported)|Determina se il computer che esegue l'applicazione supporta il `CTaskDialog`.|
|[CTaskDialog::LoadCommandControls](#loadcommandcontrols)|Aggiunge i controlli pulsante di comando utilizzando i dati dalla tabella di stringhe.|
|[CTaskDialog::LoadRadioButtons](#loadradiobuttons)|Aggiunge i pulsanti di opzione utilizzando i dati dalla tabella di stringhe.|
|[CTaskDialog::NavigateTo](#navigateto)|Trasferisce lo stato attivo a un'altra `CTaskDialog`.|
|[CTaskDialog::OnCommandControlClick](#oncommandcontrolclick)|Il framework chiama questo metodo quando l'utente fa clic su un controllo pulsante di comando.|
|[CTaskDialog::OnCreate](#oncreate)|Il framework chiama questo metodo dopo aver creato il `CTaskDialog`.|
|[CTaskDialog::OnDestroy](#ondestroy)|Il framework chiama questo metodo immediatamente prima vengono eliminati definitivamente il `CTaskDialog`.|
|[CTaskDialog::OnExpandButtonClick](#onexpandbuttonclick)|Il framework chiama questo metodo quando l'utente fa clic sul pulsante di espansione.|
|[CTaskDialog::OnHelp](#onhelp)|Il framework chiama questo metodo quando l'utente richiede assistenza.|
|[CTaskDialog::OnHyperlinkClick](#onhyperlinkclick)|Il framework chiama questo metodo quando l'utente fa clic sul collegamento ipertestuale.|
|[CTaskDialog::OnInit](#oninit)|Il framework chiama questo metodo quando la `CTaskDialog` viene inizializzato.|
|[CTaskDialog::OnNavigatePage](#onnavigatepage)|Il framework chiama questo metodo quando l'utente sposta lo stato attivo per quanto riguarda i controlli di `CTaskDialog`.|
|[CTaskDialog::OnRadioButtonClick](#onradiobuttonclick)|Il framework chiama questo metodo quando l'utente seleziona un controllo pulsante di opzione.|
|[CTaskDialog::OnTimer](#ontimer)|Il framework chiama questo metodo quando il timer scade.|
|[CTaskDialog::OnVerificationCheckboxClick](#onverificationcheckboxclick)|Il framework chiama questo metodo quando l'utente seleziona la casella di controllo di verifica.|
|[CTaskDialog::RemoveAllCommandControls](#removeallcommandcontrols)|Rimuove tutti i controlli di comando dal `CTaskDialog`.|
|[CTaskDialog::RemoveAllRadioButtons](#removeallradiobuttons)|Rimuove tutti i pulsanti di opzione dal `CTaskDialog`.|
|[CTaskDialog::SetCommandControlOptions](#setcommandcontroloptions)|Aggiorna un controllo pulsante di comando nel `CTaskDialog`.|
|[CTaskDialog::SetCommonButtonOptions](#setcommonbuttonoptions)|Aggiorna un subset di pulsanti comuni sia abilitata e richiedono l'elevazione di UAC.|
|[CTaskDialog::SetCommonButtons](#setcommonbuttons)|Aggiunge i pulsanti comuni per la `CTaskDialog`.|
|[CTaskDialog::SetContent](#setcontent)|Aggiorna il contenuto del `CTaskDialog`.|
|[CTaskDialog::SetDefaultCommandControl](#setdefaultcommandcontrol)|Specifica il controllo pulsante di comando predefinito.|
|[CTaskDialog::SetDefaultRadioButton](#setdefaultradiobutton)|Specifica il pulsante di opzione predefinita.|
|[CTaskDialog::SetDialogWidth](#setdialogwidth)|Regola la larghezza del `CTaskDialog`.|
|[CTaskDialog::SetExpansionArea](#setexpansionarea)|Aggiorna l'area di espansione del `CTaskDialog`.|
|[CTaskDialog::SetFooterIcon](#setfootericon)|Aggiorna l'icona del piè di pagina per il `CTaskDialog`.|
|[CTaskDialog::SetFooterText](#setfootertext)|Aggiorna il testo nel piè di pagina del `CTaskDialog`.|
|[CTaskDialog::SetMainIcon](#setmainicon)|Aggiorna l'icona principale del `CTaskDialog`.|
|[CTaskDialog::SetMainInstruction](#setmaininstruction)|Aggiorna l'istruzione principale del `CTaskDialog`.|
|[CTaskDialog::SetOptions](#setoptions)|Configura le opzioni per il `CTaskDialog`.|
|[CTaskDialog::SetProgressBarMarquee](#setprogressbarmarquee)|Configura una barra di selezione per il `CTaskDialog` e lo aggiunge alla finestra di dialogo.|
|[CTaskDialog::SetProgressBarPosition](#setprogressbarposition)|Consente di regolare la posizione dell'indicatore di stato.|
|[CTaskDialog::SetProgressBarRange](#setprogressbarrange)|Consente di regolare l'intervallo dell'indicatore di stato.|
|[CTaskDialog::SetProgressBarState](#setprogressbarstate)|Imposta lo stato dell'indicatore di stato e lo visualizza nel `CTaskDialog`.|
|[CTaskDialog::SetRadioButtonOptions](#setradiobuttonoptions)|Abilita o disabilita un pulsante di opzione.|
|[CTaskDialog::SetVerificationCheckbox](#setverificationcheckbox)|Imposta lo stato di selezione della casella di controllo di verifica.|
|[CTaskDialog::SetVerificationCheckboxText](#setverificationcheckboxtext)|Imposta il testo a destra della casella di controllo di verifica.|
|[CTaskDialog::SetWindowTitle](#setwindowtitle)|Imposta il titolo del `CTaskDialog`.|
|[CTaskDialog::ShowDialog](#showdialog)|Crea e visualizza un `CTaskDialog`.|
|[CTaskDialog::TaskDialogCallback](#taskdialogcallback)|Il framework viene chiamato in risposta a vari messaggi di Windows.|

### <a name="data-members"></a>Membri di dati

|||
|-|-|
|`m_aButtons`|Matrice di controlli pulsante di comando per il `CTaskDialog`.|
|`m_aRadioButtons`|Matrice di controlli pulsante di opzione per il `CTaskDialog`.|
|`m_bVerified`|`TRUE` indica che la casella di controllo di verifica è selezionata; `FALSE` indica non si tratta.|
|`m_footerIcon`|L'icona nel piè di pagina del `CTaskDialog`.|
|`m_hWnd`|Un handle per la finestra di `CTaskDialog`.|
|`m_mainIcon`|L'icona principale del `CTaskDialog`.|
|`m_nButtonDisabled`|Maschera che indica quale dei pulsanti comuni sono disabilitati.|
|`m_nButtonElevation`|Maschera che indica quale dei pulsanti comuni richiedono l'elevazione di UAC.|
|`m_nButtonId`|L'ID del controllo pulsante di comando selezionato.|
|`m_nCommonButton`|Maschera che indica quali pulsanti comuni vengono visualizzati di `CTaskDialog`.|
|`m_nDefaultCommandControl`|L'ID del pulsante di comando di controllo che è selezionato quando la `CTaskDialog` viene visualizzato.|
|`m_nDefaultRadioButton`|L'ID del pulsante di opzione controllare che sia selezionata quando il `CTaskDialog` viene visualizzato.|
|`m_nFlags`|Maschera che indica le opzioni per il `CTaskDialog`.|
|`m_nProgressPos`|La posizione corrente per l'indicatore di stato.  Il valore deve essere compreso tra `m_nProgressRangeMin` e `m_nProgressRangeMax`.|
|`m_nProgressRangeMax`|Il valore massimo per l'indicatore di stato.|
|`m_nProgressRangeMin`|Il valore minimo per l'indicatore di stato.|
|`m_nProgressState`|Lo stato dell'indicatore di stato. Per altre informazioni, vedere [CTaskDialog::SetProgressBarState](#setprogressbarstate).|
|`m_nRadioId`|L'ID del controllo pulsante di opzione selezionato.|
|`m_nWidth`|La larghezza del `CTaskDialog` in pixel.|
|`m_strCollapse`|La stringa di `CTaskDialog` consente di visualizzare a destra della casella di espansione quando le informazioni espanse sono nascosto.|
|`m_strContent`|La stringa di contenuto del `CTaskDialog`.|
|`m_strExpand`|La stringa di `CTaskDialog` viene visualizzato a destra della casella di espansione quando vengono visualizzate le informazioni espanse.|
|`m_strFooter`|Il piè di pagina il `CTaskDialog`.|
|`m_strInformation`|Le informazioni per espanso il `CTaskDialog`.|
|`m_strMainInstruction`|L'istruzione principale del `CTaskDialog`.|
|`m_strTitle`|Il titolo del `CTaskDialog`.|
|`m_strVerification`|La stringa che il `CTaskDialog` viene visualizzato a destra della casella di controllo di verifica.|

## <a name="remarks"></a>Note

Il `CTaskDialog` classe sostituisce la finestra di messaggio standard di Windows e include funzionalità aggiuntive, ad esempio nuovi controlli per raccogliere informazioni da parte dell'utente. Questa classe è nella libreria MFC in Visual Studio 2010 e versioni successive. Il `CTaskDialog` è disponibile a partire da Windows Vista. Le versioni precedenti di Windows non è possibile visualizzare il `CTaskDialog` oggetto. Usare `CTaskDialog::IsSupported` per determinare in fase di esecuzione se l'utente corrente può visualizzare la finestra di dialogo attività. Finestra di messaggio standard di Windows è ancora supportata.

Il `CTaskDialog` è disponibile solo quando si compila l'applicazione usando la libreria Unicode.

Il `CTaskDialog` dispone di due costruttori diversi. Un costruttore consente di specificare due pulsanti di comando e un massimo di sei pulsanti regolari. È possibile aggiungere altri pulsanti di comando dopo aver creato il `CTaskDialog`. Il secondo costruttore non supporta i pulsanti di comando, ma è possibile aggiungere un numero illimitato di controlli pulsante normale. Per altre informazioni sui costruttori, vedere [CTaskDialog::CTaskDialog](#ctaskdialog).

L'immagine seguente mostra un esempio `CTaskDialog` per illustrare la posizione di alcuni dei controlli.

![Esempio di CTaskDialog](../../mfc/reference/media/ctaskdialogsample.png "ctaskdialogsample") esempio CTaskDialog

## <a name="requirements"></a>Requisiti

**Versione minima richiesta del sistema operativo:** Windows Vista

**Intestazione:** afxtaskdialog.h

##  <a name="addcommandcontrol"></a>  CTaskDialog::AddCommandControl

Aggiunge un nuovo controllo pulsante di comando per il `CTaskDialog`.

```
void AddCommandControl(
    int nCommandControlID,
    const CString& strCaption,
    BOOL bEnabled = TRUE,
    BOOL bRequiresElevation = FALSE);
```

### <a name="parameters"></a>Parametri

[in] *nCommandControlID*  
Il numero di identificazione del controllo comando.

[in] *strCaption*  
La stringa che il `CTaskDialog` Visualizza all'utente. Usare questa stringa per illustrare lo scopo del comando.

[in] *bEnabled*  
Un parametro booleano che indica se il nuovo pulsante è abilitato o disabilitato.

[in] *bRequiresElevation*  
Un parametro booleano che indica se un comando richiede l'elevazione dei privilegi.

### <a name="remarks"></a>Note

Il `CTaskDialog Class` può visualizzare un numero illimitato di controlli pulsanti di comando. Tuttavia, se un `CTaskDialog` controlla qualsiasi pulsante di comando consente di visualizzare, è possibile visualizzare un massimo di sei pulsanti. Se un `CTaskDialog` è presente alcun controllo pulsante di comando, è possibile visualizzare un numero illimitato di pulsanti.

Quando l'utente seleziona un controllo pulsante di comando, il `CTaskDialog` viene chiusa. Se l'applicazione visualizza la finestra di dialogo usando [CTaskDialog::DoModal](#domodal), `DoModal` restituisce il *nCommandControlID* del controllo pulsante di comando selezionato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

##  <a name="addradiobutton"></a>  CTaskDialog::AddRadioButton

Aggiunge un pulsante di opzione di `CTaskDialog`.

```
void CTaskDialog::AddRadioButton(
    int nRadioButtonID,
    const CString& strCaption,
    BOOL bEnabled = TRUE);
```

### <a name="parameters"></a>Parametri

[in] *nRadioButtonID*  
Il numero di identificazione del pulsante di opzione.

[in] *strCaption*  
La stringa che il `CTaskDialog` viene visualizzato accanto al pulsante di opzione.

[in] *bEnabled*  
Un parametro booleano che indica se il pulsante di opzione è abilitato.

### <a name="remarks"></a>Note

I pulsanti di opzione per la [CTaskDialog Class](../../mfc/reference/ctaskdialog-class.md) consentono di raccogliere informazioni da parte dell'utente. Utilizzare la funzione [CTaskDialog::GetSelectedRadioButtonID](#getselectedradiobuttonid) per determinare quale pulsante è selezionato.

Il `CTaskDialog` non richiede che il *nRadioButtonID* parametri sono univoci per ogni pulsante di opzione. Tuttavia, potrebbe verificarsi un comportamento imprevisto se non si usa un identificatore distinto per ogni pulsante di opzione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

##  <a name="clickcommandcontrol"></a>  CTaskDialog::ClickCommandControl

Fa clic su un controllo pulsante di comando o un pulsante comune a livello di codice.

```
protected:
void ClickCommandControl(int nCommandControlID) const;
```

### <a name="parameters"></a>Parametri

[in] *nCommandControlID*  
ID comando del controllo da selezionare.

### <a name="remarks"></a>Note

Questo metodo genera il messaggio di windows TDM_CLICK_BUTTON.

##  <a name="clickradiobutton"></a>  CTaskDialog::ClickRadioButton

Fa clic su un pulsante di opzione a livello di codice.

```
protected:
void ClickRadioButton(int nRadioButtonID) const;
```

### <a name="parameters"></a>Parametri

[in] *nRadioButtonID*  
L'ID del pulsante di opzione per fare clic su.

### <a name="remarks"></a>Note

Questo metodo genera il messaggio di windows TDM_CLICK_RADIO_BUTTON.

##  <a name="ctaskdialog"></a>  CTaskDialog::CTaskDialog

Crea un'istanza di [CTaskDialog Class](../../mfc/reference/ctaskdialog-class.md).

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

[in] *strContent*  
La stringa da utilizzare per il contenuto del `CTaskDialog`.

[in] *strMainInstruction*  
L'istruzione principale del `CTaskDialog`.

[in] *strTitle*  
Il titolo del `CTaskDialog`.

[in] *nCommonButtons*  
Maschera dei pulsanti comuni per aggiungere il `CTaskDialog`.

[in] *nTaskDialogOptions*  
Il set di opzioni da utilizzare per il `CTaskDialog`.

[in] *strFooter*  
Stringa da utilizzare come piè di pagina.

[in] *nIDCommandControlsFirst*  
L'ID di stringa del primo comando.

[in] *nIDCommandControlsLast*  
L'ID di stringa dell'ultimo comando.

### <a name="remarks"></a>Note

Esistono due modi in cui è possibile aggiungere un `CTaskDialog` all'applicazione. Il primo consiste nell'usare uno dei costruttori per creare un `CTaskDialog` e visualizzarlo utilizzando [CTaskDialog::DoModal](#domodal). Il secondo modo consiste nell'utilizzare la funzione statica [CTaskDialog::ShowDialog](#showdialog), che consente di visualizzare un `CTaskDialog` senza creare esplicitamente un `CTaskDialog` oggetto.

Il secondo costruttore crea i controlli pulsante di comando utilizzando i dati dal file di risorse dell'applicazione. Tabella di stringhe nel file di risorse dispone di più stringhe con ID di stringa associato. Questo metodo aggiunge un controllo pulsante di comando per ciascuna voce valida nella tabella di stringhe tra *nIDCommandControlsFirst* e *nCommandControlsLast*, inclusivo. Per questi controlli pulsante di comando, la stringa nella tabella di stringhe è la didascalia del controllo e l'ID di stringa è il relativo ID.

Visualizzare [CTaskDialog::SetOptions](#setoptions) per un elenco di valori validi.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

##  <a name="domodal"></a>  CTaskDialog::DoModal

Viene illustrato il `CTaskDialog` e li rende modale.

```
INT_PTR DoModal (HWND hParent = ::GetActiveWindow());
```

### <a name="parameters"></a>Parametri

[in] *hParent*  
Finestra padre per il `CTaskDialog`.

### <a name="return-value"></a>Valore restituito

Valore intero che corrisponde alla selezione effettuata dall'utente.

### <a name="remarks"></a>Note

Visualizza questa istanza di [CTaskDialog](../../mfc/reference/ctaskdialog-class.md). Quindi, l'applicazione attende che l'utente chiudere la finestra di dialogo.

Il `CTaskDialog` si chiude quando l'utente seleziona un pulsante comune, un controllo command link, o chiude il `CTaskDialog`. Il valore restituito è l'identificatore che indica come l'utente ha chiuso la finestra di dialogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

##  <a name="getcommonbuttoncount"></a>  CTaskDialog::GetCommonButtonCount

Recupera il numero di pulsanti comuni.

```
int GetCommonButtonCount() const;
```

### <a name="return-value"></a>Valore restituito

Il numero di pulsanti comuni disponibili.

### <a name="remarks"></a>Note

I pulsanti comuni sono i pulsanti predefiniti da fornire ai [CTaskDialog::CTaskDialog](#ctaskdialog). Il [CTaskDialog Class](../../mfc/reference/ctaskdialog-class.md) Visualizza i pulsanti nella parte inferiore della finestra di dialogo.

Viene fornito l'elenco enumerato di pulsanti in commctrl. H.

##  <a name="getcommonbuttonflag"></a>  CTaskDialog::GetCommonButtonFlag

Converte uno standard di pulsante di Windows per il tipo di pulsante comune associato con il [CTaskDialog Class](../../mfc/reference/ctaskdialog-class.md).

```
int GetCommonButtonFlag(int nButtonId) const;
```

### <a name="parameters"></a>Parametri

[in] *nButtonId*  
Il valore del pulsante Windows standard.

### <a name="return-value"></a>Valore restituito

Il valore dell'oggetto corrispondente `CTaskDialog` pulsante comune. Se non è disponibile alcun pulsante comune corrispondente, questo metodo restituisce 0.

##  <a name="getcommonbuttonid"></a>  CTaskDialog::GetCommonButtonId

Converte uno dei tipi di pulsante comuni associati con la [CTaskDialog Class](../../mfc/reference/ctaskdialog-class.md) a un pulsante standard di Windows.

```
int GetCommonButtonId(int nFlag);
```

### <a name="parameters"></a>Parametri

[in] *Rimuovi flag*  
Il tipo di pulsante comune associato il `CTaskDialog` classe.

### <a name="return-value"></a>Valore restituito

Il valore del pulsante di Windows standard corrispondente. Se non è disponibile alcun pulsante di Windows corrispondente, il metodo restituisce 0.

##  <a name="getoptions"></a>  CTaskDialog::GetOptions

Restituisce i flag di opzione per l'oggetto `CTaskDialog`.

```
int GetOptions() const;
```

### <a name="return-value"></a>Valore restituito

I flag per il `CTaskDialog`.

### <a name="remarks"></a>Note

Per altre informazioni sulle opzioni disponibili per il [CTaskDialog Class](../../mfc/reference/ctaskdialog-class.md), vedere [CTaskDialog::SetOptions](#setoptions).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

##  <a name="getselectedcommandcontrolid"></a>  CTaskDialog::GetSelectedCommandControlID

Restituisce il controllo pulsante di comando selezionato.

```
int GetSelectedCommandControlID() const;
```

### <a name="return-value"></a>Valore restituito

L'ID del controllo pulsante di comando attualmente selezionato.

### <a name="remarks"></a>Note

Non è necessario utilizzare questo metodo per recuperare l'ID del pulsante di comando selezionato dall'utente. Tale ID viene restituito in uno dei modi [CTaskDialog::DoModal](#domodal) oppure [CTaskDialog::ShowDialog](#showdialog).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

##  <a name="getselectedradiobuttonid"></a>  CTaskDialog::GetSelectedRadioButtonID

Restituisce il pulsante di opzione selezionato.

```
int GetSelectedRadioButtonID() const;
```

### <a name="return-value"></a>Valore restituito

ID del pulsante di opzione selezionato.

### <a name="remarks"></a>Note

È possibile usare questo metodo quando l'utente chiude la finestra di dialogo per recuperare il pulsante di opzione selezionato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

##  <a name="getverificationcheckboxstate"></a>  CTaskDialog::GetVerificationCheckboxState

Recupera lo stato della casella di controllo di verifica.

```
BOOL GetVerificationCheckboxState() const;
```

### <a name="return-value"></a>Valore restituito

TRUE se la casella di controllo è selezionata, FALSE in caso contrario.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#5](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_4.cpp)]

##  <a name="iscommandcontrolenabled"></a>  CTaskDialog::IsCommandControlEnabled

Determina se un controllo pulsante di comando o un pulsante è abilitato.

```
BOOL IsCommandControlEnabled(int nCommandControlID) const;
```

### <a name="parameters"></a>Parametri

[in] *nCommandControlID*  
L'ID del controllo pulsante di comando o sul pulsante per eseguire il test.

### <a name="return-value"></a>Valore restituito

TRUE se il controllo è abilitato, FALSE in caso contrario.

### <a name="remarks"></a>Note

È possibile usare questo metodo per determinare la disponibilità di entrambi controlli pulsante di comando e i pulsanti comuni del `CTaskDialog` classe *.

Se *nCommandControlID* è non un identificatore valido per una comune `CTaskDialog` pulsante o un controllo pulsante di comando, questo metodo genera un'eccezione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

##  <a name="isradiobuttonenabled"></a>  CTaskDialog::IsRadioButtonEnabled

Determina se un pulsante di opzione è abilitato.

```
BOOL IsRadioButtonEnabled(int nRadioButtonID) const;
```

### <a name="parameters"></a>Parametri

[in] *nRadioButtonID*  
L'ID del pulsante di opzione per eseguire il test.

### <a name="return-value"></a>Valore restituito

TRUE se il pulsante di opzione è abilitato, FALSE in caso contrario.

### <a name="remarks"></a>Note

Se *nRadioButtonID* non è un identificatore valido per un pulsante di opzione, questo metodo genera un'eccezione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

##  <a name="issupported"></a>  CTaskDialog:: IsSupported

Determina se il computer che esegue l'applicazione supporta il `CTaskDialog`.

```
static BOOL IsSupported();
```

### <a name="return-value"></a>Valore restituito

TRUE se il computer supporta il `CTaskDialog`; FALSE in caso contrario.

### <a name="remarks"></a>Note

Utilizzare questa funzione per determinare in fase di esecuzione se il computer che esegue l'applicazione supporta il `CTaskDialog` classe. Se il computer non supporta il `CTaskDialog`, è necessario fornire un altro metodo di comunicazione delle informazioni all'utente. L'applicazione viene interrotta se prova a usare una `CTaskDialog` in un computer che non supporta il `CTaskDialog` classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#1](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_5.cpp)]

##  <a name="loadcommandcontrols"></a>  CTaskDialog::LoadCommandControls

Aggiunge i controlli pulsante di comando utilizzando i dati dalla tabella di stringhe.

```
void LoadCommandControls(
    int nIDCommandControlsFirst,
    int nIDCommandControlsLast);
```

### <a name="parameters"></a>Parametri

[in] *nIDCommandControlsFirst*  
L'ID di stringa del primo comando.

[in] *nIDCommandControlsLast*  
L'ID di stringa dell'ultimo comando.

### <a name="remarks"></a>Note

Questo metodo crea i controlli pulsante di comando utilizzando i dati dal file di risorse dell'applicazione. Tabella di stringhe nel file di risorse dispone di più stringhe con ID di stringa associato. Nuovi controlli pulsante di comando aggiunti tramite questo metodo utilizzano la stringa per la didascalia del controllo e l'ID di stringa per l'ID. del controllo L'intervallo di stringhe selezionato viene fornito da *nIDCommandControlsFirst* e *nCommandControlsLast*, inclusivo. Se è presente una voce vuota nell'intervallo, il metodo non aggiunge un controllo pulsante di comando per quella voce.

Per impostazione predefinita, i nuovi controlli pulsante di comando sono abilitati e non richiedono l'elevazione dei privilegi.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

##  <a name="loadradiobuttons"></a>  CTaskDialog::LoadRadioButtons

Consente di aggiungere controlli pulsante di opzione utilizzando i dati dalla tabella di stringhe.

```
void LoadRadioButtons(
    int nIDRadioButtonsFirst,
    int nIDRadioButtonsLast);
```

### <a name="parameters"></a>Parametri

[in] *nIDRadioButtonsFirst*  
L'ID di stringa del primo pulsante di opzione.

[in] *nIDRadioButtonsLast*  
L'ID di stringa dell'ultimo pulsante di opzione.

### <a name="remarks"></a>Note

Questo metodo crea pulsanti di opzione utilizzando i dati dal file di risorse dell'applicazione. Tabella di stringhe nel file di risorse dispone di più stringhe con ID di stringa associato. Nuovi pulsanti di opzione aggiunti utilizzando questo metodo per usano la stringa per la didascalia del pulsante di opzione e l'ID di stringa per l'ID. del pulsante di opzione L'intervallo di stringhe selezionato viene fornito da *nIDRadioButtonsFirst* e *nRadioButtonsLast*, inclusivo. Se è presente una voce vuota nell'intervallo, il metodo non aggiunge un pulsante di opzione per la voce.

Per impostazione predefinita, i nuovi pulsanti di opzione sono abilitati.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

##  <a name="navigateto"></a>  CTaskDialog::NavigateTo

Trasferisce lo stato attivo a un'altra `CTaskDialog`.

```
protected:
void NavigateTo(CTaskDialog& oTaskDialog) const;
```

### <a name="parameters"></a>Parametri

[in] *oTaskDialog*  
Il `CTaskDialog` che riceve lo stato attivo.

### <a name="remarks"></a>Note

Questo metodo consente di nascondere l'oggetto corrente `CTaskDialog` quando viene visualizzato il *oTaskDialog*. Il *oTaskDialog* viene visualizzato nella stessa località corrente `CTaskDialog`.

##  <a name="oncommandcontrolclick"></a>  CTaskDialog::OnCommandControlClick

Il framework chiama questo metodo quando l'utente fa clic su un controllo pulsante di comando.

```
virtual HRESULT OnCommandControlClick(int nCommandControlID);
```

### <a name="parameters"></a>Parametri

[in] *nCommandControlID*  
L'ID del controllo pulsante di comando selezionato dall'utente.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Note

L'override del metodo in una classe derivata per implementare il comportamento personalizzato.

##  <a name="oncreate"></a>  CTaskDialog::OnCreate

Il framework chiama questo metodo dopo aver creato il `CTaskDialog`.

```
virtual HRESULT OnCreate();
```

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Note

L'override del metodo in una classe derivata per implementare il comportamento personalizzato.

##  <a name="ondestroy"></a>  CTaskDialog::OnDestroy

Il framework chiama questo metodo immediatamente prima vengono eliminati definitivamente il `CTaskDialog`.

```
virtual HRESULT OnDestroy();
```

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Note

L'override del metodo in una classe derivata per implementare il comportamento personalizzato.

##  <a name="onexpandbuttonclick"></a>  CTaskDialog::OnExpandButtonClick

Il framework chiama questo metodo quando l'utente fa clic sul pulsante di espansione.

```
virtual HRESULT OnExpandButtonClicked(BOOL bExpanded);
```

### <a name="parameters"></a>Parametri

[in] *bExpanded*  
Un valore diverso da zero indica che le informazioni aggiuntive sono visualizzate; 0 indica che le informazioni aggiuntive sono nascosto.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Note

L'override del metodo in una classe derivata per implementare il comportamento personalizzato.

##  <a name="onhelp"></a>  CTaskDialog::OnHelp

Il framework chiama questo metodo quando l'utente richiede assistenza.

```
virtual HRESULT OnHelp();
```

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Note

L'override del metodo in una classe derivata per implementare il comportamento personalizzato.

##  <a name="onhyperlinkclick"></a>  CTaskDialog::OnHyperlinkClick

Il framework chiama questo metodo quando l'utente fa clic sul collegamento ipertestuale.

```
virtual HRESULT OnHyperlinkClick(const CString& strHref);
```

### <a name="parameters"></a>Parametri

[in] *strHref*  
Stringa che rappresenta il collegamento ipertestuale.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Note

Questo metodo chiama [ShellExecute](/windows/desktop/api/shellapi/nf-shellapi-shellexecutea) prima che venga restituito S_OK.

L'override del metodo in una classe derivata per implementare il comportamento personalizzato.

##  <a name="oninit"></a>  CTaskDialog::OnInit

Il framework chiama questo metodo quando la `CTaskDialog` viene inizializzato.

```
virtual HRESULT OnInit();
```

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Note

L'override del metodo in una classe derivata per implementare il comportamento personalizzato.

##  <a name="onnavigatepage"></a>  CTaskDialog::OnNavigatePage

Il framework chiama questo metodo nella risposta per la [CTaskDialog::NavigateTo](#navigateto) (metodo).

```
virtual HRESULT OnNavigatePage();
```

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Note

L'override del metodo in una classe derivata per implementare il comportamento personalizzato.

##  <a name="onradiobuttonclick"></a>  CTaskDialog::OnRadioButtonClick

Il framework chiama questo metodo quando l'utente seleziona un controllo pulsante di opzione.

```
virtual HRESULT OnRadioButtonClick(int nRadioButtonID);
```

### <a name="parameters"></a>Parametri

[in] *nRadioButtonID*  
L'ID del controllo pulsante di opzione selezionato dall'utente.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Note

L'override del metodo in una classe derivata per implementare il comportamento personalizzato.

##  <a name="ontimer"></a>  CTaskDialog::OnTimer

Il framework chiama questo metodo quando il timer scade.

```
virtual HRESULT OnTimer(long lTime);
```

### <a name="parameters"></a>Parametri

[in] *lTime*  
Tempo in millisecondi dopo il `CTaskDialog` è stato creato o è stato reimpostato il timer.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Note

L'override del metodo in una classe derivata per implementare il comportamento personalizzato.

##  <a name="onverificationcheckboxclick"></a>  CTaskDialog::OnVerificationCheckboxClick

Il framework chiama questo metodo quando l'utente seleziona la casella di controllo di verifica.

```
virtual HRESULT OnVerificationCheckboxClick(BOOL bChecked);
```

### <a name="parameters"></a>Parametri

[in] *bChecked*  
TRUE indica che è selezionata la casella di controllo di verifica; FALSE indica che non lo è.

### <a name="return-value"></a>Valore restituito

L'implementazione predefinita restituisce S_OK.

### <a name="remarks"></a>Note

L'override del metodo in una classe derivata per implementare il comportamento personalizzato.

##  <a name="removeallcommandcontrols"></a>  CTaskDialog::RemoveAllCommandControls

Rimuove tutti i controlli pulsante di comando dal `CTaskDialog`.

```
void RemoveAllCommandControls();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

##  <a name="removeallradiobuttons"></a>  CTaskDialog::RemoveAllRadioButtons

Rimuove tutti i pulsanti di opzione dal `CTaskDialog`.

```
void RemoveAllRadioButtons();
```

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

##  <a name="setcommandcontroloptions"></a>  CTaskDialog::SetCommandControlOptions

Aggiorna un controllo pulsante di comando nel `CTaskDialog`.

```
void SetCommandControlOptions(
    int nCommandControlID,
    BOOL bEnabled,
    BOOL bRequiresElevation = FALSE);
```

### <a name="parameters"></a>Parametri

[in] *nCommandControlID*  
L'ID del controllo command da aggiornare.

[in] *bEnabled*  
Un parametro booleano che indica se il controllo pulsante di comando specificato è abilitato o disabilitato.

[in] *bRequiresElevation*  
Un parametro booleano che indica se il controllo pulsante di comando specificata richiede l'elevazione dei privilegi.

### <a name="remarks"></a>Note

Usare questo metodo per modificare la modalità di un controllo pulsante di comando è abilitato o richiede l'elevazione dei privilegi dopo che è stato aggiunto il `CTaskDialog` classe.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

##  <a name="setcommonbuttonoptions"></a>  CTaskDialog::SetCommonButtonOptions

Aggiorna un subset di pulsanti comuni deve essere abilitata e in modo da richiedere l'elevazione dei privilegi di controllo dell'account utente.

```
void SetCommonButtonOptions(
    int nDisabledButtonMask,
    int nElevationButtonMask = 0);
```

### <a name="parameters"></a>Parametri

[in] *nDisabledButtonMask*  
Maschera per i pulsanti comuni da disabilitare.

[in] *nElevationButtonMask*  
Maschera per i pulsanti comuni che richiedono l'elevazione dei privilegi.

### <a name="remarks"></a>Note

È possibile impostare i pulsanti comuni disponibili a un'istanza del [CTaskDialog Class](../../mfc/reference/ctaskdialog-class.md) usando il costruttore [CTaskDialog::CTaskDialog](#ctaskdialog) e il metodo [CTaskDialog::SetCommonButtons ](#setcommonbuttons). `CTaskDialog::SetCommonButtonOptions` non supporta l'aggiunta di nuovi pulsanti comuni.

Se si usa questo metodo per disabilitare o elevare un pulsante comune che non è disponibile per questo `CTaskDialog`, questo metodo genera un'eccezione usando il [assicurarsi](diagnostic-services.md#ensure) macro.

Questo metodo consente a qualsiasi pulsante che è disponibile per il `CTaskDialog` ma non è inclusa nella *nDisabledButtonMask*, anche se è stata precedentemente disabilitata. Questo metodo considera l'elevazione dei privilegi in modo analogo: registra i pulsanti comuni come non richiedono l'elevazione dei privilegi, se il pulsante comune è disponibile, ma non è incluso nel *nElevationButtonMask*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#6](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_6.cpp)]

##  <a name="setcommonbuttons"></a>  CTaskDialog::SetCommonButtons

Aggiunge i pulsanti comuni per la `CTaskDialog`.

```
void SetCommonButtons(
    int nButtonMask,
    int nDisabledButtonMask = 0,
    int nElevationButtonMask = 0);
```

### <a name="parameters"></a>Parametri

[in] *nButtonMask*  
Maschera dei pulsanti per aggiungere il `CTaskDialog`.

[in] *nDisabledButtonMask*  
Maschera dei pulsanti per disabilitare.

[in] *nElevationButtonMask*  
Maschera dei pulsanti che richiedono l'elevazione dei privilegi.

### <a name="remarks"></a>Note

È possibile chiamare questo metodo dopo la finestra di visualizzazione per questa istanza del `CTaskDialog` classe viene creata. In caso contrario questo metodo genera un'eccezione.

I pulsanti indicato dal *nButtonMask* eseguire l'override dei pulsanti comuni aggiunti in precedenza per il `CTaskDialog`. Solo i pulsanti indicato nella *nButtonMask* sono disponibili.

Se uno dei due *nDisabledButtonMask* oppure *nElevationButtonMask* contengono un pulsante che non si trova nello *nButtonMask*, questo metodo genera un'eccezione tramite i [Verificare](diagnostic-services.md#ensure) macro.

Per impostazione predefinita, tutti i pulsanti comuni sono abilitati e non richiedono l'elevazione dei privilegi.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#6](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_6.cpp)]

##  <a name="setcontent"></a>  CTaskDialog::SetContent

Aggiorna il contenuto del `CTaskDialog`.

```
void SetContent(const CString& strContent);
```

### <a name="parameters"></a>Parametri

[in] *strContent*  
Stringa da visualizzare all'utente.

### <a name="remarks"></a>Note

Il contenuto di `CTaskDialog` classe è il testo che viene visualizzato all'utente nella sezione principale della finestra di dialogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

##  <a name="setdefaultcommandcontrol"></a>  CTaskDialog::SetDefaultCommandControl

Specifica il controllo pulsante di comando predefinito.

```
void SetDefaultCommandControl(int nCommandControlID);
```

### <a name="parameters"></a>Parametri

[in] *nCommandControlID*  
L'ID del controllo pulsante di comando per impostazione predefinita.

### <a name="remarks"></a>Note

Il controllo pulsante di comando predefinito è il controllo che è selezionato quando la `CTaskDialog` viene innanzitutto visualizzato all'utente.

Questo metodo genera un'eccezione se non è possibile trovare il controllo pulsante di comando specificato da *nCommandControlID*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#2](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_1.cpp)]

##  <a name="setdefaultradiobutton"></a>  CTaskDialog::SetDefaultRadioButton

Specifica il pulsante di opzione predefinita.

```
void SetDefaultRadioButton(int nRadioButtonID);
```

### <a name="parameters"></a>Parametri

[in] *nRadioButtonID*  
L'ID del pulsante di opzione per impostazione predefinita.

### <a name="remarks"></a>Note

Il pulsante di opzione predefinita è il pulsante è selezionato quando la `CTaskDialog` viene innanzitutto visualizzato all'utente.

Questo metodo genera un'eccezione se non è possibile trovare il pulsante di opzione specificato da *nRadioButtonID*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

##  <a name="setdialogwidth"></a>  CTaskDialog::SetDialogWidth

Regola la larghezza del `CTaskDialog`.

```
void SetDialogWidth(int nWidth = 0);
```

### <a name="parameters"></a>Parametri

[in] *nWidth*  
La larghezza della finestra di dialogo, in pixel.

### <a name="remarks"></a>Note

Il parametro *nWidth* deve essere maggiore o uguale a 0. In caso contrario, questo metodo genera un'eccezione.

Se *nWidth* è impostato su 0, questo metodo imposta la finestra di dialogo per la dimensione predefinita.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

##  <a name="setexpansionarea"></a>  CTaskDialog::SetExpansionArea

Aggiorna l'area di espansione del `CTaskDialog`.

```
void SetExpansionArea(
    const CString& strExpandedInformation,
    const CString& strCollapsedLabel = _T(""),
    const CString& strExpandedLabel = _T(""));
```

### <a name="parameters"></a>Parametri

[in] *strExpandedInformation*  
La stringa che il `CTaskDialog` viene visualizzato nel corpo principale della finestra di dialogo quando l'utente fa clic sul pulsante di espansione.

[in] *strCollapsedLabel*  
La stringa che il `CTaskDialog` viene visualizzato accanto al pulsante di espansione quando l'area espansa è compressa.

[in] *strExpandedLabel*  
La stringa che il `CTaskDialog` viene visualizzato accanto al pulsante di espansione quando viene visualizzata l'area espansa.

### <a name="remarks"></a>Note

L'area di espansione del `CTaskDialog` classe consente di fornire informazioni aggiuntive all'utente. L'area di espansione è la parte principale del `CTaskDialog`, che si trova immediatamente sotto la stringa del titolo e il contenuto.

Quando la `CTaskDialog` viene prima visualizzato, non include informazioni espanse e inserisce `strCollapsedLabel` accanto al pulsante di espansione. Quando l'utente fa clic sul pulsante di espansione, il `CTaskDialog` consente di visualizzare *strExpandedInformation* e cambia l'etichetta da *strExpandedLabel*.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

##  <a name="setfootericon"></a>  CTaskDialog::SetFooterIcon

Aggiorna l'icona del piè di pagina del `CTaskDialog`.

```
void SetFooterIcon(HICON hFooterIcon);
void SetFooterIcon(LPCWSTR lpszFooterIcon);
```

### <a name="parameters"></a>Parametri

[in] *hFooterIcon*  
La nuova icona per il `CTaskDialog`.

[in] *lpszFooterIcon*  
La nuova icona per il `CTaskDialog`.

### <a name="remarks"></a>Note

L'icona del piè di pagina viene visualizzata nella parte inferiore della [CTaskDialog Class](../../mfc/reference/ctaskdialog-class.md). È possibile associare testo piè di pagina. È possibile modificare il testo del piè di pagina con [CTaskDialog::SetFooterText](#setfootertext).

Questo metodo genera un'eccezione con il [assicurarsi che](diagnostic-services.md#ensure) macro se la `CTaskDialog` viene visualizzato o il parametro di input è NULL.

Oggetto `CTaskDialog` può accettare solo un `HICON` o `LPCWSTR` sotto forma di icona piè di pagina. Questa viene configurata impostando l'opzione TDF_USE_HICON_FOOTER nel costruttore oppure [CTaskDialog::SetOptions](#setoptions). Per impostazione predefinita, il `CTaskDialog` è configurato per usare `LPCWSTR` come tipo di input per l'icona del piè di pagina. Questo metodo genera un'eccezione se si prova a impostare l'icona con il tipo non appropriato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

##  <a name="setfootertext"></a>  CTaskDialog::SetFooterText

Aggiorna il testo nel piè di pagina del `CTaskDialog`.

```
void SetFooterText(const CString& strFooterText);
```

### <a name="parameters"></a>Parametri

[in] *strFooterText*  
Il nuovo testo del piè di pagina.

### <a name="remarks"></a>Note

L'icona del piè di pagina viene visualizzata accanto al testo del piè di pagina in fondo il `CTaskDialog`. È possibile modificare l'icona del piè di pagina con [CTaskDialog::SetFooterIcon](#setfootericon).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

##  <a name="setmainicon"></a>  CTaskDialog::SetMainIcon

Aggiorna l'icona principale del `CTaskDialog`.

```
void SetMainIcon(HICON hMainIcon);
void SetMainIcon(LPCWSTR lpszMainIcon);
```

### <a name="parameters"></a>Parametri

[in] *hMainIcon*  
La nuova icona.

[in] *lpszMainIcon*  
La nuova icona.

### <a name="remarks"></a>Note

Questo metodo genera un'eccezione con il [assicurarsi che](diagnostic-services.md#ensure) macro se la `CTaskDialog` viene visualizzato o il parametro di input è NULL.

Oggetto `CTaskDialog` può accettare solo un `HICON` o `LPCWSTR` sotto forma di icona principale. È possibile configurare questa impostazione dell'opzione TDF_USE_HICON_MAIN nel costruttore o nel [CTaskDialog::SetOptions](#setoptions) (metodo). Per impostazione predefinita, il `CTaskDialog` è configurato per usare `LPCWSTR` come tipo di input per l'icona principale. Questo metodo genera un'eccezione se si prova a impostare l'icona con il tipo non appropriato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

##  <a name="setmaininstruction"></a>  CTaskDialog::SetMainInstruction

Aggiorna l'istruzione principale del `CTaskDialog`.

```
void SetMainInstruction(const CString& strInstructions);
```

### <a name="parameters"></a>Parametri

[in] *strInstructions*  
La nuova istruzione principale.

### <a name="remarks"></a>Note

L'istruzione principale del `CTaskDialog` classe è il testo visualizzato all'utente in caratteri grandi in grassetto. Si trova nella finestra di dialogo sotto la barra del titolo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

##  <a name="setoptions"></a>  CTaskDialog::SetOptions

Configura le opzioni per il `CTaskDialog`.

```
void SetOptions(int nOptionFlag);
```

### <a name="parameters"></a>Parametri

[in] *nOptionFlag*  
Il set di flag da utilizzare per il `CTaskDialog`.

### <a name="remarks"></a>Note

Questo metodo cancella tutte le opzioni correnti per il `CTaskDialog`. Per mantenere le opzioni correnti, è necessario recuperarli prima con [CTaskDialog::GetOptions](#getoptions) e combinarle con le opzioni che si desidera impostare.

La tabella seguente elenca tutte le opzioni valide.

|||
|-|-|
|TDF_ENABLE_HYPERLINKS|Abilita i collegamenti ipertestuali di `CTaskDialog`.|
|TDF_USE_HICON_MAIN|Consente di configurare il `CTaskDialog` usare un `HICON` dell'icona principale. L'alternativa consiste nell'usare un `LPCWSTR`.|
|TDF_USE_HICON_FOOTER|Consente di configurare il `CTaskDialog` usare un `HICON` per l'icona del piè di pagina. L'alternativa consiste nell'usare un `LPCWSTR`.|
|TDF_ALLOW_DIALOG_CANCELLATION|Consente all'utente chiudere la `CTaskDialog` usando la tastiera o tramite l'icona nell'angolo superiore destro della finestra di dialogo, anche se il **annullare** pulsante non è abilitato. Se questo flag non è impostato e il **annullare** pulsante non è abilitato, l'utente non è possibile chiudere la finestra di dialogo con ALT+F4, il tasto ESC, o la barra del titolo pulsante Chiudi.|
|TDF_USE_COMMAND_LINKS|Configura il `CTaskDialog` usare i controlli pulsante di comando.|
|TDF_USE_COMMAND_LINKS_NO_ICON|Configura il `CTaskDialog` usare controlli pulsante di comando senza visualizzare un'icona accanto al controllo. TDF_USE_COMMAND_LINKS sostituzioni TDF_USE_COMMAND_LINKS_NO_ICON.|
|TDF_EXPAND_FOOTER_AREA|Indica che l'area di espansione è correntemente espanso.|
|TDF_EXPANDED_BY_DEFAULT|Determina se l'area di espansione è espanso per impostazione predefinita.|
|TDF_VERIFICATION_FLAG_CHECKED|Indica che la casella di controllo di verifica è attualmente selezionata.|
|TDF_SHOW_PROGRESS_BAR|Configura il `CTaskDialog` per visualizzare un indicatore di stato.|
|TDF_SHOW_MARQUEE_PROGRESS_BAR|Configura l'indicatore di stato da un indicatore di stato di selezione. Se si abilita questa opzione, è necessario impostare TDF_SHOW_PROGRESS_BAR affinché il comportamento previsto.|
|TDF_CALLBACK_TIMER|Indica che il `CTaskDialog` callback interval è impostato su circa 200 millisecondi.|
|TDF_POSITION_RELATIVE_TO_WINDOW|Configura il `CTaskDialog` da allineare al centro rispetto alla finestra padre. Se questo flag non è abilitato, il `CTaskDialog` è centrato rispetto al monitoraggio.|
|TDF_RTL_LAYOUT|Configura il `CTaskDialog` un layout di lettura da destra a sinistra.|
|TDF_NO_DEFAULT_RADIO_BUTTON|Indica che nessun pulsante di opzione è selezionato quando la `CTaskDialog` viene visualizzata.|
|TDF_CAN_BE_MINIMIZED|Consente all'utente per ridurre al minimo il `CTaskDialog`. Per supportare questa opzione, il `CTaskDialog` non può essere modale. MFC non supporta questa opzione perché MFC non supporta un non modale `CTaskDialog`.|

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

##  <a name="setprogressbarmarquee"></a>  CTaskDialog::SetProgressBarMarquee

Configura una barra di selezione per il `CTaskDialog` e lo aggiunge alla finestra di dialogo.

```
void SetProgressBarMarquee(
    BOOL bEnabled = TRUE,
    int nMarqueeSpeed = 0);
```

### <a name="parameters"></a>Parametri

[in] *bEnabled*  
TRUE per abilitare la barra di selezione. FALSE per disabilitare la barra di selezione e la rimozione dal `CTaskDialog`.

[in] *nMarqueeSpeed*  
Numero intero che indica la velocità della barra di selezione.

### <a name="remarks"></a>Note

La barra di selezione viene visualizzata sotto il testo principale del `CTaskDialog` classe.

Uso *nMarqueeSpeed* per impostare la velocità della barra del rettangolo di selezione; i valori superiori indicano una velocità inferiore. Un valore pari a 0 per *nMarqueeSpeed* modo la barra di selezione si sposta con la velocità predefinita per Windows.

Questo metodo genera un'eccezione con il [verificare che](diagnostic-services.md#ensure) macro se *nMarqueeSpeed* è minore di 0.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#4](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_7.cpp)]

##  <a name="setprogressbarposition"></a>  CTaskDialog::SetProgressBarPosition

Consente di regolare la posizione dell'indicatore di stato.

```
void SetProgressBarPosition(int nProgressPos);
```

### <a name="parameters"></a>Parametri

[in] *nProgressPos*  
La posizione per l'indicatore di stato.

### <a name="remarks"></a>Note

Questo metodo genera un'eccezione con il [verificare che](diagnostic-services.md#ensure) macro se *nProgressPos* non è incluso nell'intervallo della barra di stato di avanzamento. È possibile modificare l'intervallo della barra di stato di avanzamento con [CTaskDialog::SetProgressBarRange](#setprogressbarrange).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#4](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_7.cpp)]

##  <a name="setprogressbarrange"></a>  CTaskDialog::SetProgressBarRange

Consente di regolare l'intervallo dell'indicatore di stato.

```
void SetProgressBarRange(
    int nRangeMin,
    int nRangeMax);
```

### <a name="parameters"></a>Parametri

[in] *nRangeMin*  
Il limite inferiore dell'indicatore di stato.

[in] *nRangeMax*  
Il limite superiore dell'indicatore di stato.

### <a name="remarks"></a>Note

La posizione dell'indicatore di stato è relativo alla *nRangeMin* e *nRangeMax*. Ad esempio, se *nRangeMin* è 50 e *nRangeMax* è 100, una posizione di 75 è a metà tra l'indicatore di stato. Uso [CTaskDialog::SetProgressBarPosition](#setprogressbarposition) per impostare la posizione dell'indicatore di stato.

Per visualizzare l'indicatore di stato, l'opzione che tdf_show_progress_bar deve essere abilitato e TDF_SHOW_MARQUEE_PROGRESS_BAR non deve essere attivato. Questo metodo imposta TDF_SHOW_PROGRESS_BAR automaticamente e Cancella TDF_SHOW_MARQUEE_PROGRESS_BAR. Uso [CTaskDialog::SetOptions](#setoptions) per modificare manualmente le opzioni per questa istanza del [CTaskDialog Class](../../mfc/reference/ctaskdialog-class.md).

Questo metodo genera un'eccezione con il [verificare che](diagnostic-services.md#ensure) macro se *nRangeMin* è non è minore *nRangeMax*. Questo metodo genera anche un'eccezione se il `CTaskDialog` sia già visibile e dispone di un indicatore di stato di selezione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#4](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_7.cpp)]

##  <a name="setprogressbarstate"></a>  CTaskDialog::SetProgressBarState

Imposta lo stato dell'indicatore di stato e lo visualizza nel `CTaskDialog`.

```
void SetProgressBarState(int nState = PBST_NORMAL);
```

### <a name="parameters"></a>Parametri

[in] *nState*  
Lo stato dell'indicatore di stato. Vedere la sezione Osservazioni per i valori possibili.

### <a name="remarks"></a>Note

Questo metodo genera un'eccezione con il [verificare che](diagnostic-services.md#ensure) macro se la `CTaskDialog` sia già visibile e dispone di un indicatore di stato di selezione.

La tabella seguente elenca i possibili valori per *nState*. In tutti questi casi, l'indicatore di stato verrà compilate utilizzando i colori normali fino a raggiungere il punto di interruzione designato. A questo punto verrà modificata colore basato sullo stato.

|||
|-|-|
|PBST_NORMAL|Dopo lo stato di avanzamento viene compilato a barre, il `CTaskDialog` non modifica il colore della barra. Per impostazione predefinita, il normale colore è verde.|
|PBST_ERROR|Dopo lo stato di avanzamento viene compilato a barre, il `CTaskDialog` di modificare il colore della barra di errore. Per impostazione predefinita, questo è rosso.|
|PBST_PAUSED|Dopo lo stato di avanzamento viene compilato a barre, il `CTaskDialog` modificare il colore della barra di colore in pausa. Per impostazione predefinita, questo è giallo.|

È possibile impostare in cui l'indicatore di stato si arresta con [CTaskDialog::SetProgressBarPosition](#setprogressbarposition).

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#4](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_7.cpp)]

##  <a name="setradiobuttonoptions"></a>  CTaskDialog::SetRadioButtonOptions

Abilita o disabilita un pulsante di opzione.

```
void SetRadioButtonOptions(
    int nRadioButtonID,
    BOOL bEnabled);
```

### <a name="parameters"></a>Parametri

[in] *nRadioButtonID*  
ID del controllo pulsante di opzione.

[in] *bEnabled*  
TRUE per abilitare il pulsante di opzione. FALSE per disabilitare il pulsante di opzione.

### <a name="remarks"></a>Note

Questo metodo genera un'eccezione con il [verificare che](diagnostic-services.md#ensure) macro se *nRadioButtonID* non è un ID valido per un pulsante di opzione.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#3](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_2.cpp)]

##  <a name="setverificationcheckbox"></a>  CTaskDialog::SetVerificationCheckbox

Imposta lo stato di selezione della casella di controllo di verifica.

```
void SetVerificationCheckbox(BOOL bChecked);
```

### <a name="parameters"></a>Parametri

[in] *bChecked*  
True per la casella di controllo di verifica selezionato quando la `CTaskDialog` viene visualizzato; FALSE per disporre la casella di controllo di verifica quando questa opzione è deselezionata il `CTaskDialog` viene visualizzato.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#5](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_4.cpp)]

##  <a name="setverificationcheckboxtext"></a>  CTaskDialog::SetVerificationCheckboxText

Imposta il testo che viene visualizzato a destra della casella di controllo di verifica.

```
void SetVerificationCheckboxText(CString& strVerificationText);
```

### <a name="parameters"></a>Parametri

[in] *strVerificationText*  
Il testo che questo metodo viene visualizzato accanto alla casella di controllo di verifica.

### <a name="remarks"></a>Note

Questo metodo genera un'eccezione con il [verificare che](diagnostic-services.md#ensure) macro se questa istanza del `CTaskDialog` classe è già visualizzata.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#5](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_4.cpp)]

##  <a name="setwindowtitle"></a>  CTaskDialog::SetWindowTitle

Imposta il titolo del `CTaskDialog`.

```
void SetWindowTitle(CString& strWindowTitle);
```

### <a name="parameters"></a>Parametri

[in] *strWindowTitle*  
Il nuovo titolo per il `CTaskDialog`.

### <a name="remarks"></a>Note

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#7](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_3.cpp)]

##  <a name="showdialog"></a>  CTaskDialog::ShowDialog

Crea e visualizza un `CTaskDialog`.

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

[in] *strContent*  
La stringa da utilizzare per il contenuto del `CTaskDialog`.

[in] *strMainInstruction*  
L'istruzione principale del `CTaskDialog`.

[in] *strTitle*  
Il titolo del `CTaskDialog`.

[in] *nIDCommandControlsFirst*  
L'ID di stringa del primo comando.

[in] *nIDCommandControlsLast*  
L'ID di stringa dell'ultimo comando.

[in] *nCommonButtons*  
Maschera dei pulsanti per aggiungere il `CTaskDialog`.

[in] *nTaskDialogOptions*  
Il set di opzioni da utilizzare per il `CTaskDialog`.

[in] *strFooter*  
Stringa da utilizzare come piè di pagina.

### <a name="return-value"></a>Valore restituito

Valore intero che corrisponde alla selezione effettuata dall'utente.

### <a name="remarks"></a>Note

Questo metodo statico consente di creare un'istanza di `CTaskDialog` classe senza creare esplicitamente un `CTaskDialog` oggetto nel codice. Poiché non esiste alcuna `CTaskDialog` dell'oggetto, non è possibile chiamare altri metodi del `CTaskDialog` se si usa questo metodo per visualizzare un `CTaskDialog` all'utente.

Questo metodo crea i controlli pulsante di comando utilizzando i dati dal file di risorse dell'applicazione. Tabella di stringhe nel file di risorse dispone di più stringhe con ID di stringa associato. Questo metodo aggiunge un controllo pulsante di comando per ciascuna voce valida nella tabella di stringhe tra *nIDCommandControlsFirst* e *nCommandControlsLast*, inclusivo. Per questi controlli pulsante di comando, la stringa nella tabella di stringhe è la didascalia del controllo e l'ID di stringa è il relativo ID.

Visualizzare [CTaskDialog::SetOptions](#setoptions) per un elenco di valori validi.

Il `CTaskDialog` si chiude quando l'utente seleziona un pulsante comune, un controllo command link, o chiude il `CTaskDialog`. Il valore restituito è l'identificatore che indica come l'utente ha chiuso la finestra di dialogo.

### <a name="example"></a>Esempio

[!code-cpp[NVC_MFC_CTaskDialog#1](../../mfc/reference/codesnippet/cpp/ctaskdialog-class_5.cpp)]

##  <a name="taskdialogcallback"></a>  CTaskDialog::TaskDialogCallback

Il framework chiama questo metodo in risposta a vari messaggi di Windows.

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

[in] *hwnd*  
Un handle per il `m_hWnd` struttura per il `CTaskDialog`.

[in] *uNotification*  
Il codice di notifica che specifica il messaggio generato.

[in] *wParam*  
Altre informazioni sul messaggio.

[in] *lParam*  
Altre informazioni sul messaggio.

[in] *dwRefData*  
Un puntatore al `CTaskDialog` oggetto cui si applica il messaggio di callback.

### <a name="return-value"></a>Valore restituito

Dipende dal codice specifico di notifica. Per altre informazioni, vedere la sezione Osservazioni.

### <a name="remarks"></a>Note

L'implementazione predefinita di `TaskDialogCallback` gestisce il messaggio specifico e quindi chiama appropriato nel metodo per il [CTaskDialog Class](../../mfc/reference/ctaskdialog-class.md). Ad esempio, in risposta al messaggio. TDN_BUTTON_CLICKED `TaskDialogCallback` chiamate [CTaskDialog::OnCommandControlClick](#oncommandcontrolclick).

I valori per *wParam* e *lParam* dipendono il messaggio generato specifico. È possibile che uno o entrambi questi valori può essere vuoto. La tabella seguente elenca le notifiche predefinite supportate e ciò che i valori della *wParam* e *lParam* rappresentano. Se si esegue l'override di questo metodo in una classe derivata, è necessario implementare il codice di callback per ogni messaggio nella tabella seguente.

|Messaggio di notifica|*wParam* valore|*lParam* valore|
|--------------------------|--------------------|--------------------|
|TDN_CREATED|Non usato.|Non usato.|
|TDN_NAVIGATED|Non usato.|Non usato.|
|TDN_BUTTON_CLICKED|Il pulsante di comando di controllo ID.|Non usato.|
|TDN_HYPERLINK_CLICKED|Non usato.|Oggetto [LPCWSTR](/windows/desktop/WinProg/windows-data-types) struttura che contiene il collegamento.|
|TDN_TIMER|Tempo in millisecondi dopo il `CTaskDialog` è stato creato o è stato reimpostato il timer.|Non usato.|
|TDN_DESTROYED|Non usato.|Non usato.|
|TDN_RADIO_BUTTON_CLICKED|L'ID del pulsante di opzione.|Non usato.|
|TDN_DIALOG_CONSTRUCTED|Non usato.|Non usato.|
|TDN_VERIFICATION_CLICKED|1 se la casella di controllo è selezionata, 0 in caso contrario.|Non usato.|
|TDN_HELP|Non usato.|Non usato.|
|TDN_EXPANDO_BUTTON_CLICKED|0 se l'area di espansione è compressa; diverso da zero se viene visualizzato il testo di espansione.|Non usato.|

## <a name="see-also"></a>Vedere anche

[Classi](../../mfc/reference/mfc-classes.md)  
[Classe CObject](../../mfc/reference/cobject-class.md)  
[Grafico della gerarchia](../../mfc/hierarchy-chart.md)  
[Procedura dettagliata: Aggiunta di CTaskDialog a un'applicazione](../../mfc/walkthrough-adding-a-ctaskdialog-to-an-application.md)  

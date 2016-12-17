---
title: "CTaskDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CTaskDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTaskDialog class"
ms.assetid: 1991ec98-ae56-4483-958b-233809c8c559
caps.latest.revision: 29
caps.handback.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CTaskDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Una finestra di dialogo popup che funziona come una finestra di messaggio ma può visualizzare informazioni aggiuntive all'utente.  `CTaskDialog` include anche la funzionalità per raccogliere informazioni dall'utente.  
  
## Sintassi  
  
```  
class CTaskDialog : public CObject  
```  
  
## Membri  
  
### Costruttori  
  
|||  
|-|-|  
|[CTaskDialog::CTaskDialog](../Topic/CTaskDialog::CTaskDialog.md)|Costruisce un oggetto `CTaskDialog`.|  
  
### Metodi  
  
|||  
|-|-|  
|[CTaskDialog::AddCommandControl](../Topic/CTaskDialog::AddCommandControl.md)|Aggiungere un pulsante di comando a `CTaskDialog`.|  
|[CTaskDialog::AddRadioButton](../Topic/CTaskDialog::AddRadioButton.md)|Aggiungere un pulsante di opzione a `CTaskDialog`.|  
|[CTaskDialog::ClickCommandControl](../Topic/CTaskDialog::ClickCommandControl.md)|Fare clic su un pulsante di comando o un pulsante comune a livello di codice.|  
|[CTaskDialog::ClickRadioButton](../Topic/CTaskDialog::ClickRadioButton.md)|Fare clic sul pulsante di opzione a livello di codice.|  
|[CTaskDialog::DoModal](../Topic/CTaskDialog::DoModal.md)|Consente di visualizzare `CTaskDialog`.|  
|[CTaskDialog::GetCommonButtonCount](../Topic/CTaskDialog::GetCommonButtonCount.md)|Recupera il numero di pulsanti comuni disponibili.|  
|[CTaskDialog::GetCommonButtonFlag](../Topic/CTaskDialog::GetCommonButtonFlag.md)|Converte un pulsante standard di Windows al tipo più comune del pulsante associato alla classe `CTaskDialog`.|  
|[CTaskDialog::GetCommonButtonId](../Topic/CTaskDialog::GetCommonButtonId.md)|Convertire uno dei tipi comuni del pulsante associato alla classe `CTaskDialog` a un pulsante standard di Windows.|  
|[CTaskDialog::GetOptions](../Topic/CTaskDialog::GetOptions.md)|Restituisce i flag di opzione per questo `CTaskDialog`.|  
|[CTaskDialog::GetSelectedCommandControlID](../Topic/CTaskDialog::GetSelectedCommandControlID.md)|Restituisce il pulsante selezionato il comando.|  
|[CTaskDialog::GetSelectedRadioButtonID](../Topic/CTaskDialog::GetSelectedRadioButtonID.md)|Restituisce il pulsante di opzione selezionato.|  
|[CTaskDialog::GetVerificationCheckboxState](../Topic/CTaskDialog::GetVerificationCheckboxState.md)|Recupera lo stato della casella di controllo di verifica.|  
|[CTaskDialog::IsCommandControlEnabled](../Topic/CTaskDialog::IsCommandControlEnabled.md)|Determina se un pulsante di comando o un pulsante comune è abilitato.|  
|[CTaskDialog::IsRadioButtonEnabled](../Topic/CTaskDialog::IsRadioButtonEnabled.md)|Determina se un pulsante di opzione è attivata.|  
|[CTaskDialog::IsSupported](../Topic/CTaskDialog::IsSupported.md)|Determina se il computer che esegue l'applicazione supporta `CTaskDialog`.|  
|[CTaskDialog::LoadCommandControls](../Topic/CTaskDialog::LoadCommandControls.md)|Aggiungere pulsanti di comando utilizzando i dati della tabella di stringhe.|  
|[CTaskDialog::LoadRadioButtons](../Topic/CTaskDialog::LoadRadioButtons.md)|Aggiungere pulsanti di opzione utilizzando i dati della tabella di stringhe.|  
|[CTaskDialog::NavigateTo](../Topic/CTaskDialog::NavigateTo.md)|Trasferisce lo stato attivo su un altro `CTaskDialog`.|  
|[CTaskDialog::OnCommandControlClick](../Topic/CTaskDialog::OnCommandControlClick.md)|Il framework chiama questo metodo quando l'utente fa clic su un pulsante di comando.|  
|[CTaskDialog::OnCreate](../Topic/CTaskDialog::OnCreate.md)|Il framework chiama il metodo dopo aver creato `CTaskDialog`.|  
|[CTaskDialog::OnDestroy](../Topic/CTaskDialog::OnDestroy.md)|Il framework chiama questo metodo prima che elimina `CTaskDialog`.|  
|[CTaskDialog::OnExpandButtonClick](../Topic/CTaskDialog::OnExpandButtonClick.md)|Il framework chiama questo metodo quando l'utente fa clic sul pulsante di espansione.|  
|[CTaskDialog::OnHelp](../Topic/CTaskDialog::OnHelp.md)|Il framework chiama questo metodo quando viene richiesta di.|  
|[CTaskDialog::OnHyperlinkClick](../Topic/CTaskDialog::OnHyperlinkClick.md)|Il framework chiama questo metodo quando l'utente fa clic su un collegamento ipertestuale.|  
|[CTaskDialog::OnInit](../Topic/CTaskDialog::OnInit.md)|Il framework chiama questo metodo quando `CTaskDialog` viene inizializzato.|  
|[CTaskDialog::OnNavigatePage](../Topic/CTaskDialog::OnNavigatePage.md)|Il framework chiama questo metodo quando l'utente sposta lo stato attivo relativamente ai controlli in `CTaskDialog`.|  
|[CTaskDialog::OnRadioButtonClick](../Topic/CTaskDialog::OnRadioButtonClick.md)|Il framework chiama questo metodo quando l'utente seleziona un controllo pulsante di opzione.|  
|[CTaskDialog::OnTimer](../Topic/CTaskDialog::OnTimer.md)|Il framework chiama questo metodo quando il timer scade.|  
|[CTaskDialog::OnVerificationCheckboxClick](../Topic/CTaskDialog::OnVerificationCheckboxClick.md)|Il framework chiama questo metodo quando l'utente seleziona la casella di controllo di verifica.|  
|[CTaskDialog::RemoveAllCommandControls](../Topic/CTaskDialog::RemoveAllCommandControls.md)|Rimuove tutti i comandi di comando da `CTaskDialog`.|  
|[CTaskDialog::RemoveAllRadioButtons](../Topic/CTaskDialog::RemoveAllRadioButtons.md)|Rimuove tutti i pulsanti di opzione da `CTaskDialog`.|  
|[CTaskDialog::SetCommandControlOptions](../Topic/CTaskDialog::SetCommandControlOptions.md)|Aggiorna un pulsante di comando in `CTaskDialog`.|  
|[CTaskDialog::SetCommonButtonOptions](../Topic/CTaskDialog::SetCommonButtonOptions.md)|Aggiorna un sottoinsieme dei pulsanti comuni per attivare e richiedono l'elevazione di controllodell'account utente.|  
|[CTaskDialog::SetCommonButtons](../Topic/CTaskDialog::SetCommonButtons.md)|Aggiungere pulsanti comuni a `CTaskDialog`.|  
|[CTaskDialog::SetContent](../Topic/CTaskDialog::SetContent.md)|Aggiornare il contenuto `CTaskDialog`.|  
|[CTaskDialog::SetDefaultCommandControl](../Topic/CTaskDialog::SetDefaultCommandControl.md)|Specifica il pulsante predefinito del comando.|  
|[CTaskDialog::SetDefaultRadioButton](../Topic/CTaskDialog::SetDefaultRadioButton.md)|Specifica il pulsante di opzione predefinito.|  
|[CTaskDialog::SetDialogWidth](../Topic/CTaskDialog::SetDialogWidth.md)|Regola la larghezza `CTaskDialog`.|  
|[CTaskDialog::SetExpansionArea](../Topic/CTaskDialog::SetExpansionArea.md)|Aggiorna l'area di espansione `CTaskDialog`.|  
|[CTaskDialog::SetFooterIcon](../Topic/CTaskDialog::SetFooterIcon.md)|Aggiorna l'icona del piè di pagina per `CTaskDialog`.|  
|[CTaskDialog::SetFooterText](../Topic/CTaskDialog::SetFooterText.md)|Aggiorna il testo del piè di pagina `CTaskDialog`.|  
|[CTaskDialog::SetMainIcon](../Topic/CTaskDialog::SetMainIcon.md)|Aggiorna la finestra principale `CTaskDialog`.|  
|[CTaskDialog::SetMainInstruction](../Topic/CTaskDialog::SetMainInstruction.md)|Aggiorna l'istruzione principale `CTaskDialog`.|  
|[CTaskDialog::SetOptions](../Topic/CTaskDialog::SetOptions.md)|Configurare le opzioni per `CTaskDialog`.|  
|[CTaskDialog::SetProgressBarMarquee](../Topic/CTaskDialog::SetProgressBarMarquee.md)|Configura una barra di marquee per `CTaskDialog` e aggiunta alla finestra di dialogo.|  
|[CTaskDialog::SetProgressBarPosition](../Topic/CTaskDialog::SetProgressBarPosition.md)|Regola il percorso dell'indicatore di stato.|  
|[CTaskDialog::SetProgressBarRange](../Topic/CTaskDialog::SetProgressBarRange.md)|Regola l'intervallo dell'indicatore di stato.|  
|[CTaskDialog::SetProgressBarState](../Topic/CTaskDialog::SetProgressBarState.md)|Imposta lo stato dell'indicatore di stato e delle visualizzazioni su `CTaskDialog`.|  
|[CTaskDialog::SetRadioButtonOptions](../Topic/CTaskDialog::SetRadioButtonOptions.md)|Abilita o disabilita un pulsante di opzione.|  
|[CTaskDialog::SetVerificationCheckbox](../Topic/CTaskDialog::SetVerificationCheckbox.md)|Imposta lo stato di selezione della casella di controllo di verifica.|  
|[CTaskDialog::SetVerificationCheckboxText](../Topic/CTaskDialog::SetVerificationCheckboxText.md)|Imposta il testo a destra della casella di controllo di verifica.|  
|[CTaskDialog::SetWindowTitle](../Topic/CTaskDialog::SetWindowTitle.md)|Imposta il titolo `CTaskDialog`.|  
|[CTaskDialog::ShowDialog](../Topic/CTaskDialog::ShowDialog.md)|Crea e visualizza `CTaskDialog`.|  
|[CTaskDialog::TaskDialogCallback](../Topic/CTaskDialog::TaskDialogCallback.md)|Il framework chiama in risposta ai diversi messaggi di Windows.|  
  
### Membri di dati  
  
|||  
|-|-|  
|`m_aButtons`|La matrice dei pulsanti di comando per `CTaskDialog`.|  
|`m_aRadioButtons`|La matrice dei controlli pulsante di opzione per `CTaskDialog`.|  
|`m_bVerified`|`TRUE` indica che la casella di controllo di verifica viene controllata; `FALSE` indica che non è.|  
|`m_footerIcon`|L'icona nel piè di pagina `CTaskDialog`.|  
|`m_hWnd`|Un handle di finestra per `CTaskDialog`.|  
|`m_mainIcon`|l'icona principale `CTaskDialog`.|  
|`m_nButtonDisabled`|Una maschera che indica i pulsanti comuni sono disabilitati.|  
|`m_nButtonElevation`|Una maschera che indica i pulsanti comuni richiedono l'elevazione di controllodell'account utente.|  
|`m_nButtonId`|L'id del pulsante seleziona il comando.|  
|`m_nCommonButton`|Una maschera che indica quali pulsanti comuni vengono visualizzati in `CTaskDialog`.|  
|`m_nDefaultCommandControl`|L'id del pulsante di comando selezionato quando `CTaskDialog` visualizzare.|  
|`m_nDefaultRadioButton`|ID del controllo pulsante di opzione selezionato quando `CTaskDialog` visualizzare.|  
|`m_nFlags`|Una maschera che indica le opzioni per `CTaskDialog`.|  
|`m_nProgressPos`|La posizione corrente per l'indicatore di stato.  Il valore deve essere compreso tra `m_nProgressRangeMin` e `m_nProgressRangeMax`.|  
|`m_nProgressRangeMax`|Il valore massimo per l'indicatore di stato.|  
|`m_nProgressRangeMin`|Il valore minimo per l'indicatore di stato.|  
|`m_nProgressState`|Lo stato dell'indicatore di stato.  Per ulteriori informazioni, vedere [CTaskDialog::SetProgressBarState](../Topic/CTaskDialog::SetProgressBarState.md).|  
|`m_nRadioId`|ID del controllo selezionato il pulsante di opzione.|  
|`m_nWidth`|Larghezza di `CTaskDialog` in pixel.|  
|`m_strCollapse`|La stringa che `CTaskDialog` visualizzate a destra della casella di espansione quando le informazioni espanse vengono nascoste.|  
|`m_strContent`|L'intero contenuto `CTaskDialog`.|  
|`m_strExpand`|La stringa che `CTaskDialog` visualizzate a destra della casella di espansione quando le informazioni vengono espanse.|  
|`m_strFooter`|Il piè di pagina `CTaskDialog`.|  
|`m_strInformation`|Le informazioni espanse per `CTaskDialog`.|  
|`m_strMainInstruction`|l'istruzione principale `CTaskDialog`.|  
|`m_strTitle`|Titolo della classe `CTaskDialog`.|  
|`m_strVerification`|La stringa che le visualizzazioni `CTaskDialog` a destra della casella di controllo di verifica.|  
  
## Note  
 La classe `CTaskDialog` sostituisce la finestra di messaggio standard di Windows e offre funzionalità aggiuntive come nuovi controlli per raccogliere informazioni dall'utente.  Questa classe è la libreria MFC in [!INCLUDE[vs_dev10_long](../../build/includes/vs_dev10_long_md.md)].  Avviare `CTaskDialog` è disponibile con [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)].  Le versioni precedenti di Windows non possono visualizzare l'oggetto `CTaskDialog`.  Utilizzare `CTaskDialog::IsSupported` per determinare in fase di esecuzione se l'utente corrente può visualizzare la finestra di dialogo attività.  La finestra di messaggio di Windows standard è ancora supportata in [!INCLUDE[vs_dev10_long](../../build/includes/vs_dev10_long_md.md)].  
  
 `CTaskDialog` è disponibile solo se l'applicazione viene compilata utilizzando la raccolta Unicode.  
  
 `CTaskDialog` dispone di due costruttori diversi.  Un costruttore consente di specificare due pulsanti di comando e un massimo di sei pulsanti normali.  È possibile aggiungere più pulsanti di comando dopo avere creato `CTaskDialog`.  Il secondo costruttore non supporta alcuni pulsanti di comando, ma è possibile aggiungere un numero illimitato di pulsanti normali.  Per ulteriori informazioni sui costruttori, vedere [CTaskDialog::CTaskDialog](../Topic/CTaskDialog::CTaskDialog.md).  
  
 Di seguito è riportato un esempio `CTaskDialog` per illustrare la posizione dei controlli.  
  
 ![Esempio di CTaskDialog](../../mfc/reference/media/ctaskdialogsample.png "CTaskDialogSample")  
Esempio CTaskDialog  
  
## Requisiti  
 **Minimo del sistema operativo richiesto:** [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]  
  
 **intestazione:** afxtaskdialog.h  
  
## Vedere anche  
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Procedura dettagliata: aggiunta di CTaskDialog a un'applicazione](../../mfc/walkthrough-adding-a-ctaskdialog-to-an-application.md)
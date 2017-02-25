---
title: "CFileDialog Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CFileDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CFileDialog class"
  - "common file dialog boxes"
  - "finestre di dialogo, common"
ms.assetid: fda4fd3c-08b8-4ce0-8e9d-7bab23f8c6c0
caps.latest.revision: 47
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 49
---
# CFileDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula la finestra di dialogo comune utilizzata per il file aperto o le operazioni di salvataggio del file.  
  
## Sintassi  
  
```  
class CFileDialog : public CCommonDialog  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileDialog::CFileDialog](../Topic/CFileDialog::CFileDialog.md)|Costruisce un oggetto `CFileDialog`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileDialog::AddCheckButton](../Topic/CFileDialog::AddCheckButton.md)|Aggiungere un pulsante alla finestra di dialogo.|  
|[CFileDialog::AddComboBox](../Topic/CFileDialog::AddComboBox.md)|Aggiunge una casella combinata nella finestra di dialogo.|  
|[CFileDialog::AddControlItem](../Topic/CFileDialog::AddControlItem.md)|Aggiunge un elemento a un controllo contenitore nella finestra di dialogo.|  
|[CFileDialog::AddEditBox](../Topic/CFileDialog::AddEditBox.md)|Aggiunge una casella di modifica alla finestra di dialogo.|  
|[CFileDialog::AddMenu](../Topic/CFileDialog::AddMenu.md)|Aggiunge un menu alla finestra di dialogo.|  
|[CFileDialog::AddPlace](../Topic/CFileDialog::AddPlace.md)|Di overload.  Aggiunge una cartella all'elenco dei punti disponibili per l'utente per aprire o salvare gli elementi.|  
|[CFileDialog::AddPushButton](../Topic/CFileDialog::AddPushButton.md)|Aggiungere un pulsante alla finestra di dialogo.|  
|[CFileDialog::AddRadioButtonList](../Topic/CFileDialog::AddRadioButtonList.md)|Aggiunge un gruppo di pulsanti di opzione \(ovvero come pulsante di opzione\) nella finestra di dialogo.|  
|[CFileDialog::AddSeparator](../Topic/CFileDialog::AddSeparator.md)|Aggiunge un separatore alla finestra di dialogo.|  
|[CFileDialog::AddText](../Topic/CFileDialog::AddText.md)|Aggiunge il contenuto di testo alla finestra di dialogo.|  
|[CFileDialog::ApplyOFNToShellDialog](../Topic/CFileDialog::ApplyOFNToShellDialog.md)|Aggiorna lo stato `CFileDialog` corrispondente ai parametri e i flag archiviati nella variabile membro `m_ofn`.|  
|[CFileDialog::DoModal](../Topic/CFileDialog::DoModal.md)|Visualizzare la finestra di dialogo e consente all'utente di effettuare una selezione.|  
|[CFileDialog::EnableOpenDropDown](../Topic/CFileDialog::EnableOpenDropDown.md)|Abilita un elenco a discesa del pulsante **Salva** o **Apri** nella finestra di dialogo.|  
|[CFileDialog::EndVisualGroup](../Topic/CFileDialog::EndVisualGroup.md)|Interrompe l'aggiunta di elementi a un gruppo visivo nella finestra di dialogo.|  
|[CFileDialog::GetCheckButtonState](../Topic/CFileDialog::GetCheckButtonState.md)|Ottiene lo stato corrente di un pulsante del controllo \(casella di controllo\) nella finestra di dialogo.|  
|[CFileDialog::GetControlItemState](../Topic/CFileDialog::GetControlItemState.md)|Ottiene lo stato corrente di un elemento in un controllo contenitore trovato nella finestra di dialogo.|  
|[CFileDialog::GetControlState](../Topic/CFileDialog::GetControlState.md)|Ottiene la visibilità corrente e gli stati abilitati di un determinato controllo.|  
|[CFileDialog::GetEditBoxText](../Topic/CFileDialog::GetEditBoxText.md)|Ottiene il testo corrente in un controllo casella di modifica.|  
|[CFileDialog::GetFileExt](../Topic/CFileDialog::GetFileExt.md)|Restituisce l'estensione del file selezionato.|  
|[CFileDialog::GetFileName](../Topic/CFileDialog::GetFileName.md)|Restituisce il nome del file selezionato.|  
|[CFileDialog::GetFileTitle](../Topic/CFileDialog::GetFileTitle.md)|Restituisce il nome del file selezionato.|  
|[CFileDialog::GetFolderPath](../Topic/CFileDialog::GetFolderPath.md)|Recupera il percorso della cartella o della directory correntemente aperta per **Apri** o una finestra di dialogo comune di tipo Esplora risorse **Salva con nome**.|  
|[CFileDialog::GetIFileDialogCustomize](../Topic/CFileDialog::GetIFileDialogCustomize.md)|Recupera l'oggetto COM interno di un oggetto personalizzato `CFileDialog`.|  
|[CFileDialog::GetIFileOpenDialog](../Topic/CFileDialog::GetIFileOpenDialog.md)|Recupera l'oggetto COM interno `CFileDialog` utilizzato come finestra di dialogo File **Apri**.|  
|[CFileDialog::GetIFileSaveDialog](../Topic/CFileDialog::GetIFileSaveDialog.md)|Recupera l'oggetto COM interno `CFileDialog` utilizzato come finestra di dialogo File **Salva**.|  
|[CFileDialog::GetNextPathName](../Topic/CFileDialog::GetNextPathName.md)|Restituisce il percorso completo del file una volta selezionato.|  
|[CFileDialog::GetOFN](../Topic/CFileDialog::GetOFN.md)|Recuperare la struttura `OPENFILENAME` dell'oggetto `CFileDialog`.|  
|[CFileDialog::GetPathName](../Topic/CFileDialog::GetPathName.md)|Restituisce il percorso completo del file selezionato.|  
|[CFileDialog::GetReadOnlyPref](../Topic/CFileDialog::GetReadOnlyPref.md)|Restituisce lo stato di sola lettura del file selezionato.|  
|[CFileDialog::GetResult](../Topic/CFileDialog::GetResult.md)|Ottiene la scelta che l'utente ha effettuato nella finestra di dialogo.|  
|[CFileDialog::GetResults](../Topic/CFileDialog::GetResults.md)|Ottiene le opzioni dell'utente in una finestra di dialogo che consente la selezione multipla.|  
|[CFileDialog::GetSelectedControlItem](../Topic/CFileDialog::GetSelectedControlItem.md)|Ottiene un elemento specifico dai controlli contenitori specificati nella finestra di dialogo.|  
|[CFileDialog::GetStartPosition](../Topic/CFileDialog::GetStartPosition.md)|Restituisce la posizione del primo elemento di un elenco di nomi file.|  
|[CFileDialog::HideControl](../Topic/CFileDialog::HideControl.md)|Nasconde il controllo specificato in **Apri** o una finestra di dialogo comune di tipo Esplora risorse **Salva con nome**.|  
|[CFileDialog::IsPickFoldersMode](../Topic/CFileDialog::IsPickFoldersMode.md)|Determina se la finestra di dialogo corrente in modalità di selezione della cartella.|  
|[CFileDialog::MakeProminent](../Topic/CFileDialog::MakeProminent.md)|Inserisce un controllo nella finestra di dialogo in modo che funzioni da confrontata con altri controlli aggiunti.|  
|[CFileDialog::RemoveControlItem](../Topic/CFileDialog::RemoveControlItem.md)|Rimuove un elemento da un controllo contenitore nella finestra di dialogo.|  
|[CFileDialog::SetCheckButtonState](../Topic/CFileDialog::SetCheckButtonState.md)|Imposta lo stato corrente di un pulsante del controllo \(casella di controllo\) nella finestra di dialogo.|  
|[CFileDialog::SetControlItemState](../Topic/CFileDialog::SetControlItemState.md)|Imposta lo stato corrente di un elemento in un controllo contenitore trovato nella finestra di dialogo.|  
|[CFileDialog::SetControlItemText](../Topic/CFileDialog::SetControlItemText.md)|Imposta il testo di un elemento del controllo.  Ad esempio, il testo fornito un pulsante di opzione o un elemento in un menu.|  
|[CFileDialog::SetControlLabel](../Topic/CFileDialog::SetControlLabel.md)|Imposta il testo associata a un controllo, ad esempio testo del pulsante o un'etichetta della casella di modifica.|  
|[CFileDialog::SetControlState](../Topic/CFileDialog::SetControlState.md)|Impostare la visibilità corrente e gli stati abilitati di un determinato controllo.|  
|[CFileDialog::SetControlText](../Topic/CFileDialog::SetControlText.md)|Imposta il testo del controllo specificato in **Apri** o una finestra di dialogo comune di tipo Esplora risorse **Salva con nome**.|  
|[CFileDialog::SetDefExt](../Topic/CFileDialog::SetDefExt.md)|Impostare l'estensione di file predefinito per **Apri** o una finestra di dialogo comune di tipo Esplora risorse **Salva con nome**.|  
|[CFileDialog::SetEditBoxText](../Topic/CFileDialog::SetEditBoxText.md)|Imposta il testo corrente in un controllo casella di modifica.|  
|[CFileDialog::SetProperties](../Topic/CFileDialog::SetProperties.md)|Fornisce un archivio delle proprietà che definisce i valori predefiniti da utilizzare per l'elemento salvato.|  
|[CFileDialog::SetSelectedControlItem](../Topic/CFileDialog::SetSelectedControlItem.md)|Imposta lo stato selezionato di un elemento specifico in un gruppo di pulsanti di opzione o una casella combinata merge nella finestra di dialogo.|  
|[CFileDialog::SetTemplate](../Topic/CFileDialog::SetTemplate.md)|Imposta il modello di finestra di dialogo per l'oggetto `CFileDialog`.|  
|[CFileDialog::StartVisualGroup](../Topic/CFileDialog::StartVisualGroup.md)|Dichiara un gruppo visivo nella finestra di dialogo.  Le chiamate successive a qualsiasi “aggiunti al metodo aggiungere gli elementi a questo gruppo.|  
|[CFileDialog::UpdateOFNFromShellDialog](../Topic/CFileDialog::UpdateOFNFromShellDialog.md)|Aggiorna i dati archiviati in una variabile membro `m_ofn` in base allo stato corrente della finestra di dialogo File.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileDialog::OnButtonClicked](../Topic/CFileDialog::OnButtonClicked.md)|Chiamato quando viene fatto clic sul pulsante.|  
|[CFileDialog::OnCheckButtonToggled](../Topic/CFileDialog::OnCheckButtonToggled.md)|Chiamato quando la casella di controllo è selezionata e selezionare.|  
|[CFileDialog::OnControlActivating](../Topic/CFileDialog::OnControlActivating.md)|Chiamato quando il controllo è attivo.|  
|[CFileDialog::OnFileNameChange](../Topic/CFileDialog::OnFileNameChange.md)|Gestisce il messaggio `WM_NOTIFY CDN_SELCHANGE`.|  
|[CFileDialog::OnFileNameOK](../Topic/CFileDialog::OnFileNameOK.md)|Convalida il nome file nella finestra di dialogo.|  
|[CFileDialog::OnFolderChange](../Topic/CFileDialog::OnFolderChange.md)|Gestisce il messaggio `WM_NOTIFY CDN_FOLDERCHANGE`.|  
|[CFileDialog::OnInitDone](../Topic/CFileDialog::OnInitDone.md)|Gestisce il messaggio `WM_NOTIFY CDN_INITDONE`.|  
|[CFileDialog::OnItemSelected](../Topic/CFileDialog::OnItemSelected.md)|Chiamato quando l'elemento contenitore sta selezionando.|  
|[CFileDialog::OnLBSelChangedNotify](../Topic/CFileDialog::OnLBSelChangedNotify.md)|Consente di eseguire azioni personalizzate quando le modifiche di selezione del file.|  
|[CFileDialog::OnShareViolation](../Topic/CFileDialog::OnShareViolation.md)|Violazioni della condivisione di handle.|  
|[CFileDialog::OnTypeChange](../Topic/CFileDialog::OnTypeChange.md)|Gestisce il messaggio `WM_NOTIFY CDN_TYPECHANGE`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileDialog::m\_ofn](../Topic/CFileDialog::m_ofn.md)|La struttura di Windows `OPENFILENAME`.  Fornisce l'accesso ai parametri di base della finestra di dialogo File.|  
  
## Note  
 Le finestre di dialogo dei file comuni consentono di implementare le finestre di dialogo di selezione file, ad esempio, **Apri file** e **Salva con nome**, in modo coerente con gli standard di Windows.  
  
 È possibile utilizzare [CFileDialog](../../mfc/reference/cfiledialog-class.md) come accade con il costruttore fornito, oppure è possibile derivare la classe della finestra di dialogo da `CFileDialog` e scrivere un costruttore per esigenze.  In entrambi i casi, queste finestre di dialogo e un comportamento simili a finestre di dialogo standard di MFC poiché derivano da [CCommonDialog Class](../../mfc/reference/ccommondialog-class.md).  `CFileDialog` si basa sul file di COMMDLG.DLL incluso in Windows.  
  
 Sia l'aspetto della funzionalità `CFileDialog` con [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] differiscono dalle versioni precedenti di Windows.  L'impostazione predefinita `CFileDialog` utilizza automaticamente il nuovo stile [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] senza modifiche al codice se un programma viene compilato ed eseguito in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)].  Utilizzare il parametro `bVistaStyle` nel costruttore manualmente per eseguire l'override di questo aggiornamento automatico.  All'aggiornamento automatico è finestre di dialogo in misura.  Non verranno convertite nel nuovo stile.  Per ulteriori informazioni sul costruttore, vedere [CFileDialog::CFileDialog](../Topic/CFileDialog::CFileDialog.md).  
  
> [!NOTE]
>  Il sistema ID del controllo differisce in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] da versioni precedenti di Windows quando si utilizza `CFileDialog`.  È necessario aggiornare tutti i riferimenti ai controlli `CFileDialog` nel codice prima di trasferire il progetto da una versione precedente di Windows.  
  
 Alcuni metodi `CFileDialog` non sono supportati in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)].  Verificare il singolo argomento del metodo per informazioni su se il metodo è supportato.  Inoltre, le seguenti funzioni ereditate non sono supportate in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]:  
  
-   [CDialog::OnInitDialog](../Topic/CDialog::OnInitDialog.md)  
  
-   [CDialog::OnSetFont](../Topic/CDialog::OnSetFont.md)  
  
 I messaggi di windows per la classe `CFileDialog` varia a seconda del sistema operativo in uso.  Ad esempio, Windows XP non supporta [CDialog::OnCancel](../Topic/CDialog::OnCancel.md) e [CDialog::OnOK](../Topic/CDialog::OnOK.md) per la classe `CFileDialog`.  Tuttavia, [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] li supporta.  Per ulteriori informazioni sui diversi messaggi generati e l'ordine in cui vengono ricevuti, vedere [esempio di CFileDialog: Ordine degli eventi di registrazione](../../top/visual-cpp-samples.md).  
  
 Per utilizzare un oggetto `CFileDialog`, creare innanzitutto l'oggetto utilizzando il costruttore `CFileDialog`.  Dopo la finestra di dialogo è stata creata, è possibile impostare o modificare i valori nella struttura [CFileDialog::m\_ofn](../Topic/CFileDialog::m_ofn.md) per inizializzare i valori o gli stati dei comandi della finestra di dialogo.  La struttura `m_ofn` è di tipo `OPENFILENAME`.  Per ulteriori informazioni, vedere la struttura [OPENFILENAME](http://msdn.microsoft.com/library/windows/desktop/ms646839) in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Dopo avere inizializzato i controlli finestra di dialogo, chiamare il metodo [CFileDialog::DoModal](../Topic/CFileDialog::DoModal.md) per visualizzare la finestra di dialogo in modo da poter immettere l'utente il percorso e il nome file.  `DoModal` restituisce se l'utente ha fatto clic su OK IDOK \(\) o sul pulsante di annullamento \(IDCANCEL\).  Se `DoModal` restituisce IDOK, è possibile utilizzare una delle funzioni membro pubbliche `CFileDialog` per recuperare le informazioni immesse nell'utente.  
  
> [!NOTE]
>  In [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)], le chiamate di più a [IFileDialog::SetFileTypes](http://msdn.microsoft.com/library/windows/desktop/bb775980) provoca un errore.  La seconda chiamata a `SetFileTypes` per ogni istanza `CFileDialog` restituirà `E_UNEXPECTED` in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)].  La chiamata di funzioni metodo `CFileDialog``SetFileTypes`.  Ad esempio, due chiamate a `CFileDialog::DoModal` per la stessa istanza `CFileDialog` generato [ASSERT](../Topic/ASSERT%20\(MFC\).md).  
  
 `CFileDialog` include diversi membri protetti che consentono di eseguire la gestione personalizzata di violazioni della condivisione, la convalida del nome file e la notifica di modifica della casella di riepilogo.  Questi membri protetti sono funzioni di callback che la maggior parte delle applicazioni non devono utilizzare poiché la gestione predefinita viene eseguita automaticamente.  Le voci della mappa messaggi per queste funzioni non sono necessarie perché sono funzioni virtuali standard.  
  
 È possibile utilizzare la funzione di Windows [CommDlgExtendedError](http://msdn.microsoft.com/library/windows/desktop/ms646916) per determinare se si è verificato un errore durante l'inizializzazione della finestra di dialogo e per ulteriori informazioni sull'errore.  
  
 L'eliminazione di oggetti `CFileDialog` viene gestita automaticamente.  Non è necessario chiamare [CDialog::EndDialog](../Topic/CDialog::EndDialog.md).  
  
 Per consentire a più file selezionati dell'utente, impostare il flag `OFN_ALLOWMULTISELECT` prima di chiamare `DoModal`.  È necessario fornire un buffer di nome file per estendere l'elenco restituito dei nomi più file.  Scegliere questo `m_ofn.lpstrFile` sostituendo con un puntatore a un buffer che è stato allocato, dopo la costruzione `CFileDialog`, ma prima di chiamare `DoModal`.  
  
 Inoltre, è necessario impostare `m_ofn.nMaxFile` utilizza il numero di caratteri nel buffer puntato da `m_ofn.lpstrFile`.  Se si imposta il numero massimo di file da selezionare in `n`, le dimensioni del buffer richieste è `n * (_MAX_PATH + 1) + 1`.  Il primo elemento restituito nel buffer è il percorso della cartella in cui i file sono stati selezionati.  Per le finestre di dialogo stile [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)], le stringhe di nome file e la directory vengono con terminazione null, con un carattere null aggiuntivo dopo l'ultimo nome file.  Questo formato consente alle finestre di dialogo di tipo Esplora risorse per restituire i nomi di file lunghi che includono spazi.  Per le finestre di dialogo obsolete, le stringhe di nome file e la directory sono separate da spazi e la funzione utilizza i nomi brevi file per i nomi file con spazi.  
  
 Nell'esempio seguente viene illustrato come utilizzare un buffer per recuperare ed elencare i nomi più file.  
  
 [!code-cpp[NVC_MFCFiles#23](../../mfc/codesnippet/CPP/cfiledialog-class_1.cpp)]  
  
 Per modificare le dimensioni del buffer in risposta all'utente che seleziona i nomi più file, è necessario derivare una nuova classe da `CFileDialog` ed eseguire l'override del metodo [CFileDialog::OnFileNameChange](../Topic/CFileDialog::OnFileNameChange.md).  
  
 Se si deriva una nuova classe da `CFileDialog`, è possibile utilizzare una mappa messaggi per gestire tutti i messaggi.  Per estendere la gestione dei messaggi predefinito, derivare una classe da `CFileDialog`, aggiungere una mappa messaggi alla nuova classe e specificare le funzioni membro per i nuovi messaggi.  Non è necessario fornire una funzione hook per personalizzare la finestra di dialogo.  
  
 Per personalizzare la finestra di dialogo, derivare una classe da `CFileDialog`, fornire un modello di finestra di dialogo personalizzato e aggiungere una mappa messaggi per elaborare i messaggi di notifica dai controlli estesi.  Analizzare tutti i messaggi non elaborati alla classe di base.  Non è necessario personalizzare la funzione hook.  
  
 Quando si utilizza lo stile [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]`CFileDialog`, non è possibile utilizzare le mappe dei messaggi e i modelli di finestra di dialogo.  Invece, è necessario utilizzare le interfacce COM per funzionalità simile.  
  
 Per ulteriori informazioni sull'utilizzo di `CFileDialog`, vedere [Classi di finestre di dialogo comuni](../../mfc/common-dialog-classes.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 `CFileDialog`  
  
## Requisiti  
 **Intestazione:** afxdlgs.h  
  
## Vedere anche  
 [CCommonDialog Class](../../mfc/reference/ccommondialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
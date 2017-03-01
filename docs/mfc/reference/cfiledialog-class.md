---
title: Classe CFileDialog | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CFileDialog
dev_langs:
- C++
helpviewer_keywords:
- CFileDialog class
- common file dialog boxes
- dialog boxes, common
ms.assetid: fda4fd3c-08b8-4ce0-8e9d-7bab23f8c6c0
caps.latest.revision: 47
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
ms.openlocfilehash: 7cde10ee445a719bce6be4167698bd86c46a18c0
ms.lasthandoff: 02/24/2017

---
# <a name="cfiledialog-class"></a>Classe CFileDialog
Incapsula la finestra di dialogo comune che viene utilizzata per l'apertura del file o le operazioni di salvataggio dei file.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CFileDialog : public CCommonDialog  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileDialog::CFileDialog](#cfiledialog)|Costruisce un oggetto `CFileDialog`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileDialog::AddCheckButton](#addcheckbutton)|Aggiunge un pulsante di segno di spunta nella finestra di dialogo.|  
|[CFileDialog::AddComboBox](#addcombobox)|Aggiunge una casella combinata alla finestra di dialogo.|  
|[CFileDialog::AddControlItem](#addcontrolitem)|Aggiunge un elemento a un controllo contenitore nella finestra di dialogo.|  
|[CFileDialog::AddEditBox](#addeditbox)|Aggiunge una casella di modifica nella finestra di dialogo.|  
|[CFileDialog::AddMenu](#addmenu)|Aggiunge un menu nella finestra di dialogo.|  
|[CFileDialog::AddPlace](#addplace)|Di overload. Aggiunge che una cartella all'elenco di inserisce disponibile per l'utente di aprire o salvare gli elementi.|  
|[CFileDialog::AddPushButton](#addpushbutton)|Aggiunge un pulsante nella finestra di dialogo.|  
|[CFileDialog::AddRadioButtonList](#addradiobuttonlist)|Aggiunge un gruppo di pulsanti (noto anche come pulsante di opzione) di opzione nella finestra di dialogo.|  
|[CFileDialog::AddSeparator](#addseparator)|Un separatore viene aggiunto alla finestra di dialogo.|  
|[CFileDialog::AddText](#addtext)|Aggiunge il contenuto di testo alla finestra di dialogo.|  
|[CFileDialog::ApplyOFNToShellDialog](#applyofntoshelldialog)|Aggiorna lo stato di `CFileDialog` per corrispondere ai parametri e ai flag archiviato nel `m_ofn` variabile membro.|  
|[CFileDialog::DoModal](#domodal)|Visualizza la finestra di dialogo e consente all'utente di effettuare una selezione.|  
|[CFileDialog::EnableOpenDropDown](#enableopendropdown)|Abilita un elenco a discesa nel **aprire** o **salvare** pulsante nella finestra di dialogo.|  
|[CFileDialog::EndVisualGroup](#endvisualgroup)|Arresta l'aggiunta di elementi da raggruppare visivamente nella finestra di dialogo.|  
|[CFileDialog::GetCheckButtonState](#getcheckbuttonstate)|Ottiene lo stato corrente di un pulsante di controllo (casella di controllo) nella finestra di dialogo.|  
|[CFileDialog::GetControlItemState](#getcontrolitemstate)|Ottiene lo stato corrente di un elemento in un controllo contenitore trovato nella finestra di dialogo.|  
|[CFileDialog::GetControlState](#getcontrolstate)|Ottiene l'impostazione di visibilità corrente e gli stati di un determinato controllo abilitato.|  
|[CFileDialog::GetEditBoxText](#geteditboxtext)|Ottiene il testo corrente in un controllo casella di modifica.|  
|[CFileDialog::GetFileExt](#getfileext)|Restituisce l'estensione del file selezionato.|  
|[CFileDialog::GetFileName](#getfilename)|Restituisce il nome del file del file selezionato.|  
|[CFileDialog::GetFileTitle](#getfiletitle)|Restituisce il titolo del file selezionato.|  
|[CFileDialog::GetFolderPath](#getfolderpath)|Recupera il percorso della cartella attualmente aperta o della directory per un tipo Esplora risorse **aprire** o **Salva con nome** la finestra di dialogo comune.|  
|[CFileDialog::GetIFileDialogCustomize](#getifiledialogcustomize)|Recupera l'oggetto COM interno per un oggetto personalizzato `CFileDialog` oggetto.|  
|[CFileDialog::GetIFileOpenDialog](#getifileopendialog)|Recupera l'oggetto COM interno per un `CFileDialog` che viene utilizzato come un **aprire** la finestra di dialogo file.|  
|[CFileDialog::GetIFileSaveDialog](#getifilesavedialog)|Recupera l'oggetto COM interno per un `CFileDialog` che viene utilizzato come un **salvare** la finestra di dialogo file.|  
|[CFileDialog::GetNextPathName](#getnextpathname)|Restituisce il percorso completo del file successivo selezionato.|  
|[CFileDialog::GetOFN](#getofn)|Recupera il `OPENFILENAME` della struttura di `CFileDialog` oggetto.|  
|[CFileDialog::GetPathName](#getpathname)|Restituisce il percorso completo del file selezionato.|  
|[CFileDialog::GetReadOnlyPref](#getreadonlypref)|Restituisce lo stato di sola lettura del file selezionato.|  
|[CFileDialog::GetResult](#getresult)|Ottiene la scelta dell'utente che effettua nella finestra di dialogo.|  
|[CFileDialog::GetResults](#getresults)|Ottiene le scelte dell'utente in una finestra di dialogo che consente la selezione multipla.|  
|[CFileDialog::GetSelectedControlItem](#getselectedcontrolitem)|Ottiene un particolare elemento dai controlli contenitore specificato nella finestra di dialogo.|  
|[CFileDialog::GetStartPosition](#getstartposition)|Restituisce la posizione del primo elemento dell'elenco di nome file.|  
|[CFileDialog::HideControl](#hidecontrol)|Nasconde il controllo specificato in uno stile Esplora **aprire** o **Salva con nome** la finestra di dialogo comune.|  
|[CFileDialog::IsPickFoldersMode](#ispickfoldersmode)|Determina se la finestra di dialogo corrente nella modalità di selezione cartelle.|  
|[CFileDialog::MakeProminent](#makeprominent)|Posizioni un controllo nella finestra di dialogo in modo da farlo risaltare rispetto ad altri controlli aggiunti.|  
|[CFileDialog::RemoveControlItem](#removecontrolitem)|Rimuove un elemento da un controllo contenitore nella finestra di dialogo.|  
|[CFileDialog::SetCheckButtonState](#setcheckbuttonstate)|Imposta lo stato corrente di un pulsante di controllo (casella di controllo) nella finestra di dialogo.|  
|[CFileDialog::SetControlItemState](#setcontrolitemstate)|Imposta lo stato corrente di un elemento in un controllo contenitore trovato nella finestra di dialogo.|  
|[CFileDialog::SetControlItemText](#setcontrolitemtext)|Imposta il testo di un elemento di controllo. Ad esempio, il testo che accompagna un pulsante di opzione o un elemento in un menu.|  
|[CFileDialog::SetControlLabel](#setcontrollabel)|Imposta il testo associato a un controllo, ad esempio testo o un'etichetta della casella di modifica.|  
|[CFileDialog::SetControlState](#setcontrolstate)|Imposta la visibilità corrente e gli stati di un determinato controllo abilitato.|  
|[CFileDialog::SetControlText](#setcontroltext)|Imposta il testo per il controllo specificato in uno stile Esplora **aprire** o **Salva con nome** la finestra di dialogo comune.|  
|[CFileDialog::SetDefExt](#setdefext)|Imposta l'estensione predefinita per un tipo Esplora risorse **aprire** o **Salva con nome** la finestra di dialogo comune.|  
|[CFileDialog::SetEditBoxText](#seteditboxtext)|Imposta il testo corrente in un controllo casella di modifica.|  
|[CFileDialog::SetProperties](#setproperties)|Fornisce un archivio delle proprietà che definisce i valori predefiniti da usare per l'elemento salvato.|  
|[CFileDialog::SetSelectedControlItem](#setselectedcontrolitem)|Imposta lo stato selezionato di un particolare elemento in un gruppo di pulsanti di opzione o una casella combinata trovato nella finestra di dialogo.|  
|[CFileDialog::SetTemplate](#settemplate)|Imposta il modello di finestra di dialogo per la `CFileDialog` oggetto.|  
|[CFileDialog::StartVisualGroup](#startvisualgroup)|Dichiara un gruppo visual nella finestra di dialogo. Le chiamate successive a qualsiasi metodo "add" aggiungono tali elementi a questo gruppo.|  
|[CFileDialog::UpdateOFNFromShellDialog](#updateofnfromshelldialog)|Aggiorna i dati archiviati nel `m_ofn` variabile membro in base allo stato corrente della finestra di dialogo file.|  
  
### <a name="protected-methods"></a>Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileDialog::OnButtonClicked](#onbuttonclicked)|Chiamato quando si fa clic sul pulsante.|  
|[CFileDialog::OnCheckButtonToggled](#oncheckbuttontoggled)|Chiamato quando la casella di controllo è selezionata o deselezionata.|  
|[CFileDialog::OnControlActivating](#oncontrolactivating)|Chiamato quando il controllo è attivo.|  
|[CFileDialog::OnFileNameChange](#onfilenamechange)|Gestisce il `WM_NOTIFY CDN_SELCHANGE` messaggio.|  
|[CFileDialog::OnFileNameOK](#onfilenameok)|Convalida il nome file immesso nella finestra di dialogo.|  
|[CFileDialog::OnFolderChange](#onfolderchange)|Gestisce il `WM_NOTIFY CDN_FOLDERCHANGE` messaggio.|  
|[CFileDialog::OnInitDone](#oninitdone)|Gestisce il `WM_NOTIFY CDN_INITDONE` messaggio.|  
|[CFileDialog::OnItemSelected](#onitemselected)|Chiamato quando viene selezionato l'elemento contenitore.|  
|[CFileDialog::OnLBSelChangedNotify](#onlbselchangednotify)|Consente di eseguire azioni personalizzate quando cambia la selezione di file.|  
|[CFileDialog::OnShareViolation](#onshareviolation)|Handle di condividono le violazioni.|  
|[CFileDialog::OnTypeChange](#ontypechange)|Gestisce il `WM_NOTIFY CDN_TYPECHANGE` messaggio.|  
  
### <a name="public-data-members"></a>Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CFileDialog::m_ofn](#m_ofn)|Windows `OPENFILENAME` struttura. Consente di accedere ai parametri di casella di dialogo file base.|  
  
## <a name="remarks"></a>Note  
 Finestre di dialogo file comuni consentono di implementare la selezione di file finestre di dialogo, ad esempio, **Apri** e **Salva con nome**, in modo che sia coerenza con gli standard di Windows.  
  
 È possibile utilizzare `CFileDialog` come avviene con il costruttore fornito oppure è possibile derivare la propria classe di finestra di dialogo casella da `CFileDialog` e scrivere un costruttore in base alle esigenze. In entrambi i casi, queste finestre di dialogo si comportano come finestre di dialogo MFC standard perché vengono derivati dal [CCommonDialog classe](../../mfc/reference/ccommondialog-class.md). `CFileDialog`si basa sul COMMDLG. File DLL che è incluso in Windows.  
  
 Sia l'aspetto e la funzionalità di `CFileDialog` con [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] differiscono dalle versioni precedenti di Windows. Il valore predefinito `CFileDialog` utilizza automaticamente il nuovo [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] stile senza modifiche del codice se un programma viene compilato ed eseguito utilizzando [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]. Utilizzare il `bVistaStyle` parametro nel costruttore per eseguire manualmente l'override di questo aggiornamento automatico. L'eccezione per l'aggiornamento automatico è finestre di dialogo personalizzate. Non essere convertito nel nuovo stile. Per ulteriori informazioni al costruttore, vedere [CFileDialog::CFileDialog](#cfiledialog).  
  
> [!NOTE]
>  Il sistema di ID di controllo è diverso [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] da versioni precedenti di Windows quando si utilizza un `CFileDialog`. È necessario aggiornare tutti i riferimenti a `CFileDialog` controlli nel codice prima che è possibile portare il progetto da una versione precedente di Windows.  
  
 Alcuni `CFileDialog` metodi non sono supportati in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]. Controllare l'argomento del metodo singoli per informazioni su se il metodo è supportato. Inoltre, le funzioni ereditate seguenti non sono supportate in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]:  
  
- [CDialog](../../mfc/reference/cdialog-class.md#oninitdialog)  
  
- [CDialog::OnSetFont](../../mfc/reference/cdialog-class.md#onsetfont)  
  
 I messaggi di windows per la `CFileDialog` classe dipende dal sistema operativo in uso. Ad esempio, Windows XP non supporta [CDialog::OnCancel](../../mfc/reference/cdialog-class.md#oncancel) e [CDialog::OnOK](../../mfc/reference/cdialog-class.md#onok) per la `CFileDialog` classe. Tuttavia, [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] li supportano. Per ulteriori informazioni sui diversi messaggi che vengono generati e l'ordine in cui vengono ricevuti, vedere [esempio CFileDialog: ordine degli eventi di registrazione](../../visual-cpp-samples.md).  
  
 Per utilizzare un `CFileDialog` oggetto, creare innanzitutto l'oggetto utilizzando il `CFileDialog` costruttore. Dopo la finestra di dialogo è stata costruita, è possibile impostare o modificare i valori di [CFileDialog::m_ofn](#m_ofn) struttura per inizializzare i valori o stati di controlli finestra di dialogo. Il `m_ofn` struttura è di tipo `OPENFILENAME`. Per ulteriori informazioni, vedere il [OPENFILENAME](http://msdn.microsoft.com/library/windows/desktop/ms646839) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 Dopo aver inizializzato i controlli della finestra di dialogo, chiamare il [CFileDialog::DoModal](#domodal) metodo per visualizzare la finestra di dialogo casella in modo che l'utente può digitare il percorso e nome file. `DoModal`Restituisce se l'utente fa clic su OK (IDOK) o sul pulsante Annulla (IDCANCEL). Se `DoModal` restituisce IDOK, è possibile utilizzare uno del `CFileDialog` funzioni membro pubbliche per recuperare le informazioni inserite dall'utente.  
  
> [!NOTE]
>  In [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)], più chiamate a [IFileDialog::SetFileTypes](http://msdn.microsoft.com/library/windows/desktop/bb775980) provoca un errore. La seconda chiamata a `SetFileTypes` per qualsiasi istanza di un `CFileDialog` restituirà `E_UNEXPECTED` in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]. Alcuni `CFileDialog` metodo funzioni chiamano `SetFileTypes`. Ad esempio, due chiamate a `CFileDialog::DoModal` per la stessa istanza di un `CFileDialog` genera [ASSERT](http://msdn.microsoft.com/library/1e70902d-d58c-4e7b-9f69-2aeb6cbe476c).  
  
 `CFileDialog`include diversi membri protetti che consentono di eseguire la gestione personalizzata di notifica di modifica della casella di riepilogo, convalida del nome file e le violazioni di condivisione. Questi membri protetti sono funzioni di callback che non è necessario utilizzare poiché la gestione predefinita viene eseguita automaticamente la maggior parte delle applicazioni. Voci della mappa messaggi per queste funzioni non sono necessarie perché sono funzioni virtuali standard.  
  
 È possibile utilizzare Windows [CommDlgExtendedError](http://msdn.microsoft.com/library/windows/desktop/ms646916) funzione per determinare se si è verificato un errore durante l'inizializzazione della finestra di dialogo e per ulteriori informazioni sull'errore.  
  
 L'eliminazione di `CFileDialog` oggetti viene gestita automaticamente. Non è necessario chiamare [CDialog::EndDialog](../../mfc/reference/cdialog-class.md#enddialog).  
  
 Per consentire all'utente di selezionare più file, impostare il `OFN_ALLOWMULTISELECT` flag prima di chiamare `DoModal`. È necessario fornire il proprio buffer di nome file per includere l'elenco restituito di più nomi di file. A tale scopo sostituendo `m_ofn.lpstrFile` con un puntatore a un buffer è stato allocato, dopo la costruzione di `CFileDialog`, ma prima della chiamata `DoModal`.  
  
 Inoltre, è necessario impostare `m_ofn.nMaxFile` utilizzando il numero di caratteri nel buffer a cui puntato `m_ofn.lpstrFile`. Se si imposta il numero massimo di file da selezionare per `n`, la dimensione del buffer necessaria `n * (_MAX_PATH + 1) + 1`. Il primo elemento restituito nel buffer è il percorso della cartella in cui sono stati selezionati i file. Per [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]-finestre di dialogo stile, le stringhe di nome file e directory sono con terminazione null, con un altro carattere null dopo l'ultimo nome file. Questo formato consente le finestre di dialogo di tipo Esplora risorse restituire i nomi di file lunghi contenenti spazi. Per le finestre di dialogo di vecchio stile, le stringhe di nomi di file e directory sono separate da spazi e la funzione utilizza nomi file brevi per i nomi di file con spazi.  
  
 Nell'esempio seguente viene illustrato come utilizzare un buffer per recuperare ed elencare più nomi di file.  
  
 [!code-cpp[NVC_MFCFiles&#23;](../../atl-mfc-shared/reference/codesnippet/cpp/cfiledialog-class_1.cpp)]  
  
 Per modificare le dimensioni del buffer in risposta all'utente la selezione di più nomi di file, è necessario derivare una nuova classe da `CFileDialog` ed eseguire l'override di [CFileDialog::OnFileNameChange](#onfilenamechange) metodo.  
  
 Se si deriva una nuova classe da `CFileDialog`, è possibile utilizzare una mappa messaggi per gestire tutti i messaggi. Per estendere la gestione dei messaggi predefinito, derivare una classe da `CFileDialog`, aggiungere una mappa messaggi per la nuova classe e forniscono funzioni membro per i nuovi messaggi. Non è necessario fornire una funzione hook per personalizzare la finestra di dialogo.  
  
 Per personalizzare la finestra di dialogo, derivare una classe da `CFileDialog`, fornire un modello di finestra di dialogo personalizzate e aggiungere una mappa messaggi per elaborare i messaggi di notifica da controlli estesi. Passare i messaggi non elaborati per la classe di base. Non è possibile personalizzare la funzione hook.  
  
 Quando si utilizza il [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] stile del `CFileDialog`, non è possibile utilizzare modelli di finestra di dialogo e mappe messaggi. In alternativa, è necessario utilizzare le interfacce COM per funzionalità simili.  
  
 Per ulteriori informazioni su come usare `CFileDialog`, vedere [classi di finestre di dialogo comuni](../../mfc/common-dialog-classes.md).  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CDialog](../../mfc/reference/cdialog-class.md)  
  
 [CCommonDialog](../../mfc/reference/ccommondialog-class.md)  
  
 `CFileDialog`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdlgs. h  
  
##  <a name="a-nameaddcheckbuttona--cfiledialogaddcheckbutton"></a><a name="addcheckbutton"></a>CFileDialog::AddCheckButton  
 Aggiunge un pulsante di segno di spunta nella finestra di dialogo.  
  
```  
HRESULT AddCheckButton(
    DWORD dwIDCtl,  
    const CString& strLabel,  
    BOOL bChecked);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID del pulsante di controllo da aggiungere.  
  
 `strLabel`  
 Il nome del controllo pulsante.  
  
 `bChecked`  
 Valore booleano che indica lo stato corrente del controllo pulsante. `TRUE`Se selezionato; `FALSE` in caso contrario  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameaddcomboboxa--cfiledialogaddcombobox"></a><a name="addcombobox"></a>CFileDialog::AddComboBox  
 Aggiunge una casella combinata alla finestra di dialogo.  
  
```  
HRESULT AddComboBox(DWORD dwIDCtl);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID della casella combinata da aggiungere.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameaddcontrolitema--cfiledialogaddcontrolitem"></a><a name="addcontrolitem"></a>CFileDialog::AddControlItem  
 Aggiunge un elemento a un controllo contenitore nella finestra di dialogo.  
  
```  
HRESULT AddControlItem(
    DWORD dwIDCtl,  
    DWORD dwIDItem,  
    const CString& strLabel);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID del controllo contenitore per aggiungere l'elemento.  
  
 `dwIDItem`  
 L'ID dell'elemento.  
  
 `strLabel`  
 Testo dell'elemento.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameaddeditboxa--cfiledialogaddeditbox"></a><a name="addeditbox"></a>CFileDialog::AddEditBox  
 Aggiunge una casella di modifica nella finestra di dialogo.  
  
```  
HRESULT AddEditBox(
    DWORD dwIDCtl,  
    const CString& strText);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID della casella di modifica da aggiungere.  
  
 `strText`  
 Nome della casella di modifica.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameaddmenua--cfiledialogaddmenu"></a><a name="addmenu"></a>CFileDialog::AddMenu  
 Aggiunge un menu nella finestra di dialogo.  
  
```  
HRESULT AddMenu(
    DWORD dwIDCtl,  
    const CString& strLabel);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID del menu da aggiungere.  
  
 `strLabel`  
 Nome del menu.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameaddplacea--cfiledialogaddplace"></a><a name="addplace"></a>CFileDialog::AddPlace  
 Aggiunge che una cartella all'elenco di inserisce disponibile per l'utente di aprire o salvare gli elementi.  
  
```  
void AddPlace(
    LPCWSTR lpszFolder,  
    FDAP fdap = FDAP_TOP) throw();

 
void AddPlace(
    IShellItem* psi,  
    FDAP fdap = FDAP_TOP) throw();
```  
  
### <a name="parameters"></a>Parametri  
 `lpszFolder`  
 Un percorso della cartella deve essere resa disponibile all'utente. Questo può essere solo una cartella.  
  
 `fdap`  
 Specifica la posizione della cartella è all'interno dell'elenco.  
  
 `psi`  
 Un puntatore a un'istanza di IShellItem che rappresenta la cartella deve essere resa disponibile all'utente. Questo può essere solo una cartella.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameaddpushbuttona--cfiledialogaddpushbutton"></a><a name="addpushbutton"></a>CFileDialog::AddPushButton  
 Aggiunge un pulsante nella finestra di dialogo.  
  
```  
HRESULT AddPushButton(
    DWORD dwIDCtl,  
    const CString& strLabel);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID del pulsante da aggiungere.  
  
 `strLabel`  
 Il nome del pulsante.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameaddradiobuttonlista--cfiledialogaddradiobuttonlist"></a><a name="addradiobuttonlist"></a>CFileDialog::AddRadioButtonList  
 Aggiunge un gruppo di pulsanti (noto anche come pulsante di opzione) di opzione nella finestra di dialogo.  
  
```  
HRESULT AddRadioButtonList(DWORD dwIDCtl);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID del gruppo di pulsanti di opzione da aggiungere.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameaddseparatora--cfiledialogaddseparator"></a><a name="addseparator"></a>CFileDialog::AddSeparator  
 Un separatore viene aggiunto alla finestra di dialogo.  
  
```  
HRESULT AddSeparator(DWORD dwIDCtl);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 Aggiungere l'ID del separatore.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameaddtexta--cfiledialogaddtext"></a><a name="addtext"></a>CFileDialog::AddText  
 Aggiunge testo alla finestra di dialogo.  
  
```  
HRESULT AddText(
    DWORD dwIDCtl,  
    const CString& strText);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID del testo da aggiungere.  
  
 `strText`  
 Il nome del testo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameapplyofntoshelldialoga--cfiledialogapplyofntoshelldialog"></a><a name="applyofntoshelldialog"></a>CFileDialog::ApplyOFNToShellDialog  
 Aggiorna lo stato corrente del [CFileDialog](../../mfc/reference/cfiledialog-class.md) in base ai valori archiviati nel `m_ofn` struttura di dati.  
  
```  
void ApplyOFNToShellDialog();
```  
  
### <a name="remarks"></a>Note  
 Nelle versioni di Windows prima di [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)], il membro [OPENFILENAME](https://msdn.microsoft.com/library/ms911906.aspx) struttura di dati è stato costantemente sincronizzata con lo stato del `CFileDialog`. Le modifiche per il [m_ofn](#m_ofn) variabile membro sono state applicate immediatamente lo stato della finestra di dialogo. Inoltre, qualsiasi modifica allo stato della finestra di dialogo per aggiornare immediatamente il `m_ofn` variabile membro.  
  
 In [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)], i valori di `m_ofn` variabile membro e lo stato del `CFileDialog` non sono garantiti da sincronizzare. Questa funzione determina lo stato di `CFileDialog` da aggiornare in modo che corrisponda il `m_ofn` struttura. Windows chiama questa funzione automaticamente durante il [CFileDialog::DoModal](#domodal).  
  
 Per ulteriori informazioni sull'utilizzo di `CFileDialog` classe sotto [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)], vedere [classe CFileDialog](../../mfc/reference/cfiledialog-class.md).  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFileDialog::UpdateOFNFromShellDialog](#updateofnfromshelldialog).  
  
##  <a name="a-namecfiledialoga--cfiledialogcfiledialog"></a><a name="cfiledialog"></a>CFileDialog::CFileDialog  
 Chiamare questa funzione per creare una finestra di dialogo di file Windows standard.  
  
```  
explicit CFileDialog(
    BOOL bOpenFileDialog,  
    LPCTSTR lpszDefExt = NULL,  
    LPCTSTR lpszFileName = NULL,  
    DWORD dwFlags = OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT,  
    LPCTSTR lpszFilter = NULL,  
    CWnd* pParentWnd = NULL,  
    DWORD dwSize = 0,  
    BOOL bVistaStyle = TRUE);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `bOpenFileDialog`  
 Il parametro che specifica il tipo di finestra di dialogo per creare. Impostarlo su `TRUE` per costruire un **Apri** la finestra di dialogo. Impostarlo su `FALSE` per costruire un **Salva con nome** la finestra di dialogo.  
  
 [in] `lpszDefExt`  
 Estensione di file predefinita. Se l'utente non include un'estensione nota (uno che dispone di un'associazione nel computer dell'utente) nella casella Nome file, l'estensione specificata da `lpszDefExt` viene automaticamente aggiunto al nome del file. Se questo parametro è `NULL`, nessuna estensione viene aggiunto.  
  
 [in] `lpszFileName`  
 Il nome file iniziale visualizzato nella casella Nome file. Se `NULL`, viene visualizzato alcun nome file iniziale.  
  
 [in] `dwFlags`  
 Una combinazione di uno o più flag che consente di personalizzare la finestra di dialogo. Per una descrizione di questi flag, vedere il [OPENFILENAME](http://msdn.microsoft.com/library/windows/desktop/ms646839) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]. Se si modifica il `m_ofn.Flags` membro di struttura, utilizzare un operatore OR bit per le modifiche per mantenere intatto il comportamento predefinito.  
  
 [in] `lpszFilter`  
 Una serie di coppie di stringhe che specificano i filtri è possibile applicare al file. Se si specificano i filtri di file, verranno visualizzati solo i file che soddisfano i criteri di filtro nell'elenco di file. Vedere la sezione Osservazioni per ulteriori informazioni su come utilizzare i filtri di file.  
  
 [in] `pParentWnd`  
 Puntatore alla finestra padre o proprietaria della finestra di dialogo file.  
  
 [in] `dwSize`  
 Le dimensioni del `OPENFILENAME` struttura. Questo valore dipende dalla versione del sistema operativo. MFC utilizzato questo parametro per determinare il tipo di finestra di dialogo per creare appropriato (ad esempio, i nuovi [!INCLUDE[Win2kFamily](../../c-runtime-library/includes/win2kfamily_md.md)] finestre di dialogo anziché le finestre di dialogo NT4). Le dimensioni predefinite pari a 0 indica che il codice MFC determinano la dimensione della casella di dialogo appropriate da utilizzare in base alla versione del sistema operativo in cui viene eseguito il programma.  
  
 [in] `bVistaStyle`  
 **Nota** questo parametro è disponibile in Visual Studio 2008 e versioni successive ed è utilizzabile solo se si esegue nella finestra di dialogo Nuovo stile [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] o versione successiva.  
  
 Il parametro che specifica lo stile della finestra di dialogo file. Impostarlo su `TRUE` per utilizzare le nuove finestre stile Vista. In caso contrario, verrà utilizzato il vecchio stile di finestre di dialogo. Vedere la sezione Osservazioni per ulteriori informazioni esecuzione in Vista.  
  
### <a name="remarks"></a>Note  
 Entrambi un **Apri File** o **Salva con nome** la finestra di dialogo viene costruita, a seconda del valore di `bOpenFileDialog`.  
  
 Specifica un'estensione predefinito utilizzando `lpszDefExt` non produca il comportamento che si prevede che, poiché non è mai prevedibile le estensioni dispongono di associazioni di file nel computer dell'utente. Se è necessario maggiore controllo sull'aggiunta di un'estensione predefinita, è possibile derivare la propria classe da `CFileDialog`ed eseguire l'override di `CFileDialog::OnFileNameOK` metodo per eseguire la gestione di estensione.  
  
 Per consentire all'utente di selezionare più file, impostare il `OFN_ALLOWMULTISELECT` flag prima di chiamare [DoModal](#domodal). È necessario fornire il proprio buffer di nome file per archiviare l'elenco restituito di più nomi di file. A tale scopo sostituendo `m_ofn.lpstrFile` con un puntatore a un buffer è stato allocato, dopo la costruzione di [CFileDialog](../../mfc/reference/cfiledialog-class.md), ma prima della chiamata `DoModal`. Inoltre, è necessario impostare `m_ofn.nMaxFile` con il numero di caratteri nel buffer a cui puntata `m_ofn.lpstrFile`. Se si imposta il numero massimo di file da selezionare per `n`, la dimensione del buffer necessarie `n`*(_MAX_PATH + 1) + 1. Ad esempio:  
  
 [!code-cpp[NVC_MFCFiles&#23;](../../atl-mfc-shared/reference/codesnippet/cpp/cfiledialog-class_1.cpp)]  
  
 Per consentire all'utente di ridimensionare la finestra di dialogo di tipo Esplora risorse utilizzando il mouse o tastiera, impostare il `OFN_ENABLESIZING` flag. L'impostazione di questo flag è necessaria solo se si fornisce una routine di hook o un modello personalizzato. Il flag funziona solo con la finestra di dialogo di tipo Esplora risorse; finestre di dialogo di vecchio stile non possono essere ridimensionate.  
  
 Il `lpszFilter` parametro viene utilizzato per determinare il tipo di nome file, un file deve avere per essere visualizzato nell'elenco di file. La prima stringa nella coppia stringa descrive il filtro. la seconda stringa indica l'estensione del nome file da utilizzare. È possibile specificare più estensioni utilizzando un punto e virgola (il carattere ';') come delimitatore. La stringa termina con due ' |' caratteri, seguito da un `NULL` caratteri. È inoltre possibile utilizzare un [CString](../../atl-mfc-shared/using-cstring.md) oggetto per questo parametro.  
  
 Ad esempio, [!INCLUDE[ofprexcel](../../mfc/reference/includes/ofprexcel_md.md)] consente agli utenti di aprire i file con estensioni xlc (grafico) o xls (foglio di lavoro), tra gli altri. Il filtro per Excel può essere scritta come:  
  
 [!code-cpp[NVC_MFCFiles&#24;](../../atl-mfc-shared/reference/codesnippet/cpp/cfiledialog-class_2.cpp)]  
  
 Tuttavia, se si prevede di utilizzare questa stringa direttamente aggiornare il `OPENFILENAME` struttura, è necessario delimitare le stringhe con il carattere null, '\0', anziché le barre verticali ('| ').  
  
 Il `bVistaStyle` parametro è applicabile solo quando si esegue in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]. Nelle versioni precedenti di Windows, questo parametro viene ignorato. Se `bVistaStyle` è impostato su `TRUE`, quando si compila un programma con [!INCLUDE[vs_orcas_long](../../atl/reference/includes/vs_orcas_long_md.md)] o versioni successive, il nuovo stile Vista **finestra di dialogo File** verrà utilizzato. In caso contrario, lo stile MFC precedente **finestra di dialogo File** verrà utilizzato.  
  
 Finestra di dialogo non sono supportati nelle finestre di dialogo in base alle`bVistaStyle`  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFileDialog::DoModal](#domodal).  
  
##  <a name="a-namedomodala--cfiledialogdomodal"></a><a name="domodal"></a>CFileDialog::DoModal  
 Chiamare questa funzione per visualizzare la finestra di dialogo file comune Windows e consentire all'utente di visualizzare file e directory e immettere un nome di file.  
  
```  
virtual INT_PTR DoModal();
```  
  
### <a name="return-value"></a>Valore restituito  
 **IDOK** o **IDCANCEL**. Se **IDCANCEL** viene restituito, chiamare Windows [CommDlgExtendedError](http://msdn.microsoft.com/library/windows/desktop/ms646916) funzione per determinare se si è verificato un errore.  
  
 **IDOK** e **IDCANCEL** sono le costanti che indicano se l'utente ha selezionato il pulsante OK o Annulla.  
  
### <a name="remarks"></a>Note  
 Se si desidera inizializzare le varie opzioni della finestra di dialogo file impostando i membri di **m_ofn** struttura, è consigliabile farlo prima di chiamare `DoModal`, ma dopo che l'oggetto finestra di dialogo.  
  
 Ad esempio, se si desidera consentire all'utente di selezionare più file, impostare il `OFN_ALLOWMULTISELECT` flag prima di chiamare `DoModal`, come illustrato nell'esempio di codice in questo argomento.  
  
 Se l'utente fa clic sui pulsanti OK o Annulla la finestra di dialogo oppure seleziona la chiusura opzione della finestra di dialogo del controllo menu, il controllo viene restituito all'applicazione. È quindi possibile chiamare altre funzioni membro per recuperare le impostazioni o informazioni di input dell'utente nella finestra di dialogo.  
  
 `DoModal`è una funzione virtuale viene sottoposto a override dalla classe `CDialog`.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[25 NVC_MFCFiles](../../atl-mfc-shared/reference/codesnippet/cpp/cfiledialog-class_3.cpp)]  
  
##  <a name="a-nameenableopendropdowna--cfiledialogenableopendropdown"></a><a name="enableopendropdown"></a>CFileDialog::EnableOpenDropDown  
 Consente a un elenco di riepilogo a discesa all'apertura o salvataggio pulsante nella finestra di dialogo.  
  
```  
HRESULT EnableOpenDropDown(DWORD dwIDCtl);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 ID dell'elenco di riepilogo a discesa.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameendvisualgroupa--cfiledialogendvisualgroup"></a><a name="endvisualgroup"></a>CFileDialog::EndVisualGroup  
 Arresta l'aggiunta di elementi da raggruppare visivamente nella finestra di dialogo.  
  
```  
HRESULT EndVisualGroup();
```  
  
### <a name="return-value"></a>Valore restituito  
 Restituisce S_OK se ha esito positivo. un valore di errore in caso contrario.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetcheckbuttonstatea--cfiledialoggetcheckbuttonstate"></a><a name="getcheckbuttonstate"></a>CFileDialog::GetCheckButtonState  
 Recupera lo stato corrente di un pulsante di controllo (casella di controllo) nella finestra di dialogo.  
  
```  
HRESULT GetCheckButtonState(
    DWORD dwIDCtl,  
    BOOL& bChecked);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID della casella di controllo.  
  
 `bChecked`  
 Lo stato della casella di controllo. `TRUE`indica selezionati; `FALSE` indica deselezionata.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetcontrolitemstatea--cfiledialoggetcontrolitemstate"></a><a name="getcontrolitemstate"></a>CFileDialog::GetControlItemState  
 Recupera lo stato corrente di un elemento in un controllo contenitore trovato nella finestra di dialogo.  
  
```  
HRESULT GetControlItemState(
    DWORD dwIDCtl,  
    DWORD dwIDItem,  
    CDCONTROLSTATEF& dwState);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID del controllo contenitore.  
  
 `dwIDItem`  
 L'ID dell'elemento.  
  
 `dwState`  
 Un riferimento a una variabile che riceve uno dei più valori dell'enumerazione CDCONTROLSTATE che indica lo stato corrente del controllo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetcontrolstatea--cfiledialoggetcontrolstate"></a><a name="getcontrolstate"></a>CFileDialog::GetControlState  
 Recupera l'impostazione di visibilità corrente e gli stati di un determinato controllo abilitato.  
  
```  
HRESULT GetControlState(
    DWORD dwIDCtl,  
    CDCONTROLSTATEF& dwState);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID del controllo.  
  
 `dwState`  
 Un riferimento a una variabile che riceve uno o più valori dell'enumerazione CDCONTROLSTATE che indica lo stato corrente del controllo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegeteditboxtexta--cfiledialoggeteditboxtext"></a><a name="geteditboxtext"></a>CFileDialog::GetEditBoxText  
 Recupera il testo corrente in un controllo casella di modifica.  
  
```  
HRESULT GetEditBoxText(
    DWORD dwIDCtl,  
    CString& strText);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID della casella di modifica.  
  
 `strText`  
 Valore del testo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetfileexta--cfiledialoggetfileext"></a><a name="getfileext"></a>CFileDialog::GetFileExt  
 Chiamare questa funzione per recuperare l'estensione del nome file immesso nella finestra di dialogo.  
  
```  
CString GetFileExt() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 L'estensione del nome file.  
  
### <a name="remarks"></a>Note  
 Ad esempio, se il nome del file immesso dati. TXT, `GetFileExt` restituisce "TXT".  
  
 Se `m_ofn.Flags` ha il `OFN_ALLOWMULTISELECT` flag impostato, questa stringa contiene una sequenza di stringhe con terminazione null, con la stringa prima di essere il percorso della directory del gruppo di file selezionato, seguita dai nomi di tutti i file selezionati dall'utente. Per recuperare percorsi di file, utilizzare il [GetStartPosition](#getstartposition) e [GetNextPathName](#getnextpathname) funzioni membro.  
  
##  <a name="a-namegetfilenamea--cfiledialoggetfilename"></a><a name="getfilename"></a>CFileDialog::GetFileName  
 Chiamare questa funzione per recuperare il nome del nome file immesso nella finestra di dialogo.  
  
```  
CString GetFileName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Nome del file.  
  
### <a name="remarks"></a>Note  
 Il nome del file include sia il prefisso e l'estensione. Ad esempio, `GetFileName` restituirà "TEXT. DAT"per il file C:\FILES\TEXT.DAT.  
  
 Se `m_ofn.Flags` ha il `OFN_ALLOWMULTISELECT` flag impostato, è necessario chiamare [GetStartPosition](#getstartposition) e [GetNextPathName](#getnextpathname) per recuperare un percorso di file.  
  
##  <a name="a-namegetfiletitlea--cfiledialoggetfiletitle"></a><a name="getfiletitle"></a>CFileDialog::GetFileTitle  
 Chiamare questa funzione per recuperare il titolo del file immesso nella finestra di dialogo.  
  
```  
CString GetFileTitle() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il titolo del file.  
  
### <a name="remarks"></a>Note  
 Il titolo del file include solo il prefisso, senza il percorso o l'estensione. Ad esempio, `GetFileTitle` restituirà "TEXT" per il file C:\FILES\TEXT.DAT.  
  
 Se `m_ofn.Flags` ha il `OFN_ALLOWMULTISELECT` flag impostato, questa stringa contiene una sequenza di stringhe con terminazione null, con la stringa prima di essere il percorso della directory del gruppo di file selezionato, seguita dai nomi di tutti i file selezionati dall'utente. Per questo motivo, utilizzare il [GetStartPosition](#getstartposition) e [GetNextPathName](#getnextpathname) le funzioni membro per recuperare il nome del file successivo nell'elenco.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFileDialog::DoModal](#domodal).  
  
##  <a name="a-namegetfolderpatha--cfiledialoggetfolderpath"></a><a name="getfolderpath"></a>CFileDialog::GetFolderPath  
 Chiamare questa funzione membro per recuperare il percorso della cartella attualmente aperta o directory per una tipo Esplora risorse aprire o salvare come comune finestra di dialogo.  
  
```  
CString GetFolderPath() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto [CString](../../atl-mfc-shared/reference/cstringt-class.md) oggetto contenente la cartella attualmente aperta o directory.  
  
### <a name="remarks"></a>Note  
 Nella finestra di dialogo deve essere stata creata con il **OFN_EXPLORER** stile; in caso contrario, il metodo avrà esito negativo con un'asserzione.  
  
 È possibile chiamare questo metodo solo quando viene visualizzata la finestra di dialogo. Dopo aver chiuso la finestra di dialogo, questa funzione non funzionerà più e il metodo avrà esito negativo con un'asserzione.  
  
##  <a name="a-namegetifiledialogcustomizea--cfiledialoggetifiledialogcustomize"></a><a name="getifiledialogcustomize"></a>CFileDialog::GetIFileDialogCustomize  
 Recupera un puntatore all'oggetto COM interno per un determinato [CFileDialog](../../mfc/reference/cfiledialog-class.md).  
  
```  
IFileDialogCustomize* GetIFileDialogCustomize();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il puntatore all'oggetto COM interno per il `CFileDialog`. È responsabilità dell'utente per rilasciare il puntatore in modo appropriato.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione solo in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] con un oggetto che ha `bVistaStyle` impostato su `true`. Se si utilizza questa funzione quando `bVistaStyle` è `false`, verrà restituito `NULL` in modalità di rilascio e genera un'asserzione in modalità debug.  
  
 Per ulteriori informazioni sui `IFileDialogCustomize` interfaccia, vedere [IFileDialogCustomize](http://msdn.microsoft.com/library/windows/desktop/bb775912).  
  
### <a name="example"></a>Esempio  
 Questo esempio recupera l'oggetto COM interno. Per eseguire questo esempio di codice, è necessario compilarlo in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)].  
  
 [!code-cpp[NVC_MFC_CFileDialog n.&4;](../../mfc/reference/codesnippet/cpp/cfiledialog-class_4.cpp)]  
  
##  <a name="a-namegetifileopendialoga--cfiledialoggetifileopendialog"></a><a name="getifileopendialog"></a>CFileDialog::GetIFileOpenDialog  
 Recupera un puntatore all'oggetto COM interno per un determinato `CFileDialog`.  
  
```  
IFileOpenDialog* GetIFileOpenDialog();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il puntatore all'oggetto COM interno per il `CFileDialog`. È responsabilità dell'utente per rilasciare il puntatore in modo appropriato.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione solo in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] con un oggetto che ha `bVistaStyle` impostato su `true`. Questa funzione restituisce `NULL` se il `CFileDialog` non è un **aprire** la finestra di dialogo o se `bVistaStyle` è impostato su `false`. In questo caso finale, la funzione restituisce solo `NULL` in modalità di rilascio - in modalità di debug verrà generata un'asserzione.  
  
 Per ulteriori informazioni sui `IFileOpenDialog` interfaccia, vedere [IFileOpenDialog](http://msdn.microsoft.com/library/windows/desktop/bb775834).  
  
### <a name="example"></a>Esempio  
 Questo esempio recupera l'oggetto COM interno. Per eseguire questo codice, è necessario compilarlo in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)].  
  
 [!code-cpp[NVC_MFC_CFileDialog n.&2;](../../mfc/reference/codesnippet/cpp/cfiledialog-class_5.cpp)]  
  
##  <a name="a-namegetifilesavedialoga--cfiledialoggetifilesavedialog"></a><a name="getifilesavedialog"></a>CFileDialog::GetIFileSaveDialog  
 Recupera un puntatore all'oggetto COM interno per un determinato `CFileDialog`.  
  
```  
IFileSaveDialog* GetIFileSaveDialog();
```  
  
### <a name="return-value"></a>Valore restituito  
 Il puntatore all'oggetto COM interno per il `CFileDialog`. È responsabilità dell'utente per rilasciare il puntatore in modo appropriato.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa funzione solo in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] con un oggetto che ha `bVistaStyle` impostato su `true`. Questa funzione restituirà `NULL` se il `CFileDialog` non è un **salvare** la finestra di dialogo o se `bVistaStyle` è impostato su `false`. In questo caso finale, la funzione restituisce solo `NULL` in modalità di rilascio - in modalità di debug verrà generata un'asserzione.  
  
 Per ulteriori informazioni sui `IFileSaveDialog` interfaccia, vedere [IFileSaveDialog](http://msdn.microsoft.com/library/windows/desktop/bb775688).  
  
### <a name="example"></a>Esempio  
 Questo esempio recupera l'oggetto COM interno. Per eseguire questo esempio di codice, è necessario compilarlo in [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)].  
  
 [!code-cpp[NVC_MFC_CFileDialog n.&3;](../../mfc/reference/codesnippet/cpp/cfiledialog-class_6.cpp)]  
  
##  <a name="a-namegetnextpathnamea--cfiledialoggetnextpathname"></a><a name="getnextpathname"></a>CFileDialog::GetNextPathName  
 Chiamare questa funzione per recuperare il nome del file successivo dal gruppo selezionato nella finestra di dialogo.  
  
```  
CString GetNextPathName(POSITION& pos) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `pos`  
 Un riferimento a un **posizione** valore restituito da una precedente `GetNextPathName` o `GetStartPosition` chiamata di funzione. **NULL** se è stata raggiunta la fine dell'elenco.  
  
### <a name="return-value"></a>Valore restituito  
 Percorso completo del file.  
  
### <a name="remarks"></a>Note  
 Il percorso del nome file includa il titolo del file e il percorso di directory completa. Ad esempio, `GetNextPathName` restituirà "C:\FILES\TEXT. DAT"per il file C:\FILES\TEXT.DAT. È possibile utilizzare `GetNextPathName` in un ciclo di iterazione in avanti, se si stabilisce la posizione iniziale con una chiamata a `GetStartPosition`.  
  
 Se la selezione è costituita da un solo file, verrà restituito il nome del file.  
  
##  <a name="a-namegetofna--cfiledialoggetofn"></a><a name="getofn"></a>CFileDialog::GetOFN  
 Recupera l'oggetto associato **OPENFILENAME** struttura.  
  
```  
const OPENFILENAME& GetOFN() const;  
  
OPENFILENAME& GetOFN();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un [OPENFILENAME](http://msdn.microsoft.com/library/windows/desktop/ms646839) struttura.  
  
### <a name="remarks"></a>Note  
 Utilizzare la seconda versione di questa funzione per inizializzare l'aspetto di un **Apri File** o **Salva con nome** nella finestra di dialogo dopo la creazione, ma prima che venga visualizzato con il `DoModal` funzione membro. Ad esempio, è possibile impostare il **lpstrTitle** membro del **m_ofn** la didascalia si desidera disporre la finestra di dialogo.  
  
##  <a name="a-namegetpathnamea--cfiledialoggetpathname"></a><a name="getpathname"></a>CFileDialog::GetPathName  
 Chiamare questa funzione per recuperare il percorso completo del file immesso nella finestra di dialogo.  
  
```  
CString GetPathName() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Percorso completo del file.  
  
### <a name="remarks"></a>Note  
 Il percorso del nome file includa il titolo del file e il percorso di directory completa. Ad esempio, `GetPathName` restituirà "C:\FILES\TEXT. DAT"per il file C:\FILES\TEXT.DAT.  
  
 Se `m_ofn.Flags` ha il `OFN_ALLOWMULTISELECT` flag impostato, questa stringa contiene una sequenza di teminated null le stringhe, con la stringa prima il percorso della directory del gruppo di file selezionato, seguita dai nomi di tutti i file selezionati dall'utente. Per questo motivo, utilizzare il [GetStartPosition](#getstartposition) e [GetNextPathName](#getnextpathname) le funzioni membro per recuperare il nome del file successivo nell'elenco.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per [CFileDialog::DoModal](#domodal).  
  
##  <a name="a-namegetreadonlyprefa--cfiledialoggetreadonlypref"></a><a name="getreadonlypref"></a>CFileDialog::GetReadOnlyPref  
 Chiamare questa funzione per determinare se la casella di controllo di sola lettura è stata selezionata nelle finestre di dialogo Windows Apri e Salva con nome di File standard.  
  
```  
BOOL GetReadOnlyPref() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se è selezionata la casella di controllo di sola lettura nella finestra di dialogo; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 È possibile nascondere la casella di controllo di sola lettura impostando il `OFN_HIDEREADONLY` applicare uno stile di `CFileDialog` costruttore.  
  
> [!NOTE]
> [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]stile `CFileDialog` oggetti non supportano questa funzione. Tenta di utilizzare questa funzione su un [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] stile `CFileDialog` genererà [eccezione CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).   
  
##  <a name="a-namegetresulta--cfiledialoggetresult"></a><a name="getresult"></a>CFileDialog::GetResult  
 Recupera la scelta dell'utente che effettua nella finestra di dialogo.  
  
```  
IShellItem* GetResult() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un'istanza di IShellItem che rappresenta la scelta dell'utente.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetresultsa--cfiledialoggetresults"></a><a name="getresults"></a>CFileDialog::GetResults  
 Recupera le scelte dell'utente in una finestra di dialogo che consente la selezione multipla.  
  
```  
IShellItemArray* GetResults() throw();
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un IShellItemArray attraverso il quale gli elementi selezionati nella finestra di dialogo sono accessibile.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetselectedcontrolitema--cfiledialoggetselectedcontrolitem"></a><a name="getselectedcontrolitem"></a>CFileDialog::GetSelectedControlItem  
 Recupera un elemento specifico dal controllo contenitore specificato nella finestra di dialogo.  
  
```  
HRESULT GetSelectedControlItem(
    DWORD dwIDCtl,  
    DWORD& dwIDItem);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID del controllo contenitore.  
  
 `dwIDItem`  
 L'ID dell'elemento selezionato dall'utente nel controllo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namegetstartpositiona--cfiledialoggetstartposition"></a><a name="getstartposition"></a>CFileDialog::GetStartPosition  
 Chiamare questa funzione membro per recuperare la posizione del nome del primo percorso di file nell'elenco, se `m_ofn.Flags` ha il `OFN_ALLOWMULTISELECT` flag impostato.  
  
```  
POSITION GetStartPosition() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Oggetto **posizione** valore che può essere utilizzato per iterazione; **NULL** se l'elenco è vuoto.  
  
##  <a name="a-namehidecontrola--cfiledialoghidecontrol"></a><a name="hidecontrol"></a>CFileDialog::HideControl  
 Chiamare questa funzione membro per nascondere il controllo specificato in un tipo Esplora risorse aprire o salvare come comune finestra di dialogo.  
  
```  
void HideControl(int nID);
```  
  
### <a name="parameters"></a>Parametri  
 `nID`  
 L'ID del controllo da nascondere.  
  
### <a name="remarks"></a>Note  
 Nella finestra di dialogo deve essere stata creata con il **OFN_EXPLORER** stile; in caso contrario, la funzione avrà esito negativo con un'asserzione.  
  
##  <a name="a-nameispickfoldersmodea--cfiledialogispickfoldersmode"></a><a name="ispickfoldersmode"></a>CFileDialog::IsPickFoldersMode  
 Determina se la finestra di dialogo corrente si trova in modalità di selezione cartelle.  
  
```  
BOOL IsPickFoldersMode() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 `TRUE`Se la finestra di dialogo è in modalità di selezione cartelle; in caso contrario `FALSE`.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namemofna--cfiledialogmofn"></a><a name="m_ofn"></a>CFileDialog::m_ofn  
 `m_ofn`è una struttura di tipo `OPENFILENAME`. I dati in questa struttura rappresentano lo stato corrente del `CFileDialog`.  
  
### <a name="remarks"></a>Note  
 Utilizzare questa struttura per inizializzare l'aspetto di un **Apri File** o **Salva con nome** nella finestra di dialogo dopo la creazione, ma prima di visualizzare con il [DoModal](#domodal) metodo. Ad esempio, è possibile impostare il `lpstrTitle` membro di `m_ofn` la didascalia si desidera disporre la finestra di dialogo.  
  
 Con il [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] stile di [CFileDialog](../../mfc/reference/cfiledialog-class.md), `m_ofn` non è garantito in modo che corrisponda sempre lo stato della finestra di dialogo. È sincronizzato con la finestra di dialogo nelle versioni precedenti di Windows. Vedere [CFileDialog::ApplyOFNToShellDialog](#applyofntoshelldialog) e [CFileDialog::UpdateOFNFromShellDialog](#updateofnfromshelldialog) per ulteriori informazioni sulla sincronizzazione di `m_ofn` struttura e il `CFileDialog` stato sotto [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)].  
  
 [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]finestre di dialogo file non supportano alcuni membri e i flag di `CFileDialog`. Di conseguenza, questi non avranno effetto.  
  
 Di seguito è riportato un elenco dei membri che non sono supportati da [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]:  
  
- `lpstrCustomFilter`  
  
- `lpstrInitialDir`  
  
- `lCustData`  
  
- `lpfnHook`  
  
- `lpTemplateName`  
  
 I flag seguenti non sono supportati e pertanto non hanno alcun effetto quando si utilizza il [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] stile di `CFileDialog`:  
  
-   OFN_ENABLEHOOK  
  
-   OFN_ENABLEINCLUDENOTIFY  
  
-   OFN_ENABLETEMPLATE  
  
-   OFN_ENABLETEMPLATEHANDLE  
  
-   OFN_EXPLORER  
  
-   OFN_EXTENSIONDIFFERENT  
  
-   OFN_HIDEREADONLY  
  
-   OFN_LONGNAMES - efficacemente sempre su in[!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]  
  
-   OFN_NOLONGNAMES - off in modo efficace sempre in[!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]  
  
-   OFN_NONETWORKBUTTON - efficacemente sempre su in[!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]  
  
-   OFN_READONLY  
  
-   OFN_SHOWHELP  
  
 Per ulteriori informazioni su questa struttura, vedere il [OPENFILENAME](http://msdn.microsoft.com/library/windows/desktop/ms646839) nella struttura di [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
##  <a name="a-namemakeprominenta--cfiledialogmakeprominent"></a><a name="makeprominent"></a>CFileDialog::MakeProminent  
 Posizioni un controllo nella finestra di dialogo in modo da farlo risaltare rispetto ad altri controlli.  
  
```  
HRESULT MakeProminent(DWORD dwIDCtl);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID del controllo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonbuttonclickeda--cfiledialogonbuttonclicked"></a><a name="onbuttonclicked"></a>CFileDialog::OnButtonClicked  
 Chiamato quando si fa clic sul pulsante.  
  
```  
virtual void OnButtonClicked(DWORD dwIDCtl);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID del pulsante.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameoncheckbuttontoggleda--cfiledialogoncheckbuttontoggled"></a><a name="oncheckbuttontoggled"></a>CFileDialog::OnCheckButtonToggled  
 Chiamato quando la casella di controllo è selezionata o deselezionata.  
  
```  
virtual void OnCheckButtonToggled(
    DWORD dwIDCtl,  
    BOOL bChecked);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID della casella di controllo.  
  
 `bChecked`  
 Selezionata o deselezionata.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameoncontrolactivatinga--cfiledialogoncontrolactivating"></a><a name="oncontrolactivating"></a>CFileDialog::OnControlActivating  
 Chiamato quando viene attivato il controllo.  
  
```  
virtual void OnControlActivating(DWORD dwIDCtl);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID del controllo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonfilenamechangea--cfiledialogonfilenamechange"></a><a name="onfilenamechange"></a>CFileDialog::OnFileNameChange  
 Eseguire l'override di questo metodo se si desidera gestire il `WM_NOTIFY``CDN_SELCHANGE` messaggio.  
  
```  
virtual void OnFileNameChange();
```  
  
### <a name="remarks"></a>Note  
 Il sistema invia il `CDN_SELCHANGE` messaggio quando l'utente seleziona un nuovo file o una cartella nell'elenco dei file il **aprire** o **Salva con nome** la finestra di dialogo. Eseguire l'override di questo metodo se si desidera eseguire azioni in risposta al messaggio.  
  
 Il sistema invia il messaggio solo se la finestra di dialogo è stata creata con il flag OFN_EXPLORER attivato. Per ulteriori informazioni sulla notifica, vedere [CDN_SELCHANGE](http://msdn.microsoft.com/library/windows/desktop/ms646865). Per informazioni sul flag OFN_EXPLORER, vedere il [OPENFILENAME](http://msdn.microsoft.com/library/windows/desktop/ms646839) struttura e [Apri e Salva come finestre di dialogo](http://msdn.microsoft.com/library/windows/desktop/ms646960).  
  
##  <a name="a-nameonfilenameoka--cfiledialogonfilenameok"></a><a name="onfilenameok"></a>CFileDialog::OnFileNameOK  
 Eseguire l'override di questa funzione solo se si desidera fornire la convalida personalizzata dei nomi di file che vengono immessi in una finestra di dialogo file comune.  
  
```  
virtual BOOL OnFileNameOK();
```  
  
### <a name="return-value"></a>Valore restituito  
 1 se il nome del file non è un nome file valido; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 Questa funzione consente di rifiutare un nome di file per qualsiasi motivo specifico dell'applicazione. In genere, non è necessario utilizzare questa funzione perché il framework fornisce la convalida predefinita dei nomi di file e viene visualizzato un messaggio se viene immesso un nome di file non valido.  
  
 Se viene restituito 1, la finestra di dialogo rimarrà visualizzata all'utente di immettere un nome diverso. La procedura di finestra di dialogo si chiude la finestra di dialogo se il valore restituito è 0. Altri diverso da zero valori restituiti sono attualmente riservati e non devono essere utilizzati.  
  
##  <a name="a-nameonfolderchangea--cfiledialogonfolderchange"></a><a name="onfolderchange"></a>CFileDialog::OnFolderChange  
 Eseguire l'override di questa funzione per gestire il **WM_NOTIFYCDN_FOLDERCHANGE** messaggio.  
  
```  
virtual void OnFolderChange();
```  
  
### <a name="remarks"></a>Note  
 Apertura di una nuova cartella nella finestra di dialogo Apri o Salva con nome, viene inviato il messaggio di notifica.  
  
 Notifica viene inviata solo se la finestra di dialogo è stata creata con lo stile OFN_EXPLORER. Per ulteriori informazioni sulla notifica, vedere [CDN_FOLDERCHANGE](http://msdn.microsoft.com/library/windows/desktop/ms646859). Per informazioni sullo stile OFN_EXPLORER, vedere il [OPENFILENAME](http://msdn.microsoft.com/library/windows/desktop/ms646839) struttura e [Apri e Salva come finestre di dialogo](http://msdn.microsoft.com/library/windows/desktop/ms646960).  
  
##  <a name="a-nameoninitdonea--cfiledialogoninitdone"></a><a name="oninitdone"></a>CFileDialog::OnInitDone  
 Eseguire l'override di questa funzione per gestire il `WM_NOTIFY``CDN_INITDONE` messaggio.  
  
```  
virtual void OnInitDone();
```  
  
### <a name="remarks"></a>Note  
 Il sistema invia il messaggio di notifica quando il sistema ha terminato la disposizione dei controlli nel **aprire** o **Salva con nome** la finestra di dialogo per creare spazio per i controlli della finestra di dialogo figlio.  
  
 Il sistema invia solo se la finestra di dialogo è stata creata con lo stile OFN_EXPLORER. Per ulteriori informazioni sulla notifica, vedere [CDN_INITDONE](http://msdn.microsoft.com/library/windows/desktop/ms646863). Per informazioni sullo stile OFN_EXPLORER, vedere il [OPENFILENAME](http://msdn.microsoft.com/library/windows/desktop/ms646839) struttura e [Apri e Salva come finestre di dialogo](http://msdn.microsoft.com/library/windows/desktop/ms646960).  
  
> [!NOTE]
> [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]finestre di dialogo file non supportano questa funzione. Tenta di utilizzare questa funzione su un [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] finestra di dialogo file stile genererà [eccezione CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md). 
  
##  <a name="a-nameonitemselecteda--cfiledialogonitemselected"></a><a name="onitemselected"></a>CFileDialog::OnItemSelected  
 Chiamato quando viene selezionato l'elemento contenitore.  
  
```  
virtual void OnItemSelected(
    DWORD dwIDCtl,  
    DWORD dwIDItem);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID del controllo contenitore.  
  
 `dwIDItem`  
 L'ID dell'elemento.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameonlbselchangednotifya--cfiledialogonlbselchangednotify"></a><a name="onlbselchangednotify"></a>CFileDialog::OnLBSelChangedNotify  
 Questa funzione viene chiamata ogni volta che la selezione corrente in una casella di riepilogo sta per essere modificata.  
  
```  
virtual void OnLBSelChangedNotify(
    UINT nIDBox,  
    UINT iCurSel,  
    UINT nCode);
```  
  
### <a name="parameters"></a>Parametri  
 *nIDBox*  
 ID della casella di riepilogo o casella combinata in cui si è verificata la selezione.  
  
 `iCurSel`  
 L'indice della selezione corrente.  
  
 `nCode`  
 Il codice di notifica del controllo. Questo parametro deve essere uno dei valori seguenti:  
  
- **CD_LBSELCHANGE** specifica `iCurSel` è l'elemento selezionato in una casella di riepilogo a selezione singola.  
  
- **CD_LBSELSUB** specifica che `iCurSel` non è più selezionato in un elenco di selezione multipla.  
  
- **CD_LBSELADD** specifica che `iCurSel` sia selezionato in un elenco di selezione multipla.  
  
- **CD_LBSELNOITEMS** specifica che è presente alcuna selezione in un elenco di selezione multipla.  
  
### <a name="remarks"></a>Note  
 Eseguire l'override di questa funzione per la gestione personalizzata delle modifiche di selezione nella casella di riepilogo. Ad esempio, è possibile utilizzare questa funzione per visualizzare i diritti di accesso o data-last-modified di ciascun file l'utente seleziona.  
  
##  <a name="a-nameonshareviolationa--cfiledialogonshareviolation"></a><a name="onshareviolation"></a>CFileDialog::OnShareViolation  
 Eseguire l'override di questa funzione per la gestione personalizzata delle violazioni di condivisione.  
  
```  
virtual UINT OnShareViolation(LPCTSTR lpszPathName);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszPathName`  
 Il percorso del file in cui si è verificata la violazione di condivisione.  
  
### <a name="return-value"></a>Valore restituito  
 Uno dei valori seguenti:  
  
- **OFN_SHAREFALLTHROUGH** viene restituito il nome del file nella finestra di dialogo.  
  
- **OFN_SHARENOWARN** è necessario intraprendere alcuna azione ulteriore.  
  
- **OFN_SHAREWARN** l'utente riceve il messaggio di avviso standard per questo errore.  
  
### <a name="remarks"></a>Note  
 In genere, non è necessario utilizzare questa funzione perché il framework fornisce il valore predefinito il controllo delle violazioni di condivisione e visualizza una finestra di messaggio se si verifica una violazione di condivisione.  
  
 Se si desidera disabilitare il controllo delle violazioni di condivisione, utilizzare l'operatore OR bit per bit per combinare il flag **OFN_SHAREAWARE** con `m_ofn.Flags`.  
  
##  <a name="a-nameontypechangea--cfiledialogontypechange"></a><a name="ontypechange"></a>CFileDialog::OnTypeChange  
 Eseguire l'override di questa funzione per gestire il **WM_NOTIFYCDN_TYPECHANGE** messaggio.  
  
```  
virtual void OnTypeChange();
```  
  
### <a name="remarks"></a>Note  
 Il messaggio di notifica viene inviato quando l'utente seleziona un nuovo tipo di file dall'elenco dei tipi di file Apri o Salva con nome.  
  
 Notifica viene inviata solo se la finestra di dialogo è stata creata con lo stile OFN_EXPLORER. Per ulteriori informazioni sulla notifica, vedere [CDN_TYPECHANGE](http://msdn.microsoft.com/library/windows/desktop/ms646868). Per informazioni sullo stile OFN_EXPLORER, vedere il [OPENFILENAME](http://msdn.microsoft.com/library/windows/desktop/ms646839) struttura e [Apri e Salva come finestre di dialogo](http://msdn.microsoft.com/library/windows/desktop/ms646960).  
  
##  <a name="a-nameremovecontrolitema--cfiledialogremovecontrolitem"></a><a name="removecontrolitem"></a>CFileDialog::RemoveControlItem  
 Rimuove un elemento da un controllo contenitore nella finestra di dialogo.  
  
```  
HRESULT RemoveControlItem(
    DWORD dwIDCtl,  
    DWORD dwIDItem);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID del controllo contenitore per l'elemento da rimuovere.  
  
 `dwIDItem`  
 L'ID dell'elemento.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetcheckbuttonstatea--cfiledialogsetcheckbuttonstate"></a><a name="setcheckbuttonstate"></a>CFileDialog::SetCheckButtonState  
 Imposta lo stato corrente di un pulsante di controllo (casella di controllo) nella finestra di dialogo.  
  
```  
HRESULT SetCheckButtonState(
    DWORD dwIDCtl,  
    BOOL bChecked);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID della casella di controllo.  
  
 `bChecked`  
 Lo stato della casella di controllo. `TRUE`indica selezionati; `FALSE` indica Unchecked.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetcontrolitemstatea--cfiledialogsetcontrolitemstate"></a><a name="setcontrolitemstate"></a>CFileDialog::SetControlItemState  
 Imposta lo stato corrente di un elemento in un controllo contenitore trovato nella finestra di dialogo.  
  
```  
HRESULT SetControlItemState(
    DWORD dwIDCtl,  
    DWORD dwIDItem,  
    CDCONTROLSTATEF dwState);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID del controllo contenitore.  
  
 `dwIDItem`  
 L'ID dell'elemento.  
  
 `dwState`  
 Uno o più valori dell'enumerazione CDCONTROLSTATE che indicano il nuovo stato del controllo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetcontrolitemtexta--cfiledialogsetcontrolitemtext"></a><a name="setcontrolitemtext"></a>CFileDialog::SetControlItemText  
 Imposta il testo di un elemento di controllo. Ad esempio, il testo che accompagna un pulsante di opzione o un elemento in un menu.  
  
```  
HRESULT SetControlItemText(
    DWORD dwIDCtl,  
    DWORD dwIDItem,  
    const CString& strLabel);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID del controllo contenitore.  
  
 `dwIDItem`  
 L'ID dell'elemento.  
  
 `strLabel`  
 Testo dell'elemento.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetcontrollabela--cfiledialogsetcontrollabel"></a><a name="setcontrollabel"></a>CFileDialog::SetControlLabel  
 Imposta il testo associato a un controllo, ad esempio testo o un'etichetta della casella di modifica.  
  
```  
HRESULT SetControlLabel(
    DWORD dwIDCtl,  
    const CString& strLabel);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID del controllo.  
  
 `strLabel`  
 Il nome del controllo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetcontrolstatea--cfiledialogsetcontrolstate"></a><a name="setcontrolstate"></a>CFileDialog::SetControlState  
 Imposta la visibilità corrente e gli stati di un determinato controllo abilitato.  
  
```  
HRESULT SetControlState(
    DWORD dwIDCtl,  
    CDCONTROLSTATEF dwState);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID del controllo.  
  
 `dwState`  
 Uno o più valori dell'enumerazione CDCONTROLSTATE che indicano lo stato corrente del controllo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetcontroltexta--cfiledialogsetcontroltext"></a><a name="setcontroltext"></a>CFileDialog::SetControlText  
 Chiamare questo metodo per impostare il testo per il controllo specificato in uno stile Esplora **aprire** o **Salva con nome** la finestra di dialogo.  
  
```  
void SetControlText(
    int nID,  
    LPCSTR lpsz);

 
void SetControlText(
    int nID,  
    const wchar_t *lpsz);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nID`  
 L'ID del controllo per il quale impostare il testo.  
  
 [in] `lpsz`  
 Un puntatore a una stringa che contiene il testo da impostare per il controllo.  
  
### <a name="remarks"></a>Note  
 Entrambe le versioni di questa funzione sono valide per le applicazioni che utilizzano Unicode. Tuttavia, è valida per le applicazioni che utilizzano solo la versione con il tipo LPCSTR [!INCLUDE[vcpransi](../../atl-mfc-shared/reference/includes/vcpransi_md.md)].  
  
 Per utilizzare questo metodo, è necessario creare la finestra di dialogo con lo stile OFN_EXPLORER. In caso contrario, la funzione avrà esito negativo con un'asserzione.  
  
##  <a name="a-namesetdefexta--cfiledialogsetdefext"></a><a name="setdefext"></a>CFileDialog::SetDefExt  
 Chiamare questa funzione per impostare l'estensione di file predefinito per una tipo Esplora risorse aprire o salvare come comune finestra di dialogo.  
  
```  
void SetDefExt(LPCSTR lpsz);
```  
  
### <a name="parameters"></a>Parametri  
 `lpsz`  
 Un puntatore a una stringa contenente l'estensione predefinita da utilizzare per l'oggetto finestra di dialogo. Questa stringa non deve contenere un punto (.).  
  
### <a name="remarks"></a>Note  
 Nella finestra di dialogo deve essere stata creata con il **OFN_EXPLORER** stile; in caso contrario, la funzione avrà esito negativo con un'asserzione.  
  
##  <a name="a-nameseteditboxtexta--cfiledialogseteditboxtext"></a><a name="seteditboxtext"></a>CFileDialog::SetEditBoxText  
 Imposta il testo corrente in un controllo casella di modifica.  
  
```  
HRESULT SetEditBoxText(
    DWORD dwIDCtl,  
    const CString& strText);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID della casella di modifica.  
  
 `strText`  
 Valore del testo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetpropertiesa--cfiledialogsetproperties"></a><a name="setproperties"></a>CFileDialog::SetProperties  
 Fornisce un archivio delle proprietà che definisce i valori predefiniti da usare per l'elemento salvato.  
  
```  
BOOL SetProperties(LPCWSTR lpszPropList);
```  
  
### <a name="parameters"></a>Parametri  
 `lpszPropList`  
 Elenco di proprietà predefinite separate da ";". Per un elenco dei flag, vedere il `Flags` sezione [OPENFILENAME](http://msdn.microsoft.com/en-us/8cecfd45-f7c1-4f8d-81a0-4e7fecc3b104).  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesetselectedcontrolitema--cfiledialogsetselectedcontrolitem"></a><a name="setselectedcontrolitem"></a>CFileDialog::SetSelectedControlItem  
 Imposta lo stato selezionato di un particolare elemento in un gruppo di pulsanti di opzione o una casella combinata trovato nella finestra di dialogo.  
  
```  
HRESULT SetSelectedControlItem(
    DWORD dwIDCtl,  
    DWORD dwIDItem);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID del controllo contenitore.  
  
 `dwIDItem`  
 L'ID dell'elemento selezionato dall'utente nel controllo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesettemplatea--cfiledialogsettemplate"></a><a name="settemplate"></a>CFileDialog::SetTemplate  
 Imposta il modello di finestra di dialogo per la [CFileDialog](../../mfc/reference/cfiledialog-class.md) oggetto.  
  
```  
void SetTemplate(
    UINT nWin3ID,  
    UINT nWin4ID);

 
void SetTemplate(
    LPCTSTR lpWin3ID,  
    LPCTSTR lpWin4ID);
```  
  
### <a name="parameters"></a>Parametri  
 [in] `nWin3ID`  
 Contiene il numero ID della risorsa di modello per il non-Explorer `CFileDialog` oggetto. Questo modello viene utilizzato solo in Windows NT 3.51 o quando lo stile OFN_EXPLORER non è presente.  
  
 [in] `nWin4ID`  
 Contiene il numero ID della risorsa di modello per Esplora risorse di `CFileDialog` oggetto. Questo modello viene utilizzato solo in [!INCLUDE[WinNt4Family](../../mfc/reference/includes/winnt4family_md.md)] e versioni successive, Windows 95 e versioni successive, o quando lo stile OFN_EXPLORER è presente.  
  
 [in] `lpWin3ID`  
 Contiene il nome della risorsa di modello per il non-Explorer `CFileDialog` oggetto. Questo modello viene utilizzato solo in Windows NT 3.51 o quando lo stile OFN_EXPLORER non è presente.  
  
 [in] `lpWin4ID`  
 Contiene il nome della risorsa modello di Explorer `CFileDialog` oggetto. Questo modello viene utilizzato solo in [!INCLUDE[WinNt4Family](../../mfc/reference/includes/winnt4family_md.md)] e versioni successive, Windows 95 e versioni successive, o quando lo stile OFN_EXPLORER è presente.  
  
### <a name="remarks"></a>Note  
 Il sistema utilizzerà solo uno dei modelli specificati. Il sistema determina il modello da utilizzare in base alla presenza dello stile OFN_EXPLORER e il sistema operativo che è in esecuzione l'applicazione. Specificando Explorer non sia un modello di tipo Esplora risorse, è facile per il supporto di Windows NT 3.51, [!INCLUDE[WinNt4Family](../../mfc/reference/includes/winnt4family_md.md)] e versioni successive e Windows 95 e versioni successive.  
  
> [!NOTE]
> [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)]finestre di dialogo file di stile non supportano questa funzione. Tenta di utilizzare questa funzione su un [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)] la finestra di dialogo file stile genererà [eccezione CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md). Un'alternativa consiste nell'utilizzare una finestra di dialogo personalizzata. Per ulteriori informazioni sull'utilizzo di un oggetto personalizzato `CFileDialog`, vedere [IFileDialogCustomize](http://msdn.microsoft.com/library/windows/desktop/bb775912).  
  
##  <a name="a-namestartvisualgroupa--cfiledialogstartvisualgroup"></a><a name="startvisualgroup"></a>CFileDialog::StartVisualGroup  
 Dichiara un gruppo visual nella finestra di dialogo. Le chiamate successive a qualsiasi metodo "add" aggiungono tali elementi a questo gruppo.  
  
```  
HRESULT StartVisualGroup(
    DWORD dwIDCtl,  
    const CString& strLabel);
```  
  
### <a name="parameters"></a>Parametri  
 `dwIDCtl`  
 L'ID del gruppo visual.  
  
 `strLabel`  
 Il nome del gruppo.  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-nameupdateofnfromshelldialoga--cfiledialogupdateofnfromshelldialog"></a><a name="updateofnfromshelldialog"></a>CFileDialog::UpdateOFNFromShellDialog  
 Gli aggiornamenti di `m_ofn` struttura dei dati di [CFileDialog](../../mfc/reference/cfiledialog-class.md) in base allo stato corrente dell'oggetto interno.  
  
```  
void UpdateOFNFromShellDialog();
```  
  
### <a name="remarks"></a>Note  
 Nelle versioni di Windows prima di [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)], il membro [OPENFILENAME](https://msdn.microsoft.com/library/ms911906.aspx) struttura di dati è stato costantemente sincronizzata con lo stato del `CFileDialog`. Le modifiche per il [m_ofn](#m_ofn) variabile membro influenzate direttamente lo stato della finestra di dialogo. Inoltre, qualsiasi modifica allo stato della finestra di dialogo aggiornata immediatamente la variabile membro m_ofn.  
  
 In [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)], `m_ofn` struttura di dati non viene aggiornata automaticamente. Per garantire l'accuratezza dei dati di `m_ofn` variabile membro, è necessario chiamare il `UpdateOFNFromShellDialog` funzione prima di accedere ai dati. Windows chiama questa funzione automaticamente durante l'elaborazione di [IFileDialog::OnFileOK](http://msdn.microsoft.com/library/windows/desktop/bb775879).  
  
 Per ulteriori informazioni sull'utilizzo di `CFileDialog` classe sotto [!INCLUDE[wiprlhext](../../c-runtime-library/reference/includes/wiprlhext_md.md)], vedere [classe CFileDialog](../../mfc/reference/cfiledialog-class.md).  
  
### <a name="example"></a>Esempio  
 Questo esempio viene aggiornato il `CFileDialog` prima di visualizzarlo. Prima di aggiornare il `m_ofn` variabile membro, è necessario sincronizzarlo con lo stato corrente della finestra di dialogo.  
  
 [!code-cpp[NVC_MFC_CFileDialog n.&1;](../../mfc/reference/codesnippet/cpp/cfiledialog-class_7.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CCommonDialog](../../mfc/reference/ccommondialog-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)



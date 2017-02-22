---
title: "CWindow Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CWindow"
  - "ATL::CWindow"
  - "CWindow"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CWindow class"
ms.assetid: fefa00c8-f053-4bcf-87bc-dc84f5386683
caps.latest.revision: 21
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CWindow Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce metodi per modificare una finestra.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
class CWindow  
  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWindow::CWindow](../Topic/CWindow::CWindow.md)|Costruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWindow::ArrangeIconicWindows](../Topic/CWindow::ArrangeIconicWindows.md)|Disporre le finestre figlio ridotte a icona.|  
|[CWindow::Attach](../Topic/CWindow::Attach.md)|Aggiunge una finestra all'oggetto `CWindow`.|  
|[CWindow::BeginPaint](../Topic/CWindow::BeginPaint.md)|Prepara la finestra per disegnare.|  
|[CWindow::BringWindowToTop](../Topic/CWindow::BringWindowToTop.md)|Porta la finestra nella parte superiore dell'ordine Z.|  
|[CWindow::CenterWindow](../Topic/CWindow::CenterWindow.md)|Vengono illustrati la finestra a una finestra specifica.|  
|[CWindow::ChangeClipboardChain](../Topic/CWindow::ChangeClipboardChain.md)|Rimuove la finestra dalla catena dei visualizzatori appunti.|  
|[CWindow::CheckDlgButton](../Topic/CWindow::CheckDlgButton.md)|Modifica lo stato di selezione del pulsante specificato.|  
|[CWindow::CheckRadioButton](../Topic/CWindow::CheckRadioButton.md)|Controlla il pulsante di opzione specificato.|  
|[CWindow::ChildWindowFromPoint](../Topic/CWindow::ChildWindowFromPoint.md)|Recupera la finestra figlio che contiene il punto specificato.|  
|[CWindow::ChildWindowFromPointEx](../Topic/CWindow::ChildWindowFromPointEx.md)|Recupera un particolare tipo di finestra figlio che contiene il punto specificato.|  
|[CWindow::ClientToScreen](../Topic/CWindow::ClientToScreen.md)|Coordinate del client converte le coordinate dello schermo.|  
|[CWindow::Create](../Topic/CWindow::Create.md)|Crea una finestra.|  
|[CWindow::CreateCaret](../Topic/CWindow::CreateCaret.md)|Crea una nuova forma per il cursore di sistema.|  
|[CWindow::CreateGrayCaret](../Topic/CWindow::CreateGrayCaret.md)|Crea un rettangolo grigio per il cursore di sistema.|  
|[CWindow::CreateSolidCaret](../Topic/CWindow::CreateSolidCaret.md)|Crea un rettangolo pieno per il cursore di sistema.|  
|[CWindow::DeferWindowPos](../Topic/CWindow::DeferWindowPos.md)|Aggiorna la data struttura di multiplo\-finestra\- posizione della finestra specificata.|  
|[CWindow::DestroyWindow](../Topic/CWindow::DestroyWindow.md)|Elimina la finestra associata all'oggetto `CWindow`.|  
|[CWindow::Detach](../Topic/CWindow::Detach.md)|Rimuove la finestra dall'oggetto `CWindow`.|  
|[CWindow::DlgDirList](../Topic/CWindow::DlgDirList.md)|Inserisce una casella di riepilogo nomi dei file che corrispondono a un percorso o un nome di file specificato.|  
|[CWindow::DlgDirListComboBox](../Topic/CWindow::DlgDirListComboBox.md)|Inserisce una casella combinata di nomi dei file che corrispondono a un percorso o un nome di file specificato.|  
|[CWindow::DlgDirSelect](../Topic/CWindow::DlgDirSelect.md)|Recupera la selezione corrente di una casella di riepilogo.|  
|[CWindow::DlgDirSelectComboBox](../Topic/CWindow::DlgDirSelectComboBox.md)|Recupera la selezione corrente di una casella combinata.|  
|[CWindow::DragAcceptFiles](../Topic/CWindow::DragAcceptFiles.md)|Registra se la finestra accetta i file trascinati.|  
|[CWindow::DrawMenuBar](../Topic/CWindow::DrawMenuBar.md)|Ridisegna la barra dei menu della finestra.|  
|[CWindow::EnableScrollBar](../Topic/CWindow::EnableScrollBar.md)|Abilita o disabilita le frecce della barra di scorrimento.|  
|[CWindow::EnableWindow](../Topic/CWindow::EnableWindow.md)|Abilita o disabilita input.|  
|[CWindow::EndPaint](../Topic/CWindow::EndPaint.md)|Contrassegna la fine di disegno.|  
|[CWindow::FlashWindow](../Topic/CWindow::FlashWindow.md)|Infiamma una volta la finestra.|  
|[CWindow::GetClientRect](../Topic/CWindow::GetClientRect.md)|Recupera le coordinate dell'area client.|  
|[CWindow::GetDC](../Topic/CWindow::GetDC.md)|Recupera un contesto di dispositivo per l'area client.|  
|[CWindow::GetDCEx](../Topic/CWindow::GetDCEx.md)|Recupera un contesto di dispositivo per l'area client e consente le opzioni dell'area di visualizzazione.|  
|[CWindow::GetDescendantWindow](../Topic/CWindow::GetDescendantWindow.md)|Recupera la finestra discendente specificata.|  
|[CWindow::GetDlgControl](../Topic/CWindow::GetDlgControl.md)|Recupera un'interfaccia nel controllo specificato.|  
|[CWindow::GetDlgCtrlID](../Topic/CWindow::GetDlgCtrlID.md)|Recupera l'identificatore della finestra \(per le finestre figlio solo\).|  
|[CWindow::GetDlgHost](../Topic/CWindow::GetDlgHost.md)|Recupera un puntatore a un'interfaccia al contenitore di hosting di un controllo ATL.|  
|[CWindow::GetDlgItem](../Topic/CWindow::GetDlgItem.md)|Recupera la finestra figlio specificata.|  
|[CWindow::GetDlgItemInt](../Topic/CWindow::GetDlgItemInt.md)|Converte il testo di un controllo in un Integer.|  
|[CWindow::GetDlgItemText](../Topic/CWindow::GetDlgItemText.md)|Recupera il testo di un controllo.|  
|[CWindow::GetExStyle](../Topic/CWindow::GetExStyle.md)|Recupera gli stili estesi della finestra.|  
|[CWindow::GetFont](../Topic/CWindow::GetFont.md)|Recupera il carattere corrente della finestra.|  
|[CWindow::GetHotKey](../Topic/CWindow::GetHotKey.md)|Determina il tasto di scelta associato alla finestra.|  
|[CWindow::GetIcon](../Topic/CWindow::GetIcon.md)|Recupera la grande o piccola icona della finestra.|  
|[CWindow::GetLastActivePopup](../Topic/CWindow::GetLastActivePopup.md)|Recupera la finestra popup più attiva.|  
|[CWindow::GetMenu](../Topic/CWindow::GetMenu.md)|Recupera la finestra.|  
|[CWindow::GetNextDlgGroupItem](../Topic/CWindow::GetNextDlgGroupItem.md)|Recupera il controllo precedente o successivo nell'interno di un gruppo di controlli.|  
|[CWindow::GetNextDlgTabItem](../Topic/CWindow::GetNextDlgTabItem.md)|Recupera il controllo precedente o successivo con lo stile **WS\_TABSTOP**.|  
|[CWindow::GetParent](../Topic/CWindow::GetParent.md)|Recupera la finestra padre immediata.|  
|[CWindow::GetScrollInfo](../Topic/CWindow::GetScrollInfo.md)|Recupera i parametri di una barra di scorrimento.|  
|[CWindow::GetScrollPos](../Topic/CWindow::GetScrollPos.md)|Recupera il percorso della casella di scorrimento.|  
|[CWindow::GetScrollRange](../Topic/CWindow::GetScrollRange.md)|Recupera l'intervallo della barra di scorrimento.|  
|[CWindow::GetStyle](../Topic/CWindow::GetStyle.md)|Recupera gli stili della finestra.|  
|[CWindow::GetSystemMenu](../Topic/CWindow::GetSystemMenu.md)|Crea una copia del menu di sistema per la modifica.|  
|[CWindow::GetTopLevelParent](../Topic/CWindow::GetTopLevelParent.md)|Recupera il padre o la finestra proprietaria di primo livello.|  
|[CWindow::GetTopLevelWindow](../Topic/CWindow::GetTopLevelWindow.md)|Recupera la finestra proprietaria di primo livello.|  
|[CWindow::GetTopWindow](../Topic/CWindow::GetTopWindow.md)|Recupera la finestra figlio di primo livello.|  
|[CWindow::GetUpdateRect](../Topic/CWindow::GetUpdateRect.md)|Recupera le coordinate di più piccolo rettangolo con racchiudere la regione di aggiornamento.|  
|[CWindow::GetUpdateRgn](../Topic/CWindow::GetUpdateRgn.md)|Recupera la regione di aggiornamento e copia in un'area specificata.|  
|[CWindow::GetWindow](../Topic/CWindow::GetWindow.md)|Recupera la finestra specificata.|  
|[CWindow::GetWindowContextHelpId](../Topic/CWindow::GetWindowContextHelpId.md)|Recupera l'identificatore di contesto della finestra.|  
|[CWindow::GetWindowDC](../Topic/CWindow::GetWindowDC.md)|Recupera un contesto di dispositivo per l'intera finestra.|  
|[CWindow::GetWindowLong](../Topic/CWindow::GetWindowLong.md)|Recupera un valore a 32 bit a un offset specificato in memoria aggiuntiva della finestra.|  
|[CWindow::GetWindowLongPtr](../Topic/CWindow::GetWindowLongPtr.md)|Recupera informazioni sulla finestra specificata, incluse un valore a un offset specificato in memoria aggiuntiva della finestra.|  
|[CWindow::GetWindowPlacement](../Topic/CWindow::GetWindowPlacement.md)|Recupera lo stato e le posizioni di visualizzazione.|  
|[CWindow::GetWindowProcessID](../Topic/CWindow::GetWindowProcessID.md)|Recupera l'identificatore del processo che ha creato la finestra.|  
|[CWindow::GetWindowRect](../Topic/CWindow::GetWindowRect.md)|Recupera le dimensioni di delimitazione della finestra.|  
|[CWindow::GetWindowRgn](../Topic/CWindow::GetWindowRgn.md)|Ottiene una copia dell'area della finestra di una finestra.|  
|[CWindow::GetWindowText](../Topic/CWindow::GetWindowText.md)|Recupera il testo della finestra.|  
|[CWindow::GetWindowTextLength](../Topic/CWindow::GetWindowTextLength.md)|Recupera la lunghezza del testo della finestra.|  
|[CWindow::GetWindowThreadID](../Topic/CWindow::GetWindowThreadID.md)|Recupera l'identificatore del thread che ha creato la finestra specificata.|  
|[CWindow::GetWindowWord](../Topic/CWindow::GetWindowWord.md)|Recupera un valore a 16 bit in un offset specificato in memoria aggiuntiva della finestra.|  
|[CWindow::GotoDlgCtrl](../Topic/CWindow::GotoDlgCtrl.md)|Imposta lo stato attivo su un controllo nella finestra di dialogo.|  
|[CWindow::HideCaret](../Topic/CWindow::HideCaret.md)|Nasconde il cursore di sistema.|  
|[CWindow::HiliteMenuItem](../Topic/CWindow::HiliteMenuItem.md)|Le evidenziazioni o rimuovere l'evidenziazione da un menu di primo livello.|  
|[CWindow::Invalidate](../Topic/CWindow::Invalidate.md)|Invalida l'intera area client.|  
|[CWindow::InvalidateRect](../Topic/CWindow::InvalidateRect.md)|Invalida l'area client all'interno del rettangolo specificato.|  
|[CWindow::InvalidateRgn](../Topic/CWindow::InvalidateRgn.md)|Invalida l'area client nell'area specificata.|  
|[CWindow::IsChild](../Topic/CWindow::IsChild.md)|Determina se la finestra specificata è una finestra figlio.|  
|[CWindow::IsDialogMessage](../Topic/CWindow::IsDialogMessage.md)|Determina se il messaggio è destinato alla finestra di dialogo specificata.|  
|[CWindow::IsDlgButtonChecked](../Topic/CWindow::IsDlgButtonChecked.md)|Determina lo stato di selezione del pulsante.|  
|[CWindow::IsIconic](../Topic/CWindow::IsIconic.md)|Determina se la finestra è ridotta a icona.|  
|[CWindow::IsParentDialog](../Topic/CWindow::IsParentDialog.md)|Determina se la finestra padre di un controllo rappresenta una finestra di dialogo.|  
|[CWindow::IsWindow](../Topic/CWindow::IsWindow.md)|Determina se l'handle della finestra specificato identifica una finestra esistente.|  
|[CWindow::IsWindowEnabled](../Topic/CWindow::IsWindowEnabled.md)|Determina se la finestra è attivo per l'input.|  
|[CWindow::IsWindowUnicode](../Topic/CWindow::IsWindowUnicode.md)|Determina se la finestra specificata è una finestra Unicode nativa.|  
|[CWindow::IsWindowVisible](../Topic/CWindow::IsWindowVisible.md)|Determina lo stato di visibilità della finestra.|  
|[CWindow::IsZoomed](../Topic/CWindow::IsZoomed.md)|Determina se la finestra viene ingrandita.|  
|[CWindow::KillTimer](../Topic/CWindow::KillTimer.md)|Elimina un evento timer.|  
|[CWindow::LockWindowUpdate](../Topic/CWindow::LockWindowUpdate.md)|Abilita o disabilita nella finestra.|  
|[CWindow::MapWindowPoints](../Topic/CWindow::MapWindowPoints.md)|Converte un set di punti dello spazio delle coordinate della finestra allo spazio delle coordinate di un'altra finestra.|  
|[CWindow::MessageBox](../Topic/CWindow::MessageBox.md)|Visualizza una finestra di messaggio.|  
|[CWindow::ModifyStyle](../Topic/CWindow::ModifyStyle.md)|Modificare gli stili della finestra.|  
|[CWindow::ModifyStyleEx](../Topic/CWindow::ModifyStyleEx.md)|Modificare gli stili estesi della finestra.|  
|[CWindow::MoveWindow](../Topic/CWindow::MoveWindow.md)|Modifica della dimensione e la posizione della finestra.|  
|[CWindow::NextDlgCtrl](../Topic/CWindow::NextDlgCtrl.md)|Imposta lo stato attivo al controllo successivo nella finestra di dialogo.|  
|[CWindow::OpenClipboard](../Topic/CWindow::OpenClipboard.md)|Apre gli Appunti.|  
|[CWindow::PostMessage](../Topic/CWindow::PostMessage.md)|Inserisce un messaggio nella coda di messaggi associata al thread che ha creato la finestra.  Restituisce senza attendere il thread per elaborare il messaggio.|  
|[CWindow::PrevDlgCtrl](../Topic/CWindow::PrevDlgCtrl.md)|Imposta lo stato attivo al controllo precedente nella finestra di dialogo.|  
|[CWindow::Print](../Topic/CWindow::Print.md)|Le richieste tali la finestra sono contenuti in un contesto di dispositivo specificato.|  
|[CWindow::PrintClient](../Topic/CWindow::PrintClient.md)|Le richieste tali l'area client della finestra sono contenuti in un contesto di dispositivo specificato.|  
|[CWindow::RedrawWindow](../Topic/CWindow::RedrawWindow.md)|Aggiorna un rettangolo o un'area specificato nell'area client.|  
|[CWindow::ReleaseDC](../Topic/CWindow::ReleaseDC.md)|Rilascia un contesto di dispositivo.|  
|[CWindow::ResizeClient](../Topic/CWindow::ResizeClient.md)|Ridimensiona la finestra.|  
|[CWindow::ScreenToClient](../Topic/CWindow::ScreenToClient.md)|Coordinate dello schermo converte le coordinate del client.|  
|[CWindow::ScrollWindow](../Topic/CWindow::ScrollWindow.md)|Scorre l'area client specificata.|  
|[CWindow::ScrollWindowEx](../Topic/CWindow::ScrollWindowEx.md)|Scorre l'area client specificata con funzionalità aggiuntive.|  
|[CWindow::SendDlgItemMessage](../Topic/CWindow::SendDlgItemMessage.md)|Invia un messaggio a un controllo.|  
|[CWindow::SendMessage](../Topic/CWindow::SendMessage.md)|Invia un messaggio alla finestra e non restituisce alcun valore finché la routine della finestra non ha elaborato il messaggio.|  
|[CWindow::SendMessageToDescendants](../Topic/CWindow::SendMessageToDescendants.md)|Invia un messaggio a finestre discendenti specificate.|  
|[CWindow::SendNotifyMessage](../Topic/CWindow::SendNotifyMessage.md)|Invia un messaggio nella finestra.  Se la finestra è stata creata dal thread chiamante, `SendNotifyMessage` non restituisce alcun valore finché la routine della finestra non ha elaborato il messaggio.  In caso contrario, restituisce immediatamente.|  
|[CWindow::SetActiveWindow](../Topic/CWindow::SetActiveWindow.md)|Attiva la finestra.|  
|[CWindow::SetCapture](../Topic/CWindow::SetCapture.md)|Invio di tutto l'input del mouse successivo alla finestra.|  
|[CWindow::SetClipboardViewer](../Topic/CWindow::SetClipboardViewer.md)|Aggiunge la finestra alla catena del visualizzatore appunti.|  
|[CWindow::SetDlgCtrlID](../Topic/CWindow::SetDlgCtrlID.md)|Modifica l'identificatore della finestra.|  
|[CWindow::SetDlgItemInt](../Topic/CWindow::SetDlgItemInt.md)|Modifica il testo di un controllo nella rappresentazione di stringa di un valore Integer.|  
|[CWindow::SetDlgItemText](../Topic/CWindow::SetDlgItemText.md)|Modifica il testo di un controllo.|  
|[CWindow::SetFocus](../Topic/CWindow::SetFocus.md)|Imposta lo stato attivo per l'input alla finestra.|  
|[CWindow::SetFont](../Topic/CWindow::SetFont.md)|Modifica il tipo corrente della finestra.|  
|[CWindow::SetHotKey](../Topic/CWindow::SetHotKey.md)|Associa un tasto di scelta con la finestra.|  
|[CWindow::SetIcon](../Topic/CWindow::SetIcon.md)|Modifica la grande o piccola icona della finestra.|  
|[CWindow::SetMenu](../Topic/CWindow::SetMenu.md)|Modifica il menu corrente della finestra.|  
|[CWindow::SetParent](../Topic/CWindow::SetParent.md)|Modifica della finestra padre.|  
|[CWindow::SetRedraw](../Topic/CWindow::SetRedraw.md)|Imposta o cancella il contrassegno di ridisegno.|  
|[CWindow::SetScrollInfo](../Topic/CWindow::SetScrollInfo.md)|Imposta i parametri di una barra di scorrimento.|  
|[CWindow::SetScrollPos](../Topic/CWindow::SetScrollPos.md)|Modifica la posizione della casella di scorrimento.|  
|[CWindow::SetScrollRange](../Topic/CWindow::SetScrollRange.md)|Imposta l'intervallo barra di scorrimento.|  
|[CWindow::SetTimer](../Topic/CWindow::SetTimer.md)|Crea un evento timer.|  
|[CWindow::SetWindowContextHelpId](../Topic/CWindow::SetWindowContextHelpId.md)|Imposta l'identificatore di contesto della finestra.|  
|[CWindow::SetWindowLong](../Topic/CWindow::SetWindowLong.md)|Imposta un valore a 32 bit a un offset specificato in memoria aggiuntiva della finestra.|  
|[CWindow::SetWindowLongPtr](../Topic/CWindow::SetWindowLongPtr.md)|Modificare un attributo della finestra specificata e imposta un valore di offset specificato in memoria aggiuntiva della finestra.|  
|[CWindow::SetWindowPlacement](../Topic/CWindow::SetWindowPlacement.md)|Imposta lo stato e le posizioni di visualizzazione.|  
|[CWindow::SetWindowPos](../Topic/CWindow::SetWindowPos.md)|Imposta la dimensione, posizione e l'ordine Z.|  
|[CWindow::SetWindowRgn](../Topic/CWindow::SetWindowRgn.md)|Imposta l'area della finestra di una finestra.|  
|[CWindow::SetWindowText](../Topic/CWindow::SetWindowText.md)|Modifica il testo della finestra.|  
|[CWindow::SetWindowWord](../Topic/CWindow::SetWindowWord.md)|Imposta un valore a 16 bit in un offset specificato in memoria aggiuntiva della finestra.|  
|[CWindow::ShowCaret](../Topic/CWindow::ShowCaret.md)|Visualizzare il cursore di sistema.|  
|[CWindow::ShowOwnedPopups](../Topic/CWindow::ShowOwnedPopups.md)|Mostra o nasconde le finestre popup di proprietà dalla finestra.|  
|[CWindow::ShowScrollBar](../Topic/CWindow::ShowScrollBar.md)|Mostra o nasconde una barra di scorrimento.|  
|[CWindow::ShowWindow](../Topic/CWindow::ShowWindow.md)|Imposta lo stato di visualizzazione della finestra.|  
|[CWindow::ShowWindowAsync](../Topic/CWindow::ShowWindowAsync.md)|Imposta lo stato di visualizzazione di una finestra creata da un thread diverso.|  
|[CWindow::UpdateWindow](../Topic/CWindow::UpdateWindow.md)|Aggiorna l'area client.|  
|[CWindow::ValidateRect](../Topic/CWindow::ValidateRect.md)|Convalida dell'area client all'interno del rettangolo specificato.|  
|[CWindow::ValidateRgn](../Topic/CWindow::ValidateRgn.md)|Convalida dell'area client dell'area specificata.|  
|[CWindow::WinHelp](../Topic/CWindow::WinHelp.md)|Guida di Windows di inizio.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWindow::operator HWND](../Topic/CWindow::operator%20HWND.md)|Converte l'oggetto `CWindow` a `HWND`.|  
|[CWindow::operator \=](../Topic/CWindow::operator%20=.md)|Assegna `HWND`oggetto `CWindow`.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWindow::m\_hWnd](../Topic/CWindow::m_hWnd.md)|Un handle di finestra associata all'oggetto `CWindow`.|  
|[CWindow::rcDefault](../Topic/CWindow::rcDefault.md)|Contiene le dimensioni predefinite finestra.|  
  
## Note  
 `CWindow` fornisce la funzionalità di base per modificare una finestra in ATL.  Molti dei metodi `CWindow` eseguono il wrapping semplicemente una delle funzioni API Win32.  Ad esempio, confrontare i prototipi `CWindow::ShowWindow` e `ShowWindow`:  
  
|Metodo di CWindow|Funzione Win32|  
|-----------------------|--------------------|  
|**BOOL ShowWindow\( int**  `nCmdShow`\);|**BOOL ShowWindow\( HWND**  `hWnd` **, int**  `nCmdShow`\);|  
  
 `CWindow::ShowWindow` chiama la funzione Win32 `ShowWindow` passando `CWindow::m_hWnd` come primo parametro.  Ogni metodo `CWindow` che esegue direttamente il wrapping delle sessioni di una funzione Win32 il membro `m_hWnd` ; pertanto, la documentazione `CWindow` si farà riferimento a [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
> [!NOTE]
>  Non ciascuna funzione Win32 input correlata viene eseguito il wrapping da `CWindow`e non a ogni metodo `CWindow` esegue il wrapping di una funzione Win32.  
  
 `CWindow::m_hWnd` archivia `HWND` che identifica una finestra.  `HWND` è associato all'oggetto quando:  
  
-   Specificare `HWND` nel costruttore di `CWindow`.  
  
-   Chiamare il metodo `CWindow::Attach`.  
  
-   **operator \=**di `CWindow` di utilizzo.  
  
-   Creare o sottoclasse di una finestra utilizzando una delle seguenti classi è derivato da `CWindow`:  
  
     [CWindowImpl](../../atl/reference/cwindowimpl-class.md) consente di creare una nuova finestra o una sottoclasse di una finestra esistente.  
  
     [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) implementa una finestra contenuta in un altro oggetto.  È possibile creare una nuova finestra o una sottoclasse di una finestra esistente.  
  
     [CDialogImpl](../../atl/reference/cdialogimpl-class.md) consente di creare un oggetto o una finestra di dialogo non modale.  
  
 Per ulteriori informazioni sulle finestre, vedere [Finestre](http://msdn.microsoft.com/library/windows/desktop/ms632595) e gli argomenti successivi in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  Per ulteriori informazioni sull'utilizzo delle finestre in ATL, vedere l'articolo [Classi di finestre ATL](../../atl/atl-window-classes.md).  
  
## Requisiti  
 **Header:** atlwin.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)
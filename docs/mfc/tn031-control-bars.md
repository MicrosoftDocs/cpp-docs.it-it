---
title: 'TN031: Barre di controllo | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: vc.controls.bars
dev_langs: C++
helpviewer_keywords:
- control bars [MFC], styles
- CStatusBar class [MFC], Tech Note 31 usage
- CControlBar class [MFC], Tech Note 31 usage
- CControlBar class [MFC], deriving from
- control bars [MFC], classes [MFC]
- CDialogBar class [MFC], Tech Note 31 usage
- CToolBar class [MFC], Tech Note 31 usage
- TN031
- styles [MFC], control bars
ms.assetid: 8cb895c0-40ea-40ef-90ee-1dd29f34cfd1
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 9e4ea57f77c615ba439f2d07c3926cde5efa0c27
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="tn031-control-bars"></a>TN031: barre di controllo
> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.  
  
 Questa nota descrive le classi di barre di controllo in MFC: la classe generale [CControlBar](#_mfcnotes_ccontrolbar), [CStatusBar](#_mfcnotes_cstatusbar), [CToolBar](#_mfcnotes_ctoolbar), [CDialogBar](#_mfcnotes_cdialogbar)e **CDockBar**.  
  
## <a name="_mfcnotes_ccontrolbar"></a> CControlBar 
  
 **ControlBar** è una classe derivata da `CWnd`che:  
  
-   È allineata con il lato superiore o inferiore di una finestra cornice.  
  
-   Può contenere elementi figlio che sono controlli basati su HWND (ad esempio, `CDialogBar`) o elementi non basati su`HWND` (ad esempio, `CToolBar`, `CStatusBar`).  
  
 Le barre di controllo supportano gli stili aggiuntivi:  
  
- `CBRS_TOP` (Predefinito) La barra di controllo viene bloccata nella parte superiore.  
  
- `CBRS_BOTTOM` La barra di controllo viene bloccata nella parte inferiore.  
  
- `CBRS_NOALIGN` La barra di controllo non viene riposizionata quando l'elemento padre viene ridimensionato.  
  
 Le classi derivate da `CControlBar` offrono altre implementazioni interessanti:  
  
- `CStatusBar` Una barra di stato, gli elementi sono riquadri della barra di stato contenenti testo.  
  
- `CToolBar` Una barra degli strumenti, gli elementi sono pulsanti con bitmap allineati in una riga.  
  
- `CDialogBar` Un frame simile alla barra degli strumenti contenente controlli Windows standard (creato da una risorsa modello di finestra di dialogo).  
  
- **CDockBar** Un'area di ancoraggio generalizzata per altri oggetti derivati `CControlBar` . Le variabili e le funzioni membro specifiche disponibili in questa classe potrebbero essere soggette a modifiche nelle future versioni.  
  
 Tutti gli oggetti/finestre della barra di controllo saranno finestre figlio di una finestra cornice padre. In genere vengono aggiunti come elemento di pari livello all'area client del frame (ad esempio, una visualizzazione o un client MDI). L'ID della finestra figlio di una barra di controllo è importante. Il layout predefinito della barra di controllo funziona solo per le barre di controllo con ID compreso nell'intervallo da **AFX_IDW_CONTROLBAR_FIRST** a **AFX_IDW_CONTROLBAR_LAST**. Si noti che anche se c'è un intervallo di 256 ID di barre di controllo, i primi 32 ID sono speciali perché sono supportati direttamente dall'architettura dell'anteprima di stampa.  
  
 La classe `CControlBar` assicura l'implementazione standard per:  
  
-   Allineare la barra di controllo alla parte superiore, inferiore o a entrambi i lati del frame.  
  
-   Allocare matrici degli elementi di controllo.  
  
-   Supportare l'implementazione di classi derivate.  
  
 In genere gli oggetti della barra di controllo C++ vengono incorporati come membri di una classe derivata `CFrameWnd` e vengono eliminati quando l'oggetto e l' `HWND` padre vengono eliminati in modo permanente. Se è necessario allocare un oggetto della barra di controllo sull'heap, è possibile impostare semplicemente il membro **m_bAutoDestruct** su **TRUE** per far in modo che la barra di controllo "**lo elimini**" quando `HWND` viene eliminato in modo permanente.  
  
> [!NOTE]
>  Se si crea la propria classe derivata da `CControlBar`, piuttosto che usare una delle classi derivate di MFC, come `CStatusBar`, `CToolBar`o `CDialogBar`, sarà necessario impostare il membro dati `m_dwStyle` . Ciò può essere eseguito nell'override di **Create**:  
  
```  
// CMyControlBar is derived from CControlBar  
BOOL CMyControlBar::Create(CWnd* pParentWnd,
    DWORD dwStyle,
    UINT nID)  
{  
    m_dwStyle = dwStyle;  
 
 .  
 .  
 .  
}  
```  
  
 **Algoritmo di layout della barra di controllo**  
  
 L'algoritmo di layout della barra di controllo è molto semplice. La finestra cornice invia un messaggio **WM_SIZEPARENT** a tutti gli elementi figlio nell'intervallo della barra di controllo. Con questo messaggio viene passato un puntatore al rettangolo client dell'elemento padre. Questo messaggio viene inviato agli elementi figlio nell'ordine Z. Gli elementi figlio della barra di controllo usano queste informazioni per posizionarsi e ridurre le dimensioni dell'area client dell'elemento padre. Il rettangolo finale lasciato per l'area client normale (meno barre di controllo) viene usato per posizionare la finestra del client principale (in genere una finestra con separatore, una visualizzazione o un client MDI).  
  
 Per altre informazioni, vedere `CWnd::RepositionBars` e `CFrameWnd::RecalcLayout` .  
  
 I messaggi Windows privati MFC, tra cui **WM_SIZEPARENT**, sono descritti nella [Nota tecnica 24](../mfc/tn024-mfc-defined-messages-and-resources.md).  
  
## <a name="_mfcnotes_cstatusbar"></a>  CStatusBar  
  
 Una barra di stato è una barra di controllo contenente una riga di riquadri di output di testo. Esistono due modi comuni per usare i riquadri di output di testo:  
  
-   Come una riga di messaggio  
  
     (ad esempio, la riga del messaggio di aiuto del menu standard). È generalmente possibile accedervi tramite un indice in base 0  
  
-   Come indicatori di stato  
  
     (ad esempio, gli indicatori MA, NUM e BLOC SCORR). È generalmente possibile accedervi tramite stringa/ID di comando.  
  
 Il tipo di carattere per la barra di stato è MS Sans Serif dimensione 10 punti, determinato dalla Windows Interface Application Design Guide (Guida alla progettazione di applicazioni con interfaccia di Windows) o in base alla migliore corrispondenza dei mapper di un tipo di carattere proporzionale Swiss dimensioni 10 punti. In alcune versioni di Windows, ad esempio l'edizione giapponese, i tipi di carattere selezionati sono diversi.  
  
 I colori usati nella barra di stato sono coerenti anche con l'indicazione della Windows Interface Application Design Guide (Guida alla progettazione di applicazioni con interfaccia di Windows). Questi colori non sono hardcoded e vengono modificati in modo dinamico in risposta alla personalizzazione dell'utente nel Pannello di controllo.  
  
|Elemento|Valore COLOR di Windows|RGB predefinito|  
|----------|-------------------------|-----------------|  
|Sfondo della barra di stato|**COLOR_BTNFACE**|RGB(192, 192, 192)|  
|Testo barra di stato|**COLOR_BTNTEXT**|RGB(000, 000, 000)|  
|Bordi superiore/sinistro della barra di stato|**COLOR_BTNHIGHLIGHT**|RGB(255, 255, 255)|  
|Bordi inferiore/destro della barra di stato|**COLOR_BTNSHADOW**|RGB(128, 128, 128)|  
  
 **Supporto CCmdUI per CStatusBar**  
  
 Gli indicatori vengono in genere aggiornati tramite il meccanismo `ON_UPDATE_COMMAND_UI` . Nel tempo di inattività la barra di stato chiama il gestore `ON_UPDATE_COMMAND_UI` con l'ID stringa del riquadro degli indicatori.  
  
 Il gestore `ON_UPDATE_COMMAND_UI` può chiamare:  
  
- **Enable**: per abilitare o disabilitare il riquadro. Un riquadro disabilitato è identico a un riquadro abilitato ma il testo è invisibile (ovvero viene disattivato l'indicatore di testo).  
  
- **SetText**: per modificare il testo. Se si usa questo metodo, prestare attenzione perché il riquadro non verrà ridimensionato automaticamente.  
  
 Fare riferimento alla classe [CStatusBar](../mfc/reference/cstatusbar-class.md) nei *Riferimenti della libreria di classi* per informazioni sulle API di creazione e personalizzazione della `CStatusBar` . La maggior parte delle personalizzazioni delle barre di stato deve essere eseguita prima che la barra di stato venga inizialmente resa visibile.  
  
 La barra di stato supporta un solo riquadro estendibile, in genere il primo. Le dimensioni di questo riquadro sono davvero minime. Se la barra di stato supera la dimensione minima di tutti i pannelli, la larghezza in eccesso verrà attribuita al riquadro estendibile. L'applicazione predefinita con una barra di stato ha indicatori allineati a destra per MA, NUM e BLOC SCORR poiché il primo riquadro è estendibile.  
  
## <a name="_mfcnotes_ctoolbar"></a>  CToolBar  
  
 Una barra degli strumenti è una barra di controllo con una riga di pulsanti con bitmap che può includere separatori. Sono supportati due stili di pulsanti: pulsanti di comando e pulsanti della casella di controllo. La funzionalità del gruppo di pulsanti di opzione può essere generata con pulsanti della casella di controllo e `ON_UPDATE_COMMAND_UI`.  
  
 Tutti i pulsanti con bitmap nella barra degli strumenti provengono da una singola bitmap. Questa bitmap deve contenere un'immagine o un glifo per ogni pulsante. In genere l'ordine di immagini/glifi nella bitmap è lo stesso con cui verranno disegnati sullo schermo. (Questo può essere modificato usando le API di personalizzazione).  
  
 Tutti i pulsanti devono avere la stessa dimensione. Il valore predefinito è il valore standard di 24 x 22 pixel. Tutte le immagini o tutti i glifi devono avere la stessa dimensione ed essere affiancati nella bitmap. La dimensione predefinita di immagini/glifi è 16 x 15 pixel. Pertanto, per una barra degli strumenti con 10 pulsanti (usando dimensioni standard), è necessario una bitmap di 160 pixel di larghezza e 15 pixel di altezza.  
  
 Ogni pulsante ha una sola immagine o un solo glifo. I diversi stati e stili dei pulsanti (ad esempio, premuto, non selezionato, selezionato, disabilitato, selezionato disabilitato, indeterminato) sono generati in modo algoritmico da un'immagine o un glifo. È teoricamente possibile usare qualsiasi bitmap a colori o DIB. L'algoritmo per la generazione dei diversi stati dei pulsanti funziona meglio se l'immagine originale presenta sfumature di grigio. Esaminare i pulsanti della barra degli strumenti standard e la clipart dei pulsanti della barra degli strumenti forniti a titolo esemplificativo nell'esempio generale [CLIPART](../visual-cpp-samples.md) di MFC.  
  
 I colori usati nella barra degli strumenti sono coerenti anche con l'indicazione della Windows Interface Application Design Guide (Guida alla progettazione di applicazioni con interfaccia di Windows). Questi colori non sono hardcoded e vengono modificati in modo dinamico in risposta alla personalizzazione dell'utente nel Pannello di controllo.  
  
|Elemento|Valore COLOR di Windows|RGB predefinito|  
|----------|-------------------------|-----------------|  
|Sfondo della barra degli strumenti|**COLOR_BTNFACE**|RGB(192,192,192)|  
|Bordi superiore/sinistro della barra degli strumenti|**COLOR_BTNHIGHLIGHT**|RGB(255,255,255)|  
|Bordi inferiore/destro della barra degli strumenti|**COLOR_BTNSHADOW**|RGB(128,128,128)|  
  
 Inoltre, i pulsanti con bitmap della barra degli strumenti vengono ricolorati come se fossero controlli pulsante di Windows standard. Questa ricolorazione si verifica quando la bitmap viene caricata dalla risorsa e in risposta a una modifica nei colori di sistema conseguente alla personalizzazione dell'utente nel Pannello di controllo. I colori seguenti in una bitmap della barra degli strumenti vengono ricolorati automaticamente e devono quindi essere usati con cautela. Se non si desidera che una parte della bitmap venga ricolorata, usare un colore che si avvicini molto a uno dei valori RGB mappati. Il mapping viene eseguito in base ai valori RGB esatti.  
  
|Valore RGB|Valore COLOR mappato in modo dinamico|  
|---------------|------------------------------------|  
|RGB(000, 000, 000)|COLOR_BTNTEXT|  
|RGB(128, 128, 128)|COLOR_BTNSHADOW|  
|RGB(192, 192, 192)|COLOR_BTNFACE|  
|RGB(255, 255, 255)|COLOR_BTNHIGHLIGHT|  
  
 Fare riferimento alla classe [CToolBar](../mfc/reference/ctoolbar-class.md) nei *Rifermenti della libreria di classi* per informazioni sulle API di creazione e personalizzazione della `CToolBar` . La maggior parte delle personalizzazioni delle barre degli strumenti deve essere eseguita prima che la barra degli strumenti venga inizialmente resa visibile.  
  
 Le API di personalizzazione possono essere usate per modificare ID, stili, larghezza dello spaziatore dei pulsanti e per stabilire quale immagine/glifo usare per un pulsante specifico. Per impostazione predefinita, non è necessario usare le API.  
  
## <a name="ccmdui-support-for-ctoolbar"></a>Supporto CCmdUI per CToolBar  
 I pulsanti della barra degli strumenti vengono sempre aggiornati attraverso il meccanismo `ON_UPDATE_COMMAND_UI` . Nel tempo di inattività, la barra degli strumenti chiamerà il gestore `ON_UPDATE_COMMAND_UI` con ID di comando di quel pulsante. Il meccanismo`ON_UPDATE_COMMAND_UI` non viene chiamato per il separatore, ma per i pulsanti di comando e i pulsanti della casella di controllo.  
  
 Il gestore `ON_UPDATE_COMMAND_UI` può chiamare:  
  
- **Enable**: per abilitare o disabilitare il pulsante. Questo metodo è applicabile sia ai pulsanti della casella di controllo sia ai pulsanti di comando.  
  
- `SetCheck`: per impostare lo stato di selezione di un pulsante. Se la chiamata viene eseguita per un pulsante della barra degli strumenti, questo verrà convertito in un pulsante della casella di controllo. `SetCheck` accetta un parametro che può essere 0 (non selezionato), 1 (selezionato) o 2 (indeterminato)  
  
- `SetRadio`: sintassi abbreviata per `SetCheck`.  
  
 I pulsanti della casella di controllo sono pulsanti "AUTO" ovvero, quando premuti, cambiano immediatamente stato. Lo stato selezionato è lo stato attivo o premuto. Non è possibile impostare lo stato "indeterminato" tramite un'interfaccia utente incorporata. Tale modifica deve essere eseguita tramite codice.  
  
 Le API di personalizzazione consentono di modificare lo stato di un pulsante della barra degli strumenti specificato. È consigliabile modificare questi stati nel gestore `ON_UPDATE_COMMAND_UI` per il comando rappresentato dal pulsante della barra degli strumenti. Tenere presente che l'elaborazione durante l'inattività modifica lo stato dei pulsanti della barra degli strumenti con il gestore `ON_UPDATE_COMMAND_UI` , pertanto tutte le modifiche a questi stati eseguite tramite SetButtonStyle potrebbero andare perse dopo il successivo periodo di inattività.  
  
 I pulsanti della barra degli strumenti inviano messaggi **WM_COMMAND** come pulsanti normali o voci di menu e vengono di norma gestiti da un gestore `ON_COMMAND` nella stessa classe che fornisce il gestore `ON_UPDATE_COMMAND_UI` .  
  
 Esistono quattro stili dei pulsanti della barra degli strumenti (TBBS_ valori) usati per gli stati di visualizzazione:  
  
-   TBBS_CHECKED:   la casella di controllo è attualmente selezionata.  
  
-   TBBS_INDETERMINATE::   la casella di controllo è attualmente indeterminata.  
  
-   TBBS_DISABLED:   il pulsante è attualmente disabilitato.  
  
-   TBBS_PRESSED:   il pulsante è attualmente premuto.  
  
 I sei stili ufficiali dei pulsanti indicati nella Windows Interface Application Design Guide (Guida alla progettazione di applicazioni con interfaccia di Windows) sono rappresentati dai valori TBBS seguenti:  
  
-   Non selezionato = 0  
  
-   Premuto = TBBS_PRESSED (&#124; eventuali altri stili)  
  
-   Disabilitato = TBBS_DISABLED  
  
-   Selezionato = TBBS_CHECKED  
  
-   Disabilitato = TBBS_CHECKED &#124; TBBS_DISABLED  
  
-   Indeterminato = TBBS_INDETERMINATE  
  
##  <a name="_mfcnotes_cdialogbar"></a> CDialogBar  
 Una barra della finestra di dialogo è una barra di controllo contenente i controlli Windows standard. Agisce come una finestra di dialogo in quanto contiene i controlli e supporta la tabulazione tra di essi. Funge anche da finestra di dialogo che usa un modello di finestra di dialogo per rappresentare la barra.  
  
 `CDialogBar` viene usata per la barra degli strumenti dell'anteprima di stampa, che contiene i controlli dei pulsanti di comando standard.  
  
 Usare `CDialogBar` equivale a usare `CFormView`. È necessario definire un modello di finestra di dialogo per la barra della finestra di dialogo e rimuovere tutti gli stili ad eccezione di **WS_CHILD**. Si noti che la finestra di dialogo non deve essere visibile.  
  
 Le notifiche dei controlli per `CDialogBar` vengono inviate all'elemento padre della barra di controllo (come i pulsanti della barra degli strumenti).  
  
## <a name="ccmdui-support-for-cdialogbar"></a>Supporto CCmdUI per CDialogBar  
 I pulsanti della barra della finestra di dialogo devono essere aggiornati tramite il meccanismo del gestore `ON_UPDATE_COMMAND_UI` . Al tempo di inattività, la barra di finestra di dialogo chiama il `ON_UPDATE_COMMAND_UI` gestore con l'ID di comando di tutti i pulsanti con un ID > = 0x8000 (ovvero, nell'intervallo di ID di comando).  
  
 Il gestore `ON_UPDATE_COMMAND_UI` può chiamare:  
  
-   Enable: per abilitare o disabilitare il pulsante.  
  
-   SetText: per modificare il testo del pulsante.  
  
 La personalizzazione può essere eseguita tramite le API di gestione delle finestre standard.  
  
## <a name="see-also"></a>Vedere anche  
 [Note tecniche per numero](../mfc/technical-notes-by-number.md)   
 [Note tecniche per categoria](../mfc/technical-notes-by-category.md)


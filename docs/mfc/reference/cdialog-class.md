---
title: "CDialog Class | Microsoft Docs"
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
  - "CDialog"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDialog class"
  - "MFC (finestre di dialogo), classi base"
  - "finestre di dialogo modali, creazione"
  - "finestre di dialogo non modali, creazione"
  - "finestre di dialogo non modali, visualizzazione"
ms.assetid: ca64b77e-2cd2-47e3-8eff-c2645ad578f9
caps.latest.revision: 23
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDialog Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La classe base utilizzata per visualizzare le finestre di dialogo dello schermo.  
  
## Sintassi  
  
```  
class CDialog : public CWnd  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDialog::CDialog](../Topic/CDialog::CDialog.md)|Costruisce un oggetto `CDialog`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDialog::Create](../Topic/CDialog::Create.md)|Inizializza l'oggetto `CDialog`.  Crea una finestra di dialogo non modale e allegarlo all'oggetto `CDialog`.|  
|[CDialog::CreateIndirect](../Topic/CDialog::CreateIndirect.md)|Crea una finestra di dialogo non modale da un modello di finestra di dialogo in memoria \(non alle risorse\).|  
|[CDialog::DoModal](../Topic/CDialog::DoModal.md)|Chiama una finestra di dialogo modale e restituisce una volta completati.|  
|[CDialog::EndDialog](../Topic/CDialog::EndDialog.md)|Chiude una finestra di dialogo modale.|  
|[CDialog::GetDefID](../Topic/CDialog::GetDefID.md)|Ottiene l'id del controllo del pulsante predefinito di una finestra di dialogo.|  
|[CDialog::GotoDlgCtrl](../Topic/CDialog::GotoDlgCtrl.md)|Sposta lo stato attivo su un controllo specifico della finestra di dialogo nella finestra di dialogo.|  
|[CDialog::InitModalIndirect](../Topic/CDialog::InitModalIndirect.md)|Crea una finestra di dialogo modale da un modello di finestra di dialogo in memoria \(non alle risorse\).  I parametri vengono archiviati fino alla funzione `DoModal`.|  
|[CDialog::MapDialogRect](../Topic/CDialog::MapDialogRect.md)|Converte le unità della finestra di dialogo del rettangolo in schermare unità.|  
|[CDialog::NextDlgCtrl](../Topic/CDialog::NextDlgCtrl.md)|Sposta lo stato attivo al controllo successivo della finestra di dialogo nella finestra di dialogo.|  
|[CDialog::OnInitDialog](../Topic/CDialog::OnInitDialog.md)|Override per aumentare inizializzazione della finestra di dialogo.|  
|[CDialog::OnSetFont](../Topic/CDialog::OnSetFont.md)|Override per specificare il carattere che un controllo finestra di dialogo da utilizzare quando si estrae il testo.|  
|[CDialog::PrevDlgCtrl](../Topic/CDialog::PrevDlgCtrl.md)|Sposta lo stato attivo sul controllo precedente della finestra di dialogo nella finestra di dialogo.|  
|[CDialog::SetDefID](../Topic/CDialog::SetDefID.md)|Modifica del controllo pulsante predefinito di una finestra di dialogo con un pulsante specificato.|  
|[CDialog::SetHelpID](../Topic/CDialog::SetHelpID.md)|Imposta una guida sensibile al contesto ID della finestra di dialogo.|  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDialog::OnCancel](../Topic/CDialog::OnCancel.md)|Override di eseguire l'azione di tasto ESC o del pulsante Annulla.  L'impostazione predefinita di chiudere la finestra di dialogo e restituisce **IDCANCEL**di **DoModal** .|  
|[CDialog::OnOK](../Topic/CDialog::OnOK.md)|Override di eseguire l'azione del pulsante OK in una finestra di dialogo modale.  L'impostazione predefinita di chiudere la finestra di dialogo e restituisce **IDOK**di `DoModal`.|  
  
## Note  
 Le finestre di dialogo sono di due tipi: modali e non modali.  Una finestra di dialogo modale deve essere chiusa dall'utente prima dell'applicazione di continuare.  Una finestra di dialogo non modale consente all'utente di visualizzare la finestra di dialogo e tornare a un'altra attività senza annullare o rimuovere la finestra di dialogo.  
  
 Un oggetto `CDialog` è una combinazione di modello di finestra di dialogo e `CDialog`classe derivata da.  Utilizzare l'editor finestre di dialogo per creare il modello di finestra di dialogo e archiviarlo in una risorsa, quindi utilizzare la procedura guidata della classe aggiunta per creare una classe derivata da `CDialog`.  
  
 Una finestra di dialogo, come qualsiasi altra finestra, riceve i messaggi di Windows.  In una finestra di dialogo, poiché è particolarmente desidera sfruttare i messaggi di notifica di gestione dei comandi della finestra di dialogo che indica il modo in cui l'utente interagisce con la finestra di dialogo.  Utilizzare la Finestra Proprietà per selezionare i messaggi che si desidera gestire e verranno aggiunte le voci della mappa messaggi e le funzioni membro per la gestione dei messaggi appropriati alla classe per l'utente.  È sufficiente scrivere codice specifico dell'applicazione nelle funzioni membro del gestore.  
  
 Se si preferisce, è possibile scrivere sempre le voci della mappa messaggi e le funzioni membro manualmente.  
  
 In tutto tranne la finestra di dialogo più semplice, aggiungere le variabili membro alla classe derivata della finestra di dialogo all'archivio dati immessi nei controlli della finestra di dialogo dall'utente o per visualizzare i dati per l'utente.  È possibile utilizzare la procedura guidata variabile di aggiunta per creare le variabili membro e associarli ai controlli.  Contemporaneamente, si sceglie un tipo di variabile e un intervallo consentito di valori per ciascuna variabile.  La creazione guidata codice aggiunge le variabili membro alla classe derivata della finestra di dialogo.  
  
 Un mapping di dati viene generato automaticamente per gestire lo scambio di dati tra le variabili membro e i controlli della finestra di dialogo.  Il mapping di dati fornisce funzioni che consentono di inizializzare i controlli nella finestra di dialogo con i valori appropriati, recuperare i dati e convalida di dati.  
  
 Per creare una finestra di dialogo modale, costruire un oggetto nello stack utilizzando il costruttore per la classe derivata della finestra di dialogo e chiamare `DoModal` per creare la finestra di dialogo e i relativi controlli.  Se si desidera creare una finestra di dialogo non modale, chiamare **Crea** nel costruttore della classe della finestra di dialogo.  
  
 È inoltre possibile creare un modello in memoria utilizzando una struttura di dati [DLGTEMPLATE](http://msdn.microsoft.com/library/windows/desktop/ms645394) come descritto in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  Dopo la costruzione di un oggetto `CDialog`, chiamare [CreateIndirect](../Topic/CDialog::CreateIndirect.md) per creare una finestra di dialogo non modale, o la chiamata [InitModalIndirect](../Topic/CDialog::InitModalIndirect.md) e [DoModal](../Topic/CDialog::DoModal.md) per creare una finestra di dialogo modale.  
  
 Il mapping di dati di convalida e di scambio viene scritto nell'override `CWnd::DoDataExchange` aggiunti alla nuova classe della finestra di dialogo.  Vedere la funzione membro [DoDataExchange](../Topic/CWnd::DoDataExchange.md) in `CWnd` per ulteriori informazioni sulla funzionalità di convalida e di scambio.  
  
 Sia il programmatore che il framework chiama indirettamente `DoDataExchange` con una chiamata a [CWnd::UpdateData](../Topic/CWnd::UpdateData.md).  
  
 Il framework chiama `UpdateData` quando l'utente fa clic sul pulsante OK per chiudere la finestra di dialogo modale.  \(I dati non vengono recuperati se il pulsante Annulla viene selezionato.\) L'implementazione predefinita [OnInitDialog](../Topic/CDialog::OnInitDialog.md) chiama anche `UpdateData` per impostare i valori iniziali dei controlli.  In genere l'override `OnInitDialog` ulteriormente per inizializzare i controlli.  `OnInitDialog` viene chiamato dopo che tutti i controlli della finestra di dialogo viene creato e prima della finestra di dialogo.  
  
 È possibile chiamare `CWnd::UpdateData` in qualsiasi momento durante l'esecuzione di un oggetto o una finestra di dialogo non modale.  
  
 Se si compila manualmente una finestra di dialogo, aggiungere le variabili membro necessari alla classe derivata della finestra di dialogo manualmente e aggiungere le funzioni membro per impostare o ottenere questi valori.  
  
 Una finestra di dialogo modale viene chiuso automaticamente quando l'utente preme la scelta dei pulsanti OK o Annulla o quando il codice chiama la funzione membro `EndDialog`.  
  
 Quando si distribuisce una finestra di dialogo non modale, sempre eseguire l'override della funzione membro `OnCancel` e chiamare `DestroyWindow` da.  Non chiamare la classe base `CDialog::OnCancel`, perché chiama `EndDialog`, che consente la finestra di dialogo invisibile ma non viene distrutto.  È inoltre necessario eseguire l'override `PostNcDestroy` per le finestre di dialogo non modale per eliminare **this**, poiché le finestre di dialogo non modale genere vengono allocate con **new**.  Finestre di dialogo modali sono in genere costruite nel frame e non richiedono la pulizia `PostNcDestroy`.  
  
 Per ulteriori informazioni su `CDialog`, vedere:  
  
-   [Finestre di dialogo](../../mfc/dialog-boxes.md)  
  
-   Articolo della Knowledge Base Q262954: HOWTO: Creare una finestra di dialogo di Resizeable con le barre di scorrimento  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 `CDialog`  
  
## Requisiti  
 **Intestazione:** afxwin.h  
  
## Vedere anche  
 [MFC campione DLGCBR32](../../top/visual-cpp-samples.md)   
 [Esempio DLGTEMPL MFC](../../top/visual-cpp-samples.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)
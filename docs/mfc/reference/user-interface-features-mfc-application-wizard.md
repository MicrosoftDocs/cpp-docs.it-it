---
title: "Funzionalit&#224; interfaccia utente, Creazione guidata applicazione MFC | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.mfc.exe.ui"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata applicazione MFC, funzionalità interfaccia utente"
ms.assetid: 59e7b829-a665-42eb-be23-3f2a36eb2dad
caps.latest.revision: 12
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzionalit&#224; interfaccia utente, Creazione guidata applicazione MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questo argomento vengono illustrate le opzioni che è possibile utilizzare per specificare l'aspetto dell'applicazione.  Le funzionalità di interfaccia utente disponibili per il progetto dipendono dal tipo di applicazione specificato nella schermata [Tipo di applicazione, Creazione guidata applicazione MFC](../../mfc/reference/application-type-mfc-application-wizard.md) della Creazione guidata applicazione MFC.  Se ad esempio si crea un'applicazione con interfaccia a documento singolo, non è possibile aggiungere stili di frame figlio.  
  
 **Stili del frame principale**  
 Imposta le funzionalità del frame principale della finestra dell'applicazione.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Frame con bordo spesso**|Crea una finestra dotata di bordo di ridimensionamento.  Valore predefinito.|  
|**Pulsante di riduzione a icona**|Include un pulsante di riduzione a icona nella finestra cornice principale.  Valore predefinito.|  
|**Pulsante di ingrandimento**|Include un pulsante di ingrandimento nella finestra cornice principale.  Valore predefinito.|  
|**Minimized**|Apre la finestra cornice principale come icona.|  
|**Maximized**|Apre la finestra cornice principale in modo da occupare l'intero schermo.|  
|**Menu di sistema**|Include un menu di sistema nella finestra cornice principale.  Valore predefinito.|  
|**Finestra Informazioni su**|Include una casella **Informazioni su** per l'applicazione.  L'utente può accedere a questa casella dal menu **?** dell'applicazione.  Rappresenta l'opzione predefinita, modificabile solo selezionando l'opzione **Basato su finestra di dialogo** nella schermata [Tipo di applicazione, Creazione guidata applicazione MFC](../../mfc/reference/application-type-mfc-application-wizard.md).<br /><br /> **Nota** In genere, se un'opzione non è disponibile significa che non viene applicata al progetto dalla procedura guidata, indipendentemente dal fatto che la relativa casella di controllo sia selezionata.  In questo caso, al progetto viene sempre aggiunta la finestra **Informazioni su**, a meno che il progetto non sia stato precedentemente impostato come progetto a finestre e sia quindi stata deselezionata l'apposita casella.|  
|**Barra di stato iniziale**|Aggiunge all'applicazione una barra di stato  contenente indicatori automatici per i tasti MAIUSC, BLOC NUM e BLOC SCORR e una barra dei messaggi in cui vengono visualizzate le stringhe della Guida relative ai comandi di menu e ai pulsanti della barra degli strumenti.  Selezionando questa opzione vengono inoltre aggiunti comandi di menu che consentono di visualizzare o nascondere la barra di stato.  Per impostazione predefinita, un'applicazione è dotata di una barra di stato.  Non è disponibile per i diversi tipi di applicazioni a finestre.|  
|**Finestra con separatore**|Fornisce una barra di divisione  che suddivide le visualizzazioni principali dell'applicazione.  In un'applicazione con interfaccia a documenti multipli \(MDI\), una finestra con separatore è costituita dalla finestra client del frame figlio MDI, mentre in un'applicazione con interfaccia a documento singolo \(SDI\) e in un'applicazione a documenti multipli di primo livello è costituita dalla finestra client del frame principale.  Non è disponibile per i diversi tipi di applicazioni a finestre.|  
  
 **Stili dei frame figlio**  
 Specifica l'aspetto e lo stato iniziale dei frame figlio dell'applicazione.  Gli stili dei frame figlio sono disponibili solo per le applicazioni MDI.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Pulsante di riduzione a icona**|Specifica se una finestra figlio è dotata di un pulsante di riduzione a icona \(impostazione predefinita\).|  
|**Pulsante di ingrandimento**|Specifica se una finestra figlio è dotata di un pulsante di ingrandimento \(impostazione predefinita\).|  
|**Finestra ingrandita**|Specifica se una finestra figlio viene inizialmente ingrandita mediante l'impostazione del flag **WS\_MAXIMIZE** di cs.style nella funzione membro [PreCreateWindow](../Topic/CWnd::PreCreateWindow.md) di `CChildFrame`.|  
  
 **Barre dei comandi \(menu\/barra degli strumenti\/barra multifunzione\)**  
 Indica se l'applicazione include menu, barre degli strumenti e\/o una barra multifunzione.  Non è disponibile per le applicazioni a finestre.  
  
|Opzione|Descrizione|  
|-------------|-----------------|  
|**Usa menu classico**|Specifica che l'applicazione contiene un menu classico, non trascinabile.|  
|**Usa barra degli strumenti ancorabile**|Aggiunge all'applicazione una barra degli strumenti standard di Windows  contenente pulsanti per creare un nuovo documento, aprire e salvare file di documento, tagliare, copiare, incollare o stampare testo e passare alla modalità Guida.  Attivando questa opzione vengono inoltre aggiunti comandi di menu che consentono di visualizzare o nascondere la barra degli strumenti.|  
|**Una barra degli strumenti di tipo browser**|Aggiunge all'applicazione una barra degli strumenti di tipo Internet Explorer.|  
|**Usa barra dei menu e barra degli strumenti**|Indica che l'applicazione contiene una barra dei menu trascinabile e una barra degli strumenti.|  
|**Barre degli strumenti e immagini definite dall'utente**|Consente all'utente di personalizzare la barra degli strumenti e le immagini relative in fase di esecuzione.|  
|**Comportamento menu personalizzati**|Specifica se, all'apertura, il menu contiene l'elenco completo di voci o solo i comandi che l'utente utilizza più di frequente.|  
|**Usa barra multifunzione**|Utilizza nell'applicazione una barra multifunzione di tipo Office 2007 anziché una barra dei menu o una barra degli strumenti.|  
  
 **Titolo della finestra**  
 Questa opzione è disponibile solo per le applicazioni basate sulla [CDialog Class](../../mfc/reference/cdialog-class.md). Il titolo viene visualizzato nella barra del titolo della finestra di dialogo.  Per modificare questo campo, è necessario selezionare l'opzione **Basato su finestra di dialogo** in **Tipo di applicazione**.  Per ulteriori informazioni, vedere [Tipo di applicazione, Creazione guidata applicazione MFC](../../mfc/reference/application-type-mfc-application-wizard.md).  
  
## Vedere anche  
 [Creazione guidata applicazione MFC](../../mfc/reference/mfc-application-wizard.md)
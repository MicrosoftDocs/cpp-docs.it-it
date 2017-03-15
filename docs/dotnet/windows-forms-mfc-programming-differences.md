---
title: "Differenze tra la programmazione con Windows Form e quella con MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MFC [C++], supporto di Windows Form"
  - "Windows Form [C++], confronto con MFC"
ms.assetid: f3bfcf45-cfd4-45a4-8cde-5f4dbb18ee51
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 14
---
# Differenze tra la programmazione con Windows Form e quella con MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Negli argomenti di [Utilizzo di un controllo utente Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md) viene descritto il supporto MFC per Windows Form.  Se non si conosce la programmazione .NET Framework o MFC, in questo argomento verranno fornite informazioni di base sulle differenze di programmazione tra i due componenti.  
  
 Windows Form consente di creare applicazioni Microsoft Windows in .NET Framework.  Il framework fornisce un insieme di classi moderne, orientate ad oggetti ed estensibili, che consente di sviluppare applicazioni Windows articolate.  Grazie ai Windows Form è possibile creare un'applicazione client complessa in grado di accedere a un'ampia varietà di origini dati, nonché fornire strumenti di visualizzazione e di modifica dei dati che utilizzano i controlli Windows Form.  
  
 Tuttavia, se si ha familiarità con le applicazioni MFC, è possibile che si sia abituati a creare determinati tipi di applicazioni non ancora supportati in modo esplicito nei Windows Form.  Le applicazioni Windows Form equivalgono alle applicazioni basate sulle finestre di dialogo MFC.  Tuttavia non forniscono l'infrastruttura per il supporto diretto di altri tipi di applicazioni MFC, quali il server\/contenitore di documenti OLE, i documenti ActiveX o il supporto documento\/visualizzazione per interfacce a documento singolo \(SDI, Single\-Document Interface\), interfacce a documenti multipli \(MDI, Multiple\-Document Interface\) e interfacce multiple di primo livello \(MTI, Multiple Top\-Level Interface\).  Per creare queste applicazioni è possibile scrivere una logica personalizzata.  
  
 Per ulteriori informazioni sulle applicazioni Windows Form, vedere [Introduzione a Windows Form](../Topic/Windows%20Forms%20Overview.md).  
  
 Per un'applicazione di esempio che illustri il controllo Windows Form utilizzato con MFC, vedere la pagina relativa all' [integrazione di Windows Form e MFC](http://www.microsoft.com/downloads/details.aspx?FamilyID=987021bc-e575-4fe3-baa9-15aa50b0f599&displaylang=en).  
  
 Il documento o la visualizzazione MFC e le funzionalità di routing dei comandi elencate di seguito non presentano equivalenti nei Windows Form:  
  
-   Integrazione della shell  
  
     MFC consente di gestire i comandi DDE \(Dynamic Data Exchange\) e gli argomenti della riga di comando utilizzati dalla shell quando si fa clic con il pulsante destro del mouse su un documento e si selezionano verbi quali Apri, Modifica o Stampa.  I Windows Form non includono alcuna integrazione della shell e non rispondono ai verbi della shell.  
  
-   Modelli di documento  
  
     In MFC i modelli di documento consentono di associare al documento aperto una visualizzazione contenuta in una finestra cornice \(in modalità MDI, SDI o MTI\).  Nei Windows Form non è presente alcun equivalente dei modelli di documento.  
  
-   Documenti  
  
     MFC consente di registrare i tipi di file di documento ed elaborare il tipo di documento quando un documento viene aperto dalla shell.  In Windows Forms non è previsto alcun supporto per i documenti.  
  
-   Stati del documento  
  
     MFC conserva gli stati modificati del documento.  Pertanto quando si chiude l'applicazione, si chiude l'ultima visualizzazione contenente l'applicazione, oppure si esce da Windows, viene richiesto il salvataggio del documento in MFC.  Nei Windows Form non è previsto alcun supporto equivalente.  
  
-   Comandi  
  
     MFC include il concetto di comando.  La barra dei menu, la barra degli strumenti e il menu di scelta rapida consentono tutti di richiamare lo stesso comando, ad esempio Taglia e Copia.  Nei Windows Form i comandi sono eventi strettamente associati a un particolare elemento dell'interfaccia utente \(quale una voce di menu\) ed è pertanto necessario associare tutti gli eventi di comando in modo esplicito.  È inoltre possibile gestire più eventi con un singolo gestore.  Per ulteriori informazioni, vedere [Connessione di più eventi a un singolo gestore eventi in Windows Form](../Topic/How%20to:%20Connect%20Multiple%20Events%20to%20a%20Single%20Event%20Handler%20in%20Windows%20Forms.md).  
  
-   Routing dei comandi  
  
     Il routing dei comandi MFC consente l'elaborazione dei comandi nella visualizzazione o nel documento attivo.  Poiché lo stesso comando assume spesso significati differenti a seconda delle visualizzazioni \(ad esempio, il comportamento del comando Copia è differente a seconda che si trovi nella visualizzazione di modifica del testo o in un editor grafico\), è necessario gestire i comandi dalla visualizzazione attiva.  Dal momento che i menu e le barre degli strumenti di Windows Form non sono in grado di riconoscere la visualizzazione attiva, per utilizzare un gestore differente per ciascun tipo di visualizzazione per gli eventi **MenuItem.Click**, è necessario scrivere prima altro codice interno.  
  
-   Meccanismo di aggiornamento dei comandi  
  
     MFC dispone di un meccanismo di aggiornamento dei comandi.  La visualizzazione o il documento attivo è pertanto responsabile dello stato degli elementi dell'interfaccia utente, ad esempio l'attivazione o la disattivazione di una voce di menu o di un pulsante di uno strumento e degli stati di selezione.  In Windows Form non è disponibile alcun equivalente di tale meccanismo.  
  
## Vedere anche  
 [Utilizzo di un controllo utente Windows Form in MFC](../dotnet/using-a-windows-form-user-control-in-mfc.md)   
 [Windows Forms Walkthroughs](http://msdn.microsoft.com/it-it/fd44d13d-4733-416f-aefc-32592e59e5d9)
---
title: "Controlli ActiveX MFC: licenze di un controllo ActiveX | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "COleObjectFactory"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COleObjectFactory (classe), licenze per controlli"
  - "GetLicenseKey (metodo)"
  - "concessione in licenza di controlli ActiveX"
  - "MFC (controlli ActiveX), concessione in licenza"
  - "VerifyLicenseKey (metodo)"
  - "VerifyUserLicense (metodo)"
ms.assetid: cacd9e45-701a-4a1f-8f1f-b0b39f6ac303
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Controlli ActiveX MFC: licenze di un controllo ActiveX
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Consentendo in licenza il supporto, una funzionalità facoltative controlli ActiveX, consente di controllo che può contenere o distribuire il controllo. \(Per informazioni aggiuntive della licenza dei problemi, vedere licenze relative ai problemi in [Aggiornamento di un controllo ActiveX esistente](../mfc/upgrading-an-existing-activex-control.md)\).  
  
 Questo articolo vengono illustrati i seguenti argomenti:  
  
-   [Cenni preliminari sulla gestione licenze dei controlli ActiveX](#_core_overview_of_activex_control_licensing)  
  
-   [Creare un controllo concesso in licenza](#_core_creating_a_licensed_control)  
  
-   [Gestione delle licenze supporto](#_core_licensing_support)  
  
-   [Personalizzare la gestione delle licenze di un controllo ActiveX](#_core_customizing_the_licensing_of_an_activex_control)  
  
 I controlli ActiveX che implementano le licenze consentono che, durante lo sviluppo del controllo, determinare come altri utenti utilizzerà il controllo ActiveX.  Fornite all'acquirente del controllo con il controllo e il file di .LIC, con il contratto che il sistema può distribuire il controllo, ma non il file di .LIC, con un'applicazione che utilizza il controllo.  In questo modo si impedisce agli utenti dell'applicazione dalle nuove creazione di applicazioni che utilizzano il controllo, senza prima le licenze il controllo che si.  
  
##  <a name="_core_overview_of_activex_control_licensing"></a> Cenni preliminari sulla gestione licenze dei controlli ActiveX  
 Per fornire la gestione licenze il supporto per i controlli ActiveX, la classe di [COleObjectFactory](../mfc/reference/coleobjectfactory-class.md) fornisce un'implementazione per diverse funzioni dell'interfaccia di **IClassFactory2** : **IClassFactory2::RequestLicKey**, **IClassFactory2::GetLicInfo** e **IClassFactory2::CreateInstanceLic**.  Quando lo sviluppatore di un'applicazione contenitore effettua una richiesta di creare un'istanza del controllo, una chiamata a `GetLicInfo` viene eseguita per verificare che il file del controllo .LIC sia presente.  Se il controllo è concesso in licenza, un'istanza del controllo può essere creata e inserita nel contenitore.  Dopo che lo sviluppatore ha completato creare l'applicazione contenitore, un'altra chiamata di funzione, questa volta a `RequestLicKey`, viene terminato.  Questa funzione restituisce un codice di licenza \(una stringa di caratteri semplice\) all'applicazione contenitore.  La chiave restituita verrà quindi incorporata nell'applicazione.  
  
 Nella figura seguente viene illustrata la verifica della licenza di un controllo ActiveX che verrà utilizzato durante lo sviluppo di un'applicazione contenitore.  Come accennato in precedenza, lo sviluppatore di un'applicazione contenitore deve avere il file appropriato di .LIC installato nel computer di sviluppo per creare un'istanza del controllo.  
  
 ![Controllo ActiveX concesso in licenza verificato in fase di sviluppo](../mfc/media/vc374d1.png "vc374D1")  
Verifica di un controllo ActiveX con licenza durante lo sviluppo  
  
 Il processo successivo, illustrata di seguito, si verifica quando l'utente finale esegue l'applicazione contenitore.  
  
 Quando l'applicazione viene avviata, un'istanza del controllo delle necessità in genere di essere creato.  Il contenitore ottenere questo risultato tramite una chiamata a `CreateInstanceLic`, passando il codice di licenza incorporato come parametro.  Un confronto di stringhe viene quindi eseguito tra il codice di licenza incorporato e copia del controllo la propria il codice di licenza.  Se la corrispondenza ha esito positivo, viene creata un'istanza del controllo e l'applicazione continua a essere eseguito normalmente.  Si noti che il file di .LIC non deve essere presente nel computer dell'utente del controllo.  
  
 ![Controllo ActiveX concesso in licenza verificato in fase di esecuzione](../mfc/media/vc374d2.png "vc374D2")  
Verifica di un controllo ActiveX con licenza durante l'esecuzione  
  
 La gestione licenze dei controlli è costituito da due componenti di base: codice specifico nella DLL di implementazione del controllo e il file di licenza.  Il codice è composto da due o eventualmente tre\) chiamate di funzione e una stringa di caratteri, in futuro detta "stringa" di licenza, contenente le informazioni sul copyright.  Queste chiamate e la stringa di licenza disponibili nel file di implementazione del controllo \(.CPP\).  Il file di licenza, generato dalla Creazione guidata controllo ActiveX, è un file di testo con una dichiarazione di copyright.  Viene denominato utilizzando il nome del progetto con estensione .LIC, ad esempio SAMPLE.LIC.  Un controllo concesso in licenza deve essere seguito dal file di licenza se all'utilizzo in fase di progettazione è necessario.  
  
##  <a name="_core_creating_a_licensed_control"></a> Creare un controllo concesso in licenza  
 Quando si utilizza la Creazione guidata controllo ActiveX per creare il framework del controllo, è facile includere la gestione licenze il supporto.  Quando si specifica che il controllo deve disporre di una licenza runtime, la Creazione guidata controllo ActiveX aggiungere il codice alla classe del controllo per supportare la gestione delle licenze.  Il codice costituita da funzioni che utilizzano una chiave e un file di licenza per la verifica della licenza.  Queste funzioni possono essere modificate per personalizzare la gestione licenze dei controlli.  Per ulteriori informazioni sulla personalizzazione della licenza, vedere più avanti [Personalizzare la gestione delle licenze di un controllo ActiveX](#_core_customizing_the_licensing_of_an_activex_control) in questo articolo.  
  
#### Per aggiungere supporto per la gestione licenze con la Creazione guidata controllo ActiveX durante la creazione del progetto di controllo  
  
1.  Utilizzare le istruzioni in [Creare un controllo ActiveX MFC](../mfc/reference/creating-an-mfc-activex-control.md).  La pagina di **Impostazioni applicazione** di Creazione guidata controllo ActiveX contenente la possibilità di creare il controllo alla licenza runtime.  
  
 La Creazione guidata controllo ActiveX ora genera un framework del controllo ActiveX che include il supporto di base della licenza.  Per una spiegazione dettagliata del codice di gestione delle licenze, vedere l'argomento seguente.  
  
##  <a name="_core_licensing_support"></a> Gestione delle licenze supporto  
 Quando si utilizza la Creazione guidata controllo ActiveX per aggiungere licenze il supporto a un controllo ActiveX, la Creazione guidata controllo ActiveX aggiungere il codice che dichiara il caso della funzionalità della licenza viene aggiunto all'intestazione e ai file di implementazione del controllo.  Questo codice è costituita da una funzione membro di `VerifyUserLicense` e una funzione membro di `GetLicenseKey`, che esegue l'override delle implementazioni predefinite presenti in [COleObjectFactory](../mfc/reference/coleobjectfactory-class.md).  Queste funzioni vengono recuperate e verificare la licenza del controllo.  
  
> [!NOTE]
>  Una terza funzione membro, `VerifyLicenseKey` non viene generata dalla Creazione guidata controllo ActiveX, ma è possibile eseguirne l'override per personalizzare il comportamento di verifica del codice di licenza.  
  
 Queste funzioni membro sono:  
  
-   [VerifyUserLicense](../Topic/COleObjectFactory::VerifyUserLicense.md)  
  
     Verifica che il controllo consente l'utilizzo in fase di progettazione controllando il sistema per la presenza del file di licenza del controllo.  Questa funzione viene chiamata dal framework come parte dell'elaborazione **IClassFactory2::GetLicInfo** e **IClassFactory::CreateInstanceLic**.  
  
-   [GetLicenseKey](../Topic/COleObjectFactory::GetLicenseKey.md)  
  
     Richiede una chiave univoca dalla DLL del controllo.  Questa chiave viene incorporata nell'applicazione contenitore e viene utilizzato in un secondo momento, insieme a `VerifyLicenseKey`, per creare un'istanza del controllo.  Questa funzione viene chiamata dal framework come parte dell'elaborazione **IClassFactory2::RequestLicKey**.  
  
-   [VerifyLicenseKey](../Topic/COleObjectFactory::VerifyLicenseKey.md)  
  
     Verifica che la chiave incorporata e la chiave univoca del controllo siano identica.  In questo modo il contenitore creare un'istanza del controllo per il relativo utilizzo.  Questa funzione viene chiamata dal framework come parte dell'elaborazione **IClassFactory2::CreateInstanceLic** e può essere sottoposta a override per fornire la gestione personalizzata del codice di licenza.  L'implementazione predefinita esegue un confronto di stringhe.  Per ulteriori informazioni, vedere [Personalizzare la gestione delle licenze di un controllo ActiveX](#_core_customizing_the_licensing_of_an_activex_control), più avanti in questo articolo.  
  
###  <a name="_core_header_file_modifications"></a> Modifiche ai file di intestazione  
 La Creazione guidata controllo ActiveX inserisce il codice seguente nel file di intestazione del controllo.  In questo esempio, due funzioni membro dell'oggetto `factory` di `CSampleCtrl` vengono dichiarate, uno che verifica la presenza del file del controllo .LIC e un altro che recuperare il codice di licenza da utilizzare nell'applicazione contenente il controllo:  
  
 [!code-cpp[NVC_MFC_AxUI#39](../mfc/codesnippet/CPP/mfc-activex-controls-licensing-an-activex-control_1.h)]  
  
###  <a name="_core_implementation_file_modifications"></a> Modifiche al file di implementazione  
 La Creazione guidata controllo ActiveX posiziona le due istruzioni nel file di implementazione del controllo per dichiarare il nome del file di licenza e per concedere una licenza alla stringa:  
  
 [!code-cpp[NVC_MFC_AxUI#40](../mfc/codesnippet/CPP/mfc-activex-controls-licensing-an-activex-control_2.cpp)]  
  
> [!NOTE]
>  Se si modifica **szLicString** in alcun modo, è inoltre necessario modificare la prima riga nel file del controllo .LIC o le licenze non funzionerà correttamente.  
  
 La Creazione guidata controllo ActiveX inserisce il codice seguente nel file di implementazione del controllo per definire le funzioni di `VerifyUserLicense` e di `GetLicenseKey` delle classi di controlli:  
  
 [!code-cpp[NVC_MFC_AxUI#41](../mfc/codesnippet/CPP/mfc-activex-controls-licensing-an-activex-control_3.cpp)]  
  
 Infine, **ActiveX Control Wizard** modifica il file di progetto di controllo .IDL.  La parola chiave di **licensed** viene aggiunto alla dichiarazione della coclasse del controllo, come illustrato nell'esempio seguente:  
  
 [!code-cpp[NVC_MFC_AxUI#42](../mfc/codesnippet/CPP/mfc-activex-controls-licensing-an-activex-control_4.idl)]  
  
##  <a name="_core_customizing_the_licensing_of_an_activex_control"></a> Personalizzare la gestione delle licenze di un controllo ActiveX  
 Poiché `VerifyUserLicense`, `GetLicenseKey` e `VerifyLicenseKey` vengono dichiarati come virtuale funzioni membro della factory di controllo classe, è possibile personalizzare il comportamento di gestione delle licenze del controllo.  
  
 Ad esempio, è possibile fornire diversi livelli di licenza per il controllo mediante l'override delle funzioni membro di `VerifyLicenseKey` o di `VerifyUserLicense`.  In questa funzione è possibile regolare le proprietà o i metodi esposti all'utente in base al livello della licenza è stato rilevato.  
  
 È inoltre possibile aggiungere codice alla funzione di `VerifyLicenseKey` che fornisce un metodo personalizzato per le informazioni dell'utente che controlla la creazione non riuscita.  Ad esempio, nella funzione membro di `VerifyLicenseKey` possibile visualizzare una finestra di messaggio che informa che il controllo non è riuscito a inizializzare e i motivi.  
  
> [!NOTE]
>  Un altro modo per personalizzare la gestione delle licenze di controllo ActiveX è di controllare il database di registrazione per una chiave specifica del Registro di sistema, anziché chiamare `AfxVerifyLicFile`.  Per un esempio di implementazione predefinita, vedere la sezione di [Modifiche al file di implementazione](#_core_implementation_file_modifications) di questo articolo.  
  
 Per informazioni aggiuntive della licenza dei problemi, vedere licenze relative ai problemi in [Aggiornamento di un controllo ActiveX esistente](../mfc/upgrading-an-existing-activex-control.md).  
  
## Vedere anche  
 [Controlli ActiveX MFC](../mfc/mfc-activex-controls.md)   
 [Creazione guidata controllo ActiveX MFC](../mfc/reference/mfc-activex-control-wizard.md)
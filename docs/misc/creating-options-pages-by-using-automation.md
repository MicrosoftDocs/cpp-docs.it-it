---
title: "Creazione di pagine Opzioni con l&#39;automazione | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "pagine Opzioni del menu Strumenti [Visual Studio SDK], creazione"
  - "automazione [Visual Studio SDK], creazione di pagine Opzioni del menu Strumenti"
ms.assetid: 05ec0337-58fe-4746-8e85-7fb97f285522
caps.latest.revision: 12
caps.handback.revision: 12
manager: "douge"
---
# Creazione di pagine Opzioni con l&#39;automazione
Vspackage gestito può utilizzare l'automazione per estendere l'ambiente di sviluppo integrato di \(IDE\) [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] aggiungendo le pagine di **opzioni** al menu di **strumenti** .  
  
 Una pagina di **Opzioni degli strumenti** è fondamentalmente un controllo utente e è codificata come qualsiasi altro controllo utente.  In genere, si utilizza una delle finestre di progettazione dell'IDE di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] per creare l'oggetto e aggiungere i controlli utente.  
  
> [!NOTE]
>  Le pagine di**Opzioni degli strumenti** implementate come finestra di dialogo, utilizzando `DialogProc` per gestire i messaggi di windows, devono essere finestre di dialogo non modale e non devono chiamare la funzione di `EndDialog` .  
  
 È necessario utilizzare l'oggetto ActiveX che il package VS fornisce all'ambiente alle proprietà del controllo utente di supporto.  
  
## Supporto di automazione per le pagine Strumenti Opzioni distribuite con gli assembly di interoperabilità  
 Per supportare il modello di automazione, un VSPackage necessario creare e registrare un oggetto di automazione.  Per ulteriori informazioni, vedere [Fornisce l'automazione per i package VS](../Topic/Providing%20Automation%20for%20VSPackages.md).  
  
 Quando il codice che utilizza il modello di automazione chiama `DTE.Properties` per la raccolta delle proprietà di pagina specificata di **Opzioni degli strumenti** , l'ide utilizza l'oggetto ActiveX fornito dall'implementazione del package VS di <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage.GetAutomationObject%2A> per restituire la raccolta e per consentire l'accesso ai relativi oggetti che fanno parte di <xref:EnvDTE.Property> .  
  
 **Nota** l'oggetto ActiveX restituito da <xref:Microsoft.VisualStudio.Shell.Interop.IVsPackage.GetAutomationObject%2A> dipende dal GUID fornito \(come un VSPackage può supportare più di un oggetto ActiveX\).  Per ulteriori informazioni sulla distribuzione degli oggetti di automazione, vedere [Supporto di automazione per le pagine di opzioni](../Topic/Automation%20Support%20for%20Options%20Pages.md).  
  
 Una pagina di **Opzioni degli strumenti** viene specificata da due identificatori.  Il primo identificatore è una stringa che indica la cartella contenente l'elemento della sezione di **opzioni** del menu di **strumenti** .  Il secondo identificatore è una stringa che indica l'elemento specifico nella cartella.  Per ulteriori informazioni, vedere [Uso delle pagine Opzioni](../misc/using-options-pages.md).  
  
 Due voci del Registro di sistema sono necessarie registrare un oggetto ActiveX:  
  
-   sotto HKEY\_LOCAL\_MACHINE \\SOFTWARE\\Microsoft\\VisualStudio\\Version \\Packages\\PackageGUID\\Automation  
  
-   sotto HKEY\_LOCAL\_MACHINE \\SOFTWARE\\Microsoft\\VisualStudio \\ *\<versione\>* \\AutomationProperties  
  
     dove  *\<versione\>*  è la versione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] \(ad esempio 8,0\) e  *\<PackageGUID\>*  è il GUID del pacchetto VS che implementa l'oggetto ActiveX.  
  
 A seconda della configurazione sotto la voce del Registro di sistema AutomationProperties, lo stato di una pagina di **Opzioni degli strumenti** possibile automaticamente essere salvato e ripristinato tramite il meccanismo delle impostazioni di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] quando un utente seleziona il comando di **Impostazioni esportazione\/importazione** scegliere dal menu di **strumenti** .  Per ulteriori informazioni sul salvataggio delle impostazioni di **Opzioni degli strumenti** , vedere [Registrazione delle pagine Opzioni personalizzate](../misc/registering-custom-options-pages.md).  
  
 Un'applicazione non può utilizzare il modello di automazione per implementare il supporto per le proprietà e alle impostazioni di una pagina di **Opzioni degli strumenti** .  
  
 Questa operazione può essere utile per molte ragioni:  
  
-   Le impostazioni gestite dalla pagina di **Opzioni degli strumenti** sono più complesse in struttura che cosa il modello relativamente piano della proprietà di automazione supporta.  
  
-   Esiste una necessità di impedire altre applicazioni a livello di codice gestisca la pagina di **Opzioni degli strumenti** .  
  
-   I controlli di accesso o funzioni di sicurezza speciali sono necessari.  
  
 In questi casi, Vspackage possibile implementare il supporto della pagina di **Opzioni degli strumenti** in alcun modo appropriato.  tuttavia, devono:  
  
-   Gestire l'impostazione delle proprietà della pagina di **Opzioni degli strumenti** .  
  
-   Gestire la persistenza dello stato della pagina di **Opzioni degli strumenti** tramite le impostazioni di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] .  
  
-   Fornire un'api, se richiesto, per altre applicazioni utilizzeranno la pagina di **Opzioni degli strumenti** .  
  
 Le proprietà della finestra di dialogo di **Tipi di carattere e colori** è un esempio di una pagina di **Opzioni degli strumenti** che non può essere modificata tramite il modello di automazione.  Invece, un'api separato viene fornito, in base all'interfaccia di <xref:Microsoft.VisualStudio.Shell.Interop.IVsFontAndColorDefaults> per consentire la modifica a livello di codice della pagina di **Tipi di carattere e coloriOpzioni degli strumenti** .  Per ulteriori informazioni sul controllo della pagina di **Tipi di carattere e coloriOpzioni degli strumenti** , vedere [Utilizzando i tipi di carattere e colori](../Topic/Using%20Fonts%20and%20Colors.md).  
  
## Supporto di automazione per le pagine Strumenti Opzioni all'interno del pacchetto gestito Framework  
 Impostare la proprietà di <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute.SupportsAutomation%2A> dell'istanza di registrazione di <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> di un'implementazione per indicare che un'implementazione gestita di Framework\-base del pacchetto di una pagina di **Opzioni degli strumenti** supporta l'automazione.  
  
 Le pagine di**Opzioni degli strumenti** derivate da <xref:Microsoft.VisualStudio.Shell.DialogPage> viene fornita con un oggetto ActiveX predefinito, che può essere sottoposto a override.  
  
 Se l'implementazione della pagina di **Opzioni degli strumenti** non supporta l'automazione, l'implementazione di deve fornire il proprio API per consentire l'accesso a livello di codice alla pagina di **Opzioni degli strumenti** .  
  
> [!NOTE]
>  La pagina di **Tipi di carattere e colori** dell'IDE è un esempio di una pagina di **Opzioni degli strumenti** che non supporta l'automazione, ma fornisce l'accesso alla pagina di **Opzioni degli strumenti** con il proprio API.  Per ulteriori informazioni, vedere [Utilizzando i tipi di carattere e colori](../Topic/Using%20Fonts%20and%20Colors.md).  
  
## Vedere anche  
 [Estensione dell'ambiente Visual Studio](../Topic/Extending%20the%20Visual%20Studio%20Environment.md)   
 [Creazione di pagine Opzioni con gli assembly di interoperabilità](../misc/creating-options-pages-by-using-interop-assemblies.md)   
 [Creazione di pagine di opzioni](../Topic/Creating%20Options%20Pages.md)   
 [Procedura: creare pagine delle opzioni personalizzate](../Topic/How%20to:%20Create%20Custom%20Options%20Pages.md)   
 [Creating Registrar Scripts](../atl/creating-registrar-scripts.md)   
 [Supporto di automazione per le pagine di opzioni](../Topic/Automation%20Support%20for%20Options%20Pages.md)   
 [Uso delle pagine Opzioni](../misc/using-options-pages.md)
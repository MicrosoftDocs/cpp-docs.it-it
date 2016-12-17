---
title: "Registrazione delle pagine Opzioni personalizzate | Microsoft Docs"
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
  - "registrazione, pagine Opzioni del menu Strumenti personalizzate"
  - "pagine Opzioni del menu Strumenti [Visual Studio SDK], registrazione"
ms.assetid: 0ac6377d-a679-4f7d-be80-451c829b56f2
caps.latest.revision: 28
caps.handback.revision: 28
manager: "douge"
---
# Registrazione delle pagine Opzioni personalizzate
Inserimento di una pagina **Tools Options** sia disponibile per gli utenti e all'automazione di supporto, deve correttamente essere registrata con l'ambiente di sviluppo integrato di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] \(IDE\).  
  
 le pagine di**Tools Options** basate sul framework gestito del pacchetto vengono registrate applicando un'istanza di <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> al package VS che fornisce la pagina.  Il supporto di automazione viene visualizzato impostando la proprietà di <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute.SupportsAutomation%2A> a `true`.  
  
## Registrazione della pagina delle Opzioni degli Strumenti  
 L'integrazione della pagina personalizzata **Tools Options** con [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] richiede la creazione di una voce del Registro di sistema nel percorso seguente: HKEY\_LOCAL\_MACHINE \\ SOFTWARE \\ Microsoft \\ VisualStudio \\*\<versione\>*\\ ToolsOptionsPages, dove *\<versione\>* è la versione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], ad esempio 8,0.  
  
 La voce dispone di una chiave primaria alla categoria \(`<PageCategory>`\) della pagina **Tools Options** e una sottochiave che contiene il nome della sottocategoria della pagina \(`<PageSubCategory>`\).  
  
 Ad esempio, la pagina **Tools Options** identificata con la stringa, **TextEditor.Basic**, ha un \=textEditor di `<PageCategory>`la chiave del Registro di sistema con una sottochiave di `<PageSubCategory>`\=Basic.  
  
 La struttura della voce del Registro di sistema è di seguito:  
  
 HKLM \\ software \\ Microsoft \\ VisualStudio \\*\<versione\>*\\ \\ ToolsOptionsPages  
  
 `<PageCategory>` \= '\#12345'  
  
 pacchetto \= “{}„  
  
 ResourcePackage \= “{AAAA YYYYYYYYY yyyy yyyy di YYYYYY}„  
  
 HKLM \\ software \\ Microsoft \\ VisualStudio \\*\<versione\>*\\ ToolsOptionsPages \\`<PageCategory>`  
  
 `<PageSubCategory>>` \= '\#67890'  
  
 pagina \= “{ZZZZZZ ZZZZ ZZZZ ZZZZ ZZZZZZZZZ}„  
  
 pacchetto \= “{AAAAAA AAAA AAAA AAAA AAAAAAAAA}„  
  
 ResourcePackage \= “{BBBBBB BBBB BBBB BBBB BBBBBBBBB}„  
  
 NoShowAllView \= 0\/1  
  
 Nella tabella seguente sono elencati i valori in HKLM \\ software \\ Microsoft \\ VisualStudio \\*\<versione\>*\\ ToolsOptionsPages \\`<PageCategory>`.  
  
|Nome|Type|Dati|Descrizione|  
|----------|----------|----------|-----------------|  
|\(Valore predefinito\)|REG\_SZ|Il nome della categoria canonico della pagina personalizzata **Tools Options**|Il nome della chiave, `<PageCategory>`, è il nome della categoria non localizzato canonico della pagina **Tools Options** . **Note:**  Se l'automazione è supportata, i nomi non localizzati canonici di sottocategorie e di categoria vengono utilizzati per ottenere la raccolta di <xref:EnvDTE.Properties> di una pagina **Tools Options** .  Per ulteriori informazioni, vedere [Uso delle pagine Opzioni](../misc/using-options-pages.md). <br /><br /> Per le implementazioni basate sul framework gestito del pacchetto, il \> di `<PageCategory`viene ottenuto dall'argomento di `categoryName` al costruttore di <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> .<br /><br /> La chiave può essere vuota, oppure può contenere il riferimento ID alla stringa localizzata nella DLL satellite di un'implementazione.<br /><br /> Per le implementazioni basate sul framework gestito del pacchetto, questo valore viene ottenuto dall'argomento di `categoryResourceID` al costruttore di <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> .|  
|Pacchetto|REG\_SZ|GUID|Il GUID del pacchetto VS che implementa la pagina personalizzata **Tools Options** .<br /><br /> Implementazioni basate sul framework gestito del pacchetto utilizzando la reflection di utilizzo di <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> per ottenere questo valore.|  
|ResourcePackage|REG\_SZ|GUID|Parametro facoltativo.<br /><br /> Una DLL satellite contenente stringhe localizzate se il package VS di implementazione non ne garantisce.<br /><br /> Il framework gestito del pacchetto utilizza la reflection per ottenere il pacchetto corretto delle risorse, in modo da <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> non imposta questo argomento.|  
  
 Nella tabella seguente sono elencati i valori in HKLM \\ software \\ Microsoft \\ VisualStudio \\*\<versione\>*\\ ToolsOptionsPages \\`<PageCategory>`\\`<PageSubCategory>`.  
  
|Nome|Type|Dati|Descrizione|  
|----------|----------|----------|-----------------|  
|\(Valore predefinito\)|REG\_SZ|Il nome canonico di sottocategoria della pagina personalizzata **Tools Options**|Il nome della chiave, \> di `<PageSubCategory`, è il nome non localizzato canonico la sottocategoria della pagina **Tools Options** . **Note:**  Se l'automazione è supportata, i nomi non localizzati canonici di sottocategorie e di categoria vengono utilizzati per ottenere la raccolta di <xref:EnvDTE.Properties> di una pagina **Tools Options** .  Per ulteriori informazioni, vedere [Uso delle pagine Opzioni](../misc/using-options-pages.md). <br /><br /> Per le implementazioni basate sul framework gestito del pacchetto, il \> di `<PageSubegory`viene ottenuto dall'argomento di `pageName` al costruttore di <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> .<br /><br /> La chiave può essere vuota, oppure può contenere il riferimento ID alla stringa localizzata in una DLL satellite di un'implementazione.<br /><br /> Per le implementazioni basate sul framework gestito del pacchetto, questo valore viene ottenuto dall'argomento di `pageNameResourceID` al costruttore di <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> .|  
|Page|REG\_SZ|GUID|Il GUID dell'oggetto che implementa la pagina personalizzata **Tools Options** .<br /><br /> Le implementazioni basate sul framework gestito del pacchetto tramite <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> utilizzano l'argomento di `pageType` del costruttore che contiene <xref:System.Type> e reflection del package VS per ottenere questo valore.|  
|Pacchetto|REG\_SZ|GUID|Implementazioni basate sul framework gestito del pacchetto utilizzando la reflection di utilizzo di <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> per ottenere questo valore.|  
|ResourcePackage|REG\_SZ|GUID|Parametro facoltativo.<br /><br /> Una DLL satellite contenente stringhe localizzate se il package VS di implementazione non ne garantisce.<br /><br /> Il framework gestito del pacchetto utilizza la reflection per ottenere la DLL corretto delle risorse, in modo da <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> non imposta questo argomento.|  
|NoShowAllView|REG\_DWORD|0 o 1|Parametro facoltativo.<br /><br /> Indica se una determinata pagina **Tools Options** deve essere visualizzata nella visualizzazione \(predefinita\) complessa delle pagine **Tools Options** .  Ambienti di supporta la programmazione, ad esempio Visual Basic, con pagine **Tools Options** speciale per aggregare le impostazioni comuni per fornire agli utenti con le visualizzazioni semplificate specifiche delle opzioni.<br /><br /> Se la voce di REG\_DWORD è diversa da zero, la pagina **Tools Options** non viene visualizzata in una visualizzazione complessa.<br /><br /> Per ulteriori informazioni, vedere [Finestra di dialogo Opzioni](../Topic/Options%20Dialog%20Box%20\(Visual%20Studio\).md).<br /><br /> Le implementazioni basate sul framework gestito del pacchetto possono impostare questo valore impostando la proprietà di <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute.NoShowAllView%2A> a `true` nel costruttore di <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> .|  
  
 Un VSPackage o un oggetto basato di un singolo assembly di interoperabilità può implementare più pagine **Tools Options** .  ogni implementazione richiede una nuova voce in HKLM \\ software \\ Microsoft \\ VisualStudio \\*\<versione\>*\\ ToolsOptionsPages.  
  
 Quando il framework gestito del pacchetto creare un'istanza dell'oggetto che fornisce una pagina **Tools Options** , in ogni pagina deve disporre di un oggetto di implementazione, indipendente dall'implementazione di un package VS di <xref:Microsoft.VisualStudio.Shell.Package>.  
  
## Supporto per l'automazione  
 Se il supporto di automazione viene utilizzato per implementare una pagina **Tools Options** , è necessario registrarsi come provider di automazione.  Per utilizzare l'automazione per la gestione della proprietà e utilizzare i meccanismi di persistenza per salvare lo stato della pagina **Tools Options** , è necessario registrarsi come provider di `AutomationProperty` .  
  
### Registrare un VSPackage come provider di automazione \(solo per le pagine le Opzioni degli Strumenti basate degli assembly di interoperabilità\)  
 le pagine di**Tools Options** in base a un assembly di interoperabilità vengono implementate come parte delle classi dell'implementazione di un VSPackage.  
  
 In questo caso, se una pagina **Tools Options** consiste nel supportare l'automazione, il package VS basato su assembly di interoperabilità deve essere registrato come provider di automazione.  
  
> [!NOTE]
>  Il supporto di automazione nel framework gestito del pacchetto è fornito da un oggetto indipendente dall'implementazione del package VS.  Se l'oggetto supporta l'automazione, questo viene registrato tramite la proprietà di <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute.SupportsAutomation%2A> del costruttore di <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> .  
  
 La voce per registrare un VSPackage come provider di automazione è nel formato HKEY\_LOCAL\_MACHINE \\ SOFTWARE \\ Microsoft \\ VisualStudio \\*\<versione\>*\\ package \\*\<PackageGUID\>*\\ automazione, dove *\<versione\>* è la versione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] \(ad esempio 8,0\) e *\<PackageGUID\>* è il GUID del pacchetto VS che implementa l'oggetto ActiveX.  
  
> [!NOTE]
>  Il percorso radice HKEY\_LOCAL\_MACHINE \\ SOFTWARE \\ Microsoft \\ VisualStudio \\*\<versione\>* è possibile eseguire l'override con alternanza la radice quando la shell di Visual Studio viene inizializzato.  Per ulteriori informazioni, vedere [Opzioni della riga di comando](../Topic/Command-Line%20Switches%20\(Visual%20Studio%20SDK\).md).  
  
 La struttura della voce del Registro di sistema è:  
  
 HKEY\_LOCAL\_MACHINE \\ SOFTWARE \\ Microsoft \\ VisualStudio \\*\<versione\>*\\ package \\*\<PackageGUID\>*\\ automazione  
  
 `<AutomationObjectName>`  
  
|Nome|Type|Dati|Descrizione|  
|----------|----------|----------|-----------------|  
|Automazione|REG\_SZ|non definito|Non definito.<br /><br /> La presenza di questa chiave indica che il package VS è riferito a da automazione di supportare di *\<PackageGUID\>* .<br /><br /> Il campo può essere utilizzato per archiviare la documentazione.<br /><br /> <xref:Microsoft.VisualStudio.Shell.ProvideAutomationObjectAttribute> crea automaticamente questa chiave per le applicazioni basate sul framework gestito del pacchetto.|  
|`<AutomationObjectName>`|REG\_SZ|Il nome canonico dell'oggetto ActiveX specificato|Solo il nome della chiave è rilevante.  Viene utilizzata nelle operazioni di automazione.<br /><br /> Il campo può essere utilizzato per archiviare la documentazione.<br /><br /> Per le implementazioni basate sul framework gestito del pacchetto, il nome della chiave è determinato dall'argomento di `name` al costruttore di <xref:Microsoft.VisualStudio.Shell.ProvideAutomationObjectAttribute> .<br /><br /> Se il costruttore di <xref:Microsoft.VisualStudio.Shell.ProvideAutomationObjectAttribute> ha una stringa valida fornita alla proprietà di <xref:Microsoft.VisualStudio.Shell.ProvideAutomationObjectAttribute.Description%2A> , questo valore è qui.|  
  
### Registrare una pagina delle Opzioni degli Strumenti come automazione di supporto  
 Entrambi a implementazioni basate su assembly di interoperabilità gestite della struttura del package e le pagine **Tools Options** dovranno registrarlo per consentire l'accesso di automazione a una pagina **Tools Options** .  Sono inclusi i meccanismi e l'accesso di persistenza della proprietà di automazione nella pagina con <xref:EnvDTE>.  Ciò è indipendente dalla registrazione del package VS stessa come provider di servizi di automazione.  
  
 Come per la registrazione della pagina **Tools Options** accennato in precedenza, la voce dispone di una chiave primaria alla categoria \(`<PageCategory>`\) della pagina **Tools Options** e una sottochiave che contiene il nome della sottocategoria della pagina \(`<PageSubcategory>`\).  
  
 Se si utilizza il framework gestito del pacchetto, utilizzare <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> per registrare una classe come fornire una pagina **Tools Options** e impostare la proprietà di <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute.SupportsAutomation%2A> a `true` per indicare che la pagina supporta l'automazione.  
  
 La voce del Registro di sistema è contenuta in HKEY\_LOCAL\_MACHINE \\ SOFTWARE \\ Microsoft \\ VisualStudio \\*\<versione\>*\\ AutomationProperties, dove *\<versione\>* è la versione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], ad esempio 8,0.  
  
> [!NOTE]
>  Il percorso radice HKEY\_LOCAL\_MACHINE \\ SOFTWARE \\ Microsoft \\ VisualStudio \\*\<versione\>* è possibile eseguire l'override con alternanza la radice quando la shell di Visual Studio viene inizializzato, per ulteriori informazioni, vedere [Opzioni della riga di comando](../Topic/Command-Line%20Switches%20\(Visual%20Studio%20SDK\).md).  
  
 La struttura della voce del Registro di sistema è di seguito:  
  
 HKEY\_LOCAL\_MACHINE \\ SOFTWARE \\ Microsoft \\ VisualStudio \\*\<versione\>\\*AutomationProperties  
  
 `<PageCategory>` \= ‘\#456’  
  
 ResourcePackage \= “{}„  
  
 `<PageSubCategory>` \= ‘\#789’  
  
 Pacchetto \= “{AAAA YYYYYYYYY yyyy yyyy di YYYYYY}„  
  
 nome \= “`<PageCategory>` .`<PageSubcategory>`„  
  
 “ProfileSave„ \= 1\/0  
  
 Nella tabella seguente sono elencati i valori sotto HKEY\_LOCAL\_MACHINE \\ SOFTWARE \\ Microsoft \\ VisualStudio \\*\<versione\>*\\ AutomationProperties \\`<PageCategory>`.  
  
|Nome|Type|Dati|Descrizione|  
|----------|----------|----------|-----------------|  
|\(Valore predefinito\)|REG\_SZ|Il nome della categoria canonico della pagina personalizzata **Tools Options**|Il nome della chiave, \> di `<PageCategory`, è il nome non localizzato canonico della categoria della pagina **Tools Options** . **Note:**  Se l'automazione è supportata, i nomi non localizzati canonici di sottocategorie e di categoria vengono utilizzati per ottenere la raccolta di <xref:EnvDTE.Properties> di una pagina **Tools Options** .  Per ulteriori informazioni, vedere [Uso delle pagine Opzioni](../misc/using-options-pages.md). <br /><br /> La chiave può essere vuota, oppure può contenere il riferimento ID alla stringa localizzata nella DLL satellite di un'implementazione.<br /><br /> Per le implementazioni basate sul framework gestito del pacchetto, il \> di `<PageCategory`viene ottenuto dall'argomento di `categoryName` al costruttore di <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> .|  
|ResourcePackage|REG\_SZ|GUID|Parametro facoltativo.<br /><br /> Una DLL satellite contenente stringhe localizzate se il package VS di implementazione non ne garantisce.<br /><br /> Il framework gestito del pacchetto utilizza la reflection per ottenere la risorsa corretta package VS, in modo da <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> non imposta questo argomento.|  
  
 Nella tabella seguente sono elencati i valori sotto HKEY\_LOCAL\_MACHINE \\ SOFTWARE \\ Microsoft \\ VisualStudio \\*\<versione\>*\\ AutomationProperties \\`<PageCategory>\<PageSubCategory>`.  
  
|Nome|Type|Dati|Descrizione|  
|----------|----------|----------|-----------------|  
|\(Valore predefinito\)|REG\_SZ|Il nome di sottocategoria della pagina personalizzata **Tools Options**|Il nome della chiave, \> di `<PageSubCategory`, è il nome non localizzato canonico la sottocategoria della pagina **Tools Options** . **Note:**  Se l'automazione è supportata, i nomi non localizzati canonici di sottocategorie e di categoria vengono utilizzati per ottenere la raccolta di <xref:EnvDTE.Properties> di una pagina **Tools Options** .  Per ulteriori informazioni, vedere [Uso delle pagine Opzioni](../misc/using-options-pages.md). <br /><br /> La chiave può essere vuota, oppure può contenere il riferimento ID alla stringa localizzata nella DLL satellite di un'implementazione.<br /><br /> Per le implementazioni basate sul framework gestito del pacchetto, `<PageSubCategory>` viene ottenuto dall'argomento di `pageName` al costruttore di <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> .|  
|Pacchetto|REG\_SZ|GUID|Il GUID del pacchetto VS che implementa la pagina personalizzata **Tools Options** .<br /><br /> Implementazioni basate sul framework gestito del pacchetto utilizzando la reflection di utilizzo di <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> per ottenere questo valore.|  
|Nome|REG\_SZ|Nome delle proprietà della pagina **Tools Options** di raccolta|La stringa di `<PageCategory>.<PageSubCategory>` utilizzata per fare riferimento alla pagina **Tools Options** .  Per ulteriori informazioni, vedere [Uso delle pagine Opzioni](../misc/using-options-pages.md).<br /><br /> Per le implementazioni basate sul framework gestito del pacchetto, il nome viene ottenuto dagli argomenti al costruttore di <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> e è nel formato `categoryName.pageName`.|  
|ProfileSave|DWORD|1\/0|Parametro facoltativo.<br /><br /> Questo valore indica se le impostazioni **Tools Options** vengono salvate dal meccanismo delle impostazioni di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] quando un utente sceglie il comando **Import\/Export Settings** scegliere dal menu **Strumenti** .<br /><br /> Se la chiave è presente e il relativo valore è 1, la pagina **Tools Options** sta richiedendo il supporto delle impostazioni.<br /><br /> Le implementazioni basate sul framework gestito del pacchetto impostare questo valore se il costruttore di <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute> viene fornito con la proprietà di <xref:Microsoft.VisualStudio.Shell.ProvideOptionPageAttribute.SupportsProfiles%2A> a `true`.|  
  
## Vedere anche  
 [Creating Registrar Scripts](../atl/creating-registrar-scripts.md)   
 [Uso delle pagine Opzioni](../misc/using-options-pages.md)   
 [Creazione di pagine Opzioni con gli assembly di interoperabilità](../misc/creating-options-pages-by-using-interop-assemblies.md)   
 [Procedura: creare pagine delle opzioni personalizzate](../Topic/How%20to:%20Create%20Custom%20Options%20Pages.md)   
 [Pagine Opzioni](../misc/options-pages.md)   
 [Supporto di automazione per le pagine di opzioni](../Topic/Automation%20Support%20for%20Options%20Pages.md)
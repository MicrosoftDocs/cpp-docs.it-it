---
title: "Supporto per le categorie di impostazioni | Microsoft Docs"
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
  - "impostazioni, supporto con Visual Studio SDK"
  - "Visual Studio SDK, supporto delle impostazioni"
ms.assetid: 3bac375d-8bd5-41be-a8de-32eb33c5cfac
caps.latest.revision: 20
caps.handback.revision: 20
manager: "douge"
---
# Supporto per le categorie di impostazioni
Una categoria di impostazioni è costituita da un gruppo di opzioni che consentono di personalizzare l'ambiente di sviluppo integrato \(IDE\). Ad esempio, le impostazioni possono controllare il layout delle finestre di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] e il contenuto del menu. Per altre informazioni, vedere [Personalizzazione delle impostazioni di sviluppo in Visual Studio](http://msdn.microsoft.com/it-it/22c4debb-4e31-47a8-8f19-16f328d7dcd3).  
  
 Nel menu **Strumenti** fare clic su **Importa\/Esporta impostazioni** per avviare l'**Importazione\/Esportazione guidata delle impostazioni**. La procedura guidata offre tre opzioni: esportazione, importazione o reimpostazione delle impostazioni. Selezionando l'esportazione, ad esempio, si apre la pagina **Scegliere le impostazioni da esportare** della procedura guidata.  
  
 Il controllo struttura ad albero nel riquadro di spostamento di questa pagina elenca le categorie. Una categoria è un gruppo di impostazioni correlate che sono visualizzate come un "punto di impostazioni personalizzate", vale a dire come una casella di controllo. Queste caselle di controllo si usano per selezionare le categorie che devono essere permanenti in un file .vsettings. La procedura guidata consente di denominare il file .vsettings e specificare il relativo percorso.  
  
> [!NOTE]
>  Le impostazioni sono salvate o ripristinate come una categoria e i nomi delle singole impostazioni non sono visualizzati nella procedura guidata.  
  
 Il framework di pacchetto gestito \(MPF\) supporta la creazione di categorie di impostazioni con un minimo di codice aggiuntivo.  
  
-   Un VSPackage viene creato per fornire un contenitore per la categoria mediante la creazione di una sottoclasse della classe <xref:Microsoft.VisualStudio.Shell.Package>.  
  
-   La categoria stessa viene creata mediante la derivazione dalla classe <xref:Microsoft.VisualStudio.Shell.DialogPage>.  
  
-   Le due vengono connesse con il <xref:Microsoft.VisualStudio.Shell.ProvideProfileAttribute>.  
  
## Supporto per le categorie di impostazioni  
 La classe <xref:Microsoft.VisualStudio.Shell.Package> offre il supporto per la creazione di categorie. La classe <xref:Microsoft.VisualStudio.Shell.DialogPage> implementa una categoria. L'implementazione predefinita di <xref:Microsoft.VisualStudio.Shell.DialogPage> offre le sue proprietà pubbliche all'utente come categoria. Per altre informazioni, vedere [Creazione di una categoria di impostazioni](../Topic/Creating%20a%20Settings%20Category.md).  
  
 La classe <xref:Microsoft.VisualStudio.Shell.DialogPage> implementa <xref:Microsoft.VisualStudio.Shell.IProfileManager>, che fornisce la persistenza sia per le pagine di opzioni che per le impostazioni dell'utente. I metodi <xref:Microsoft.VisualStudio.Shell.IProfileManager.LoadSettingsFromXml%2A> e <xref:Microsoft.VisualStudio.Shell.IProfileManager.SaveSettingsToXml%2A> mantengono le impostazioni in un file .vssettings che [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] fornisce come <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsReader> o <xref:Microsoft.VisualStudio.Shell.Interop.IVsSettingsWriter> rispettivamente. Il metodo <xref:Microsoft.VisualStudio.Shell.IProfileManager.ResetSettings%2A> riporta le impostazioni ai valori predefiniti.  
  
 La classe <xref:Microsoft.VisualStudio.Shell.DialogPage> fornisce un'implementazione del metodo <xref:Microsoft.VisualStudio.Shell.DialogPage.LoadSettingsFromXml%2A> che legge le coppie nome\-valore del feed XML e usa la reflection per individuare le proprietà pubbliche nella classe <xref:Microsoft.VisualStudio.Shell.DialogPage> derivata. Alle proprietà che hanno nomi corrispondenti alle coppie nome\-valore vengono assegnati i valori corrispondenti.  
  
 L'implementazione predefinita di <xref:Microsoft.VisualStudio.Shell.DialogPage.SaveSettingsToXml%2A> usa la reflection per individuare le proprietà pubbliche nella classe <xref:Microsoft.VisualStudio.Shell.DialogPage> derivata e scrive i nomi e i valori delle proprietà nel feed XML come coppie nome\-valore.  
  
### Percorso del Registro di sistema della categoria di impostazioni  
 Il percorso del Registro di sistema per la categoria di impostazioni è determinato dalla combinazione di <xref:Microsoft.VisualStudio.Shell.Package.ApplicationRegistryRoot%2A>, parola, UserSettings, categoria di impostazioni e nome del punto di impostazioni personalizzate. I nomi della categoria di impostazioni e il punto di impostazioni personalizzate sono uniti e separati da un trattino basso \(\_\) per formare il nome canonico, non localizzato, che viene visualizzato nel Registro di sistema. Ad esempio, se la categoria di impostazioni è "My Category", il nome del punto di impostazioni personalizzate "My Settings" e ApplicationRegistryRoot HKEY\_LOCAL\_MACHINE\\SOFTWARE\\Microsoft\\VisualStudio\\8.0Exp, la categoria di impostazioni ha come chiave del Registro di sistema HKEY\_LOCAL\_MACHINE\\SOFTWARE\\Microsoft\\VisualStudio\\8.0Exp\\UserSettings\\My Category\_My Settings.  
  
> [!NOTE]
>  Il nome canonico non compare in un'interfaccia utente \(UI\). Viene usato per associare un nome leggibile con la categoria di impostazioni, analogamente a un identificatore a livello di codice \(ProgID\).  
  
### Attributo di categoria di impostazioni  
 <xref:Microsoft.VisualStudio.Shell.ProvideProfileAttribute> determina il mapping delle categorie per i punti in impostazioni personalizzate nell'**Importazione\/Esportazione guidata delle impostazioni** associando una categoria con il VSPackage che la fornisce. Si consideri il frammento di codice riportato di seguito.  
  
 [!code-vb[VSSDKSupportForSettingsCategories#1](../misc/codesnippet/VisualBasic/support-for-settings-categories_1.vb)]
 [!code-cs[VSSDKSupportForSettingsCategories#1](../misc/codesnippet/CSharp/support-for-settings-categories_1.cs)]  
  
 L'ID risorsa 106 viene mappato a "My Category", il 107 a "My Settings" e il 108 a "Various Options". Questo dichiara che `MyPackage` fornisce la categoria, My Category\_My Settings. La categoria è fornita dalla classe `OptionsPageGeneral` che deve implementare <xref:Microsoft.VisualStudio.Shell.IProfileManager>. Le impostazioni in tale categoria sono le proprietà pubbliche della classe `OptionsPageGeneral`.  
  
 Nell'**Importazione\/Esportazione guidata delle impostazioni** il punto di impostazioni ha il nome My Settings. Se il punto di impostazioni è selezionato, compare la descrizione, **Various Options**. Il nome e la descrizione del punto di impostazioni provengono da risorse stringa localizzate.  
  
## Vedere anche  
 [Creazione di una pagina di opzioni](../Topic/Creating%20an%20Options%20Page.md)   
 [Esempi di VSSDK](../misc/vssdk-samples.md)   
 [Stato di un pacchetto VSPackage](../misc/vspackage-state.md)   
 [Personalizzazione delle impostazioni di sviluppo in Visual Studio](http://msdn.microsoft.com/it-it/22c4debb-4e31-47a8-8f19-16f328d7dcd3)
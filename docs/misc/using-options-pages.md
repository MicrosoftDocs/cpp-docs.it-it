---
title: "Uso delle pagine Opzioni | Microsoft Docs"
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
  - "Pagine Opzioni del menu Strumenti [Visual Studio SDK], utilizzo"
ms.assetid: 5ae6b995-3aeb-43a7-9786-4cf69faa101c
caps.latest.revision: 36
caps.handback.revision: 36
manager: "douge"
---
# Uso delle pagine Opzioni
Il modello di automazione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] fornisce l'oggetto <xref:EnvDTE.DTE> per permettere ai pacchetti VSPackage di accedere alla finestra di dialogo **Opzioni** tramite il menu **Strumenti**.  
  
 In genere, è possibile accedere alle pagine nella finestra di dialogo **Opzioni** usando il modello di automazione, sia se le pagine sono fornite dall'ambiente di sviluppo integrato \(IDE, Integrated Development Environment\) di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] sia se sono fornite da un pacchetto VSPackage. Esistono tuttavia alcune eccezioni, indicate di seguito:  
  
-   Non è possibile accedere a livello di codice alle impostazioni della pagina **Guida dinamica**. La funzionalità **Guida dinamica** può essere controllata usando il modello di automazione, ma il controllo deve essere eseguito direttamente nel codice. Per altre informazioni, vedere [How to: Control the Dynamic Help Window](http://msdn.microsoft.com/it-it/7f5777aa-c270-4058-a175-8ce8a4ed25eb).  
  
-   Il controllo delle impostazioni della pagina **Tipi di carattere e colori** viene fornito tramite l'API e non attraverso il modello di automazione. Per altre informazioni, vedere [Utilizzando i tipi di carattere e colori](../Topic/Using%20Fonts%20and%20Colors.md).  
  
-   Le proprietà specifiche del linguaggio non possono essere ottenute tramite il modello di automazione.  
  
 Le pagine **Opzioni** che non supportano il modello di automazione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] potrebbero non restituire una raccolta <xref:EnvDTE.Properties> di automazione se soggette a query. Se la raccolta viene restituita, non tutte le funzionalità sono presenti. Per altre informazioni su come gestire queste funzionalità, vedere [Raccolte Properties di DTE](../Topic/DTE%20Properties%20Collections.md).  
  
## Gestione delle pagine Opzioni  
 Per gestire le pagine **Opzioni**, un pacchetto VSPackage deve ottenere un oggetto <xref:EnvDTE.DTE> dal modello di automazione.  
  
> [!NOTE]
>  Quando un pacchetto VSPackage usa il modello di automazione per eseguire query sulle impostazioni nelle pagine **Opzioni** e modificarle, non estende la funzionalità dell'IDE. Di conseguenza, il pacchetto non deve implementare un oggetto di automazione.  
  
 Per ottenere un oggetto <xref:EnvDTE.DTE> tramite il modello di automazione, chiamare il metodo <xref:Microsoft.VisualStudio.OLE.Interop.IServiceProvider.QueryService%2A> e fornire un argomento `SID_SDTE` per l'ID servizio e un argomento `IID__DTE` per l'interfaccia, come indicato di seguito.  
  
```  
pServiceProvider->QueryService(SID_SDTE, IID__DTE, (LPVOID*)pDTE);  
```  
  
 Per ottenere un oggetto <xref:EnvDTE.DTE> usando il framework di pacchetto gestito \(MPF, Managed Package Framework\), chiamare il metodo <xref:Microsoft.VisualStudio.Shell.Package.GetService%2A> e specificare un parametro `serviceType` di tipo <xref:Microsoft.VisualStudio.Shell.Interop.SDTE>.  
  
 [!code-cs[UI_UserSettings_ToolsOptionPages#01](../misc/codesnippet/CSharp/using-options-pages_1.cs)]
 [!code-vb[UI_UserSettings_ToolsOptionPages#01](../misc/codesnippet/VisualBasic/using-options-pages_1.vb)]  
  
 Una pagina **Opzioni** è specificata da due identificatori. Il primo identificatore è una stringa che indica la cartella contenente la pagina **Opzioni**. Il secondo identificatore è una stringa che indica l'elemento specifico nella cartella. Questi due elementi corrispondono a una categoria e una sottocategoria della pagina **Opzioni** o a un argomento e un argomento correlato della pagina.  
  
 Ad esempio, le impostazioni dell'editor di testo per la gestione del codice di base si trovano nel riquadro di spostamento come membro **Base** della cartella **Editor di testo**. L'identificatore per la categoria è `TextEditor` e quello per la sottocategoria è `Basic`, mentre la pagina **Opzioni** stessa corrisponde alla pagina `TextEditor.Basic`.  
  
> [!NOTE]
>  Per motivi di localizzazione e di altro tipo, i nomi visualizzati nelle pagine **Opzioni** possono differire dalle stringhe usate come identificatori di categoria e sottocategoria. Potrebbe essere necessario usare l'automazione per eseguire una query sull'IDE in modo da ottenere gli identificatori corretti, se non sono documentati altrove. Il percorso nel Registro di sistema è HKEY\_LOCAL\_MACHINE\\SOFTWARE\\Microsoft\\VisualStudio\\*\<Versione VS\>*\\AutomationProperties, dove *\<Versione VS\>* è il numero di versione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. Per altre informazioni, vedere [Registrazione delle pagine Opzioni personalizzate](../misc/registering-custom-options-pages.md).  
  
 È possibile ottenere le proprietà per la pagina `TextEditor.Basic` tramite il modello di automazione usando l'esempio seguente.  
  
```  
CComPtr<_DTE> srpDTE; CComPtr<Properties> srpDTEPropertiesList; hr = srpDTE->get_Properties("TextEditor", "Basic", &srpDTEPropertiesList);  
```  
  
 Per ottenere le proprietà usando MPF, usare il metodo <xref:EnvDTE._DTE.Properties%2A>.  
  
 [!code-cs[UI_UserSettings_ToolsOptionPages#02](../misc/codesnippet/CSharp/using-options-pages_2.cs)]
 [!code-vb[UI_UserSettings_ToolsOptionPages#02](../misc/codesnippet/VisualBasic/using-options-pages_2.vb)]  
  
 Il metodo <xref:EnvDTE.Properties.Item%2A> restituisce singole impostazioni della raccolta <xref:EnvDTE.Properties> come oggetto <xref:EnvDTE.Property>.  
  
 Come per le categorie e le sottocategorie, ogni impostazione ha un identificatore che è una stringa univoca. Ad esempio, l'impostazione **Dimensione tabulazione** nella pagina `TextEditor.Basic` è identificata dalla stringa `TabSize`.  
  
> [!NOTE]
>  Per motivi di localizzazione e di altro tipo, i nomi visualizzati nelle pagine **Opzioni** possono differire dalle stringhe usate come identificatori delle impostazioni. Potrebbe essere necessario usare l'automazione per eseguire una query sull'IDE in modo da ottenere gli identificatori corretti, se non sono documentati altrove.  
  
 È possibile usare l'oggetto <xref:EnvDTE.Property.Value%2A> dell'oggetto <xref:EnvDTE.Property> restituito dal metodo <xref:EnvDTE.Properties.Item%2A> della raccolta <xref:EnvDTE.Properties> per eseguire query sullo stato delle impostazioni e modificarlo.  
  
 Ad esempio, per configurare l'impostazione **Dimensione tabulazione** nella pagina `TextEditor.Basic` tramite il modello di automazione, usare l'oggetto <xref:EnvDTE.Properties> restituito nell'esempio seguente.  
  
```  
CComPtr<Property> srpProperty; hr = srpDTEPropertiesList->Item("TabSize", &srpProperty); hr= srpProperty.set_Value(4);  
```  
  
 L'esempio seguente mostra come aggiornare l'impostazione **Dimensione tabulazione** tramite MPF.  
  
 [!code-cs[UI_UserSettings_ToolsOptionPages#03](../misc/codesnippet/CSharp/using-options-pages_3.cs)]
 [!code-vb[UI_UserSettings_ToolsOptionPages#03](../misc/codesnippet/VisualBasic/using-options-pages_3.vb)]  
  
 Per altre informazioni, vedere [Controllo delle impostazioni relative alle opzioni](../Topic/Controlling%20Options%20Settings.md).  
  
## Salvataggio permanente delle impostazioni delle pagine Opzioni  
 L'IDE implementa il salvataggio permanente dello stato delle pagine **Opzioni** che supportano completamente il modello di automazione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
 Le impostazioni nelle pagine incluse nell'IDE vengono automaticamente salvate \(o recuperate\) quando un utente sceglie **Importa\/Esporta impostazioni** dal menu **Strumenti**.  
  
 È possibile permettere alla pagina **Opzioni** personalizzata di usare il supporto per il salvataggio permanente automatico aggiungendo il flag `ProfileSave` alla voce del Registro di sistema per la pagina **Opzioni** personalizzata in HKEY\_LOCAL\_MACHINE\\SOFTWARE\\Microsoft\\VisualStudio\\*\<Versione VS\>*\\AutomationProperties, dove *\<Versione VS\>* è il numero di versione di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)]. Per altre informazioni, vedere [Registrazione delle pagine Opzioni personalizzate](../misc/registering-custom-options-pages.md).  
  
## Vedere anche  
 [Creazione di pagine Opzioni con gli assembly di interoperabilità](../misc/creating-options-pages-by-using-interop-assemblies.md)   
 [Creazione di pagine di opzioni](../Topic/Creating%20Options%20Pages.md)   
 [Creazione di pagine Opzioni con l'automazione](../misc/creating-options-pages-by-using-automation.md)   
 [Controllo delle impostazioni relative alle opzioni](../Topic/Controlling%20Options%20Settings.md)   
 [Registrazione delle pagine Opzioni personalizzate](../misc/registering-custom-options-pages.md)   
 [Apertura di una pagina di opzioni](../misc/opening-an-options-page.md)   
 [Opzioni e impostazioni utente estensione](../Topic/Extending%20User%20Settings%20and%20Options.md)
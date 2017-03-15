---
title: "Parametri personalizzati nel file VSZ della procedura guidata | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ABSOLUTE_PATH (macro)"
  - "creazioni guidate personalizzate, file VSZ"
  - "HTML_FILTER (macro)"
  - "HTML_PATH (macro)"
  - "IMAGE_FILTER (macro)"
  - "IMAGES_PATH (macro)"
  - "MISC_FILTER (macro)"
  - "PRODUCT (macro)"
  - "PRODUCT_INSTALLATION_DIR (macro)"
  - "PROJECT_TEMPLATE_NAME (macro)"
  - "PROJECT_TEMPLATE_PATH (macro)"
  - "RELATIVE_PATH (macro)"
  - "SCRIPT_COMMON_PATH (macro)"
  - "SCRIPT_FILTER (macro)"
  - "SCRIPT_PATH (macro)"
  - "START_PATH (macro)"
  - "TEMPLATE_FILTER (macro)"
  - "TEMPLATES_PATH (macro)"
  - "WIZARD_NAME (macro)"
  - "WIZARD_UI (macro)"
ms.assetid: 560dd5c0-7cff-4974-b856-5ca25b0669b8
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Parametri personalizzati nel file VSZ della procedura guidata
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nelle prime due righe del file VSZ sono identificati la versione della procedura guidata e l'identificatore ProgID o CLSID della procedura guidata da cocreare.  Il file VSZ può includere anche parametri di contesto facoltativi e parametri personalizzati che vengono aggiunti alla tabella dei simboli, unitamente ai simboli forniti nella sezione dei simboli HTML.  
  
 Il metodo <xref:Microsoft.VisualStudio.VsWizard.VsWizardClass.Execute%2A> consente di visualizzare la procedura guidata, che accetta una matrice di parametri di contesto e personalizzati definiti nel file VSZ come parametri.  
  
 I simboli di utilizzo frequente riportati di seguito vengono specificati come parametri personalizzati nel [file VSZ](../ide/dot-vsz-file-project-control.md) o nei file HTM e possono essere utilizzati nei file HTML, script o modello della procedura guidata.  
  
## Esempio  
 Come indicato dalle voci del file VSZ riportate di seguito, la procedura guidata MyProjWiz contiene un'interfaccia utente.  
  
```  
VSWIZARD 7.0  
Wizard=VsWizard.VsWizardEngine  
Param="WIZARD_NAME = MyProjWiz"  
Param="WIZARD_UI = TRUE"  
```  
  
### Simboli per parametri personalizzati nel file VSZ della procedura guidata  
  
|Simbolo|Definizione|  
|-------------|-----------------|  
|ABSOLUTE\_PATH|Percorso dei file della procedura guidata.|  
|HTML\_FILTER|Specificato nel file VSZ.  Tipi di file inseriti nella cartella File HTML in **Esplora soluzioni**.  Generalmente specificato come "htm".|  
|HTML\_PATH|Specificato nel file VSZ.  Il percorso dei [file HTML](../ide/html-files.md) della procedura guidata.  Per impostazione predefinita è START\_PATH\\HTML\\*LINGUA*, dove *LINGUA* rappresenta le impostazioni locali specificate nel Registro di sistema. **Note:**  È possibile specificare una lingua diversa impostando\<LangID\> sul valore decimale di HKEY\_CURRENT\_USER\\Software\\Microsoft\\VisualStudio\\7.0\\General\\UILanguage.  Per ulteriori informazioni, vedere [Localizzazione di una procedura guidata in più lingue](../ide/localizing-a-wizard-to-multiple-languages.md).  Per l'elenco dei valori decimali relativi alla lingua, vedere [Supporto della procedura guidata per altre lingue](../ide/wizard-support-for-other-languages.md).|  
|IMAGE\_FILTER|Specificato nel file VSZ.  Tipi di file inseriti nella cartella File grafici in Esplora soluzioni.  Generalmente specificato come "bmp;gif".|  
|IMAGES\_PATH|Specificato nel file VSZ.  Percorso dei file grafici utilizzati nei file HTML.  Per impostazione predefinita è START\_PATH\\Images.|  
|MISC\_FILTER|Specificato nel file VSZ.  Tipi di file inseriti nella cartella Misc in Esplora soluzioni.  Generalmente specificato come "vsz;vsdir;ico;vcproj;csproj;css;inf".|  
|PRODUCT|Per impostazione predefinita è impostato su Visual Studio. È tuttavia possibile impostare questo valore su Visual Basic per creare procedure guidate di Visual Basic e così via.|  
|PRODUCT\_INSTALLATION\_DIR|Directory elencata nel Registro di sistema alla voce HKEY\_LOCAL\_MACHINE\\SOFTWARE\\Microsoft\\VisualStudio\\7.0\\Setup\\\<Product\>\\ ProductDir.|  
|PROJECT\_TEMPLATE\_NAME|Specificato nel file VSZ.  File modello del progetto utilizzato nella procedura guidata per creare progetti.  Generalmente specificato come "txt".|  
|PROJECT\_TEMPLATE\_PATH|Directory contenente i [file modello](../ide/template-files.md) del progetto.  Per impostazione predefinita, in Visual C\+\+ è PRODUCT\_INSTALLATION\_DIR\\VCWizards.|  
|RELATIVE\_PATH|Se ABSOLUTE\_PATH non è presente, sarà utilizzato RELATIVE\_PATH.  Si tratta del percorso relativo a PRODUCT\_INSTALLATION\_DIR.  Per Visual C\+\+ RELATIVE\_PATH è PRODUCT\_INSTALLATION\_DIR\\VCWizards.|  
|SCRIPT\_COMMON\_PATH|Nome di directory relativo a PRODUCT\_INSTALLATION\_DIR, dove è disponibile il file di script comune.  In Visual C\+\+, ad esempio, è VCWizards.|  
|SCRIPT\_FILTER|Specificato nel file VSZ.  Tipi di file da inserire nella cartella File di script in Esplora soluzioni.  Generalmente specificato come "js" \(JScript\) o "vbs" \(VBScript\).|  
|SCRIPT\_PATH|Percorso dei [file JScript](../ide/jscript-file.md) della procedura guidata.  Per impostazione predefinita è START\_PATH\\Scripts|  
|START\_PATH|Specificato nel file VSZ.  Non è impostato dall'utente, ma utilizzato internamente per identificare RELATIVE\_PATH o ABSOLUTE\_PATH.  Valore cui è associato il nome della procedura guidata \(WIZARD\_NAME\).|  
|TEMPLATE\_FILTER|Specificato nel file VSZ.  Tipi di file inseriti nella cartella File modello in Esplora soluzioni.  Generalmente specificato come "txt".|  
|TEMPLATES\_PATH|Specificato nel file VSZ.  Percorso dei file modello della procedura guidata.  Per impostazione predefinita è START\_PATH\\Templates\\\<LangID\>. **Note:**  Per ulteriori informazioni su LangID, vedere HTML\_PATH.|  
|WIZARD\_NAME|Specifica il nome della procedura guidata.  Presente nel file VSZ e utilizzato dal resto dei simboli.|  
|WIZARD\_UI|Specificato nel file VSZ.  Valore Boolean che indica se la procedura guidata contiene un'interfaccia utente.  Specificare **TRUE** per indicare la presenza di un'interfaccia utente oppure **FALSE** per indicare che l'interfaccia utente non è presente.|  
  
## Vedere anche  
 <xref:EnvDTE.IDTWizard.Execute%2A>   
 [File creati per la procedura guidata](../ide/files-created-for-your-wizard.md)   
 [creazione guidata personalizzata](../ide/custom-wizard.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)
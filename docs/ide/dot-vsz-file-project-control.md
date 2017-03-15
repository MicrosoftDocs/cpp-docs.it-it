---
title: "File VSZ (controllo progetto) | Microsoft Docs"
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
  - "VSZ (file)"
  - "creazioni guidate personalizzate, file VSZ"
  - "creazioni guidate personalizzate, file di controllo dei progetti"
  - "file [C++], creati tramite una creazione guidata personalizzata"
  - "vsz (file)"
ms.assetid: b8678fee-6795-46d1-9338-48b22d5e9207
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# File VSZ (controllo progetto)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il punto di partenza di ogni procedura guidata è rappresentato dal file VSZ, vale a dire  un file di testo che determina la procedura guidata da chiamare e le informazioni da passare a essa.  Il file contiene un'intestazione di due righe, seguita da vari parametri facoltativi da passare alla procedura guidata.  Per l'elenco dei parametri facoltativi, vedere [Simboli della creazione guidata personalizzata predefiniti](../ide/custom-parameters-in-the-wizard-dot-vsz-file.md).  
  
 Nell'esempio che segue è illustrata l'intestazione di un file VSZ.  
  
```  
VSWIZARD 7.0  
Wizard=VsWizard.VsWizardEngine.10.0  
Param="WIZARD_NAME = My AppWizard"  
```  
  
-   La prima riga dell'intestazione è il numero di versione del formato del file modello.  È possibile specificare questo numero come `6.0`, `7.0` o `7.1`.  Se si utilizza un qualsiasi altro numero, verrà visualizzato un messaggio di errore che informa che il formato non è valido.  
  
-   La seconda riga imposta la variabile **Wizard** sul ProgID della procedura guidata che viene cocreata da Visual Studio.  ProgID è una rappresentazione di stringa di un CLSID, come `VsWizard.VsWizardEngine.10.0`.  
  
     Se la procedura guidata dispone di interfaccia utente, mediante il ProgID verrà automaticamente specificata l'implementazione di <xref:Microsoft.VisualStudio.VsWizard.IVCWizCtlUI>.  Per impostazione predefinita i metodi di questa interfaccia vengono utilizzati nel [file HTM](../ide/html-files.md) del progetto.  È possibile modificare il funzionamento della procedura guidata utilizzando i metodi di questa interfaccia nei file HTM.  Per ulteriori informazioni, vedere <xref:Microsoft.VisualStudio.VsWizard.VCWizCtl>, la coclasse per <xref:Microsoft.VisualStudio.VsWizard.IVCWizCtlUI>.  
  
-   Le due righe illustrate sono seguite da un elenco facoltativo di parametri che consentono il passaggio di parametri personalizzati aggiuntivi dal file VSZ alla procedura guidata.  Ciascun valore viene passato come elemento di stringa in una matrice di varianti nel metodo <xref:Microsoft.VisualStudio.VsWizard.VsWizardClass.Execute%2A> del controllo della procedura guidata.  Per impostazione predefinita in una procedura guidata con interfaccia utente vengono prodotti i seguenti parametri predefiniti:  
  
    ```  
    Param="START_PATH = <path to the wizard>"  
    Param="HTML_PATH = <path to the wizard's HTML file>"  
    Param="TEMPLATES_PATH = <path to the wizard's template file>"  
    Param="SCRIPT_PATH = <path to the wizard's script files>"  
    Param="IMAGES_PATH = <path to the wizard's images>"  
    ```  
  
     Se la procedura guidata non prevede un'interfaccia utente, non disporrà di alcun parametro `IMAGES_PATH` e conterrà invece i seguenti parametri:  
  
    ```  
    Param="WIZARD_UI = FALSE"  
    Param="SOURCE_FILTER = txt"  
    ```  
  
-   Nel file VSZ possono essere presenti i seguenti parametri, che specificano funzioni trovate nel file [Common.js](../ide/customizing-cpp-wizards-with-common-jscript-functions.md):  
  
    ```  
    Param="PREPROCESS_FUNCTION = CanAddATLClass"  
    Param="PREPROCESS_FUNCTION = CanAddMFCClass"  
    Param="PREPROCESS_FUNCTION = CanAddClass"  
    ```  
  
 Le funzioni [CanAddATLClass](../ide/canaddatlclass.md), [CanAddMFCClass](../ide/canaddmfcclass.md) e [CanAddClass](../ide/canaddclass.md) vengono chiamate nella procedura guidata per confermare che il [Modello codice di Visual C\+\+](http://msdn.microsoft.com/it-it/dd6452c2-1054-44a1-b0eb-639a94a1216b) è disponibile.  Se una funzione restituisce **false**, la procedura guidata non verrà avviata.  
  
 È possibile aggiungere la procedura guidata al riquadro Modelli nella finestra di dialogo **Nuovo progetto** di Visual Studio inserendo il file VSZ nella directory vcprojects.  Per impostazione predefinita, il file VSZ viene scritto in questa directory durante la Creazione guidata personalizzata.  
  
> [!NOTE]
>  Se si eliminano i file e le directory della procedura guidata, è inoltre necessario eliminare i file VSZ, VSDIR e ICO dalla directory vcprojects.  
  
## Vedere anche  
 [File creati per la procedura guidata](../ide/files-created-for-your-wizard.md)   
 [creazione guidata personalizzata](../ide/custom-wizard.md)   
 [Creazione di una procedura guidata personalizzata](../ide/creating-a-custom-wizard.md)   
 [Visual C\+\+ Wizard Model](http://msdn.microsoft.com/it-it/159395ac-33c7-47bf-ad42-4e1435ddc758)   
 [Aggiunta di procedure guidate alle finestre di dialogo Aggiungi elemento e Nuovo progetto tramite file vsdir](../Topic/Adding%20Wizards%20to%20the%20Add%20Item%20and%20New%20Project%20Dialog%20Boxes%20by%20Using%20.Vsdir%20Files.md)   
 [Progettazione di una procedura guidata](../ide/designing-a-wizard.md)
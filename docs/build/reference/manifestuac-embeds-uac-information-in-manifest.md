---
title: "/MANIFESTUAC (incorporazione delle informazioni sul controllo dell&#39;account utente nel manifesto) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.UACUIAccess"
  - "VC.Project.VCLinkerTool.UACExecutionLevel"
  - "VC.Project.VCLinkerTool.EnableUAC"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Opzione del linker /MANIFESTUAC"
  - "Opzione del linker MANIFESTUAC"
  - "Opzione del linker -MANIFESTUAC"
ms.assetid: 2d243c39-fa13-493c-b56f-d0d972a1603a
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /MANIFESTUAC (incorporazione delle informazioni sul controllo dell&#39;account utente nel manifesto)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica se le informazioni sul Controllo dell'account utente sono incorporate nel manifesto del programma.  
  
## Sintassi  
  
```  
/MANIFESTUAC  
/MANIFESTUAC:NO  
/MANIFESTUAC:fragment  
/MANIFESTUAC:level=_level  
/MANIFESTUAC:uiAccess=_uiAccess  
```  
  
#### Parametri  
 `fragment`  
 Stringa contenente i valori `level` e `uiAccess`.  Per ulteriori informazioni, vedere la sezione Osservazioni più avanti in questo argomento.  
  
 `_level`  
 Uno dei valori seguenti: *asInvoker*, *highestAvailable* o *requireAdministrator*.  Il valore predefinito è asInvoker.  Per ulteriori informazioni, vedere la sezione Osservazioni più avanti in questo argomento.  
  
 `_uiAccess`  
 `true` se si desidera che l'applicazione ignori i livelli di protezione dell'interfaccia utente e indirizzi l'input verso finestre con un livello di autorizzazione superiore sul desktop; `false` altrimenti.  Il valore predefinito è `false`.  Impostare su `true` solo per le applicazioni di accessibilità dell'interfaccia utente.  
  
## Note  
 Se si specificano più opzioni \/MANIFESTUAC sulla riga di comando, quella immessa per ultima ha la precedenza.  
  
 Le scelte per \/MANIFESTUAC:level sono le seguenti:  
  
-   `asInvoker`: l'applicazione verrà eseguita con le stesse autorizzazioni del processo che l'ha avviata.  Per impostare un livello di autorizzazione più elevato per l'applicazione, selezionare **Esegui come amministratore**.  
  
-   highestAvailable: l'applicazione sarà eseguita con il livello di autorizzazione più elevato.  Se l'utente che avvia l'applicazione è un membro del gruppo Administrators, questa opzione corrisponde a requireAdministrator.  Se il livello di autorizzazione più elevato disponibile è più elevato del livello del processo di apertura, verrà richiesto di specificare le credenziali.  
  
-   requireAdministrator: l'applicazione verrà eseguita con le autorizzazioni di amministratore.  L'utente che avvia l'applicazione deve essere un membro del gruppo Administrators.  Se il processo di apertura non è in esecuzione con autorizzazioni amministrative, verrà richiesto di specificare le credenziali.  
  
 È possibile specificare il livello e i valori uiAccess in un solo passaggio utilizzando l'opzione \/MANIFESTUAC:fragment.  Il frammento deve essere nel formato seguente:  
  
```  
"level=[ asInvoker | highestAvailable | requireAdministrator ] uiAccess=[ true | false ]"  
```  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Espandere il nodo **Proprietà di configurazione**.  
  
3.  Espandere il nodo **Linker**.  
  
4.  Fare clic sulla pagina delle proprietà **File manifesto**.  
  
5.  Modificare le proprietà **Abilita controllo dell'account utente**, **Livello di esecuzione controllo dell'account utente** e **Protezione interfaccia utente ignorata dal controllo dell'account utente**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EnableUAC%2A>, <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.UACExecutionLevel%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.UACUIAccess%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)
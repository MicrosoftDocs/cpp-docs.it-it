---
title: "/MANIFEST (Crea manifesto dell&#39;assembly syde-by-side) | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.GenerateManifest"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/MANIFEST (opzione del linker)"
  - "MANIFEST (opzione del linker)"
  - "-MANIFEST (opzione del linker)"
ms.assetid: 98c52e1e-712c-4f49-b149-4d0a3501b600
caps.latest.revision: 20
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /MANIFEST (Crea manifesto dell&#39;assembly syde-by-side)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/MANIFEST[:{EMBED[,ID=#]|NO}]  
```  
  
## Note  
 \/MANIFEST specifica che il linker deve creare un file manifesto side\-by\-side.  Per ulteriori informazioni sui file manifesto, vedere [Riferimenti per i file manifesto](http://msdn.microsoft.com/library/aa375632).  
  
 L'impostazione predefinita è \/MANIFEST.  
  
 L'opzione \/MANIFEST:EMBED specifica che il linker deve includere il file manifesto nell'immagine come risorsa del tipo RT\_MANIFEST.  Il parametro facoltativo `ID` è l'id della risorsa da utilizzare per il manifesto.  Utilizzare un valore 1 per un file eseguibile.  Utilizzare un valore 2 per una dll per permettergli di specificare le dipendenze private.  Se il parametro `ID` non viene specificato, il valore predefinito è 2 se l'opzione \/DLL è impostata; altrimenti il valore predefinito è 1.  
  
 A partire da [!INCLUDE[vs_orcas_long](../../atl/reference/includes/vs_orcas_long_md.md)], i file manifesto per i file eseguibili contengono una sezione che specifica le informazioni sul Controllo dell'account utente.  Se si specifica \/MANIFEST ma non si specifica né [\/MANIFESTUAC](../../build/reference/manifestuac-embeds-uac-information-in-manifest.md) né [\/DLL](../../build/reference/dll-build-a-dll.md), un frammento di Controllo dell'account utente predefinito viene inserito nel manifesto con il livello di Controllo dell'account utente impostato su *asInvoker*.  Per ulteriori informazioni sui livelli di Controllo dell'account utente, vedere [\/MANIFESTUAC \(incorporazione delle informazioni sul controllo dell'account utente nel manifesto\)](../../build/reference/manifestuac-embeds-uac-information-in-manifest.md).  
  
 Per modificare il comportamento predefinito del Controllo dell'account utente, effettuare una delle operazioni seguenti:  
  
-   Specificare l'opzione \/MANIFESTUAC e impostare il livello di Controllo dell'account utente sul valore desiderato.  
  
-   Oppure l'opzione \/MANIFESTUAC:NO se non si desidera generare un frammento di Controllo dell'account utente nel manifesto.  
  
 Se non si specifica \/MANIFEST ma si specificano i commenti [\/MANIFESTDEPENDENCY](../../build/reference/manifestdependency-specify-manifest-dependencies.md), viene creato un file manifesto.  Un file manifesto non viene creato se si specifica \/MANIFEST:NO.  
  
 Se si specifica \/MANIFEST, il nome del file manifesto è lo stesso del nome del file di output con aggiunta l'estensione .manifest.  Ad esempio, se il nome del file di output è MioFile.exe, il nome del file manifesto è MioFile.exe.manifest.  Se si specifica \/MANIFESTFILE:*name*, il nome del manifesto è quello specificato in *name*.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Espandere il nodo **Proprietà di configurazione**.  
  
3.  Espandere il nodo **Linker**.  
  
4.  Fare clic sulla pagina delle proprietà **File manifesto**.  
  
5.  Modificare la proprietà **Genera manifesto**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.GenerateManifest%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)
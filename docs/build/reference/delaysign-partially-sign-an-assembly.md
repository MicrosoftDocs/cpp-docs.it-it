---
title: "/DELAYSIGN (Firma parzialmente un assembly) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/delaysign"
  - "VC.Project.VCLinkerTool.DelaySign"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/DELAYSIGN (opzione del linker)"
  - "DELAYSIGN (opzione del linker)"
  - "-DELAYSIGN (opzione del linker)"
ms.assetid: 15244d30-3ecb-492f-a408-ffe81f38de20
caps.latest.revision: 11
caps.handback.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /DELAYSIGN (Firma parzialmente un assembly)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/DELAYSIGN[:NO]  
```  
  
## Note  
 dove  
  
 NO  
 Specifica che l'assembly non deve essere firmato parzialmente.  
  
## Note  
 Utilizzare **\/DELAYSIGN** se si desidera unicamente inserire nell'assembly la chiave pubblica.  Il valore predefinito è **\/DELAYSIGN:NO**.  
  
 L'opzione **\/DELAYSIGN** ha effetto solo se utilizzata con [\/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md) o [\/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md).  
  
 Quando si richiede un assembly completamente firmato, il compilatore genera un hash per il file che contiene il manifesto, o metadati dell'assembly, e quindi firma l'hash risultante con la chiave privata.  La firma digitale risultante viene archiviata nel file contenente il manifesto.  Se per un assembly si utilizza una firma posticipata, il linker non elabora e memorizza la firma, ma riserva spazio nel file in modo che la firma possa essere aggiunta successivamente.  
  
 L'utilizzo di **\/DELAYSIGN**, ad esempio, consente a un dispositivo di test di inserire l'assembly nella cache globale.  Al termine del test, sarà possibile apporre una firma completa all'assembly inserendovi la chiave privata.  
  
 Per ulteriori informazioni su come firmare un assembly, vedere [Assembly con nome sicuro \(firma degli assembly\)](../../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md) e [Ritardo della firma di un assembly](../Topic/Delay%20Signing%20an%20Assembly.md).  
  
 Di seguito sono elencate altre opzioni del linker che hanno effetto sulla generazione dell'assembly.  
  
-   [\/ASSEMBLYDEBUG](../../build/reference/assemblydebug-add-debuggableattribute.md)  
  
-   [\/ASSEMBLYLINKRESOURCE](../../build/reference/assemblylinkresource-link-to-dotnet-framework-resource.md)  
  
-   [\/ASSEMBLYMODULE](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md)  
  
-   [\/ASSEMBLYRESOURCE](../../build/reference/assemblyresource-embed-a-managed-resource.md)  
  
-   [\/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md)  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando**.  
  
4.  Digitare l'opzione nella casella **Opzioni aggiuntive**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)
---
title: "/KEYFILE (Specifica una chiave o una coppia di chiavi per firmare un assembly) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/keyfile"
  - "VC.Project.VCLinkerTool.KeyFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/KEYFILE (opzione del linker)"
  - "KEYFILE (opzione del linker)"
  - "-KEYFILE (opzione del linker)"
ms.assetid: 9b71f8c0-541c-4fe5-a0c7-9364f42ecb06
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# /KEYFILE (Specifica una chiave o una coppia di chiavi per firmare un assembly)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/KEYFILE:filename  
```  
  
## Note  
 dove:  
  
 *filename*  
 Il file che contiene la chiave.  Se la stringa contiene uno spazio, racchiuderla tra doppie virgolette \(" "\).  
  
## Note  
 Il linker inserisce la chiave pubblica nel manifesto dell'assembly, quindi firma l'assembly finale con la chiave privata.  Per generare un file di chiave, immettere [sn \-k](../Topic/Sn.exe%20\(Strong%20Name%20Tool\).md) `file` sulla riga di comando.  Un assembly firmato ha un nome sicuro.  
  
 Se si esegue la compilazione con [\/LN](../../build/reference/ln-create-msil-module.md), il nome del file di chiave è contenuto nel modulo e incorporato nell'assembly che viene creato quando si compila un assembly che include un riferimento esplicito al modulo, mediante [\#using](../../preprocessor/hash-using-directive-cpp.md), oppure quando si esegue il collegamento con [\/ASSEMBLYMODULE](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md).  
  
 È anche possibile passare al linker le informazioni di crittografia mediante [\/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md).  Utilizzare [\/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md) per ottenere un assembly parzialmente firmato.  Per ulteriori informazioni sulla firma di un assembly, vedere [Assembly con nome sicuro \(firma degli assembly\)](../../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md).  
  
 Nel caso in cui vengano specificate entrambe le opzioni **\/KEYFILE** e **\/KEYCONTAINER** \(mediante l'opzione della riga di comando o un attributo personalizzato\), il linker cercherà di utilizzare prima il contenitore di chiavi.  Se questa operazione viene eseguita correttamente, l'assembly viene firmato con le informazioni incluse nel contenitore di chiavi.  Se il linker non trova il contenitore di chiavi, cerca il file specificato con \/KEYFILE.  In caso di esito positivo, l'assembly viene firmato con le informazioni presenti nel file di chiave e le informazioni sulla chiave verranno installate nel contenitore di chiavi, analogamente a sn \-i, in modo che alla successiva compilazione il contenitore di chiavi sarà valido.  
  
 Si noti che un file di chiave può contenere solo la chiave pubblica.  
  
 Per ulteriori informazioni sulla firma di un assembly, vedere [Creazione e utilizzo di assembly con nome sicuro](../Topic/Creating%20and%20Using%20Strong-Named%20Assemblies.md).  
  
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
---
title: "/MANIFESTDEPENDENCY (Specifica le dipendenze tra manifesti) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.AdditionalManifestDependencies"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/MANIFESTDEPENDENCY (opzione del linker)"
  - "MANIFESTDEPENDENCY (opzione del linker)"
  - "-MANIFESTDEPENDENCY (opzione del linker)"
ms.assetid: e4b68313-33a2-4c3e-908e-ac2b9f7d6a73
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /MANIFESTDEPENDENCY (Specifica le dipendenze tra manifesti)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/MANIFESTDEPENDENCY:manifest_dependency  
```  
  
## Note  
 L'opzione \/MANIFESTDEPENDENCY consente di specificare gli attributi da inserire nella sezione \<dependency\> del file manifesto.  
  
 Per informazioni sulla creazione di un file manifesto, vedere [\/MANIFEST \(Crea manifesto dell'assembly syde\-by\-side\)](../../build/reference/manifest-create-side-by-side-assembly-manifest.md).  
  
 Per ulteriori informazioni sulla sezione \<dependency\> di un file manifest, vedere [File di Configurazione di Publisher](http://msdn.microsoft.com/library/aa375682).  
  
 Le informazioni di \/MANIFESTDEPENDENCY possono essere passate al linker in uno dei seguenti modi:  
  
-   Direttamente sulla riga di comando o in un file di risposta con \/MANIFESTDEPENDENCY.  
  
-   Mediante il pragma [comment](../../preprocessor/comment-c-cpp.md).  
  
 Nell'esempio riportato di seguito viene illustrato il passaggio di un commento di \/MANIFESTDEPENDENCY tramite il pragma,  
  
```  
#pragma comment(linker, "\"/manifestdependency:type='Win32' name='Test.Research.SampleAssembly' version='6.0.0.0' processorArchitecture='X86' publicKeyToken='0000000000000000' language='*'\"")  
```  
  
 con conseguente creazione della seguente voce nel file manifesto:  
  
```  
<dependency>  
  <dependentAssembly>  
    <assemblyIdentity type='Win32' name='Test.Research.SampleAssembly' version='6.0.0.0' processorArchitecture='X86' publicKeyToken='0000000000000000' language='*' />  
  </dependentAssembly>  
</dependency>  
```  
  
 Gli stessi commenti di \/MANIFESTDEPENDENCY possono essere passati sulla riga di comando nel modo descritto di seguito:  
  
```  
"/manifestdependency:type='Win32' name='Test.Research.SampleAssembly' version='6.0.0.0' processorArchitecture='X86' publicKeyToken='0000000000000000' language='*'\"  
```  
  
 Il linker raccoglierà i commenti di \/MANIFESTDEPENDENCY, eliminerà le voci duplicate, quindi aggiungerà la stringa XML ottenuta al file manifesto.  Se vengono individuate voci in conflitto, il file manifesto risulterà danneggiato e l'applicazione non verrà avviata. È inoltre possibile aggiungere al log eventi una voce che indica l'origine dell'errore.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Espandere il nodo **Proprietà di configurazione**.  
  
3.  Espandere il nodo **Linker**.  
  
4.  Fare clic sulla pagina delle proprietà **File manifesto**.  
  
5.  Modificare la proprietà **Dipendenze aggiuntive manifesto**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalManifestDependencies%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)
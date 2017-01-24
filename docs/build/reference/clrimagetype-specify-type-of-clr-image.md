---
title: "/CLRIMAGETYPE (Specifica il tipo di immagine CLR) | Microsoft Docs"
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
  - "/CLRIMAGETYPE"
  - "VC.Project.VCLinkerTool.CLRImageType"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/CLRIMAGETYPE (opzione del linker)"
  - "-CLRIMAGETYPE (opzione del linker)"
ms.assetid: 04c60ee6-9dd7-4391-bc03-6926ad0fa116
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /CLRIMAGETYPE (Specifica il tipo di immagine CLR)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/CLRIMAGETYPE:{IJW|PURE|SAFE|SAFE32BITPREFERRED}  
```  
  
## Note  
 Il linker accetta gli oggetti nativi e anche gli oggetti MSIL compilati utilizzando [\/clr](../../build/reference/clr-common-language-runtime-compilation.md), \/clr:pure oppure \/clr:safe.  Quando si passano oggetti misti nella stessa build, il livello di verificabilità del file di output risultante corrisponde, per impostazione predefinita, a quello più basso dei moduli di input.  Se ad esempio si passa sia un modulo safe che un modulo pure al linker, il file di output sarà pure.  Se si passa un'immagine nativa e un'immagine a modalità mista, compilata utilizzando **\/clr**, l'immagine risultante sarà a modalità mista.  
  
 Si può utilizzare \/CLRIMAGETYPE per specificare un livello di verificabilità più basso, se necessario.  
  
 In .NET 4.5, \/CLRIMAGETYPE supporta un'opzione SAFE32BITPREFERRED.  In questo modo viene impostata—nell'intestazione del file PE dell'immagine—una flag che indica che gli oggetti MSIL sono safe e possono essere eseguiti su tutte le piattaforme, anche se si preferiscono gli ambienti di esecuzione a 32 bit.  Questa opzione consente ad un'applicazione di essere eseguita su piattaforme ARM e specifica anche che deve essere eseguita in WOW64 nei sistemi operativi a 64 bit anziché utilizzare l'ambiente di esecuzione a 64 bit.  
  
 Quando un file exe compilato utilizzando **\/clr** o **\/clr:pure** viene eseguito su un sistema operativo a 64 bit, l'applicazione verrà eseguita in WOW64 e un'applicazione a 32 bit potrà pertanto essere eseguita su un sistema operativo a 64 bit.  Per impostazione predefinita, un file exe compilato utilizzando **\/clr:safe** viene eseguito sotto il supporto a 64 bit del sistema operativo.  È tuttavia possibile che l'applicazione safe carichi un componente a 32 bit.  In questo caso, il caricamento di un'applicazione a 32 bit da parte di un'immagine safe in esecuzione nel supporto a 64 bit del sistema operativo avrà esito negativo.  Per assicurarsi che un'immagine safe continui l'esecuzione durante il caricamento di un componente a 32 bit su un sistema operativo a 64 bit, utilizzare l'opzione \/CLRIMAGETYPE:SAFE32BITPREFERRED.  Se il proprio codice non deve essere eseguito su piattaforme ARM, è possibile specificare l'opzione \/CLRIMAGETYPE:PURE per modificare i metadati \(.corflags\), contrassegnandoli per l'esecuzione in WOW64 \(e sostituendo il simbolo di ingresso personalizzato\):  
  
 **cl \/clr:safe t.cpp \/link \/clrimagetype:pure \/entry:?main@@$$HYMHXZ \/subsystem:console**  
  
 Per informazioni sulla modalità di determinazione del tipo di immagine CLR di un file, vedere [\/CLRHEADER](../../build/reference/clrheader.md).  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Espandere il nodo **Proprietà di configurazione**.  
  
3.  Espandere il nodo **Linker**.  
  
4.  Fare clic sulla pagina delle proprietà **Avanzate**.  
  
5.  Modificare la proprietà **Tipo immagine CLR**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.CLRImageType%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)
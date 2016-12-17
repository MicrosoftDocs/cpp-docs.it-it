---
title: "/VERSION (Informazioni sulla versione) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.Version"
  - "/version"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/VERSION (opzione del linker)"
  - "Informazioni sulla versione (opzione del linker)"
  - "VERSION (opzione del linker)"
  - "-VERSION (opzione del linker)"
  - "numeri di versione, specifica nei file EXE"
ms.assetid: b86d0e86-dca6-4316-aee2-d863ccb9f223
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /VERSION (Informazioni sulla versione)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/VERSION:major[.minor]  
```  
  
## Note  
 dove:  
  
 *major* e *minor*  
 Numero di versione che si desidera inserire nell'intestazione del file exe o dll.  
  
## Note  
 L'opzione \/VERSION indica al linker di inserire un numero di versione nell'intestazione del file exe o dll.  Utilizzare DUMPBIN [\/HEADERS](../../build/reference/headers.md) per visualizzare il campo della versione dell'immagine di OPTIONAL HEADER VALUES per osservare l'effetto di \/VERSION.  
  
 Gli argomenti *major* e *minor* sono numeri decimali compresi nell'intervallo tra 0 e 65,535.  L'impostazione predefinita è la versione 0.0.  
  
 Le informazioni specificate con \/VERSION non hanno alcun effetto sulle informazioni sulla versione indicate per un'applicazione quando se ne visualizzano le proprietà in Esplora file.  Tali informazioni provengono da un file di risorse utilizzato per compilare l'applicazione.  Per ulteriori informazioni, vedere [Editor delle informazioni sulla versione](../../mfc/version-information-editor.md).  
  
 Per inserire un numero di versione è inoltre possibile utilizzare l'istruzione di definizione moduli [VERSION](../../build/reference/version-c-cpp.md).  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Generale**.  
  
4.  Modificare la proprietà **Versione**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.Version%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)
---
title: "/ALLOWISOLATION (Ricerca di manifesti) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/ALLOWISOLATION"
  - "VC.Project.VCLinkerTool.AllowIsolation"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/ALLOWISOLATION (opzione del linker)"
  - "-ALLOWISOLATION (opzione del linker)"
ms.assetid: 6d41851e-b3c1-4bdf-beaa-031773089d6f
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# /ALLOWISOLATION (Ricerca di manifesti)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica il comportamento per la ricerca del manifesto.  
  
## Sintassi  
  
```  
/ALLOWISOLATION[:NO]  
```  
  
## Note  
 **\/ALLOWISOLATION:NO** indica che le DLL vengono caricate come se non esistesse alcun manifesto e fa sì che il linker imposti il bit `IMAGE_DLLCHARACTERISTICS_NO_ISOLATION` nel campo `DllCharacteristics` dell'intestazione facoltativa.  
  
 **\/ALLOWISOLATION** fa sì che il sistema operativo esegua la ricerca e il caricamento dei manifesti.  
  
 **\/ALLOWISOLATION** è l'impostazione predefinita.  
  
 Se per un eseguibile è disabilitato l'isolamento, il caricatore di Windows non tenterà di individuare un manifesto di applicazione per i processi creati più di recente.  Il nuovo processo non avrà un contesto di attivazione predefinito, anche se esiste un manifesto all'interno dell'eseguibile o nella stessa directory dell'eseguibile con nome *executable\-name***.exe.manifest**.  
  
 Per ulteriori informazioni, vedere [Riferimenti per i file manifesto](http://msdn.microsoft.com/library/aa375632).  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Espandere il nodo **Proprietà di configurazione**.  
  
3.  Espandere il nodo **Linker**.  
  
4.  Fare clic sulla pagina delle proprietà **File manifesto**.  
  
5.  Modificare la proprietà **Consenti isolamento**.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)
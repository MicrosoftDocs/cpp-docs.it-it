---
title: "/CLRTHREADATTRIBUTE (Imposta l&#39;attributo thread CLR) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.CLRThreadAttribute"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/CLRTHREADATTRIBUTE (opzione del linker)"
  - "-CLRTHREADATTRIBUTE (opzione del linker)"
ms.assetid: 4907e9ef-5031-446c-aecf-0a0b32fae1e8
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 14
---
# /CLRTHREADATTRIBUTE (Imposta l&#39;attributo thread CLR)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica in modo esplicito l'attributo threading per il punto di ingresso del programma CLR.  
  
## Sintassi  
  
```  
/CLRTHREADATTRIBUTE:{STA|MTA|NONE}  
```  
  
#### Parametri  
 MTA  
 Applica l'attributo MTAThreadAttribute al punto di ingresso del programma.  
  
 NONE  
 Ottiene lo stesso effetto della mancata specifica dell'opzione \/CLRTHREADATTRIBUTE.  Consente a CLR \(Common Language Runtime\) di impostare l'attributo threading predefinito.  
  
 STA  
 Applica l'attributo STAThreadAttribute al punto di ingresso del programma.  
  
## Note  
 L'impostazione dell'attributo thread è valida solo quando si compila un file exe, poiché influisce sul punto di ingresso del thread principale.  
  
 Se si utilizza il punto di ingresso predefinito, ad esempio main o wmain, specificare il modello di threading utilizzando \/CLRTHREADATTRIBUTE o aggiungendo l'attributo threading, STAThreadAttribute o MTAThreadAttribute, alla funzione del punto di ingresso.  
  
 Se si utilizza un punto di ingresso non predefinito, specificare il modello di threading utilizzando \/CLRTHREADATTRIBUTE o aggiungendo l'attributo threading alla funzione del punto di ingresso non predefinito e quindi specificando il punto di ingresso non predefinito con [\/ENTRY](../../build/reference/entry-entry-point-symbol.md).  
  
 Se il modello specificato nel codice sorgente non corrisponde a quello specificato con \/CLRTHREADATTRIBUTE, quest'ultimo verrà ignorato e verrà applicato il modello di threading specificato nel codice sorgente.  
  
 Sarà necessario utilizzare il threading singolo se, ad esempio, il programma CLR contiene un oggetto COM che utilizza il threading singolo.  Se il programma CLR utilizza il multithreading, non potrà contenere un oggetto che utilizza il threading singolo.  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Espandere il nodo **Proprietà di configurazione**.  
  
3.  Espandere il nodo **Linker**.  
  
4.  Fare clic sulla pagina delle proprietà **Avanzate**.  
  
5.  Modificare la proprietà **Attributo thread CLR**.  
  
### Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.CLRThreadAttribute%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)
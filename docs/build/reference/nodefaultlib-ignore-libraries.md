---
title: "/NODEFAULTLIB (Ignora librerie) | Microsoft Docs"
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
  - "VC.Project.VCLinkerTool.IgnoreAllDefaultLibraries"
  - "VC.Project.VCLinkerTool.IgnoreDefaultLibraryNames"
  - "/nodefaultlib"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/NODEFAULTLIB (opzione del linker)"
  - "librerie predefinite, rimozione"
  - "Ignora librerie (opzione del linker)"
  - "librerie, ignorare"
  - "NODEFAULTLIB (opzione del linker)"
  - "-NODEFAULTLIB (opzione del linker)"
ms.assetid: 7270b673-6711-468e-97a7-c2925ac2be6e
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /NODEFAULTLIB (Ignora librerie)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/NODEFAULTLIB[:library]   
```  
  
## Note  
 dove:  
  
 *library*  
 Libreria che si desidera venga ignorata quando vengono risolti i riferimenti esterni.  
  
## Note  
 L'opzione \/NODEFAULTLIB indica al linker di rimuovere una o più librerie predefinite dall'elenco di librerie in cui viene effettuata la ricerca durante la risoluzione di riferimenti esterni.  
  
 Per creare un file obj che non contiene riferimenti alle librerie predefinite, utilizzare [\/Zl \(Omette il nome della libreria predefinita\)](../../build/reference/zl-omit-default-library-name.md).  
  
 Per impostazione predefinita, con \/NODEFAULTLIB vengono rimosse tutte le librerie predefinite dall'elenco delle librerie in cui effettuare le ricerche per la risoluzione dei riferimenti esterni.  Il parametro *library* facoltativo consente di rimuovere una o più librerie specificate dall'elenco di librerie in cui effettuare le ricerche per la risoluzione dei riferimenti esterni.  Specificare un'opzione \/NODEFAULTLIB per ogni libreria che si desidera escludere.  
  
 I riferimenti a definizioni esterne vengono risolti effettuando la ricerca dapprima nelle librerie specificate esplicitamente, quindi nelle librerie predefinite specificate con l'opzione \/DEFAULTLIB, infine nelle librerie predefinite specificate nei file obj.  
  
 Con \/NODEFAULTLIB:*library* viene eseguito l'override di [\/DEFAULTLIB:](../../build/reference/defaultlib-specify-default-library.md)*library* quando lo stesso nome *library* viene specificato in entrambe.  
  
 Se si utilizza \/NODEFAULTLIB, ad esempio, per compilare il programma senza la libreria di runtime C, potrebbe essere necessario utilizzare anche [\/ENTRY](../../build/reference/entry-entry-point-symbol.md) per specificare il punto di ingresso \(funzione\) nel programma.  Per ulteriori informazioni, vedere [Funzionalità libreria CRT](../../c-runtime-library/crt-library-features.md).  
  
### Per impostare l'opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md).  
  
2.  Selezionare la cartella **Linker**.  
  
3.  Fare clic sulla pagina delle proprietà **Input**.  
  
4.  Selezionare la proprietà **Ignora tutte le librerie predefinite** o specificare un elenco di librerie da ignorare nella proprietà **Ignora libreria specifica**.  Nella pagina delle proprietà **Riga di comando** verrà visualizzato l'effetto delle modifiche apportate a queste proprietà.  
  
### Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreDefaultLibraryNames%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreAllDefaultLibraries%2A>.  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)
---
title: "/GF (Elimina stringhe duplicate) | Microsoft Docs"
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
  - "VC.Project.VCCLCompilerTool.StringPooling"
  - "VC.Project.VCCLWCECompilerTool.StringPooling"
  - "/gf"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/GF (opzione del compilatore) [C++]"
  - "stringhe duplicate"
  - "Elimina stringhe duplicate (opzione del compilatore) [C++]"
  - "GF (opzione del compilatore) [C++]"
  - "-GF (opzione del compilatore) [C++]"
  - "condivisione di stringhe (opzione del compilatore) [C++]"
  - "stringhe [C++], pool"
ms.assetid: bb7b5d1c-8e1f-453b-9298-8fcebf37d16c
caps.latest.revision: 17
caps.handback.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /GF (Elimina stringhe duplicate)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Abilita il compilatore a creare una copia singola di stringhe identiche nell'immagine del programma e nella memoria durante l'esecuzione.  Si tratta dell'ottimizzazione chiamata *condivisione delle stringhe* che può creare programmi di dimensioni minori.  
  
## Sintassi  
  
```  
/GF  
```  
  
## Note  
 Se si utilizza **\/GF**, il sistema operativo non scambia la parte di stringhe della memoria ed è in grado di rileggere le stringhe dal file di immagine.  
  
 **\/GF** condivide le stringhe in sola lettura.  Se si tenta di modificare le stringhe in **\/GF**, si verifica un errore dell'applicazione.  
  
 La condivisione delle stringhe consente a quelli che erano destinati a essere puntatori multipli a buffer multipli di risultare come dei puntatori multipli a un singolo buffer.  Nel codice che segue, `s` e `t` vengono inizializzati con la stessa stringa.  La condivisione delle stringhe determina che puntino alla stessa memoria:  
  
```  
char *s = "This is a character buffer";  
char *t = "This is a character buffer";  
```  
  
> [!NOTE]
>  L'opzione [\/ZI](../../build/reference/z7-zi-zi-debug-information-format.md), utilizzata per Modifica e continuazione, consente di impostare automaticamente l'opzione **\/GF**.  
  
> [!NOTE]
>  L'opzione del compilatore **\/GF** crea una sezione indirizzabile per ogni stringa univoca.  Per impostazione predefinita inoltre un file oggetto contiene fino a 65.536 sezioni indirizzabili.  Se il programma contiene più di 65.536 stringhe, utilizzare l'opzione del compilatore [\/bigobj](../../build/reference/bigobj-increase-number-of-sections-in-dot-obj-file.md) per creare altre sezioni.  
  
 **\/GF** è attiva quando si utilizza [\/O1](../../build/reference/o1-o2-minimize-size-maximize-speed.md) o **\/O2**.  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto.  Per informazioni dettagliate, vedere [Procedura: aprire le pagine delle proprietà dei progetti](../../misc/how-to-open-project-property-pages.md).  
  
2.  Fare clic sulla cartella **C\/C\+\+**.  
  
3.  Fare clic sulla pagina delle proprietà **Generazione codice**.  
  
4.  Modificare la proprietà **Attiva condivisione stringhe**.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.StringPooling%2A>.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
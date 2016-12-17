---
title: "Cenni preliminari sulla compilazione di file di informazioni di visualizzazione | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".bsc (file), informazioni su .bsc (file)"
  - "BSC (file di informazioni di visualizzazione)"
  - "BSC (file di informazioni di visualizzazione), creazione"
  - "bsc (file), informazioni su file bsc"
ms.assetid: b5c12832-51f6-4953-8044-4264dd0fb242
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Cenni preliminari sulla compilazione di file di informazioni di visualizzazione
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Al fine di creare informazioni per la visualizzazione dei simboli, mediante il compilatore viene creato un file sbr per ciascuno dei file di origine del progetto. Successivamente, BSCMAKE.EXE concatena i vari file sbr in un unico file bsc.  
  
 La generazione di file sbr e bsc richiede diverso tempo, pertanto, per impostazione predefinita, in Visual C\+\+ queste funzioni sono disattivate.  Se si desidera visualizzare le informazioni correnti, riattivare le opzioni di visualizzazione e compilare nuovamente il progetto.  
  
 Per comunicare al compilatore che si desidera creare file sbr, utilizzare [\/FR](../../build/reference/fr-fr-create-dot-sbr-file.md) o [\/Fr](../../build/reference/fr-fr-create-dot-sbr-file.md).  Per creare file bsc, è possibile richiamare [BSCMAKE](../../build/reference/bscmake-command-line.md) dalla riga di comando.  In tal modo si ottiene un controllo più preciso sulla manipolazione dei file di informazioni di visualizzazione.  Per ulteriori informazioni, vedere [Riferimenti a BSCMAKE](../../build/reference/bscmake-reference.md).  
  
> [!TIP]
>  È possibile attivare la generazione del file sbr e lasciare disattivata la generazione del file bsc.  In tal modo le operazioni di compilazione risultano rapide ed è anche possibile creare velocemente un nuovo file bsc attivando la generazione dei file bsc e compilando il progetto.  
  
 Riducendo la dimensione del file bsc, verranno ridotti anche il tempo, la memoria e lo spazio su disco necessari per compilarlo.  
  
 Per informazioni sulla compilazione di un file di visualizzazione nell'ambiente di sviluppo, vedere [Pagina delle proprietà Generale \(Progetto\)](../../ide/general-property-page-project.md).  
  
### Per creare un file bsc di dimensione minore  
  
1.  Utilizzare le [opzioni della riga di comando di BSCMAKE](../../build/reference/bscmake-options.md) per escludere informazioni dal file di informazioni di visualizzazione.  
  
2.  Omettere simboli locali in uno o più file sbr durante la compilazione o l'assemblaggio.  
  
3.  Se un file oggetto non contiene informazioni necessarie per la fase di debug corrente, omettere il corrispondente file sbr dal comando BSCMAKE durante la ricompilazione del file di informazioni di visualizzazione.  
  
### Per combinare le informazioni di visualizzazione provenienti da diversi progetti in un unico file di visualizzazione \(bsc\)  
  
1.  Non compilare il file bsc al livello di progetto oppure utilizzare l'opzione \/n per evitare il troncamento dei file sbr.  
  
2.  Dopo aver completato la compilazione di tutti i progetti, eseguire BSCMAKE con tutti i file sbr come input.  Sono accettati i caratteri jolly.  Se, ad esempio, le directory di progetto C:\\X, C:\\Y e C:\\Z contengono diversi file sbr e si desidera combinarli in un unico file bsc, si potrà compilare il file bsc combinato mediante il comando BSCMAKE C:\\X\\\*.sbr C:\\Y\\\*.sbr C:\\Z\\\*.sbr \/o c:\\directory\_desiderata\\filecombinato.bsc.  
  
## Vedere anche  
 [Strumenti per la compilazione in C\/C\+\+](../../build/reference/c-cpp-build-tools.md)   
 [Riferimenti a BSCMAKE](../../build/reference/bscmake-reference.md)
---
title: "Opzioni di BSCMAKE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCBscMakeTool.OutputFile"
  - "VC.Project.VCBscMakeTool.SuppressStartupBanner"
  - "VC.Project.VCBscMakeTool.PreserveSBR"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/v BSCMAKE (opzione)"
  - "Iu BSCMAKE (opzione)"
  - "BSC (file di informazioni di visualizzazione), contenuto"
  - "/Er BSCMAKE (opzione)"
  - "NOLOGO BSCMAKE (opzione)"
  - "/s BSCMAKE (opzione)"
  - "/Ei BSCMAKE (opzione)"
  - "/o BSCMAKE (opzione)"
  - "/NOLOGO BSCMAKE (opzione)"
  - "/Iu BSCMAKE (opzione)"
  - "s BSCMAKE (opzione) (/s)"
  - "/Em BSCMAKE (opzione)"
  - "Em BSCMAKE (opzione)"
  - "Es BSCMAKE (opzione)"
  - "file [C++], BSCMAKE"
  - "Er BSCMAKE (opzione)"
  - "BSCMAKE, opzioni per il controllo dei file"
  - "controllo opzioni BSCMAKE"
  - "El BSCMAKE (opzione)"
  - "/El BSCMAKE (opzione)"
  - "/Es BSCMAKE (opzione)"
  - "Ei BSCMAKE (opzione)"
ms.assetid: fa2f1e06-c684-41cf-80dd-6a554835ebd2
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Opzioni di BSCMAKE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In questa sezione vengono descritte le varie opzioni disponibili per il controllo di BSCMAKE.  Sono disponibili diverse opzioni per il controllo del contenuto del file di informazioni di visualizzazione mediante l'inclusione o l'esclusione di informazioni specifiche.  Le opzioni di esclusione consentono un'esecuzione più rapida di BSCMAKE e possono produrre un file bsc di dimensione minore.  I nomi delle opzioni sono sensibili alle maiuscole \(ad accezione di **\/HELP** e **\/NOLOGO**\).  
  
 Nell'ambiente di sviluppo di Visual Studio sono disponibili solo **\/NOLOGO** e **\/o**.  Per informazioni sull'accesso alle pagine delle proprietà del progetto, vedere [Impostazione delle proprietà dei progetti Visual C\+\+](../../ide/working-with-project-properties.md) .  
  
 \/Ei \( `filename`...\)  
 Consente di escludere il contenuto dei file di inclusione specificati dal file di informazioni di visualizzazione.  Per specificare più file, separarne i nomi con uno spazio e racchiudere l'elenco fra parentesi.  Se si specifica un unico valore per `filename` le parentesi non sono necessarie.  Utilizzare l'opzione **\/Ei** con l'opzione **\/Es** per escludere i file non esclusi da **\/Es**.  
  
 \/El  
 Consente di escludere i simboli locali.  Per impostazione predefinita, i simboli locali vengono inclusi.  Per ulteriori informazioni sui simboli locali, vedere [Creazione di un file SBR](../../build/reference/creating-an-dot-sbr-file.md).  
  
 \/Em  
 Consente di escludere i simboli contenuti nel corpo delle macro.  Utilizzare **\/Em** se nel file di visualizzazione delle informazioni si desidera includere solo i nomi delle macro.  Per impostazioni predefinita, infatti, vengono inclusi sia i nomi che i risultati delle espansioni delle macro.  
  
 \/Er \(`symbol`...\)  
 Consente di escludere i simboli specificati dal file di informazioni di visualizzazione.  Per specificare più nomi di simboli, separarli mediante uno spazio e racchiudere l'elenco fra parentesi.  Se si specifica un unico valore per `symbol` le parentesi non sono necessarie.  
  
 \/Es  
 Consente di escludere dal file di informazioni di visualizzazione tutti i file di inclusione specificati con un percorso assoluto o rilevati all'interno di un percorso assoluto specificato nella variabile di ambiente INCLUDE. In genere, si tratta di file di inclusione di sistema contenenti numerose informazioni, che potrebbero risultare superflue in un file di informazioni di visualizzazione. Questa opzione non esclude i file specificati senza un percorso o con percorsi relativi, né quelli trovati in un percorso relativo specificato in INCLUDE.  Per escludere i file non esclusi da **\/Es**, utilizzare l'opzione **\/Ei** assieme a **\/Es**.  Per escludere solo alcuni file non esclusi da **\/Es**, utilizzare **\/Ei** invece di **\/Es** ed elencare i file che si desidera escludere.  
  
 \/errorreport:\[none &#124; prompt &#124; queue &#124; send\]  
 Consente di inviare a Microsoft informazioni sugli errori interni in bscmake.exe.  
  
 Per ulteriori informazioni su **\/errorreport**, vedere [\/errorReport \(Segnala gli errori interni del compilatore\)](../../build/reference/errorreport-report-internal-compiler-errors.md).  
  
 \/HELP  
 Consente di visualizzare un riepilogo della sintassi della riga di comando di BCSMAKE.  
  
 \/Iu  
 Consente di includere i simboli senza riferimenti.  Per impostazione predefinita, BSCMAKE non consente la registrazione dei simboli definiti ma privi di riferimenti.  Questa opzione non ha alcun effetto per i file sbr di input già compressi, perché i simboli senza riferimenti risultano già rimossi dal compilatore.  
  
 \/n  
 Consente di forzare una compilazione non incrementale.  Utilizzare **\/n** per forzare la compilazione completa del file di informazioni di visualizzazione a prescindere dall'esistenza o meno di un file .bsc e per evitare il troncamento dei file .sbr.  Vedere [Modalità di compilazione di un file bsc in BSCMAKE](../../build/reference/how-bscmake-builds-a-dot-bsc-file.md).  
  
 \/NOLOGO  
 Consente di impedire la visualizzazione del messaggio di copyright di BSCMAKE.  
  
 \/o `filename`  
 Consente di specificare il nome del file di informazioni di visualizzazione.  Per impostazione predefinita, al file di informazioni di visualizzazione viene assegnato il nome di base del primo file sbr e l'estensione bsc.  
  
 \/S \( `filename`...\)  
 Consente di richiedere a BSCMAKE di elaborare il file di inclusione specificato solo al primo rilevamento e di escluderlo nelle occorrenze successive.  Con questa opzione è possibile ridurre il tempo di elaborazione nel caso in cui un file, ad esempio un file di intestazione H relativo a un file di origine C o CCP, venga incluso in diversi file di origine, ma rimanga invariato in base alle istruzioni del preprocessore.  L'opzione in questione può essere utilizzata anche se le modifiche di un file sono irrilevanti per il file di informazioni di visualizzazione che si sta generando.  Per specificare più file, separarne i nomi con uno spazio e racchiudere l'elenco fra parentesi.  Se si specifica un unico valore per `filename` le parentesi non sono necessarie.  Se si desidera escludere il file ogni volta che viene incluso, utilizzare l'opzione **\/Ei** o **\/Es**.  
  
 \/v  
 Consente di visualizzare un output dettagliato contenente il nome di tutti i file sbr elaborati e altre informazioni relative all'esecuzione completa di BSCMAKE.  
  
 \/?  
 Consente di visualizzare un breve riepilogo della sintassi della riga di comando di BCSMAKE.  
  
 Con il seguente comando è possibile richiedere a BSCMAKE di eseguire una compilazione completa del file MAIN.bsc dei tre file sbr.  È inoltre possibile richiedere a BSCMAKE di escludere le istanze duplicate di TOOLBOX.h:  
  
```  
BSCMAKE /n /S toolbox.h /o main.bsc file1.sbr file2.sbr file3.sbr  
```  
  
## Vedere anche  
 [Riferimenti a BSCMAKE](../../build/reference/bscmake-reference.md)
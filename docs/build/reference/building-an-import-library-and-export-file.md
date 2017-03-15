---
title: "Compilazione di una libreria di importazione e di un file di esportazione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLibrarianTool.ModuleDefinitionFile"
  - "VC.Project.VCLibrarianTool.ExportNamedFunctions"
  - "VC.Project.VCLibrarianTool.GenerateDebug"
  - "VC.Project.VCLibrarianTool.ForceSymbolReferences"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "lib (file)"
  - "/DEF (opzione di Gestione librerie)"
  - "/EXPORT (opzione di Gestione librerie)"
  - "/INCLUDE (opzione di Gestione librerie)"
  - "/OUT (opzione di Gestione librerie)"
  - "DEF (opzione di Gestione librerie)"
  - "-DEF (opzione di Gestione librerie)"
  - "EXP (file)"
  - "EXPORT (opzione di Gestione librerie)"
  - "-EXPORT (opzione di Gestione librerie)"
  - "esportazione di dati"
  - "esportazione di dati, file di esportazione (EXP)"
  - "librerie di importazione, compilazione"
  - "INCLUDE (opzione di Gestione librerie)"
  - "-INCLUDE (opzione di Gestione librerie)"
  - "OUT (opzione di Gestione librerie)"
  - "-OUT (opzione di Gestione librerie)"
ms.assetid: 2fe4f30a-1dd6-4b05-84b5-0752e1dee354
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Compilazione di una libreria di importazione e di un file di esportazione
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Per compilare una libreria di importazione e un file di esportazione, utilizzare la seguente sintassi:  
  
```  
LIB /DEF[:deffile] [options] [objfiles] [libraries]  
```  
  
 Quando è specificata l'opzione \/DEF, i file di output vengono creati in base alle specifiche di esportazione passate nel comando LIB.  Sono disponibili tre metodi per la specifica delle esportazioni, elencati di seguito nell'ordine in cui se ne consiglia l'utilizzo:  
  
1.  Una definizione **\_\_declspec\(dllexport\)** in uno dei file oggetto \(*objfiles*\) o delle librerie \(*libraries*\)  
  
2.  Una specifica di \/EXPORT:*name* nella riga di comando di LIB  
  
3.  Una definizione in un'istruzione **EXPORTS** all'interno di un file def \(`deffile`\)  
  
 Si tratta degli stessi metodi utilizzati per specificare le esportazioni quando si collega un programma di esportazione.  In uno stesso programma è possibile che vengano utilizzati più metodi.  È possibile specificare parti del comando LIB \(come più *objfile* o specifiche \/EXPORT\) in un file di comando del comando LIB, con le stesse modalità consentite per i comandi LINK.  
  
 Per compilare una libreria di importazione e un file di esportazione possono essere utilizzate le seguenti opzioni:  
  
 \/OUT:*import*  
 Consente di eseguire l'override del nome predefinito del file di output per la libreria di importazione \(*import*\) creata.  Quando non è specificata l'opzione \/OUT, il nome predefinito è rappresentato dal nome di base del primo file oggetto o libreria del comando LIB e dall'estensione lib.  Al file di esportazione viene assegnato lo stesso nome di base della libreria di importazione e l'estensione exp.  
  
 \/EXPORT:*entryname*\[\=*internalname*\]\[,@`ordinal`\[,**NONAME**\]\]\[,**DATA**\]  
 Consente di esportare una funzione dal programma per consentirne il richiamo mediante altri programmi.  È anche possibile esportare dati tramite la parola chiave **DATA**.  Le esportazioni vengono in genere definite in una DLL.  
  
 *entryname* è il nome della funzione o dell'elemento di dati che deve essere utilizzato dal programma chiamante.  Se lo si desidera, è possibile specificare *internalname* come nome della funzione nota nel programma di definizione. Per impostazione predefinita, *internalname* corrisponde a *entryname*.  `ordinal` specifica un indice nella tabella di esportazione compreso nell'intervallo tra 1 e 65.535. Se non si specifica alcun `ordinal`, ne viene assegnato uno mediante il programma.  La parola chiave **NONAME** esporta la funzione solo come ordinal, senza un *entryname*.  La parola chiave **DATA** viene utilizzata per esportare oggetti costituiti da soli dati.  
  
 \/INCLUDE:`symbol`  
 Aggiunge il simbolo specificato alla tabella dei simboli.  Questa opzione risulta utile per imporre l'uso di un oggetto della libreria che non verrebbe altrimenti incluso.  
  
 Se la libreria di importazione viene creata nel corso di un'operazione preliminare precedente alla creazione della dll, l'insieme di file oggetto da passare durante la compilazione della dll deve corrispondere a quello passato durante la compilazione della libreria di importazione.  
  
## Vedere anche  
 [Utilizzo di librerie di importazione e file di esportazione](../../build/reference/working-with-import-libraries-and-export-files.md)
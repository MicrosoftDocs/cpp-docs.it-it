---
title: "Regole di uniformit&#224; per l&#39;utilizzo per singolo file delle intestazioni precompilate | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - ".pch (file), regole di coerenza"
  - "PCH (file), regole di coerenza"
  - "file di intestazione precompilata, regole di coerenza"
ms.assetid: afd49365-48bc-41f4-b700-fe8297b944a1
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Regole di uniformit&#224; per l&#39;utilizzo per singolo file delle intestazioni precompilate
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

L'opzione del compilatore [\/Yu](../../build/reference/yu-use-precompiled-header-file.md) consente di specificare il file di intestazione precompilato \(PCH\) da utilizzare.  
  
 Quando si utilizza un PCH, il compilatore si basa sul presupposto che, se non diversamente specificato, l'ambiente di compilazione sia lo stesso utilizzato al momento della creazione del PCH \(utilizzo delle stesse opzioni di compilazione, degli stessi pragma e così via\).  Se il compilatore rileva delle inconsistenze, viene visualizzato un messaggio di avviso e l'incongruenza viene rilevata, se possibile.  Questi avvisi non indicano necessariamente un problema del PCH, ma informano semplicemente di possibili conflitti.  I requisiti di uniformità per i PCH sono descritti nelle sezioni che seguono.  
  
## Uniformità tra le opzioni di compilazione  
 Quando si utilizza un PCH è possibile che le seguenti opzioni di compilazione generino un messaggio di avviso di incongruenza:  
  
-   Le macro create mediante l'opzione Preprocessore \(\/D\) devono essere identiche tra la compilazione corrente e la compilazione che ha creato il PCH.  Lo stato delle costanti definite non viene esaminato, ma se queste sono modificate possono verificarsi risultati inattesi.  
  
-   I PCH non sono utilizzabili con le opzioni \/E ed \/EP.  
  
-   È necessario che i PCH vengano creati mediante l'opzione Generate Browse Info \(\/FR\) o Exclude Local Variables \(\/Fr\) prima che le successive compilazioni che utilizzano il PCH possano fare uso di queste opzioni.  
  
## Compatibile C7 \(\/Z7\)  
 Se questa opzione è selezionata quando si crea il PCH, le successive compilazioni che utilizzano PCH possono sfruttare le informazioni di debug.  
  
 Se invece l'opzione Compatibile C7 \(\/Z7\) non è selezionata al momento della creazione del PCH, le successive compilazioni che utilizzano PCH e l'opzione \/Z7 generano un messaggio di avviso.  Le informazioni di debug sono inserite nel file obj corrente e i simboli locali definiti nel PCH non sono disponibili per il debugger.  
  
## Uniformità tra i percorsi di inclusione  
 I PCH non contengono informazioni sul percorso di inclusione esistente al momento della creazione.  Quando si utilizza un file PCH, il compilatore utilizza sempre il percorso di inclusione specificato nella compilazione corrente.  
  
## Uniformità tra i file di origine  
 Quando si specifica l'opzione Use Precompiled Header File \(\/Yu\), il compilatore ignora tutte le direttive del preprocessore \(inclusi i pragma\) presenti nel codice sorgente che verrà precompilato.  La compilazione specificata dalle direttive del preprocessore deve essere la stessa utilizzata dalla compilazione per l'opzione Create Precompiled Header File \(\/Yc\).  
  
## Uniformità tra i pragma  
 I pragma elaborati durante la creazione di un PCH hanno in genere effetto sul file con il quale il PCH verrà in seguito utilizzato.  I pragma di commento e messaggio non hanno alcun effetto sul resto della compilazione.  
  
 I pragma elencati di seguito vengono conservati come parte di un PCH e hanno effetto sulla parte restante di una compilazione che fa uso del PCH.  
  
||||  
|-|-|-|  
|alloc\_text|include\_alias|pack|  
|auto\_inline|init\_seg|pointers\_to\_members|  
|check\_stack|inline\_depth|setlocale|  
|code\_seg|inline\_recursion|vtordisp|  
|data\_seg|intrinsic|warning|  
|function|optimize||  
  
## Vedere anche  
 [Regole di uniformità per le intestazioni precompilate](../../build/reference/precompiled-header-consistency-rules.md)   
 [\/Yu \(Utilizza il file di intestazione precompilato\)](../../build/reference/yu-use-precompiled-header-file.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)
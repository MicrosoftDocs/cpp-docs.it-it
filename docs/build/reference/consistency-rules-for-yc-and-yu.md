---
title: "Regole di uniformit&#224; per /Yc e /Yu | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/yc"
  - "/yu"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/Yc (opzione del compilatore) [C++]"
  - "/Yu (opzione del compilatore) [C++]"
  - "Yc (opzione del compilatore) [C++]"
  - "-Yc (opzione del compilatore) [C++]"
  - "Yu (opzione del compilatore) [C++]"
  - "-Yu (opzione del compilatore) [C++]"
ms.assetid: 9dfb0e32-ec9b-4a36-9355-27a0e5fba512
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Regole di uniformit&#224; per /Yc e /Yu
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Quando si utilizza un'intestazione precompilata creata mediante l'opzione \/Yc o \/Yu, il compilatore confronta l'ambiente di compilazione corrente con quello esistente al momento della creazione del file PCH.  Specificare per la compilazione corrente un ambiente uniforme rispetto al precedente \(utilizzo delle stesse opzioni di compilazione, degli stessi pragma e così via\).  Se il compilatore rileva delle inconsistenze, viene visualizzato un messaggio di avviso e l'incongruenza viene rilevata, se possibile.  Questi avvisi non indicano necessariamente un problema del file PCH, ma informano semplicemente della possibilità di conflitti.  Nelle sezioni che seguono vengono illustrati i requisiti di uniformità per le intestazioni precompilate.  
  
## Uniformità tra le opzioni di compilazione  
 Quando si utilizza un'intestazione precompilata è possibile che le opzioni di compilazione elencate nella tabella che segue generino un messaggio di avviso di incongruenza:  
  
|Opzione|Nome|Regola|  
|-------------|----------|------------|  
|\/D|Definire costanti e macro|Deve essere la stessa per la compilazione che ha creato l'intestazione precompilata e la compilazione corrente.  Lo stato delle costanti definite non viene esaminato, ma possono verificarsi risultati inattesi se i file dipendono dai valori delle costanti modificate.|  
|\/E o \/EP|Copiare l'output del preprocessore in un output standard|Le intestazioni precompilate non sono utilizzabili con l'opzione \/E o \/EP.|  
|\/Fr o \/FR|Generare informazioni di Microsoft Source Browser|Per utilizzare le opzioni \/Fr e \/FR con l'opzione \/Yu, è necessario che siano selezionate precedentemente al momento della creazione dell'intestazione precompilata.  Le successive compilazioni che utilizzano l'intestazione precompilata generano anche informazioni di Source Browser.  Le informazioni di Browser vengono inserite in un unico file sbr ed è possibile farvi riferimento da altri file con le stesse modalità utilizzate per le informazioni di CodeView.  Non è possibile modificare la posizione delle informazioni di Source Browser.|  
|\/GA, \/GD, \/GE, \/Gw o \/GW|Opzioni del protocollo di Windows|Deve essere la stessa per la compilazione che ha creato l'intestazione precompilata e la compilazione corrente.  Se queste opzioni sono differenti, viene generato un messaggio di avviso.|  
|\/Zi|Generare informazioni di debug complete|Se questa opzione è selezionata quando si crea l'intestazione precompilata, le successive compilazioni che utilizzano l'intestazione possono sfruttare le informazioni di debug.  Se l'opzione \/Zi non è selezionata quando si crea l'intestazione precompilata, le successive compilazioni che utilizzano l'intestazione e l'opzione \/Zi generano un messaggio di avviso.  Le informazioni di debug sono inserite nel file oggetto corrente e i simboli locali definiti nell'intestazione precompilata non sono disponibili per il debugger.|  
  
> [!NOTE]
>  La funzione di creazione dell'intestazione precompilata viene utilizzata solo con un file con file di origine C e C\+\+.  
  
## Uniformità tra i percorsi di inclusione  
 Le intestazioni precompilate create mediante l'opzione \/Yc non contengono informazioni sul percorso di inclusione presente al momento della creazione del file PCH.  Quando si utilizza un file PCH, il compilatore utilizza sempre il percorso di inclusione specificato nella compilazione corrente.  
  
## Uniformità tra i file di origine  
 Quando si utilizza un'intestazione precompilata, il compilatore ignora tutte le direttive del preprocessore \(inclusi i pragma\) che vengono visualizzate prima del pragma hdrstop.  La compilazione specificata da tali direttive del preprocessore deve essere la stessa utilizzata dalla compilazione per la creazione del file di intestazione precompilato.  
  
## Uniformità tra i pragma  
 I pragma elaborati durante la compilazione di un'intestazione precompilata hanno in genere effetto sul file in cui l'intestazione precompilata verrà in seguito utilizzata.  I pragma elencati di seguito hanno effetto unicamente sul codice presente nel file PCH, mentre non hanno alcun effetto sul codice che utilizzerà in seguito il file PCH:  
  
||||  
|-|-|-|  
|Commento|page|subtitle|  
|Linesize|pagesize|Titolo|  
|Messaggio|skip||  
  
 I pragma elencati di seguito vengono conservati come parte di un'intestazione precompilata e hanno effetto sulla parte restante di una compilazione che fa uso di tale intestazione.  
  
||||  
|-|-|-|  
|alloc\_text|function|optimize|  
|auto\_inline|inline\_depth|Pack|  
|check\_pointer|inline\_recursion|same\_seg|  
|check\_stack|intrinsic|warning|  
|code\_seg|loop\_opt||  
|data\_seg|native\_caller||  
  
## Vedere anche  
 [Regole di uniformità per le intestazioni precompilate](../../build/reference/precompiled-header-consistency-rules.md)   
 [\/Yc \(Crea il file di intestazione precompilato\)](../../build/reference/yc-create-precompiled-header-file.md)   
 [\/Yu \(Utilizza il file di intestazione precompilato\)](../../build/reference/yu-use-precompiled-header-file.md)
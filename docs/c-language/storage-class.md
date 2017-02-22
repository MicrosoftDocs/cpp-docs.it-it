---
title: "Classe di archiviazione | Microsoft Docs"
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
  - "collegamento esterno, identificatori di classi di archiviazione"
  - "identificatori di funzioni, classe di archiviazione"
  - "classe di archiviazione funzioni"
  - "collegamento [C++], esterno"
  - "classi di archiviazione specifiche di Microsoft"
  - "identificatori di classi di archiviazione statici"
  - "classi di archiviazione"
ms.assetid: 39a79ba6-edf5-42b6-8e45-f94227603dd6
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# Classe di archiviazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'identificatore della classe di archiviazione in una definizione di funzione fornisce alla funzione una classe di archiviazione `extern` o **static**.  
  
## Sintassi  
 *function\-definition*:  
 *declaration\-specifiers*  opt *attribute\-seq* opt *declarator declaration\-list* opt *compound\-statement*  
  
 \/\* *attribute\-seq* è specifico di Microsoft \*\/  
  
 *declaration\-specifiers*:  
 *storage\-class\-specifier declaration\-specifiers*  opt  
  
 *type\-specifier declaration\-specifiers*  opt  
  
 *type\-qualifier declaration\-specifiers*  opt  
  
 *storage\-class\-specifier*: \/\* Per le definizioni di funzione \*\/  
 **extern**  
  
 **static**  
  
 Se una definizione non include *storage\-class\-specifier*, la classe di archiviazione viene impostata in modo predefinito su `extern`.  È possibile dichiarare in modo esplicito una funzione come `extern`, ma non è obbligatorio.  
  
 Se la dichiarazione di una funzione contiene *storage\-class\-specifier* `extern`, l'identificatore avrà lo stesso collegamento di qualsiasi dichiarazione visibile dell'identificatore con ambito file.  Se non è presente una dichiarazione visibile con ambito file, l'identificatore dispone di un collegamento esterno.  Se un identificatore ha un ambito file e nessun *storage\-class\-specifier*, l'identificatore ha un collegamento esterno.  Il collegamento esterno indica che ogni istanza dell'identificatore indica lo stesso oggetto o funzione.  Per informazioni sul collegamento, vedere [Durata, ambito, visibilità e collegamento](../c-language/lifetime-scope-visibility-and-linkage.md) per ulteriori informazioni sul collegamento e l'ambito del file.  
  
 Le dichiarazioni di funzione dell'ambito blocco con un identificatore della classe di archiviazione diverso da `extern` generano errori.  
  
 Una funzione con la classe di archiviazione **static** è visibile solo nel file di origine in cui è definita.  Tutte le altre funzioni, sia se viene loro fornita la classe di archiviazione `extern` in modo esplicito o implicito, sono visibili in tutti i file di origine nel programma.  Se si desidera la classe di archiviazione **static**, è necessario dichiararla alla prima occorrenza di una dichiarazione \(se presente\) della funzione e al momento della definizione della funzione.  
  
 **Sezione specifica Microsoft**  
  
 Quando le estensioni Microsoft sono abilitate, a una funzione originariamente dichiarata senza una classe di archiviazione \(o con la classe di archiviazione `extern`\) viene fornita la classe di archiviazione **static** se la definizione di funzione si trova nello stesso file di origine e se la definizione specifica in modo esplicito la classe di archiviazione **static**.  
  
 Durante la compilazione con l'opzione del compilatore \/Ze, le funzioni dichiarate in un blocco che utilizzano la parola chiave `extern` dispongono di visibilità globale.  Ciò non si verifica durante la compilazione con \/Za.  Questa funzionalità non è affidabile se la portabilità del codice sorgente è una considerazione.  
  
 **Fine sezione specifica Microsoft**  
  
## Vedere anche  
 [Definizioni di funzioni C](../c-language/c-function-definitions.md)
---
title: "Sintassi della riga di comando del compilatore | Microsoft Docs"
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
  - "compilatore cl.exe, sintassi della riga di comando"
  - "sintassi, riga di comando del compilatore CL"
ms.assetid: acba2c1c-0803-4a3a-af25-63e849b930a2
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Sintassi della riga di comando del compilatore
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

La riga di comando CL utilizza la seguente sintassi:  
  
```  
CL [option...] file... [option | file]... [lib...] [@command-file] [/link link-opt...]  
```  
  
 Nella tabella che segue viene descritto l'input relativo al comando CL.  
  
|Voce|Significato|  
|----------|-----------------|  
|*Opzione*|Una o più [opzioni CL](../../build/reference/compiler-options.md).  Tutte le opzioni si applicano a tutti i file di origine specificati.  Le opzioni vengono specificate da una barra \(\/\) o da un trattino \(–\).  Se un'opzione prende un argomento, la descrizione dell'opzione indica se è consentito uno spazio tra l'opzione e gli argomenti.  Nei nomi delle opzioni \(ad eccezione dell'opzione \/HELP\) viene applicata la distinzione fra maiuscole e minuscole.  Vedere [Ordine delle opzioni CL](../../build/reference/order-of-cl-options.md) per ulteriori informazioni.|  
|`file`|Il nome di uno o più file di origine, file obj o librerie.  CL compila i file di origine e passa i nomi dei file obj e delle librerie al linker.  Vedere [Sintassi del nome file CL](../../build/reference/cl-filename-syntax.md) per ulteriori informazioni.|  
|*lib*|Uno o più nomi di libreria.  CL passa questi nomi al linker.|  
|*command\-file*|Un file contenente più opzioni e nomi file.  Vedere [File di comando di CL](../../build/reference/cl-command-files.md) per ulteriori informazioni.|  
|*link\-opt*|Una o più [opzioni del linker](../../build/reference/linker-options.md).  CL passa queste opzioni al linker.|  
  
 È possibile specificare un numero indefinito di opzioni, nomi di file e nomi di libreria, purché il numero di caratteri nella riga di comando non superi il limite di 1024 stabilito dal sistema operativo.  
  
 Per informazioni sul valore restituito da cl.exe, vedere [Valore restituito di cl.exe](../../build/reference/return-value-of-cl-exe.md).  
  
> [!NOTE]
>  È possibile che in future versioni di Windows il limite di input dalla riga di comando \(1024 caratteri\) venga modificato.  
  
## Vedere anche  
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)   
 [Opzioni del compilatore](../../build/reference/compiler-options.md)
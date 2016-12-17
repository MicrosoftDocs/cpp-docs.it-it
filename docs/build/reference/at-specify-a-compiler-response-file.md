---
title: "@ (Specifica un file di risposta del compilatore) | Microsoft Docs"
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
  - "@"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "@ (opzione del compilatore)"
  - "compilatore cl.exe, specifica dei file di risposta"
  - "file di risposta, compilatore C/C++"
ms.assetid: 400fffee-909d-4f60-bf76-45833e822685
caps.latest.revision: 10
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# @ (Specifica un file di risposta del compilatore)
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Specifica un file di risposta del compilatore.  
  
## Sintassi  
  
```  
@response_file  
```  
  
## Argomenti  
 `response_file`  
 Un file di testo contenente i comandi del compilatore  
  
## Note  
 Un file di risposta può contenere qualsiasi comando specificabile nella riga di comando.  Questa operazione può essere utile se gli argomenti della riga di comando superano i 127 caratteri.  
  
 Non è possibile specificare l'opzione **@** da un file di risposta  in quanto un file di risposta non può incorporarne un altro.  
  
 Dalla riga di comando è possibile specificare un numero indefinito di opzioni del file di risposta \(ad esempio, `@respfile.1 @respfile.2`\).  
  
### Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
-   Un file di risposta non può essere specificato dall'interno dell'ambiente di sviluppo, ma deve essere specificato dalla riga di comando.  
  
### Per impostare l'opzione del compilatore a livello di codice  
  
-   Non è possibile modificare questa opzione del compilatore a livello di codice.  
  
## Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
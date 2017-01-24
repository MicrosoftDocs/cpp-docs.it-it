---
title: "Accesso agli argomenti | Microsoft Docs"
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
  - "c.arguments"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "macro di accesso agli argomenti [C++]"
  - "elenchi di argomenti a lunghezza variabile"
ms.assetid: 7046ae34-a0ec-44f0-815d-3209492a3e19
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Accesso agli argomenti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le macro `va_arg`, `va_end` e `va_start` forniscono accesso agli argomenti della funzione quando il numero di argomenti è variabile.  Queste macro sono definite in STDARG.H per la compatibilità ANSI C e in VARARGS.H per la compatibilità con UNIX System V.  
  
### Macro di accesso agli argomenti  
  
|Macro|Utilizzo|Equivalente .NET Framework|  
|-----------|--------------|--------------------------------|  
|[va\_arg](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)|Recuperare l'argomento dall'elenco|[\<caps:sentence id\="tgt9" sentenceid\="f260effcc218d99ea9ab361455fd493c" class\="tgtSentence"\>System::ParamArrayAttribute Class\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.paramarrayattribute.aspx)|  
|[va\_end](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)|Reimpostare il puntatore|[\<caps:sentence id\="tgt12" sentenceid\="f260effcc218d99ea9ab361455fd493c" class\="tgtSentence"\>System::ParamArrayAttribute Class\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.paramarrayattribute.aspx)|  
|[va\_start](../c-runtime-library/reference/va-arg-va-copy-va-end-va-start.md)|Impostare il puntatore all'inizio dell'elenco degli argomenti|[\<caps:sentence id\="tgt15" sentenceid\="f260effcc218d99ea9ab361455fd493c" class\="tgtSentence"\>System::ParamArrayAttribute Class\<\/caps:sentence\>](https://msdn.microsoft.com/en-us/library/system.paramarrayattribute.aspx)|  
  
## Vedere anche  
 [Routine di runtime per categoria](../c-runtime-library/run-time-routines-by-category.md)
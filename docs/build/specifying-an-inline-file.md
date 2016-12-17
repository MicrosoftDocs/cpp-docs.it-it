---
title: "Specifica di un file inline | Microsoft Docs"
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
  - "file [C++], inline"
  - "file inline [C++], specifica NMAKE"
  - "NMAKE (programma), inline (file)"
ms.assetid: 393eccfb-3fc9-4bac-a30c-8ac8d221cca3
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Specifica di un file inline
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specificare due parentesi angolari \(\<\<\) nel comando in cui deve essere visualizzato *filename*.  Le parentesi angolari non possono essere espansioni di macro.  
  
## Sintassi  
  
```  
<<[filename]  
```  
  
## Note  
 Al momento dell'esecuzione del comando, le parentesi angolari vengono sostituite da *filename*, se specificato, oppure da un nome univoco generato da NMAKE.  Se specificato, *filename* deve seguire le parentesi angolari, senza spazi o tabulazioni.  È consentito indicare un percorso.  Non è richiesta né sottintesa alcuna estensione.  Se *filename* è specificato, il file viene creato nella directory corrente o in quella specificata, sovrascrivendo gli eventuali file esistenti con lo stesso nome. In caso contrario, il file viene creato nella directory TMP o nella directory corrente se la variabile di ambiente TMP non è definita.  Se viene riutilizzato un *filename* precedente, NMAKE sostituisce il file precedente.  
  
## Vedere anche  
 [File inline in un makefile](../build/inline-files-in-a-makefile.md)
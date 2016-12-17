---
title: "File di comando di LINK | Microsoft Docs"
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
  - "link"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "file di comando [C++]"
  - "file di comando [C++], LINK"
  - "LINK (strumento) [C++]"
  - "LINK (strumento) [C++], sintassi della riga di comando"
  - "sintassi, file di comando LINK"
  - "testo (file), passaggio di argomenti a LINK"
ms.assetid: 7154511c-32b9-4e5b-a515-3922fa9de48e
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# File di comando di LINK
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile passare a LINK argomenti della riga di comando sotto forma di un file di comando.  Per specificare un file di comando al linker, utilizzare la seguente sintassi:  
  
```  
LINK @commandfile  
```  
  
 Dove `commandfile` è il nome di un file di testo.  Non sono consentiti spazi o caratteri di tabulazione tra il simbolo di chiocciola @ e il nome file.  Dal momento che non esiste alcuna estensione predefinita, è necessario specificare il nome file completo, inclusa l'eventuale estensione.  I caratteri jolly non sono consentiti.  Con il nome file è possibile specificare un percorso assoluto o relativo.  In LINK non viene utilizzata alcuna variabile di ambiente per la ricerca del file.  
  
 Nel file di comando è possibile separare gli argomenti mediante spazi o caratteri di tabulazione, come accade nella riga di comando, e mediante caratteri di nuova riga.  
  
 È possibile indicare interamente o in parte la riga di comando in un file di comando.  È possibile utilizzare più file di comando in un comando LINK.  L'input del file di comando viene accettato come se fosse specificato nella medesima posizione alla riga di comando.  I file di comando non possono essere annidati.  In LINK viene ripetuto il contenuto dei file di comando, a meno che non venga specificata l'opzione [\/NOLOGO](../../build/reference/nologo-suppress-startup-banner-linker.md).  
  
## Esempio  
 Nel comando per la compilazione di una DLL riportato di seguito i nomi di file oggetto e librerie vengono passati in file di comando separati ed è utilizzato un terzo file di comando per la specifica dell'opzione \/EXPORTS.  
  
```  
link /dll @objlist.txt @liblist.txt @exports.txt  
```  
  
## Vedere anche  
 [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)
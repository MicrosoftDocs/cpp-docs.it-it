---
title: "/RANGE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/RANGE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/RANGE (opzione dumpbin)"
  - "-RANGE (opzione dumpbin)"
ms.assetid: 7eeba266-32be-49cc-a350-96bdf541f98a
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# /RANGE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Modifica l'output di dumpbin se utilizzata insieme ad altre opzioni di dumpbin, ad esempio \/RAWDATA o \/DISASM.  
  
## Sintassi  
  
```  
/RANGE:vaMin[,vaMax]  
```  
  
## Flag  
 **vaMin**  
 Indirizzo virtuale in corrispondenza del quale si desidera che venga avviata l'operazione di dumpbin.  
  
 **vaMax** \(facoltativo\)  
 Indirizzo virtuale in cui corrispondenza del quale si desidera che venga terminata l'operazione di dumpbin.  Se l'opzione non è specificata, l'operazione di dumpbin terminerà alla fine del file.  
  
## Note  
 Per visualizzare l'indirizzo virtuale associato a un'immagine, utilizzare il file map relativo all'immagine in questione \(RVA \+ Base\), l'opzione **\/DISASM** o **\/HEADERS** di dumpbin oppure la finestra Disassembly nel debugger di Visual Studio.  
  
## Esempio  
 In questo esempio **\/range** viene utilizzata per modificare la visualizzazione dell'opzione **\/disasm**.  Il valore iniziale è un numero decimale, mentre quello finale è un numero esadecimale.  
  
```  
dumpbin /disasm /range:4219334,0x004061CD t.exe  
```  
  
## Vedere anche  
 [Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)
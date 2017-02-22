---
title: "/LINENUMBERS | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/linenumbers"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/LINENUMBERS (opzione dumpbin)"
  - "numeri di riga"
  - "LINENUMBERS (opzione dumpbin)"
  - "-LINENUMBERS (opzione dumpbin)"
ms.assetid: 1681d582-2c2f-484e-9920-109959549055
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# /LINENUMBERS
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

```  
/LINENUMBERS  
```  
  
## Note  
 Questa opzione consente di visualizzare i numeri di riga COFF.  I numeri di riga sono presenti nei file oggetto compilati con l'opzione Database di programma \(\/Zi\), Compatibile C7 \(\/Z7\) o Solo numeri di riga \(\/Zd\).  Un file eseguibile o una DLL contiene numeri di riga COFF se è stata collegata con l'opzione Genera informazioni di debug \(\/DEBUG\).  
  
 L'unica opzione di DUMPBIN utilizzabile sui file generati con l'opzione del compilatore [\/GL](../../build/reference/gl-whole-program-optimization.md) è [\/HEADERS](../../build/reference/headers.md).  
  
## Vedere anche  
 [Opzioni di DUMPBIN](../../build/reference/dumpbin-options.md)
---
title: "no_registry | Microsoft Docs"
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
  - "no_registry"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "no_registry (attributo)"
ms.assetid: d30de4e2-551c-428c-98fd-951330d578d3
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# no_registry
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

`no_registry` indica al compilatore di non cercare nel registro librerie dei tipi importate con `#import`.  
  
## Sintassi  
  
```  
  
#import filename no_registry  
```  
  
#### Parametri  
 *filename*  
 Una libreria dei tipi.  
  
## Note  
 Se nelle directory di inclusione non si trova una libreria dei tipi di riferimento, la compilazione avrà esito negativo anche se la libreria dei tipi si trova nel Registro di sistema. `no_registry` viene esteso alle altre librerie dei tipi implicitamente importate con `auto_search`.  
  
 Il compilatore non cercherà mai nel Registro di sistema librerie dei tipi specificate dal nome file e passate direttamente a `#import`.  
  
 Quando viene specificato `auto_search`, `#import` aggiuntivi verranno generati con l'impostazione `no_registry` di `#import` iniziale \(se la direttiva `#import` iniziale era `no_registry`, `#import` generato da `auto_search` è anche `no_registry`\).  
  
 `no_registry` è utile se si desidera importare le librerie dei tipi a cui è stato fatto un riferimento incrociato senza il rischio che il compilatore trovi una versione meno recente del file nel Registro di sistema. `no_registry` è utile anche se la libreria dei tipi non è registrata.  
  
## Vedere anche  
 [Attributi \#import](../preprocessor/hash-import-attributes-cpp.md)   
 [Direttiva \#import](../preprocessor/hash-import-directive-cpp.md)
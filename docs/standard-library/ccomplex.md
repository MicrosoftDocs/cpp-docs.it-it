---
title: "&lt;ccomplex&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "<ccomplex>"
dev_langs: 
  - "C++"
ms.assetid: a9fcb5f0-88e3-464b-a5fd-d1afb8cd7e6f
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 15
---
# &lt;ccomplex&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Include l'intestazione STL [\<complex\>](../standard-library/complex.md), che include l'intestazione della libreria C standard \<complex.h\> e aggiunge i nomi associati allo spazio dei nomi `std`.  
  
## Sintassi  
  
```cpp  
  
#include <ccomplex>  
  
```  
  
## Note  
 L'inclusione di questa intestazione garantisce che i nomi dichiarati usando il collegamento esterno nell'intestazione della libreria C standard vengano dichiarati nello spazio dei nomi `std`.  
  
 Il nome `clog` dichiarato in \<complex.h\> non è definito nello spazio dei nomi `std` a causa dei conflitti potenziali con il `clog` dichiarato in [\<iostream\>](../standard-library/iostream.md).  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Panoramica di STL](../standard-library/cpp-standard-library-overview.md)
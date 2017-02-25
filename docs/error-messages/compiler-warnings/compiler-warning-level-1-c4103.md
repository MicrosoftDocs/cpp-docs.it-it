---
title: "Avviso del compilatore (livello 1) C4103 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4103"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4103"
ms.assetid: 9021b514-375e-4d62-b261-ccb06f299e8e
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 1) C4103
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'nomefile': allineamento cambiato dopo l'inclusione dell'intestazione, probabilmente a causa dell'assenza di \#pragma pack\(pop\)  
  
 La compressione influisce sul layout delle classi. Generalmente, se la compressione è differente da un file di intestazione a un altro, possono verificarsi dei problemi.  
  
 Utilizzare \#pragma [pack](../../preprocessor/pack.md)\(pop\) prima di chiudere il file di intestazione per risolvere questo avviso.  
  
 Il seguente codice di esempio genera l'errore C4103:  
  
```  
// C4103.h  
#pragma pack(push, 4)  
  
// defintions and declarations  
  
// uncomment the following line to resolve  
// #pragma pack(pop)  
```  
  
 quindi  
  
```  
// C4103.cpp  
// compile with: /LD /W1  
#include "c4103.h"   // C4103  
```
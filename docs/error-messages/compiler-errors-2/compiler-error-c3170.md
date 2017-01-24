---
title: "Errore del compilatore C3170 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3170"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3170"
ms.assetid: ca9a59d6-7df3-42f0-b028-c09d0af3ac2a
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3170
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile avere identificatori di moduli diversi nello stesso progetto  
  
 Sono stati rilevati attributi [module](../../windows/module-cpp.md) con nomi diversi in due file di una compilazione.  È possibile specificare un solo attributo `module` univoco per ogni compilazione.  
  
 Attributi `module` identici possono essere specificati in più file di codice sorgente.  
  
 Se, ad esempio, vengono rilevati i seguenti attributi module:  
  
```  
// C3170.cpp  
[ module(name="MyModule", uuid="373a1a4e-469b-11d3-a6b0-00c04f79ae8f") ];  
int main() {}  
```  
  
 quindi  
  
```  
// C3170b.cpp  
// compile with: C3170.cpp  
// C3170 expected  
[ module(name="MyModule1", uuid="373a1a4e-469b-11d3-a6b0-00c04f79ae8f") ];  
```  
  
 verrà generato l'errore C3170 \(notare che i nomi sono diversi\).
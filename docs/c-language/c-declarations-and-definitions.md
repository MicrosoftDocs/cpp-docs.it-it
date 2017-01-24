---
title: "Dichiarazioni e definizioni C | Microsoft Docs"
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
  - "C"
ms.assetid: 575f0c9b-5554-4346-be64-b2129ca9227f
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Dichiarazioni e definizioni C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

"Dichiarazione" stabilisce un'associazione tra una variabile, una funzione o un tipo specifico e i relativi attributi.  Nella sezione [Cenni preliminari sulle dichiarazioni viene](../c-language/overview-of-declarations.md) fornita la sintassi ANSI per il non terminale `declaration`.  Una dichiarazione specifica inoltre dove e quando è possibile accedere a un identificatore \("collegamento" di un identificatore\).  Per informazioni sul collegamento, vedere [Durata, ambito, visibilità e collegamento](../c-language/lifetime-scope-visibility-and-linkage.md).  
  
 Una "definizione" di una variabile stabilisce le stesse associazioni di una dichiarazione ma determina anche l'allocazione dell'archiviazione per la variabile.  
  
 Ad esempio, le funzioni `main`, `find` e `count` e le variabili `val` `var` sono definite in un file di origine, nel seguente ordine:  
  
```  
int main() {}  
  
int var = 0;  
double val[MAXVAL];  
char find( fileptr ) {}  
int count( double f ) {}  
```  
  
 Le variabili `var` e `val` possono essere utilizzate nelle funzioni `count` e `find` ; non sono necessarie ulteriori dichiarazioni.  Ma questi nomi non sono visibili \(non è possibile accedervi\) in `main`.  
  
## Vedere anche  
 [File e programmi di origine](../c-language/source-files-and-source-programs.md)
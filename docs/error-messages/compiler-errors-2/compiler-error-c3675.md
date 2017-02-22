---
title: "Errore del compilatore C3675 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3675"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3675"
ms.assetid: 87461613-6633-430b-b95d-c7cb1bb63776
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# Errore del compilatore C3675
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': è riservato a causa della definizione di 'proprietà'  
  
 Quando si dichiara una proprietà semplice, il compilatore genera i metodi delle funzioni di accesso get e set e i nomi corrispondenti sono presenti nell'ambito del programma.  I nomi generati dal compilatore vengono formati anteponendo get\_ e set\_ al nome della proprietà.  Non è quindi possibile dichiarare funzioni con lo stesso nome dei metodi di accesso generati dal compilatore.  
  
 Per ulteriori informazioni, vedere [property](../../windows/property-cpp-component-extensions.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3675:  
  
```  
// C3675.cpp  
// compile with: /clr /c  
ref struct C {  
public:  
   property int Size;  
   int get_Size() { return 0; }   // C3675  
};  
```
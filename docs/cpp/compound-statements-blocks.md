---
title: "Istruzioni composte (blocchi) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "}"
  - "{"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "blocchi, informazioni sui blocchi"
  - "istruzione composta"
ms.assetid: 23855939-7430-498e-8936-0c70055ea701
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Istruzioni composte (blocchi)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un'istruzione composta è costituita da zero o più istruzioni racchiuse tra parentesi graffe \(**{}**\).  Un'istruzione composta può essere utilizzata ovunque sia prevista un'istruzione.  Le istruzioni composte vengono in genere definite blocchi.  
  
## Sintassi  
  
```  
  
{ [ statement-list ] }  
```  
  
## Note  
 Nell'esempio seguente viene utilizzata un'istruzione composta come parte *statement* dell'istruzione **if**. Per dettagli sulla sintassi, vedere [Istruzione if](../cpp/if-else-statement-cpp.md):  
  
```  
if( Amount > 100 )  
{  
    cout << "Amount was too large to handle\n";  
    Alert();  
}  
else  
    Balance -= Amount;  
```  
  
> [!NOTE]
>  Poiché una dichiarazione è l'istruzione, una dichiarazione può essere una delle istruzioni in *statement\-list*.  Di conseguenza, i nomi dichiarati in un'istruzione composta, ma non esplicitamente dichiarati come statici, hanno ambito e, per gli oggetti, durata locale.  Per informazioni dettagliate sul trattamento dei nomi con ambito locale, vedere [Ambito](../cpp/scope-visual-cpp.md).  
  
## Vedere anche  
 [Cenni preliminari sulle istruzioni C\+\+](../cpp/overview-of-cpp-statements.md)
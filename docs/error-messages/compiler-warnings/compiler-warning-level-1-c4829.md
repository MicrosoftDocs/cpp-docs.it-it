---
title: "Avviso del compilatore (livello 1) C4829 | Microsoft Docs"
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
  - "C4829"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4829"
ms.assetid: 4ffabe2b-2ddc-4c52-8564-d1355c93cfa6
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4829
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Parametri probabilmente errati per la funzione main.Considerare 'int main\(Platform::Array\<Platform::String^\>^ argv\)'  
  
 Alcune funzioni, ad esempio main, non possono accettare parametri di tipo riferimento.  Anche se la compilazione avrà esito positivo, l'immagine risultante probabilmente non verrà eseguita.  
  
 L'esempio seguente genera l'errore C4829:  
  
```  
// C4829.cpp  
// compile by using: cl /EHsc /ZW /W4 /c C4829.cpp  
int main(Platform::String ^ s) {}   // C4829  
  
```
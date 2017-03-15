---
title: "Errore del compilatore C3488 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3488"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3488"
ms.assetid: 0a6fcd76-dd3b-48d7-abb3-22eccda96034
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3488
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'var' non è consentito quando la modalità di acquisizione predefinita è per riferimento  
  
 Quando si specifica che la modalità di acquisizione predefinita per un'espressione lambda è in base al riferimento, non è possibile passare una variabile per riferimento alla clausola di acquisizione dell'espressione.  
  
### Per correggere l'errore  
  
-   Non passare in modo esplicito la variabile alla clausola di acquisizione oppure  
  
-   Non specificare l'acquisizione per riferimento come modalità predefinita oppure  
  
-   Specificare l'acquisizione per valore come modalità predefinita oppure  
  
-   Passare la variabile per valore alla clausola di acquisizione. In questo modo il comportamento dell'espressione lambda potrebbe cambiare.  
  
## Esempio  
 L'esempio seguente genera l'errore C3488 perché viene visualizzato un riferimento alla variabile `n` nella clausola di acquisizione di un'espressione lambda la cui modalità predefinita è per riferimento:  
  
```  
// C3488a.cpp int main() { int n = 5; [&, &n]() { return n; } (); // C3488 }  
```  
  
## Esempio  
 L'esempio seguente mostra quattro possibili soluzioni all'errore C3488:  
  
```  
// C3488b.cpp int main() { int n = 5; // Possible resolution 1: // Do not explicitly pass &n to the capture clause. [&]() { return n; } (); // Possible resolution 2: // Do not specify by-reference as the default capture mode. [&n]() { return n; } (); // Possible resolution 3: // Specify by-value as the default capture mode. [=, &n]() { return n; } (); // Possible resolution 4: // Pass n by value to the capture clause. [n]() { return n; } (); }  
```  
  
## Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)
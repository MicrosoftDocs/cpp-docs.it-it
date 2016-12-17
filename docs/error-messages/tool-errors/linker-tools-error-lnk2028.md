---
title: "Errore degli strumenti del linker LNK2028 | Microsoft Docs"
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
  - "LNK2028"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK2028"
ms.assetid: e2b03293-6066-464d-a050-ce747bcf7f0e
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK2028
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

riferimento a 'funzione\_esportata' \(nome\_decorato\) nella funzione 'funzione\_con\_chiamata\_di\_funzione' \(nome\_decorato\)  
  
 Quando si tenta di importare una funzione nativa in un'immagine di tipo pure, tenere presente che le convenzioni di chiamata implicite della compilazione nativa sono diverse da quelle della compilazione pure.  
  
## Esempio  
 Nell'esempio di codice riportato di seguito viene generato un componente con una funzione nativa esportata la cui convenzione di chiamata implicita è [\_\_cdecl](../../cpp/cdecl.md).  
  
```  
// LNK2028.cpp  
// compile with: /LD  
__declspec(dllexport) int func() {  
   return 3;  
}  
```  
  
## Esempio  
 Nell'esempio riportato di seguito viene creato un client pure che utilizza la funzione nativa.  La convenzione di chiamata utilizzata in **\/clr:pure** è tuttavia [\_\_clrcall](../../cpp/clrcall.md).  Nell'esempio seguente viene generato l'errore LNK2028:  
  
```  
// LNK2028_b.cpp  
// compile with: /clr:pure lnk2028.lib  
// LNK2028 expected  
int func();  
  
int main() {  
   return func();  
}  
```
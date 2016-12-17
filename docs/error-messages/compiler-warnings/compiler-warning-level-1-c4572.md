---
title: "Avviso del compilatore (livello 1) C4572 | Microsoft Docs"
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
  - "C4572"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4572"
ms.assetid: 482dee5a-29bd-4fc3-b769-9dfd4cd2a964
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4572
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

In \/clr l'attributo \[ParamArray\] è deprecato, in alternativa utilizzare '...'  
  
 È stato utilizzato uno stile obsoleto per specificare un elenco di argomenti variabili.  Quando si esegue la compilazione per CLR, utilizzare la sintassi dei puntini di sospensione anziché <xref:System.ParamArrayAttribute>.  Per ulteriori informazioni, vedere [Variable Argument Lists \(...\) \(C\+\+\/CLI\)](../../windows/variable-argument-lists-dot-dot-dot-cpp-cli.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4572:  
  
```  
// C4572.cpp  
// compile with: /clr /W1  
void Func([System::ParamArray] array<int> ^);   // C4572  
void Func2(... array<int> ^){}   // OK  
  
int main() {  
   Func2(1, 2, 3);  
}  
```
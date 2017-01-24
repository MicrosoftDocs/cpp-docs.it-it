---
title: "Errore del compilatore C2696 | Microsoft Docs"
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
  - "C2696"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2696"
ms.assetid: 6c6eb7df-1230-4346-9a73-abf14c20785d
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2696
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Impossibile creare un oggetto temporaneo di un tipo gestito 'tipo'  
  
 I riferimenti a `const` in un programma non gestito fanno in modo che il compilatore chiami il costruttore e crei un oggetto temporaneo sullo stack.  Tuttavia, una classe gestita non può mai essere creata nello stack.  
  
 L'errore C2696 può essere generato solo utilizzando **\/clr:oldSyntax**.  
  
 Il seguente codice di esempio genera l'errore C2696:  
  
```  
// C2696b.cpp  
// compile with: /clr:oldSyntax  
  
__gc class G {  
public:  
   G( int i ) {}  
};  
  
void func( const G& g );  
  
int main() {  
   func( 1 );   // C2696  
   G *myG = new G( 1 );   // OK  
   func( *myG );  
}  
```
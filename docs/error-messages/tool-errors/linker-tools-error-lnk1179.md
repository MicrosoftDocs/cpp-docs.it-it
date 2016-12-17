---
title: "Errore degli strumenti del linker LNK1179 | Microsoft Docs"
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
  - "LNK1179"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "LNK1179"
ms.assetid: 4b1536d7-0d3d-4f29-a9c1-6fa5cf6cb665
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore degli strumenti del linker LNK1179
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

file danneggiato o non valido: 'nomefile' COMDAT duplicati  
  
 Un modulo di oggetto contiene due o più COMDAT con lo stesso nome.  
  
 Questo errore può essere causato dall'utilizzo di [\/H](../../build/reference/h-restrict-length-of-external-names.md), che limita la lunghezza dei nomi esterni, e di [\/Gy](../../build/reference/gy-enable-function-level-linking.md), che crea package di funzioni in COMDAT.  
  
## Esempio  
 Nel codice seguente `function1` e `function2` sono identiche nei primi otto caratteri.  La compilazione con **\/Gy** e **\/H8** genera un errore di collegamento.  
  
```  
void function1(void);  
void function2(void);  
  
int main() {  
    function1();  
    function2();  
}  
  
void function1(void) {}  
void function2(void) {}  
```
---
title: "Creazione di istanze di modelli di funzione | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "modelli di funzioni, creazione di un'istanza"
  - "creazione di un'istanza, modelli di funzioni"
  - "modelli, creazione di un'istanza"
ms.assetid: f22a07c7-3ad1-465a-84f5-8737e274bd47
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creazione di istanze di modelli di funzione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando un modello di funzione viene chiamato per ogni tipo, il compilatore crea una creazione di istanze.  Ogni creazione di istanze rappresenta una versione della funzione basata su modelli specializzata per il tipo.  La creazione di istanze verrà chiamata ogni volta che la funzione viene utilizzata per il tipo.  Se sono disponibili alcune creazioni di istanze identiche, anche in moduli diversi, solo una copia della creazione di istanze finirà nel file eseguibile.  
  
 La conversione degli argomenti della funzione è consentita nei modelli di funzione per qualsiasi coppia di parametro e argomento in cui il parametro non dipende da un argomento di modello.  
  
 È possibile creare istanze di modelli di funzione esplicitamente dichiarando il modello con un tipo specifico come argomento.  Ad esempio, il codice seguente è consentito:  
  
```  
// function_template_instantiation.cpp  
template<class T> void f(T) { }  
  
// Instantiate f with the explicitly specified template.  
// argument 'int'  
//  
template void f<int> (int);  
  
// Instantiate f with the deduced template argument 'char'.  
template void f(char);  
int main()  
{  
}  
```  
  
## Vedere anche  
 [Modelli di funzioni](../cpp/function-templates.md)
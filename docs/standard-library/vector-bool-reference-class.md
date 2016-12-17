---
title: "vector&lt;bool&gt;::reference Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vector<bool>::reference"
  - "std::vector<bool>::reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "vector<bool> (classe di riferimento)"
ms.assetid: f27854f9-0ef0-4e7e-ad2e-cd53b6cb3334
caps.latest.revision: 22
caps.handback.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# vector&lt;bool&gt;::reference Class
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La classe `vector<bool>::reference` è una classe proxy fornita da [vector\<bool\> Class](../standard-library/vector-bool-class.md) per simulare `bool&`.  
  
## Note  
 È necessario un riferimento simulato perché C\+\+ non consente riferimenti diretti ai bit a livello nativo.  `vector<bool>` utilizza un solo bit per elemento, a cui è possibile fare riferimento tramite questa classe proxy.  Tuttavia, la simulazione dei riferimenti non è completata perché alcune assegnazioni non sono valide.  Ad esempio, poiché l'indirizzo dell'oggetto `vector<bool>::reference` non può essere accettato, il codice seguente che utilizza [vector\<bool\>::operator&#91;&#93;](../Topic/vector%3Cbool%3E::operator.md) non è corretto:  
  
```cpp  
    vector<bool> vb;  
...  
    bool* pb = &vb[1]; // conversion error - do not use  
    bool& refb = vb[1];   // conversion error - do not use  
  
```  
  
### Funzioni membro  
  
|||  
|-|-|  
|[flip](../standard-library/vector-bool-reference-flip.md)|Inverte il valore booleano di un elemento di vettore.|  
|[operator bool](../standard-library/vector-bool-reference-operator-bool.md)|Fornisce una conversione implicita da `vector<bool>::reference` a `bool`.|  
|[operator\=](../standard-library/vector-bool-reference-operator-assign.md)|Assegna a un bit un valore booleano o il valore di un elemento a cui si fa riferimento.|  
  
## Requisiti  
 **Intestazione**: \<vector\>  
  
 **Spazio dei nomi:** std  
  
## Vedere anche  
 [\<vector\>](../standard-library/vector.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Libreria di modelli standard](../misc/standard-template-library.md)
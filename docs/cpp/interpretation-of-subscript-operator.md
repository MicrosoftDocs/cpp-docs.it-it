---
title: "Interpretazione dell&#39;operatore di indice | Microsoft Docs"
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
  - "matrici [C++], indice"
  - "interpretazione operatori di indice"
  - "operatori [C++], interpretazione di indice"
  - "operatore di indice, Interpretazione"
ms.assetid: 8852ca18-9d5b-43f7-b8bd-abc89364fbf2
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Interpretazione dell&#39;operatore di indice
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Come altri operatori, l'operatore di indice \(**\[ \]**\) può essere ridefinito dall'utente.  Il comportamento predefinito dell'operatore di indice, se non sottoposto a overload, è di combinare il nome della matrice e l'indice utilizzando il seguente metodo:  
  
 \*\(\(*array\-name*\) \+ \(*subscript*\)\)  
  
 Come in qualsiasi aggiunta che include i tipi puntatore, il ridimensionamento viene eseguito automaticamente per regolare le dimensioni del tipo.  Di conseguenza, il valore risultante non è costituito dai byte di *subscript* dell'origine di *array\-name*, ma piuttosto dall'elemento n di  *subscript* della matrice. Per ulteriori informazioni su questa conversione, vedere [Operatori additivi](../cpp/additive-operators-plus-and.md).  
  
 Analogamente, per le matrici multidimensionali, l'indirizzo viene derivato utilizzando il seguente metodo:  
  
 **\(\(**   
 ***array\-name* \) \+ \(**   
 ***subscript* 1**  *max*2 *\* max*3*...max*n\)               **\+** *subscript*2 *\* max*3*...max*n\)                    . . .  *\+* *subscript*n\)\)  
  
## Vedere anche  
 [Matrici](../cpp/arrays-cpp.md)
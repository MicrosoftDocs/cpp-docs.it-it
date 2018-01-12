---
title: Interpretazione dell'operatore di indice | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
dev_langs: C++
helpviewer_keywords:
- subscript operator [C++], interpretation of
- arrays [C++], subscripting
- interpreting subscript operators [C++]
- operators [C++], interpretation of subscript
ms.assetid: 8852ca18-9d5b-43f7-b8bd-abc89364fbf2
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 564ec6bf4fafe2116c41c0f817e2754e1de12abd
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="interpretation-of-subscript-operator"></a>Interpretazione dell'operatore di indice
Come altri operatori, l'operatore di pedice (**[]**) può essere ridefinito dall'utente. Il comportamento predefinito dell'operatore di indice, se non sottoposto a overload, è di combinare il nome della matrice e l'indice utilizzando il seguente metodo:  
  
 \*((*nome matrice*) + (*pedice*))  
  
 Come in qualsiasi aggiunta che include i tipi puntatore, il ridimensionamento viene eseguito automaticamente per regolare le dimensioni del tipo. Pertanto, il valore risultante non è *pedice* byte dall'origine del *nome matrice*; piuttosto, è il *pedice*elemento della matrice. (Per ulteriori informazioni su questa conversione, vedere [operatori additivi](../cpp/additive-operators-plus-and.md).)  
  
 Analogamente, per le matrici multidimensionali, l'indirizzo viene derivato utilizzando il seguente metodo:  
  
 **((**   
 ***nome della matrice* ) + (**   
 ***indice* 1***max*2  *\* max*3*... file max*n)  **+**  *pedice*2  *\* max*3*... file max*n). . . *+**pedice*n))  
  
## <a name="see-also"></a>Vedere anche  
 [Array](../cpp/arrays-cpp.md)
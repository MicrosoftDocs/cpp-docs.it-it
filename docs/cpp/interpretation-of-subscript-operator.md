---
title: Interpretazione dell'operatore di indice | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
dev_langs:
- C++
helpviewer_keywords:
- subscript operator [C++], interpretation of
- arrays [C++], subscripting
- interpreting subscript operators [C++]
- operators [C++], interpretation of subscript
ms.assetid: 8852ca18-9d5b-43f7-b8bd-abc89364fbf2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 9bba312c6969acf95be8899f58f65e31c75386c4
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="interpretation-of-subscript-operator"></a>Interpretazione dell'operatore di indice
Come altri operatori, l'operatore di pedice (**[]**) può essere ridefinito dall'utente. Il comportamento predefinito dell'operatore di indice, se non sottoposto a overload, è di combinare il nome della matrice e l'indice utilizzando il seguente metodo:  
  
 \*((*-nome della matrice*) + (*pedice*))  
  
 Come in qualsiasi aggiunta che include i tipi puntatore, il ridimensionamento viene eseguito automaticamente per regolare le dimensioni del tipo. Pertanto, il valore risultante non è *pedice* byte dall'origine del *nome matrice*; piuttosto, è il *pedice*elemento della matrice. (Per ulteriori informazioni su questa conversione, vedere [operatori additivi](../cpp/additive-operators-plus-and.md).)  
  
 Analogamente, per le matrici multidimensionali, l'indirizzo viene derivato utilizzando il seguente metodo:  
  
 **((**   
 ***nome di matrice* ) + (**   
 ***pedice* 1***max*2  *\* max*3*Outlook file max*n) **+** *pedice*2  *\* max*3*Outlook file max*n).   . . *+* *pedice*n))  
  
## <a name="see-also"></a>Vedere anche  
 [Array](../cpp/arrays-cpp.md)
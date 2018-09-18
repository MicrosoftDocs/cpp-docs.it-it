---
title: Interpretazione dell'operatore di indice | Microsoft Docs
ms.custom: ''
ms.date: 08/27/2018
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
ms.openlocfilehash: 6e1457744747ee3638d7f0b9485ac12af60e5cdd
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46058341"
---
# <a name="interpretation-of-subscript-operator"></a>Interpretazione dell'operatore di indice

Come altri operatori, l'operatore di pedice (**\[]**) può essere ridefinito dall'utente. Il comportamento predefinito dell'operatore di indice, se non sottoposto a overload, è di combinare il nome della matrice e l'indice utilizzando il seguente metodo:

\*((*-nome della matrice*) + (*pedice*))

Come in qualsiasi aggiunta che include i tipi puntatore, il ridimensionamento viene eseguito automaticamente per regolare le dimensioni del tipo. Pertanto, il valore risultante non è *pedice* byte dall'origine del *array-name*; piuttosto, è la *pedice*ennesimo elemento della matrice. (Per altre informazioni su questa conversione, vedere [operatori additivi](../cpp/additive-operators-plus-and.md).)

Analogamente, per le matrici multidimensionali, l'indirizzo viene derivato utilizzando il seguente metodo:

((*-nome della matrice*) + (*pedice*1 \* *max*2 \* *max*3 \* ... \* *max*n) + (*pedice*2 \* *max*3 \* ... \* *max*n) + + *pedice*n))

## <a name="see-also"></a>Vedere anche

[Array](../cpp/arrays-cpp.md)<br/>

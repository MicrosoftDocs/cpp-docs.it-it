---
title: Classe is_literal_type | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: type_traits/std::is_literal_type
dev_langs: C++
helpviewer_keywords: is_literal_type
ms.assetid: a03a4ebb-ee66-48d6-91bb-41cf72b2401f
caps.latest.revision: "12"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: a1311d9cfa8cf089a2649b7fcd65d6e0ed224c45
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="isliteraltype-class"></a>Classe is_literal_type
Verifica se un tipo può essere usato come variabile `constexpr` oppure costruito, usato o restituito da funzioni `constexpr`.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class T>  
struct is_literal_type;
```  
  
#### <a name="parameters"></a>Parametri  
 `T`  
 Tipo su cui eseguire una query.  
  
## <a name="remarks"></a>Note  
 Un'istanza del predicato di tipo contiene true se `T` è un *tipo letterale*; in caso contrario, contiene false. Un tipo letterale è `void`, un tipo scalare, un tipo di riferimento, una matrice di tipo letterale o un tipo di classe letterale. Un tipo di classe letterale è un tipo di classe che ha un distruttore semplice, è un tipo aggregato o ha almeno un costruttore `constexpr` che non supporta la copia o lo spostamento e tutti i relativi membri di dati non statici e le relative classi di base sono tipi letterali non volatili. Se da un lato il tipo di un valore letterale è sempre un tipo letterale, dall'altro il concetto di tipo letterale include tutto ciò che il compilatore può valutare come `constexpr` in fase di compilazione.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<type_traits>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [<type_traits>](../standard-library/type-traits.md)




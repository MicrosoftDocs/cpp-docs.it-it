---
title: Classe time_base | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- time_base
- locale/std::time_base
dev_langs:
- C++
helpviewer_keywords:
- time_base class
ms.assetid: 9ae37f0b-9a42-496e-9870-3d9b71bab8fb
caps.latest.revision: 19
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 4ecf60434799708acab4726a95380a2d3b9dbb3a
ms.openlocfilehash: 86e27eec232094c1e57120f6f811c96b4e4a4871
ms.contentlocale: it-it
ms.lasthandoff: 04/19/2017

---
# <a name="timebase-class"></a>Classe time_base
Questa classe viene usata come classe di base per i facet della classe modello time_get e definisce solo l'oggetto **dateorder** di tipo enumerato e diverse costanti di questo tipo.  
  
## <a name="syntax"></a>Sintassi  
  
```
class time_base : public locale::facet {
public:
    enum dateorder {no_order,
    dmy,
 mdy,
    ymd,
 ydm};
    time_base(
 size_t _Refs = 0)
 ~time_base();

};
```  
  
## <a name="remarks"></a>Note  
 Ogni costante caratterizza un modo diverso di ordinare i componenti di una data. Le costanti sono:  
  
- **no_order**: specifica che non si vuole usare un ordine particolare.  
  
- **dmy**: specifica l'ordine giorno, mese e anno, come in 2 Dicembre 1979.  
  
- **dmy**: specifica l'ordine mese, giorno e anno, come in Dicembre 2, 1979.  
  
- **ymd**: specifica l'ordine anno, mese e giorno, come in 1979/12/2.  
  
- **ydm**: specifica l'ordine anno, giorno e mese, come in 1979: 2 Dic.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<locale>  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md) (Thread safety nella libreria standard C++)





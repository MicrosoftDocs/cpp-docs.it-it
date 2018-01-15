---
title: Classe time_base | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: locale/std::time_base
dev_langs: C++
helpviewer_keywords: time_base class
ms.assetid: 9ae37f0b-9a42-496e-9870-3d9b71bab8fb
caps.latest.revision: "19"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8a91d10a1705e14663443c1471397478aad85b68
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
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




---
title: '&lt;typeindex&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- <typeindex>
dev_langs:
- C++
ms.assetid: a9551137-f74b-4f02-af64-ff00214cea1f
caps.latest.revision: 14
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
ms.sourcegitcommit: 2d05749ba2837a3879c91886b9266de47dd2ece6
ms.openlocfilehash: 4279c10994de9247819e58a06276ef9690b39bb8
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="lttypeindexgt"></a>&lt;typeindex&gt;
Includere l'intestazione standard \<typeindex> per definire una classe e una funzione in grado di supportare l'indicizzazione di oggetti della classe [type_info](../cpp/type-info-class.md).  
  
## <a name="syntax"></a>Sintassi  
  
```cpp  
#include <typeindex>  
```  
  
## <a name="remarks"></a>Note  
 La [struttura hash](../standard-library/hash-structure.md) definisce un oggetto `hash function` idoneo per il mapping di valori di tipo [type_index](../standard-library/type-index-class.md) a una distribuzione di valori di indice.  
  
 La classe `type_index` esegue il wrapping di un puntatore a un oggetto `type_info` per facilitare l'indicizzazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)   
 [Riferimento per la libreria standard C++](../standard-library/cpp-standard-library-reference.md)





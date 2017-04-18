---
title: Errore del compilatore C3888 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- C3888
dev_langs:
- C++
helpviewer_keywords:
- C3888
ms.assetid: 40820812-79c5-4dcd-a19d-b4164d25fc8a
caps.latest.revision: 3
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- ru-ru
- zh-cn
- zh-tw
translation.priority.mt:
- cs-cz
- pl-pl
- pt-br
- tr-tr
translationtype: Machine Translation
ms.sourcegitcommit: 0d9cbb01d1ad0f2ea65d59334cb88140ef18fce0
ms.openlocfilehash: 4b85385c97f5873c1b370cd72f0866439263f787
ms.lasthandoff: 04/12/2017

---
# <a name="compiler-error-c3888"></a>Errore del compilatore C3888
'name': l'espressione const associata a questo membro dati literal non è supportata da C++/CLI  
  
 Il *nome* membro dati dichiarato con la [letterale](../../windows/literal-cpp-component-extensions.md) parola chiave viene inizializzata con un valore, il compilatore non supporta. Il compilatore supporta solo tipi integrali, enum o string costanti. È probabile che l'errore **C3888** sia causato dall'inizializzazione del membro dati con una matrice di byte.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
1.  Verificare che il membro dati literal dichiarato sia di un tipo supportato.  
  
## <a name="see-also"></a>Vedere anche  
 [valore letterale](../../windows/literal-cpp-component-extensions.md)

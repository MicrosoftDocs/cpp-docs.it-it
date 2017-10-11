---
title: Errore del compilatore C3888 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
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
ms.translationtype: MT
ms.sourcegitcommit: 35b46e23aeb5f4dbfd2a0dd44b906389dd5bfc88
ms.openlocfilehash: 26e55c8a675ada3fd2e88976bc9d9a51cfa8b751
ms.contentlocale: it-it
ms.lasthandoff: 10/10/2017

---
# <a name="compiler-error-c3888"></a>Errore del compilatore C3888
'name': l'espressione const associata a questo membro dati literal non è supportata da C++/CLI  
  
 Il membro dati *nome* dichiarato con la parola chiave [literal](../../windows/literal-cpp-component-extensions.md) viene inizializzato con un valore non supportato dal compilatore. Il compilatore supporta solo tipi integrali, enum o string costanti. È probabile che l'errore **C3888** sia causato dall'inizializzazione del membro dati con una matrice di byte.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
1.  Verificare che il membro dati literal dichiarato sia di un tipo supportato.  
  
## <a name="see-also"></a>Vedere anche  
 [literal](../../windows/literal-cpp-component-extensions.md)

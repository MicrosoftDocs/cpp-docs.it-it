---
title: Errore del compilatore C3888 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C3888
dev_langs:
- C++
helpviewer_keywords:
- C3888
ms.assetid: 40820812-79c5-4dcd-a19d-b4164d25fc8a
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: c11c897f35a6c395c4bc6ee6a64be51fa810911b
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="compiler-error-c3888"></a>Errore del compilatore C3888
'name': l'espressione const associata a questo membro dati literal non è supportata da C++/CLI  
  
 Il membro dati *nome* dichiarato con la parola chiave [literal](../../windows/literal-cpp-component-extensions.md) viene inizializzato con un valore non supportato dal compilatore. Il compilatore supporta solo tipi integrali, enum o string costanti. È probabile che l'errore **C3888** sia causato dall'inizializzazione del membro dati con una matrice di byte.  
  
### <a name="to-correct-this-error"></a>Per correggere l'errore  
  
1.  Verificare che il membro dati literal dichiarato sia di un tipo supportato.  
  
## <a name="see-also"></a>Vedere anche  
 [literal](../../windows/literal-cpp-component-extensions.md)
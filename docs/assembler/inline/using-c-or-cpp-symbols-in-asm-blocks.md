---
title: Utilizzo di simboli C o C++ in blocchi asm | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- __asm keyword [C++], syntax
- symbols, in __asm blocks
- Visual C, symbols in __asm blocks
- __asm keyword [C++], C/C++ elements in
- Visual C++, in __asm blocks
ms.assetid: 0758ffdc-dfe9-41c8-a5e1-fd395bcac328
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: b6a39b747c8c576d148bafff19a664a95fcb43e9
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="using-c-or-c-symbols-in-asm-blocks"></a>Utilizzo di simboli C o C++ in blocchi __asm
## <a name="microsoft-specific"></a>Sezione specifica Microsoft  
 Un blocco `__asm` può fare riferimento a qualsiasi simbolo C o C++ nell'ambito in cui il blocco è presente. I simboli di C e C++ sono nomi di variabili, nomi di funzione ed etichette, ovvero nomi che non sono costanti simboliche o membri `enum`. Non è possibile chiamare funzioni membro C++.  
  
 Alcune restrizioni vengono applicate all'utilizzo dei simboli di C++ e C:  
  
-   Ogni istruzione in linguaggio assembly può contenere solo un simbolo C++ o C. I simboli possono trovarsi nella stessa istruzione assembly solo con **lunghezza**, **tipo**, e **dimensioni** espressioni.  
  
-   Le funzioni a cui viene fatto riferimento in un blocco `__asm` devono essere dichiarate (con prototipo) in precedenza nel programma. In caso contrario, il compilatore non è in grado di distinguere tra i nomi di funzione e le etichette nel blocco `__asm`.  
  
-   Un blocco `__asm` non può contenere alcun simboli di C o C++ con la stessa ortografia di parole riservate MASM (indipendentemente dall'uso di maiuscole e minuscole). Parole riservate di MASM includono i nomi di istruzioni, ad esempio **PUSH** e registrare i nomi, ad esempio SI.  
  
-   I tag di unione e di struttura non sono riconosciuti in blocchi `__asm`.  
  
 **Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Uso di C o C++ in blocchi __asm](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md)
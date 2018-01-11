---
title: Compilatore avviso (livello 1) C4744 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C4744
dev_langs: C++
helpviewer_keywords: C4744
ms.assetid: f2a7d0b5-afd5-4926-abc3-cfbd367e3ff5
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 0b6fa95f8477f889aa8664d2b6d99c753cb9848d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="compiler-warning-level-1-c4744"></a>Avviso del compilatore (livello 1) C4744
'var' ha un tipo diverso in 'file1' e 'file2': 'type1' e 'type2'  
  
 Una variabile esterna a cui fa riferimento o definiti in due file dispone di diversi tipi in tali file.  Per risolvere, apportare la stessa le definizioni dei tipi o modificare il nome di variabile in un file.  
  
 C4744 viene generato solo quando i file vengono compilati con /GL  Per altre informazioni, vedere [/GL (Ottimizzazione intero programma)](../../build/reference/gl-whole-program-optimization.md).  
  
> [!NOTE]
>  C4744 si verifica in genere nei file di C (non C++), perché in C++ un nome di variabile è decorato con le informazioni sul tipo.  Quando l'esempio (sotto) viene compilato come C++, si otterrà un errore del linker LNK2019.  
  
## <a name="example"></a>Esempio  
 In questo esempio contiene la prima definizione.  
  
```  
// C4744.c  
// compile with: /c /GL  
int global;  
```  
  
## <a name="example"></a>Esempio  
 L'esempio seguente genera l'errore C4744.  
  
```  
// C4744b.c  
// compile with: C4744.c /GL /W1  
// C4744 expected  
#include <stdio.h>  
  
extern unsigned global;  
  
main()   
{  
    printf_s("%d\n", global);  
}  
```
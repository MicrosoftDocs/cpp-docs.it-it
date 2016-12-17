---
title: "Avviso del compilatore (livello 1) C4744 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4744"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4744"
ms.assetid: f2a7d0b5-afd5-4926-abc3-cfbd367e3ff5
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4744
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'var' ha un tipo diverso in 'file1' e 'file2': 'tipo1' e 'tipo2'  
  
 Una variabile esterna presenta tipi diversi all'interno dei due file in cui viene definita o in cui vi viene fatto riferimento.  Per risolvere il problema, uniformare le definizioni dei tipi o modificare il nome della variabile in uno dei file.  
  
 L'avviso C4744 viene generato solo se i file vengono compilati con la funzione \/GL.  Per ulteriori informazioni, vedere [\/GL \(Ottimizzazione intero programma\)](../../build/reference/gl-whole-program-optimization.md).  
  
> [!NOTE]
>  In genere, l'avviso C4744 viene generato nei file C e non C\+\+, dal momento che in C\+\+ il nome della variabile contiene le informazioni sul tipo.  Quando l'esempio riportato di seguito viene compilato come C\+\+, viene visualizzato l'errore del linker LNK2019.  
  
## Esempio  
 In questo esempio è contenuta la prima definizione.  
  
```  
// C4744.c  
// compile with: /c /GL  
int global;  
```  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4744:  
  
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
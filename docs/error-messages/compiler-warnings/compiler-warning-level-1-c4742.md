---
title: "Avviso del compilatore (livello 1) C4742 | Microsoft Docs"
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
  - "C4742"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4742"
ms.assetid: e520881d-1eeb-48b1-9df0-8017ee8ba076
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4742
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'var' ha un diverso allineamento in 'file1' e 'file2': numero e numero  
  
 Una variabile esterna presenta un allineamento diverso all'interno dei due file in cui viene definita o in cui vi viene fatto riferimento.  Questo avviso viene generato quando il compilatore rileva che il valore `__alignof` per la variabile in *file1* è diverso da quello di `__alignof` per la variabile in *file2*.  Questo può essere dovuto all'utilizzo di tipi incompatibili durante la dichiarazione della variabile in file diversi o all'utilizzo di `#pragma pack` non corrispondenti in file diversi.  
  
 Per risolvere il problema, utilizzare la stessa definizione di tipo o assegnare nomi diversi alle variabili.  
  
 Per ulteriori informazioni, vedere [pack](../../preprocessor/pack.md) e [Operatore \_\_alignof](../../cpp/alignof-operator.md).  
  
## Esempio  
 Di seguito viene riportato il primo file che definisce il tipo.  
  
```  
// C4742a.c  
// compile with: /c  
struct X {  
   char x, y, z, w;  
} global;  
```  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4742:  
  
```  
// C4742b.c  
// compile with: C4742a.c /W1 /GL  
// C4742 expected  
extern struct X {  
   int a;  
} global;  
  
int main() {  
   global.a = 0;  
}  
```
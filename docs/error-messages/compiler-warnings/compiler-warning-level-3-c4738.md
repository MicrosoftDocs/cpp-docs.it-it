---
title: "Avviso del compilatore (livello 3) C4738 | Microsoft Docs"
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
  - "C4738"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4738"
ms.assetid: 9094895f-7eec-46c2-83d3-249b761d585e
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 3) C4738
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

archiviazione in memoria del risultato float a 32 bit, possibile riduzione delle prestazioni  
  
 L'avviso C4738 viene visualizzato per segnalare che può essere necessario arrotondare il risultato di un'assegnazione, un cast, un argomento passato o un'altra operazione oppure che per l'operazione sono stati esauriti i registri ed è stato necessario utilizzare la memoria \(spilling\).  Questa situazione può comportare una riduzione delle prestazioni.  
  
 Per risolvere il problema ed evitare l'arrotondamento, eseguire la compilazione con [\/fp:fast](../../build/reference/fp-specify-floating-point-behavior.md) oppure utilizzare valori `double` anziché valori `float`.  
  
 Per risolvere il problema ed evitare che i registri vengano esauriti, modificare l'ordine del calcolo e l'utilizzo dell'inserimento inline.  
  
 Per impostazione predefinita, questo avviso non è attivo.  Per ulteriori informazioni, vedere [Avvisi del compilatore disattivati per impostazione predefinita](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C4738:  
  
```  
// C4738.cpp  
// compile with: /c /fp:precise /O2 /W3  
// processor: x86  
#include <stdio.h>  
  
#pragma warning(default : 4738)  
  
float func(float f)  
{  
    return f;  
}  
  
int main()  
{  
    extern float f, f1, f2;  
    double d = 0.0;  
  
    f1 = func(d);  
    f2 = (float) d;  
    f = f1 + f2;   // C4738  
    printf_s("%f\n", f);  
}  
```
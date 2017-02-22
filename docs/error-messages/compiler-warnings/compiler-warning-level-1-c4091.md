---
title: "Avviso del compilatore (livello 1) C4091 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4091"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4091"
ms.assetid: 3a404967-ab42-49b0-b324-fd7ba1859d78
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Avviso del compilatore (livello 1) C4091
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'parola chiave': ignorato a sinistra di 'tipo' quando non si dichiara alcuna variabile  
  
 È stata rilevata una situazione in cui probabilmente l'utente prevedeva la dichiarazione di una variabile, ma il compilatore non è stato in grado di eseguire l'operazione.  
  
## Esempio  
 Un attributo `__declspec` all'inizio di una dichiarazione del tipo definito dall'utente si applica alla variabile di quel tipo.  L'avviso C4091 viene visualizzato per indicare che non è dichiarata alcuna variabile.  Nell'esempio seguente viene generato l'errore C4091:  
  
```  
// C4091.cpp  
// compile with: /W1 /c  
__declspec(dllimport) class X {}; // C4091  
  
// __declspec attribute applies to varX  
__declspec(dllimport) class X2 {} varX;  
  
// __declspec attribute after the class or struct keyword   
// applies to user defined type  
class __declspec(dllimport) X3 {};  
```  
  
## Esempio  
 Se un identificatore è un typedef, non può essere anche un nome di variabile.  Nell'esempio seguente viene generato l'errore C4091:  
  
```  
// C4091_b.cpp  
// compile with: /c /W1 /WX  
#define LIST 4  
typedef struct _LIST {} LIST;   // C4091  
```
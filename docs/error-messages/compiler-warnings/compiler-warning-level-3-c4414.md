---
title: "Avviso del compilatore (livello 3) C4414 | Microsoft Docs"
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
  - "C4414"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4414"
ms.assetid: bc81d3ad-55dc-4a6b-a6f2-ec0ef38347df
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 3) C4414
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'funzione': salto short a funzione convertito in near  
  
 I salti short generano un'istruzione compatta che consente di creare un ramo a un indirizzo entro un intervallo limitato dall'istruzione.  L'istruzione include un offset short che rappresenta la distanza tra il salto, l'indirizzo di destinazione e la definizione di funzione.  Durante il collegamento una funzione può essere spostata o sottoposta a ottimizzazioni che ne causano lo spostamento al di fuori dell'intervallo raggiungibile da un offset short.  La compilazione richiede la generazione di un record speciale per il salto e, a tal fine, l'istruzione del salto deve essere NEAR o FAR.  La conversione viene effettuata dal compilatore.  
  
 Nel codice seguente, ad esempio, viene generato l'avviso C4414:  
  
```  
// C4414.cpp  
// compile with: /W3 /c  
// processor: x86  
int DoParityEven();  
int DoParityOdd();  
unsigned char global;  
int __declspec(naked) DoParityEither()  
{  
   __asm  
   {  
      test global,0  
      jpe SHORT DoParityEven  // C4414  
      jmp SHORT DoParityOdd   // C4414  
   }  
}  
```
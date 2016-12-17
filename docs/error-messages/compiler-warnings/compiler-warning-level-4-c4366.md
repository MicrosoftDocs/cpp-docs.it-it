---
title: "Avviso del compilatore (livello 4) C4366 | Microsoft Docs"
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
  - "C4366"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4366"
ms.assetid: 65d2942f-3741-42f4-adf2-4920d5a055ca
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4366
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Il risultato dell'operatore 'operatore' unario potrebbe essere non allineato  
  
 Se un membro della struttura non è stato ancora allineato a causa della compressione, il compilatore genererà un avviso quando l'indirizzo del membro viene assegnato a un puntatore allineato.  Per impostazione predefinita, tutti i puntatori sono allineati.  
  
 Per non visualizzare l'avviso, modificare l'allineamento della struttura o dichiarare il puntatore con la parola chiave [\_\_unaligned](../../cpp/unaligned.md).  
  
 Per ulteriori informazioni, vedere \_\_unaligned e [pack](../../preprocessor/pack.md).  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C4366:  
  
```  
// C4366.cpp  
// compile with: /W4 /c  
// processor: IPF x64  
#pragma pack(1)  
struct X {  
   short s1;  
   int s2;  
};  
  
int main() {  
   X x;  
   short * ps1 = &x.s1;   // OK  
   int * ps2 = &x.s2;   // C4366  
}  
```
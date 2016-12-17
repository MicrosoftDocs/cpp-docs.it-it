---
title: "Errore del compilatore C3532 | Microsoft Docs"
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
  - "C3532"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3532"
ms.assetid: 51067853-eda8-4f59-86e8-8924e16d3a95
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3532
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'tipo': utilizzo errato di 'auto''  
  
 Il tipo indicato non può essere dichiarato con la parola chiave `auto`.  Ad esempio, non è possibile utilizzare la parola chiave `auto` per dichiarare una matrice o un tipo restituito del metodo.  
  
### Per correggere l'errore  
  
1.  Verificare che l'espressione di inizializzazione generi un tipo valido.  
  
2.  Verificare di non dichiarare una matrice o un tipo restituito del metodo.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3532 perché la parola chiave `auto` non può dichiarare un tipo restituito del metodo.  
  
```  
// C3532a.cpp  
// Compile with /Zc:auto  
auto f(){}   // C3532  
```  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3532 perché la parola chiave `auto` non può dichiarare una matrice.  
  
```  
// C3532b.cpp  
// Compile with /Zc:auto  
int main()  
{  
   int x[5];  
   auto a[5];            // C3532  
   auto b[1][2];         // C3532  
   auto y[5] = x;        // C3532  
   auto z[] = {1, 2, 3}; // C3532  
   auto w[] = x;         // C3532  
   return 0;  
}  
```  
  
## Vedere anche  
 [Parola chiave auto](../../cpp/auto-keyword.md)
---
title: "Errore del compilatore C3535 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3535"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3535"
ms.assetid: 24449c98-f681-484d-a00b-32533dca3a88
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3535
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

impossibile dedurre il tipo per 'type1' da 'type2'  
  
 Il tipo della parola chiave dichiarata dalla parola chiave `auto` non può essere dedotto da tipo dell'espressione di inizializzazione.  Questo errore si verifica ad esempio se l'espressione di inizializzazione restituisce `void` che non è un tipo.  
  
### Per correggere l'errore  
  
1.  Verificare che il tipo dell'espressione di inizializzazione non sia `void`.  
  
2.  Verificare che la dichiarazione non sia un puntatore a un tipo fondamentale.  Per ulteriori informazioni, vedere [Tipi fondamentali](../../cpp/fundamental-types-cpp.md).  
  
3.  Se la dichiarazione è un puntatore a un tipo, verificare che l'espressione di inizializzazione sia un tipo di puntatore.  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3535 perché l'espressione di inizializzazione restituisce `void`.  
  
```  
// C3535a.cpp  
// Compile with /Zc:auto  
void f(){}  
int main()  
{  
   auto x = f();   //C3535  
   return 0;  
}  
```  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3535 perché l'istruzione dichiara la variabile `x` come puntatore a un tipo dedotto, ma il tipo dell'espressione di inizializzazione è double.  Di conseguenza, il compilatore non può dedurre il tipo della variabile.  
  
```  
// C3535b.cpp  
// Compile with /Zc:auto  
int main()  
{  
   auto* x = 123.0;   // C3535  
   return 0;  
}  
```  
  
## Esempio  
 Nell'esempio seguente viene generato l'errore C3535 perché la variabile `p` dichiara un puntatore a un tipo dedotto, ma l'espressione di inizializzazione non è un tipo di puntatore.  
  
```  
// C3535c.cpp  
// Compile with /Zc:auto  
class A { };  
A x;  
auto *p = x;  // C3535  
```  
  
## Vedere anche  
 [Parola chiave auto](../../cpp/auto-keyword.md)   
 [Tipi fondamentali](../../cpp/fundamental-types-cpp.md)
---
title: "Errore del compilatore C2217 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2217"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2217"
ms.assetid: 1ce1e3f5-4171-4376-804d-967f7e612935
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Errore del compilatore C2217
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'attributo1' richiede 'attributo2'  
  
 Il primo attributo della funzione richiede il secondo.  
  
### Possibili cause  
  
1.  Funzione di interrupt \(`__interrupt`\) dichiarata come `near`.  Le funzioni di interrupt devono essere `far`.  
  
2.  Funzione di interrupt dichiarata con `__stdcall` o `__fastcall`:  le funzioni di interrupt devono utilizzare le convenzioni di chiamata di C.  
  
## Esempio  
 L'errore C2217 può inoltre verificarsi se si tenta di associare un delegato a una funzione CLR che accetta un numero variabile di argomenti.  Utilizzare questa funzione anche se presenta un overload della matrice di parametri.  Nell'esempio seguente viene generato l'errore C2217.  
  
```  
// C2217.cpp  
// compile with: /clr  
using namespace System;  
delegate void MyDel(String^, Object^, Object^, ...);   // C2217  
delegate void MyDel2(String ^, array<Object ^> ^);   // OK  
  
int main() {  
   MyDel2^ wl = gcnew MyDel2(Console::WriteLine);  
   array<Object ^ > ^ x = gcnew array<Object ^>(2);  
   x[0] = safe_cast<Object^>(0);  
   x[1] = safe_cast<Object^>(1);  
  
   // wl("{0}, {1}", 0, 1);  
   wl("{0}, {1}", x);  
}  
```
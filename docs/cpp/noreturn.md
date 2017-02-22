---
title: "noreturn | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "noreturn_cpp"
  - "noreturn"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec (parola chiave) [C++], noreturn"
  - "noreturn __declspec (parola chiave)"
ms.assetid: 9c6517e5-22d7-4051-9974-3d2200ae4d1d
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# noreturn
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

## Sezione specifica Microsoft  
 Questo attributo `__declspec` indica al compilatore che la funzione non restituisce un valore.  Di conseguenza, per il compilatore è evidente che il codice che segue una chiamata a una funzione **\_\_declspec\(noreturn\)** non è eseguibile.  
  
 Se il compilatore rileva una funzione con un percorso di controllo che non restituisce un valore, viene generato un avviso \(C4715\) o un messaggio di errore \(C2202\).  Se il percorso di controllo non può essere raggiunto a causa di una funzione che non restituisce mai un valore, è possibile utilizzare **\_\_declspec\(noreturn\)** per evitare il messaggio di errore o l'avviso.  
  
> [!NOTE]
>  L'aggiunta di **\_\_declspec\(noreturn\)** a una funzione che si prevede restituisca un valore può determinare un comportamento indefinito.  
  
## Esempio  
 Nell'esempio seguente, la clausola **else** non contiene un'istruzione return.  Dichiarare `fatal` come **\_\_declspec\(noreturn\)** consente di evitare il messaggio di errore o l'avviso.  
  
```  
// noreturn2.cpp  
__declspec(noreturn) extern void fatal () {}  
  
int main() {  
   if(1)  
     return 1;  
   else if(0)  
     return 0;  
   else  
     fatal();  
}  
```  
  
## Vedere anche  
 [\_\_declspec](../cpp/declspec.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)
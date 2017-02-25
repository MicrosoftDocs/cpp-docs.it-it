---
title: "Errore del compilatore C2951 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2951"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2951"
ms.assetid: c6f95aa2-c894-425b-a51c-d40d70c8daa1
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore del compilatore C2951
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

le dichiarazioni di tipo sono consentite solo nell'ambito globale, dello spazio dei nomi o della classe  
  
 Non è possibile dichiarare una classe generica o una classe modello all'esterno dell'ambito globale o dello spazio dei nomi.  Se si specificano le dichiarazioni generiche o di modello in un file di inclusione, assicurarsi che questo sia in ambito globale.  
  
 Il seguente codice di esempio genera l'errore C2951:  
  
```  
// C2951.cpp  
template <class T>  
class A {};  
  
int main() {  
   template <class T>   // C2951  
   class B {};  
}  
```  
  
 L'errore C2951 può verificarsi anche quando si utilizzano i generics:  
  
```  
// C2951b.cpp  
// compile with: /clr /c  
  
// OK  
generic <class T>   
ref class GC { };  
  
int main() {  
   generic <class T> ref class GC2 {};   // C2951  
}  
```
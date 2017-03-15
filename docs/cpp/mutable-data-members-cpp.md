---
title: "Membri dati modificabili (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "mutable_cpp"
  - "mutable"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "mutable (parola chiave) [C++]"
ms.assetid: ebe89746-3d36-43a8-8d69-f426af23f551
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Membri dati modificabili (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questa parola chiave può essere applicata solo a membri dati non dichiarati come static e const di una classe.  Se un membro dati viene dichiarato `mutable`, è consentito assegnare un valore a questo membro dati da una funzione membro **const**.  
  
## Sintassi  
  
```  
  
mutable member-variable-declaration;  
```  
  
## Note  
 Ad esempio, il codice seguente compila senza errori perché `m_accessCount` è stato dichiarato `mutable` e pertanto può essere modificato da `GetFlag` anche se `GetFlag` è una funzione membro const.  
  
```  
// mutable.cpp  
class X  
{  
public:  
   bool GetFlag() const  
   {  
      m_accessCount++;  
      return m_flag;  
   }  
private:  
   bool m_flag;  
   mutable int m_accessCount;  
};  
  
int main()  
{  
}  
```  
  
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)
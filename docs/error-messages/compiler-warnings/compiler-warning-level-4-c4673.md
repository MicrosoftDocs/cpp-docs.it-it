---
title: "Avviso del compilatore (livello 4) C4673 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4673"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4673"
ms.assetid: 95626ec6-f05b-43c7-8b9a-a60a6f98dd30
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Avviso del compilatore (livello 4) C4673
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

se si genera 'identificatore' il sito di rilevamento ignorerà i tipi seguenti  
  
 Non è possibile gestire nel blocco **catch** un oggetto generato come eccezione.  Dopo la riga contenente l'avviso, vengono elencati tutti i tipi che non è possibile gestire,  ad ognuno dei quali è abbinato un avviso specifico.  Per ulteriori informazioni, leggere l'avviso corrispondente al tipo specifico.  
  
 Il seguente codice di esempio genera l'errore C4673:  
  
```  
// C4673.cpp  
// compile with: /EHsc /W4  
class Base {  
private:  
   char * m_chr;  
public:  
   Base() {  
      m_chr = 0;  
   }  
  
   ~Base() {  
      if(m_chr)  
         delete m_chr;  
   }  
};  
  
class Derv : private Base {  
public:  
   Derv() {}  
   ~Derv() {}  
};  
  
int main() {  
   try {  
      Derv D1;  
      // delete previous line, uncomment the next line to resolve  
      // Base D1;  
      throw D1;   // C4673  
   }  
  
   catch(...) {}  
}  
```
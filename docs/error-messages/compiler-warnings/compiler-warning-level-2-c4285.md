---
title: "Avviso del compilatore (livello 2) C4285 | Microsoft Docs"
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
  - "C4285"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4285"
ms.assetid: fa14de1f-fc19-4eec-8bea-81003636e12f
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 2) C4285
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

il tipo restituito per 'identifier::operator –\>' è ricorsivo se applicato utilizzando la notazione infissa  
  
 La funzione **operator–\>\(\)** specificata non può restituire il tipo per cui è definita o un riferimento a tale tipo.  
  
 Il seguente codice di esempio genera l'errore C4285:  
  
```  
// C4285.cpp  
// compile with: /W2  
class C  
{  
public:  
    C operator->();   // C4285  
   // C& operator->();  C4285, also  
};  
  
int main()  
{  
}  
```
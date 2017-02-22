---
title: "Errore del compilatore C2535 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2535"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2535"
ms.assetid: a958f83e-e2bf-4a59-b44b-d406ec325d7e
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Errore del compilatore C2535
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': funzione membro già definita o dichiarata  
  
 Questo errore può essere causato dall'utilizzo dello stesso elenco di parametri formali in più definizioni o dichiarazioni di una funzione in overload.  
  
 Se viene restituito l'errore C2535 a causa della funzione Dispose, per ulteriori informazioni vedere [Distruttori e finalizzatori](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Destructors_and_finalizers).  
  
 Se si compila un progetto ATL, vedere l'articolo della Knowledge Base Q241852 \(informazioni in lingua inglese\).  
  
 Il seguente codice di esempio genera l'errore C2535:  
  
```  
// C2535.cpp  
// compile with: /c  
class C {  
public:  
   void func();   // forward declaration  
   void func() {}   // C2535  
};  
```
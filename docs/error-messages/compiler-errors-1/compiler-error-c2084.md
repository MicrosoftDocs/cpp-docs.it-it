---
title: "Errore del compilatore C2084 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2084"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2084"
ms.assetid: 990b107f-3721-4851-ae8b-4b69a8c149ed
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C2084
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

la funzione 'funzione' ha già un corpo  
  
 La funzione è già stata definita.  
  
 Nelle versioni precedenti di C\+\+  
  
-   Il compilatore avrebbe accettato più specializzazioni di template risolte sullo stesso tipo effettivo, anche se le definizioni aggiuntive non fossero mai state disponibili.  Il compilatore ora rileva tali definizioni multiple.  
  
-   \_\_int32 e int erano trattati come tipi separati.  Ora il compilatore tratta \_\_int32 come un sinonimo di int,  pertanto rileva più definizioni se si esegue l'overload sia su \_\_int32 che su int e genera un errore.  
  
 Il seguente codice di esempio genera l'errore C2084:  
  
```  
// C2084.cpp  
void Func(int);  
void Func(int) {}   // define function  
void Func(int) {}   // C2084 second definition  
```  
  
 Possibile soluzione:  
  
```  
// C2084b.cpp  
// compile with: /c  
void Func(int);  
void Func(int) {}  
```
---
title: "Errore del compilatore C2870 | Microsoft Docs"
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
  - "C2870"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2870"
ms.assetid: 80523ee9-1fd3-4dc4-8a77-5083deb99066
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2870
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'nome': la definizione di uno spazio dei nomi deve comparire in ambito file o all'inizio della definizione di un altro spazio dei nomi  
  
 Il parametro `name` dello spazio dei nomi è stato definito in modo errato.  Gli spazi dei nomi devono essere definiti in ambito di file, ovvero all'esterno di tutti i blocchi e le classi, oppure direttamente all'interno di un altro spazio dei nomi.  
  
 Il seguente codice di esempio genera l'errore C2870:  
  
```  
// C2870.cpp  
// compile with: /c  
int main() {  
   namespace A { int i; };   // C2870  
}  
```
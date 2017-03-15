---
title: "Errore del compilatore C2787 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2787"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2787"
ms.assetid: 34cb57e6-cafe-4ce7-bcc6-53d194629bd0
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Errore del compilatore C2787
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': nessun GUID associato a questo oggetto  
  
 L'operatore [\_\_uuidof](../../cpp/uuidof-operator.md) accetta un tipo definito dall'utente con un GUID collegato o un oggetto di tale tipo definito dall'utente.  Questo errore si verifica quando l'argomento è un tipo definito dall'utente con nessun GUID.  
  
 Il seguente codice di esempio genera l'errore C2787:  
  
```  
// C2787.cpp  
#include <windows.h>  
struct F {};  
  
struct __declspec(uuid("00000000-0000-0000-c000-000000000046")) F2;  
  
int main() {  
   __uuidof(F);   // C2787  
   __uuidof(F2);   // OK  
}  
```
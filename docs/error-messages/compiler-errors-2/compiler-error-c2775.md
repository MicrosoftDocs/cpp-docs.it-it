---
title: "Errore del compilatore C2775 | Microsoft Docs"
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
  - "C2775"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2775"
ms.assetid: 9c488508-ade0-48f1-b94f-d538d15f807a
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C2775
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identificatore': nessun metodo 'get' associato a questa proprietà  
  
 Per un membro dati dichiarato con l'attributo esteso [property](../../cpp/property-cpp.md) non è stata specificata una funzione `get`, mentre un'espressione tenta di recuperarne il valore.  
  
 Il seguente codice di esempio genera l'errore C2775:  
  
```  
// C2775.cpp  
struct A {  
   __declspec(property(put=PutProp2, get=GetProp2)) int prop2;  
   int GetProp2(){return 0;}  
   void PutProp2(int){}  
  
   __declspec(property(put=PutProp)) int prop;  
   int PutProp(void){}  
  
};  
  
int main() {  
   A* pa = new A;  
   int x;  
   x = pa->prop;   // C2775  
   x = pa->prop2;  
}  
```
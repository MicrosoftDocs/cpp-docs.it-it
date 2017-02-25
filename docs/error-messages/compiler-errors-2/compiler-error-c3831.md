---
title: "Errore del compilatore C3831 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3831"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3831"
ms.assetid: a125d8dc-b75a-4ea0-b6c7-fe7b119dba25
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Errore del compilatore C3831
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'membro': 'classe' non può avere un membro dati bloccato o una funzione membro che restituisce un puntatore di blocco  
  
 [pin\_ptr \(C\+\+\/CLI\)](../../windows/pin-ptr-cpp-cli.md) o [\_\_pin](../../misc/pin.md) è stato utilizzato in modo errato.  
  
 Il seguente codice di esempio genera l'errore C3831:  
  
```  
// C3831a.cpp  
// compile with: /clr  
ref class Y  
{  
public:  
   int i;  
};  
  
ref class X  
{  
   pin_ptr<int> mbr_Y;   // C3831  
   int^ mbr_Y2;   // OK  
};  
  
int main() {  
   Y y;  
   pin_ptr<int> p = &y.i;  
}  
```  
  
 Il seguente codice di esempio genera l'errore C3831:  
  
```  
// C3831b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
  
__gc class Y  
{  
};  
  
__gc class X  
{  
   Y __pin * mbr_Y;   // C3831  
   Y * mbr_Y2;   // OK  
  
   Y __pin * mf_Y()  // C3831  
   {  
      Y __pin * pY = new Y();  
      return pY;  
   }  
  
   Y * mf_Y2()   // OK  
   {  
      Y * pY = new Y();  
      return pY;  
   }  
};  
```
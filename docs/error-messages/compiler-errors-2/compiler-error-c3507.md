---
title: "Errore del compilatore C3507 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3507"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3507"
ms.assetid: 75f89767-f6f9-40f6-9820-81a49e09abdf
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore del compilatore C3507
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

un ProgID non può essere composto da più di 39 caratteri 'id', né contenere punteggiatura che non sia '.', né iniziare con una cifra  
  
 L'attributo [progid](../../windows/progid.md) prevede limitazioni sui valori accettati.  
  
 Il seguente codice di esempio genera l'errore C3507:  
  
```  
// C3507.cpp  
[module(name="x")];  
[  
coclass,  
progid("0123456789012345678901234567890123456789"),  
uuid("00000000-0000-0000-0000-000000000001") // C3507 expected  
]  
struct CMyStruct {  
};  
int main() {  
}  
```
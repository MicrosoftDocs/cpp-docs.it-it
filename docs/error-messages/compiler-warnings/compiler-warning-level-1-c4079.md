---
title: "Avviso del compilatore (livello 1) C4079 | Microsoft Docs"
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
  - "C4079"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4079"
ms.assetid: 549759f0-e168-47e9-8c9a-de93ac843689
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4079
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

token 'token' imprevisto  
  
 Un token di separazione imprevisto è stato rilevato in un elenco di argomenti pragma.  Il resto del pragma viene ignorato.  
  
 Il seguente codice di esempio genera l'errore C4079:  
  
```  
// C4079.cpp  
// compile with: /W1  
#pragma warning(disable : 4081)  
#pragma pack(c,16)   // C4079  
  
int main() {  
}  
```
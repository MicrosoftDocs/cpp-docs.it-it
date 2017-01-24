---
title: "Errore irreversibile C1071 | Microsoft Docs"
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
  - "C1071"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1071"
ms.assetid: 489f1786-370e-4ecd-af67-538fe6e5bd4e
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore irreversibile C1071
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

fine file imprevista nel commento  
  
 È stata raggiunta la fine del file durante l'esame di un commento.  
  
### Possibili cause  
  
1.  Terminatore di commento \(\*\/\) mancante.  
  
2.  Carattere di nuova riga mancante dopo un commento sull'ultima riga di un file di origine.  
  
 Il seguente codice di esempio genera l'errore C1071:  
  
```  
// C1071.cpp  
int main() {  
}  
  
/* this comment is fine */  
/* forgot the closing tag        // C1071  
```
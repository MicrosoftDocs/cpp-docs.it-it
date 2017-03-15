---
title: "Errore irreversibile C1004 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C1004"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C1004"
ms.assetid: dbe034b0-6eb0-41b4-a50c-2fccf9e78ad4
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 7
---
# Errore irreversibile C1004
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

fine file imprevista  
  
 È stata raggiunta la fine del file di origine prima della risoluzione di un costrutto.  È possibile che uno dei seguenti elementi non sia presente nel codice:  
  
-   Parentesi graffa di chiusura  
  
-   Parentesi di chiusura  
  
-   Marcatore di commento di chiusura \(\*\/\)  
  
-   Punto e virgola.  
  
 Per correggere l'errore, controllare che non si verifichino le condizioni riportate di seguito:  
  
-   Lo spazio disponibile sull'unità disco predefinita non è sufficiente per i file temporanei, che richiedono circa il doppio dello spazio del file di origine.  
  
-   In una direttiva `#if` che restituisce False manca una direttiva `#endif` di chiusura.  
  
-   Un file di origine non termina con un ritorno a capo e un avanzamento riga.  
  
 Il seguente codice di esempio genera l'errore C1004:  
  
```  
// C1004.cpp  
#if TEST  
int main() {}  
// C1004  
```  
  
 Possibile soluzione:  
  
```  
// C1004b.cpp  
#if TEST  
#endif  
  
int main() {}  
```
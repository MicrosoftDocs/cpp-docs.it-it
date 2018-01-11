---
title: Errore irreversibile C1004 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: error-reference
f1_keywords: C1004
dev_langs: C++
helpviewer_keywords: C1004
ms.assetid: dbe034b0-6eb0-41b4-a50c-2fccf9e78ad4
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 528147eceadd35cc0d9fe656bdc7ce7965339a0a
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="fatal-error-c1004"></a>Errore irreversibile C1004
fine file imprevista  
  
 È stata raggiunta la fine di un file di origine senza la risoluzione di un costrutto. Il codice potrebbe essere mancante uno degli elementi seguenti:  
  
-   Una parentesi graffa di chiusura  
  
-   Una parentesi di chiusura  
  
-   Marcatore di commento di chiusura (* /)  
  
-   Un punto e virgola  
  
 Per correggere l'errore, verificare quanto segue:  
  
-   L'unità disco predefinito dispone di spazio sufficiente per i file temporanei, che richiedono circa il doppio dello spazio del file di origine.  
  
-   Un `#if` (direttiva) che restituisce false manca una chiusura `#endif` direttiva.  
  
-   Un file di origine non termina con ritorno a capo e avanzamento riga.  
  
 L'esempio seguente genera l'errore C1004:  
  
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
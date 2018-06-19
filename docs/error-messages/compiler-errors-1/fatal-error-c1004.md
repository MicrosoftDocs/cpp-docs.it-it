---
title: Errore irreversibile C1004 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-diagnostics
ms.topic: error-reference
f1_keywords:
- C1004
dev_langs:
- C++
helpviewer_keywords:
- C1004
ms.assetid: dbe034b0-6eb0-41b4-a50c-2fccf9e78ad4
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d88f76c00c8f5b36acf238f0da88e908eac6dbe8
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33197169"
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
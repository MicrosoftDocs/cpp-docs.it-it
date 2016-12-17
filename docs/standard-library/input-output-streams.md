---
title: "Flussi di input/output | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "I/O [C++], flusso"
  - "I/O di flusso"
ms.assetid: 21a97566-91a7-42d6-b2f8-a4c16bc926f1
caps.latest.revision: 11
caps.handback.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Flussi di input/output
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

`basic_iostream`, che è definito nel file di intestazione \<istream\>, è la classe che il modello per gli oggetti che gestiscono venga introdotta che restituito ai flussi in base a carattere dei\/O.  
  
 Esistono due typedef che definiscono le specializzazioni caratteri specifiche di `basic_iostream` e possono rendere il codice più facile da leggere: `iostream` \(non confondere con iostream \<\>del file di intestazione\) è un flusso I\/O basato su `basic_iostream<char>`; `wiostream` è un flusso I\/O basato su `basic_iostream<wchar_t>`.  
  
 Per ulteriori informazioni, vedere [Classe basic\_iostream](../standard-library/basic-iostream-class.md), [iostream](../Topic/iostream.md) e [wiostream](../Topic/wiostream.md).  
  
 Derivazione da `basic_iostream` è il modello `basic_fstream`della classe, che viene utilizzato per la trasmissione dei dati di tipo carattere a e dai file.  
  
 Ci sono anche typedef che forniscono le specializzazioni caratteri specifiche di `basic_fstream`.  Vengono `fstream`, un flusso I\/O di file basato su `char` e `wfstream`, un flusso I\/O di file basato su `wchar_t`.  Per ulteriori informazioni, vedere [Classe basic\_fstream](../standard-library/basic-fstream-class.md), [fstream](../Topic/fstream.md) e [wfstream](../Topic/wfstream.md).  Utilizzando questi typedef richiede all'inclusione di fstream \<\>del file di intestazione.  
  
> [!NOTE]
>  Quando un oggetto di `basic_fstream` viene utilizzato per eseguire I\/O di file, sebbene il buffer sottostante contenga le posizioni separatamente definite per leggere e scrivere, l'input corrente e le attuali posizioni di output sono associati set e pertanto, leggendo i movimenti di dati il percorso di output.  
  
 Il modello `basic_stringstream` della classe e la specializzazione comune, `stringstream`, vengono spesso utilizzati per utilizzare gli oggetti flussi I\/O per inserire ed estrarre i dati di tipo carattere.  Per ulteriori informazioni, vedere [Classe basic\_stringstream](../standard-library/basic-stringstream-class.md).  
  
## Vedere anche  
 [stringstream](../Topic/stringstream.md)   
 [Classe basic\_stringstream](../standard-library/basic-stringstream-class.md)   
 [\<sstream\>](../standard-library/sstream.md)   
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Libreria standard C\+\+](../standard-library/cpp-standard-library-reference.md)
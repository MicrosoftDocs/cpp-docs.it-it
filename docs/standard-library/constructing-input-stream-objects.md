---
title: Costruzione di oggetti di flusso di input| Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords: input stream objects
ms.assetid: ab94866e-6ffe-4f15-b4db-0bd23e636075
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: d284452e7b6c9983a751117ad6c2290b267c6994
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="constructing-input-stream-objects"></a>Costruzione di oggetti di flusso di input
Se si usa solo l'oggetto `cin`, non è necessario costruire un flusso di input. È necessario invece costruire un flusso di input se si usano:  
  
- [Costruttori di flusso di file di input](#vclrfinputfilestreamconstructorsanchor8)  
  
- [Costruttori di flusso di stringhe di input](#vclrfinputstringstreamconstructorsanchor9)  
  
##  <a name="vclrfinputfilestreamconstructorsanchor8"></a> Costruttori di flusso di file di input  
 Sono due i metodi disponibili per creare un flusso di file di input:  
  
-   Usare il costruttore di argomenti `void` e chiamare la funzione membro `open`:  
  
 ```  
    ifstream myFile; // On the stack  
    myFile.open("filename");

 
    ifstream* pmyFile = new ifstream; // On the heap  
    pmyFile->open("filename");
```  
  
-   Specificare un nome file e i flag di modalità nella chiamata del costruttore, aprendo il file durante il processo di creazione:  
  
 ```  
    ifstream myFile("filename");
```  
  
##  <a name="vclrfinputstringstreamconstructorsanchor9"></a> Costruttori di flusso di stringhe di input  
 I costruttori di flusso di stringhe di input richiedono l'indirizzo di archiviazione preallocato e preinizializzato:  
  
```  
string s("123.45");

double amt;  
istringstream myString(s);

//istringstream myString("123.45") also works  
myString>> amt; // amt contains 123.45  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Flussi di input](../standard-library/input-streams.md)


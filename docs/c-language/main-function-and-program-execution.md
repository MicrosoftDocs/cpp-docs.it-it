---
title: "Funzione main ed esecuzione di programmi | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "punti di ingresso, programma"
  - "main (funzione)"
  - "main (funzione), esecuzione di programmi"
  - "avvio del programma [C++]"
  - "programmi [C++], chiusura"
  - "avvio (codice), main (funzione)"
ms.assetid: 5984f1bd-072d-4e06-8640-122fb1454401
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzione main ed esecuzione di programmi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ogni programma C Ha una funzione primaria \(principale\) che deve essere denominata **main**.  Se il codice è conforme al modello di programmazione Unicode, è possibile utilizzare la versione a caratteri wide della funzione **main**, **wmain**.  La funzione **main** serve come punto di partenza per l'esecuzione del programma.  Generalmente, controlla l'esecuzione del programma indirizzando le chiamate alle altre funzioni del programma.  In genere, il programma interrompe l'esecuzione alla fine della funzione **main**, sebbene possa terminare in altri punti per diversi motivi.  Talvolta, quando viene rilevato un determinato errore, è possibile forzare la chiusura di un programma.  A tale scopo, utilizzare la funzione **exit**.  Per ulteriori informazioni su questo argomento e per vedere un esempio sulla funzione [exit](../c-runtime-library/reference/exit-exit-exit.md), vedere *Riferimenti alla libreria di runtime*  
  
## Sintassi  
  
```  
main( int argc, char *argv[ ], char *envp[ ] )  
```  
  
## Note  
 Le funzioni nel programma di origine eseguono una o più attività specifiche.  La funzione **main** può chiamare queste funzioni per eseguire le loro rispettive attività.  Quando **main** chiama un'altra funzione, essa passa il controllo di esecuzione a tale funzione, affinché l'esecuzione inizi dalla prima istruzione presente nella funzione.  Una funzione restituisce il controllo a **main** quando viene eseguita un'istruzione `return` o quando viene raggiunta la fine della funzione.  
  
 È possibile dichiarare una funzione, inclusa la funzione **main**, per disporre di parametri.  Il termine "parametro" o "parametro formale" si riferisce all'identificatore che riceve un valore passato a una funzione.  Per ulteriori informazioni sul passaggio di argomenti ai parametri, vedere [Parametri](../c-language/parameters.md).  Quando una funzione chiama un'altra funzione, la funzione chiamata riceve i valori per i relativi parametri dalla funzione chiamante.  Questi valori sono denominati "argomenti". È possibile dichiarare parametri formali per **main**, affinché possa ricevere argomenti della riga di comando, utilizzando il formato seguente:  
  
 Quando si desidera passare informazioni alla funzione **main**, i parametri vengono tradizionalmente denominati `argc` e `argv`, anche se il compilatore C non richiede tali nomi.  I tipi per `argc` e `argv` sono definiti dal linguaggio C.  In genere, se un terzo parametro viene passato alla funzione **main**, il parametro viene denominato `envp`.  Negli esempi riportati più avanti in questa sezione viene illustrato come utilizzare questi tre parametri per accedere agli argomenti della riga di comando.  Nelle sezioni seguenti vengono descritti questi parametri.  
  
 Vedere [Utilizzo di wmain](../c-language/using-wmain.md) per una descrizione della versione a caratteri estesi **main**.  
  
## Vedere anche  
 [main: avvio del programma](../cpp/main-program-startup.md)
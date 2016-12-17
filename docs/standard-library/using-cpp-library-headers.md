---
title: "Utilizzo delle intestazioni della libreria C++ | Microsoft Docs"
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
  - "intestazioni"
  - "intestazioni, denominazione nella direttiva include di C++"
  - "intestazioni, libreria C++ standard"
  - "INCLUDE (direttiva)"
  - "intestazioni di libreria"
  - "libreria C++ standard, intestazioni"
  - "intestazione standard in C++"
ms.assetid: a36e889e-1af2-4cd9-a211-bfc7a3fd8e85
caps.latest.revision: 10
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Utilizzo delle intestazioni della libreria C++
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Include il contenuto di un'intestazione standard denominandola in una direttiva include.  
  
```  
#include <iostream>   // include I/O facilities  
```  
  
 È possibile includere più volte le intestazioni standard in qualsiasi ordine, un'intestazione standard, o due o più intestazioni standard che definiscono la stessa macro o le stesse tipo.  Non includere un'intestazione standard nella dichiarazione.  Non definire le macro che hanno gli stessi nomi come parole chiave prima di importare un'intestazione standard.  
  
 L'intestazione della libreria c\+\+ include tutte le altre intestazioni della libreria di C\+\+ deve definire i tipi necessari. \(Includere sempre in modo esplicito le intestazioni della libreria di C\+\+ necessarie in un'unità di conversione, tuttavia, affinché non indovinate il presentano sulle relative dipendenze effettive.\) Un'intestazione C standard non sono mai un'altra intestazione standard.  Un'intestazione standard dichiarano o definisce solo le entità descritte per in questo documento.  
  
 Ogni funzione nella libreria viene dichiarata in un'intestazione standard.  A differenza di C standard, l'intestazione standard non vengono mai una macro maschera con lo stesso nome della funzione che nasconde la dichiarazione e raggiunge lo stesso effetto.  Per ulteriori informazioni su mascherare delle macro, vedere [Convenzioni della libreria C\+\+](../standard-library/cpp-library-conventions.md).  
  
 Tutti i nomi diverso da `operator delete` e di `operator new` nelle intestazioni della libreria di C\+\+ vengono definiti nello spazio dei `std`, o in uno spazio dei nomi annidato nello spazio dei nomi di `std`.  Per fare riferimento al nome `cin`, ad esempio, ad esempio `std::cin`.  Nota, tuttavia, che i nomi di macro non sono soggette alla qualifica di spazio dei nomi, pertanto si scrive sempre `__STD_COMPLEX` senza un qualificatore di spazio dei nomi.  
  
 In alcuni ambienti di conversione, compresa l'intestazione della libreria c\+\+ può generare i nomi esterni dichiarati nello spazio dei nomi di `std` nello spazio dei nomi globale, anche alle dichiarazioni di `using` utente per ognuno dei nomi.  In caso contrario, l'intestazione *non* vengono presentati alcuni nomi della libreria nello spazio dei nomi corrente.  
  
 Lo standard C\+\+ richiede che le intestazioni standard C dichiari i nomi esterni nello spazio dei nomi `std`, quindi li genera nello spazio dei nomi globale con dichiarazioni di `using` utente per ognuno dei nomi.  Ma in alcuni ambienti di convertire le intestazioni standard C non includono dichiarazioni dello spazio dei nomi, dichiaranti tutti i nomi direttamente nello spazio dei nomi globale.  Pertanto, la modalità più portabile gestire gli spazi dei nomi consiste nel seguire due regole:  
  
-   Per raggruppare dichiarare nello spazio dei nomi `std` un nome esterno dichiarato in \<precedenza in stdlib.h, ad esempio\>, include il cstdlib dell'intestazione \<.\>  Sia che il nome potrebbe anche essere dichiarato nello spazio dei nomi globale.  
  
-   Per garantire la dichiarazione dello spazio dei nomi globale un nome esterno dichiarato \<in stdlib.h, includere\>direttamente\> l'intestazione stdlib.h \<.  Sia che il nome potrebbe anche essere dichiarato nello spazio dei nomi `std`.  
  
 Pertanto, se si desidera chiamare `std::abort` per provocare l'interruzione anomala, è necessario includere \<cstdlib\>.  Se si desidera chiamare `abort`, è necessario includere \<stdlib.h\>  
  
 In alternativa, è possibile scrivere una dichiarazione:  
  
```  
using namespace std;  
```  
  
 quale vengono illustrati tutti i nomi della libreria nello spazio dei nomi corrente.  Se si scrive questa dichiarazione immediatamente dopo tutte le direttive include, si generano i nomi nello spazio dei nomi globale.  Successivamente è possibile ignorare le considerazioni di spazio dei nomi nel resto dell'unità di conversione.  Anche evitare la maggior parte delle differenze tra gli ambienti diversi della conversione.  
  
 A meno che specificamente indicato in caso contrario, non è possibile definire nomi nello spazio dei nomi di `std`, o in uno spazio dei nomi annidato nello spazio dei nomi di `std`, nel programma.  
  
## Vedere anche  
 [Panoramica di STL](../standard-library/cpp-standard-library-overview.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)
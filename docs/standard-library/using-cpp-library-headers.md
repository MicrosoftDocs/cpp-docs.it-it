---
title: Utilizzo delle intestazioni della libreria C++ | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- headers, naming in C++ include directive
- standard header in C++
- headers
- INCLUDE directive
- headers, C++ Standard Library
- library headers
- C++ Standard Library, headers
ms.assetid: a36e889e-1af2-4cd9-a211-bfc7a3fd8e85
caps.latest.revision: 10
author: corob-msft
ms.author: corob
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 3f69f0c3176d2fbe19e11ce08c071691a72d858d
ms.openlocfilehash: 69a20e17403e755031466f269b932a4b14aa523b
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="using-c-library-headers"></a>Utilizzo delle intestazioni della libreria C++
È possibile includere il contenuto di un'intestazione standard denominandola in una direttiva include.  
  
```  
#include <iostream>// include I/O facilities  
```  
  
 Le intestazioni standard possono essere incluse in qualsiasi ordine e più di una volta. È inoltre possibile includere due o più intestazioni standard che definiscono la stessa macro o lo stesso tipo. Non includere un'intestazione standard in una dichiarazione. Non definire macro con gli stessi nomi di parole chiave prima di includere un'intestazione standard.  
  
 Un'intestazione della libreria C++ include qualsiasi altra intestazione della libreria C++ necessaria per definire i tipi desiderati. Includere sempre in modo esplicito le intestazioni della libreria C++ necessarie in un'unità di conversione, altrimenti si rischia di interpretare in modo errato le effettive dipendenze. Un'intestazione C standard non include mai un'altra intestazione standard. Un'intestazione standard dichiara o definisce solo le entità descritte per essa in questo documento.  
  
 Ogni funzione nella libreria è dichiarata in un'intestazione standard. Diversamente dalle intestazioni C standard, le intestazioni standard non forniscono mai una macro di mascheramento con lo stesso nome della funzione che maschera la dichiarazione della funzione e produce lo stesso effetto. Per altre informazioni sulle macro di mascheramento, vedere [C++ Library Conventions](../standard-library/cpp-library-conventions.md) (Convenzioni della libreria C++).  
  
 Tutti i nomi diversi da `operator delete` e `operator new` nelle intestazioni della libreria C++ sono definiti nello spazio dei nomi `std` o in uno spazio dei nomi annidato nello spazio dei nomi `std`. Per fare riferimento al nome `cin`, ad esempio, utilizzare `std::cin`. Si noti tuttavia che i nomi di macro non sono soggetti alla qualificazione dello spazio dei nomi, pertanto è necessario sempre scrivere `__STD_COMPLEX` senza qualificatore dello spazio dei nomi.  
  
 In alcuni ambienti di conversione, se si include un'intestazione della libreria C++, è possibile che venga eseguito il lift dei nomi esterni dichiarati nello spazio dei nomi `std` anche nello spazio dei nomi globale, con singole dichiarazioni `using` per ognuno dei nomi. In caso contrario, l'intestazione *non* introduce alcun nome di libreria nello spazio dei nomi corrente.  
  
 Il linguaggio standard C++ richiede che le intestazioni standard C dichiarino tutti i nomi esterni nello spazio dei nomi `std`, quindi ne esegue il lift nello spazio dei nomi globale con singole dichiarazioni `using` per ognuno dei nomi. In alcuni ambienti di conversione tuttavia le intestazioni C standard non includono dichiarazioni dello spazio dei nomi e tutti i nomi vengono dichiarati direttamente nello spazio dei nomi globale. Pertanto, il modo migliore per gestire gli spazi dei nomi consiste nel seguire due regole:  
  
-   Per dichiarare con certezza nello spazio dei nomi `std` un nome esterno generalmente dichiarato in \<stdlib.h>, ad esempio, includere l'intestazione \<cstdlib>. Considerare che il nome potrebbe essere dichiarato anche nello spazio dei nomi globale.  
  
-   Per dichiarare con certezza nello spazio dei nomi globale un nome esterno dichiarato in \<stdlib.h>, includere direttamente l'intestazione \<stdlib.h>. Considerare che il nome potrebbe essere dichiarato anche nello spazio dei nomi `std`.  
  
 Se pertanto si desidera chiamare `std::abort` per causare una terminazione anomala, includere \<cstdlib>. Se si desidera chiamare `abort`, includere \<stdlib.h>.  
  
 In alternativa, è possibile scrivere la dichiarazione seguente:  
  
```  
using namespace std;  
```  
  
 che trasporta tutti i nomi di libreria nello spazio dei nomi corrente. Se si scrive questa dichiarazione immediatamente dopo tutte le istruzioni include, si esegue il lift dei nomi nello spazio dei nomi globale. È possibile successivamente ignorare le considerazioni sugli spazi dei nomi nel resto dell'unità di conversione ed evitare la maggior parte delle differenze tra i diversi ambienti di conversione.  
  
 A meno che non venga espressamente indicato altrimenti, è possibile non definire i nomi nello spazio dei nomi `std` o in uno spazio dei nomi annidato nello spazio dei nomi `std` nel programma.  
  
## <a name="see-also"></a>Vedere anche  
 [Panoramica sulla libreria standard C++](../standard-library/cpp-standard-library-overview.md)   
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)



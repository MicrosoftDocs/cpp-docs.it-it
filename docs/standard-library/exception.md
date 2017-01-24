---
title: "&lt;exception&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "<exception>"
  - "std::<exception>"
  - "std.<exception>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "intestazione di eccezione"
ms.assetid: 28900768-5dd7-4834-b907-5e37ab3407db
caps.latest.revision: 20
caps.handback.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# &lt;exception&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce diversi tipi e funzioni correlati alla gestione delle eccezioni. Gestione eccezioni viene usata nei casi in cui è possibile ripristinare lo stato precedente del sistema. Fornisce uno strumento affinché il controllo venga restituito da una funzione al programma. L'incorporamento della gestione delle eccezioni ha lo scopo di aumentare l'affidabilità del programma fornendo al contempo un modo per ripristinare il normale funzionamento in presenza di un errore.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <exception>  
  
```  
  
### <a name="typedefs"></a>Typedef  
  
|||  
|-|-|  
|[exception_ptr](../Topic/%3Cexception%3E%20typedefs.md#exception_ptr)|Tipo che descrive un puntatore a un'eccezione.|  
|[terminate_handler](../Topic/%3Cexception%3E%20typedefs.md#terminate_handler)|Tipo che descrive un puntatore a una funzione che è possibile usare come `terminate_handler`.|  
|[unexpected_handler](../Topic/%3Cexception%3E%20typedefs.md#unexpected_handler)|Tipo che descrive un puntatore a una funzione che è possibile usare come `unexpected_handler`.|  
  
### <a name="functions"></a>Funzioni  
  
|||  
|-|-|  
|[current_exception](../Topic/%3Cexception%3E%20functions.md#current_exception)|Ottiene un puntatore all'eccezione corrente.|  
|[get_terminate](../Topic/%3Cexception%3E%20functions.md#get_terminate)|Ottiene la funzione `terminate_handler` corrente.|  
|[get_unexpected](../Topic/%3Cexception%3E%20functions.md#get_unexpected)|Ottiene la funzione `unexpected_handler` corrente.|  
|[make_exception_ptr](../Topic/%3Cexception%3E%20functions.md#make_exception_ptr)|Crea un oggetto `exception_ptr` contenente una copia di un'eccezione.|  
|[rethrow_exception](../Topic/%3Cexception%3E%20functions.md#rethrow_exception)|Genera un'eccezione passata come parametro.|  
|[set_terminate](../Topic/%3Cexception%3E%20functions.md#set_terminate)|Crea un nuovo `terminate_handler` da chiamare al termine del programma.|  
|[set_unexpected](../Topic/%3Cexception%3E%20functions.md#set_unexpected)|Stabilisce un nuovo `unexpected_handler` quando viene rilevata un'eccezione imprevista.|  
|[terminare](../Topic/%3Cexception%3E%20functions.md#terminate)|Chiama un gestore di terminazione.|  
|[uncaught_exception](../Topic/%3Cexception%3E%20functions.md#uncaught_exception)|Restituisce **true** solo se un'eccezione generata è in corso di elaborazione.|  
|[imprevisto](../Topic/%3Cexception%3E%20functions.md#unexpected)|Chiama un gestore imprevisto.|  
  
### <a name="classes"></a>Classi  
  
|||  
|-|-|  
|[bad_exception (classe)](../standard-library/bad-exception-class.md)|La classe descrive un'eccezione che può essere generata da un `unexpected_handler`.|  
|[Classe di eccezione](Exception%20Class.xml)|La classe funge da classe base per tutte le eccezioni generate da determinate espressioni e dalla libreria C++ standard.|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria Standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)


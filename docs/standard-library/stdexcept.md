---
title: '&lt;stdexcept&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- std.<stdexcept>
- std::<stdexcept>
- <stdexcept>
dev_langs:
- C++
helpviewer_keywords:
- stdexcept header
ms.assetid: 495c10b1-1e60-4514-9f8f-7fda11a2f522
caps.latest.revision: 19
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
ms.sourcegitcommit: 3168772cbb7e8127523bc2fc2da5cc9b4f59beb8
ms.openlocfilehash: a01f0cf531196d59815eb87f03ee9d8a15574088
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="ltstdexceptgt"></a>&lt;stdexcept&gt;
Definisce diverse classi standard usate per le eccezioni della creazione di rapporti. Le classi formano una gerarchia di derivazione interamente derivata dall'[eccezione](../standard-library/exception-class.md) della classe e includono due tipi generali di eccezioni: errori logici e errori di runtime. Gli errori logici sono causati da errori del programmatore. Derivano da logic_error della classe di base e includono:  
  
-   `domain_error`  
  
-   `invalid_argument`  
  
-   `length_error`  
  
-   `out_of_range`  
  
 Gli errori di runtime si verificano a causa di errori nelle funzioni della libreria o nel sistema di runtime. Derivano da runtime_error della classe di base e includono:  
  
-   `overflow_error`  
  
-   `range_error`  
  
-   `underflow_error`  
  
### <a name="classes"></a>Classi  
  
|||  
|-|-|  
|[Classe domain_error](../standard-library/domain-error-class.md)|La classe funge da classe di base per tutte le eccezioni generate per segnalare un errore del dominio.|  
|[Classe invalid_argument](../standard-library/invalid-argument-class.md)|La classe funge da classe di base per tutte le eccezioni generate per segnalare un argomento non valido.|  
|[Classe length_error](../standard-library/length-error-class.md)|La classe funge da classe di base per tutte le eccezioni generate per segnalare un tentativo di generare un oggetto troppo lungo da specificare.|  
|[Classe logic_error](../standard-library/logic-error-class.md)|La classe funge da classe da classe di base per tutte le eccezioni generate per segnalare errori presumibilmente rilevabili prima di eseguire il programma, ad esempio violazioni precondizioni logiche.|  
|[Classe out_of_range](../standard-library/out-of-range-class.md)|La classe funge da classe di base per tutte le eccezioni generate per segnalare un argomento che è esterno all'intervallo valido.|  
|[Classe overflow_error](../standard-library/overflow-error-class.md)|La classe funge da classe di base per tutte le eccezioni generate per segnalare un overflow aritmetico.|  
|[Classe range_error](../standard-library/range-error-class.md)|La classe funge da classe di base per tutte le eccezioni generate per segnalare un errore di intervallo.|  
|[Classe runtime_error](../standard-library/runtime-error-class.md)|La classe funge da classe di base per tutte le eccezioni generate per segnalare errori presumibilmente rilevabili solo quando il programma viene eseguito.|  
|[Classe underflow_error](../standard-library/underflow-error-class.md)|La classe funge da classe di base per tutte le eccezioni generate per segnalare un underflow aritmetico.|  
  
## <a name="see-also"></a>Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Thread safety nella libreria standard C++](../standard-library/thread-safety-in-the-cpp-standard-library.md)



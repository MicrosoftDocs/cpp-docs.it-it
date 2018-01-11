---
title: '&lt;strstream&gt; | Microsoft Docs'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: <strstream>
dev_langs: C++
helpviewer_keywords: strstream header
ms.assetid: eaa9d0d4-d217-4f28-8a68-9b9ad7b1c0f5
caps.latest.revision: "20"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 91e127c30b8e360295d7451aa4b35ca8bd420e52
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="ltstrstreamgt"></a>&lt;strstream&gt;
Definisce diverse classi che supportano operazioni iostream su sequenze archiviate in una matrice allocata di oggetti `char`. Queste sequenze vengono facilmente convertite in e da stringhe C.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#include <strstream>  
  
```  
  
## <a name="remarks"></a>Note  
 Gli oggetti di tipo `strstream` funzionano con `char` *, che sono stringhe C. Usare [\<sstream>](../standard-library/sstream.md) per utilizzare oggetti di tipo [basic_string](../standard-library/basic-string-class.md).  
  
> [!NOTE]
>  Le classi in `<strstream>` sono deprecate. Al loro posto, provare a usare le classi in `<sstream>`.  
  
### <a name="classes"></a>Classi  
  
|||  
|-|-|  
|[Classe strstreambuf](../standard-library/strstreambuf-class.md)|La classe descrive un buffer del flusso che controlla la trasmissione di elementi da e verso una sequenza di elementi archiviati in un oggetto matrice `char`.|  
|[Classe istrstream](../standard-library/istrstream-class.md)|La classe descrive un oggetto che controlla l'estrazione di elementi e oggetti codificati da un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).|  
|[Classe ostrstream](../standard-library/ostrstream-class.md)|La classe descrive un oggetto che controlla l'inserimento di elementi e oggetti codificati in un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).|  
|[Classe strstream](../standard-library/strstream-class.md)|La classe descrive un oggetto che controlla l'inserimento e l'estrazione di elementi e oggetti codificati usando un buffer del flusso della classe [strstreambuf](../standard-library/strstreambuf-class.md).|  
  
## <a name="see-also"></a>Vedere anche  
 [\<strstream>](../standard-library/strstream.md)   
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)  (Sicurezza dei thread nella libreria standard C++)  
 [Programmazione di iostream](../standard-library/iostream-programming.md)   
 [Convenzioni di iostream](../standard-library/iostreams-conventions.md)




---
title: Correggere le dipendenze da elementi interni delle librerie | Microsoft Docs
ms.custom: ''
ms.date: 05/24/2017
ms.technology:
- cpp-language
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- library internals in an upgraded Visual C++ project
- _Hash_seq in an upgraded Visual C++ project
ms.assetid: 493e0452-6ecb-4edc-ae20-b6fce2d7d3c5
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 148db60c7a3b1ae3f71269feec8024f6ff22a118
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="fix-your-dependencies-on-library-internals"></a>Correggere le dipendenze da elementi interni delle librerie

Microsoft ha pubblicato il codice sorgente per la libreria standard, la maggior parte della libreria di runtime C e altre librerie Microsoft in molte versioni di Visual Studio. Lo scopo è consentire una migliore comprensione del comportamento delle librerie e agevolare il debug del codice. Un effetto collaterale della pubblicazione del codice sorgente delle librerie è l'esposizione di alcuni valori, strutture di dati e funzioni, anche se non fanno parte dell'interfaccia della libreria. Si tratta di elementi che hanno in genere nomi che iniziano con due caratteri di sottolineatura o un carattere di sottolineatura seguito da una lettera maiuscola, ovvero i nomi riservati dallo standard C++ alle implementazioni. Questi valori, strutture e funzioni sono dettagli di implementazione che possono cambiare in seguito alle evoluzioni delle librerie nel tempo, quindi è caldamente consigliabile evitare di creare dipendenze da questi elementi. In caso contrario, si rischia di realizzare codice non portabile e possono verificarsi problemi quando si tenta di eseguire la migrazione del codice a nuove versioni delle librerie.  

Nella maggior parte dei casi, il documento relativo alle novità o alle modifiche di rilievo pubblicato per ogni versione di Visual Studio non menziona le modifiche apportate agli elementi interni delle librerie. Dopo tutto, si presuppone che questi dettagli di implementazione non abbiano un impatto sugli sviluppatori. A volte, tuttavia, la tentazione si usare codice disponibile all'interno della libreria è troppo grande. Questo argomento descrive le potenziali dipendenze dagli elementi interni di CRT o della libreria standard e come aggiornare il codice per rimuovere tali dipendenze, in modo da renderlo più portabile o eseguirne la migrazione a nuove versioni della libreria.

## <a name="hashseq"></a>_Hash_seq  

La funzione hash interna `std::_Hash_seq(const unsigned char *, size_t)`, usata per implementare `std::hash` su alcuni tipi di stringa, è visibile nelle versioni più recenti della libreria standard. Questa funzione implementa un [hash FNV-1a]( https://en.wikipedia.org/wiki/Fowler%E2%80%93Noll%E2%80%93Vo_hash_function) su una sequenza di caratteri.  
  
Per rimuovere questa dipendenza, sono disponibili due opzioni.  

-   Se si intende inserire una sequenza `const char *` in un contenitore non ordinato con lo stesso sistema per i codici hash di `basic_string`, è possibile farlo usando il l'overlod modello `std::hash` che accetta `std::string_view` e restituisce tale codice hash in un formato portabile. Il codice della libreria per le stringhe potrebbe basarsi o meno sull'uso di un hash FNV-1a in futuro, quindi questo è il modo migliore per evitare una dipendenza da un algoritmo hash particolare. 
  
-   Se l'intenzione è quella di generare un hash FNV-1a su memoria arbitraria, il codice a questo scopo è disponibile in GitHub nel repository [VCSamples]( https://github.com/Microsoft/vcsamples) in un file di intestazione autonomo, [fnv1a.hpp](https://github.com/Microsoft/VCSamples/tree/master/VC2015Samples/_Hash_seq), con [licenza MIT](https://github.com/Microsoft/VCSamples/blob/master/license.txt). Una copia di questo codice è disponibile qui per comodità. È possibile copiare questo codice in un file di intestazione, aggiungere l'intestazione a qualsiasi codice interessato e quindi cercare e sostituire `_Hash_seq` con `fnv1a_hash_bytes`. Si otterrà un comportamento identico all'implementazione interna in `_Hash_seq`. 

```cpp  
/*
VCSamples
Copyright (c) Microsoft Corporation
All rights reserved. 
MIT License
Permission is hereby granted, free of charge, to any person obtaining a copy of
this software and associated documentation files (the "Software"), to deal in
the Software without restriction, including without limitation the rights to
use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies
of the Software, and to permit persons to whom the Software is furnished to do
so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED *AS IS*, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#include <stddef.h>

inline size_t fnv1a_hash_bytes(const unsigned char * first, size_t count) {
#if defined(_WIN64)
    static_assert(sizeof(size_t) == 8, "This code is for 64-bit size_t.");
    const size_t fnv_offset_basis = 14695981039346656037ULL;
    const size_t fnv_prime = 1099511628211ULL;

#else /* defined(_WIN64) */
    static_assert(sizeof(size_t) == 4, "This code is for 32-bit size_t.");
    const size_t fnv_offset_basis = 2166136261U;
    const size_t fnv_prime = 16777619U;
#endif /* defined(_WIN64) */

    size_t result = fnv_offset_basis;
    for (size_t next = 0; next < count; ++next)
        {   // fold in another byte
        result ^= (size_t)first[next];
        result *= fnv_prime;
        }
    return (result);
}
```  
  
## <a name="see-also"></a>Vedere anche  
  
[Aggiornamento di progetti da versioni precedenti di Visual C++](upgrading-projects-from-earlier-versions-of-visual-cpp.md)  
[Panoramica dei potenziali problemi di aggiornamento (Visual C++)](overview-of-potential-upgrade-issues-visual-cpp.md)  
[Aggiornare il codice a Universal CRT](upgrade-your-code-to-the-universal-crt.md)  

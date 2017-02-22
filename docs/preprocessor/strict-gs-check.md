---
title: "strict_gs_check | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "strict_gs_check"
  - "strict_gs_check_CPP"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "strict_gs_check (pragma)"
ms.assetid: decfec81-c916-42e0-a07f-8cc26df6a7ce
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# strict_gs_check
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Questo pragma fornisce controllo di sicurezza avanzato.  
  
## Sintassi  
  
```  
#pragma strict_gs_check([push,] on )   
#pragma strict_gs_check([push,] off )   
#pragma strict_gs_check(pop)  
```  
  
## Note  
 Indica al compilatore di inserire un cookie casuale nello stack di funzione per il rilevamento di alcune categorie di sovraccarico del buffer basato su stack.  Per impostazione predefinita, l'opzione del compilatore \/GS \(controllo di sicurezza buffer\) non inserisce un cookie per tutte le funzioni.  Per ulteriori informazioni, vedere [\/GS \(Controllo sicurezza buffer\)](../build/reference/gs-buffer-security-check.md).  
  
 È necessario compilare con \/GS \(controllo di sicurezza buffer\) per abilitare lo strict\_gs\_check.  
  
 Utilizzare questo pragma in moduli di codice esposti a dati potenzialmente dannosi.  Questo pragma è particolarmente aggressivo e si applica alle funzioni che potrebbero non necessitare di questa difesa, ma è ottimizzato per ridurre l'effetto sulle prestazioni dell'applicazione risultante.  
  
 Anche se si utilizza questo pragma, si deve cercare di scrivere un codice sicuro.  Ovvero assicurarsi che il codice non abbia sovraccarichi del buffer. Lo strict\_gs\_check potrebbe proteggere l'applicazione dai sovraccarichi del buffer che rimangono nel codice.  
  
## Esempio  
 Nel codice seguente si verifica un sovraccarico del buffer quando copiamo una matrice in una matrice locale.  Quando si compila questo codice con \/GS, non viene inserito nessun cookie nello stack, poiché il tipo di dati di una matrice è un puntatore.  L'aggiunta del pragma strict\_gs\_check impone un cookie dello stack nello stack di funzione.  
  
```cpp  
// pragma_strict_gs_check.cpp  
// compile with: /c  
  
#pragma strict_gs_check(on)  
  
void ** ReverseArray(void **pData,  
                     size_t cData)  
{  
    // *** This buffer is subject to being overrun!! ***  
    void *pReversed[20];  
  
    // Reverse the array into a temporary buffer  
    for (size_t j = 0, i = cData; i ; --i, ++j)  
        // *** Possible buffer overrun!! ***  
            pReversed[j] = pData[i];   
  
    // Copy temporary buffer back into input/output buffer  
    for (size_t i = 0; i < cData ; ++i)   
        pData[i] = pReversed[i];  
  
    return pData;  
}  
  
```  
  
## Vedere anche  
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)   
 [\/GS \(Controllo sicurezza buffer\)](../build/reference/gs-buffer-security-check.md)
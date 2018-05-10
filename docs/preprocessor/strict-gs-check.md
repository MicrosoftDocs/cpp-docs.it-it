---
title: strict_gs_check | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- strict_gs_check
- strict_gs_check_CPP
dev_langs:
- C++
helpviewer_keywords:
- strict_gs_check pragma
ms.assetid: decfec81-c916-42e0-a07f-8cc26df6a7ce
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6b58b02781f266b24fa321b3849f42b2e090b860
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="strictgscheck"></a>strict_gs_check
Questo pragma fornisce controllo di sicurezza avanzato.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma strict_gs_check([push,] on )   
#pragma strict_gs_check([push,] off )   
#pragma strict_gs_check(pop)  
```  
  
## <a name="remarks"></a>Note  
 Indica al compilatore di inserire un cookie casuale nello stack di funzione per il rilevamento di alcune categorie di sovraccarico del buffer basato su stack. Per impostazione predefinita, l'opzione del compilatore /GS (controllo di sicurezza buffer) non inserisce un cookie per tutte le funzioni. Per altre informazioni, vedere [/GS (Controllo sicurezza buffer)](../build/reference/gs-buffer-security-check.md).  
  
 È necessario compilare con /GS (controllo di sicurezza buffer) per abilitare lo strict_gs_check.  
  
 Utilizzare questo pragma in moduli di codice esposti a dati potenzialmente dannosi. Questo pragma è particolarmente aggressivo e si applica alle funzioni che potrebbero non necessitare di questa difesa, ma è ottimizzato per ridurre l'effetto sulle prestazioni dell'applicazione risultante.  
  
 Anche se si utilizza questo pragma, si deve cercare di scrivere un codice sicuro. Vale a dire, assicurarsi che il codice non ha sovraccarichi del buffer. strict_gs_check potrebbe impedire l'applicazione sovraccarichi del buffer che rimangono nel codice.  
  
## <a name="example"></a>Esempio  
 Nel codice seguente si verifica un sovraccarico del buffer quando copiamo una matrice in una matrice locale. Quando si compila questo codice con /GS, non viene inserito nessun cookie nello stack, poiché il tipo di dati di una matrice è un puntatore. L'aggiunta del pragma strict_gs_check impone un cookie dello stack nello stack di funzione.  
  
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
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)   
 [/GS (controllo sicurezza buffer)](../build/reference/gs-buffer-security-check.md)
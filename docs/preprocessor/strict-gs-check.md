---
description: 'Altre informazioni su: strict_gs_check pragma'
title: Pragma strict_gs_check
ms.date: 08/29/2019
f1_keywords:
- strict_gs_check
- strict_gs_check_CPP
helpviewer_keywords:
- strict_gs_check pragma
ms.assetid: decfec81-c916-42e0-a07f-8cc26df6a7ce
ms.openlocfilehash: 3fa1600bba59077ff66bfb0184bdd3ca4fe0e326
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97197309"
---
# <a name="strict_gs_check-pragma"></a>Pragma strict_gs_check

Questo pragma fornisce controllo di sicurezza avanzato.

## <a name="syntax"></a>Sintassi

> **#pragma strict_gs_check (** [ **push,** ] { **on**  |  **off** } **)**\
> **#pragma strict_gs_check (pop)**

## <a name="remarks"></a>Commenti

Indica al compilatore di inserire un cookie casuale nello stack di funzione per il rilevamento di alcune categorie di sovraccarico del buffer basato su stack. Per impostazione predefinita, l' `/GS` opzione del compilatore (controllo di sicurezza del buffer) non inserisce un cookie per tutte le funzioni. Per altre informazioni, vedere [/GS (controllo sicurezza buffer)](../build/reference/gs-buffer-security-check.md).

Compilare utilizzando `/GS` per abilitare **strict_gs_check**.

Utilizzare questo pragma in moduli di codice esposti a dati potenzialmente dannosi. **strict_gs_check** è un pragma aggressivo e viene applicato a funzioni che potrebbero non richiedere questa difesa, ma è ottimizzato per ridurre al minimo l'effetto sulle prestazioni dell'applicazione risultante.

Anche se si utilizza questo pragma, si deve cercare di scrivere un codice sicuro. Ovvero, verificare che il codice non disponga di sovraccarichi del buffer. **strict_gs_check** possibile proteggere l'applicazione dai sovraccarichi del buffer che rimangono nel codice.

## <a name="example"></a>Esempio

In questo esempio, si verifica un sovraccarico del buffer quando si copia una matrice in una matrice locale. Quando si compila questo codice con `/GS` , non viene inserito alcun cookie nello stack, perché il tipo di dati della matrice è un puntatore. L'aggiunta del pragma **strict_gs_check** forza il cookie dello stack nello stack di funzioni.

```cpp
// pragma_strict_gs_check.cpp
// compile with: /c

#pragma strict_gs_check(on)

void ** ReverseArray(void **pData,
                     size_t cData)
{
    // **_ This buffer is subject to being overrun!! _*_
    void _pReversed[20];

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

## <a name="see-also"></a>Vedi anche

[Direttive pragma e parola chiave __pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)\
[/GS (Controllo sicurezza buffer)](../build/reference/gs-buffer-security-check.md)

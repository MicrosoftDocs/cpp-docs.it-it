---
description: Altre informazioni sulla direttiva strict_gs_check pragma in Microsoft C/C++
title: strict_gs_check pragma
ms.date: 01/22/2021
f1_keywords:
- strict_gs_check
- strict_gs_check_CPP
helpviewer_keywords:
- strict_gs_check pragma
- pragma, strict_gs_check
no-loc:
- pragma
ms.openlocfilehash: 4a224c42dc30227e5bd9a7142c807f7cebc34614
ms.sourcegitcommit: a26a66a3cf479e0e827d549a9b850fad99b108d1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/22/2021
ms.locfileid: "98713155"
---
# <a name="strict_gs_check-no-locpragma"></a>`strict_gs_check` pragma

Questo pragma offre un controllo di sicurezza avanzato.

## <a name="syntax"></a>Sintassi

> **`#pragma strict_gs_check(`** [ **`push,`** ] { **`on`** | **`off`** } **`)`**\
> **`#pragma strict_gs_check( pop )`**

## <a name="remarks"></a>Osservazioni

Indica al compilatore di inserire un cookie casuale nello stack di funzione per il rilevamento di alcune categorie di sovraccarico del buffer basato su stack. Per impostazione predefinita, l' **`/GS`** opzione del compilatore non inserisce un cookie per tutte le funzioni. Per ulteriori informazioni, vedere [ `/GS` (controllo sicurezza buffer)](../build/reference/gs-buffer-security-check.md).

Compilare utilizzando **`/GS`** per abilitare **`strict_gs_check`** .

Usare questa operazione pragma nei moduli di codice esposti a dati potenzialmente dannosi. **`strict_gs_check`** è un comportamento aggressivo pragma e viene applicato a funzioni che potrebbero non richiedere questa difesa, ma è ottimizzato per ridurre al minimo l'effetto sulle prestazioni dell'applicazione risultante.

Anche se si usa questa operazione pragma , è necessario cercare di scrivere codice protetto. Ovvero, verificare che il codice non disponga di sovraccarichi del buffer. **`strict_gs_check`** potrebbe proteggere l'applicazione dai sovraccarichi del buffer che rimangono nel codice.

## <a name="example"></a>Esempio

In questo esempio, si verifica un sovraccarico del buffer quando si copia una matrice in una matrice locale. Quando si compila questo codice con **`/GS`** , non viene inserito alcun cookie nello stack, perché il tipo di dati della matrice è un puntatore. L'aggiunta di **`strict_gs_check`** pragma impone il cookie dello stack nello stack di funzioni.

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

## <a name="see-also"></a>Vedere anche

[Direttive pragma e `__pragma` `_Pragma` parole chiave e](./pragma-directives-and-the-pragma-keyword.md)\
[`/GS` (Controllo sicurezza buffer)](../build/reference/gs-buffer-security-check.md)

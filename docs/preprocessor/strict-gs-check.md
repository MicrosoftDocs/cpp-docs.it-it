---
title: strict_gs_check
ms.date: 11/04/2016
f1_keywords:
- strict_gs_check
- strict_gs_check_CPP
helpviewer_keywords:
- strict_gs_check pragma
ms.assetid: decfec81-c916-42e0-a07f-8cc26df6a7ce
ms.openlocfilehash: b62e1be466e65c0de6fb4eaa33ac6e99915529e6
ms.sourcegitcommit: 72583d30170d6ef29ea5c6848dc00169f2c909aa
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/18/2019
ms.locfileid: "59037805"
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

Indica al compilatore di inserire un cookie casuale nello stack di funzione per il rilevamento di alcune categorie di sovraccarico del buffer basato su stack. Per impostazione predefinita, il `/GS` (controllo sicurezza Buffer) l'opzione del compilatore non comporta l'inserimento di un cookie per tutte le funzioni. Per altre informazioni, vedere [/GS (Controllo sicurezza buffer)](../build/reference/gs-buffer-security-check.md).

È necessario compilare con `/GS` (controllo sicurezza Buffer) per abilitare **lo strict_gs_check**.

Utilizzare questo pragma in moduli di codice esposti a dati potenzialmente dannosi. Questo pragma è particolarmente aggressivo e si applica alle funzioni che potrebbero non necessitare di questa difesa, ma è ottimizzato per ridurre l'effetto sulle prestazioni dell'applicazione risultante.

Anche se si utilizza questo pragma, si deve cercare di scrivere un codice sicuro. Vale a dire, assicurarsi che sia il codice non sovraccarichi del buffer. **strict_gs_check** potrebbe proteggere l'applicazione dai sovraccarichi del buffer che rimangono nel codice.

## <a name="example"></a>Esempio

Nel codice seguente si verifica un sovraccarico del buffer quando copiamo una matrice in una matrice locale. Quando si compila questo codice con `/GS`, viene inserito nessun cookie nello stack, perché il tipo di dati della matrice è un puntatore. Aggiungere il **strict_gs_check** pragma forza il cookie stack nello stack di funzione.

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

[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)<br/>
[/GS (controllo sicurezza buffer)](../build/reference/gs-buffer-security-check.md)
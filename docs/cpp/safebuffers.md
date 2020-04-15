---
title: safebuffers
ms.date: 11/04/2016
f1_keywords:
- safebuffers_cpp
helpviewer_keywords:
- __declspec keyword (C++), safebuffers
- safebuffers __declspec keyword
ms.assetid: 0b0dce14-4523-44d2-8070-5dd0fdabc618
ms.openlocfilehash: bc4736ce233ce026ecab9ef38ac8379466b5a0bc
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81365589"
---
# <a name="safebuffers"></a>safebuffers

**Specifico di Microsoft**

Indica al compilatore di non inserire controlli di sicurezza sul sovraccarico del buffer per una funzione.

## <a name="syntax"></a>Sintassi

```
__declspec( safebuffers )
```

## <a name="remarks"></a>Osservazioni

L'opzione del compilatore **/GS** fa sì che il compilatore verifichi il sovraccarico del buffer inserendo i controlli di sicurezza nello stack. I tipi di strutture di dati idonei per i controlli di sicurezza sono descritti in [/GS (controllo di sicurezza del buffer)](../build/reference/gs-buffer-security-check.md). Per ulteriori informazioni sul rilevamento del sovraccarico del buffer, vedere Funzionalità di [protezione in MSVC](https://blogs.msdn.microsoft.com/vcblog/2017/06/28/security-features-in-microsoft-visual-c/).

Una revisione del codice manuale esperta o un'analisi esterna potrebbe determinare che una funzione è protetta da un sovraccarico del buffer. In tal caso, è possibile eliminare i controlli di sicurezza per una funzione applicando la **__declspec(safebuffers)** alla dichiarazione di funzione.

> [!CAUTION]
> I controlli di sicurezza del buffer sono importanti per la protezione e hanno effetto trascurabile sulle prestazioni. Di conseguenza, è consigliabile non eliminarli, tranne nel raro caso in cui le prestazioni di una funzione siano un problema critico e la sicurezza della funzione sia nota.

## <a name="inline-functions"></a>Funzioni inline

Una *funzione primaria* può utilizzare una parola chiave [inline](inline-functions-cpp.md) per inserire una copia di una *funzione secondaria.* Se la parola chiave **__declspec(safebuffers)** viene applicata a una funzione, il rilevamento del sovraccarico del buffer viene eliminato per tale funzione. Tuttavia, l'inlining influisce sulla parola chiave **__declspec(safebuffers)** nei modi seguenti.

Si supponga che l'opzione del compilatore **/GS** sia specificata per entrambe le funzioni, ma che la funzione primaria specifichi la parola **chiave __declspec(safebuffers).** Le strutture dei dati nella funzione secondaria la rendono idonea per i controlli di sicurezza e la funzione non elimina tali controlli. In questo caso:

- Specificare la parola chiave [__forceinline](inline-functions-cpp.md) nella funzione secondaria per forzare il compilatore a inline tale funzione indipendentemente dalle ottimizzazioni del compilatore.

- Poiché la funzione secondaria è idonea per i controlli di sicurezza, i controlli di sicurezza vengono applicati anche alla funzione primaria anche se specifica la parola chiave **__declspec(safebuffers).**

## <a name="example"></a>Esempio

Nel codice seguente viene illustrato come utilizzare la parola chiave **__declspec(safebuffers).**

```cpp
// compile with: /c /GS
typedef struct {
    int x[20];
} BUFFER;
static int checkBuffers() {
    BUFFER cb;
    // Use the buffer...
    return 0;
};
static __declspec(safebuffers)
    int noCheckBuffers() {
    BUFFER ncb;
    // Use the buffer...
    return 0;
}
int wmain() {
    checkBuffers();
    noCheckBuffers();
    return 0;
}
```

**FINE Specifico di Microsoft**

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[in linea, \___inline _forceinline](inline-functions-cpp.md)<br/>
[strict_gs_check](../preprocessor/strict-gs-check.md)

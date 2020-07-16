---
title: safebuffers
ms.date: 11/04/2016
f1_keywords:
- safebuffers_cpp
helpviewer_keywords:
- __declspec keyword (C++), safebuffers
- safebuffers __declspec keyword
ms.assetid: 0b0dce14-4523-44d2-8070-5dd0fdabc618
ms.openlocfilehash: ebdbba130106ea5f9b893a9fd1d8277fd2dabdd4
ms.sourcegitcommit: 6b3d793f0ef3bbb7eefaf9f372ba570fdfe61199
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/15/2020
ms.locfileid: "86404691"
---
# <a name="safebuffers"></a>safebuffers

**Specifico di Microsoft**

Indica al compilatore di non inserire controlli di sicurezza sul sovraccarico del buffer per una funzione.

## <a name="syntax"></a>Sintassi

```
__declspec( safebuffers )
```

## <a name="remarks"></a>Osservazioni

L'opzione del compilatore **/GS** fa sì che il compilatore verifichi i sovraccarichi del buffer inserendo i controlli di sicurezza sullo stack. I tipi di strutture di dati idonei per i controlli di sicurezza sono descritti in [/GS (controllo sicurezza buffer)](../build/reference/gs-buffer-security-check.md). Per ulteriori informazioni sul rilevamento del sovraccarico del buffer, vedere [funzionalità di sicurezza in MSVC](https://devblogs.microsoft.com/cppblog/security-features-in-microsoft-visual-c/).

Una revisione del codice manuale esperta o un'analisi esterna potrebbe determinare che una funzione è protetta da un sovraccarico del buffer. In tal caso, è possibile disattivare i controlli di sicurezza per una funzione applicando la parola chiave **__declspec (safebuffers)** alla dichiarazione di funzione.

> [!CAUTION]
> I controlli di sicurezza del buffer sono importanti per la protezione e hanno effetto trascurabile sulle prestazioni. Di conseguenza, è consigliabile non eliminarli, tranne nel raro caso in cui le prestazioni di una funzione siano un problema critico e la sicurezza della funzione sia nota.

## <a name="inline-functions"></a>Funzioni inline

Una *funzione primaria* può usare una parola chiave [inline](inline-functions-cpp.md) per inserire una copia di una *funzione secondaria*. Se la parola chiave **__declspec (safebuffers)** viene applicata a una funzione, il rilevamento del sovraccarico del buffer viene eliminato per tale funzione. Tuttavia, l'incorporamento influiscono sulla parola chiave **__declspec (safebuffers)** nei modi seguenti.

Si supponga di specificare l'opzione del compilatore **/GS** per entrambe le funzioni, ma la funzione primaria specifica la parola chiave **__declspec (safebuffers)** . Le strutture dei dati nella funzione secondaria la rendono idonea per i controlli di sicurezza e la funzione non elimina tali controlli. In questo caso:

- Specificare la parola chiave [__forceinline](inline-functions-cpp.md) sulla funzione secondaria per forzare il compilatore a inline tale funzione indipendentemente dalle ottimizzazioni del compilatore.

- Poiché la funzione secondaria è idonea per i controlli di sicurezza, i controlli di sicurezza vengono applicati anche alla funzione primaria anche se specifica la parola chiave **__declspec (safebuffers)** .

## <a name="example"></a>Esempio

Nel codice seguente viene illustrato come utilizzare la parola chiave **__declspec (safebuffers)** .

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

**TERMINA specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[inline, __inline, \_ _forceinline](inline-functions-cpp.md)<br/>
[strict_gs_check](../preprocessor/strict-gs-check.md)

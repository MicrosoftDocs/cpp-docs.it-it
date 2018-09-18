---
title: safebuffers | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-language
ms.topic: language-reference
f1_keywords:
- safebuffers_cpp
dev_langs:
- C++
helpviewer_keywords:
- __declspec keyword (C++), safebuffers
- safebuffers __declspec keyword
ms.assetid: 0b0dce14-4523-44d2-8070-5dd0fdabc618
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c6590a2f210156711066fac241170103cc5a8830
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46034358"
---
# <a name="safebuffers"></a>safebuffers

**Sezione specifica Microsoft**

Indica al compilatore di non inserire controlli di sicurezza sul sovraccarico del buffer per una funzione.

## <a name="syntax"></a>Sintassi

```
__declspec( safebuffers )
```

## <a name="remarks"></a>Note

Il **/GS** opzione del compilatore indica al compilatore di test per i sovraccarichi del buffer inserendo i controlli di sicurezza nello stack. I tipi di strutture di dati che sono idonei per i controlli di sicurezza sono descritti [/GS (controllo sicurezza Buffer)](../build/reference/gs-buffer-security-check.md). Per altre informazioni sul rilevamento di sovraccarichi del buffer, vedere [funzionalità di sicurezza in MSVC](https://blogs.msdn.microsoft.com/vcblog/2017/06/28/security-features-in-microsoft-visual-c/).

Una revisione del codice manuale esperta o un'analisi esterna potrebbe determinare che una funzione è protetta da un sovraccarico del buffer. In tal caso, è possibile eliminare i controlli di sicurezza per una funzione applicando la **__declspec(safebuffers)** una parola chiave per la dichiarazione di funzione.

> [!CAUTION]
>  I controlli di sicurezza del buffer sono importanti per la protezione e hanno effetto trascurabile sulle prestazioni. Di conseguenza, è consigliabile non eliminarli, tranne nel raro caso in cui le prestazioni di una funzione siano un problema critico e la sicurezza della funzione sia nota.

## <a name="inline-functions"></a>Funzioni inline

Oggetto *funzione principale* può usare un [inlining](inline-functions-cpp.md) (parola chiave) per inserire una copia di un *funzione secondaria*. Se il **__declspec(safebuffers)** (parola chiave) viene applicato a una funzione, viene eliminato il rilevamento di sovraccarichi del buffer per tale funzione. Tuttavia, l'incorporamento influisce il **__declspec(safebuffers)** parola chiave nei modi seguenti.

Si supponga che il **/GS** è specificato l'opzione del compilatore per entrambe le funzioni, ma la funzione principale specifica le **__declspec(safebuffers)** (parola chiave). Le strutture dei dati nella funzione secondaria la rendono idonea per i controlli di sicurezza e la funzione non elimina tali controlli. In questo caso:

- Specificare il [forceinline](inline-functions-cpp.md) (parola chiave) sulla funzione secondaria per imporre al compilatore di rendere inline tale funzione indipendentemente dalle ottimizzazioni del compilatore.

- Poiché la funzione secondaria è idonea per i controlli di sicurezza, controlli di sicurezza vengono applicati anche alla funzione principale anche se specifica la **__declspec(safebuffers)** (parola chiave).

## <a name="example"></a>Esempio

Il codice seguente viene illustrato come utilizzare il **__declspec(safebuffers)** (parola chiave).

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

**Fine sezione specifica Microsoft**

## <a name="see-also"></a>Vedere anche

[__declspec](../cpp/declspec.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[inline, __inline, \__forceinline](inline-functions-cpp.md)<br/>
[strict_gs_check](../preprocessor/strict-gs-check.md)
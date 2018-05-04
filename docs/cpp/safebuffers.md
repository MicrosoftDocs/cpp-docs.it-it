---
title: safebuffers | Documenti Microsoft
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
ms.openlocfilehash: fbfc9317b5ed7c63e9c70b081c3f241b86a65e5f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="safebuffers"></a>safebuffers
**Sezione specifica Microsoft**  
  
 Indica al compilatore di non inserire controlli di sicurezza sul sovraccarico del buffer per una funzione.  
  
## <a name="syntax"></a>Sintassi  
  
```  
__declspec( safebuffers )  
```  
  
## <a name="remarks"></a>Note  
 Il **/GS** opzione del compilatore, il compilatore testare i sovraccarichi del buffer inserendo i controlli di sicurezza nello stack. I tipi di strutture di dati che sono idonei per i controlli di sicurezza sono descritti [/GS (controllo sicurezza Buffer)](../build/reference/gs-buffer-security-check.md). Per ulteriori informazioni sul rilevamento di sovraccarichi del buffer, vedere [del compilatore controlli di sicurezza In profondità](http://go.microsoft.com/fwlink/p/?linkid=7260) nel sito Web MSDN.  
  
 Una revisione del codice manuale esperta o un'analisi esterna potrebbe determinare che una funzione è protetta da un sovraccarico del buffer. In tal caso, è possibile eliminare i controlli di sicurezza per una funzione applicando la `__declspec(safebuffers)` parola chiave per la dichiarazione di funzione.  
  
> [!CAUTION]
>  I controlli di sicurezza del buffer sono importanti per la protezione e hanno effetto trascurabile sulle prestazioni. Di conseguenza, è consigliabile non eliminarli, tranne nel raro caso in cui le prestazioni di una funzione siano un problema critico e la sicurezza della funzione sia nota.  
  
## <a name="inline-functions"></a>Funzioni inline  
 A *funzione primaria* possibile utilizzare un [inline](inline-functions-cpp.md) (parola chiave) per inserire una copia di un *funzione secondaria*. Se il `__declspec(safebuffers)` (parola chiave) viene applicato a una funzione, il rilevamento di sovraccarichi del buffer viene eliminato per tale funzione. Tuttavia, l'incorporamento influisce il `__declspec(safebuffers)` (parola chiave) nei modi seguenti.  
  
 Si supponga che il **/GS** è specificata l'opzione del compilatore per entrambe le funzioni, ma specifica la funzione principale di `__declspec(safebuffers)` (parola chiave). Le strutture dei dati nella funzione secondaria la rendono idonea per i controlli di sicurezza e la funzione non elimina tali controlli. In questo caso:  
  
-   Specificare il [forceinline](inline-functions-cpp.md) (parola chiave) sulla funzione secondaria per imporre al compilatore di rendere inline tale funzione indipendentemente dalle ottimizzazioni del compilatore.  
  
-   Poiché la funzione secondaria è idonea per i controlli di sicurezza, controlli di sicurezza vengono applicati anche alla funzione principale anche se specifica il `__declspec(safebuffers)` (parola chiave).  
  
## <a name="example"></a>Esempio  
 Il codice seguente viene illustrato come utilizzare il `__declspec(safebuffers)` (parola chiave).  
  
```  
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
 [__declspec](../cpp/declspec.md)   
 [Parole chiave](../cpp/keywords-cpp.md)   
 [inline, inline, \__forceinline](inline-functions-cpp.md)   
 [strict_gs_check](../preprocessor/strict-gs-check.md)
---
title: "safebuffers | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "safebuffers"
  - "safebuffers_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__declspec (parola chiave) (C++), safebuffers"
  - "safebuffers __declspec (parola chiave)"
ms.assetid: 0b0dce14-4523-44d2-8070-5dd0fdabc618
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# safebuffers
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

**Sezione specifica Microsoft**  
  
 Indica al compilatore di non inserire controlli di sicurezza sul sovraccarico del buffer per una funzione.  
  
## Sintassi  
  
```  
__declspec( safebuffers )  
```  
  
## Note  
 L'opzione del compilatore **\/GS** indica al compilatore di eseguire il test per i sovraccarichi del buffer inserendo i controlli di sicurezza nello stack.  I tipi di strutture di dati idonei per i controlli di sicurezza sono descritti in [\/GS \(Controllo sicurezza buffer\)](../build/reference/gs-buffer-security-check.md).  Per ulteriori informazioni sul rilevamento del sovraccarico del buffer, vedere [Controlli di sicurezza del compilatore in dettaglio](http://go.microsoft.com/fwlink/?linkid=7260) sul sito Web MSDN.  
  
 Una revisione del codice manuale esperta o un'analisi esterna potrebbe determinare che una funzione è protetta da un sovraccarico del buffer.  In tal caso, è possibile eliminare i controlli di sicurezza per una funzione applicando la parola chiave \_\_`declspec(safebuffers)` per la dichiarazione di funzione.  
  
> [!CAUTION]
>  I controlli di sicurezza del buffer sono importanti per la protezione e hanno effetto trascurabile sulle prestazioni.  Di conseguenza, è consigliabile non eliminarli, tranne nel raro caso in cui le prestazioni di una funzione siano un problema critico e la sicurezza della funzione sia nota.  
  
## Funzioni inline  
 Una *funzione primaria* può utilizzare una parola chiave [inlining](../misc/inline-inline-forceinline.md) per inserire una copia di una *funzione secondaria*.  L'applicazione della parola chiave \_\_`declspec(safebuffers)` determina l'eliminazione del rilevamento del sovraccarico del buffer per tale funzione.  Tuttavia, l'operazione inlining influisce sulla parola chiave \_\_`declspec(safebuffers)` nei modi indicati di seguito.  
  
 Si supponga che l'opzione del compilatore **\/GS** sia specificata per entrambe le funzioni, ma che la parola chiave \_\_`declspec(safebuffers)` sia specificata per la funzione primaria.  Le strutture dei dati nella funzione secondaria la rendono idonea per i controlli di sicurezza e la funzione non elimina tali controlli.  In questo caso:  
  
-   Specificare la parola chiave [\_\_forceinline](../misc/inline-inline-forceinline.md) sulla funzione secondaria per imporre al compilatore di rendere inline tale funzione indipendentemente dalle ottimizzazioni del compilatore.  
  
-   Poiché la funzione secondaria è idonea per i controlli di sicurezza, sebbene sia specificata la parola chiave \_\_`declspec(safebuffers)` i controlli vengono applicati anche alla funzione primaria.  
  
## Esempio  
 L'utilizzo della parola chiave \_\_`declspec(safebuffers)` viene illustrato nell'esempio seguente.  
  
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
  
## Vedere anche  
 [\_\_declspec](../cpp/declspec.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [inline, \_\_inline, \_\_forceinline](../misc/inline-inline-forceinline.md)   
 [strict\_gs\_check](../preprocessor/strict-gs-check.md)
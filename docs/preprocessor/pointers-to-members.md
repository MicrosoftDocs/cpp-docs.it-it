---
title: pointers_to_members | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- pointers_to_members_CPP
- vc-pragma.pointers_to_members
dev_langs:
- C++
helpviewer_keywords:
- class members, pointers to
- pragmas, pointers_to_members
- members, pointers to
- pointers_to_members pragma
ms.assetid: 8325428c-c90a-4aed-9e82-cb1dda23f4ca
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 09b0fcd2a00806d075e70d1469b57ba0a0dd5332
ms.sourcegitcommit: d4c803bd3a684d7951bf88dcecf1f14af43ae411
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/10/2018
ms.locfileid: "42541590"
---
# <a name="pointerstomembers"></a>pointers_to_members
**Sezione specifica C++**  
  
Specifica se un puntatore a un membro di una classe può essere dichiarato prima della definizione di classe associata e viene utilizzato per controllare le dimensioni del puntatore e il codice necessario per interpretare il puntatore.  
  
## <a name="syntax"></a>Sintassi  
  
```    
#pragma pointers_to_members( pointer-declaration, [most-general-representation] )  
```  
  
## <a name="remarks"></a>Note  
 
È possibile inserire un **pointers_to_members** pragma nel file di origine come alternativa all'utilizzo di [/vmx](../build/reference/vmb-vmg-representation-method.md) le opzioni del compilatore o il [parole chiave di ereditarietà](../cpp/inheritance-keywords.md).  
  
Il *dichiarazione di puntatore* argomento specifica se è stato dichiarato un puntatore a un membro prima o dopo la definizione di funzione associata. Il *dichiarazione di puntatore* argomento è una delle due simboli seguenti:  
  
|Argomento|Commenti|  
|--------------|--------------|  
|*full_generality*|Genera codice sicuro e talvolta non ottimale. Si utilizza *full_generality* se qualsiasi puntatore a un membro viene dichiarato prima della definizione di classe associata. Questo argomento utilizza sempre la rappresentazione del puntatore specificata per il *most-general-representation* argomento. Equivalente a/vmg.|  
|*best_case*|Genera codice sicuro e ottimale mediante la rappresentazione basata sul caso migliore (best-case) per tutti i puntatori ai membri. Richiede di definire una classe prima di dichiarare un puntatore a un membro di tale classe. Il valore predefinito è *best_case*.|  
  
Il *most-general-representation* argomento specifica la più piccola rappresentazione del puntatore che il compilatore può usare in modo sicuro per fare riferimento a qualsiasi puntatore a un membro di una classe in un'unità di conversione. L'argomento può essere uno dei seguenti:  
  
|Argomento|Commenti|  
|--------------|--------------|  
|*single_inheritance*|La rappresentazione più generale è un puntatore a una funzione membro a ereditarietà singola. Genera un errore se il modello di ereditarietà di una definizione di classe per cui viene dichiarato un puntatore a un membro è multiplo o virtuale.|  
|*multiple_inheritance*|La rappresentazione più generale è un puntatore a una funzione membro a ereditarietà multipla. Genera un errore se il modello di ereditarietà di una definizione di classe per cui viene dichiarato un puntatore a un membro è virtuale.|  
|*virtual_inheritance*|La rappresentazione più generale è un puntatore a una funzione membro a ereditarietà virtuale. Non genera mai un errore. Questo è l'argomento predefinito quando `#pragma pointers_to_members(full_generality)` viene usato.|  
  
> [!CAUTION]
> Si consiglia di inserire le **pointers_to_members** pragma solo nel file del codice sorgente che si vuole modificare e solo dopo qualsiasi `#include` direttive. In questo modo è possibile ridurre il rischio che il pragma abbia effetto su altri file e che vengano inavvertitamente specificate più definizioni per la stessa variabile, funzione o nome di classe.  
  
## <a name="example"></a>Esempio  
  
```  
//   Specify single-inheritance only  
#pragma pointers_to_members( full_generality, single_inheritance )  
```  
  
## <a name="end-c-specific"></a>Fine sezione specifica C++  
  
## <a name="see-also"></a>Vedere anche  
 
[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
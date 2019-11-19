---
title: Intrinseci del compilatore
ms.date: 09/02/2019
helpviewer_keywords:
- intrinsics, compiler
- compiler intrinsics
- cl.exe compiler, performance
- cl.exe compiler, intrinsics
ms.assetid: 48bb9929-7d78-4fd8-a092-ae3c9f971858
ms.openlocfilehash: 61fc825e333b8d839d15752ce737dfc6d3980809
ms.sourcegitcommit: e805200eaef4fe7a65a00051bbd305273af94fe7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/18/2019
ms.locfileid: "74163482"
---
# <a name="compiler-intrinsics"></a>Intrinseci del compilatore

La maggior parte delle funzioni sono contenute nelle librerie, ma alcune sono incorporate (ovvero intrinseche) al compilatore. Queste sono denominate funzioni intrinseche o intrinseci.

## <a name="remarks"></a>Note

Se una funzione è intrinseca, il codice per la funzione viene in genere inserito inline, evitando, in questo modo, il sovraccarico di una chiamata di funzione e consentendo la creazione di istruzioni del computer estremamente efficaci per tale funzione. Un intrinseco è spesso più veloce dell'assembly inline equivalente, in quanto l'utilità di ottimizzazione dispone di una conoscenza incorporata del comportamento di molti intrinseci, pertanto possono essere disponibili ottimizzazioni altrimenti non disponibili quando si usa l'assembly inline. Inoltre, l'utilità di ottimizzazione può espandere la funzione intrinseca in modo diverso, allineare i buffer in modo differente o apportare altre modifiche a seconda del contesto e degli argomenti della chiamata.

L'uso degli intrinseci influisce sulla portabilità del codice, poiché gli intrinseci disponibili in Visual C++ potrebbero non essere disponibili se il codice viene compilato con altri compilatori e alcuni intrinseci che potrebbero essere disponibili per alcune architetture di destinazione non lo sono per tutte le architetture. Tuttavia, gli intrinseci sono in genere più portabili degli assembly inline. Gli intrinseci sono richiesti nelle architetture a 64 bit quando l'assembly inline non è supportato.

Alcune funzioni intrinseche, ad esempio `__assume` e `__ReadWriteBarrier`, forniscono informazioni al compilatore che influiscono sul comportamento dell'utilità di ottimizzazione.

Alcune funzioni intrinseche sono disponibili solo come intrinseci e alcune sono disponibili nelle implementazioni sia di intrinseci che di funzione. È possibile indicare al compilatore di usare l'implementazione di intrinseci in due modi, a seconda che si voglia abilitare solo funzioni specifiche o abilitare tutte le funzioni intrinseche. Il primo consiste nell'usare `#pragma intrinsic(``)`di tipo *intrinseco-funzione-nome* . Il pragma può essere usato per specificare uno o più intrinseci separati da virgole. Il secondo consiste nell'usare l'opzione del compilatore [/OI (genera funzioni intrinseche)](../build/reference/oi-generate-intrinsic-functions.md) , che rende disponibili tutte le funzioni intrinseche su una determinata piattaforma. In **/OI**usare `#pragma function(``)` *intrinseco-function-name-list* per forzare l'uso di una chiamata di funzione al posto di un intrinseco. Se la documentazione per un intrinseco specifico rileva che la routine è disponibile solo come funzione intrinseca, l'implementazione intrinseca viene utilizzata indipendentemente dal fatto che sia specificato **/OI** o `#pragma intrinsic`. In tutti i casi, **/OI** o `#pragma intrinsic` consente, ma non forza, a Query Optimizer di usare l'oggetto intrinseco. L'utilità di ottimizzazione potrà ancora chiamare la funzione.

Alcune funzioni di libreria standard C/C++ sono disponibili nelle implementazioni intrinseche in alcune architetture. Quando si chiama una funzione CRT, viene utilizzata l'implementazione intrinseca se nella riga di comando viene specificato **/OI** .

È disponibile un file di intestazione, \<intrin. h >, che dichiara i prototipi per le funzioni intrinseche comuni. Sono disponibili funzioni intrinseche specifiche del produttore nei file di intestazione \<immintrin. h > e \<ammintrin. h >. Inoltre, alcune intestazioni di Windows dichiarano funzioni che eseguono il mapping su un intrinseco del compilatore.

Le sezioni seguenti elencano tutti gli intrinseci disponibili in varie architetture. Per altre informazioni sull'uso degli intrinseci su un particolare processore di destinazione, fare riferimento alla documentazione di riferimento del produttore.

- [Oggetti intrinseci ARM](../intrinsics/arm-intrinsics.md)

- [Funzioni intrinseche ARM64](../intrinsics/arm64-intrinsics.md)

- [Elenco intrinseci x86](../intrinsics/x86-intrinsics-list.md)

- [Elenco intrinseci x64 (amd64)](../intrinsics/x64-amd64-intrinsics-list.md)

- [Funzioni intrinseche disponibili in tutte le architetture](../intrinsics/intrinsics-available-on-all-architectures.md)

- [Elenco alfabetico di funzioni intrinseche](../intrinsics/alphabetical-listing-of-intrinsic-functions.md)

## <a name="see-also"></a>Vedere anche

[Riferimento all'assembler ARM](../assembler/arm/arm-assembler-reference.md)<br/>
[Guida di riferimento a Microsoft Macro Assembler](../assembler/masm/microsoft-macro-assembler-reference.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Riferimenti alla libreria di runtime C](../c-runtime-library/c-run-time-library-reference.md)
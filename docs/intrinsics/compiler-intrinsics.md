---
title: Intrinseci del compilatore
ms.date: 11/04/2016
helpviewer_keywords:
- intrinsics, compiler
- compiler intrinsics
- cl.exe compiler, performance
- cl.exe compiler, intrinsics
ms.assetid: 48bb9929-7d78-4fd8-a092-ae3c9f971858
ms.openlocfilehash: f66c6247aba92a1528489dcf689239c9341b7d2b
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50560017"
---
# <a name="compiler-intrinsics"></a>Intrinseci del compilatore

La maggior parte delle funzioni sono contenute nelle librerie, ma alcune sono incorporate (ovvero intrinseche) al compilatore. Queste sono denominate funzioni intrinseche o intrinseci.

## <a name="remarks"></a>Note

Se una funzione è intrinseca, il codice per la funzione viene in genere inserito inline, evitando, in questo modo, il sovraccarico di una chiamata di funzione e consentendo la creazione di istruzioni del computer estremamente efficaci per tale funzione. Un intrinseco è spesso più veloce dell'assembly inline equivalente, in quanto l'utilità di ottimizzazione dispone di una conoscenza incorporata del comportamento di molti intrinseci, pertanto possono essere disponibili ottimizzazioni altrimenti non disponibili quando si usa l'assembly inline. Inoltre, l'utilità di ottimizzazione può espandere la funzione intrinseca in modo diverso, allineare i buffer in modo differente o apportare altre modifiche a seconda del contesto e degli argomenti della chiamata.

L'uso degli intrinseci influisce sulla portabilità del codice, poiché gli intrinseci disponibili in Visual C++ potrebbero non essere disponibili se il codice viene compilato con altri compilatori e alcuni intrinseci che potrebbero essere disponibili per alcune architetture di destinazione non lo sono per tutte le architetture. Tuttavia, gli intrinseci sono in genere più portabili degli assembly inline. Gli intrinseci sono richiesti nelle architetture a 64 bit quando l'assembly inline non è supportato.

Alcune funzioni intrinseche, ad esempio `__assume` e `__ReadWriteBarrier`, forniscono informazioni al compilatore che influiscono sul comportamento dell'utilità di ottimizzazione.

Alcune funzioni intrinseche sono disponibili solo come intrinseci e alcune sono disponibili nelle implementazioni sia di intrinseci che di funzione. È possibile indicare al compilatore di usare l'implementazione di intrinseci in due modi, a seconda che si voglia abilitare solo funzioni specifiche o abilitare tutte le funzioni intrinseche. Il primo modo consiste nell'usare `#pragma intrinsic(` *intrinseco-funzione-name-list*`)`. Il pragma può essere usato per specificare uno o più intrinseci separati da virgole. Il secondo consiste nell'usare la [/Oi (genera funzioni intrinseche)](../build/reference/oi-generate-intrinsic-functions.md) opzione del compilatore, che rende disponibili tutte le funzioni intrinseche su una determinata piattaforma. Sotto **/Oi**, usare `#pragma function(` *intrinseco-funzione-name-list* `)` per forzare una chiamata di funzione da utilizzare anziché una funzione intrinseca. Se la documentazione per un intrinseco specifico nota che la routine è disponibile solo come un intrinseco, allora l'implementazione intrinseca viene usata indipendentemente dal fatto che **/Oi** o `#pragma intrinsic` è specificato. In tutti i casi **/Oi** o `#pragma intrinsic` consente, ma senza imposizione, query optimizer di usare la funzione intrinseca. L'utilità di ottimizzazione potrà ancora chiamare la funzione.

Alcune funzioni di libreria standard C/C++ sono disponibili nelle implementazioni intrinseche in alcune architetture. Quando si chiama una funzione CRT, viene usata l'implementazione intrinseca se **/Oi** viene specificato nella riga di comando.

Un file di intestazione \<intrin. h >, è disponibile che dichiara i prototipi per le funzioni intrinseche. Sono disponibili in funzioni intrinseche specifiche del produttore il \<immintrin. h > e \<ammintrin. h > file di intestazione. Inoltre, alcune intestazioni di Windows dichiarano funzioni che eseguono il mapping su un intrinseco del compilatore.

Le sezioni seguenti elencano tutti gli intrinseci disponibili in varie architetture. Per altre informazioni sull'uso degli intrinseci su un particolare processore di destinazione, fare riferimento alla documentazione di riferimento del produttore.

- [Intrinseci ARM](../intrinsics/arm-intrinsics.md)

- [Elenco intrinseci x86](../intrinsics/x86-intrinsics-list.md)

- [Elenco intrinseci x64 (amd64)](../intrinsics/x64-amd64-intrinsics-list.md)

- [Intrinseci disponibili in tutte le architetture](../intrinsics/intrinsics-available-on-all-architectures.md)

- [Elenco alfabetico delle funzioni intrinseche](../intrinsics/alphabetical-listing-of-intrinsic-functions.md)

## <a name="see-also"></a>Vedere anche

[Riferimento all'assembler ARM](../assembler/arm/arm-assembler-reference.md)<br/>
[Riferimento a Microsoft Macro Assembler](../assembler/masm/microsoft-macro-assembler-reference.md)<br/>
[Parole chiave](../cpp/keywords-cpp.md)<br/>
[Riferimenti della libreria di runtime di C](../c-runtime-library/c-run-time-library-reference.md)
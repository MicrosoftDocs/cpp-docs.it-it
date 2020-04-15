---
title: Importazione ed esportazione di funzioni inline
ms.date: 11/04/2016
helpviewer_keywords:
- exporting functions [C++], inline functions
- inline functions [C++], importing
- DLLs [C++], importing
- importing functions [C++]
- DLLs [C++], exporting from
- importing inline functions [C++]
- inline functions [C++], exporting
- functions [C++], importing
- functions [C++], exporting
ms.assetid: 89f488f8-b078-40fe-afd7-80bd7840057b
ms.openlocfilehash: abb0443ab8fbd315524350caaff34e0250147ed2
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81328509"
---
# <a name="importing-and-exporting-inline-functions"></a>Importazione ed esportazione di funzioni inline

Le funzioni importate possono essere definite come inline. L'effetto è all'incirca lo stesso della definizione di una funzione standard inline; le chiamate alla funzione vengono espanse nel codice inline, proprio come una macro. Ciò è principalmente utile per supportare le classi C , in una DLL che potrebbe inline alcune delle relative funzioni membro per l'efficienza.

Una caratteristica di una funzione inline importata è che è possibile prendere il suo indirizzo in C . Il compilatore restituisce l'indirizzo della copia della funzione inline che risieda nella DLL. Un'altra funzionalità delle funzioni inline importate è che è possibile inizializzare i dati locali statici della funzione importata, a differenza dei dati importati globali.

> [!CAUTION]
> È necessario prestare attenzione quando si forniscono funzioni inline importate perché possono creare la possibilità di conflitti di versione. Una funzione inline viene espansa nel codice dell'applicazione; Pertanto, se in seguito si riscrive la funzione, non viene aggiornata a meno che l'applicazione stessa non venga ricompilata. In genere, le funzioni DLL possono essere aggiornate senza ricompilare le applicazioni che le utilizzano.

## <a name="what-do-you-want-to-do"></a>Per saperne di più

- [Esportazione da una DLL](exporting-from-a-dll.md)

- [Esportare da una DLL utilizzando . File DEF](exporting-from-a-dll-using-def-files.md)

- [Esportazione da una DLL utilizzando __declspec(dllexport)](exporting-from-a-dll-using-declspec-dllexport.md)

- [Esportare e importare utilizzando AFX_EXT_CLASS](exporting-and-importing-using-afx-ext-class.md)

- [Esportare le funzioni di C, per l'utilizzo in file eseguibili in linguaggio C](exporting-cpp-functions-for-use-in-c-language-executables.md)

- [Determinare il metodo di esportazione da utilizzare](determining-which-exporting-method-to-use.md)

- [Importare in un'applicazione tramite __declspec(dllimport)](importing-into-an-application-using-declspec-dllimport.md)

## <a name="see-also"></a>Vedere anche

[Importazione ed esportazione](importing-and-exporting.md)

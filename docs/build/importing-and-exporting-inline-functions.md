---
description: 'Altre informazioni su: importazione ed esportazione di funzioni inline'
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
ms.openlocfilehash: 053280685edf8fa88c969399e7905582534c7493
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97156190"
---
# <a name="importing-and-exporting-inline-functions"></a>Importazione ed esportazione di funzioni inline

Le funzioni importate possono essere definite come inline. L'effetto è approssimativamente analogo alla definizione di una funzione standard inline; le chiamate alla funzione vengono espanse in codice inline, molto simile a una macro. Questa operazione è particolarmente utile come metodo per supportare le classi C++ in una DLL che può inline alcune delle funzioni membro per migliorare l'efficienza.

Una funzionalità di una funzione inline importata è che è possibile accettarne l'indirizzo in C++. Il compilatore restituisce l'indirizzo della copia della funzione inline che risiede nella DLL. Un'altra funzionalità delle funzioni inline importate è che è possibile inizializzare i dati statici locali della funzione importata, a differenza dei dati importati globali.

> [!CAUTION]
> È necessario prestare attenzione quando si forniscono funzioni inline importate, perché possono creare la possibilità di conflitti di versione. Una funzione inline viene espansa nel codice dell'applicazione. di conseguenza, se successivamente si riscrive la funzione, questa non viene aggiornata a meno che l'applicazione stessa non venga ricompilata. In genere, le funzioni DLL possono essere aggiornate senza ricompilare le applicazioni che le utilizzano.

## <a name="what-do-you-want-to-do"></a>Per saperne di più

- [Esportazione da una DLL](exporting-from-a-dll.md)

- [Esportazione da una DLL mediante. File DEF](exporting-from-a-dll-using-def-files.md)

- [Esportare da una DLL utilizzando __declspec (dllexport)](exporting-from-a-dll-using-declspec-dllexport.md)

- [Esportare e importare utilizzando AFX_EXT_CLASS](exporting-and-importing-using-afx-ext-class.md)

- [Esportare le funzioni C++ per l'utilizzo in eseguibili in linguaggio C](exporting-cpp-functions-for-use-in-c-language-executables.md)

- [Determinare il metodo di esportazione da usare](determining-which-exporting-method-to-use.md)

- [Importare in un'applicazione tramite __declspec(dllimport)](importing-into-an-application-using-declspec-dllimport.md)

## <a name="see-also"></a>Vedi anche

[Importazione ed esportazione](importing-and-exporting.md)

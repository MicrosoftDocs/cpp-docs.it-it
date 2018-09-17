---
title: Importazione ed esportazione di funzioni Inline | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
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
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 431b7c3becffb4e5b2543984fd66cae0a1507738
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45726557"
---
# <a name="importing-and-exporting-inline-functions"></a>Importazione ed esportazione di funzioni inline

Funzioni importate possono essere definite come inline. L'effetto equivale approssimativamente definizione inline una funzione standard. nel codice inline, molto simile a una macro vengono espanse le chiamate alla funzione. Questa funzionalità è particolarmente utile come un modo di supportare C++ le classi in una DLL che può rendere inline alcune delle loro membro funzioni per efficienza.

Una funzionalità di una funzione inline importata è che è possibile usare l'indirizzo in C++. Il compilatore restituisce l'indirizzo della copia della funzione inline che si trovano nella DLL. Un'altra funzionalità di funzioni inline importate è che è possibile inizializzare i dati locali statici della funzione importata, a differenza dei dati importati globale.

> [!CAUTION]
>  È necessario prestare attenzione quando si forniscono funzioni inline importate perché possono creare conflitti di versione di. Una funzione inline viene espanso in codice dell'applicazione; Pertanto, se in un secondo momento si riscrive la funzione, non viene aggiornato a meno che non viene ricompilato l'applicazione stessa. (In genere, le funzioni di DLL possono essere aggiornate senza ricompilare le applicazioni che li utilizzano.)

## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.

- [Esportazione da una DLL](../build/exporting-from-a-dll.md)

- [Esportazione da una DLL mediante. File DEF](../build/exporting-from-a-dll-using-def-files.md)

- [Esportazione da una DLL tramite dllexport](../build/exporting-from-a-dll-using-declspec-dllexport.md)

- [Esportazione e importazione utilizzando AFX_EXT_CLASS](../build/exporting-and-importing-using-afx-ext-class.md)

- [Esportazione di funzioni C++ per l'utilizzo in eseguibili in linguaggio C](../build/exporting-cpp-functions-for-use-in-c-language-executables.md)

- [Determinare quale metodo di esportazione da utilizzare](../build/determining-which-exporting-method-to-use.md)

- [Importare in un'applicazione che usa declspec](../build/importing-into-an-application-using-declspec-dllimport.md)

## <a name="see-also"></a>Vedere anche

[Importazione ed esportazione](../build/importing-and-exporting.md)
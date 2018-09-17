---
title: Destinazioni | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- targets, specifying in NMAKE
ms.assetid: 826ee849-4278-4c6e-97c3-79a2b5fe6463
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: edb75258c548526c68ed33f7f8037656750f6855
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45713804"
---
# <a name="targets"></a>Destinazioni

In una linea di dipendenza, specificare uno o più destinazioni, tramite qualsiasi nome di file valido, il nome di directory, oppure [pseudo](../build/pseudotargets.md). Più destinazioni, separarle con uno o più spazi o tabulazioni. Le destinazioni non sono tra maiuscole e minuscole. I percorsi sono consentiti con i nomi di file. Una destinazione non può superare i 256 caratteri. Se la destinazione che precede i due punti è un singolo carattere, usare uno spazio di separazione. in caso contrario, viene interpretato la combinazione di due punti lettera come un identificatore di unità.

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

[Pseudodestinazioni](../build/pseudotargets.md)

[Più destinazioni](../build/multiple-targets.md)

[Dipendenze cumulative](../build/cumulative-dependencies.md)

[Destinazioni in più blocchi di descrizione](../build/targets-in-multiple-description-blocks.md)

[Effetti collaterali delle dipendenze](../build/dependency-side-effects.md)

## <a name="see-also"></a>Vedere anche

[Blocchi di descrizione](../build/description-blocks.md)
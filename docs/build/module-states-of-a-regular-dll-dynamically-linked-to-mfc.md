---
title: Stato dei moduli di una DLL MFC regolari collegate in modo dinamico a MFC | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- regular MFC DLLs [C++], dynamically linked to MFC
- module states [C++]
- MFC DLLs [C++], regular MFC DLLs
- module states [C++], regular MFC DLLs dynamically linked to
- DLLs [C++], module states
ms.assetid: b4493e79-d25e-4b7f-a565-60de5b32c723
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: d458c445930896fb04cb339c7191f649be542faf
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45717028"
---
# <a name="module-states-of-a-regular-mfc-dll-dynamically-linked-to-mfc"></a>Stato dei moduli di una DLL MFC regolari collegate in modo dinamico a MFC

La possibilità di collegare una normale DLL MFC in modo dinamico alla DLL MFC consente alcune configurazioni molto complessi. Ad esempio, una DLL MFC regolari e il file eseguibile che lo utilizza entrambi dinamicamente collegarlo a una DLL MFC e a qualsiasi DLL estensione MFC.

Questa configurazione pone un problema relativo ai dati globali MFC, ad esempio il puntatore all'oggetto corrente `CWinApp` oggetti e handle di mappe.

Prima versione 4.0 di MFC, i dati globali si trovavano nella DLL MFC stessa ed è stato condiviso da tutti i moduli del processo. Poiché ogni processo di uso di una DLL Win32 ottiene una propria copia dei dati della DLL, questo schema fornito un modo semplice per tenere traccia dei dati per ogni processo. Inoltre, poiché il modello AFXDLL presupponeva che potrebbe essere presente solo un `CWinApp` oggetto e un solo gruppo di gestione di mappe nel processo, è possibile tenere traccia di questi elementi nella DLL MFC stessa.

Ma con la possibilità di collegare in modo dinamico una DLL MFC regolare a una DLL MFC, è ora possibile avere due o più `CWinApp` gli oggetti in un processo e anche di due o più set di mappe di handle. La modalità MFC tenere traccia di quelle che invece consigliabile usare?

La soluzione consiste nel fornire una propria copia di queste informazioni di stato globale ogni modulo (applicazione o DLL MFC regolare). Di conseguenza, una chiamata a **AfxGetApp** nelle normali DLL MFC restituisce un puntatore al `CWinApp` oggetto nella DLL, non quello presente nel file eseguibile. Questa copia dei dati globali di MFC per ogni modulo è noto come un stato del modulo e viene descritto in [tecnica nota 58 di MFC](../mfc/tn058-mfc-module-state-implementation.md).

La procedura della finestra comune MFC passa automaticamente allo stato del modulo corretto, in modo che non è necessario preoccuparsi di eventuali gestori di messaggi implementati in una DLL MFC regolari. Ma quando il file eseguibile chiama la DLL MFC regolari, è necessario impostare in modo esplicito lo stato del modulo corrente a quello per la DLL. A questo scopo, usare il **AFX_MANAGE_STATE** macro in tutte le funzioni esportate dalla DLL. Questa operazione viene eseguita aggiungendo la riga di codice seguente all'inizio delle funzioni esportate dalla DLL:

```
AFX_MANAGE_STATE(AfxGetStaticModuleState( ))
```

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Gestione dei dati dello stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md)

- [DLL MFC regolari collegate in modo dinamico a MFC](../build/regular-dlls-dynamically-linked-to-mfc.md)

- [MFC (DLL di estensione)](../build/extension-dlls-overview.md)

## <a name="see-also"></a>Vedere anche

[DLL in Visual C++](../build/dlls-in-visual-cpp.md)
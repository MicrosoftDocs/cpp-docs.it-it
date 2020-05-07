---
title: Stati dei moduli di una DLL MFC normale collegata a MFC in modo dinamico
ms.date: 11/04/2016
helpviewer_keywords:
- regular MFC DLLs [C++], dynamically linked to MFC
- module states [C++]
- MFC DLLs [C++], regular MFC DLLs
- module states [C++], regular MFC DLLs dynamically linked to
- DLLs [C++], module states
ms.assetid: b4493e79-d25e-4b7f-a565-60de5b32c723
ms.openlocfilehash: cedce676f5586369446c9856fd33e4d16c237b27
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65220588"
---
# <a name="module-states-of-a-regular-mfc-dll-dynamically-linked-to-mfc"></a>Stati dei moduli di una DLL MFC normale collegata a MFC in modo dinamico

La possibilità di collegare in modo dinamico una DLL MFC normale alla DLL MFC consente alcune configurazioni molto complesse. Ad esempio, una normale DLL MFC e il file eseguibile che lo utilizza possono collegarsi in modo dinamico alla DLL MFC e a qualsiasi DLL di estensione MFC.

Questa configurazione costituisce un problema per quanto riguarda i dati globali MFC, ad esempio il puntatore all'oggetto corrente `CWinApp` e la gestione delle mappe.

Prima della versione MFC 4,0, questi dati globali risiedevano nella DLL MFC e venivano condivisi da tutti i moduli nel processo. Poiché ogni processo che utilizza una DLL Win32 ottiene la propria copia dei dati della DLL, questo schema fornisce un modo semplice per tenere traccia dei dati per processo. Inoltre, poiché il modello AFXDLL presume che esista un `CWinApp` solo oggetto e un solo set di mappe di handle nel processo, questi elementi potrebbero essere rilevati nella DLL MFC.

Con la possibilità di collegare in modo dinamico una DLL MFC normale alla DLL MFC, è ora possibile avere due o più `CWinApp` oggetti in un processo e anche due o più set di mappe di handle. In che modo MFC tiene traccia di quali devono essere usati?

La soluzione consiste nel fornire a ogni modulo (applicazione o DLL MFC normale) la propria copia di queste informazioni sullo stato globale. Pertanto, una chiamata a **AfxGetApp** nella DLL MFC normale restituisce un puntatore all' `CWinApp` oggetto nella dll, non quello nell'eseguibile. Questa copia per modulo dei dati globali MFC è nota come stato del modulo ed è descritta nella [Nota tecnica mfc 58](../mfc/tn058-mfc-module-state-implementation.md).

La routine della finestra comune MFC passa automaticamente allo stato del modulo corretto, pertanto non è necessario preoccuparsi in alcun gestore di messaggi implementato nella normale DLL MFC. Tuttavia, quando l'eseguibile chiama la normale DLL MFC, è necessario impostare in modo esplicito lo stato del modulo corrente su quello per la DLL. A tale scopo, usare la macro **AFX_MANAGE_STATE** in tutte le funzioni esportate dalla dll. Questa operazione viene eseguita aggiungendo la seguente riga di codice all'inizio delle funzioni esportate dalla DLL:

```
AFX_MANAGE_STATE(AfxGetStaticModuleState( ))
```

## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni

- [Gestione dei dati sullo stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md)

- [DLL MFC regolari collegate a MFC in modo dinamico](regular-dlls-dynamically-linked-to-mfc.md)

- [MFC (DLL di estensione)](extension-dlls-overview.md)

## <a name="see-also"></a>Vedere anche

[Creare DLL C/C++ in Visual Studio](dlls-in-visual-cpp.md)

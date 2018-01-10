---
title: Stati dei moduli di una DLL MFC regolare collegata in modo dinamico a MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- regular MFC DLLs [C++], dynamically linked to MFC
- module states [C++]
- MFC DLLs [C++], regular MFC DLLs
- module states [C++], regular MFC DLLs dynamically linked to
- DLLs [C++], module states
ms.assetid: b4493e79-d25e-4b7f-a565-60de5b32c723
caps.latest.revision: "7"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 8b88f895255c698f04b6988e63b8b75372fa59b0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="module-states-of-a-regular-mfc-dll-dynamically-linked-to-mfc"></a>Stati dei moduli di una DLL MFC regolare collegata in modo dinamico a MFC
La possibilità di collegare in modo dinamico una DLL MFC normale alla DLL MFC consente alcune configurazioni molto complesse. Ad esempio, DLL regolare MFC e il file eseguibile che lo utilizza può entrambi collegamento dinamico alla DLL MFC e a qualsiasi estensione DLL di MFC.  
  
 Questa configurazione pone un problema relativo ai dati globali MFC, ad esempio il puntatore all'oggetto corrente `CWinApp` mappe di oggetti e handle.  
  
 Prima versione 4.0 di MFC, questi dati globali si trovavano nella DLL MFC stessa e stato condiviso da tutti i moduli nel processo. Poiché ogni processo che utilizza una DLL Win32 Ottiene la propria copia dei dati della DLL, lo schema fornito un modo semplice per tenere traccia dei dati per ogni processo. Inoltre, poiché il modello AFXDLL presupponeva che potrebbe essere presente solo un `CWinApp` oggetto e un solo gruppo di gestione di mappe nel processo, questi elementi potrebbero essere controllati nella DLL MFC stessa.  
  
 Ma con la possibilità di collegare in modo dinamico DLL regolare MFC alla DLL MFC, è ora possibile avere due o più `CWinApp` oggetti in un processo e anche di due o più set di mappe di handle. La modalità MFC tenere traccia delle quali consigliabile usare?  
  
 La soluzione consiste nel fornire la propria copia di queste informazioni di stato globale di ogni modulo (applicazione o DLL MFC regolare). Di conseguenza, una chiamata a **AfxGetApp** in normali DLL MFC restituisce un puntatore al `CWinApp` oggetto nella DLL, non quello presente nel file eseguibile. Questa copia per ogni modulo di dati globali di MFC è noto come un modulo di stato e viene descritto in [Nota tecnica 58 di MFC](../mfc/tn058-mfc-module-state-implementation.md).  
  
 La procedura della finestra comune MFC passa automaticamente allo stato del modulo corretto, non è necessario preoccuparsi di eventuali gestori di messaggi implementati in una DLL regolare MFC. Tuttavia, quando l'eseguibile chiama la DLL regolare MFC, è necessario impostare esplicitamente lo stato del modulo corrente con quella per la DLL. A tale scopo, utilizzare il **AFX_MANAGE_STATE** macro in tutte le funzioni esportate dalla DLL. Questa operazione viene eseguita aggiungendo la riga di codice seguente all'inizio delle funzioni esportate dalla DLL:  
  
```  
AFX_MANAGE_STATE(AfxGetStaticModuleState( ))  
```  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Gestione dei dati dello stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md)  
  
-   [DLL MFC regolari collegate in modo dinamico a MFC](../build/regular-dlls-dynamically-linked-to-mfc.md)  
  
-   [MFC (DLL di estensione)](../build/extension-dlls-overview.md)  
  
## <a name="see-also"></a>Vedere anche  
 [DLL in Visual C++](../build/dlls-in-visual-cpp.md)
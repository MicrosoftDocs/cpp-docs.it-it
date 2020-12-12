---
description: 'Altre informazioni su: distruzione di finestre cornice'
title: Distruzione di finestre cornice
ms.date: 11/04/2016
f1_keywords:
- PostNcDestroy
helpviewer_keywords:
- Default method [MFC]
- DestroyWindow method [MFC]
- frame windows [MFC], destroying
- OnNcDestroy method, and frame windows
- document frame windows [MFC], destroying
- destroying frame windows
- MFC, frame windows
- windows [MFC], destroying
- OnClose method [MFC]
- PostNcDestroy method [MFC]
ms.assetid: 5affca77-1999-4507-a2b2-9aa226611b4b
ms.openlocfilehash: 192b1b21881f4a9f94a4fb1d6c7b18b4a91ac579
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327863"
---
# <a name="destroying-frame-windows"></a>Distruzione di finestre cornice

Il framework MFC gestisce la distruzione della finestra, nonché la creazione di tali finestre associate a documenti e visualizzazioni del Framework. Se si creano finestre aggiuntive, l'utente è responsabile dell'eliminazione.

Nel Framework, quando l'utente chiude la finestra cornice, il gestore [OnClose](reference/cwnd-class.md#onclose) predefinito della finestra chiama [DestroyWindow](reference/cwnd-class.md#destroywindow). L'ultima funzione membro chiamata quando la finestra di Windows viene distrutta è [OnNcDestroy](reference/cwnd-class.md#onncdestroy), che esegue una pulizia, chiama la funzione membro [predefinita](reference/cwnd-class.md#default) per eseguire la pulizia di Windows e infine chiama la funzione membro virtuale [PostNcDestroy](reference/cwnd-class.md#postncdestroy). L'implementazione di [CFrameWnd](reference/cframewnd-class.md) di `PostNcDestroy` Elimina l'oggetto finestra di C++. Non usare mai l'operatore C++ **`delete`** in una finestra cornice. Usare invece `DestroyWindow`.

Quando la finestra principale si chiude, l'applicazione viene chiusa. Se sono stati modificati i documenti non salvati, il Framework Visualizza una finestra di messaggio per richiedere se i documenti devono essere salvati e assicurarsi che i documenti appropriati vengano salvati se necessario.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Creazione di finestre cornice di documenti](creating-document-frame-windows.md)

## <a name="see-also"></a>Vedi anche

[Uso di finestre cornice](using-frame-windows.md)

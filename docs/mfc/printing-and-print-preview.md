---
title: Stampa e anteprima di stampa
ms.date: 11/04/2016
helpviewer_keywords:
- printing [MFC]
- previewing printing
- printing [MFC]
- print preview
- printing [MFC], print preview
ms.assetid: d15059cd-32de-4450-95f7-e73aece238f6
ms.openlocfilehash: 26ced8172a36d34883d6b65997bb3a81fdc3c319
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84625270"
---
# <a name="printing-and-print-preview"></a>Stampa e anteprima di stampa

MFC supporta la stampa e l'anteprima di stampa per i documenti del programma tramite la classe [CView](reference/cview-class.md). Per la stampa di base e l'anteprima di stampa, è sufficiente eseguire l'override della funzione membro [onpare](reference/cview-class.md#ondraw) della classe di visualizzazione, che è comunque necessario eseguire. Questa funzione può essere creata nella visualizzazione sullo schermo, in un contesto di dispositivo della stampante per una stampante effettiva o in un contesto di dispositivo che simula la stampante sullo schermo.

È anche possibile aggiungere codice per gestire la stampa e l'anteprima dei documenti a più pagine, per impaginare i documenti stampati e per aggiungere intestazioni e piè di pagina.

Questa famiglia di articoli illustra il modo in cui viene implementata la stampa nel libreria Microsoft Foundation Class (MFC) e come sfruttare l'architettura di stampa già incorporata nel Framework. Gli articoli spiegano inoltre in che modo MFC supporta l'implementazione semplificata delle funzionalità di anteprima di stampa e il modo in cui è possibile utilizzare e modificare tale funzionalità.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Stampa](printing.md)

- [Architettura dell'anteprima di stampa](print-preview-architecture.md)

- [Esempio](../overview/visual-cpp-samples.md)

## <a name="see-also"></a>Vedere anche

[Elementi dell'interfaccia utente](user-interface-elements-mfc.md)

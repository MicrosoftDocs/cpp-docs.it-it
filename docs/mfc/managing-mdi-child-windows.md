---
description: 'Altre informazioni su: gestione delle finestre figlio MDI'
title: Gestione di finestre figlio MDI
ms.date: 11/19/2018
f1_keywords:
- MDICLIENT
helpviewer_keywords:
- MDI [MFC], child windows
- child windows [MFC], and MDICLIENT window
- MDICLIENT window [MFC]
- windows [MFC], MDI
- frame windows [MFC], MDI child windows
- child windows [MFC]
- MDI [MFC], frame windows
ms.assetid: 1828d96e-a561-48ae-a661-ba9701de6bee
ms.openlocfilehash: 1207e6a8fa174c36b09352796521bcb860ee665f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97112089"
---
# <a name="managing-mdi-child-windows"></a>Gestione di finestre figlio MDI

Le finestre principali MDI (una per applicazione) contengono una finestra figlio speciale denominata finestra MDICLIENT. La finestra MDICLIENT gestisce l'area client della finestra cornice principale e possiede finestre figlio: le finestre del documento, derivate da `CMDIChildWnd` . Poiché le finestre di documento sono esse stesse finestre cornice (finestre figlio MDI), possono avere a loro volta finestre figlio. In questi casi, la finestra padre gestisce le relative finestre figlio e inoltra alcuni comandi.

In una finestra cornice MDI, la finestra cornice gestisce la finestra MDICLIENT, riposizionandola insieme alle barre di controllo. La finestra MDICLIENT, a sua volta, gestisce tutte le finestre cornice figlio MDI. Nella figura seguente è illustrata la relazione tra una finestra cornice MDI, la finestra MDICLIENT e le relative finestre di documento figlio.

![Finestre figlio in una finestra cornice MDI](../mfc/media/vc37gb1.gif "Finestre figlio in una finestra cornice MDI") <br/>
Finestre cornice MDI ed elementi figli

Una finestra cornice MDI agisce anche insieme alla finestra figlio MDI corrente, se presente. La finestra cornice MDI delega i messaggi di comando alla finestra figlio MDI prima di tentare di gestirli essa stessa.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Creazione di finestre cornice di documenti](creating-document-frame-windows.md)

- [Stili della finestra cornice](frame-window-styles-cpp.md)

## <a name="see-also"></a>Vedi anche

[Uso di finestre cornice](using-frame-windows.md)

---
title: Funzione membro ExitInstance
ms.date: 11/04/2016
f1_keywords: []
helpviewer_keywords:
- programs [MFC], terminating
- CWinApp class [MFC], ExitInstance
- ExitInstance method [MFC]
ms.assetid: 5bb597bd-8dab-4d49-8bcf-9c45aa8be4a2
ms.openlocfilehash: c76f588b22ad8ffd1d3dae954c5113feffb62a3f
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62405820"
---
# <a name="exitinstance-member-function"></a>Funzione membro ExitInstance

Il [ExitInstance](../mfc/reference/cwinapp-class.md#exitinstance) la funzione membro della classe [CWinApp](../mfc/reference/cwinapp-class.md) viene chiamato ogni volta che una copia dell'applicazione termina in genere come risultato dell'utente in fase di chiusura dell'applicazione.

Eseguire l'override `ExitInstance` se è necessario l'elaborazione di una pulizia speciale, ad esempio liberando così risorse di graphics device interface (GDI) o deallocazione di memoria utilizzata durante l'esecuzione del programma. Pulizia degli elementi standard, ad esempio documenti e visualizzazioni, tuttavia, viene fornita dal framework, con altre funzioni sottoponibili a override per operazioni di pulitura specifica a tali oggetti.

## <a name="see-also"></a>Vedere anche

[CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)

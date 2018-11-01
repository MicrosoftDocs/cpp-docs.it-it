---
title: Funzioni membro CWinApp sottoponibili a override
ms.date: 11/04/2016
f1_keywords:
- CWinApp
helpviewer_keywords:
- overriding [MFC], overridable functions in CWinApp
- application class [MFC]
- CWinApp class [MFC], overridables
ms.assetid: 07183d5e-734b-45d9-a8b6-9dde4adac0b4
ms.openlocfilehash: 9f1098e305606df9463e308466b7864b019d5a00
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50459280"
---
# <a name="overridable-cwinapp-member-functions"></a>Funzioni membro CWinApp sottoponibili a override

[CWinApp](../mfc/reference/cwinapp-class.md) offre numerose funzioni membro sottoponibile a override (`CWinApp` esegue l'override di questi membri dalla classe [CWinThread](../mfc/reference/cwinthread-class.md), da cui `CWinApp` deriva):

- [InitInstance](../mfc/initinstance-member-function.md)

- [Run](../mfc/run-member-function.md)

- [ExitInstance](../mfc/exitinstance-member-function.md)

- [OnIdle](../mfc/onidle-member-function.md)

L'unica funzione membro di `CWinApp` di cui è necessario eseguire l'override è `InitInstance`.

## <a name="see-also"></a>Vedere anche

[CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)

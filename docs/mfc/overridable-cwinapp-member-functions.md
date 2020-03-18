---
title: Funzioni membro CWinApp sottoponibili a override
ms.date: 11/04/2016
helpviewer_keywords:
- overriding [MFC], overridable functions in CWinApp
- application class [MFC]
- CWinApp class [MFC], overridables
ms.assetid: 07183d5e-734b-45d9-a8b6-9dde4adac0b4
ms.openlocfilehash: 28ba243bd755e25db5f2cb03d08013f082fbc918
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79447260"
---
# <a name="overridable-cwinapp-member-functions"></a>Funzioni membro CWinApp sottoponibili a override

[CWinApp](../mfc/reference/cwinapp-class.md) fornisce diverse funzioni membro chiave sottoponibili a override (`CWinApp` esegue l'override di questi membri dalla classe [CWinThread](../mfc/reference/cwinthread-class.md), da cui deriva `CWinApp`):

- [InitInstance](../mfc/initinstance-member-function.md)

- [Esegui](../mfc/run-member-function.md)

- [ExitInstance](../mfc/exitinstance-member-function.md)

- [OnIdle](../mfc/onidle-member-function.md)

L'unica funzione membro di `CWinApp` di cui è necessario eseguire l'override è `InitInstance`.

## <a name="see-also"></a>Vedere anche

[CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)

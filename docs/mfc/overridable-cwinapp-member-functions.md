---
description: 'Altre informazioni su: funzioni membro CWinApp sottoponibili a override'
title: Funzioni membro CWinApp sottoponibili a override
ms.date: 11/04/2016
helpviewer_keywords:
- overriding [MFC], overridable functions in CWinApp
- application class [MFC]
- CWinApp class [MFC], overridables
ms.assetid: 07183d5e-734b-45d9-a8b6-9dde4adac0b4
ms.openlocfilehash: 3958ad0edc1fbdb77e1f6ce3252fd03d7595344a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97330104"
---
# <a name="overridable-cwinapp-member-functions"></a>Funzioni membro CWinApp sottoponibili a override

[CWinApp](reference/cwinapp-class.md) fornisce diverse funzioni membro chiave sottoponibili `CWinApp` a override (esegue l'override di questi membri dalla classe [CWinThread](reference/cwinthread-class.md), da cui `CWinApp` deriva):

- [InitInstance](initinstance-member-function.md)

- [Esegui](run-member-function.md)

- [ExitInstance](exitinstance-member-function.md)

- [OnIdle](onidle-member-function.md)

L'unica funzione membro di `CWinApp` di cui è necessario eseguire l'override è `InitInstance`.

## <a name="see-also"></a>Vedi anche

[CWinApp: classe Application](cwinapp-the-application-class.md)

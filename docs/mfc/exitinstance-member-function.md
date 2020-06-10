---
title: Funzione membro ExitInstance
ms.date: 11/04/2016
f1_keywords: []
helpviewer_keywords:
- programs [MFC], terminating
- CWinApp class [MFC], ExitInstance
- ExitInstance method [MFC]
ms.assetid: 5bb597bd-8dab-4d49-8bcf-9c45aa8be4a2
ms.openlocfilehash: 58546d26293ad48a39a36b98ba4bfdabb68385ee
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84622689"
---
# <a name="exitinstance-member-function"></a>Funzione membro ExitInstance

La funzione membro [ExitInstance](reference/cwinapp-class.md#exitinstance) della classe [CWinApp](reference/cwinapp-class.md) viene chiamata ogni volta che una copia dell'applicazione termina, in genere come conseguenza dell'arresto dell'applicazione da parte dell'utente.

Eseguire l'override `ExitInstance` se è necessaria un'elaborazione speciale per la pulizia, ad esempio la liberazione di risorse GDI (Graphics Device Interface) o la deallocazione della memoria usata durante l'esecuzione del programma. La pulizia di elementi standard, ad esempio documenti e visualizzazioni, viene tuttavia fornita dal Framework, con altre funzioni sottoponibili a override per eseguire operazioni di pulizia speciali specifiche per tali oggetti.

## <a name="see-also"></a>Vedere anche

[CWinApp: classe Application](cwinapp-the-application-class.md)

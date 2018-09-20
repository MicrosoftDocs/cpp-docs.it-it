---
title: Funzione membro ExitInstance | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords: []
dev_langs:
- C++
helpviewer_keywords:
- programs [MFC], terminating
- CWinApp class [MFC], ExitInstance
- ExitInstance method [MFC]
ms.assetid: 5bb597bd-8dab-4d49-8bcf-9c45aa8be4a2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: da411fbecdea0a1e7b8976ca119057204693a9bd
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46387861"
---
# <a name="exitinstance-member-function"></a>Funzione membro ExitInstance

Il [ExitInstance](../mfc/reference/cwinapp-class.md#exitinstance) la funzione membro della classe [CWinApp](../mfc/reference/cwinapp-class.md) viene chiamato ogni volta che una copia dell'applicazione termina in genere come risultato dell'utente in fase di chiusura dell'applicazione.

Eseguire l'override `ExitInstance` se è necessario l'elaborazione di una pulizia speciale, ad esempio liberando così risorse di graphics device interface (GDI) o deallocazione di memoria utilizzata durante l'esecuzione del programma. Pulizia degli elementi standard, ad esempio documenti e visualizzazioni, tuttavia, viene fornita dal framework, con altre funzioni sottoponibili a override per operazioni di pulitura specifica a tali oggetti.

## <a name="see-also"></a>Vedere anche

[CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)

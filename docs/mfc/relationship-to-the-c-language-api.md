---
title: Relazioni con l'API in linguaggio C
ms.date: 11/04/2016
helpviewer_keywords:
- books [MFC], about MFC and Windows SDK
- books [MFC]
- MFC, Windows API
- Visual C, Windows API calls
- Windows API [MFC], and MFC
ms.assetid: 334e8efc-f3cc-4018-bc2e-02908b2a39fe
ms.openlocfilehash: 1fbd4d332f5ade1cb9415448b138ac5bc838307d
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372820"
---
# <a name="relationship-to-the-c-language-api"></a>Relazioni con l'API in linguaggio C

L'unica caratteristica che differenzia la libreria MFC (Microsoft Foundation Class) dalle altre librerie di classi per Windows è il mapping molto simile all'API Windows scritto nel linguaggio C. Inoltre, in genere è possibile combinare liberamente le chiamate alla libreria delle classi con chiamate dirette all'API Windows. L'accesso diretto, tuttavia, non implica che le classi siano una sostituzione completa dell'API. Gli sviluppatori devono comunque effettuare occasionalmente chiamate dirette ad alcune funzioni di Windows, ad esempio [SetCursor](/windows/win32/api/winuser/nf-winuser-setcursor) e [GetSystemMetrics](/windows/win32/api/winuser/nf-winuser-getsystemmetrics). Una funzione Windows viene sottoposta al wrapping da una funzione membro di una classe solo quando si presenta un chiaro vantaggio nel farlo.

Poiché talvolta è necessario effettuare chiamate a funzioni Windows native, è necessario avere accesso alla documentazione dell'API Windows in linguaggio C. Questa documentazione è inclusa con Microsoft Visual C++.

> [!NOTE]
> Per una panoramica del funzionamento del framework della libreria MFC, vedere [Utilizzo delle classi per scrivere applicazioni per Windows](../mfc/using-the-classes-to-write-applications-for-windows.md).

## <a name="see-also"></a>Vedere anche

[Filosofia generale del class design](../mfc/general-class-design-philosophy.md)

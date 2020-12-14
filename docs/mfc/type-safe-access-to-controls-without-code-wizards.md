---
description: "Altre informazioni su: Type-Safe l'accesso ai controlli senza creazioni guidate codice"
title: Accesso indipendente dai tipi ai controlli senza creazioni guidate codice
ms.date: 11/04/2016
helpviewer_keywords:
- dialog boxes [MFC], accessing controls
- dialog box controls [MFC], accessing
ms.assetid: 325b4927-d49b-42b4-8e0b-fc84f31fb059
ms.openlocfilehash: 1e59353a17f0d841cd69fa64f792dcc7cdbfa6ad
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97263777"
---
# <a name="type-safe-access-to-controls-without-code-wizards"></a>Accesso indipendente dai tipi ai controlli senza creazioni guidate codice

Il primo approccio alla creazione di un accesso indipendente dai tipi ai controlli utilizza una funzione membro inline per eseguire il cast del tipo restituito dalla funzione membro `CWnd` della classe `GetDlgItem` per il tipo di controllo C++ appropriato, come nel seguente esempio:

[!code-cpp[NVC_MFCControlLadenDialog#50](../mfc/codesnippet/cpp/type-safe-access-to-controls-without-code-wizards_1.cpp)]

È quindi possibile utilizzare questa funzione membro per accedere al controllo in modo indipendente dai tipi con codice simile al seguente:

[!code-cpp[NVC_MFCControlLadenDialog#51](../mfc/codesnippet/cpp/type-safe-access-to-controls-without-code-wizards_2.cpp)]

## <a name="see-also"></a>Vedi anche

[Accesso indipendente dai tipi ai controlli in una finestra di dialogo](../mfc/type-safe-access-to-controls-in-a-dialog-box.md)<br/>
[Accesso indipendente dai tipi ai controlli con creazioni guidate codice](../mfc/type-safe-access-to-controls-with-code-wizards.md)

---
title: Stampa
ms.date: 11/04/2016
helpviewer_keywords:
- view classes [MFC], print operations
- documents [MFC], printing
- printing [MFC], from framework
- printing [MFC]
ms.assetid: be465e8d-b0c9-4fc5-9fa8-d10486064f76
ms.openlocfilehash: a46096592c9983d04d2122bfabb56ece9346c4bc
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371199"
---
# <a name="printing"></a>Stampa

Microsoft Windows implementa la visualizzazione indipendente dal dispositivo. In MFC, ciò significa che le `OnDraw` stesse chiamate di disegno, nella funzione membro della classe di visualizzazione, sono responsabili del disegno sullo schermo e su altri dispositivi, ad esempio le stampanti. Per l'anteprima di stampa, il dispositivo di destinazione è un output della stampante simulato sul display.

## <a name="your-role-in-printing-vs-the-frameworks-role"></a><a name="_core_your_role_in_printing_vs.._the_framework.92.s_role"></a>Il ruolo nella stampa e il ruolo del Framework

La classe di visualizzazione ha le seguenti responsabilità:

- Informare il framework di quante pagine sono presenti nel documento.

- Quando viene richiesto di stampare una pagina specificata, disegnare quella parte del documento.

- Allocare e deallocare eventuali tipi di carattere o altre risorse GDI (Graphics Device Interface) necessarie per la stampa.

- Se necessario, inviare i codici di escape necessari per modificare la modalità della stampante prima di stampare una determinata pagina, ad esempio per modificare l'orientamento di stampa in base alla pagina.

Le responsabilità del quadro sono le seguenti:

- Visualizzare la finestra di dialogo **Stampa.**

- Creare un oggetto [CDC](../mfc/reference/cdc-class.md) per la stampante.

- Chiamare le funzioni membro [StartDoc](../mfc/reference/cdc-class.md#startdoc) `CDC` e [EndDoc](../mfc/reference/cdc-class.md#enddoc) dell'oggetto.

- Chiamare ripetutamente la funzione membro `CDC` [StartPage](../mfc/reference/cdc-class.md#startpage) dell'oggetto, informare la classe di visualizzazione della `CDC` pagina da stampare e chiamare la funzione membro [EndPage](../mfc/reference/cdc-class.md#endpage) dell'oggetto.

- Chiamare le funzioni sottoponibili a override nella visualizzazione nei momenti appropriati.

Gli articoli seguenti illustrano come il framework supporta la stampa e l'anteprima di stampa:

### <a name="what-do-you-want-to-know-more-about"></a>Cosa vuoi sapere di più su

- [Modalità di stampa predefinita](../mfc/how-default-printing-is-done.md)

- [Documenti a più pagine](../mfc/multipage-documents.md)

- [Intestazioni e piè di pagina](../mfc/headers-and-footers.md)

- [Allocazione di risorse GDI per la stampa](../mfc/allocating-gdi-resources.md)

- [Anteprima di stampa](../mfc/print-preview-architecture.md)

## <a name="see-also"></a>Vedere anche

[Stampa e anteprima di stampa](../mfc/printing-and-print-preview.md)

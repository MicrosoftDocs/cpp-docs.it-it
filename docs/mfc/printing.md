---
title: Stampa
ms.date: 11/04/2016
helpviewer_keywords:
- view classes [MFC], print operations
- documents [MFC], printing
- printing [MFC], from framework
- printing [MFC]
ms.assetid: be465e8d-b0c9-4fc5-9fa8-d10486064f76
ms.openlocfilehash: 88b89ee54ec6270b01859d0f0baeea0efebd9ad6
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50589391"
---
# <a name="printing"></a>Stampa

Microsoft Windows implementa visualizzazione indipendente dal dispositivo. In MFC, questo significa che le stesse chiamate di disegnare, nel `OnDraw` funzione membro di classe di visualizzazione sono responsabili del disegno sullo schermo e in altri dispositivi, ad esempio le stampanti. Per l'anteprima di stampa, il dispositivo di destinazione è una stampante simulato visualizzato sullo schermo.

##  <a name="_core_your_role_in_printing_vs.._the_framework.92.s_role"></a> Il ruolo nella stampa e il ruolo del Framework

Classe di visualizzazione ha le responsabilità seguenti:

- Il framework che indicano il numero di pagine è nel documento.

- Quando viene richiesto per stampare una pagina specifica, disegnare tale parte del documento.

- È possibile allocare e deallocare i tipi di carattere o altre risorse di interface (GDI) di dispositivo di grafica necessari per la stampa.

- Se necessario, inviare eventuali codici di escape necessari per modificare la modalità di stampa prima di stampare una determinata pagina, ad esempio, per modificare l'orientamento di stampa per ogni pagina.

Le responsabilità del framework sono i seguenti:

- Visualizzare il **stampa** nella finestra di dialogo.

- Creare un [CDC](../mfc/reference/cdc-class.md) oggetto per la stampante.

- Chiamare il [StartDoc](../mfc/reference/cdc-class.md#startdoc) e [EndDoc](../mfc/reference/cdc-class.md#enddoc) funzioni membro del `CDC` oggetto.

- Chiamare ripetutamente il [StartPage](../mfc/reference/cdc-class.md#startpage) funzione membro delle `CDC` dell'oggetto, informare la classe di visualizzazione quale pagina deve essere stampata e chiamare il [EndPage](../mfc/reference/cdc-class.md#endpage) funzione membro del `CDC` oggetto.

- Chiamare funzioni sottoponibili a override nella visualizzazione nel momento appropriato.

Gli articoli seguenti illustrano come il framework supporta la stampa e anteprima di stampa:

### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Procedura di stampa predefinita](../mfc/how-default-printing-is-done.md)

- [Documenti con più pagine](../mfc/multipage-documents.md)

- [Informazioni sulle intestazioni e piè di pagina](../mfc/headers-and-footers.md)

- [Allocazione di risorse GDI per la stampa](../mfc/allocating-gdi-resources.md)

- [Anteprima di stampa](../mfc/print-preview-architecture.md)

## <a name="see-also"></a>Vedere anche

[Stampa e anteprima di stampa](../mfc/printing-and-print-preview.md)


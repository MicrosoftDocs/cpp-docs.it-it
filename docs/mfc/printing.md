---
title: Stampa
ms.date: 11/04/2016
helpviewer_keywords:
- view classes [MFC], print operations
- documents [MFC], printing
- printing [MFC], from framework
- printing [MFC]
ms.assetid: be465e8d-b0c9-4fc5-9fa8-d10486064f76
ms.openlocfilehash: 3d2ef494be66171cbcbf2b8b9e19c29c8bdc5c2f
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619809"
---
# <a name="printing"></a>Stampa

Microsoft Windows implementa la visualizzazione indipendente dal dispositivo. In MFC questo significa che le stesse chiamate di disegno, nella `OnDraw` funzione membro della classe di visualizzazione, sono responsabili del disegno sullo schermo e su altri dispositivi, ad esempio stampanti. Per l'anteprima di stampa, il dispositivo di destinazione è un output simulato della stampante sullo schermo.

## <a name="your-role-in-printing-vs-the-frameworks-role"></a><a name="_core_your_role_in_printing_vs.._the_framework.92.s_role"></a>Il ruolo di stampa rispetto a quello del Framework

La classe di visualizzazione ha le responsabilità seguenti:

- Informare il Framework il numero di pagine presenti nel documento.

- Quando viene richiesto di stampare una pagina specificata, creare la parte del documento.

- Allocare e deallocare i tipi di carattere o altre risorse GDI (Graphics Device Interface) necessarie per la stampa.

- Se necessario, inviare i codici di escape necessari per modificare la modalità di stampa prima di stampare una determinata pagina, ad esempio, per modificare l'orientamento di stampa in base alle singole pagine.

Di seguito sono riportate le responsabilità del Framework:

- Visualizzare la finestra di dialogo **stampa** .

- Creare un oggetto [CDC](reference/cdc-class.md) per la stampante.

- Chiamare le funzioni membro [StartDoc](reference/cdc-class.md#startdoc) e [EndDoc](reference/cdc-class.md#enddoc) dell' `CDC` oggetto.

- Chiamare ripetutamente la funzione membro [Startpage](reference/cdc-class.md#startpage) dell' `CDC` oggetto, indicare alla classe di visualizzazione la pagina da stampare e chiamare la funzione membro [EndPage](reference/cdc-class.md#endpage) dell' `CDC` oggetto.

- Chiamare le funzioni sottoponibili a override nella visualizzazione nei momenti appropriati.

Gli articoli seguenti illustrano in che modo il Framework supporta la stampa e l'anteprima di stampa:

### <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Come viene eseguita la stampa predefinita](how-default-printing-is-done.md)

- [Documenti a più pagine](multipage-documents.md)

- [Intestazioni e piè di pagina](headers-and-footers.md)

- [Allocazione di risorse GDI per la stampa](allocating-gdi-resources.md)

- [Anteprima di stampa](print-preview-architecture.md)

## <a name="see-also"></a>Vedere anche

[Stampa e anteprima di stampa](printing-and-print-preview.md)

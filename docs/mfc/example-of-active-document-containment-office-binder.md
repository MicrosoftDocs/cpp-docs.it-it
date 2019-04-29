---
title: 'Esempio di contenimento dei documenti attivi: raccoglitore di Office'
ms.date: 11/04/2016
helpviewer_keywords:
- active documents [MFC], containers
- examples [MFC], active document containment
- containers [MFC], active document
- active document containers [MFC], examples
- Office Binder [MFC]
- MFC COM, active document containment
ms.assetid: 70dd8568-e8bc-44ac-bf5e-678767efe8e3
ms.openlocfilehash: b06bc0f22ee71c8afbbc8feadca68895fc24a50b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62358864"
---
# <a name="example-of-active-document-containment-office-binder"></a>Esempio di contenimento dei documenti attivi: raccoglitore di Office

Il Raccoglitore Microsoft Office è un esempio di un contenitore di documenti attivi. Un raccoglitore di Office include due riquadri principali, come avviene in genere i contenitori. Il riquadro a sinistra contiene le icone che corrispondono ai documenti attivi nel gestore di associazione. Ogni documento viene chiamato un *sezione* entro lo strumento di associazione. Ad esempio, uno strumento di associazione può contenere documenti di Word, i file di PowerPoint, fogli di calcolo di Excel e così via.

Facendo clic su un'icona nel riquadro sinistro attiva il documento attivo corrispondente. Riquadro a destra del Binder Visualizza quindi il contenuto del documento attivo attualmente selezionato.

Se si apre e attiva un documento di Word in uno strumento di associazione, Word barra dei menu e barre degli strumenti vengono visualizzati nella parte superiore del riquadro di visualizzazione ed è possibile modificare il contenuto del documento con qualsiasi comando di Word o lo strumento. Tuttavia, la barra dei menu è una combinazione di barre dei menu dello strumento di associazione sia di Word. Perché sia dello strumento di associazione che Word dispone **aiutare** i menu, il contenuto dei rispettivi menu vengono uniti. Contenitori documenti attivi, ad esempio Raccoglitore di Office da fornire automaticamente **aiutare** menu unione; per altre informazioni, vedere [unione di Menu della Guida](../mfc/help-menu-merging.md).

Quando si seleziona un documento attivo di un altro tipo di applicazione di modifiche all'interfaccia dello strumento di associazione per supportare quello del tipo di applicazione del documento attivo. Ad esempio, se uno strumento di associazione contiene un foglio di calcolo di Excel, si noterà che il menu di scelta in strumento di associazione di cambiare quando si seleziona la sezione di foglio di calcolo di Excel.

Esistono, ovviamente, altri possibili tipi di contenitori accanto a strumenti di associazione. Esplora file Usa l'interfaccia dual-riquadro tipico in cui il riquadro a sinistra Usa un controllo albero per visualizzare un elenco gerarchico di directory in un'unità o una rete, mentre nel riquadro a destra vengono visualizzati i file contenuti nella directory attualmente selezionata. Un tipo di browser Internet del contenitore (ad esempio Microsoft Internet Explorer), anziché usare un'interfaccia duale-riquadro, in genere dispone di un singolo frame e fornisce funzioni di navigazione tramite collegamenti ipertestuali.

## <a name="see-also"></a>Vedere anche

[Contenimento dei documenti attivi](../mfc/active-document-containment.md)

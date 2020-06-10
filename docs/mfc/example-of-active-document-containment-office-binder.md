---
title: 'Esempio di contenimento di documenti attivi: raccoglitore di Office'
ms.date: 11/04/2016
helpviewer_keywords:
- active documents [MFC], containers
- examples [MFC], active document containment
- containers [MFC], active document
- active document containers [MFC], examples
- Office Binder [MFC]
- MFC COM, active document containment
ms.assetid: 70dd8568-e8bc-44ac-bf5e-678767efe8e3
ms.openlocfilehash: fe9ccb5b78d9a60c5b8b2a19fe0818a8e1682f00
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84623117"
---
# <a name="example-of-active-document-containment-office-binder"></a>Esempio di contenimento di documenti attivi: raccoglitore di Office

Il Binder Microsoft Office è un esempio di contenitore di documenti attivi. Uno strumento di associazione di Office include due riquadri principali, come avviene in genere per i contenitori. Il riquadro sinistro contiene le icone che corrispondono ai documenti attivi nel gestore di associazione. Ogni documento è denominato *sezione* all'interno del Binder. Un Binder può ad esempio contenere documenti di Word, file di PowerPoint, fogli di calcolo di Excel e così via.

Quando si fa clic su un'icona nel riquadro sinistro viene attivato il documento attivo corrispondente. Il riquadro destro del Binder Visualizza il contenuto del documento attivo attualmente selezionato.

Se si apre e si attiva un documento di Word in un Binder, le barre degli strumenti e la barra dei menu di Word vengono visualizzate nella parte superiore del frame di visualizzazione ed è possibile modificare il contenuto del documento utilizzando qualsiasi comando o strumento di Word. Tuttavia, la barra dei menu è una combinazione delle barre dei menu del Binder e della parola. Poiché il Binder e Word includono menu della **Guida** , il contenuto dei rispettivi menu viene Unito. I contenitori di documenti attivi come il binder di **Office forniscono automaticamente** il merge del menu? Per ulteriori informazioni, vedere [Unione di menu della Guida](help-menu-merging.md).

Quando si seleziona un documento attivo di un altro tipo di applicazione, l'interfaccia del gestore di associazione cambia per adattarla al tipo di applicazione del documento attivo. Se, ad esempio, un gestore di associazione contiene un foglio di calcolo di Excel, si noterà che i menu del Binder cambiano quando si seleziona la sezione foglio di calcolo di Excel.

Esistono, naturalmente, altri tipi possibili di contenitori accanto ai Binder. Esplora file usa la tipica interfaccia a doppio riquadro in cui il riquadro sinistro usa un controllo albero per visualizzare un elenco gerarchico di directory in un'unità o in una rete, mentre nel riquadro destro vengono visualizzati i file contenuti nella directory attualmente selezionata. Un browser Internet: tipo di contenitore, ad esempio Microsoft Internet Explorer, anziché utilizzare un'interfaccia a doppio riquadro, in genere dispone di un singolo frame e fornisce la navigazione tramite collegamenti ipertestuali.

## <a name="see-also"></a>Vedere anche

[Contenimento dei documenti attivi](active-document-containment.md)

---
title: C++compatibilità binaria tra Visual Studio 2015, 2017 e 2019
description: Viene descritto il funzionamento della compatibilità binaria tra i file compilati C++ in Visual Studio 2015, 2017 e 2019. Un pacchetto Microsoft C++ Visual Redistributable Package funziona per tutte e tre le versioni.
ms.date: 11/11/2019
helpviewer_keywords:
- binary compatibility, Visual C++
ms.assetid: 591580f6-3181-4bbe-8ac3-f4fbaca949e6
ms.openlocfilehash: 118ad0a32d5dc8c344967f9a67f2d5b05aa806c0
ms.sourcegitcommit: e5192a25c084eda9eabfa37626f3274507e026b3
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/12/2019
ms.locfileid: "73965560"
---
# <a name="c-binary-compatibility-between-visual-studio-2015-2017-and-2019"></a>C++compatibilità binaria tra Visual Studio 2015, 2017 e 2019

I set C++ di strumenti del compilatore Microsoft (MSVC) in Visual Studio 2013 e versioni precedenti non garantiscono la compatibilità binaria tra le versioni. Non è possibile collegare i file oggetto, le librerie statiche, le librerie dinamiche e gli eseguibili compilati da versioni diverse. L'ABI, i formati degli oggetti e le librerie di runtime non sono compatibili.

Questo comportamento è stato modificato in Visual Studio 2015, 2017 e 2019. Le librerie e le app di Runtime compilate da una qualsiasi di queste versioni del compilatore sono compatibili con binario. Si riflette nel numero principale C++ del set di strumenti, ovvero 14 per tutte e tre le versioni. (La versione del set di strumenti è V140 per Visual Studio 2015, V141 per 2017 e V142 per 2019). Supponiamo di avere librerie di terze parti compilate da Visual Studio 2015. È comunque possibile usarli in un'applicazione compilata da Visual Studio 2017 o 2019. Non è necessario ricompilare con un set di strumenti corrispondente. La versione più recente di Microsoft Visual C++ Redistributable Package (ridistribuibile) funziona per tutti.

Si è verificata un'eccezione a questa regola: le librerie statiche o i file oggetto compilati usando l'opzione del compilatore `/GL` *non sono* compatibili con le versioni binarie nelle versioni.

Il ridistribuibile usato dall'app presenta una significativa restrizione di compatibilità binaria. Si applica quando si combinano binari compilati con diverse versioni supportate del set di strumenti. La versione ridistribuibile deve essere almeno la nuova del set di strumenti più recente usato da qualsiasi componente dell'app.

## <a name="upgrade-the-microsoft-visual-c-redistributable-from-visual-studio-2015-or-2017-to-visual-studio-2019"></a>Aggiornare Microsoft Visual C++ Redistributable da visual studio 2015 o 2017 a visual studio 2019

È stato mantenuto il numero di C++ versione principale di Microsoft Visual Redistributable per visual studio 2015, 2017 e 2019. Ciò significa che è possibile installare solo un'istanza del ridistribuibile alla volta. Una versione più recente sovrascrive qualsiasi versione precedente già installata. Ad esempio, un'app può installare ridistribuibile da Visual Studio 2015. Quindi, un'altra app installa il ridistribuibile da Visual Studio 2019. La versione 2019 sovrascrive la versione precedente, ma poiché è compatibile con binario, l'app precedente funziona ancora correttamente. Si garantisce che la versione più recente di Redistributable includa tutte le funzionalità più recenti, gli aggiornamenti della sicurezza e le correzioni di bug. Per questo motivo è sempre consigliabile eseguire l'aggiornamento alla versione più recente disponibile.

Analogamente, non è possibile installare un ridistribuibile precedente quando è già installata una versione più recente. Se si prova, il programma di installazione segnala un errore. Verrà visualizzato un errore simile al seguente se si installa 2015 o 2017 ridistribuibile in un computer in cui è già presente la versione 2019:

```Output
0x80070666 - Another version of this product is already installed. Installation of this version cannot continue. To configure or remove the existing version of this product, use Add/Remove Programs on the Control Panel.
```

Questo errore è stato progettato. Si consiglia di lasciare installata la versione più recente. Verificare che il programma di installazione sia in grado di risolvere l'errore in modo invisibile all'utente.

## <a name="see-also"></a>Vedere anche

[Cronologia C++ modifiche visive](../porting/visual-cpp-change-history-2003-2015.md)\
[I download più recenti C++ di Visual Redistributable supportati](https://support.microsoft.com/help/2977003/the-latest-supported-visual-c-downloads)

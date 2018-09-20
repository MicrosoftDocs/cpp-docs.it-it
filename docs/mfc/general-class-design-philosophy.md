---
title: Filosofia di progettazione classi generale | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- vc.classes.mfc
dev_langs:
- C++
helpviewer_keywords:
- designing classes [MFC]
- MFC, Windows API
- Visual C, Windows API calls
- classes [MFC], MFC class design
- Windows API [MFC], and MFC
ms.assetid: e6861ae0-1581-4d9c-9ddf-63f9afcdb913
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8fe64ee4d9e6fc678d97c3e9fe37a85e53807541
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46416643"
---
# <a name="general-class-design-philosophy"></a>Filosofia di progettazione classi generale

Microsoft Windows è stata progettata molto prima che il linguaggio C++ diventata popolare. Poiché migliaia di applicazioni di utilizza il linguaggio C Windows application programming interface (API), tale interfaccia verrà mantenuta anche in futuro. Qualsiasi interfaccia di Windows C++ deve pertanto essere compilato nelle API in linguaggio C procedura. In questo modo si garantisce che le applicazioni C++ saranno in grado di coesistere con applicazioni C.

La libreria Microsoft Foundation Class è un'interfaccia orientata agli oggetti di Windows che soddisfi gli obiettivi di progettazione seguenti:

- Riduzione significativa nel tentativo di scrivere un'applicazione per Windows.

- Velocità di esecuzione è analogo a quello dell'API in linguaggio C.

- Overhead di dimensione minima di codice.

- Possibilità di chiamare qualsiasi funzione di Windows C direttamente.

- Conversione semplificata delle applicazioni esistenti di C a C++.

- Possibilità di sfruttare dalla base esistente di Windows in linguaggio C esperienza di programmazione.

- Semplificare l'utilizzo dell'API di Windows con C++ rispetto ai con C.

- Più facile da utilizzare ma potenti astrazioni di complicato funzionalità quali controlli ActiveX, supporto database, la stampa, le barre degli strumenti e le barre di stato.

- API di Windows true per C++ che utilizza in modo efficace di funzionalità del linguaggio C++.

Per altre informazioni sulla progettazione della libreria MFC, vedere:

- [Il Framework dell'applicazione](../mfc/application-framework.md)

- [Relazioni con l'API in linguaggio C](../mfc/relationship-to-the-c-language-api.md)

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)


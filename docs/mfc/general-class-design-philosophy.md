---
title: Filosofia di progettazione classi generale
ms.date: 11/04/2016
helpviewer_keywords:
- designing classes [MFC]
- MFC, Windows API
- Visual C, Windows API calls
- classes [MFC], MFC class design
- Windows API [MFC], and MFC
ms.assetid: e6861ae0-1581-4d9c-9ddf-63f9afcdb913
ms.openlocfilehash: 34a173802e3fa43615c05da4ce747592f851228f
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79441195"
---
# <a name="general-class-design-philosophy"></a>Filosofia di progettazione classi generale

Microsoft Windows è stato progettato a lungo C++ prima che la lingua fosse diventata popolare. Dal momento che migliaia di applicazioni usano il Application Programming Interface di Windows in linguaggio C (API), tale interfaccia verrà mantenuta per il futuro prevedibile. Qualsiasi C++ interfaccia di Windows deve quindi essere compilata sulla base dell'API del linguaggio C procedurale. Ciò garantisce che C++ le applicazioni possano coesistere con le applicazioni C.

Il libreria Microsoft Foundation Class è un'interfaccia orientata a oggetti per Windows che soddisfa gli obiettivi di progettazione seguenti:

- Riduzione significativa del lavoro richiesto per scrivere un'applicazione per Windows.

- Velocità di esecuzione paragonabile a quella dell'API del linguaggio C.

- Overhead minimo delle dimensioni del codice.

- Possibilità di chiamare direttamente qualsiasi funzione C di Windows.

- Conversione più semplice delle applicazioni C esistenti C++in.

- Possibilità di sfruttare la base esistente dell'esperienza di programmazione Windows in linguaggio C.

- Uso più semplice dell'API Windows con C++ rispetto a C.

- Semplifica l'utilizzo di astrazioni potenti di funzionalità complesse quali controlli ActiveX, supporto del database, stampa, barre degli strumenti e barre di stato.

- Vera API Windows per C++ che usa C++ efficacemente le funzionalità del linguaggio.

Per ulteriori informazioni sulla progettazione della libreria MFC, vedere:

- [Framework applicazione](../mfc/application-framework.md)

- [Relazioni con l'API in linguaggio C](../mfc/relationship-to-the-c-language-api.md)

## <a name="see-also"></a>Vedere anche

[Panoramica della classe](../mfc/class-library-overview.md)

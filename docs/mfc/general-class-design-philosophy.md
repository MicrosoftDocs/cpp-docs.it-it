---
description: 'Altre informazioni su: filosofia di progettazione classi generale'
title: Filosofia di progettazione classi generale
ms.date: 11/04/2016
helpviewer_keywords:
- designing classes [MFC]
- MFC, Windows API
- Visual C, Windows API calls
- classes [MFC], MFC class design
- Windows API [MFC], and MFC
ms.assetid: e6861ae0-1581-4d9c-9ddf-63f9afcdb913
ms.openlocfilehash: 96069b5f30cbca8bb310de6b917fd65a280700b0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97193461"
---
# <a name="general-class-design-philosophy"></a>Filosofia di progettazione classi generale

Microsoft Windows è stato progettato per molto tempo prima che il linguaggio C++ venisse diffuso. Dal momento che migliaia di applicazioni usano il Application Programming Interface di Windows in linguaggio C (API), tale interfaccia verrà mantenuta per il futuro prevedibile. Qualsiasi interfaccia Windows C++ deve quindi essere compilata sulla base dell'API del linguaggio C procedurale. Ciò garantisce che le applicazioni C++ saranno in grado di coesistere con le applicazioni C.

Il libreria Microsoft Foundation Class è un'interfaccia orientata a oggetti per Windows che soddisfa gli obiettivi di progettazione seguenti:

- Riduzione significativa del lavoro richiesto per scrivere un'applicazione per Windows.

- Velocità di esecuzione paragonabile a quella dell'API del linguaggio C.

- Overhead minimo delle dimensioni del codice.

- Possibilità di chiamare direttamente qualsiasi funzione C di Windows.

- Conversione più semplice delle applicazioni C esistenti in C++.

- Possibilità di sfruttare la base esistente dell'esperienza di programmazione Windows in linguaggio C.

- Uso più semplice dell'API Windows con C++ rispetto a C.

- Semplifica l'utilizzo di astrazioni potenti di funzionalità complesse quali controlli ActiveX, supporto del database, stampa, barre degli strumenti e barre di stato.

- Vera API Windows per C++ che usa efficacemente le funzionalità del linguaggio C++.

Per ulteriori informazioni sulla progettazione della libreria MFC, vedere:

- [Framework applicazione](application-framework.md)

- [Relazione con l'API in linguaggio C](relationship-to-the-c-language-api.md)

## <a name="see-also"></a>Vedi anche

[Cenni preliminari sulle classi](class-library-overview.md)

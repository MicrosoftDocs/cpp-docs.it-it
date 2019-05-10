---
title: Creazione guidata progetto ATL
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.atl.com.overview
helpviewer_keywords:
- ATL projects, creating
- ATL Project Wizard
ms.assetid: 564d2aaf-5b8e-4c2a-a925-ca40a283ea34
ms.openlocfilehash: 384847738f5410d750d53d3125c18f6a5256cccf
ms.sourcegitcommit: da32511dd5baebe27451c0458a95f345144bd439
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2019
ms.locfileid: "65221253"
---
# <a name="atl-project-wizard"></a>Creazione guidata progetto ATL

La libreria ATL (Active Template) è un set di classi C++ basate su modelli che semplificano la scrittura di oggetti COM piccoli e veloci. La creazione guidata progetto ATL crea un progetto con le strutture per contenere gli oggetti COM.

## <a name="overview"></a>Panoramica

Questa pagina della procedura guidata descrive l'oggetto corrente [le impostazioni dell'applicazione per il progetto ATL](../../atl/reference/application-settings-atl-project-wizard.md) si sta creando. Per impostazione predefinita, il progetto presenta le seguenti impostazioni:

- Libreria a collegamento dinamico specifica che il server è una DLL e pertanto un server in-process.

- Consente di specificare che il progetto usi gli attributi con attributi.

Per modificare queste impostazioni predefinite, fare clic su **le impostazioni dell'applicazione** nella colonna sinistra della procedura guidata e apportare modifiche in questa pagina della procedura guidata progetto ATL.

Per informazioni sulle impostazioni di progetto predefinite, tra cui la selezione del set di caratteri e il collegamento impostazioni predefinite, vedere [configurazioni progetto ATL predefinite](../../atl/reference/default-atl-project-configurations.md).

Dopo aver creato un progetto ATL, è possibile aggiungere controlli o gli oggetti al progetto usando Visual C++ [creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md). È possibile apportare i seguenti tipi di miglioramenti apportati a un progetto ATL base mediante creazioni guidate codice:

- [Aggiungere l'oggetto e i controlli a un progetto ATL](../../atl/reference/adding-objects-and-controls-to-an-atl-project.md)

- [Aggiungere una nuova interfaccia in un progetto ATL](../../atl/reference/adding-a-new-interface-in-an-atl-project.md)

- [Aggiungere un componente COM+ 1.0 a un progetto ATL](../../atl/reference/adding-an-atl-com-plus-1-0-component.md)

Inoltre, considerare le seguenti attività quando si creano e ottimizzazione di un progetto ATL:

- [Rendere un oggetto ATL non creabile](../../atl/reference/making-an-atl-object-noncreatable.md)

- [Ottimizzazione del compilatore per un progetto ATL](../../atl/reference/specifying-compiler-optimization-for-an-atl-project.md)

È possibile specificare le proprietà del progetto (ad esempio, [se il collegamento statico a CRT](../../atl/programming-with-atl-and-c-run-time-code.md)) nel [le proprietà del progetto](../../build/reference/general-property-page-project.md) pagina ed è possibile impostare [configurazioni della build](/visualstudio/ide/understanding-build-configurations) per un Progetto ATL.

## <a name="see-also"></a>Vedere anche

[Progetti di Visual Studio - C++](../../build/creating-and-managing-visual-cpp-projects.md)<br/>
[C++tipi di progetto in Visual Studio](../../build/reference/visual-cpp-project-types.md)<br/>
[Nozioni fondamentali sugli oggetti COM ATL](../../atl/fundamentals-of-atl-com-objects.md)<br/>
[Programmazione con il codice runtime C e ATL](../../atl/programming-with-atl-and-c-run-time-code.md)<br/>
[Esercitazione](../../atl/active-template-library-atl-tutorial.md)

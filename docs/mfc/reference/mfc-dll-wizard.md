---
description: 'Ulteriori informazioni su: creazione guidata DLL MFC'
title: Procedura guidata DLL MFC
ms.date: 11/04/2016
f1_keywords:
- vc.appwiz.mfc.dll.overview
helpviewer_keywords:
- MFC DLLs [MFC], creating
- MFC DLL Wizard
- DLLs [MFC], MFC
- DLL wizard [MFC]
- MFC DLLs [MFC]
- DLLs [MFC], creating
ms.assetid: 4e936031-7e39-4f40-a295-42a09c5ff264
ms.openlocfilehash: 0f786255c22e644335c5154e0f14add59a2a418a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97219161"
---
# <a name="mfc-dll-wizard"></a>Procedura guidata DLL MFC

Quando si utilizza la creazione guidata DLL MFC per creare un progetto DLL MFC, si ottiene un'applicazione iniziale funzionante con funzionalità incorporate che, quando compilata, implementa le funzionalità di base di una [dll](../../build/dlls-in-visual-cpp.md). Il programma di avvio MFC include file di origine (con estensione cpp) C++, file di risorse (RC) e un file di progetto (con estensione vcxproj). Il codice generato in questi file di avvio è basato su MFC. Per informazioni più dettagliate, vedere i dettagli del file in Readme.txt generato per il progetto in Visual Studio, nonché [le classi e le funzioni generate dalla creazione guidata DLL MFC](../../mfc/reference/classes-and-functions-generated-by-the-mfc-dll-wizard.md)

## <a name="overview"></a>Panoramica

In questa pagina della procedura guidata vengono descritte le [impostazioni correnti dell'applicazione per il progetto DLL MFC](../../mfc/reference/application-settings-mfc-dll-wizard.md) che si sta creando. Per impostazione predefinita, il progetto viene creato come un normale progetto DLL MFC (Shared MFC) senza impostazioni aggiuntive.

Per modificare queste impostazioni predefinite, fare clic su **Impostazioni applicazione** nella colonna sinistra della procedura guidata e apportare modifiche in tale pagina della creazione guidata DLL MFC.

Dopo aver creato un progetto DLL MFC, è possibile aggiungere oggetti o controlli al progetto utilizzando Visual C++ [creazioni guidate codice](../../ide/adding-functionality-with-code-wizards-cpp.md).

È possibile eseguire le attività e i tipi di miglioramenti seguenti in un progetto DLL MFC di base:

- [Esportazione da una DLL](../../build/exporting-from-a-dll.md)

- [Collegare un eseguibile a una DLL](../../build/linking-an-executable-to-a-dll.md)

- [Inizializzare una DLL](../../build/run-time-library-behavior.md#initializing-a-dll)

## <a name="see-also"></a>Vedi anche

[Progetti di Visual Studio-C++](../../build/creating-and-managing-visual-cpp-projects.md)<br/>
[Pagine delle proprietà](../../build/reference/property-pages-visual-cpp.md)<br/>
[Impostare il compilatore e le proprietà di compilazione](../../build/working-with-project-properties.md)<br/>
[Classe MFC](../../mfc/reference/adding-an-mfc-class.md)<br/>
[Aggiunta di una funzione membro](../../ide/adding-a-member-function-visual-cpp.md)<br/>
[Implementazione di un'interfaccia](../../ide/implementing-an-interface-visual-cpp.md)<br/>

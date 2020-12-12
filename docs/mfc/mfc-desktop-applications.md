---
description: 'Altre informazioni su: applicazioni desktop MFC'
title: Applicazioni desktop MFC
ms.date: 07/28/2019
f1_keywords:
- MFC
helpviewer_keywords:
- libraries, MFC
- class libraries, MFC
- MFC, about MFC
ms.assetid: 7101cb18-a681-495c-8f2b-069ad20c72f7
ms.openlocfilehash: ac89ecfc603593a4328876bae061657fba26fed1
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97172791"
---
# <a name="mfc-desktop-applications"></a>Applicazioni desktop MFC

La libreria MFC (Microsoft Foundation Class) fornisce un wrapper orientato a oggetti su molte delle API Win32 e COM. Sebbene possa essere utilizzata anche per creare applicazioni desktop molto semplici, risulta maggiormente utile quando è necessario compilare interfacce utente più complesse che includono più controlli. È possibile usare MFC per creare applicazioni con interfacce utente in stile Office. Per la documentazione sulla piattaforma Windows, vedere la [documentazione di Windows](/windows/index). Per informazioni sulla compilazione di applicazioni Windows in C++ senza MFC, vedere [creare app desktop di Windows con l'API Win32](/windows/win32/index).

In Informazioni di riferimento su MFC vengono descritte le classi, le funzioni globali, le variabili globali e le macro che costituiscono la libreria Microsoft Foundation Class.

I singoli grafici della gerarchia inclusi con ogni classe sono utili per l'individuazione delle classi di base. In Riferimenti alla libreria MFC in genere non vengono descritte le funzioni membro ereditate o gli operatori ereditati. Per informazioni su queste funzioni, fare riferimento alle classi di base raffigurate nei diagrammi della gerarchia.

La documentazione per ogni classe include una panoramica della classe, un riepilogo dei membri in base alla categoria e argomenti per le funzioni membro, gli operatori di overload e i membri dati.

I membri della classe pubblici e protetti sono documentati solo quando vengono utilizzati normalmente nei programmi di applicazioni o in classi derivate. Vedere i file di intestazione delle classi per un elenco completo di membri delle classi.

> [!IMPORTANT]
> Le classi MFC e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nell'ambiente Windows Runtime.
>
> Le librerie MFC (DLL) per la codifica di caratteri multibyte (MBCS) non sono più inclusi in Visual Studio, ma sono disponibili come componente aggiuntivo di Visual Studio. Per ulteriori informazioni, vedere [componente aggiuntivo DLL MBCS MFC](mfc-mbcs-dll-add-on.md).

## <a name="in-this-section"></a>Contenuto della sezione

[Concetti](mfc-concepts.md)<br/>
Articoli concettuali su argomenti relativi a MFC.

[Grafico delle gerarchie](hierarchy-chart.md)<br/>
Rileva visivamente i dettagli delle relazioni tra classi nella libreria delle classi.

[Cenni preliminari sulle classi](class-library-overview.md)<br/>
Elenca le classi nella libreria MFC in base alla categoria.

[Procedure dettagliate](walkthroughs-mfc.md)<br/>
Contiene articoli che analizzano le diverse attività associate alle funzionalità della libreria MFC.

[Note tecniche](mfc-technical-notes.md)<br/>
Fornisce collegamenti ad argomenti specifici, scritti dal team di sviluppo MFC, sulla libreria di classi.

[Personalizzazione per MFC](customization-for-mfc.md)<br/>
Fornisce alcuni suggerimenti per personalizzare l'applicazione MFC.

[Classi](reference/mfc-classes.md)<br/>
Fornisce collegamenti e informazioni sul file di intestazione per le classi MFC.

[Classi interne](reference/internal-classes.md)<br/>
Utilizzate internamente in MCF. Per completezza, in questa sezione vengono descritte tali classi interne, che tuttavia non devono essere utilizzate direttamente nel codice.

[Macro e funzioni globali](reference/mfc-macros-and-globals.md)<br/>
Fornisce collegamenti alle macro e alle funzioni globali nella libreria MFC.

[Strutture, stili, callback e mappe messaggi](reference/structures-styles-callbacks-and-message-maps.md)<br/>
Fornisce collegamenti a strutture, stili, callback e mappe messaggi utilizzati dalla libreria MFC.

[Procedure guidate e finestre di dialogo MFC](reference/mfc-wizards-and-dialog-boxes.md)<br/>
Guida alle funzionalità di Visual Studio per la creazione di applicazioni MFC.

[Uso di file di risorse](../windows/working-with-resource-files.md)<br/>
Come usare file di risorse per gestire dati di interfaccia utente statici come le stringhe dell'interfaccia utente e il layout delle finestre di dialogo.

## <a name="related-sections"></a>Sezioni correlate

[Categorie del grafico della gerarchia](hierarchy-chart-categories.md)<br/>
Descrive il grafico della gerarchia MFC per categoria.

[Classi condivise ATL/MFC](../atl-mfc-shared/atl-mfc-shared-classes.md)<br/>
Fornisce collegamenti alle classi condivise da MFC e ATL.

[Esempi di MFC](../overview/visual-cpp-samples.md#mfc-samples)<br/>
Fornisce collegamenti a esempi che dimostrano come utilizzare MFC.

[Riferimento alle librerie di Visual C++](../standard-library/cpp-standard-library-reference.md)<br/>
Vengono forniti collegamenti alle diverse librerie disponibili in Visual C++, ad esempio ATL, MFC, modelli OLE DB, la libreria di runtime del linguaggio C e la libreria standard C++.

[Debug in Visual Studio](/visualstudio/debugger/debugging-in-visual-studio)<br/>
Vengono forniti collegamenti relativi all'utilizzo del debugger di Visual Studio per la correzione di errori logici nell'applicazione o nelle stored procedure.

## <a name="see-also"></a>Vedi anche

[MFC e ATL](mfc-and-atl.md)

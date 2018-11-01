---
title: Applicazioni desktop MFC
ms.date: 11/04/2016
f1_keywords:
- MFC
- mfc
helpviewer_keywords:
- libraries, MFC
- class libraries, MFC
- MFC, about MFC
ms.assetid: 7101cb18-a681-495c-8f2b-069ad20c72f7
ms.openlocfilehash: 9c72e9b4964aa76631b1b9d42bfbd158a2ae8fc8
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50604204"
---
# <a name="mfc-desktop-applications"></a>Applicazioni desktop MFC

La libreria MFC (Microsoft Foundation Class) fornisce un wrapper orientato a oggetti su molte delle API Win32 e COM. Sebbene possa essere utilizzata anche per creare applicazioni desktop molto semplici, risulta maggiormente utile quando è necessario compilare interfacce utente più complesse che includono più controlli. È possibile usare MFC per creare applicazioni con interfacce utente in stile Office.

In Informazioni di riferimento su MFC vengono descritte le classi, le funzioni globali, le variabili globali e le macro che costituiscono la libreria Microsoft Foundation Class.

I singoli grafici della gerarchia inclusi con ogni classe sono utili per l'individuazione delle classi di base. In Riferimenti alla libreria MFC in genere non vengono descritte le funzioni membro ereditate o gli operatori ereditati. Per informazioni su queste funzioni, fare riferimento alle classi di base raffigurate nei diagrammi della gerarchia.

La documentazione per ogni classe include una panoramica della classe, un riepilogo dei membri in base alla categoria e argomenti per le funzioni membro, gli operatori di overload e i membri dati.

I membri della classe pubblici e protetti sono documentati solo quando vengono utilizzati normalmente nei programmi di applicazioni o in classi derivate. Vedere i file di intestazione delle classi per un elenco completo di membri delle classi.

> [!IMPORTANT]
>  Le classi MFC e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nell'ambiente di Windows Runtime.
>
>  Le librerie MFC (DLL) per la codifica di caratteri multibyte (MBCS) non sono più inclusi in Visual Studio, ma sono disponibili come componente aggiuntivo di Visual Studio. Per altre informazioni, vedere [componente aggiuntivo DLL MBCS MFC](mfc-mbcs-dll-add-on.md).

## <a name="in-this-section"></a>In questa sezione

[Concetti](mfc-concepts.md)<br/>
Articoli concettuali su argomenti relativi a MFC.

[Grafico della gerarchia](hierarchy-chart.md)<br/>
Rileva visivamente i dettagli delle relazioni tra classi nella libreria delle classi.

[Panoramica della classe](class-library-overview.md)<br/>
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

[Finestre di dialogo e procedure guidate MFC](reference/mfc-wizards-and-dialog-boxes.md)<br/>
Guida alle funzionalità di Visual Studio per la creazione di applicazioni MFC.

[Uso di file di risorse](../windows/working-with-resource-files.md)<br/>
Come usare file di risorse per gestire dati di interfaccia utente statici come le stringhe dell'interfaccia utente e il layout delle finestre di dialogo.

## <a name="related-sections"></a>Sezioni correlate

[Categorie del grafico della gerarchia](hierarchy-chart-categories.md)<br/>
Descrive il grafico della gerarchia MFC per categoria.

[Classi condivise ATL/MFC](../atl-mfc-shared/atl-mfc-shared-classes.md)<br/>
Fornisce collegamenti alle classi condivise da MFC e ATL.

[Esempi di MFC](../visual-cpp-samples.md)<br/>
Fornisce collegamenti a esempi che dimostrano come utilizzare MFC.

[Riferimento alle librerie di Visual C++](../standard-library/cpp-standard-library-reference.md)<br/>
Vengono forniti collegamenti alle diverse librerie disponibili in Visual C++, ad esempio ATL, MFC, modelli OLE DB, la libreria di runtime del linguaggio C e la libreria standard C++.

[Debug in Visual Studio](/visualstudio/debugger/debugging-in-visual-studio.md)<br/>
Vengono forniti collegamenti relativi all'utilizzo del debugger di Visual Studio per la correzione di errori logici nell'applicazione o nelle stored procedure.

## <a name="see-also"></a>Vedere anche

[MFC e ATL](mfc-and-atl.md)

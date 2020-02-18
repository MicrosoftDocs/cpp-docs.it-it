---
title: File di risorse (C++)
ms.date: 05/14/2019
helpviewer_keywords:
- resource files
- resources [C++]
ms.assetid: 338a4a0f-0c62-4ef1-a34f-5d86262d93a4
ms.openlocfilehash: 16759a242325b6a8e5f829f719ce3e505b03c2e3
ms.sourcegitcommit: 7bea0420d0e476287641edeb33a9d5689a98cb98
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/17/2020
ms.locfileid: "77415851"
---
# <a name="resource-files-c"></a>File di risorse (C++)

Le risorse sono elementi dell'interfaccia che consentono all'utente di visualizzare le informazioni. Bitmap, icone, barre degli strumenti e cursori sono tutte risorse. Alcune risorse possono eseguire un'azione, ad esempio la selezione di una voce da un menu o l'immissione di dati in una finestra di dialogo.

Per altre informazioni, vedere [Uso delle risorse](../../windows/working-with-resource-files.md).

|Nome file|Directory|Esplora soluzioni|Descrizione|
|---------------|------------------------|--------------------------------|-----------------|
|*Projname*.rc|*Projname*|File di origine|File script di risorsa per il progetto. Il file di script di risorsa contiene i seguenti elementi, a seconda del tipo di progetto, e il supporto selezionato per il progetto, ad esempio le barre degli strumenti, le finestre di dialogo o il linguaggio HTML:<br /><br />- Definizione predefinita di menu.<br />- Tabelle di stringhe e tasti di scelta rapida.<br />- Finestra di dialogo **Informazioni** predefinita.<br />- Altre finestre di dialogo.<br />- File icona (res\\*Projname*.ico).<br />- Informazioni sulla versione.<br />- Bitmap.<br />- Barra degli strumenti.<br />- File HTML.<br /><br /> Il file di risorse include il file Afxres.rc per le risorse standard di Microsoft Foundation Class.|
|Resource.h|*Projname*|File di intestazione|File di intestazione delle risorse che include le definizioni per le risorse usate dal progetto.|
|*Projname*.rc2|*Projname*\res|File di origine|File di script contenente le risorse aggiuntive usate dal progetto. È possibile includere il file RC2 sotto il file RC del progetto.<br /><br /> Un file RC2 è utile per includere le risorse usate da progetti diversi. Anziché creare le stesse risorse più volte per progetti diversi, è possibile inserirle in un file RC2 e includere il file RC2 nel file RC principale.|
|*Projname*.def|*Projname*|File di origine|File di definizione del modulo per un progetto DLL. Per un controllo, specifica il nome e la descrizione del controllo, nonché le dimensioni dell'heap di runtime.|
|*Projname*.ico|*Projname*\res|File di risorse|File dell'icona per il progetto o controllo. Questa icona viene visualizzata quando l'applicazione è ridotta a icona. Viene usata anche nella casella **Informazioni** dell'applicazione. Per impostazione predefinita, MFC specifica l'icona MFC e ATL l'icona ATL.|
|*Projname*Doc.ico|*Projname*\res|File di risorse|File dell'icona per un progetto MFC che include il supporto per l'architettura documento/visualizzazione.|
|Toolbar.bmp|*Projname*\res|File di risorse|File di bitmap che rappresenta l'applicazione o il controllo in una barra degli strumenti o una tavolozza. Questa bitmap è inclusa nel file di risorse del progetto. La barra degli strumenti e la barra di stato iniziali vengono costruite nella classe **CMainFrame**.|
|ribbon.mfcribbon-ms|*Projname*\res|File di risorse|File di risorse contenente il codice XML che definisce i pulsanti, i controlli e gli attributi della barra multifunzione. Per altre informazioni, vedere [Ribbon Designer (MFC)](../../mfc/ribbon-designer-mfc.md).|

## <a name="see-also"></a>Vedere anche

[Tipi di file creati per i progetti di Visual Studio C++](file-types-created-for-visual-cpp-projects.md)

---
title: Pagina delle proprietà dello strumento generatore di documenti XML
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCXDCMakeTool.ValidateIntelliSense
- VC.Project.VCXDCMakeTool.SuppressStartupBanner
- VC.Project.VCXDCMakeTool.DocumentLibraryDependencies
- VC.Project.VCXDCMakeTool.OutputDocumentFile
- VC.Project.VCXDCMakeTool.AdditionalDocumentFiles
ms.assetid: 645912b5-197a-4c36-ba58-64df09444ca0
ms.openlocfilehash: 3e97aa61715f0cda8e339a1aabc8e947170b2e90
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50594233"
---
# <a name="xml-document-generator-tool-property-pages"></a>Pagina delle proprietà dello strumento generatore di documenti XML

La pagina delle proprietà Strumento Generatore di documenti XML espone la funzionalità di xdcmake.exe. xdcmake.exe unisce file con estensione xdc a un file con estensione xml quando il codice sorgente contiene commenti ai documenti ed è specificato [/doc (Elabora i commenti per la documentazione) (C/C++)](../build/reference/doc-process-documentation-comments-c-cpp.md). Per informazioni sull'aggiunta di commenti sulla documentazione nel codice sorgente, vedere [Tag consigliati per i commenti relativi alla documentazione](../ide/recommended-tags-for-documentation-comments-visual-cpp.md).

> [!NOTE]
>  Le opzioni di xdcmake.exe nell'ambiente di sviluppo (pagine delle proprietà) sono diverse rispetto alle opzioni di quando xdcmake.exe è usato nella riga di comando. Per informazioni sull'uso di xdcmake.exe nella riga di comando, vedere [Riferimento a XDCMake](../ide/xdcmake-reference.md).

## <a name="uielement-list"></a>Elenco UIElement

- **Non visualizzare messaggio di avvio**

   Non visualizza le informazioni sul copyright.

- **File di documentazione aggiuntivi**

   Directory aggiuntive in cui si vuole che il sistema del progetto esegua la ricerca di file con estensione xdc. xdcmake eseguirà sempre la ricerca di file con estensione xdc generati dal progetto. È possibile specificare più directory.

- **File di documento di output**

   Nome e percorso della directory che contiene il file di output con estensione xml. Per informazioni sull'uso di macro per specificare i percorsi delle directory, vedere [Macro comuni per i comandi e le proprietà di compilazione](../ide/common-macros-for-build-commands-and-properties.md).

- **Dipendenze raccolte documenti**

   Se il progetto dipende da un progetto con estensione lib nella soluzione, è possibile elaborare file con estensione xdc dal progetto lib nei file con estensione xml per il progetto corrente.

## <a name="see-also"></a>Vedere anche

[Pagine delle proprietà](../ide/property-pages-visual-cpp.md)<br>
[Pagine delle proprietà](../ide/property-pages-visual-cpp.md)
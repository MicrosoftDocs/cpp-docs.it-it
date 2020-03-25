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
ms.openlocfilehash: 9f10ddf98c238120750e72644779a6ad74af2d1e
ms.sourcegitcommit: 857fa6b530224fa6c18675138043aba9aa0619fb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/24/2020
ms.locfileid: "80171632"
---
# <a name="xml-document-generator-tool-property-pages"></a>Pagina delle proprietà dello strumento generatore di documenti XML

La pagina delle proprietà Strumento Generatore di documenti XML espone la funzionalità di xdcmake.exe. xdcmake.exe unisce file con estensione xdc a un file con estensione xml quando il codice sorgente contiene commenti ai documenti ed è specificato [/doc (Elabora i commenti per la documentazione) (C/C++)](doc-process-documentation-comments-c-cpp.md). Per informazioni sull'aggiunta di commenti sulla documentazione nel codice sorgente, vedere [Tag consigliati per i commenti relativi alla documentazione](recommended-tags-for-documentation-comments-visual-cpp.md).

> [!NOTE]
>  Le opzioni di xdcmake.exe nell'ambiente di sviluppo (pagine delle proprietà) sono diverse rispetto alle opzioni di quando xdcmake.exe è usato nella riga di comando. Per informazioni sull'uso di xdcmake.exe nella riga di comando, vedere [Riferimento a XDCMake](xdcmake-reference.md).

## <a name="uielement-list"></a>Elenco degli elementi di interfaccia

- **Non visualizzare messaggio di avvio**

   Non visualizza le informazioni sul copyright.

- **File di documentazione aggiuntivi**

   Directory aggiuntive in cui si vuole che il sistema del progetto esegua la ricerca di file con estensione xdc. xdcmake eseguirà sempre la ricerca di file con estensione xdc generati dal progetto. È possibile specificare più directory.

- **File di documento di output**

   Nome e percorso della directory che contiene il file di output con estensione xml. Per informazioni sull'uso delle macro per specificare i percorsi di directory, vedere [macro comuni per i comandi e le proprietà di compilazione](common-macros-for-build-commands-and-properties.md) .

- **Dipendenze raccolte documenti**

   Se il progetto dipende da un progetto con estensione lib nella soluzione, è possibile elaborare file con estensione xdc dal progetto lib nei file con estensione xml per il progetto corrente.

## <a name="see-also"></a>Vedere anche

[C++riferimento alla pagina delle proprietà del progetto](property-pages-visual-cpp.md)

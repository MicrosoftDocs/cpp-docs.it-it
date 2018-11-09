---
title: Avanzate, Strumento Manifesto, Proprietà di configurazione, finestra di dialogo Pagine delle proprietà di &lt;nomeprogetto&gt;
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCManifestTool.KeyFile
- VC.Project.VCManifestTool.UpdateFileHashes
- VC.Project.VCManifestTool.UpdateFileHashesSearchPath
- VC.Project.VCManifestTool.ValidateSignature
- VC.Project.VCManifestTool.KeyContainer
ms.assetid: 3d587366-05ea-4956-a978-313069660735
ms.openlocfilehash: 10da66c690106255d34c82b066f3450c5cc8a37a
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50530559"
---
# <a name="advanced-manifest-tool-configuration-properties-ltprojectnamegt-property-pages-dialog-box"></a>Avanzate, Strumento Manifesto, Proprietà di configurazione, finestra di dialogo Pagine delle proprietà di &lt;nomeprogetto&gt;

Usare questa finestra di dialogo per specificare opzioni avanzate per [Mt.exe](https://msdn.microsoft.com/library/aa375649).

Per accedere alla finestra di dialogo di questa pagina delle proprietà, aprire le pagine delle proprietà per il progetto o la finestra delle proprietà. Espandere il nodo **Strumento Manifesto** in **Proprietà di configurazione**, quindi selezionare **Avanzate**.

## <a name="uielement-list"></a>Elenco UIElement

- **Aggiorna hash dei file**

   Usa l'opzione /hashupdate per specificare che lo strumento Manifesto calcolerà l'hash dei file specificati negli elementi `<file>`, quindi aggiornerà gli attributi hash usando il valore calcolato.

- **Percorso di ricerca aggiornamento hash dei file**

   Specifica il percorso di ricerca dei file che fanno riferimento agli elementi `<file>`. Questa opzione usa anche l'opzione /hashupdate.

## <a name="see-also"></a>Vedere anche

[\<Elemento file>](/visualstudio/deployment/file-element-clickonce-application)<br>
[ClickOnce Application Manifest](/visualstudio/deployment/clickonce-application-manifest)<br>
[Pagine delle proprietà Strumento Manifesto](../ide/manifest-tool-property-pages.md)<br>
[Utilizzo di Proprietà del progetto](../ide/working-with-project-properties.md)
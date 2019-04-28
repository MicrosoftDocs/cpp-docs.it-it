---
title: Avanzate, strumento manifesto, proprietà di configurazione, &lt;NomeProgetto > finestra di dialogo Pagine delle proprietà
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCManifestTool.KeyFile
- VC.Project.VCManifestTool.UpdateFileHashes
- VC.Project.VCManifestTool.UpdateFileHashesSearchPath
- VC.Project.VCManifestTool.ValidateSignature
- VC.Project.VCManifestTool.KeyContainer
ms.assetid: 3d587366-05ea-4956-a978-313069660735
ms.openlocfilehash: a20e474deb69099c53ad656dda5406e7161a1695
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62295138"
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
[Pagine delle proprietà Strumento Manifesto](manifest-tool-property-pages.md)<br>
[Impostare le proprietà del compilatore e di compilazione C++ in Visual Studio](../working-with-project-properties.md)

---
title: Avanzate, Strumento Manifesto, Proprietà di configurazione, finestra di dialogo Pagine delle proprietà di &lt;nomeprogetto&gt; | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
f1_keywords:
- VC.Project.VCManifestTool.KeyFile
- VC.Project.VCManifestTool.UpdateFileHashes
- VC.Project.VCManifestTool.UpdateFileHashesSearchPath
- VC.Project.VCManifestTool.ValidateSignature
- VC.Project.VCManifestTool.KeyContainer
dev_langs:
- C++
ms.assetid: 3d587366-05ea-4956-a978-313069660735
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 47d4dc3ab325a7346d0e787a15d69d646896827d
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33326937"
---
# <a name="advanced-manifest-tool-configuration-properties-ltprojectnamegt-property-pages-dialog-box"></a>Avanzate, Strumento Manifesto, Proprietà di configurazione, finestra di dialogo Pagine delle proprietà di &lt;nomeprogetto&gt;
Usare questa finestra di dialogo per specificare opzioni avanzate per [Mt.exe](http://msdn.microsoft.com/library/aa375649).  
  
 Per accedere alla finestra di dialogo di questa pagina delle proprietà, aprire le pagine delle proprietà per il progetto o la finestra delle proprietà. Espandere il nodo **Strumento Manifesto** in **Proprietà di configurazione**, quindi selezionare **Avanzate**.  
  
## <a name="uielement-list"></a>Elenco UIElement  
 **Aggiorna hash dei file**  
 Usa l'opzione /hashupdate per specificare che lo strumento Manifesto calcolerà l'hash dei file specificati negli elementi `<file>`, quindi aggiornerà gli attributi hash usando il valore calcolato.  
  
 **Percorso di ricerca aggiornamento hash dei file**  
 Specifica il percorso di ricerca dei file che fanno riferimento agli elementi `<file>`. Questa opzione usa anche l'opzione /hashupdate.  
  
## <a name="see-also"></a>Vedere anche  
 [\<Elemento file>](/visualstudio/deployment/file-element-clickonce-application)   
 [Manifesto dell'applicazione ClickOnce](/visualstudio/deployment/clickonce-application-manifest)   
 [Pagine delle proprietà dello strumento Manifesto](../ide/manifest-tool-property-pages.md)   
 [Utilizzo di Proprietà del progetto](../ide/working-with-project-properties.md)   
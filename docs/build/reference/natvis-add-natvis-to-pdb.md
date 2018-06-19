---
title: -NATVIS (aggiungere Natvis PDB) | Documenti Microsoft
ms.date: 08/10/2017
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /natvis
- VC.Project.VCLinkerTool.ImportLIbrary
dev_langs:
- C++
helpviewer_keywords:
- NATVIS linker option
- /NATVIS linker option
- -NATVIS linker option
- Add Natvis file to PDB
ms.assetid: 8747fc0c-701a-4796-bb4d-818ab4465cca
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: a3bce34095aec1558d2466447770a8ac4c46528f
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32377102"
---
# <a name="natvis-add-natvis-to-pdb"></a>/ NATVIS (aggiungere Natvis PDB)
  
> / NATVIS:*filename*  
  
## <a name="parameters"></a>Parametri  
  
*filename*  
Un file Natvis da aggiungere al file PDB. Incorpora le visualizzazioni debugger nel file Natvis in file PDB.  
  
## <a name="remarks"></a>Note  
  
L'opzione /NATVIS incorpora le visualizzazioni debugger definite nel file Natvis *filename* nel file PDB generato dal collegamento. In questo modo il debugger visualizzare le visualizzazioni in modo indipendente da file natvis. È possibile utilizzare più opzioni /NATVIS per incorporare più di un file Natvis nel file PDB generato.  
  
LINK Ignora /NATVIS quando un file PDB non viene creato utilizzando un [/debug](../../build/reference/debug-generate-debug-info.md) opzione. Per informazioni sulla creazione e l'utilizzo di file natvis, vedere [creare viste personalizzate di oggetti nativi nel debugger di Visual Studio](/visualstudio/debugger/create-custom-views-of-native-objects).  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **riga di comando** pagina delle proprietà di **Linker** cartella.  
  
3.  Aggiungere l'opzione /NATVIS il **opzioni aggiuntive** casella di testo.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Questa opzione non è disponibile un equivalente a livello di codice.  
  
## <a name="see-also"></a>Vedere anche  
  
[Creare viste personalizzate di oggetti nativi nel debugger di Visual Studio](/visualstudio/debugger/create-custom-views-of-native-objects)  
[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)  
[Opzioni del linker](../../build/reference/linker-options.md)
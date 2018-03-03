---
title: -PGD (specifica il Database per le ottimizzazioni PGO) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCLinkerTool.ProfileGuidedDatabase
dev_langs:
- C++
helpviewer_keywords:
- -PGD linker option
- /PGD linker option
ms.assetid: 9f312498-493b-461f-886f-92652257e443
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: cb61395d9f3b8c98e17e3683a7c3897b9315d78b
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="pgd-specify-database-for-profile-guided-optimizations"></a>/PGD (Specifica il database per le ottimizzazioni PGO)
/PGD:`filename`  
  
## <a name="remarks"></a>Note  
 dove:  
  
 `filename`  
 Specifica il nome del file pgd che verrà utilizzato per memorizzare informazioni sul programma in esecuzione.  
  
## <a name="remarks"></a>Note  
 Quando si utilizza [/LTCG: PGINSTRUMENT](../../build/reference/ltcg-link-time-code-generation.md), utilizzare /PGD per specificare un nome non predefinito o un percorso per il file pgd. Se non si specifica /PGD, il nome del file pgd sarà lo stesso come nome file di output (.exe o DLL) e verrà creato nella stessa directory da cui è stato richiamato il collegamento.  
  
 Quando si utilizza /LTCG: PGOPTIMIZE, utilizzare /PGD per specificare il nome del file pgd da utilizzare per creare l'immagine ottimizzata.  
  
 Per ulteriori informazioni, vedere [ottimizzazione PGO](../../build/reference/profile-guided-optimizations.md).  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Espandere il **le proprietà di configurazione** nodo.  
  
3.  Espandere il **Linker** nodo.  
  
4.  Selezionare il **ottimizzazione** pagina delle proprietà.  
  
5.  Modificare il **Database PGO** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ProfileGuidedDatabase%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)
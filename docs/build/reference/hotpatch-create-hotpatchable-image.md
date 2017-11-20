---
title: -hotpatch (Crea immagine hot patch) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /hotpatch
- VC.Project.VCCLCompilerTool.CreateHotpatchableImage
dev_langs: C++
helpviewer_keywords:
- hot patching
- -hotpatch compiler option [C++]
- /hotpatch compiler option [C++]
- hotpatching
ms.assetid: aad539b6-c053-4c78-8682-853d98327798
caps.latest.revision: "18"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: fb5eaebb9ee8de01a9b2418333e2959cd5b4a21f
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="hotpatch-create-hotpatchable-image"></a>/hotpatch (Crea immagine con funzionalità di patch a caldo)
Prepara un'immagine per l'applicazione di una patch a caldo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
/hotpatch  
```  
  
## <a name="remarks"></a>Note  
 Quando **/hotpatch** viene utilizzato in una compilazione, il compilatore garantisce che la prima istruzione di ciascuna funzione sia almeno a due byte, che è necessario per l'applicazione di patch a caldo.  
  
 Per completare la preparazione di una patch a caldo un'immagine, dopo aver utilizzato **/hotpatch** per compilare, è necessario utilizzare [/FUNCTIONPADMIN (Crea immagine di patch a caldo)](../../build/reference/functionpadmin-create-hotpatchable-image.md) da collegare. Quando si compila e si collega un'immagine utilizzando una singola chiamata di cl.exe, **/hotpatch** implica **/functionpadmin**.  
  
 Poiché le istruzioni sono sempre due byte o più grandi nell'architettura ARM e poiché compilazione x64 viene sempre considerata come se **/hotpatch** è stato specificato, non è necessario specificare **/hotpatch** quando la compilazione di queste destinazioni; Tuttavia, è necessario comunque il collegamento utilizzando **/functionpadmin** per creare un'immagine. Il **/hotpatch** la compilazione del compilatore opzione solo interessa x86.  
  
### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).  
  
2.  Selezionare il **C/C++** cartella.  
  
3.  Selezionare il **riga di comando** pagina delle proprietà.  
  
4.  Aggiungere l'opzione del compilatore di **opzioni aggiuntive** casella.  
  
### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## <a name="guidance"></a>Materiale sussidiario  
 Per ulteriori informazioni sulla gestione degli aggiornamenti, vedere "Linee guida per aggiornare gestione della sicurezza" all'indirizzo [http://www.microsoft.com/technet/security/guidance/PatchManagement.mspx](http://www.microsoft.com/technet/security/guidance/PatchManagement.mspx).  
  
## <a name="see-also"></a>Vedere anche  
 [Opzioni del compilatore](../../build/reference/compiler-options.md)   
 [Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
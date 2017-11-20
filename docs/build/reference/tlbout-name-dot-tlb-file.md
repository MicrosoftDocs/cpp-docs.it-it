---
title: -TLBOUT (nome. File TLB) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- VC.Project.VCLinkerTool.TypeLibraryFile
- /tlbout
dev_langs: C++
helpviewer_keywords:
- tlb files, renaming
- TLBOUT linker option
- /TLBOUT linker option
- .tlb files, renaming
- -TLBOUT linker option
ms.assetid: 0df6d078-2e48-46c9-a1a5-02674d85dce8
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: c38710707397a5990266544d88a252daf8c40151
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="tlbout-name-tlb-file"></a>/TLBOUT (Assegna un nome al file TLB)
```  
/TLBOUT:[path\]filename  
```  
  
## <a name="remarks"></a>Note  
 dove:  
  
 *path*  
 Specifica un percorso assoluto o relativo per in cui deve essere creato il file con estensione tlb.  
  
 *filename*  
 Specifica il nome del file tlb creato dal compilatore MIDL. Nessuna estensione di file è utilizzata; specificare *filename*tlb se si desidera che l'estensione tlb.  
  
## <a name="remarks"></a>Note  
 L'opzione /TLBOUT specifica il nome e l'estensione del file tlb.  
  
 Il compilatore MIDL viene chiamato dal linker Visual C++, quando il collegamento di progetti che hanno il [modulo](../../windows/module-cpp.md) attributo.  
  
 Se non è specificata l'opzione /TLBOUT, al file tlb verrà visualizzato il nome di [/IDLOUT](../../build/reference/idlout-name-midl-output-files.md) *filename*. Se /IDLOUT non è specificato, verrà chiamato il file con estensione tlb vc70.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic su di **IDL incorporato** pagina delle proprietà.  
  
4.  Modificare il **libreria dei tipi** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
1.  Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TypeLibraryFile%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)   
 [/IGNOREIDL (non elabora gli attributi in MIDL)](../../build/reference/ignoreidl-don-t-process-attributes-into-midl.md)   
 [/MIDL (Specifica opzioni della riga di comando MIDL)](../../build/reference/midl-specify-midl-command-line-options.md)   
 [Compilazione di un programma con attributi](../../windows/building-an-attributed-program.md)
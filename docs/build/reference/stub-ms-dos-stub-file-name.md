---
title: -STUB (nome File Stub MS-DOS) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /stub
- VC.Project.VCLinkerTool.DosStub
dev_langs:
- C++
helpviewer_keywords:
- Win32 [C++], attaching MS-DOS stub program
- STUB linker option
- MS-DOS stub file name linker option
- /STUB linker option
- Windows API [C++], attaching MS-DOS stub program
- -STUB linker option
ms.assetid: 65221ffe-4f9a-4a14-ac69-3cfb79b40b5f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 4302040f7d18dcffc07ddd054c34b62c22e400d2
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32379016"
---
# <a name="stub-ms-dos-stub-file-name"></a>/STUB (nome file stub MS-DOS)
```  
/STUB:filename  
```  
  
## <a name="remarks"></a>Note  
 dove:  
  
 *filename*  
 Un'applicazione MS-DOS.  
  
## <a name="remarks"></a>Note  
 L'opzione /STUB connette un programma stub MS-DOS a un programma Win32.  
  
 Se il file viene eseguito in MS-DOS, viene richiamato un programma stub. In genere viene visualizzato un messaggio appropriato. Tuttavia, qualsiasi applicazione MS-DOS può essere un programma stub.  
  
 Specificare un *filename* per il programma stub dopo i due punti (:) nella riga di comando. I controlli del linker *filename* e viene visualizzato un messaggio di errore se il file non è un file eseguibile. Il programma deve essere un file .exe. un file. com non è valido per un programma stub.  
  
 Se si omette questa opzione, il linker collega un programma stub predefinito che rilascia il messaggio seguente:  
  
```  
This program cannot be run in MS-DOS mode.  
```  
  
 Quando si compila un driver di dispositivo virtuale, *filename* consente all'utente di specificare un nome di file che contiene una struttura IMAGE_DOS_HEADER (definita in WINNT. H) da utilizzare in VXD, anziché l'intestazione predefinita.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic sulla pagina delle proprietà **Riga di comando** .  
  
4.  Digitare l'opzione nel **opzioni aggiuntive** casella.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)
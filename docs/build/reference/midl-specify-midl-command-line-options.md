---
title: -MIDL (Specifica opzioni della riga di comando MIDL) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /midl
- VC.Project.VCLinkerTool.MidlCommandFile
dev_langs:
- C++
helpviewer_keywords:
- -MIDL linker option
- MIDL
- /MIDL linker option
- MIDL linker option
- MIDL, command line options
ms.assetid: 22dc259e-b34c-4ed3-a380-4beb734482c1
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 7b3f20fddd657d1e5e57caf65ecc8e2c52afbf12
ms.sourcegitcommit: e9ce38decc9f986edab5543de3464b11ebccb123
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/13/2018
ms.locfileid: "42572265"
---
# <a name="midl-specify-midl-command-line-options"></a>/MIDL (Specifica opzioni della riga di comando MIDL)
```  
/MIDL:@file  
```  
  
## <a name="remarks"></a>Note  
 dove:  
  
 `file`  
 Il nome del file che contiene [opzioni della riga di comando MIDL](http://msdn.microsoft.com/library/windows/desktop/aa366839).  
  
## <a name="remarks"></a>Note  
 Tutte le opzioni per la conversione di un file IDL in un file TLB devono essere assegnate in `file`; Opzioni della riga di comando di MIDL non è possibile specificare nella riga di comando del linker. Se /MIDL non viene specificato, il compilatore MIDL verrà richiamato con solo il nome del file IDL e senza altre opzioni.  
  
 Il file deve contenere un'opzione della riga di comando MIDL per riga.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Scegliere il **Linker** cartella.  
  
3.  Scegliere il **IDL incorporato** pagina delle proprietà.  
  
4.  Modificare il **comandi MIDL** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MidlCommandFile%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)   
 [/IDLOUT (assegna un nome file di Output MIDL)](../../build/reference/idlout-name-midl-output-files.md)   
 [/IGNOREIDL (non elabora gli attributi in MIDL)](../../build/reference/ignoreidl-don-t-process-attributes-into-midl.md)   
 [/TLBOUT (nome. Al File TLB)](../../build/reference/tlbout-name-dot-tlb-file.md)   
 [Compilazione di un programma con attributi](../../windows/building-an-attributed-program.md)
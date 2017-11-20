---
title: -IDLOUT (nome file di Output MIDL) | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- /idlout
- VC.Project.VCLinkerTool.MergedIDLBaseFileName
dev_langs: C++
helpviewer_keywords:
- MIDL, output file names
- .idl files, path
- MIDL
- /IDLOUT linker option
- IDL files, path
- -IDLOUT linker option
- IDLOUT linker option
ms.assetid: 10d00a6a-85b4-4de1-8732-e422c6931509
caps.latest.revision: "10"
author: corob-msft
ms.author: corob
manager: ghogen
ms.openlocfilehash: 83fdc3ce9436a4e3659074236985e101f8836069
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="idlout-name-midl-output-files"></a>/IDLOUT (Assegna un nome ai file di output MIDL)
```  
/IDLOUT:[path\]filename  
```  
  
## <a name="parameters"></a>Parametri  
 *path*  
 Specifica un percorso assoluto o relativo. Se si specifica un percorso, si interessano solo il percorso del file IDL. tutti gli altri file vengono inseriti nella directory del progetto.  
  
 *filename*  
 Specifica il nome del file idl creato dal compilatore MIDL. Nessuna estensione di file è utilizzata; specificare *filename*idl se si desidera che un file IDL.  
  
## <a name="remarks"></a>Note  
 L'opzione /IDLOUT specifica il nome e l'estensione del file IDL.  
  
 Il compilatore MIDL viene chiamato dal linker Visual C++, quando il collegamento di progetti che hanno il [modulo](../../windows/module-cpp.md) attributo.  
  
 /IDLOUT specifica inoltre i nomi dei file degli altri file di output associati al compilatore MIDL:  
  
-   *nome del file*tlb  
  
-   *nome del file*_p.c  
  
-   *nome del file*i. c  
  
-   *nome del file*. h  
  
 *nome del file* è il parametro passato a /IDLOUT. Se [/TLBOUT](../../build/reference/tlbout-name-dot-tlb-file.md) è specificato, il file con estensione tlb verrà assegnato il nome da /TLBOUT *filename*.  
  
 Se si specifica né /IDLOUT né /TLBOUT, il linker creerà vc70, vc70.idl, vc70_p, vc70_i.c e vc70.  
  
### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio  
  
1.  Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).  
  
2.  Fare clic su di **Linker** cartella.  
  
3.  Fare clic su di **IDL incorporato** pagina delle proprietà.  
  
4.  Modificare il **nome File Base IDL unite** proprietà.  
  
### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice  
  
-   Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MergedIDLBaseFileName%2A>.  
  
## <a name="see-also"></a>Vedere anche  
 [Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
 [Opzioni del linker](../../build/reference/linker-options.md)   
 [/IGNOREIDL (non elabora gli attributi in MIDL)](../../build/reference/ignoreidl-don-t-process-attributes-into-midl.md)   
 [/MIDL (Specifica opzioni della riga di comando MIDL)](../../build/reference/midl-specify-midl-command-line-options.md)   
 [Compilazione di un programma con attributi](../../windows/building-an-attributed-program.md)
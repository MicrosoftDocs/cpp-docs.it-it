---
title: /IDLOUT (Assegna un nome ai file di output MIDL)
ms.date: 11/04/2016
f1_keywords:
- /idlout
- VC.Project.VCLinkerTool.MergedIDLBaseFileName
helpviewer_keywords:
- MIDL, output file names
- .idl files, path
- MIDL
- /IDLOUT linker option
- IDL files, path
- -IDLOUT linker option
- IDLOUT linker option
ms.assetid: 10d00a6a-85b4-4de1-8732-e422c6931509
ms.openlocfilehash: b21e8eb266de9a0baa0512a82acb0ae8a9f650a5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50500425"
---
# <a name="idlout-name-midl-output-files"></a>/IDLOUT (Assegna un nome ai file di output MIDL)

```
/IDLOUT:[path\]filename
```

## <a name="parameters"></a>Parametri

*path*<br/>
Specifica un percorso assoluto o relativo. Specificando un percorso, si interessano solo il percorso del file IDL. tutti gli altri file vengono inseriti nella directory del progetto.

*filename*<br/>
Specifica il nome del file con estensione idl creato dal compilatore MIDL. Non presuppone alcuna estensione di file; specificare *filename*idl se si desidera che un file IDL.

## <a name="remarks"></a>Note

L'opzione /IDLOUT specifica il nome e l'estensione del file IDL.

Il compilatore MIDL viene chiamato dal linker di Visual C++ quando si collegano i progetti con la [modulo](../../windows/module-cpp.md) attributo.

/IDLOUT specifica anche i nomi dei file degli altri file di output associati al compilatore MIDL:

- *nome del file*tlb

- *nome del file*_p.c

- *nome del file*i. c

- *nome del file*. h

*nome del file* è il parametro passato a /IDLOUT. Se [/TLBOUT](../../build/reference/tlbout-name-dot-tlb-file.md) è specificato, il file con estensione tlb otterrà il nome da /TLBOUT *filename*.

Se si specifica né /IDLOUT né /TLBOUT, il linker creerà vc70 vc70.idl, vc70_p, vc70_i.c e vc70.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **IDL incorporato** pagina delle proprietà.

1. Modificare il **Merge di nome File Base IDL** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MergedIDLBaseFileName%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)<br/>
[/IGNOREIDL (non elabora gli attributi in MIDL)](../../build/reference/ignoreidl-don-t-process-attributes-into-midl.md)<br/>
[/MIDL (specifica opzioni della riga di comando MIDL)](../../build/reference/midl-specify-midl-command-line-options.md)<br/>
[Compilazione di un programma con attributi](../../windows/building-an-attributed-program.md)
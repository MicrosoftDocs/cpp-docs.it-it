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
ms.openlocfilehash: 3816bb85cb3c711075e3fefeec2d706c2f8cc2ff
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57821469"
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

Il compilatore MIDL viene chiamato dal linker MSVC durante il collegamento progetti con la [modulo](../../windows/module-cpp.md) attributo.

/IDLOUT specifica anche i nomi dei file degli altri file di output associati al compilatore MIDL:

- *filename*.tlb

- *filename*_p.c

- *filename*_i.c

- *filename*.h

*nome del file* è il parametro passato a /IDLOUT. Se [/TLBOUT](tlbout-name-dot-tlb-file.md) è specificato, il file con estensione tlb otterrà il nome da /TLBOUT *filename*.

Se si specifica né /IDLOUT né /TLBOUT, il linker creerà vc70 vc70.idl, vc70_p, vc70_i.c e vc70.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **IDL incorporato** pagina delle proprietà.

1. Modificare il **Merge di nome File Base IDL** proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MergedIDLBaseFileName%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)<br/>
[/IGNOREIDL (non elabora gli attributi in MIDL)](ignoreidl-don-t-process-attributes-into-midl.md)<br/>
[/MIDL (specifica opzioni della riga di comando MIDL)](midl-specify-midl-command-line-options.md)<br/>
[Compilazione di un programma con attributi](../../windows/building-an-attributed-program.md)

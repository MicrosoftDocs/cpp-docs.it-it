---
description: Altre informazioni su:/IDLOUT (assegnare un nome ai file di output MIDL)
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
ms.openlocfilehash: 9835721d3e9b376feca51d87d375efa79dc43df7
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97199844"
---
# <a name="idlout-name-midl-output-files"></a>/IDLOUT (Assegna un nome ai file di output MIDL)

```
/IDLOUT:[path\]filename
```

## <a name="parameters"></a>Parametri

*path*<br/>
Specifica del percorso assoluto o relativo. Specificando un percorso, si influisce solo sul percorso di un file con estensione IDL. tutti gli altri file vengono inseriti nella directory del progetto.

*filename*<br/>
Specifica il nome del file idl creato dal compilatore MIDL. Non viene presupposta alcuna estensione di file; specificare *filename*. idl se si desidera un'estensione. idl.

## <a name="remarks"></a>Commenti

L'opzione/IDLOUT specifica il nome e l'estensione del file IDL.

Il compilatore MIDL viene chiamato dal linker MSVC quando si collegano i progetti con l'attributo [Module](../../windows/attributes/module-cpp.md) .

/IDLOUT specifica anche i nomi file degli altri file di output associati al compilatore MIDL:

- *nomefile*. tlb

- *filename* _P. c

- *filename* _i. c

- *nomefile*. h

*filename* è il parametro passato a/IDLOUT. Se viene specificato [/TLBOUT](tlbout-name-dot-tlb-file.md) , il file con estensione TLB otterrà il nome da/TLBOUT *filename*.

Se non si specifica né/IDLOUT né/TLBOUT, il linker creerà vc70. tlb, vc70. idl, vc70_p. c, vc70_i. c e vc70. h.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Fare clic sulla cartella **Linker**.

1. Fare clic sulla pagina delle proprietà **IDL incorporato** .

1. Modificare la proprietà del **nome del file di base merge IDL** .

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.MergedIDLBaseFileName%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)<br/>
[/IGNOREIDL (non elabora gli attributi in MIDL)](ignoreidl-don-t-process-attributes-into-midl.md)<br/>
[/MIDL (specifica le opzioni della riga di comando MIDL)](midl-specify-midl-command-line-options.md)<br/>
[Compilazione di un programma con attributi](../../windows/attributes/cpp-attributes-com-net.md)

---
title: /NODEFAULTLIB (Ignora librerie)
ms.date: 11/04/2016
f1_keywords:
- VC.Project.VCLinkerTool.OVERWRITEAllDefaultLibraries
- VC.Project.VCLinkerTool.OVERWRITEDefaultLibraryNames
- /nodefaultlib
helpviewer_keywords:
- default libraries, removing
- -NODEFAULTLIB linker option
- libraries, ignore
- NODEFAULTLIB linker option
- /NODEFAULTLIB linker option
- ignore libraries linker option
ms.assetid: 7270b673-6711-468e-97a7-c2925ac2be6e
ms.openlocfilehash: cacc1ef312065da5d6e62ddba1040e87fae9d709
ms.sourcegitcommit: 8105b7003b89b73b4359644ff4281e1595352dda
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/14/2019
ms.locfileid: "57807455"
---
# <a name="nodefaultlib-ignore-libraries"></a>/NODEFAULTLIB (Ignora librerie)

```
/NODEFAULTLIB[:library]
```

## <a name="arguments"></a>Argomenti

*library*<br/>
Una libreria che si vuole che il linker di ignorare durante la risoluzione di riferimenti esterni.

## <a name="remarks"></a>Note

L'opzione /NODEFAULTLIB indica al linker di rimuovere uno o più librerie predefinite dall'elenco di librerie che effettua le ricerche per risolvere i riferimenti esterni.

Per creare un file. obj che contiene riferimenti a raccolte predefinite, usare [/Zl (Omit Default Library Name)](zl-omit-default-library-name.md).

Per impostazione predefinita, /NODEFAULTLIB rimuove tutte le librerie predefinite dall'elenco delle librerie di che viene eseguita la ricerca durante la risoluzione di riferimenti esterni. L'opzione facoltativa *libreria* parametro consente di rimuovere una o più librerie specificate nell'elenco delle librerie di viene eseguita la ricerca durante la risoluzione di riferimenti esterni. Specificare un'opzione /NODEFAULTLIB per ogni raccolta a cui che si desidera escludere.

Il linker risolve i riferimenti a definizioni esterne eseguendo una ricerca innanzitutto nelle librerie che specifica in modo esplicito, verrà visualizzata nelle librerie predefinite specificate con l'opzione di /DEFAULTLIB, quindi le librerie predefinite specificate nei file obj.

/NODEFAULTLIB:*library* esegue l'override [/DEFAULTLIB:](defaultlib-specify-default-library.md)*libreria* quando lo stesso *libreria* nome è specificato in entrambi.

Se si usa /NODEFAULTLIB, ad esempio, per compilare il programma senza la libreria di runtime C, è possibile usare anche [/ENTRY](entry-entry-point-symbol.md) per specificare il punto di ingresso (funzione) nel programma. Per altre informazioni, vedere [Funzionalità libreria CRT](../../c-runtime-library/crt-library-features.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Scegliere il **Linker** cartella.

1. Scegliere il **Input**pagina delle proprietà.

1. Selezionare il **ignorare tutte le librerie predefinite** proprietà o specificare un elenco delle librerie da ignorare nel **Ignora libreria specifica** proprietà. Il **riga di comando** pagina delle proprietà visualizzerà l'effetto delle modifiche apportate a queste proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreDefaultLibraryNames%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreAllDefaultLibraries%2A>.

## <a name="see-also"></a>Vedere anche

[Riferimento del linker MSVC](linking.md)<br/>
[Opzioni del Linker MSVC](linker-options.md)

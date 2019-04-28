---
title: /NODEFAULTLIB (Ignora librerie)
ms.date: 03/26/2019
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
ms.openlocfilehash: 24528eb4c387c4cd0921ab089370d72b076ad640
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62320519"
---
# <a name="nodefaultlib-ignore-libraries"></a>/NODEFAULTLIB (Ignora librerie)

> **/NODEFAULTLIB**[__:__*library*]

## <a name="arguments"></a>Argomenti

*library*<br/>
Una libreria che si vuole che il linker di ignorare durante la risoluzione di riferimenti esterni.

## <a name="remarks"></a>Note

L'opzione /NODEFAULTLIB indica al linker di rimuovere uno o più librerie predefinite dall'elenco di librerie che effettua le ricerche per risolvere i riferimenti esterni.

Per creare un file con estensione obj che non contiene riferimenti a raccolte predefinite, usare [/Zl (Omit Default Library Name)](zl-omit-default-library-name.md).

Per impostazione predefinita, /NODEFAULTLIB rimuove tutte le librerie predefinite dall'elenco delle librerie di che viene eseguita la ricerca durante la risoluzione di riferimenti esterni. L'opzione facoltativa *libreria* parametro consente di rimuovere una libreria specificata dall'elenco di librerie effettua le ricerche per risolvere i riferimenti esterni. Specificare un'opzione /NODEFAULTLIB per ogni raccolta a cui che si desidera escludere.

Il linker risolve i riferimenti a definizioni esterne eseguendo una ricerca innanzitutto nelle librerie che specifica in modo esplicito, verrà visualizzata nelle librerie predefinite specificate con il [/DEFAULTLIB:](defaultlib-specify-default-library.md) opzione e quindi nelle librerie predefinite specificate in obj file.

/NODEFAULTLIB:*library* esegue l'override di /DEFAULTLIB:*libreria* quando lo stesso *libreria* nome è specificato in entrambi.

Se si usa l'opzione /NODEFAULTLIB per compilare il programma senza la libreria di runtime C, è possibile usare anche [/ENTRY](entry-entry-point-symbol.md) per specificare la funzione di punto di ingresso del programma. Per altre informazioni, vedere [Funzionalità libreria CRT](../../c-runtime-library/crt-library-features.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **Input** pagina delle proprietà.

1. Selezionare il **ignorare tutte le librerie predefinite** proprietà. In alternativa, specificare un elenco delimitato da punto e virgola delle librerie da ignorare nel **Ignora librerie predefinite specifiche** proprietà. Il **riga di comando** pagina delle proprietà Mostra l'effetto delle modifiche apportate a queste proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreDefaultLibraryNames%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreAllDefaultLibraries%2A>.

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)

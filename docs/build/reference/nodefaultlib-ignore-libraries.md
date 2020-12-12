---
description: Altre informazioni su:/NODEFAULTLIB (Ignora librerie)
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
ms.openlocfilehash: 1443d7ac1e17d464baa829d8297234ae80f3b998
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97196711"
---
# <a name="nodefaultlib-ignore-libraries"></a>/NODEFAULTLIB (Ignora librerie)

> **/NODEFAULTLIB**[__:__*Library*]

## <a name="arguments"></a>Argomenti

*libreria*<br/>
Raccolta che si desidera che il linker ignori durante la risoluzione dei riferimenti esterni.

## <a name="remarks"></a>Commenti

L'opzione/NODEFAULTLIB indica al linker di rimuovere una o più librerie predefinite dall'elenco di librerie che esegue la ricerca durante la risoluzione dei riferimenti esterni.

Per creare un file con estensione obj che non contiene riferimenti alle librerie predefinite, usare [/Zl (omette il nome della libreria predefinita)](zl-omit-default-library-name.md).

Per impostazione predefinita,/NODEFAULTLIB rimuove tutte le librerie predefinite dall'elenco di librerie che cerca durante la risoluzione dei riferimenti esterni. Il parametro *Library* facoltativo consente di rimuovere una libreria specificata dall'elenco di librerie che cerca durante la risoluzione dei riferimenti esterni. Specificare un'opzione/NODEFAULTLIB per ogni libreria che si desidera escludere.

Il linker risolve i riferimenti a definizioni esterne eseguendo una ricerca prima nelle librerie specificate in modo esplicito, quindi nelle librerie predefinite specificate con l'opzione [/DEFAULTLIB:](defaultlib-specify-default-library.md) e quindi nelle librerie predefinite denominate nei file con estensione obj.

/NODEFAULTLIB:*Library* esegue l'override di/DEFAULTLIB:*Library* quando lo stesso nome di *libreria* viene specificato in entrambi.

Se si usa/NODEFAULTLIB per compilare il programma senza la libreria di runtime del linguaggio C, potrebbe essere necessario usare anche [/entry](entry-entry-point-symbol.md) per specificare la funzione del punto di ingresso nel programma. Per altre informazioni, vedere [Funzionalità libreria CRT](../../c-runtime-library/crt-library-features.md).

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Selezionare la   >  pagina delle proprietà di input del **linker** proprietà di configurazione  >   .

1. Selezionare la proprietà **Ignora tutte le librerie predefinite** . In alternativa, specificare un elenco delimitato da punti e virgola delle librerie che si desidera ignorare nella proprietà **Ignora librerie predefinite specifiche** . La pagina delle proprietà **riga di comando** Mostra l'effetto delle modifiche apportate a queste proprietà.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Controllare <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreDefaultLibraryNames%2A> e <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreAllDefaultLibraries%2A>.

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)

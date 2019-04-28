---
title: /DEFAULTLIB (Specifica la libreria predefinita)
ms.date: 05/29/2018
f1_keywords:
- VC.Project.VCLinkerTool.DefaultLibraries
- /defaultlib
helpviewer_keywords:
- -DEFAULTLIB linker option
- DEFAULTLIB linker option
- /DEFAULTLIB linker option
- libraries, adding to list of
ms.assetid: 6af7ff49-c170-4a13-97e2-2b9ae2de20c9
ms.openlocfilehash: 0b7d4569c7be70bd97094ebbe09a7ae462331983
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62293862"
---
# <a name="defaultlib-specify-default-library"></a>/DEFAULTLIB (Specifica la libreria predefinita)

Specificare una raccolta predefinita per eseguire una ricerca per risolvere riferimenti esterni.

## <a name="syntax"></a>Sintassi

> **/DEFAULTLIB**:_library_

### <a name="arguments"></a>Argomenti

*library*<br/>
Il nome di una libreria per la ricerca durante la risoluzione di riferimenti esterni.

## <a name="remarks"></a>Note

Il **/DEFAULTLIB** opzione consente di aggiungere uno *libreria* all'elenco di librerie che collegamento Cerca la risoluzione dei riferimenti. Una libreria specificata con **/DEFAULTLIB** viene eseguita la ricerca dopo le librerie specificate in modo esplicito nella riga di comando e prima delle librerie predefinite specificate nei file obj.

Quando usata senza argomenti, il [/NODEFAULTLIB (Ignora tutte le librerie predefinite)](nodefaultlib-ignore-libraries.md) opzione esegue l'override di tutti **/DEFAULTLIB**:*libreria* opzioni. Il **/NODEFAULTLIB**:*libreria* opzione sostituzioni **/DEFAULTLIB**:*libreria* quando lo stesso *libreria*nome è specificato in entrambi.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [le proprietà del compilatore e compilazione impostare C++ in Visual Studio](../working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **della riga di comando** pagina delle proprietà.

1. Nelle **opzioni aggiuntive**, immettere una **/DEFAULTLIB**:*libreria* opzione per ogni libreria per la ricerca. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

- [Informazioni di riferimento sul linker MSVC](linking.md)
- [Opzioni del linker MSVC](linker-options.md)

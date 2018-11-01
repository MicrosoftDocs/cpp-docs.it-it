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
ms.openlocfilehash: 408507bf0683ea3434ab138fd5ca3a815a1c6a33
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50494237"
---
# <a name="defaultlib-specify-default-library"></a>/DEFAULTLIB (Specifica la libreria predefinita)

Specificare una raccolta predefinita per eseguire una ricerca per risolvere riferimenti esterni.

## <a name="syntax"></a>Sintassi

> **/DEFAULTLIB**:_libreria_

### <a name="arguments"></a>Argomenti

|Argomento|Descrizione|
|-|-|
*Libreria*|Il nome di una libreria per la ricerca durante la risoluzione di riferimenti esterni.

## <a name="remarks"></a>Note

Il **/DEFAULTLIB** opzione consente di aggiungere uno *libreria* all'elenco di librerie che collegamento Cerca la risoluzione dei riferimenti. Una libreria specificata con **/DEFAULTLIB** viene eseguita la ricerca dopo le librerie specificate in modo esplicito nella riga di comando e prima delle librerie predefinite specificate nei file obj.

Quando usata senza argomenti, il [/NODEFAULTLIB (Ignora tutte le librerie predefinite)](../../build/reference/nodefaultlib-ignore-libraries.md) opzione esegue l'override di tutti **/DEFAULTLIB**:*libreria* opzioni. Il **/NODEFAULTLIB**:*libreria* opzione sostituzioni **/DEFAULTLIB**:*libreria* quando lo stesso *libreria*nome è specificato in entrambi.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Uso delle proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **della riga di comando** pagina delle proprietà.

1. Nelle **opzioni aggiuntive**, immettere una **/DEFAULTLIB**:*libreria* opzione per ogni libreria per la ricerca. Scegli **OK** per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

- [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)
- [Opzioni del linker](../../build/reference/linker-options.md)

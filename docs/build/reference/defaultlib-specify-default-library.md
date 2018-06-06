---
title: /DEFAULTLIB (specifica la libreria predefinita) | Documenti Microsoft
ms.custom: ''
ms.date: 05/29/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.DefaultLibraries
- /defaultlib
dev_langs:
- C++
helpviewer_keywords:
- -DEFAULTLIB linker option
- DEFAULTLIB linker option
- /DEFAULTLIB linker option
- libraries, adding to list of
ms.assetid: 6af7ff49-c170-4a13-97e2-2b9ae2de20c9
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 9afcaa0e229ec34ba91b4d60a7a4fa9acec2d7e3
ms.sourcegitcommit: a4454b91d556a3dc43d8755cdcdeabcc9285a20e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/01/2018
ms.locfileid: "34569781"
---
# <a name="defaultlib-specify-default-library"></a>/DEFAULTLIB (Specifica la libreria predefinita)

Specificare una raccolta predefinita per eseguire una ricerca per risolvere i riferimenti esterni.

## <a name="syntax"></a>Sintassi

> **/DEFAULTLIB**:_libreria_

### <a name="arguments"></a>Argomenti

|Argomento|Descrizione|
|-|-|
*Libreria*|Il nome di una libreria per la ricerca durante la risoluzione di riferimenti esterni.

## <a name="remarks"></a>Note

Il **/DEFAULTLIB** opzione aggiunge uno *libreria* all'elenco di librerie che collegamento Cerca la risoluzione dei riferimenti. Una libreria specificata con **/DEFAULTLIB** ricerca viene eseguita dopo le librerie specificate in modo esplicito nella riga di comando e prima delle librerie predefinite specificate nei file obj.

Quando viene utilizzata senza argomenti, il [/NODEFAULTLIB (Ignora tutte le librerie predefinite)](../../build/reference/nodefaultlib-ignore-libraries.md) opzione esegue l'override di tutti **/DEFAULTLIB**:*libreria* opzioni. Il **/NODEFAULTLIB**:*libreria* opzione sostituzioni **/DEFAULTLIB**:*libreria* quando lo stesso *libreria*nome è specificato in entrambi.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per ulteriori informazioni, vedere [funziona con le proprietà del progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **le proprietà di configurazione** > **Linker** > **riga di comando** pagina delle proprietà.

1. In **opzioni aggiuntive**, immettere un **/DEFAULTLIB**:*libreria* opzione per ogni libreria per la ricerca. Scegliere **OK** per salvare le modifiche.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

- [Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)
- [Opzioni del linker](../../build/reference/linker-options.md)

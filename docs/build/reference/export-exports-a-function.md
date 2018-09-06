---
title: -EXPORT (Esporta una funzione) | Microsoft Docs
ms.custom: ''
ms.date: 09/05/2018
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- VC.Project.VCLinkerTool.ExportFunctions
- /export
dev_langs:
- C++
helpviewer_keywords:
- /EXPORT linker option
- EXPORT linker option
- -EXPORT linker option
ms.assetid: 0920fb44-a472-4091-a8e6-73051f494ca0
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 16ec6be15635ebfc085615015b1221231645970d
ms.sourcegitcommit: d10a2382832373b900b1780e1190ab104175397f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/06/2018
ms.locfileid: "43894794"
---
# <a name="export-exports-a-function"></a>/EXPORT (Esporta una funzione)

Esporta una funzione dal nome o un numero ordinale oppure i dati, dal programma.

## <a name="syntax"></a>Sintassi

> **/ ESPORTAZIONE:**<em>entryname</em>[**,\@**<em>ordinale</em>[**, NONAME**]] [**, dati**]

## <a name="remarks"></a>Note

Con l'opzione /EXPORT, è possibile esportare una funzione dal programma in modo che altre applicazioni possono chiamare la funzione. È anche possibile esportare i dati. Le esportazioni sono in genere definite in una DLL.

Il *entryname* è il nome dell'elemento dati o funzione deve essere utilizzato dal programma chiamante. `ordinal` Specifica un indice nella tabella di esportazione nell'intervallo da 1 a 65.535. Se non si specifica `ordinal`, collegamento assegna uno. Il **NONAME** parola chiave consente di esportare la funzione solo come un numero ordinale, senza un' *entryname*.

Il **dati** parola chiave specifica che l'elemento esportato è un elemento di dati. L'elemento di dati del programma client deve essere dichiarata usando **extern declspec**.

Esistono tre metodi per l'esportazione di una definizione, elencati in ordine di preferenza di utilizzo:

1. [dllexport](../../cpp/dllexport-dllimport.md) nel codice sorgente

2. Un' [esportazioni](../../build/reference/exports.md) istruzione in un file def

3. Una specifica dell'opzione /EXPORT in un comando LINK

Tutti i tre metodi possono essere utilizzati nello stesso programma. Quando LINK compila un programma che contiene esportazioni, crea anche una libreria di importazione, a meno che non viene usato un file. exp nella compilazione.

COLLEGAMENTO Usa decorati form degli identificatori. Il compilatore decora un identificatore quando crea il file con estensione obj. Se *entryname* è specificato per il linker nel relativo non decorato formano (così come appare nel codice sorgente), un tentativo di corrispondere al nome. Se non trova una corrispondenza univoca, collegamento genera un messaggio di errore. Usare la [DUMPBIN](../../build/reference/dumpbin-reference.md) dello strumento per ottenere il [nomi decorati](../../build/reference/decorated-names.md) sotto forma di identificatore quando è necessario specificarlo al linker.

> [!NOTE]
> Non si specifica il formato decorato di C identificatori dichiarati `__cdecl` o `__stdcall`.

### <a name="to-set-this-linker-option-in-the-visual-studio-development-environment"></a>Per impostare questa opzione del linker nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [impostazione delle proprietà dei progetti Visual C++](../../ide/working-with-project-properties.md).

2. Selezionare il **le proprietà di configurazione** > **Linker** > **della riga di comando** pagina delle proprietà.

3. Inserire l'opzione nella **opzioni aggiuntive** casella.

### <a name="to-set-this-linker-option-programmatically"></a>Per impostare l'opzione del linker a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del Linker](../../build/reference/setting-linker-options.md)   
[Opzioni del linker](../../build/reference/linker-options.md)
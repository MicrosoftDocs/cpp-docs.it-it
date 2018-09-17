---
title: -hotpatch (Crea immagine con patch a caldo) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- /hotpatch
- VC.Project.VCCLCompilerTool.CreateHotpatchableImage
dev_langs:
- C++
helpviewer_keywords:
- hot patching
- -hotpatch compiler option [C++]
- /hotpatch compiler option [C++]
- hotpatching
ms.assetid: aad539b6-c053-4c78-8682-853d98327798
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 97e1b6197ea60099457db7788ad7e24b96c9fcb8
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45716976"
---
# <a name="hotpatch-create-hotpatchable-image"></a>/hotpatch (Crea immagine con funzionalità di patch a caldo)

Prepara un'immagine per l'applicazione di una patch a caldo.

## <a name="syntax"></a>Sintassi

```
/hotpatch
```

## <a name="remarks"></a>Note

Quando **/hotpatch** viene usato in una compilazione, il compilatore assicura che la prima istruzione di ogni funzione sia almeno di due byte, che è necessario per l'applicazione di patch a caldo.

Per completare la preparazione di una patch a caldo un'immagine, dopo aver usato **/hotpatch** per compilare, è necessario usare [/FUNCTIONPADMIN (Crea immagine con patch a caldo)](../../build/reference/functionpadmin-create-hotpatchable-image.md) da collegare. Quando si compila e si collega un'immagine con una singola chiamata di, cl.exe **/hotpatch** implica **/functionpadmin**.

Poiché le istruzioni sono sempre due byte o più grandi nell'architettura ARM e poiché x64 la compilazione viene sempre considerata come se **/hotpatch** è stata specificata, non è necessario specificare **/hotpatch** quando si esegue la compilazione di queste destinazioni; Tuttavia, è comunque necessario collegare tramite **/functionpadmin** per creare le immagini con patch a caldo per loro. Il **/hotpatch** la compilazione del compilatore opzione solo influisce su x86.

### <a name="to-set-this-compiler-option-in-the-visual-studio-development-environment"></a>Per impostare l'opzione del compilatore nell'ambiente di sviluppo di Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per informazioni dettagliate, vedere [Utilizzo di proprietà di progetto](../../ide/working-with-project-properties.md).

1. Selezionare il **C/C++** cartella.

1. Selezionare il **riga di comando** pagina delle proprietà.

1. Aggiungere l'opzione del compilatore per il **opzioni aggiuntive** casella.

### <a name="to-set-this-compiler-option-programmatically"></a>Per impostare l'opzione del compilatore a livello di codice

- Vedere <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## <a name="guidance"></a>Materiale sussidiario

Per altre informazioni sulla gestione degli aggiornamenti, vedere "Security Guidance for Update Management" all'indirizzo [ http://www.microsoft.com/technet/security/guidance/PatchManagement.mspx ](http://www.microsoft.com/technet/security/guidance/PatchManagement.mspx).

## <a name="see-also"></a>Vedere anche

[Opzioni del compilatore](../../build/reference/compiler-options.md)<br/>
[Impostazione delle opzioni del compilatore](../../build/reference/setting-compiler-options.md)
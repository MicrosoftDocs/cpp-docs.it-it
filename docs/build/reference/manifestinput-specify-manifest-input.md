---
title: -MANIFESTDEPENDENCY (specifica l'Input del manifesto) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
ms.assetid: a0b0c21e-1f9b-4d8c-bb3f-178f57fa7f1b
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5259df2216a8c844123c308ece7ac6b0b650ab39
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45705158"
---
# <a name="manifestinput-specify-manifest-input"></a>/MANIFESTDEPENDENCY (specifica l'input del manifesto)

Specifica un file di input manifesto da includere nel manifesto incorporato nell'immagine.

## <a name="syntax"></a>Sintassi

```
/MANIFESTINPUT:filename
```

### <a name="parameters"></a>Parametri

*filename*<br/>
Il file manifesto da includere nel manifesto incorporato.

## <a name="remarks"></a>Note

Il **/MANIFESTINPUT** opzione specifica il percorso di file di input da utilizzare per creare il manifesto incorporato in un'immagine eseguibile. Se si dispone di manifesto più file di input, utilizzare l'opzione più volte, una volta per ogni file di input. I file di input manifesto vengono uniti per creare il manifesto incorporato. Questa opzione richiede la **/manifest: incorporare** opzione.

Questa opzione non può essere impostata direttamente in Visual Studio. Usare invece i **file manifesto aggiuntivi** proprietà del progetto per specificare i file manifesto aggiuntivi da includere. Per altre informazioni, vedere [Input e Output, strumento manifesto, proprietà di configurazione \<NomeProgetto > finestra di dialogo Pagine delle proprietà](../../ide/input-and-output-manifest-tool.md).

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
---
title: /MANIFESTDEPENDENCY (specifica l'input del manifesto)
ms.date: 11/04/2016
ms.assetid: a0b0c21e-1f9b-4d8c-bb3f-178f57fa7f1b
ms.openlocfilehash: 30e0d4b71943dec8e0efe9112caf7cdf57f66809
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50442692"
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
---
title: /MANIFESTDEPENDENCY (specifica l'input del manifesto)
ms.date: 07/24/2019
ms.assetid: a0b0c21e-1f9b-4d8c-bb3f-178f57fa7f1b
ms.openlocfilehash: 7b7bd54f98003d9158276fcf75fd61ffb5348585
ms.sourcegitcommit: 720b74dddb1cdf4e570d55103158304ee1df81f8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/29/2019
ms.locfileid: "68606469"
---
# <a name="manifestinput-specify-manifest-input"></a>/MANIFESTDEPENDENCY (specifica l'input del manifesto)

Specifica un file di input manifesto da includere nel manifesto incorporato nell'immagine.

## <a name="syntax"></a>Sintassi

```
/MANIFESTINPUT:filename
```

### <a name="parameters"></a>Parametri

*filename*<br/>
File manifesto da includere nel manifesto incorporato.

## <a name="remarks"></a>Note

L'opzione **/MANIFESTDEPENDENCY** specifica il percorso di un file di input da utilizzare per creare il manifesto incorporato in un'immagine eseguibile. Se si dispone di più file di input manifesto, utilizzare l'opzione più volte, una volta per ogni file di input. I file di input del manifesto vengono uniti per creare il manifesto incorporato. Questa opzione richiede l'opzione **/manifest: embed** .

Questa opzione non può essere impostata direttamente in Visual Studio. Usare invece la proprietà **file manifesto aggiuntivi** del progetto per specificare i file manifesto aggiuntivi da includere. Per altre informazioni, vedere [pagine delle proprietà dello strumento Manifesto](manifest-tool-property-pages.md).

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)

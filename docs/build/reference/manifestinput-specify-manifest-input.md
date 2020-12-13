---
description: Altre informazioni su:/MANIFESTDEPENDENCY (specifica l'input del manifesto)
title: /MANIFESTDEPENDENCY (specifica l'input del manifesto)
ms.date: 07/24/2019
ms.assetid: a0b0c21e-1f9b-4d8c-bb3f-178f57fa7f1b
ms.openlocfilehash: e4c5561779f41074a1c52593a62dd7d32ca32801
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97137930"
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

## <a name="remarks"></a>Commenti

L'opzione **/MANIFESTDEPENDENCY** specifica il percorso di un file di input da utilizzare per creare il manifesto incorporato in un'immagine eseguibile. Se si dispone di più file di input manifesto, utilizzare l'opzione più volte, una volta per ogni file di input. I file di input del manifesto vengono uniti per creare il manifesto incorporato. Questa opzione richiede l'opzione **/manifest: embed** .

Questa opzione non può essere impostata direttamente in Visual Studio. Usare invece la proprietà **file manifesto aggiuntivi** del progetto per specificare i file manifesto aggiuntivi da includere. Per altre informazioni, vedere [pagine delle proprietà dello strumento Manifesto](manifest-tool-property-pages.md).

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)

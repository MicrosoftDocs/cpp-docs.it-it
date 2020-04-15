---
title: /MANIFESTDEPENDENCY (specifica l'input del manifesto)
ms.date: 07/24/2019
ms.assetid: a0b0c21e-1f9b-4d8c-bb3f-178f57fa7f1b
ms.openlocfilehash: d7c8351c915f5666ada9939df686c81c86ab89ba
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81337505"
---
# <a name="manifestinput-specify-manifest-input"></a>/MANIFESTDEPENDENCY (specifica l'input del manifesto)

Specifica un file di input del manifesto da includere nel manifesto incorporato nell'immagine.

## <a name="syntax"></a>Sintassi

```
/MANIFESTINPUT:filename
```

### <a name="parameters"></a>Parametri

*Filename*<br/>
File manifesto da includere nel manifesto incorporato.

## <a name="remarks"></a>Osservazioni

L'opzione **/MANIFESTINPUT** specifica il percorso di un file di input da utilizzare per creare il manifesto incorporato in un'immagine eseguibile. Se si dispone di più file di input del manifesto, utilizzare l'opzione più volte, una volta per ogni file di input. I file di input del manifesto vengono uniti per creare il manifesto incorporato. Questa opzione richiede l'opzione **/MANIFEST:EMBED.**

Questa opzione non può essere impostata direttamente in Visual Studio.This option can't be set directly in Visual Studio. Utilizzare invece la proprietà **File manifesto aggiuntivi** del progetto per specificare file manifesto aggiuntivi da includere. Per ulteriori informazioni, vedere [Pagine delle proprietà degli strumenti Manifesto](manifest-tool-property-pages.md).

## <a name="see-also"></a>Vedere anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)

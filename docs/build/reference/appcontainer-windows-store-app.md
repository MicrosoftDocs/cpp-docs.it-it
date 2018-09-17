---
title: /APPCONTAINER (UWP/Microsoft Store App) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
ms.assetid: 9a432db5-7640-460b-ab18-6f61fa7daf6f
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 6d52148f14c21773a6fe93c3909c91f80c3c3650
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45726570"
---
# <a name="appcontainer-microsoft-store-app"></a>/APPCONTAINER (App di Microsoft Store)

Specifica se il linker viene creata un'immagine eseguibile che deve essere eseguita in un contenitore di app.

## <a name="syntax"></a>Sintassi

```
/APPCONTAINER[:NO]
```

## <a name="remarks"></a>Note

Per impostazione predefinita, /APPCONTAINER è disattivato.

Questa opzione consente di modificare un file eseguibile per indicare se l'app deve essere eseguito nell'ambiente di isolamento dei processi di appcontainer. Specificare /APPCONTAINER per un'app che deve essere eseguito nell'ambiente appcontainer, ad esempio, un'app Universal Windows Platform (UWP) o Windows Phone 8.x. (L'opzione è impostata automaticamente in Visual Studio quando si crea un'app di Windows universale da un modello.) Per un'app desktop, specificare /appcontainer: No oppure omettere semplicemente l'opzione.

L'opzione /APPCONTAINER è stata introdotta in Windows 8.

### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Uso delle proprietà del progetto](../../ide/working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Espandere la **Linker** nodo.

1. Selezionare il **riga di comando** pagina delle proprietà.

1. Nelle **opzioni aggiuntive**, immettere `/APPCONTAINER` o `/APPCONTAINER:NO`.

## <a name="see-also"></a>Vedere anche

[Impostazione delle opzioni del linker](../../build/reference/setting-linker-options.md)<br/>
[Opzioni del linker](../../build/reference/linker-options.md)
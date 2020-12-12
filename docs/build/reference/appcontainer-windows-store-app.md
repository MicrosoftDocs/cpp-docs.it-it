---
description: Altre informazioni su:/APPCONTAINER (app Microsoft Store)
title: /APPCONTAINER (app UWP/Microsoft Store)
ms.date: 11/04/2016
ms.assetid: 9a432db5-7640-460b-ab18-6f61fa7daf6f
ms.openlocfilehash: 4cb78c85aa59ebd7fc0eb82af9497606bc3c431c
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97179577"
---
# <a name="appcontainer-microsoft-store-app"></a>/APPCONTAINER (app Microsoft Store)

Specifica se il linker crea un'immagine eseguibile che deve essere eseguita in un contenitore di app.

## <a name="syntax"></a>Sintassi

```
/APPCONTAINER[:NO]
```

## <a name="remarks"></a>Osservazioni

Per impostazione predefinita,/APPCONTAINER è disattivato.

Questa opzione modifica un eseguibile per indicare se l'app deve essere eseguita nell'ambiente di isolamento del processo appcontainer. Specificare/APPCONTAINER per un'app che deve essere eseguita nell'ambiente appcontainer, ad esempio un'app piattaforma UWP (Universal Windows Platform) (UWP) o Windows Phone 8. x. L'opzione viene impostata automaticamente in Visual Studio quando si crea un'app di Windows universale da un modello. Per un'app desktop, specificare/APPCONTAINER: NO o semplicemente omettere l'opzione.

L'opzione/APPCONTAINER è stata introdotta in Windows 8.

### <a name="to-set-this-linker-option-in-visual-studio"></a>Per impostare questa opzione del linker in Visual Studio

1. Aprire la finestra di dialogo **Pagine delle proprietà** del progetto. Per altre informazioni, vedere [Impostare il compilatore e le proprietà di compilazione](../working-with-project-properties.md).

1. Espandere il nodo **Proprietà di configurazione**.

1. Espandere il nodo **Linker**.

1. Selezionare la pagina delle proprietà **riga di comando** .

1. In **Opzioni aggiuntive** immettere `/APPCONTAINER` o `/APPCONTAINER:NO` .

## <a name="see-also"></a>Vedi anche

[Informazioni di riferimento sul linker MSVC](linking.md)<br/>
[Opzioni del linker MSVC](linker-options.md)

---
title: Creazione di nuove barre degli strumenti (C++)
ms.date: 11/04/2016
f1_keywords:
- vc.editors.toolbar
helpviewer_keywords:
- toolbars [C++], creating
- Toolbar editor [C++], creating new toolbars
- Insert Resource
ms.assetid: 1b28264b-0718-4df8-9f65-979805d2efef
ms.openlocfilehash: 3c36579560c78ff77a624e4827df9d6a9302ae57
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50551307"
---
# <a name="creating-new-toolbars-c"></a>Creazione di nuove barre degli strumenti (C++)

### <a name="to-create-a-new-toolbar"></a>Per creare una nuova barra degli strumenti

1. Nelle **Resource** consente di visualizzare, fare doppio clic sul file RC, quindi scegliere **Aggiungi risorsa** dal menu di scelta rapida. (Se si dispone di una barra degli strumenti esistente nel file RC, è possibile semplicemente fare doppio clic il **sulla barra degli strumenti** cartella e selezionare **Inserisci sulla barra degli strumenti** dal menu di scelta rapida.)

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

2. Nel **Aggiungi risorsa** finestra di dialogo **sulla barra degli strumenti** nel **tipo di risorsa** elenco, quindi fare clic su **New**.

   Se un segno più (**+**) visualizzato accanto al **sulla barra degli strumenti** tipo di risorsa, significa che i modelli della barra degli strumenti sono disponibili. Fare clic sul segno più per espandere l'elenco dei modelli, selezionare un modello e fare clic su **New**.

   \- oppure -

3. [Convertire una bitmap esistente in una barra degli strumenti](../windows/converting-bitmaps-to-toolbars.md).

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

MFC o ATL

## <a name="see-also"></a>Vedere anche

[Editor barra degli strumenti](../windows/toolbar-editor.md)
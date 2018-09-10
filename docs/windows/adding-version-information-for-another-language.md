---
title: Aggiunta di informazioni sulla versione per un altro linguaggio (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.version
dev_langs:
- C++
helpviewer_keywords:
- languages, version information
- New Version Info Block
- blocks, adding
- resources [C++], adding version information
- version information, adding for languages
ms.assetid: 17f6273c-e1cc-441a-a3d8-f564341cbf20
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: bf01f1d4b1c687ed919b94f651ef7ccf4b0bf45d
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44313450"
---
# <a name="adding-version-information-for-another-language-c"></a>Aggiunta di informazioni sulla versione per un altro linguaggio (C++)

### <a name="to-add-version-information-for-another-language-new-info-block"></a>Per aggiungere informazioni sulla versione per un'altra lingua (nuovo blocco di informazioni)

1. Aprire una risorsa di informazioni sulla versione facendo doppio clic in [Visualizzazione risorse](../windows/resource-view-window.md).

   > [!NOTE]
   > Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

2. Fare clic con il pulsante destro del mouse all'interno della tabella di informazioni sulla versione e scegliere **Nuovo blocco informazioni sulla versione** dal menu di scelta rapida.

   Questo comando aggiunge un blocco di informazioni aggiuntive alla risorsa di informazioni sulla versione corrente e apre le proprietà corrispondenti nella [finestra Proprietà](/visualstudio/ide/reference/properties-window).

3. Nella finestra **Proprietà** , scegliere la lingua appropriata e il set di caratteri per il nuovo blocco.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor di informazioni sulla versione](../windows/version-information-editor.md)  
[Informazioni sulla versione (Windows)](https://msdn.microsoft.com/library/windows/desktop/ms646981.aspx)
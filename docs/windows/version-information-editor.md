---
title: Editor di informazioni sulla versione (C++) | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
f1_keywords:
- vc.editors.version.F1
dev_langs:
- C++
helpviewer_keywords:
- Version Information editor [C++], about Version Information editor
- editors, Version Information
- resource editors [C++], Version Information editor
ms.assetid: 772e6f19-f765-4cec-9521-0ad3eeb99f9b
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 1d8a4eb57996bcc2afd9ddc92a9eecf354f88116
ms.sourcegitcommit: f0c90000125a9497bf61e41624de189a043703c0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/10/2018
ms.locfileid: "44313703"
---
# <a name="version-information-editor-c"></a>Editor di informazioni sulla versione (C++)

Le informazioni sulla versione sono costituite dall'identificazione del prodotto e della società, da un numero di versione del prodotto e dalla notifica relativa al copyright e al marchio. Con il **le informazioni sulla versione** editor, si creano e gestiscono questi dati, che viene archiviati nella risorsa di informazioni della versione. La risorsa di informazioni sulla versione non è necessaria per un'applicazione, ma è uno strumento utile per raccogliere le informazioni che identificano l'applicazione. Le informazioni sulla versione vengono usate anche dalle API di installazione.

Una risorsa di informazioni sulla versione include un blocco superiore e uno o più blocchi inferiori: un unico blocco di informazioni fisse nella parte superiore e uno o più blocchi di informazioni sulla versione nella parte inferiore, per altre lingue e/o altri set di caratteri. Il blocco superiore presenta caselle numeriche modificabili ed elenchi a discesa in cui è possibile effettuare una selezione. I blocchi inferiori hanno solo caselle di testo modificabili.

> [!NOTE]
> Lo standard Windows prevede la presenza di una sola risorsa di versione, denominata VS_VERSION_INFO.

Il **le informazioni sulla versione** editor consente di:

- [Modificare una stringa in una risorsa di informazioni sulla versione](../windows/editing-a-string-in-a-version-information-resource.md)

- [Aggiungere informazioni sulla versione per un'altra lingua (nuovo blocco di informazioni sulla versione)](../windows/adding-version-information-for-another-language.md)

- [Eliminare un blocco di informazioni sulla versione](../windows/deleting-a-version-information-block.md)

- [Accedere alle informazioni sulla versione dal programma](../windows/accessing-version-information-from-within-your-program.md)

   > [!NOTE]
   > Quando si usa la **le informazioni sulla versione** editor, in molti casi è possibile fare doppio clic per visualizzare un menu di scelta rapida dei comandi specifici della risorsa. Ad esempio, se si fa clic mentre si punta a una voce di intestazione di blocco, il menu di scelta rapida viene illustrato il **nuovo blocco informazioni sulla versione** e **Elimina blocco informazioni sulla versione** comandi.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedi [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)  
[Menu e altre risorse](https://msdn.microsoft.com/library/windows/desktop/ms632583.aspx)